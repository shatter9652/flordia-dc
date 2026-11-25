// Recovered from game_scarlett_master.exe (GTA VI, Xbox Series X, PE32+ x64)
// Address: 140058dc0  size: 50 bytes
// Name:    FUN_140058dc0
// Subsystem: core
//
// Referenced strings (0 in this body, 0 including direct callees):
// Callees: 
//
// Generated decompilation. Formatting follows MiscRef/GTAVSRC conventions;
// identifiers are recovered, not original. See ../../../README.md.

#include "gta6decomp/rage_types.h"


undefined4 *
FUN_140058dc0(undefined4 *param_1,undefined4 param_2,undefined8 param_3,undefined4 param_4,
             undefined4 param_5)

{
  undefined1 uVar1;
  
  *param_1 = param_2;
  *(undefined8 *)(param_1 + 2) = param_3;
  uVar1 = func_0x000144db6ef0(param_4);
  *(undefined1 *)(param_1 + 4) = uVar1;
  uVar1 = func_0x000144db6ef0(param_5);
  *(undefined1 *)((longlong)param_1 + 0x11) = uVar1;
  return param_1;
}

