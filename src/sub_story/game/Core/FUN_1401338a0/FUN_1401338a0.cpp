// Recovered from game_scarlett_master.exe (GTA VI, Xbox Series X, PE32+ x64)
// Address: 1401338a0  size: 108 bytes
// Name:    FUN_1401338a0
// Subsystem: core
//
// Referenced strings (0 in this body, 0 including direct callees):
// Callees: FUN_144f94120
//
// Generated decompilation. Formatting follows MiscRef/GTAVSRC conventions;
// identifiers are recovered, not original. See ../../../README.md.

#include "gta6decomp/rage_types.h"


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

longlong FUN_1401338a0(void)

{
  longlong lVar1;
  longlong lVar2;
  uint uVar3;
  ulonglong uVar4;
  
  lVar2 = FUN_144f94120();
  if (((lVar2 != 0) && (uVar3 = *(uint *)((longlong)_DAT_147c2ed68 + 0xc), uVar3 != 0)) &&
     (lVar1 = *_DAT_147c2ed68, lVar1 != 0)) {
    do {
      uVar3 = uVar3 - 1;
      if (((~*(uint *)(_DAT_147c2ed68[5] + (ulonglong)(uVar3 & 0xffffff) * 4) &
           *(uint *)(_DAT_147c2ed68 + 6)) == 0) &&
         (uVar4 = (ulonglong)((uVar3 & 0xffffff) * (int)_DAT_147c2ed68[1]),
         *(longlong *)(lVar1 + 0x120 + uVar4) == lVar2)) {
        return lVar1 + uVar4;
      }
    } while (uVar3 != 0);
  }
  return 0;
}

