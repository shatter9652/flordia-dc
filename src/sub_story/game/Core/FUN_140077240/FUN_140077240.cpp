// Recovered from game_scarlett_master.exe (GTA VI, Xbox Series X, PE32+ x64)
// Address: 140077240  size: 124 bytes
// Name:    FUN_140077240
// Subsystem: core
//
// Referenced strings (0 in this body, 0 including direct callees):
// Callees: FUN_1400772c0
//
// Generated decompilation. Formatting follows MiscRef/GTAVSRC conventions;
// identifiers are recovered, not original. See ../../../README.md.

#include "gta6decomp/rage_types.h"


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_140077240(longlong param_1,int param_2)

{
  uint uVar1;
  uint uVar2;
  longlong lVar3;
  ulonglong uVar4;
  
  if (*(char *)(param_1 + 0x6c) != (char)param_2) {
    FUN_1400772c0();
    uVar1 = *(uint *)(param_1 + 0x80);
    if (uVar1 != 0x1ffff) {
      uVar2 = *(uint *)(_DAT_14ab7f648[5] + (ulonglong)(uVar1 & 0x1ffff) * 4);
      if ((((uVar1 ^ uVar2) < 0x20000) &&
          ((uVar2 & *(uint *)(_DAT_14ab7f648 + 6)) == *(uint *)(_DAT_14ab7f648 + 6))) &&
         (lVar3 = *_DAT_14ab7f648, lVar3 != 0)) {
        uVar4 = (ulonglong)((uVar1 & 0x1ffff) * (int)_DAT_14ab7f648[1]);
        *(uint *)(lVar3 + 0x70 + uVar4) =
             param_2 << 0x1d | *(uint *)(lVar3 + 0x70 + uVar4) & 0xdfffffff;
      }
    }
  }
  return;
}

