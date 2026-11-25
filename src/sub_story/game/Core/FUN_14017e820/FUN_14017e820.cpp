// Recovered from game_scarlett_master.exe (GTA VI, Xbox Series X, PE32+ x64)
// Address: 14017e820  size: 747 bytes
// Name:    FUN_14017e820
// Subsystem: core
//
// Referenced strings (0 in this body, 0 including direct callees):
// Callees: FUN_140de6d40, FUN_14532db80, FUN_14532db20, FUN_1454c44b0, FUN_145079fd0, FUN_1456e5dd0
//
// Generated decompilation. Formatting follows MiscRef/GTAVSRC conventions;
// identifiers are recovered, not original. See ../../../README.md.

#include "gta6decomp/rage_types.h"


undefined1 (*) [32]
FUN_14017e820(undefined1 (*param_1) [32],longlong param_2,undefined8 param_3,
             undefined1 (*param_4) [16])

{
  byte bVar1;
  uint uVar2;
  longlong lVar3;
  longlong lVar4;
  longlong lVar5;
  longlong lVar6;
  undefined8 uVar7;
  ulonglong uVar8;
  uint uVar9;
  uint uVar10;
  undefined1 (*pauVar11) [16];
  undefined1 auVar12 [16];
  undefined8 in_stack_ffffffffffffff68;
  undefined4 uVar14;
  undefined1 aauStack_68 [2] [16];
  undefined1 auVar13 [64];
  
  uVar14 = (undefined4)((ulonglong)in_stack_ffffffffffffff68 >> 0x20);
  *param_1 = ZEXT1232(ZEXT812(0));
  FUN_145079fd0(param_1 + 1);
  *(undefined8 *)(param_1[1] + 8) = param_3;
  auVar12._0_12_ = ZEXT812(0);
  auVar12._12_4_ = 0;
  auVar13 = ZEXT1664(auVar12);
  *(undefined4 *)(param_1[1] + 0x10) = *(undefined4 *)(param_2 + 0x30);
  *(undefined4 *)(param_1[1] + 0x14) = *(undefined4 *)(param_2 + 0x34);
  param_1[1][0x18] = 0;
  pauVar11 = param_4;
  aauStack_68[0] = auVar12;
  if (param_4 == (undefined1 (*) [16])0x0) {
    lVar3 = func_0x000140652cb0(*(undefined8 *)(param_2 + 0x20));
    lVar4 = func_0x000140652cc0(*(undefined4 *)(param_2 + 4),*(undefined4 *)(param_2 + 0x14));
    lVar4 = lVar4 + lVar3;
    lVar3 = func_0x000144d9c140(0x10,lVar4);
    FUN_14532db80(lVar3,lVar4);
    auVar12 = auVar13._0_16_;
    pauVar11 = aauStack_68;
    aauStack_68[0]._0_8_ = lVar4 + lVar3;
  }
  lVar3 = *(longlong *)(param_2 + 0x20);
  lVar5 = FUN_1454c44b0(*(undefined4 *)(lVar3 + 0x4c),*(undefined4 *)(lVar3 + 0xac),
                        *(undefined4 *)(lVar3 + 0x3c),*(undefined4 *)(lVar3 + 0x9c),
                        CONCAT44(uVar14,*(undefined4 *)(lVar3 + 0xdc)),auVar12,pauVar11,pauVar11);
  uVar9 = *(int *)(param_2 + 4) + 5;
  lVar6 = func_0x000144f97130((ulonglong)uVar9 * 6);
  *(longlong *)(*param_1 + 8) = lVar6;
  *(uint *)*param_1 = uVar9;
  bVar1 = param_1[1][0x18];
  param_1[1][0x18] = bVar1 | 1;
  uVar10 = *(int *)(param_2 + 0x14) + 5;
  uVar7 = func_0x000144f97130((ulonglong)uVar10 * 6);
  *(undefined8 *)(*param_1 + 0x18) = uVar7;
  *(uint *)(*param_1 + 0x10) = uVar10;
  param_1[1][0x18] = bVar1 | 3;
  uVar2 = *(uint *)(param_2 + 4);
  lVar3 = *(longlong *)(param_2 + 8);
  lVar4 = (ulonglong)uVar2 * 6;
  if (uVar9 < uVar2) {
    *(undefined4 *)(*param_1 + 4) = 0;
    FUN_1456e5dd0(param_1,uVar2);
    func_0x000145f40560(*(undefined8 *)(*param_1 + 8),lVar3,lVar4);
    uVar10 = *(uint *)(*param_1 + 0x10);
  }
  else {
    uVar8 = (ulonglong)*(uint *)(*param_1 + 4);
    if (*(uint *)(*param_1 + 4) < uVar2) {
      if (uVar8 == 0) {
        uVar8 = 0;
      }
      else {
        func_0x000145f40560(lVar6,lVar3,uVar8 * 6);
      }
      lVar6 = lVar6 + uVar8 * 6;
      lVar3 = lVar3 + uVar8 * 6;
      lVar4 = (uVar2 - uVar8) * 6;
    }
    func_0x000145f40560(lVar6,lVar3,lVar4);
  }
  *(uint *)(*param_1 + 4) = uVar2;
  uVar2 = *(uint *)(param_2 + 0x14);
  lVar3 = *(longlong *)(param_2 + 0x18);
  if (uVar10 < uVar2) {
    *(undefined4 *)(*param_1 + 0x14) = 0;
    FUN_1456e5dd0(*param_1 + 0x10,uVar2);
    uVar7 = *(undefined8 *)(*param_1 + 0x18);
  }
  else {
    uVar10 = *(uint *)(*param_1 + 0x14);
    if (uVar10 < uVar2) {
      lVar4 = *(longlong *)(*param_1 + 0x18);
      if ((ulonglong)uVar10 == 0) {
        uVar8 = 0;
      }
      else {
        func_0x000145f40560(lVar4,lVar3,(ulonglong)uVar10 * 6);
        uVar8 = (ulonglong)*(uint *)(*param_1 + 0x14);
        lVar4 = *(longlong *)(*param_1 + 0x18);
      }
      func_0x000145f40560(lVar4 + uVar8 * 6,lVar3 + uVar8 * 6,(uVar2 - uVar8) * 6);
      goto LAB_14017ea03;
    }
    uVar7 = *(undefined8 *)(*param_1 + 0x18);
  }
  func_0x000145f40560(uVar7,lVar3,(ulonglong)uVar2 * 6);
LAB_14017ea03:
  *(uint *)(*param_1 + 0x14) = uVar2;
  FUN_140de6d40(lVar5,0,0,*(undefined8 *)(param_2 + 0x20),pauVar11);
  *(longlong *)param_1[1] = lVar5;
  if (param_4 == (undefined1 (*) [16])0x0) {
    *(byte *)(lVar5 + 0xe5) = *(byte *)(lVar5 + 0xe5) | 2;
    FUN_14532db20();
  }
  else {
    *(byte *)(lVar5 + 0xe5) = *(byte *)(lVar5 + 0xe5) | 1;
  }
  return param_1;
}

