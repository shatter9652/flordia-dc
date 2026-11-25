// Recovered from game_scarlett_master.exe (GTA VI, Xbox Series X, PE32+ x64)
// Address: 1400f05d0  size: 35 bytes
// Name:    FUN_1400f05d0
// Subsystem: core
//
// Referenced strings (0 in this body, 0 including direct callees):
// Callees: FUN_144f7d460
//
// Generated decompilation. Formatting follows MiscRef/GTAVSRC conventions;
// identifiers are recovered, not original. See ../../../README.md.

#include "gta6decomp/rage_types.h"


void FUN_1400f05d0(undefined8 *param_1)

{
  int iVar1;
  
  iVar1 = FUN_144f7d460(*param_1);
  if (iVar1 == 0) {
    *(undefined4 *)(param_1 + 1) = 1;
  }
  return;
}

