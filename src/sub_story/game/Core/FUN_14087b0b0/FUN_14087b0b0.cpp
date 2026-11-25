// Recovered from game_scarlett_master.exe (GTA VI, Xbox Series X, PE32+ x64)
// Address: 14087b0b0  size: 64 bytes
// Name:    FUN_14087b0b0
// Subsystem: core
//
// Referenced strings (0 in this body, 0 including direct callees):
// Callees: 
//
// Generated decompilation. Formatting follows MiscRef/GTAVSRC conventions;
// identifiers are recovered, not original. See ../../../README.md.

#include "gta6decomp/rage_types.h"


void FUN_14087b0b0(longlong param_1,undefined2 param_2,undefined8 param_3)

{
  undefined8 uStack_28;
  undefined8 uStack_20;
  
  func_0x00014087b0f0(&uStack_28,param_3,param_2,*(undefined4 *)(*(longlong *)(param_1 + 8) + 0x24),
                      *(undefined1 *)(*(longlong *)(param_1 + 8) + 0x2c));
  *(undefined8 *)(param_1 + 0x38) = uStack_28;
  *(undefined8 *)(param_1 + 0x40) = uStack_20;
  return;
}

