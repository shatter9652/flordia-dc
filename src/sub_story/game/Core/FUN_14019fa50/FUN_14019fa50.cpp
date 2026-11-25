// Recovered from game_scarlett_master.exe (GTA VI, Xbox Series X, PE32+ x64)
// Address: 14019fa50  size: 52 bytes
// Name:    FUN_14019fa50
// Subsystem: core
//
// Referenced strings (0 in this body, 0 including direct callees):
// Callees: 
//
// Generated decompilation. Formatting follows MiscRef/GTAVSRC conventions;
// identifiers are recovered, not original. See ../../../README.md.

#include "gta6decomp/rage_types.h"


void FUN_14019fa50(longlong *param_1,undefined8 param_2)

{
  (**(code **)(*param_1 + 0x128))();
                    /* WARNING: Could not recover jumptable at 0x00014019fa81. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(**(longlong **)(param_1[4] + 0x30) + 0x18))
            (*(longlong **)(param_1[4] + 0x30),param_2,*(undefined4 *)((longlong)param_1 + 0x54));
  return;
}

