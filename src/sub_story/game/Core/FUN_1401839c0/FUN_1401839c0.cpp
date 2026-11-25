// Recovered from game_scarlett_master.exe (GTA VI, Xbox Series X, PE32+ x64)
// Address: 1401839c0  size: 62 bytes
// Name:    FUN_1401839c0
// Subsystem: core
//
// Referenced strings (0 in this body, 0 including direct callees):
// Callees: 
//
// Generated decompilation. Formatting follows MiscRef/GTAVSRC conventions;
// identifiers are recovered, not original. See ../../../README.md.

#include "gta6decomp/rage_types.h"


undefined8 * FUN_1401839c0(undefined8 *param_1,longlong param_2)

{
  undefined1 uVar1;
  
  *param_1 = 0x600000005;
  param_1[1] = param_2;
  param_1[2] = 0x149e30008;
  uVar1 = func_0x000140183a00(*(undefined4 *)(param_2 + 0x18));
  *(undefined1 *)(param_1 + 3) = uVar1;
  *(undefined2 *)((longlong)param_1 + 0x19) = 1;
  return param_1;
}

