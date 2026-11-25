// Recovered from game_scarlett_master.exe (GTA VI, Xbox Series X, PE32+ x64)
// Address: 14001ded0  size: 142 bytes
// Name:    FUN_14001ded0
// Subsystem: core
//
// Referenced strings (0 in this body, 0 including direct callees):
// Callees: FUN_144df20e0, FUN_144e05ae0
//
// Generated decompilation. Formatting follows MiscRef/GTAVSRC conventions;
// identifiers are recovered, not original. See ../../../README.md.

#include "gta6decomp/rage_types.h"


void FUN_14001ded0(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  longlong lVar1;
  
  lVar1 = FUN_144e05ae0(param_3);
  if (lVar1 != 0) {
    FUN_144df20e0(param_3,*(undefined4 *)(lVar1 + 0x11c),*(undefined4 *)(lVar1 + 0x120));
  }
  return;
}

