// Recovered from game_scarlett_master.exe (GTA VI, Xbox Series X, PE32+ x64)
// Address: 14019d670  size: 476 bytes
// Name:    FUN_14019d670
// Subsystem: core
//
// Referenced strings (0 in this body, 0 including direct callees):
// Callees: FUN_145064d60, FUN_145063f40, FUN_144e08970
//
// Generated decompilation. Formatting follows MiscRef/GTAVSRC conventions;
// identifiers are recovered, not original. See ../../../README.md.

#include "gta6decomp/rage_types.h"


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_14019d670(longlong param_1,undefined8 *param_2,undefined8 param_3)

{
  longlong lVar1;
  longlong lVar2;
  int iVar3;
  uint uVar4;
  longlong *plVar5;
  undefined8 uVar6;
  int iVar7;
  undefined4 uVar8;
  undefined1 auStack_80 [32];
  undefined8 uStack_60;
  undefined4 uStack_58;
  undefined4 uStack_54;
  undefined4 uStack_50;
  undefined8 uStack_4c;
  undefined4 uStack_44;
  undefined4 uStack_40;
  undefined1 uStack_3c;
  
  uVar6 = param_2[1];
  *(undefined8 *)(param_1 + 0xe0) = *param_2;
  *(undefined8 *)(param_1 + 0xe8) = uVar6;
  plVar5 = *(longlong **)(param_1 + 0xe0);
  iVar3 = *(int *)(param_1 + 0xe8);
  iVar7 = func_0x000144e05fa0(plVar5[1]);
  uVar6 = _UNK_145fc6ee8;
  if (iVar3 == iVar7) {
    *(undefined8 *)(param_1 + 0xf0) = _DAT_145fc6ee0;
    *(undefined8 *)(param_1 + 0xf8) = uVar6;
    *(undefined1 (*) [16])(param_1 + 0x100) = ZEXT816(0) << 0x20;
  }
  else {
    uVar8 = (**(code **)(*plVar5 + 0xf0))(plVar5,iVar3);
    (**(code **)(*plVar5 + 0x108))(plVar5,uVar8,param_1 + 0xf0);
  }
  *(undefined8 *)(param_1 + 0x110) = 0;
  *(undefined4 *)(param_1 + 0x118) = 0;
  FUN_145064d60(auStack_80,param_3);
  FUN_144e08970(&uStack_60);
  uVar4 = *(uint *)(param_1 + 4);
  lVar1 = param_1 + 8 + (ulonglong)uVar4 * 0x48;
  *(uint *)(param_1 + 4) = uVar4 + 1;
  FUN_145063f40(lVar1,auStack_80);
  *(undefined8 *)(lVar1 + 0x20) = uStack_60;
  *(ulonglong *)(lVar1 + 0x28) = CONCAT44(uStack_54,uStack_58);
  *(ulonglong *)(lVar1 + 0x2c) = CONCAT44(uStack_50,uStack_54);
  *(undefined8 *)(lVar1 + 0x34) = uStack_4c;
  lVar1 = param_1 + 0x44 + (ulonglong)uVar4 * 0x48;
  func_0x000144df8490(lVar1,uStack_44);
  *(undefined4 *)(lVar1 + 4) = uStack_40;
  *(undefined1 *)(lVar1 + 8) = uStack_3c;
  FUN_145064d60(auStack_80,param_3);
  FUN_144e08970(&uStack_60);
  uVar4 = *(uint *)(param_1 + 4);
  lVar1 = param_1 + 8 + (ulonglong)uVar4 * 0x48;
  *(uint *)(param_1 + 4) = uVar4 + 1;
  FUN_145063f40(lVar1,auStack_80);
  *(undefined8 *)(lVar1 + 0x20) = uStack_60;
  *(ulonglong *)(lVar1 + 0x28) = CONCAT44(uStack_54,uStack_58);
  *(ulonglong *)(lVar1 + 0x2c) = CONCAT44(uStack_50,uStack_54);
  *(undefined8 *)(lVar1 + 0x34) = uStack_4c;
  lVar1 = param_1 + 0x44 + (ulonglong)uVar4 * 0x48;
  func_0x000144df8490(lVar1,uStack_44);
  *(undefined4 *)(lVar1 + 4) = uStack_40;
  *(undefined1 *)(lVar1 + 8) = uStack_3c;
  FUN_145064d60(auStack_80,param_3);
  FUN_144e08970(&uStack_60);
  uVar4 = *(uint *)(param_1 + 4);
  lVar1 = param_1 + 8 + (ulonglong)uVar4 * 0x48;
  *(uint *)(param_1 + 4) = uVar4 + 1;
  FUN_145063f40(lVar1,auStack_80);
  lVar2 = param_1 + 0x44 + (ulonglong)uVar4 * 0x48;
  *(undefined8 *)(lVar1 + 0x20) = uStack_60;
  *(ulonglong *)(lVar1 + 0x28) = CONCAT44(uStack_54,uStack_58);
  *(ulonglong *)(lVar1 + 0x2c) = CONCAT44(uStack_50,uStack_54);
  *(undefined8 *)(lVar1 + 0x34) = uStack_4c;
  func_0x000144df8490(lVar2,uStack_44);
  *(undefined4 *)(lVar2 + 4) = uStack_40;
  *(undefined1 *)(lVar2 + 8) = uStack_3c;
  return;
}

