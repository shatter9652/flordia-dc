// Recovered from game_scarlett_master.exe (GTA VI, Xbox Series X, PE32+ x64)
// Address: 1400c7bb0  size: 66 bytes
// Name:    FUN_1400c7bb0
// Subsystem: core
//
// Referenced strings (0 in this body, 0 including direct callees):
// Callees: FUN_144f62fb0
//
// Generated decompilation. Formatting follows MiscRef/GTAVSRC conventions;
// identifiers are recovered, not original. See ../../../README.md.

#include "gta6decomp/rage_types.h"


undefined8 FUN_1400c7bb0(longlong param_1)

{
  undefined8 uVar1;
  
  if ((*(byte *)(param_1 + 0x90) & 4) == 0) {
    uVar1 = 0;
  }
  else {
    uVar1 = FUN_144f62fb0(*(undefined8 *)(param_1 + 0x2f8));
  }
  return uVar1;
}

