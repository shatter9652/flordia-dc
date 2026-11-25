// Recovered from game_scarlett_master.exe (GTA VI, Xbox Series X, PE32+ x64)
// Address: 14017d6c0  size: 116 bytes
// Name:    FUN_14017d6c0
// Subsystem: core
//
// Referenced strings (0 in this body, 0 including direct callees):
// Callees: FUN_145034300, FUN_14017d740
//
// Generated decompilation. Formatting follows MiscRef/GTAVSRC conventions;
// identifiers are recovered, not original. See ../../../README.md.

#include "gta6decomp/rage_types.h"


undefined8
FUN_14017d6c0(undefined8 param_1,undefined4 param_2,undefined4 param_3,undefined1 param_4,
             undefined1 param_5,undefined8 param_6)

{
  undefined8 uVar1;
  
  uVar1 = func_0x000144d9c160(0xb0,0x10);
  FUN_14017d740(uVar1);
  FUN_145034300(uVar1,param_1,param_2,param_3,param_4,param_5,param_6);
  return uVar1;
}

