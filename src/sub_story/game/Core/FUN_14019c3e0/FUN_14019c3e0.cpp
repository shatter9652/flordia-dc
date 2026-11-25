// Recovered from game_scarlett_master.exe (GTA VI, Xbox Series X, PE32+ x64)
// Address: 14019c3e0  size: 477 bytes
// Name:    FUN_14019c3e0
// Subsystem: core
//
// Referenced strings (0 in this body, 0 including direct callees):
// Callees: FUN_1450128a0, FUN_145012860
//
// Generated decompilation. Formatting follows MiscRef/GTAVSRC conventions;
// identifiers are recovered, not original. See ../../../README.md.

#include "gta6decomp/rage_types.h"


void FUN_14019c3e0(undefined8 *param_1,undefined8 *param_2,longlong *param_3)

{
  undefined4 uVar1;
  int iVar2;
  longlong lVar3;
  longlong *plVar4;
  undefined *puStack_58;
  longlong *plStack_50;
  int iStack_40;
  
  plVar4 = (longlong *)param_3[0x766];
  lVar3 = *plVar4;
  if ((*(char *)(lVar3 + 0x79) == -1) && (*(char *)(lVar3 + 0x7e) == -1)) {
    if ((*(char *)(lVar3 + 0x7a) == -1) && (*(char *)(lVar3 + 0x7c) == -1)) {
      if (*(char *)(lVar3 + 0x7f) == -1) {
        return;
      }
      uVar1 = func_0x00014001bd40(*(undefined8 *)(plVar4[2] + 0x80),0x8133de19);
      *param_1 = param_3;
      *(undefined4 *)(param_1 + 1) = uVar1;
      return;
    }
    uVar1 = func_0x00014001bd40(*(undefined8 *)(plVar4[2] + 0x80),0x8133de19);
    *param_1 = param_3;
    *(undefined4 *)(param_1 + 1) = uVar1;
    func_0x00014139c410(*(undefined8 *)(param_3[0x766] + 8));
    lVar3 = func_0x00014139c410(*(undefined8 *)(param_3[0x766] + 8));
    iVar2 = (**(code **)(*param_3 + 0x20))(param_3,*(undefined4 *)(lVar3 + 0x30));
    plVar4 = param_3;
    if (iVar2 == -1) {
      plVar4 = (longlong *)0x0;
    }
    *param_2 = plVar4;
    *(int *)(param_2 + 1) = iVar2;
    func_0x00014139c410(*(undefined8 *)(param_3[0x766] + 8));
    lVar3 = func_0x00014139c410(*(undefined8 *)(param_3[0x766] + 8));
    iVar2 = (**(code **)(*param_3 + 0x20))(param_3,*(undefined4 *)(lVar3 + 0x34));
    plStack_50 = param_3;
    if (iVar2 == -1) {
      plStack_50 = (longlong *)0x0;
    }
  }
  else {
    uVar1 = func_0x00014001bd40(*(undefined8 *)(plVar4[2] + 0x80),0x8133de19);
    *param_1 = param_3;
    *(undefined4 *)(param_1 + 1) = uVar1;
    uVar1 = FUN_1450128a0(*(undefined8 *)param_3[0x766],4);
    FUN_145012860(&puStack_58,param_3,uVar1,0);
    plVar4 = plStack_50;
    puStack_58 = &UNK_14669fee0;
    iVar2 = (**(code **)(*plStack_50 + 0x20))
                      (plStack_50,*(undefined4 *)(&UNK_14669f8e0 + (longlong)iStack_40 * 4));
    if (iVar2 == -1) {
      plVar4 = (longlong *)0x0;
    }
    *param_2 = plVar4;
    *(int *)(param_2 + 1) = iVar2;
    uVar1 = FUN_1450128a0(*(undefined8 *)param_3[0x766],5);
    FUN_145012860(&puStack_58,param_3,uVar1,1);
    puStack_58 = &UNK_14669fee0;
    iVar2 = (**(code **)(*plStack_50 + 0x20))
                      (plStack_50,*(undefined4 *)(&UNK_14669f8e0 + (longlong)iStack_40 * 4));
    if (iVar2 == -1) {
      plStack_50 = (longlong *)0x0;
    }
  }
  param_2[2] = plStack_50;
  *(int *)(param_2 + 3) = iVar2;
  return;
}

