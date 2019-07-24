#include "pch.h"
#include "Console.h"


HANDLE hdl = NULL;
#define PUT_DEBUG(x,y,z) do{ if(x) WriteConsoleA(x,y,z,NULL,NULL); }while(0)


// 只开不关
void EnableConsole() {
  HWND hwnd = NULL;
  const auto title = L"不要关闭本窗口！说的你好像真的能关掉一样！";
  AllocConsole();
  const auto out = GetStdHandle(STD_OUTPUT_HANDLE);
  //设置控制台窗口的属性
  SetConsoleTitle(title);
  SetConsoleTextAttribute((HANDLE)out, FOREGROUND_RED | FOREGROUND_GREEN | FOREGROUND_INTENSITY);
  while (NULL == hwnd) hwnd = ::FindWindow(NULL, (LPCTSTR)title);
  //屏蔽掉控制台窗口的关闭按钮，以防窗口被误删除
  auto hmenu = ::GetSystemMenu(hwnd, FALSE);
  DeleteMenu(hmenu, SC_CLOSE, MF_BYCOMMAND);
  hdl = GetStdHandle(STD_OUTPUT_HANDLE/* STD_OUTPUT_HANDLE*/); //这里也可以使用STD_ERROR_HANDLE    TCHAR c[] = {"Hello world!"};WriteConsole(hdlWrite, c, sizeof(c), NULL, NULL);
}


void Write2Con(const std::string&& s) {
  PUT_DEBUG(hdl, s.data(), (DWORD)s.length());
}