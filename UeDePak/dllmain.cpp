// dllmain.cpp : 定义 DLL 应用程序的入口点。
#include "pch.h"
#include "UeDePak.h"

//
// created by AheadLib
// github:https://github.com/strivexjun/AheadLib-x86-x64
//

#include <windows.h>
#include <Shlwapi.h>

#pragma comment( lib, "Shlwapi.lib")

#pragma comment(linker, "/EXPORT:DllCanUnloadNow=AheadLib_DllCanUnloadNow,@1")
#pragma comment(linker, "/EXPORT:DllGetClassObject=AheadLib_DllGetClassObject,@2")
#pragma comment(linker, "/EXPORT:Private1=AheadLib_Private1,@3")
#pragma comment(linker, "/EXPORT:SvchostPushServiceGlobals=AheadLib_SvchostPushServiceGlobals,@4")
#pragma comment(linker, "/EXPORT:WinHttpAddRequestHeaders=AheadLib_WinHttpAddRequestHeaders,@5")
#pragma comment(linker, "/EXPORT:WinHttpAutoProxySvcMain=AheadLib_WinHttpAutoProxySvcMain,@6")
#pragma comment(linker, "/EXPORT:WinHttpCheckPlatform=AheadLib_WinHttpCheckPlatform,@7")
#pragma comment(linker, "/EXPORT:WinHttpCloseHandle=AheadLib_WinHttpCloseHandle,@8")
#pragma comment(linker, "/EXPORT:WinHttpConnect=AheadLib_WinHttpConnect,@9")
#pragma comment(linker, "/EXPORT:WinHttpConnectionDeletePolicyEntries=AheadLib_WinHttpConnectionDeletePolicyEntries,@10")
#pragma comment(linker, "/EXPORT:WinHttpConnectionDeleteProxyInfo=AheadLib_WinHttpConnectionDeleteProxyInfo,@11")
#pragma comment(linker, "/EXPORT:WinHttpConnectionFreeNameList=AheadLib_WinHttpConnectionFreeNameList,@12")
#pragma comment(linker, "/EXPORT:WinHttpConnectionFreeProxyInfo=AheadLib_WinHttpConnectionFreeProxyInfo,@13")
#pragma comment(linker, "/EXPORT:WinHttpConnectionFreeProxyList=AheadLib_WinHttpConnectionFreeProxyList,@14")
#pragma comment(linker, "/EXPORT:WinHttpConnectionGetNameList=AheadLib_WinHttpConnectionGetNameList,@15")
#pragma comment(linker, "/EXPORT:WinHttpConnectionGetProxyInfo=AheadLib_WinHttpConnectionGetProxyInfo,@16")
#pragma comment(linker, "/EXPORT:WinHttpConnectionGetProxyList=AheadLib_WinHttpConnectionGetProxyList,@17")
#pragma comment(linker, "/EXPORT:WinHttpConnectionSetPolicyEntries=AheadLib_WinHttpConnectionSetPolicyEntries,@18")
#pragma comment(linker, "/EXPORT:WinHttpConnectionSetProxyInfo=AheadLib_WinHttpConnectionSetProxyInfo,@19")
#pragma comment(linker, "/EXPORT:WinHttpConnectionUpdateIfIndexTable=AheadLib_WinHttpConnectionUpdateIfIndexTable,@20")
#pragma comment(linker, "/EXPORT:WinHttpCrackUrl=AheadLib_WinHttpCrackUrl,@21")
#pragma comment(linker, "/EXPORT:WinHttpCreateProxyResolver=AheadLib_WinHttpCreateProxyResolver,@22")
#pragma comment(linker, "/EXPORT:WinHttpCreateUrl=AheadLib_WinHttpCreateUrl,@23")
#pragma comment(linker, "/EXPORT:WinHttpDetectAutoProxyConfigUrl=AheadLib_WinHttpDetectAutoProxyConfigUrl,@24")
#pragma comment(linker, "/EXPORT:WinHttpFreeProxyResult=AheadLib_WinHttpFreeProxyResult,@25")
#pragma comment(linker, "/EXPORT:WinHttpFreeProxyResultEx=AheadLib_WinHttpFreeProxyResultEx,@26")
#pragma comment(linker, "/EXPORT:WinHttpFreeProxySettings=AheadLib_WinHttpFreeProxySettings,@27")
#pragma comment(linker, "/EXPORT:WinHttpGetDefaultProxyConfiguration=AheadLib_WinHttpGetDefaultProxyConfiguration,@28")
#pragma comment(linker, "/EXPORT:WinHttpGetIEProxyConfigForCurrentUser=AheadLib_WinHttpGetIEProxyConfigForCurrentUser,@29")
#pragma comment(linker, "/EXPORT:WinHttpGetProxyForUrl=AheadLib_WinHttpGetProxyForUrl,@30")
#pragma comment(linker, "/EXPORT:WinHttpGetProxyForUrlEx=AheadLib_WinHttpGetProxyForUrlEx,@31")
#pragma comment(linker, "/EXPORT:WinHttpGetProxyForUrlEx2=AheadLib_WinHttpGetProxyForUrlEx2,@32")
#pragma comment(linker, "/EXPORT:WinHttpGetProxyForUrlHvsi=AheadLib_WinHttpGetProxyForUrlHvsi,@33")
#pragma comment(linker, "/EXPORT:WinHttpGetProxyResult=AheadLib_WinHttpGetProxyResult,@34")
#pragma comment(linker, "/EXPORT:WinHttpGetProxyResultEx=AheadLib_WinHttpGetProxyResultEx,@35")
#pragma comment(linker, "/EXPORT:WinHttpGetProxySettingsVersion=AheadLib_WinHttpGetProxySettingsVersion,@36")
#pragma comment(linker, "/EXPORT:WinHttpGetTunnelSocket=AheadLib_WinHttpGetTunnelSocket,@37")
#pragma comment(linker, "/EXPORT:WinHttpOpen=AheadLib_WinHttpOpen,@38")
#pragma comment(linker, "/EXPORT:WinHttpOpenRequest=AheadLib_WinHttpOpenRequest,@39")
#pragma comment(linker, "/EXPORT:WinHttpProbeConnectivity=AheadLib_WinHttpProbeConnectivity,@40")
#pragma comment(linker, "/EXPORT:WinHttpQueryAuthSchemes=AheadLib_WinHttpQueryAuthSchemes,@41")
#pragma comment(linker, "/EXPORT:WinHttpQueryDataAvailable=AheadLib_WinHttpQueryDataAvailable,@42")
#pragma comment(linker, "/EXPORT:WinHttpQueryHeaders=AheadLib_WinHttpQueryHeaders,@43")
#pragma comment(linker, "/EXPORT:WinHttpQueryOption=AheadLib_WinHttpQueryOption,@44")
#pragma comment(linker, "/EXPORT:WinHttpReadData=AheadLib_WinHttpReadData,@45")
#pragma comment(linker, "/EXPORT:WinHttpReadProxySettings=AheadLib_WinHttpReadProxySettings,@46")
#pragma comment(linker, "/EXPORT:WinHttpReadProxySettingsHvsi=AheadLib_WinHttpReadProxySettingsHvsi,@47")
#pragma comment(linker, "/EXPORT:WinHttpReceiveResponse=AheadLib_WinHttpReceiveResponse,@48")
#pragma comment(linker, "/EXPORT:WinHttpResetAutoProxy=AheadLib_WinHttpResetAutoProxy,@49")
#pragma comment(linker, "/EXPORT:WinHttpSaveProxyCredentials=AheadLib_WinHttpSaveProxyCredentials,@50")
#pragma comment(linker, "/EXPORT:WinHttpSendRequest=AheadLib_WinHttpSendRequest,@51")
#pragma comment(linker, "/EXPORT:WinHttpSetCredentials=AheadLib_WinHttpSetCredentials,@52")
#pragma comment(linker, "/EXPORT:WinHttpSetDefaultProxyConfiguration=AheadLib_WinHttpSetDefaultProxyConfiguration,@53")
#pragma comment(linker, "/EXPORT:WinHttpSetOption=AheadLib_WinHttpSetOption,@54")
#pragma comment(linker, "/EXPORT:WinHttpSetStatusCallback=AheadLib_WinHttpSetStatusCallback,@55")
#pragma comment(linker, "/EXPORT:WinHttpSetTimeouts=AheadLib_WinHttpSetTimeouts,@56")
#pragma comment(linker, "/EXPORT:WinHttpTimeFromSystemTime=AheadLib_WinHttpTimeFromSystemTime,@57")
#pragma comment(linker, "/EXPORT:WinHttpTimeToSystemTime=AheadLib_WinHttpTimeToSystemTime,@58")
#pragma comment(linker, "/EXPORT:WinHttpWebSocketClose=AheadLib_WinHttpWebSocketClose,@59")
#pragma comment(linker, "/EXPORT:WinHttpWebSocketCompleteUpgrade=AheadLib_WinHttpWebSocketCompleteUpgrade,@60")
#pragma comment(linker, "/EXPORT:WinHttpWebSocketQueryCloseStatus=AheadLib_WinHttpWebSocketQueryCloseStatus,@61")
#pragma comment(linker, "/EXPORT:WinHttpWebSocketReceive=AheadLib_WinHttpWebSocketReceive,@62")
#pragma comment(linker, "/EXPORT:WinHttpWebSocketSend=AheadLib_WinHttpWebSocketSend,@63")
#pragma comment(linker, "/EXPORT:WinHttpWebSocketShutdown=AheadLib_WinHttpWebSocketShutdown,@64")
#pragma comment(linker, "/EXPORT:WinHttpWriteData=AheadLib_WinHttpWriteData,@65")
#pragma comment(linker, "/EXPORT:WinHttpWriteProxySettings=AheadLib_WinHttpWriteProxySettings,@66")


EXTERN_C_START
PVOID pfnAheadLib_DllCanUnloadNow;
PVOID pfnAheadLib_DllGetClassObject;
PVOID pfnAheadLib_Private1;
PVOID pfnAheadLib_SvchostPushServiceGlobals;
PVOID pfnAheadLib_WinHttpAddRequestHeaders;
PVOID pfnAheadLib_WinHttpAutoProxySvcMain;
PVOID pfnAheadLib_WinHttpCheckPlatform;
PVOID pfnAheadLib_WinHttpCloseHandle;
PVOID pfnAheadLib_WinHttpConnect;
PVOID pfnAheadLib_WinHttpConnectionDeletePolicyEntries;
PVOID pfnAheadLib_WinHttpConnectionDeleteProxyInfo;
PVOID pfnAheadLib_WinHttpConnectionFreeNameList;
PVOID pfnAheadLib_WinHttpConnectionFreeProxyInfo;
PVOID pfnAheadLib_WinHttpConnectionFreeProxyList;
PVOID pfnAheadLib_WinHttpConnectionGetNameList;
PVOID pfnAheadLib_WinHttpConnectionGetProxyInfo;
PVOID pfnAheadLib_WinHttpConnectionGetProxyList;
PVOID pfnAheadLib_WinHttpConnectionSetPolicyEntries;
PVOID pfnAheadLib_WinHttpConnectionSetProxyInfo;
PVOID pfnAheadLib_WinHttpConnectionUpdateIfIndexTable;
PVOID pfnAheadLib_WinHttpCrackUrl;
PVOID pfnAheadLib_WinHttpCreateProxyResolver;
PVOID pfnAheadLib_WinHttpCreateUrl;
PVOID pfnAheadLib_WinHttpDetectAutoProxyConfigUrl;
PVOID pfnAheadLib_WinHttpFreeProxyResult;
PVOID pfnAheadLib_WinHttpFreeProxyResultEx;
PVOID pfnAheadLib_WinHttpFreeProxySettings;
PVOID pfnAheadLib_WinHttpGetDefaultProxyConfiguration;
PVOID pfnAheadLib_WinHttpGetIEProxyConfigForCurrentUser;
PVOID pfnAheadLib_WinHttpGetProxyForUrl;
PVOID pfnAheadLib_WinHttpGetProxyForUrlEx;
PVOID pfnAheadLib_WinHttpGetProxyForUrlEx2;
PVOID pfnAheadLib_WinHttpGetProxyForUrlHvsi;
PVOID pfnAheadLib_WinHttpGetProxyResult;
PVOID pfnAheadLib_WinHttpGetProxyResultEx;
PVOID pfnAheadLib_WinHttpGetProxySettingsVersion;
PVOID pfnAheadLib_WinHttpGetTunnelSocket;
PVOID pfnAheadLib_WinHttpOpen;
PVOID pfnAheadLib_WinHttpOpenRequest;
PVOID pfnAheadLib_WinHttpProbeConnectivity;
PVOID pfnAheadLib_WinHttpQueryAuthSchemes;
PVOID pfnAheadLib_WinHttpQueryDataAvailable;
PVOID pfnAheadLib_WinHttpQueryHeaders;
PVOID pfnAheadLib_WinHttpQueryOption;
PVOID pfnAheadLib_WinHttpReadData;
PVOID pfnAheadLib_WinHttpReadProxySettings;
PVOID pfnAheadLib_WinHttpReadProxySettingsHvsi;
PVOID pfnAheadLib_WinHttpReceiveResponse;
PVOID pfnAheadLib_WinHttpResetAutoProxy;
PVOID pfnAheadLib_WinHttpSaveProxyCredentials;
PVOID pfnAheadLib_WinHttpSendRequest;
PVOID pfnAheadLib_WinHttpSetCredentials;
PVOID pfnAheadLib_WinHttpSetDefaultProxyConfiguration;
PVOID pfnAheadLib_WinHttpSetOption;
PVOID pfnAheadLib_WinHttpSetStatusCallback;
PVOID pfnAheadLib_WinHttpSetTimeouts;
PVOID pfnAheadLib_WinHttpTimeFromSystemTime;
PVOID pfnAheadLib_WinHttpTimeToSystemTime;
PVOID pfnAheadLib_WinHttpWebSocketClose;
PVOID pfnAheadLib_WinHttpWebSocketCompleteUpgrade;
PVOID pfnAheadLib_WinHttpWebSocketQueryCloseStatus;
PVOID pfnAheadLib_WinHttpWebSocketReceive;
PVOID pfnAheadLib_WinHttpWebSocketSend;
PVOID pfnAheadLib_WinHttpWebSocketShutdown;
PVOID pfnAheadLib_WinHttpWriteData;
PVOID pfnAheadLib_WinHttpWriteProxySettings;
EXTERN_C_END


static
HMODULE g_OldModule = NULL;

VOID WINAPI Free()
{
  if (g_OldModule)
  {
    FreeLibrary(g_OldModule);
  }
}


BOOL WINAPI Load()
{
  TCHAR tzPath[MAX_PATH];
  TCHAR tzTemp[MAX_PATH * 2];

  //
  // 这里是否从系统目录或当前目录加载原始DLL
  //
  GetSystemDirectory(tzPath, MAX_PATH);
  lstrcat(tzPath, TEXT("\\winhttp.dll"));

  g_OldModule = LoadLibrary(tzPath);
  if (g_OldModule == NULL)
  {
    wsprintf(tzTemp, TEXT("无法找到模块 %s,程序无法正常运行"), tzPath);
    MessageBox(NULL, tzTemp, TEXT("AheadLib"), MB_ICONSTOP);
  }

  return (g_OldModule != NULL);

}


FARPROC WINAPI GetAddress(PCSTR pszProcName)
{
  FARPROC fpAddress;
  CHAR szProcName[64];
  TCHAR tzTemp[MAX_PATH];

  fpAddress = GetProcAddress(g_OldModule, pszProcName);
  if (fpAddress == NULL)
  {
    if (HIWORD(pszProcName) == 0)
    {
      wsprintfA(szProcName, "#%d", pszProcName);
      pszProcName = szProcName;
    }

    wsprintf(tzTemp, TEXT("无法找到函数 %hs,程序无法正常运行"), pszProcName);
    MessageBox(NULL, tzTemp, TEXT("AheadLib"), MB_ICONSTOP);
    ExitProcess(-2);
  }
  return fpAddress;
}

BOOL WINAPI Init()
{
  pfnAheadLib_DllCanUnloadNow = GetAddress("DllCanUnloadNow");
  pfnAheadLib_DllGetClassObject = GetAddress("DllGetClassObject");
  pfnAheadLib_Private1 = GetAddress("Private1");
  pfnAheadLib_SvchostPushServiceGlobals = GetAddress("SvchostPushServiceGlobals");
  pfnAheadLib_WinHttpAddRequestHeaders = GetAddress("WinHttpAddRequestHeaders");
  pfnAheadLib_WinHttpAutoProxySvcMain = GetAddress("WinHttpAutoProxySvcMain");
  pfnAheadLib_WinHttpCheckPlatform = GetAddress("WinHttpCheckPlatform");
  pfnAheadLib_WinHttpCloseHandle = GetAddress("WinHttpCloseHandle");
  pfnAheadLib_WinHttpConnect = GetAddress("WinHttpConnect");
  pfnAheadLib_WinHttpConnectionDeletePolicyEntries = GetAddress("WinHttpConnectionDeletePolicyEntries");
  pfnAheadLib_WinHttpConnectionDeleteProxyInfo = GetAddress("WinHttpConnectionDeleteProxyInfo");
  pfnAheadLib_WinHttpConnectionFreeNameList = GetAddress("WinHttpConnectionFreeNameList");
  pfnAheadLib_WinHttpConnectionFreeProxyInfo = GetAddress("WinHttpConnectionFreeProxyInfo");
  pfnAheadLib_WinHttpConnectionFreeProxyList = GetAddress("WinHttpConnectionFreeProxyList");
  pfnAheadLib_WinHttpConnectionGetNameList = GetAddress("WinHttpConnectionGetNameList");
  pfnAheadLib_WinHttpConnectionGetProxyInfo = GetAddress("WinHttpConnectionGetProxyInfo");
  pfnAheadLib_WinHttpConnectionGetProxyList = GetAddress("WinHttpConnectionGetProxyList");
  pfnAheadLib_WinHttpConnectionSetPolicyEntries = GetAddress("WinHttpConnectionSetPolicyEntries");
  pfnAheadLib_WinHttpConnectionSetProxyInfo = GetAddress("WinHttpConnectionSetProxyInfo");
  pfnAheadLib_WinHttpConnectionUpdateIfIndexTable = GetAddress("WinHttpConnectionUpdateIfIndexTable");
  pfnAheadLib_WinHttpCrackUrl = GetAddress("WinHttpCrackUrl");
  pfnAheadLib_WinHttpCreateProxyResolver = GetAddress("WinHttpCreateProxyResolver");
  pfnAheadLib_WinHttpCreateUrl = GetAddress("WinHttpCreateUrl");
  pfnAheadLib_WinHttpDetectAutoProxyConfigUrl = GetAddress("WinHttpDetectAutoProxyConfigUrl");
  pfnAheadLib_WinHttpFreeProxyResult = GetAddress("WinHttpFreeProxyResult");
  pfnAheadLib_WinHttpFreeProxyResultEx = GetAddress("WinHttpFreeProxyResultEx");
  pfnAheadLib_WinHttpFreeProxySettings = GetAddress("WinHttpFreeProxySettings");
  pfnAheadLib_WinHttpGetDefaultProxyConfiguration = GetAddress("WinHttpGetDefaultProxyConfiguration");
  pfnAheadLib_WinHttpGetIEProxyConfigForCurrentUser = GetAddress("WinHttpGetIEProxyConfigForCurrentUser");
  pfnAheadLib_WinHttpGetProxyForUrl = GetAddress("WinHttpGetProxyForUrl");
  pfnAheadLib_WinHttpGetProxyForUrlEx = GetAddress("WinHttpGetProxyForUrlEx");
  pfnAheadLib_WinHttpGetProxyForUrlEx2 = GetAddress("WinHttpGetProxyForUrlEx2");
  pfnAheadLib_WinHttpGetProxyForUrlHvsi = GetAddress("WinHttpGetProxyForUrlHvsi");
  pfnAheadLib_WinHttpGetProxyResult = GetAddress("WinHttpGetProxyResult");
  pfnAheadLib_WinHttpGetProxyResultEx = GetAddress("WinHttpGetProxyResultEx");
  pfnAheadLib_WinHttpGetProxySettingsVersion = GetAddress("WinHttpGetProxySettingsVersion");
  pfnAheadLib_WinHttpGetTunnelSocket = GetAddress("WinHttpGetTunnelSocket");
  pfnAheadLib_WinHttpOpen = GetAddress("WinHttpOpen");
  pfnAheadLib_WinHttpOpenRequest = GetAddress("WinHttpOpenRequest");
  pfnAheadLib_WinHttpProbeConnectivity = GetAddress("WinHttpProbeConnectivity");
  pfnAheadLib_WinHttpQueryAuthSchemes = GetAddress("WinHttpQueryAuthSchemes");
  pfnAheadLib_WinHttpQueryDataAvailable = GetAddress("WinHttpQueryDataAvailable");
  pfnAheadLib_WinHttpQueryHeaders = GetAddress("WinHttpQueryHeaders");
  pfnAheadLib_WinHttpQueryOption = GetAddress("WinHttpQueryOption");
  pfnAheadLib_WinHttpReadData = GetAddress("WinHttpReadData");
  pfnAheadLib_WinHttpReadProxySettings = GetAddress("WinHttpReadProxySettings");
  pfnAheadLib_WinHttpReadProxySettingsHvsi = GetAddress("WinHttpReadProxySettingsHvsi");
  pfnAheadLib_WinHttpReceiveResponse = GetAddress("WinHttpReceiveResponse");
  pfnAheadLib_WinHttpResetAutoProxy = GetAddress("WinHttpResetAutoProxy");
  pfnAheadLib_WinHttpSaveProxyCredentials = GetAddress("WinHttpSaveProxyCredentials");
  pfnAheadLib_WinHttpSendRequest = GetAddress("WinHttpSendRequest");
  pfnAheadLib_WinHttpSetCredentials = GetAddress("WinHttpSetCredentials");
  pfnAheadLib_WinHttpSetDefaultProxyConfiguration = GetAddress("WinHttpSetDefaultProxyConfiguration");
  pfnAheadLib_WinHttpSetOption = GetAddress("WinHttpSetOption");
  pfnAheadLib_WinHttpSetStatusCallback = GetAddress("WinHttpSetStatusCallback");
  pfnAheadLib_WinHttpSetTimeouts = GetAddress("WinHttpSetTimeouts");
  pfnAheadLib_WinHttpTimeFromSystemTime = GetAddress("WinHttpTimeFromSystemTime");
  pfnAheadLib_WinHttpTimeToSystemTime = GetAddress("WinHttpTimeToSystemTime");
  pfnAheadLib_WinHttpWebSocketClose = GetAddress("WinHttpWebSocketClose");
  pfnAheadLib_WinHttpWebSocketCompleteUpgrade = GetAddress("WinHttpWebSocketCompleteUpgrade");
  pfnAheadLib_WinHttpWebSocketQueryCloseStatus = GetAddress("WinHttpWebSocketQueryCloseStatus");
  pfnAheadLib_WinHttpWebSocketReceive = GetAddress("WinHttpWebSocketReceive");
  pfnAheadLib_WinHttpWebSocketSend = GetAddress("WinHttpWebSocketSend");
  pfnAheadLib_WinHttpWebSocketShutdown = GetAddress("WinHttpWebSocketShutdown");
  pfnAheadLib_WinHttpWriteData = GetAddress("WinHttpWriteData");
  pfnAheadLib_WinHttpWriteProxySettings = GetAddress("WinHttpWriteProxySettings");
  return TRUE;
}

//DWORD WINAPI ThreadProc(LPVOID lpThreadParameter)
//{
//  HANDLE hProcess;
//
//  PVOID addr1 = reinterpret_cast<PVOID>(0x00401000);
//  BYTE data1[] = { 0x90, 0x90, 0x90, 0x90 };
//
//  //
//  // 绕过VMP3.x 的内存保护
//  //
//  hProcess = OpenProcess(PROCESS_VM_OPERATION | PROCESS_VM_READ | PROCESS_VM_WRITE, FALSE, GetCurrentProcessId());
//  if (hProcess)
//  {
//    WriteProcessMemory(hProcess, addr1, data1, sizeof(data1), NULL);
//
//    CloseHandle(hProcess);
//  }
//  return 0;
//}


BOOL APIENTRY DllMain(HMODULE hModule, DWORD dwReason, PVOID pvReserved)
{
  if (dwReason == DLL_PROCESS_ATTACH)
  {
    DisableThreadLibraryCalls(hModule);

    if (Load() && Init()) {
      extern DWORD WINAPI Do(LPVOID lpThreadParameter);
 
      CloseHandle(CreateThread(NULL, NULL, Do, NULL, NULL, NULL));


      //TCHAR szAppName[MAX_PATH] = TEXT("App.exe");
      //TCHAR szCurName[MAX_PATH];

      //GetModuleFileName(NULL, szCurName, MAX_PATH);
      //PathStripPath(szCurName);

      ////是否判断宿主进程名
      //if (StrCmpI(szAppName, szAppName) == 0)
      //{
      //  //启动补丁线程或者其他操作
      //  HANDLE hThread = CreateThread(NULL, NULL, ThreadProc, NULL, NULL, NULL);
      //  if (hThread)
      //  {
      //    CloseHandle(hThread);
      //  }
      //}
    }
  }
  else if (dwReason == DLL_PROCESS_DETACH)
  {
    //// 有崩溃风险 不建议启用
    //extern void Undo();
    //Undo();

    Free();
  }

  return TRUE;
}