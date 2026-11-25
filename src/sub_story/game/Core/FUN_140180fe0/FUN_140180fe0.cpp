// Recovered from game_scarlett_master.exe (GTA VI, Xbox Series X, PE32+ x64)
// Address: 140180fe0  size: 46 bytes
// Name:    FUN_140180fe0
// Subsystem: core
//
// Referenced strings (0 in this body, 0 including direct callees):
// Callees: FUN_140181010
//
// Generated decompilation. Formatting follows MiscRef/GTAVSRC conventions;
// identifiers are recovered, not original. See ../../../README.md.

#include "gta6decomp/rage_types.h"


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined8 FUN_140180fe0(undefined8 param_1,int param_2)

{
  FUN_140181010();
  if (param_2 != 0) {
    (**(code **)(*_DAT_14abcc310 + 0x60))(_DAT_14abcc310,param_1);
  }
  return param_1;
}

