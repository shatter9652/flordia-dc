// Recovered from game_scarlett_master.exe (GTA VI, Xbox Series X, PE32+ x64)
// Address: 1400f0a60  size: 46 bytes
// Name:    FUN_1400f0a60
// Subsystem: core
//
// Referenced strings (0 in this body, 0 including direct callees):
// Callees: 
//
// Generated decompilation. Formatting follows MiscRef/GTAVSRC conventions;
// identifiers are recovered, not original. See ../../../README.md.

#include "gta6decomp/rage_types.h"


void FUN_1400f0a60(undefined8 param_1,longlong *param_2)

{
  undefined4 uVar1;
  
  *(int *)(param_2 + 2) =
       *(int *)(*param_2 + 0x38) + *(int *)(**(longlong **)(param_2[1] + 8) + 0x10);
  uVar1 = func_0x000144f7d210();
  *(undefined4 *)((longlong)param_2 + 0x14) = uVar1;
  return;
}

