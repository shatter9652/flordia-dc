// Recovered from game_scarlett_master.exe (GTA VI, Xbox Series X, PE32+ x64)
// Address: 140006410  size: 155 bytes
// Name:    FUN_140006410
// Subsystem: core
//
// Referenced strings (0 in this body, 0 including direct callees):
// Callees: 
//
// Generated decompilation. Formatting follows MiscRef/GTAVSRC conventions;
// identifiers are recovered, not original. See ../../../README.md.

#include "gta6decomp/rage_types.h"


void FUN_140006410(undefined8 *param_1)

{
  int iVar1;
  byte bVar2;
  uint uVar3;
  longlong lVar4;
  
  iVar1 = *(int *)(param_1 + 4);
  if (*(int *)((longlong)param_1 + 0x24) == 0) {
    if (iVar1 != 0) {
      bVar2 = (**(code **)(*(longlong *)*param_1 + 0x198))
                        ((longlong *)*param_1,param_1[1],param_1[2]);
      uVar3 = bVar2 - 1;
      goto LAB_140006441;
    }
  }
  else if (*(int *)((longlong)param_1 + 0x24) != iVar1) {
    lVar4 = (**(code **)(*(longlong *)*param_1 + 0x80))
                      ((longlong *)*param_1,param_1[1],(longlong)iVar1 + param_1[3],0);
    if (lVar4 == -1) {
      uVar3 = 0xffffffff;
    }
    else {
      uVar3 = (uint)lVar4 & 0x7fffffff;
    }
    goto LAB_140006441;
  }
  uVar3 = 0;
LAB_140006441:
  param_1[3] = param_1[3] + (longlong)*(int *)(param_1 + 4);
  param_1[4] = 0;
  if (uVar3 == 0) {
                    /* WARNING: Could not recover jumptable at 0x00014000646b. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (**(code **)(*(longlong *)*param_1 + 0xb0))((longlong *)*param_1,param_1[1]);
    return;
  }
  return;
}

