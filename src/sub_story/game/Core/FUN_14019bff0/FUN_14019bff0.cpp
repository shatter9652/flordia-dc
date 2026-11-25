// Recovered from game_scarlett_master.exe (GTA VI, Xbox Series X, PE32+ x64)
// Address: 14019bff0  size: 62 bytes
// Name:    FUN_14019bff0
// Subsystem: core
//
// Referenced strings (0 in this body, 0 including direct callees):
// Callees: FUN_142363360, FUN_140a9e210, FUN_142ba2480
//
// Generated decompilation. Formatting follows MiscRef/GTAVSRC conventions;
// identifiers are recovered, not original. See ../../../README.md.

#include "gta6decomp/rage_types.h"


undefined4 FUN_14019bff0(longlong param_1,undefined4 param_2)

{
  undefined4 uVar1;
  undefined8 uStack_20;
  
  FUN_142ba2480(&uStack_20,param_1 + 0xc0);
  uVar1 = FUN_140a9e210(param_1,param_2);
  FUN_142363360(uStack_20);
  return uVar1;
}

