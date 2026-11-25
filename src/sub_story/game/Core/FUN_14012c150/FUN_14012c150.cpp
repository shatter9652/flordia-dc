// Recovered from game_scarlett_master.exe (GTA VI, Xbox Series X, PE32+ x64)
// Address: 14012c150  size: 149 bytes
// Name:    FUN_14012c150
// Subsystem: core
//
// Referenced strings (0 in this body, 0 including direct callees):
// Callees: FUN_1413ab740
//
// Generated decompilation. Formatting follows MiscRef/GTAVSRC conventions;
// identifiers are recovered, not original. See ../../../README.md.

#include "gta6decomp/rage_types.h"


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined8 FUN_14012c150(undefined8 param_1,uint param_2)

{
  longlong lVar1;
  longlong lVar2;
  char cVar3;
  ulonglong uVar4;
  
  uVar4 = (ulonglong)((param_2 & 0xffff) << 4);
  if ((((*(short *)(*(longlong *)(_DAT_14abbf348 + 0x28) + 8 + uVar4) == (short)(param_2 >> 0x10))
       && (lVar1 = *(longlong *)(*(longlong *)(_DAT_14abbf348 + 0x28) + uVar4), lVar1 != 0)) &&
      ((*(byte *)(lVar1 + 0x154) & 1) != 0)) &&
     (((lVar2 = *(longlong *)(lVar1 + 0x48), lVar2 != 0 &&
       ((0x1cU >> (*(uint *)(lVar2 + 0x30) & 0x1f) & 1) != 0)) &&
      ((cVar3 = FUN_1413ab740(lVar2,lVar1,_DAT_146159c64,_DAT_14615a7f8,0x3f000000,0,0x41200000,
                              0x7f7fffff), cVar3 != '\0' || (*(char *)(lVar2 + 0x30) == '\x03'))))))
  {
    return 0;
  }
  return 1;
}

