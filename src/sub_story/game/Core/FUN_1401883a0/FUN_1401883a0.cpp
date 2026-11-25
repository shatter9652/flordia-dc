// Recovered from game_scarlett_master.exe (GTA VI, Xbox Series X, PE32+ x64)
// Address: 1401883a0  size: 75 bytes
// Name:    FUN_1401883a0
// Subsystem: core
//
// Referenced strings (0 in this body, 0 including direct callees):
// Callees: 
//
// Generated decompilation. Formatting follows MiscRef/GTAVSRC conventions;
// identifiers are recovered, not original. See ../../../README.md.

#include "gta6decomp/rage_types.h"


void FUN_1401883a0(longlong param_1,undefined8 param_2,undefined8 param_3)

{
  (**(code **)(**(longlong **)(param_1 + 0x30) + 0xd8))();
  (**(code **)(**(longlong **)(param_1 + 0x38) + 0xa8))
            (*(longlong **)(param_1 + 0x38),param_2,param_3);
                    /* WARNING: Could not recover jumptable at 0x0001401883e8. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(**(longlong **)(param_1 + 0x40) + 0x38))
            (*(longlong **)(param_1 + 0x40),param_2,param_3);
  return;
}

