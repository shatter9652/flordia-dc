// Recovered from game_scarlett_master.exe (GTA VI, Xbox Series X, PE32+ x64)
// Address: 14001af40  size: 220 bytes
// Name:    FUN_14001af40
// Subsystem: core
//
// Referenced strings (0 in this body, 0 including direct callees):
// Callees: FUN_145012860, FUN_1450128a0
//
// Generated decompilation. Formatting follows MiscRef/GTAVSRC conventions;
// identifiers are recovered, not original. See ../../../README.md.

#include "gta6decomp/rage_types.h"


undefined8 * FUN_14001af40(longlong param_1,undefined8 *param_2,int param_3)

{
  longlong lVar1;
  undefined4 uVar2;
  int iVar3;
  longlong *plVar4;
  undefined *puStack_40;
  longlong *plStack_38;
  int iStack_28;
  
  if (param_3 == 0) {
    lVar1 = *(longlong *)(param_1 + 0x20);
    uVar2 = FUN_1450128a0(**(undefined8 **)(lVar1 + 0x3b30),4);
    FUN_145012860(&puStack_40,lVar1,uVar2,0);
    puStack_40 = &UNK_14669fee0;
    iVar3 = (**(code **)(*plStack_38 + 0x20))
                      (plStack_38,*(undefined4 *)(&UNK_14669f8e0 + (longlong)iStack_28 * 4));
  }
  else {
    lVar1 = *(longlong *)(param_1 + 0x20);
    uVar2 = FUN_1450128a0(**(undefined8 **)(lVar1 + 0x3b30),5);
    FUN_145012860(&puStack_40,lVar1,uVar2,1);
    puStack_40 = &UNK_14669fee0;
    iVar3 = (**(code **)(*plStack_38 + 0x20))
                      (plStack_38,*(undefined4 *)(&UNK_14669f8e0 + (longlong)iStack_28 * 4));
  }
  plVar4 = (longlong *)0x0;
  if (iVar3 != -1) {
    plVar4 = plStack_38;
  }
  *param_2 = plVar4;
  *(int *)(param_2 + 1) = iVar3;
  return param_2;
}

