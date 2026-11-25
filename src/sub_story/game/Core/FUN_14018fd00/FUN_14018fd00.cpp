// Recovered from game_scarlett_master.exe (GTA VI, Xbox Series X, PE32+ x64)
// Address: 14018fd00  size: 1679 bytes
// Name:    FUN_14018fd00
// Subsystem: core
//
// Referenced strings (0 in this body, 0 including direct callees):
// Callees: FUN_1404a72c0, FUN_1452b3070, FUN_145123660, FUN_1409519a0, FUN_140190430, FUN_14246f8c0, FUN_144546970, FUN_140190390
//
// Generated decompilation. Formatting follows MiscRef/GTAVSRC conventions;
// identifiers are recovered, not original. See ../../../README.md.

#include "gta6decomp/rage_types.h"


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_14018fd00(longlong param_1)

{
  byte bVar1;
  undefined4 uVar2;
  uint uVar3;
  longlong lVar4;
  longlong lVar5;
  longlong *plVar6;
  undefined4 uVar7;
  int iVar8;
  undefined1 in_register_00001244 [12];
  undefined1 auVar9 [16];
  undefined1 auVar10 [16];
  undefined1 auVar11 [64];
  undefined1 auVar12 [64];
  undefined1 auVar13 [64];
  undefined8 auStack_3f8 [96];
  undefined4 uStack_f8;
  undefined1 auStack_7e [22];
  undefined1 uStack_68;
  byte bStack_62;
  
  func_0x000144da3240(*(undefined8 *)(param_1 + 0x40));
  uVar2 = FUN_145123660();
  if ((((char)uVar2 == '\0') && (*(int *)(param_1 + 0x648) != 0)) &&
     ((*(byte *)(param_1 + 0x59c) & 1) == 0)) {
    lVar4 = func_0x000144da3240(*(undefined8 *)(param_1 + 0x40));
    lVar4 = func_0x000145299740(*(undefined4 *)(lVar4 + 0x9c));
    if (((lVar4 != 0) && (lVar5 = func_0x000144da31b0(param_1 + 0x5a0), lVar5 == 0)) &&
       (uVar3 = *(int *)(lVar4 + 0x278) - 1, uVar3 < 4)) {
      uVar7 = *(undefined4 *)(&UNK_146630c9c + (ulonglong)uVar3 * 4);
LAB_14018fda9:
      *(undefined4 *)(param_1 + 0x5a8) = uVar7;
    }
  }
  else {
    uVar7 = 0;
    if ((*(byte *)(param_1 + 0x59c) & 1) == 0) goto LAB_14018fda9;
  }
  FUN_140190430(param_1,uVar2);
  lVar4 = *(longlong *)(*(longlong *)(param_1 + 0x48) + 0x10);
  iVar8 = 0;
  if ((char)uVar2 == '\0') {
    bVar1 = FUN_140190390(param_1);
    if ((*(int *)(param_1 + 0x648) == 2 & bVar1) == 1) {
      if (*(float *)(param_1 + 0x5f0) <= *(float *)(param_1 + 0x5c0) * *(float *)(lVar4 + 0x200)) {
        iVar8 = 1;
        goto LAB_14018fe37;
      }
    }
    else {
      iVar8 = 0;
      if (*(int *)(param_1 + 0x648) == 0) goto LAB_14018fe37;
    }
    iVar8 = 0;
    if ((*(char *)(param_1 + 0x64c) == '\x01') &&
       (((_DAT_145fc6edc <= *(float *)(param_1 + 0x5dc) ||
         (*(float *)(lVar4 + 0x218) < *(float *)(param_1 + 0xaf4))) ||
        (*(float *)(lVar4 + 0x21c) < *(float *)(param_1 + 0xadc))))) {
      bVar1 = FUN_144546970(*(undefined8 *)(param_1 + 0x40));
      iVar8 = (uint)bVar1 * 2;
    }
  }
LAB_14018fe37:
  if (iVar8 == *(int *)(param_1 + 0x228) && *(int *)(param_1 + 0x228) != 0) {
    if (iVar8 == 2) {
      *(undefined4 *)(param_1 + 0x228) = 2;
      lVar5 = func_0x000144da31b0(param_1 + 0x1d8);
      if ((lVar5 == 0) && (*(char *)(param_1 + 0x64e) == '\0')) {
        FUN_14246f8c0(param_1,*(undefined8 *)(lVar4 + 0x1c4),param_1 + 0x1d8);
      }
    }
    else if (iVar8 == 1) {
      *(undefined4 *)(param_1 + 0x228) = 1;
      lVar5 = func_0x000144da31b0(param_1 + 0x1d8);
      if (lVar5 == 0) {
        FUN_14246f8c0(param_1,*(undefined8 *)(lVar4 + 0x1cc),param_1 + 0x1d8);
      }
      lVar5 = func_0x000144da31b0(param_1 + 0x1e0);
      if (lVar5 == 0) {
        FUN_1452b3070(auStack_3f8);
        bStack_62 = bStack_62 | 2;
        uStack_f8 = 9;
        uStack_68 = 0;
        auVar11 = ZEXT464(*(uint *)(param_1 + 0x5cc));
        func_0x00014544b920(auStack_3f8,0x5daee086,*(uint *)(param_1 + 0x5cc),1);
        auVar9._0_4_ = (float)*(int *)(param_1 + 0x5d8);
        auVar9._4_12_ = in_register_00001244;
        func_0x00014544b920(auStack_3f8,0x3200270e,auVar9._0_8_,1);
        func_0x00014544b920(auStack_3f8,0x4e0ba2df,*(undefined4 *)(param_1 + 0x5dc),1);
        auVar12 = ZEXT464(*(uint *)(param_1 + 0x5d0));
        func_0x00014544b920(auStack_3f8,0x9baad098,*(uint *)(param_1 + 0x5d0),1);
        auVar13 = ZEXT464(*(uint *)(param_1 + 0xaec));
        func_0x00014544b920(auStack_3f8,0xde29e2d6,*(uint *)(param_1 + 0xaec),1);
        func_0x00014544b920(auStack_3f8,0xd6bb74f6,auVar11._0_8_,1);
        func_0x00014544b920(auStack_3f8,0xea0151dc,auVar12._0_8_,1);
        func_0x00014544b920(auStack_3f8,0xf8543300,auVar13._0_8_,1);
        FUN_1404a72c0(param_1,*(undefined8 *)(lVar4 + 0x1bc),param_1 + 0x1e0,auStack_3f8,1);
        func_0x000144de1380(auStack_7e);
      }
    }
    lVar4 = param_1 + 0x1e0;
    plVar6 = (longlong *)func_0x000144da31b0(lVar4);
    if (plVar6 != (longlong *)0x0) {
      (**(code **)(*plVar6 + 0x18))(plVar6,0xe120ddf,*(undefined4 *)(param_1 + 0x5e0));
      plVar6 = (longlong *)func_0x000144da31b0(lVar4);
      (**(code **)(*plVar6 + 0x18))(plVar6,0x303ebba4,*(undefined4 *)(param_1 + 0x5f8));
      plVar6 = (longlong *)func_0x000144da31b0(lVar4);
      (**(code **)(*plVar6 + 0x18))(plVar6,0xb85e929e,*(undefined4 *)(param_1 + 0x5f0));
      plVar6 = (longlong *)func_0x000144da31b0(lVar4);
      (**(code **)(*plVar6 + 0x18))(plVar6,0xea2108ad,*(undefined4 *)(param_1 + 0x624));
      plVar6 = (longlong *)func_0x000144da31b0(lVar4);
      (**(code **)(*plVar6 + 0x18))(plVar6,0x5daee086,*(undefined4 *)(param_1 + 0x5cc));
      plVar6 = (longlong *)func_0x000144da31b0(lVar4);
      (**(code **)(*plVar6 + 0x18))(plVar6,0x9baad098,*(undefined4 *)(param_1 + 0x5d0));
      plVar6 = (longlong *)func_0x000144da31b0(lVar4);
      (**(code **)(*plVar6 + 0x18))(plVar6,0xde29e2d6,*(undefined4 *)(param_1 + 0xaec));
      plVar6 = (longlong *)func_0x000144da31b0(lVar4);
      auVar10._0_4_ = (float)*(int *)(param_1 + 0x5d8);
      auVar10._4_12_ = in_register_00001244;
      (**(code **)(*plVar6 + 0x18))(plVar6,0x3200270e,auVar10._0_8_);
      plVar6 = (longlong *)func_0x000144da31b0(lVar4);
      (**(code **)(*plVar6 + 0x18))(plVar6,0x4e0ba2df,*(undefined4 *)(param_1 + 0x5dc));
      plVar6 = (longlong *)func_0x000144da31b0(lVar4);
      (**(code **)(*plVar6 + 0x18))(plVar6,0x74c60248,*(undefined4 *)(param_1 + 0xadc));
      plVar6 = (longlong *)func_0x000144da31b0(lVar4);
      (**(code **)(*plVar6 + 0x18))(plVar6,0x8deb6f82,*(undefined4 *)(param_1 + 0xae4));
      plVar6 = (longlong *)func_0x000144da31b0(lVar4);
      (**(code **)(*plVar6 + 0x18))(plVar6,0x38951bf4,*(undefined4 *)(param_1 + 0xae0));
      plVar6 = (longlong *)func_0x000144da31b0(lVar4);
      (**(code **)(*plVar6 + 0x18))(plVar6,0x10a48525,*(undefined4 *)(param_1 + 0xae8));
      plVar6 = (longlong *)func_0x000144da31b0(lVar4);
      (**(code **)(*plVar6 + 0x18))(plVar6,0x4599cbae,*(undefined4 *)(param_1 + 0xaf0));
      plVar6 = (longlong *)func_0x000144da31b0(lVar4);
      (**(code **)(*plVar6 + 0x18))(plVar6,0x509e2325,*(undefined4 *)(param_1 + 0xaf4));
      plVar6 = (longlong *)func_0x000144da31b0(lVar4);
      (**(code **)(*plVar6 + 0x18))(plVar6,0xb184680e,*(undefined4 *)(param_1 + 0x5ec));
      plVar6 = (longlong *)func_0x000144da31b0(lVar4);
      (**(code **)(*plVar6 + 0x18))(plVar6,0x38f36a3d,*(undefined4 *)(param_1 + 0x5e0));
      plVar6 = (longlong *)func_0x000144da31b0(lVar4);
      (**(code **)(*plVar6 + 0x18))(plVar6,0x886a7451,*(undefined4 *)(param_1 + 0x5f8));
      plVar6 = (longlong *)func_0x000144da31b0(lVar4);
      (**(code **)(*plVar6 + 0x18))(plVar6,0xd6bb74f6,*(undefined4 *)(param_1 + 0x5cc));
      plVar6 = (longlong *)func_0x000144da31b0(lVar4);
      (**(code **)(*plVar6 + 0x18))(plVar6,0xea0151dc,*(undefined4 *)(param_1 + 0x5d0));
      plVar6 = (longlong *)func_0x000144da31b0(lVar4);
      (**(code **)(*plVar6 + 0x18))(plVar6,0xf8543300,*(undefined4 *)(param_1 + 0xaec));
      plVar6 = (longlong *)func_0x000144da31b0(lVar4);
      (**(code **)(*plVar6 + 0x18))(plVar6,0x5785ce8e,*(undefined4 *)(param_1 + 0x624));
    }
  }
  else {
    *(undefined4 *)(param_1 + 0x228) = 0;
    auStack_3f8[0] = *(undefined8 *)(param_1 + 0x1d8);
    lVar4 = func_0x000144da31b0();
    if (lVar4 != 0) {
      FUN_1409519a0(lVar4,1,0x7585d45d);
    }
    auStack_3f8[0] = *(undefined8 *)(param_1 + 0x1e0);
    lVar4 = func_0x000144da31b0();
    if (lVar4 != 0) {
      FUN_1409519a0(lVar4,1,0x7585d45d);
    }
  }
  return;
}

