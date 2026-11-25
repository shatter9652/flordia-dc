// Recovered from game_scarlett_master.exe (GTA VI, Xbox Series X, PE32+ x64)
// Address: 140026cc0  size: 69 bytes
// Name:    FUN_140026cc0
// Subsystem: core
//
// Referenced strings (0 in this body, 0 including direct callees):
// Callees: 
//
// Generated decompilation. Formatting follows MiscRef/GTAVSRC conventions;
// identifiers are recovered, not original. See ../../../README.md.

#include "gta6decomp/rage_types.h"


void FUN_140026cc0(longlong param_1,undefined8 param_2,undefined8 param_3)

{
  (**(code **)(**(longlong **)(param_1 + 0x30) + 0xa8))();
  (**(code **)(**(longlong **)(param_1 + 0x38) + 0x70))(*(longlong **)(param_1 + 0x38),param_2);
                    /* WARNING: Could not recover jumptable at 0x000140026d02. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(**(longlong **)(param_1 + 0x40) + 0x28))
            (*(longlong **)(param_1 + 0x40),param_2,param_3);
  return;
}

