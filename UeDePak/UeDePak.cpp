// UeDePak.cpp : 定义 DLL 应用程序的导出函数。
//
#include "pch.h"
#include "UeDePak.h"
#include "detours.h"
#include "Console.h"
#include "Selector.h"
#include "Util.h"
#pragma comment(lib, "detours.lib")

extern ULONG_PTR GetModuleLen(HMODULE hModule);
extern ULONG_PTR FindPattern(ULONG_PTR dwdwAdd, ULONG_PTR dwLen, const BYTE *bMask, const char * szMask);
extern void InitConfig();
extern bool GetConfig(const std::string&& ver, const Config*& cfg);

EXTERN_C_START
PVOID JmpFunc = NULL;
ULONG_PTR OrgDencryptCode = NULL;
EXTERN_C_END

// 用于卸载钩子
PVOID FixFunc = NULL;

VOID passFunc(unsigned char* bkey) {
  static std::string key;
  char binstr[3];
  
  if (!key.empty()) {
    return;
  }

#define GETBYTE(x) (*(BYTE*)(x))
  for (auto i = 0; i < 32; i++) {
    sprintf_s(binstr, "%02X", GETBYTE(bkey + i));
    key += binstr;
  }
#undef GETBYTE

  Write2Con(std::string("[+] -------- key is : 0x") + key + "\r\n");
}

bool setHook() {

  // 这里可以搞个自动获取文件版本信息的东西
  const Config* cfg;
  if (!GetConfig("4.21", cfg)) {
    Write2Con("[-] -------- Unsupported versions!\r\n");
    return false;
  }

  // 函数标识符加不加 & 结果是一个东西
  JmpFunc = &passFunc;
  FixFunc = cfg->fix_jump;

  auto moduleBase = (ULONG_PTR)GetModuleHandle(0);

  // 这个sig是一种很危险的定位方式,例如同一个版本在不同编译条件下可能会得到不同的sig
  // 也许可以换用其它更好的方式
  // 例如复合特征定位并采取多个特征码逐个尝试等方式提高命中率
  OrgDencryptCode = FindPattern(moduleBase, GetModuleLen((HMODULE)moduleBase), (const BYTE*)cfg->pass_sig, cfg->pass_mask);
  
  if (!OrgDencryptCode) {
    Write2Con("[-] -------- Get OrgDencryptCode fail!\r\n");
    return false;
  }
  else {
    char temp[20];
    sprintf_s(temp, "0x%016llX", OrgDencryptCode);
    Write2Con(std::string("[+] -------- OrgDencryptCode Pointer : ") + temp + "\r\n");
  }

  DetourTransactionBegin();
  DetourUpdateThread(GetCurrentThread());

  if (OrgDencryptCode) DetourAttach((PVOID*)&OrgDencryptCode, FixFunc);

  return DetourTransactionCommit() == NO_ERROR;
}


bool dropHook() {
  DetourTransactionBegin();
  DetourUpdateThread(GetCurrentThread());

  if (OrgDencryptCode) DetourDetach((PVOID*)&OrgDencryptCode, FixFunc);

  return DetourTransactionCommit() == NO_ERROR;
}




DWORD WINAPI Do(LPVOID lpThreadParameter) {

  // 原本是打算在这里加个配置文件的
  EnableConsole();
  InitConfig();

  Write2Con("[+] ---- Depak initialization complete----\r\n");
  Write2Con("[+] -------- Start checking signatures\r\n");
  
  if (setHook()) {
    Write2Con("[+] -------- Wait to get AES password\r\n");
  }
  else {
    Write2Con("[+] -------- Failed to get AES password\r\n");
  }

  return 0;
}

void Undo() {
  dropHook();
}