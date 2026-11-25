// Recovered from game_scarlett_master.exe (GTA VI, Xbox Series X, PE32+ x64)
// Address: 1401867b0  size: 87 bytes
// Name:    FUN_1401867b0
// Subsystem: core
//
// Referenced strings (0 in this body, 0 including direct callees):
// Callees: FUN_140186a20
//
// Generated decompilation. Formatting follows MiscRef/GTAVSRC conventions;
// identifiers are recovered, not original. See ../../../README.md.

#include "gta6decomp/rage_types.h"


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

longlong FUN_1401867b0(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  longlong lVar1;
  
  lVar1 = (**(code **)(*_DAT_14abcc310 + 0x70))(_DAT_14abcc310,param_2,0x98);
  if (lVar1 != 0) {
    FUN_140186a20(lVar1,param_2,param_3,param_4);
  }
  return lVar1;
}

