// Recovered from game_scarlett_master.exe (GTA VI, Xbox Series X, PE32+ x64)
// Address: 1400b09a0  size: 74 bytes
// Name:    FUN_1400b09a0
// Subsystem: core
//
// Referenced strings (0 in this body, 0 including direct callees):
// Callees: FUN_1400f9df0, FUN_1453bc3d0
//
// Generated decompilation. Formatting follows MiscRef/GTAVSRC conventions;
// identifiers are recovered, not original. See ../../../README.md.

#include "gta6decomp/rage_types.h"


void FUN_1400b09a0(undefined8 param_1,undefined4 param_2,undefined4 param_3)

{
  undefined8 *puVar1;
  
  puVar1 = (undefined8 *)FUN_1453bc3d0();
  if (puVar1 != (undefined8 *)0x0) {
    FUN_1400f9df0(*puVar1,*(undefined8 *)puVar1[1],*(undefined4 *)((undefined8 *)puVar1[1] + 6),
                  0x2deefadd,param_2,param_3);
  }
  return;
}

