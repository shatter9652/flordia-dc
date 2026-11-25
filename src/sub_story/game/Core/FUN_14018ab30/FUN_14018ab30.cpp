// Recovered from game_scarlett_master.exe (GTA VI, Xbox Series X, PE32+ x64)
// Address: 14018ab30  size: 61 bytes
// Name:    FUN_14018ab30
// Subsystem: core
//
// Referenced strings (0 in this body, 0 including direct callees):
// Callees: 
//
// Generated decompilation. Formatting follows MiscRef/GTAVSRC conventions;
// identifiers are recovered, not original. See ../../../README.md.

#include "gta6decomp/rage_types.h"


void FUN_14018ab30(undefined8 param_1,longlong *param_2,undefined4 param_3,undefined4 param_4)

{
  longlong *plVar1;
  
  if (param_2 != (longlong *)0x0) {
    plVar1 = (longlong *)(**(code **)(*param_2 + 0x168))(param_2);
                    /* WARNING: Could not recover jumptable at 0x00014018ab62. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (**(code **)(*plVar1 + 0x38))(plVar1,param_3,param_4,*(code **)(*plVar1 + 0x38));
    return;
  }
  return;
}

