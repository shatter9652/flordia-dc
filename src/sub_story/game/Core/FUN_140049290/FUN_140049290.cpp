// Recovered from game_scarlett_master.exe (GTA VI, Xbox Series X, PE32+ x64)
// Address: 140049290  size: 83 bytes
// Name:    FUN_140049290
// Subsystem: core
//
// Referenced strings (0 in this body, 0 including direct callees):
// Callees: 
//
// Generated decompilation. Formatting follows MiscRef/GTAVSRC conventions;
// identifiers are recovered, not original. See ../../../README.md.

#include "gta6decomp/rage_types.h"


undefined4 FUN_140049290(longlong *param_1,undefined8 param_2)

{
  undefined4 uVar1;
  undefined4 uVar2;
  
  uVar1 = (**(code **)(*param_1 + 0x78))(param_1,param_2,0,1);
  uVar2 = (**(code **)(*param_1 + 0x78))(param_1,param_2,0,2);
  (**(code **)(*param_1 + 0x78))(param_1,param_2,uVar1,0);
  return uVar2;
}

