// Recovered from game_scarlett_master.exe (GTA VI, Xbox Series X, PE32+ x64)
// Address: 1401780c0  size: 59 bytes
// Name:    FUN_1401780c0
// Subsystem: core
//
// Referenced strings (0 in this body, 0 including direct callees):
// Callees: FUN_144eb3750
//
// Generated decompilation. Formatting follows MiscRef/GTAVSRC conventions;
// identifiers are recovered, not original. See ../../../README.md.

#include "gta6decomp/rage_types.h"


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined8 FUN_1401780c0(undefined4 param_1)

{
  longlong lVar1;
  undefined8 uVar2;
  
  lVar1 = FUN_144eb3750();
  if (((lVar1 != 0) || (lVar1 = func_0x000144e24670(param_1), lVar1 == 0)) ||
     (uVar2 = 1, *(float *)(lVar1 + 0x10ac) <= _DAT_14615a2c4)) {
    uVar2 = 0;
  }
  return uVar2;
}

