// Recovered from game_scarlett_master.exe (GTA VI, Xbox Series X, PE32+ x64)
// Address: 1401810e0  size: 59 bytes
// Name:    FUN_1401810e0
// Subsystem: core
//
// Referenced strings (0 in this body, 0 including direct callees):
// Callees: FUN_1401810e0
//
// Generated decompilation. Formatting follows MiscRef/GTAVSRC conventions;
// identifiers are recovered, not original. See ../../../README.md.

#include "gta6decomp/rage_types.h"


void FUN_1401810e0(longlong *param_1,undefined8 param_2,undefined8 param_3)

{
  if (param_1[1] != 0) {
    FUN_1401810e0(param_1[1]);
  }
                    /* WARNING: Could not recover jumptable at 0x000140181118. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*param_1 + 0x20))(param_1,param_2,param_3);
  return;
}

