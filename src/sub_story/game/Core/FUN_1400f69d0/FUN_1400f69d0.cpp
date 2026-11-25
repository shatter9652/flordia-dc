// Recovered from game_scarlett_master.exe (GTA VI, Xbox Series X, PE32+ x64)
// Address: 1400f69d0  size: 69 bytes
// Name:    FUN_1400f69d0
// Subsystem: core
//
// Referenced strings (0 in this body, 0 including direct callees):
// Callees: FUN_144f8a590
//
// Generated decompilation. Formatting follows MiscRef/GTAVSRC conventions;
// identifiers are recovered, not original. See ../../../README.md.

#include "gta6decomp/rage_types.h"


undefined8 FUN_1400f69d0(longlong param_1,undefined8 param_2,longlong *param_3)

{
  undefined8 uVar1;
  undefined1 auStack_30 [16];
  undefined4 uStack_20;
  
  uVar1 = (**(code **)(**(longlong **)(param_1 + 0x18) + 0x98))();
  FUN_144f8a590(auStack_30,uVar1);
  (**(code **)(*param_3 + 0x18))(param_3,param_2,uStack_20);
  return param_2;
}

