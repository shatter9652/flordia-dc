// Recovered from game_scarlett_master.exe (GTA VI, Xbox Series X, PE32+ x64)
// Address: 14002b990  size: 47 bytes
// Name:    FUN_14002b990
// Subsystem: core
//
// Referenced strings (0 in this body, 0 including direct callees):
// Callees: FUN_14002b9c0
//
// Generated decompilation. Formatting follows MiscRef/GTAVSRC conventions;
// identifiers are recovered, not original. See ../../../README.md.

#include "gta6decomp/rage_types.h"


void FUN_14002b990(longlong param_1,undefined8 param_2)

{
  FUN_14002b9c0();
                    /* WARNING: Could not recover jumptable at 0x00014002b9bc. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(**(longlong **)(param_1 + 0x40) + 0x28))
            (*(longlong **)(param_1 + 0x40),param_2,param_1 + 0x48);
  return;
}

