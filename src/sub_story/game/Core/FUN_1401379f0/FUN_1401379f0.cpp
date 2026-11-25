// Recovered from game_scarlett_master.exe (GTA VI, Xbox Series X, PE32+ x64)
// Address: 1401379f0  size: 68 bytes
// Name:    FUN_1401379f0
// Subsystem: core
//
// Referenced strings (0 in this body, 0 including direct callees):
// Callees: FUN_144e985d0
//
// Generated decompilation. Formatting follows MiscRef/GTAVSRC conventions;
// identifiers are recovered, not original. See ../../../README.md.

#include "gta6decomp/rage_types.h"


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

longlong FUN_1401379f0(longlong param_1)

{
  longlong lVar1;
  
  if (param_1 != 0) {
    lVar1 = FUN_144e985d0();
    if (lVar1 != 0) {
      return lVar1;
    }
    if (_DAT_149e47978 != (code *)0x0) {
      lVar1 = (*_DAT_149e47978)(param_1,8);
      return lVar1;
    }
  }
  return 0;
}

