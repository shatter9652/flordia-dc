// Recovered from game_scarlett_master.exe (GTA VI, Xbox Series X, PE32+ x64)
// Address: 1401cbcc0  size: 45 bytes
// Name:    FUN_1401cbcc0
// Subsystem: core
//
// Referenced strings (0 in this body, 0 including direct callees):
// Callees: FUN_140127200
//
// Generated decompilation. Formatting follows MiscRef/GTAVSRC conventions;
// identifiers are recovered, not original. See ../../../README.md.

#include "gta6decomp/rage_types.h"


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined4 FUN_1401cbcc0(longlong param_1,longlong param_2)

{
  longlong lVar1;
  
  lVar1 = FUN_140127200(_DAT_14ab5cdf8);
  return *(undefined4 *)(param_2 + 8 + (ulonglong)(lVar1 != param_1) * 4);
}

