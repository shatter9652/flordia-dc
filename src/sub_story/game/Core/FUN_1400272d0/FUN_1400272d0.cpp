// Recovered from game_scarlett_master.exe (GTA VI, Xbox Series X, PE32+ x64)
// Address: 1400272d0  size: 55 bytes
// Name:    FUN_1400272d0
// Subsystem: core
//
// Referenced strings (0 in this body, 0 including direct callees):
// Callees: 
//
// Generated decompilation. Formatting follows MiscRef/GTAVSRC conventions;
// identifiers are recovered, not original. See ../../../README.md.

#include "gta6decomp/rage_types.h"


undefined8 *
FUN_1400272d0(undefined8 *param_1,undefined4 param_2,undefined4 param_3,undefined8 param_4,
             undefined8 param_5,byte param_6)

{
  undefined4 uVar1;
  
  *param_1 = param_4;
  param_1[2] = param_5;
  *(byte *)((longlong)param_1 + 0x1c) = param_6 ^ 1;
  *(undefined1 *)((longlong)param_1 + 0x1d) = 1;
  uVar1 = func_0x000140027310(param_2,param_3);
  *(undefined4 *)(param_1 + 3) = uVar1;
  return param_1;
}

