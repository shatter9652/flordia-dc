// Recovered from game_scarlett_master.exe (GTA VI, Xbox Series X, PE32+ x64)
// Address: 140026800  size: 47 bytes
// Name:    FUN_140026800
// Subsystem: core
//
// Referenced strings (0 in this body, 0 including direct callees):
// Callees: 
//
// Generated decompilation. Formatting follows MiscRef/GTAVSRC conventions;
// identifiers are recovered, not original. See ../../../README.md.

#include "gta6decomp/rage_types.h"


void FUN_140026800(longlong param_1,undefined8 param_2)

{
  longlong *plVar1;
  code *UNRECOVERED_JUMPTABLE;
  undefined8 uVar2;
  
  plVar1 = *(longlong **)(param_1 + 0x28);
  uVar2 = func_0x000144e46d50(param_1 + 0x30);
  UNRECOVERED_JUMPTABLE = *(code **)(*plVar1 + 0x30);
                    /* WARNING: Could not recover jumptable at 0x00014002682c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*UNRECOVERED_JUMPTABLE)(plVar1,param_2,uVar2,UNRECOVERED_JUMPTABLE);
  return;
}

