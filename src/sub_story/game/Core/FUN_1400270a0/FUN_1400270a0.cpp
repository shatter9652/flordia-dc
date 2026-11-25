// Recovered from game_scarlett_master.exe (GTA VI, Xbox Series X, PE32+ x64)
// Address: 1400270a0  size: 84 bytes
// Name:    FUN_1400270a0
// Subsystem: core
//
// Referenced strings (0 in this body, 0 including direct callees):
// Callees: 
//
// Generated decompilation. Formatting follows MiscRef/GTAVSRC conventions;
// identifiers are recovered, not original. See ../../../README.md.

#include "gta6decomp/rage_types.h"


void FUN_1400270a0(longlong *param_1,longlong *param_2,longlong param_3)

{
  undefined4 uVar1;
  
  uVar1 = func_0x000140005970(*(undefined1 *)(param_3 + 0x1d));
  func_0x0001400269d0(param_3,0);
  (**(code **)(*param_1 + 0x58))(param_1,param_3);
  func_0x0001400269d0(param_3,uVar1);
                    /* WARNING: Could not recover jumptable at 0x0001400270f1. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*param_2 + 0x70))(param_2,param_3);
  return;
}

