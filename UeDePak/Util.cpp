#include "pch.h"
#include <stdio.h>

ULONG_PTR GetModuleLen(HMODULE hModule)
{
  PBYTE pImage = (PBYTE)hModule;
  PIMAGE_DOS_HEADER pImageDosHeader;
  PIMAGE_NT_HEADERS pImageNtHeader;
  pImageDosHeader = (PIMAGE_DOS_HEADER)pImage;
  if (pImageDosHeader->e_magic != IMAGE_DOS_SIGNATURE) return 0;

  pImageNtHeader = (PIMAGE_NT_HEADERS)&pImage[pImageDosHeader->e_lfanew];
  return pImageNtHeader->Signature != IMAGE_NT_SIGNATURE ? 0 : pImageNtHeader->OptionalHeader.SizeOfImage;
}

BOOL bCompare(const BYTE* pData, const BYTE* bMask, const char* szMask)
{
  for (; *szMask; ++szMask, ++pData, ++bMask)
    if (*szMask == 'x' && *pData != *bMask)   return 0;
  return (*szMask) == NULL;
}

ULONG_PTR FindPattern(ULONG_PTR dwdwAdd, ULONG_PTR dwLen, const BYTE *bMask, const char * szMask) //´Ë´¦ÊÇ
{
  for (ULONG_PTR i = 0; i < dwLen; i++)
    if (bCompare((BYTE*)(dwdwAdd + i), bMask, szMask))  return (ULONG_PTR)(dwdwAdd + i);
  return 0;
}

