// Recovered from game_scarlett_master.exe (GTA VI, Xbox Series X, PE32+ x64)
// Address: 140027200  size: 47 bytes
// Name:    FUN_140027200
// Subsystem: core
//
// Referenced strings (0 in this body, 0 including direct callees):
// Callees: 
//
// Generated decompilation. Formatting follows MiscRef/GTAVSRC conventions;
// identifiers are recovered, not original. See ../../../README.md.

#include "gta6decomp/rage_types.h"


void FUN_140027200(longlong param_1,undefined8 param_2)

{
  func_0x000140027100();
                    /* WARNING: Could not recover jumptable at 0x00014002722c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(**(longlong **)(param_1 + 0x28) + 0x28))
            (*(longlong **)(param_1 + 0x28),param_2,param_1 + 0x30);
  return;
}

