// Recovered from game_scarlett_master.exe (GTA VI, Xbox Series X, PE32+ x64)
// Address: 1401611a0  size: 58 bytes
// Name:    FUN_1401611a0
// Subsystem: core
//
// Referenced strings (0 in this body, 0 including direct callees):
// Callees: FUN_1401611e0
//
// Generated decompilation. Formatting follows MiscRef/GTAVSRC conventions;
// identifiers are recovered, not original. See ../../../README.md.

#include "gta6decomp/rage_types.h"


void FUN_1401611a0(undefined8 param_1,longlong param_2)

{
  longlong *plVar1;
  
  plVar1 = (longlong *)FUN_1401611e0();
  if (plVar1 == (longlong *)0x0) {
    return;
  }
  *(undefined4 *)(param_2 + 0x1c) = 7;
  *(undefined2 *)(param_2 + 0x17) = 0x101;
                    /* WARNING: Could not recover jumptable at 0x0001401611d7. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*plVar1 + 8))(plVar1,param_2,*(code **)(*plVar1 + 8));
  return;
}

