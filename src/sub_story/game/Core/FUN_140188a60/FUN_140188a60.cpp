// Recovered from game_scarlett_master.exe (GTA VI, Xbox Series X, PE32+ x64)
// Address: 140188a60  size: 105 bytes
// Name:    FUN_140188a60
// Subsystem: core
//
// Referenced strings (0 in this body, 0 including direct callees):
// Callees: FUN_144e46a00
//
// Generated decompilation. Formatting follows MiscRef/GTAVSRC conventions;
// identifiers are recovered, not original. See ../../../README.md.

#include "gta6decomp/rage_types.h"


undefined8 FUN_140188a60(longlong *param_1,undefined8 param_2,undefined4 param_3)

{
  undefined1 auStack_48 [40];
  
  func_0x000144e469d0(auStack_48);
  FUN_144e46a00(auStack_48);
  func_0x000140188ad0(auStack_48,param_3);
  (**(code **)(*param_1 + 0x128))(param_1);
  (**(code **)(*param_1 + 0xe8))(param_1,auStack_48,param_2);
  return param_2;
}

