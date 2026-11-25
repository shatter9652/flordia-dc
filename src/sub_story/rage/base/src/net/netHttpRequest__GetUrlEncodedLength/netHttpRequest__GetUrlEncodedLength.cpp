// Recovered from game_scarlett_master.exe (GTA VI, Xbox Series X, PE32+ x64)
// Address: 140b5d5b0  size: 144 bytes
// Name:    netHttpRequest::GetUrlEncodedLength
// Subsystem: core
// Class:   netHttpRequest
//
// Evidence:
//   GTAVSRC: netHttpRequest::GetUrlEncodedLength  (rage/base/src/net/http.cpp)
//   literal: 0123456789abcdef
//
// Referenced strings (0 in this body, 0 including direct callees):
// Callees: 
//
// Generated decompilation. Formatting follows MiscRef/GTAVSRC conventions;
// identifiers are recovered, not original. See ../../../README.md.

#include "gta6decomp/rage_types.h"
#include "gta6decomp/netHttpRequest.h"


void netHttpRequest__GetUrlEncodedLength
               (longlong param_1,longlong param_2,uint param_3,uint param_4)

{
  undefined1 uVar1;
  int iVar2;
  longlong lVar3;
  uint uVar4;
  ulonglong uVar5;
  undefined *puVar6;
  
  puVar6 = &UNK_14678ed40;
  if ((*(byte *)(param_1 + 6) & 1) != 0) {
    puVar6 = &UNK_146787917;
  }
  if (0xfffffff0 < param_4 - 0x11) {
    iVar2 = 3;
    if ((*(byte *)(param_1 + 5) & 0x7f) == 0) {
      iVar2 = 1000;
    }
    uVar5 = (ulonglong)param_3;
    if (param_4 != 10) {
      iVar2 = 1000;
    }
    do {
      lVar3 = *(longlong *)(param_1 + 8);
      if (lVar3 == param_2) {
        return;
      }
      uVar4 = (uint)uVar5;
      if (iVar2 == 0) {
        *(longlong *)(param_1 + 8) = lVar3 + -1;
        iVar2 = 3;
        *(char *)(lVar3 + -1) = (char)(*(char *)(param_1 + 5) * '\x02') >> 1;
        lVar3 = *(longlong *)(param_1 + 8);
      }
      uVar1 = puVar6[uVar5 % (ulonglong)param_4];
      iVar2 = iVar2 + -1;
      *(longlong *)(param_1 + 8) = lVar3 + -1;
      *(undefined1 *)(lVar3 + -1) = uVar1;
      uVar5 = uVar5 / param_4;
    } while (param_4 <= uVar4);
  }
  return;
}

