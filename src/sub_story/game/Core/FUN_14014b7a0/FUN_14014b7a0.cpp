// Recovered from game_scarlett_master.exe (GTA VI, Xbox Series X, PE32+ x64)
// Address: 14014b7a0  size: 23 bytes
// Name:    FUN_14014b7a0
// Subsystem: core
//
// Referenced strings (0 in this body, 0 including direct callees):
// Callees: FUN_144e76200
//
// Generated decompilation. Formatting follows MiscRef/GTAVSRC conventions;
// identifiers are recovered, not original. See ../../../README.md.

#include "gta6decomp/rage_types.h"


void FUN_14014b7a0(void)

{
  longlong *plVar1;
  
  plVar1 = (longlong *)FUN_144e76200();
                    /* WARNING: Could not recover jumptable at 0x00014014b7b3. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*plVar1 + 0x18))(plVar1);
  return;
}

