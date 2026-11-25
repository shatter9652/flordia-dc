// Recovered from game_scarlett_master.exe (GTA VI, Xbox Series X, PE32+ x64)
// Address: 1400378c0  size: 108 bytes
// Name:    FUN_1400378c0
// Subsystem: core
//
// Referenced strings (0 in this body, 0 including direct callees):
// Callees: FUN_144da8e70, FUN_144d9f3e0
//
// Generated decompilation. Formatting follows MiscRef/GTAVSRC conventions;
// identifiers are recovered, not original. See ../../../README.md.

#include "gta6decomp/rage_types.h"


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined8 FUN_1400378c0(longlong param_1,undefined4 param_2,undefined8 param_3,ulonglong param_4)

{
  undefined8 uVar1;
  
  uVar1 = FUN_144d9f3e0(param_1 + -0x12780,param_4 & 0xffffffff,0x10);
  func_0x000145f40560(uVar1,param_3,param_4);
  FUN_144da8e70(param_1,param_2,_DAT_1475df138,(int)uVar1 - _DAT_1475df1b8,param_4);
  return uVar1;
}

