// Recovered from game_scarlett_master.exe (GTA VI, Xbox Series X, PE32+ x64)
// Address: 1400b1f50  size: 49 bytes
// Name:    FUN_1400b1f50
// Subsystem: core
//
// Referenced strings (0 in this body, 0 including direct callees):
// Callees: FUN_1451e2f90
//
// Generated decompilation. Formatting follows MiscRef/GTAVSRC conventions;
// identifiers are recovered, not original. See ../../../README.md.

#include "gta6decomp/rage_types.h"


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1400b1f50(undefined8 param_1,undefined8 param_2,undefined4 *param_3,undefined8 param_4)

{
  longlong lVar1;
  undefined4 *puVar2;
  
  lVar1 = FUN_1451e2f90(param_1,param_2,param_4);
  puVar2 = (undefined4 *)(_DAT_14abb6910 + 0xf8);
  if (lVar1 != 0) {
    puVar2 = (undefined4 *)(lVar1 + 4);
  }
  *param_3 = *puVar2;
  return;
}

