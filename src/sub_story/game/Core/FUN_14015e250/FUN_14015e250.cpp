// Recovered from game_scarlett_master.exe (GTA VI, Xbox Series X, PE32+ x64)
// Address: 14015e250  size: 120 bytes
// Name:    FUN_14015e250
// Subsystem: core
//
// Referenced strings (0 in this body, 0 including direct callees):
// Callees: 
//
// Generated decompilation. Formatting follows MiscRef/GTAVSRC conventions;
// identifiers are recovered, not original. See ../../../README.md.

#include "gta6decomp/rage_types.h"


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_14015e250(longlong param_1)

{
  uint uVar1;
  uint uVar2;
  
  uVar1 = *(uint *)(param_1 + 0x158);
  if (uVar1 != 0x1ffff) {
    uVar2 = *(uint *)(_DAT_14a9b3f48[5] + (ulonglong)(uVar1 & 0x1ffff) * 4);
    if ((((uVar1 ^ uVar2) < 0x20000) &&
        ((uVar2 & *(uint *)(_DAT_14a9b3f48 + 6)) == *(uint *)(_DAT_14a9b3f48 + 6))) &&
       (*_DAT_14a9b3f48 != 0)) {
      func_0x0001412e5b40(_DAT_14a9b3e18,
                          *_DAT_14a9b3f48 + (ulonglong)((uVar1 & 0x1ffff) * (int)_DAT_14a9b3f48[1]),
                          0);
      *(undefined4 *)(param_1 + 0x158) = 0x1ffff;
    }
  }
  return;
}

