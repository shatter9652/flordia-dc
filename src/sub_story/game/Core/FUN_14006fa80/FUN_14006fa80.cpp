// Recovered from game_scarlett_master.exe (GTA VI, Xbox Series X, PE32+ x64)
// Address: 14006fa80  size: 121 bytes
// Name:    FUN_14006fa80
// Subsystem: core
//
// Referenced strings (0 in this body, 0 including direct callees):
// Callees: 
//
// Generated decompilation. Formatting follows MiscRef/GTAVSRC conventions;
// identifiers are recovered, not original. See ../../../README.md.

#include "gta6decomp/rage_types.h"


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_14006fa80(void)

{
  longlong lVar1;
  char cVar2;
  ulonglong uVar3;
  longlong unaff_GS_OFFSET;
  
  if (*(char *)(*(longlong *)(*(longlong *)(unaff_GS_OFFSET + 0x58) + (ulonglong)__tls_index * 8) +
               8) == '\0') {
    func_0x0001455db994();
  }
  cVar2 = DAT_146ba7c44;
  lVar1 = *(longlong *)(**(longlong **)(unaff_GS_OFFSET + 0x58) + 0x12a8);
  if (*(char *)(lVar1 + 0x1236c) != DAT_146ba7c44) {
    *(char *)(lVar1 + 0x1236c) = DAT_146ba7c44;
    if (*(char *)(lVar1 + 0x123ec) == cVar2) {
      uVar3 = *(ulonglong *)(lVar1 + 0x12520) & 0xfffffffffff7ffff;
    }
    else {
      uVar3 = *(ulonglong *)(lVar1 + 0x12520) | 0x80000;
    }
    *(ulonglong *)(lVar1 + 0x12520) = uVar3;
  }
  return;
}

