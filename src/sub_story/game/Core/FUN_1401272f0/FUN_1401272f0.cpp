// Recovered from game_scarlett_master.exe (GTA VI, Xbox Series X, PE32+ x64)
// Address: 1401272f0  size: 41 bytes
// Name:    FUN_1401272f0
// Subsystem: core
//
// Referenced strings (0 in this body, 0 including direct callees):
// Callees: 
//
// Generated decompilation. Formatting follows MiscRef/GTAVSRC conventions;
// identifiers are recovered, not original. See ../../../README.md.

#include "gta6decomp/rage_types.h"


void FUN_1401272f0(longlong *param_1)

{
  func_0x000140127680();
  if (*(uint *)((longlong)param_1 + 0x54) < 6) {
                    /* WARNING: Could not recover jumptable at 0x00014012730e. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (**(code **)(*param_1 + 0x60))(param_1);
    return;
  }
  return;
}

