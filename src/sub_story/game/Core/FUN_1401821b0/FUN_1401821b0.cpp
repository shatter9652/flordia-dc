// Recovered from game_scarlett_master.exe (GTA VI, Xbox Series X, PE32+ x64)
// Address: 1401821b0  size: 46 bytes
// Name:    FUN_1401821b0
// Subsystem: core
//
// Referenced strings (0 in this body, 0 including direct callees):
// Callees: FUN_1401824f0
//
// Generated decompilation. Formatting follows MiscRef/GTAVSRC conventions;
// identifiers are recovered, not original. See ../../../README.md.

#include "gta6decomp/rage_types.h"


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined8 FUN_1401821b0(undefined8 param_1,int param_2)

{
  FUN_1401824f0();
  if (param_2 != 0) {
    (**(code **)(*_DAT_14abcc310 + 0x60))(_DAT_14abcc310,param_1);
  }
  return param_1;
}

