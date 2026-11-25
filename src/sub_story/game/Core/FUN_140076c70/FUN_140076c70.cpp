// Recovered from game_scarlett_master.exe (GTA VI, Xbox Series X, PE32+ x64)
// Address: 140076c70  size: 49 bytes
// Name:    FUN_140076c70
// Subsystem: core
//
// Referenced strings (0 in this body, 0 including direct callees):
// Callees: FUN_1453b4300
//
// Generated decompilation. Formatting follows MiscRef/GTAVSRC conventions;
// identifiers are recovered, not original. See ../../../README.md.

#include "gta6decomp/rage_types.h"


void FUN_140076c70(longlong *param_1)

{
  if (((*(byte *)((longlong)param_1 + 0x1c) & 8) == 0) && (param_1[4] != 0)) {
    FUN_1453b4300(param_1[4]);
  }
                    /* WARNING: Could not recover jumptable at 0x000140076c9a. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*param_1 + 0x300))();
  return;
}

