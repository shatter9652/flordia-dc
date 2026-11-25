// Recovered from game_scarlett_master.exe (GTA VI, Xbox Series X, PE32+ x64)
// Address: 140048330  size: 94 bytes
// Name:    FUN_140048330
// Subsystem: core
//
// Referenced strings (0 in this body, 0 including direct callees):
// Callees: 
//
// Generated decompilation. Formatting follows MiscRef/GTAVSRC conventions;
// identifiers are recovered, not original. See ../../../README.md.

#include "gta6decomp/rage_types.h"


void FUN_140048330(longlong *param_1,longlong param_2)

{
  int iVar1;
  undefined4 uVar2;
  longlong lVar3;
  
  iVar1 = *(int *)(param_2 + 0x3c);
  lVar3 = (longlong)iVar1 * 0x800 + *(longlong *)(param_2 + 8);
  *(longlong *)(param_2 + 0x10) = lVar3;
  *(longlong *)(param_2 + 0x18) = lVar3;
  *(undefined4 *)(param_2 + 0x48) = *(undefined4 *)(param_2 + 0x38);
  uVar2 = func_0x0001452dcd60(*(undefined4 *)((longlong)param_1 + 0xdc));
  *(undefined4 *)(param_2 + 0x54) = uVar2;
  *(int *)(param_2 + 0x4c) = iVar1;
  *(undefined4 *)(param_2 + 0x28) = *(undefined4 *)(param_2 + 0x30);
  *(int *)(param_2 + 0x40) = (int)param_1[0x1b];
                    /* WARNING: Could not recover jumptable at 0x000140048387. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*param_1 + 0x88))(param_1);
  return;
}

