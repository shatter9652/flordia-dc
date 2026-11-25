// Recovered from game_scarlett_master.exe (GTA VI, Xbox Series X, PE32+ x64)
// Address: 14013e130  size: 40 bytes
// Name:    FUN_14013e130
// Subsystem: core
//
// Referenced strings (0 in this body, 0 including direct callees):
// Callees: 
//
// Generated decompilation. Formatting follows MiscRef/GTAVSRC conventions;
// identifiers are recovered, not original. See ../../../README.md.

#include "gta6decomp/rage_types.h"


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined8 FUN_14013e130(undefined8 param_1)

{
  uint uVar1;
  
  if ((int)param_1 != 0) {
    uVar1 = func_0x000144dc06d0(param_1,_DAT_14abbef40);
    if (uVar1 < 2000) {
      return 1;
    }
  }
  return 0;
}

