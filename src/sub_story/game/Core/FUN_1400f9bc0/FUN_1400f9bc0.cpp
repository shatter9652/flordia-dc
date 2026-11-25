// Recovered from game_scarlett_master.exe (GTA VI, Xbox Series X, PE32+ x64)
// Address: 1400f9bc0  size: 82 bytes
// Name:    FUN_1400f9bc0
// Subsystem: core
//
// Referenced strings (0 in this body, 0 including direct callees):
// Callees: FUN_1400f9c20, FUN_144f94160, FUN_1450f8030
//
// Generated decompilation. Formatting follows MiscRef/GTAVSRC conventions;
// identifiers are recovered, not original. See ../../../README.md.

#include "gta6decomp/rage_types.h"


longlong FUN_1400f9bc0(longlong param_1,longlong param_2,undefined8 param_3)

{
  undefined4 uVar1;
  undefined8 uVar2;
  
  uVar1 = *(undefined4 *)(param_2 + 0x9c);
  uVar2 = FUN_144f94160(uVar1);
  uVar1 = FUN_1400f9c20(uVar1);
  FUN_1450f8030(param_1,*(undefined8 *)(param_2 + 0x20),uVar1,uVar2);
  *(longlong *)(param_1 + 0x10) = param_2;
  *(undefined8 *)(param_1 + 0x28) = param_3;
  return param_1;
}

