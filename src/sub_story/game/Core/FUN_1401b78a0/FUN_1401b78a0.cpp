// Recovered from game_scarlett_master.exe (GTA VI, Xbox Series X, PE32+ x64)
// Address: 1401b78a0  size: 2237 bytes
// Name:    FUN_1401b78a0
// Subsystem: core
//
// Referenced strings (0 in this body, 0 including direct callees):
// Callees: FUN_1401b4790, FUN_145079070, FUN_144f214d0, FUN_1401bb670, FUN_1401b8430, FUN_145078410, FUN_1401b71d0, FUN_145078ec0, FUN_140459510, FUN_1401bbb80, FUN_14045a310, FUN_144e46a00, FUN_1401b82d0, FUN_14438f520, FUN_140092fd0, FUN_145242f60, FUN_1401ba120, FUN_144f215a0, FUN_14438f4e0, FUN_1401b8170, FUN_1401b8230, FUN_1401b84f0, FUN_1401bae50, FUN_140092c30
//
// Generated decompilation. Formatting follows MiscRef/GTAVSRC conventions;
// identifiers are recovered, not original. See ../../../README.md.

#include "gta6decomp/rage_types.h"


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined8
FUN_1401b78a0(longlong param_1,longlong *param_2,undefined8 param_3,undefined8 param_4,
             undefined8 param_5)

{
  char cVar1;
  int iVar2;
  undefined4 uVar3;
  longlong lVar4;
  undefined8 uVar5;
  longlong *plVar6;
  longlong *plVar7;
  longlong lVar8;
  undefined1 uVar9;
  ulonglong in_stack_fffffffffffffe30;
  longlong lStack_1b8;
  undefined4 uStack_1ac;
  undefined4 uStack_1a8;
  undefined4 uStack_1a4;
  undefined4 uStack_1a0;
  undefined1 auStack_198 [32];
  undefined1 uStack_178;
  int iStack_15c;
  undefined4 uStack_158;
  undefined4 uStack_154;
  undefined4 uStack_150;
  undefined1 auStack_148 [32];
  undefined1 uStack_128;
  undefined1 auStack_118 [16];
  undefined1 auStack_108 [16];
  undefined1 auStack_f8 [16];
  undefined1 auStack_e8 [16];
  undefined1 auStack_d8 [16];
  undefined1 auStack_c8 [16];
  undefined1 auStack_b8 [16];
  undefined1 auStack_a8 [16];
  undefined1 auStack_98 [24];
  undefined4 *puStack_80;
  code *pcStack_78;
  undefined *puStack_70;
  undefined *puStack_68;
  undefined4 *puStack_60;
  code *pcStack_58;
  undefined *puStack_50;
  undefined *puStack_48;
  
  lVar4 = param_2[2];
  FUN_1401b8170(param_4,&iStack_15c);
  if (iStack_15c == 0) {
    cVar1 = func_0x0001401b8160(param_4);
    if (cVar1 != '\0') {
      auStack_c8._0_12_ = ZEXT812(0);
      auStack_c8._12_4_ = 0;
      uStack_1a8 = 0x275822c4;
      func_0x000144df5050(auStack_198);
      uStack_178 = 0;
      cVar1 = func_0x000145077f30(param_4);
      if (cVar1 == '\0') {
        iVar2 = FUN_145242f60(param_4);
        if (iVar2 == 0xd) {
          FUN_145078410();
        }
        else {
          FUN_14045a310(param_4,&uStack_1a8,0);
        }
      }
      else {
        FUN_1401ba120(param_4,&uStack_1a8);
      }
      cVar1 = func_0x000144da4370(*(undefined1 *)(_DAT_14ab7ef10 + 0x232));
      if (cVar1 == '\0') {
        FUN_14438f4e0(param_5,auStack_98);
        FUN_144e46a00(auStack_198,auStack_98);
        lVar8 = FUN_1401bae50(lVar4,*(undefined8 *)(*param_2 + 0x230),&uStack_1a8);
      }
      else {
        FUN_1401b8230(param_5,&uStack_158);
        in_stack_fffffffffffffe30 = in_stack_fffffffffffffe30 & 0xffffffffffffff00;
        lVar8 = FUN_145079070(&uStack_1a8,param_2,&uStack_158,0,0,in_stack_fffffffffffffe30);
      }
      if (lVar8 == 0) {
        return 0;
      }
      if (((int)param_2[7] == 4) || (lVar8 = FUN_1401b4790(param_3,lVar8), lVar8 != 0)) {
        uVar3 = func_0x0001401b81b0(param_4);
        goto LAB_1401b7904;
      }
    }
    uVar3 = 0;
    lVar8 = 0;
  }
  else {
    lVar8 = 0;
    uVar3 = 0;
    if ((iStack_15c != 1) && (iStack_15c != 3)) {
      if (iStack_15c != 2) {
        return 0;
      }
      auStack_f8._0_12_ = ZEXT812(0);
      auStack_f8._12_4_ = 0;
      uStack_1a8 = 0x275822c4;
      func_0x000144df5050(auStack_198);
      uStack_178 = 0;
      cVar1 = func_0x000145077f30(param_4);
      if (cVar1 == '\0') {
        iVar2 = FUN_145242f60(param_4);
        if (iVar2 == 0xd) {
          FUN_145078ec0();
        }
        else {
          FUN_14045a310(param_5,&uStack_1a8,0);
        }
      }
      else {
        FUN_1401ba120(param_5,&uStack_1a8);
      }
      iVar2 = FUN_1401bb670(param_4);
      uStack_1a4 = func_0x0001401b82a0(uStack_1a4);
      lVar8 = FUN_1401bae50(lVar4,*(undefined8 *)(*param_2 + 0x230),&uStack_1a8);
      if (lVar8 == 0) {
        return 0;
      }
      if ((int)param_2[7] == 4) {
        lStack_1b8 = 0;
      }
      else {
        lVar8 = FUN_1401b4790(param_3,lVar8);
        lStack_1b8 = lVar8;
      }
      cVar1 = func_0x000144f21430(param_4);
      if (cVar1 == '\0') {
        auStack_108._0_12_ = ZEXT812(0);
        auStack_108._12_4_ = 0;
        uStack_158 = 0x275822c4;
        func_0x000144df5050(auStack_148);
        uStack_128 = 0;
        uStack_150 = FUN_144f214d0(param_5,0);
        uVar3 = FUN_144f215a0(param_5);
        uStack_158 = 0x275822c4;
        if (*(longlong *)
             (*(longlong *)(param_1 + 0x10) + 0x18 + (ulonglong)*(uint *)(param_2 + 1) * 0x30) == 0)
        {
          return 0;
        }
        uStack_154 = func_0x0001401b82a0(uVar3);
        plVar7 = (longlong *)FUN_1401bae50(lVar4,*(undefined8 *)(*param_2 + 0x230));
        if (plVar7 == (longlong *)0x0) {
          return 0;
        }
        uVar3 = (**(code **)(**(longlong **)
                               (*(longlong *)(param_1 + 0x10) + 0x18 +
                               (ulonglong)*(uint *)(param_2 + 1) * 0x30) + 8))();
        plVar6 = (longlong *)FUN_1401bbb80(param_3,lVar8,plVar7,uVar3,iVar2 == 1);
        if (plVar6 == (longlong *)0x0) {
          return 0;
        }
        lVar4 = FUN_1401b71d0(param_3,uStack_154,uStack_150);
        if (lVar4 == 0) {
          return 0;
        }
        if ((int)param_2[7] == 0) {
          FUN_140459510(lStack_1b8,plVar6);
        }
        uVar5 = (**(code **)(*plVar7 + 200))(plVar7);
        lVar8 = 0;
        uVar9 = 0;
      }
      else {
        auStack_118._0_12_ = ZEXT812(0);
        auStack_118._12_4_ = 0;
        uStack_158 = 0x275822c4;
        func_0x000144df5050(auStack_148);
        uStack_128 = 0;
        uStack_150 = FUN_144f214d0(param_5,0);
        uStack_154 = FUN_144f215a0(param_5);
        FUN_140092c30(param_5,&uStack_1ac);
        uStack_158 = uStack_1ac;
        if (*(longlong *)
             (*(longlong *)(param_1 + 0x10) + 0x18 + (ulonglong)*(uint *)(param_2 + 1) * 0x30) == 0)
        {
          return 0;
        }
        uStack_154 = func_0x0001401b82a0(uStack_154);
        plVar7 = (longlong *)FUN_1401bae50(lVar4,*(undefined8 *)(*param_2 + 0x230),&uStack_158);
        if (plVar7 == (longlong *)0x0) {
          return 0;
        }
        uVar3 = (**(code **)(**(longlong **)
                               (*(longlong *)(param_1 + 0x10) + 0x18 +
                               (ulonglong)*(uint *)(param_2 + 1) * 0x30) + 8))();
        plVar6 = (longlong *)FUN_1401bbb80(param_3,lVar8,plVar7,uVar3,iVar2 == 1);
        if (plVar6 == (longlong *)0x0) {
          return 0;
        }
        FUN_140092fd0(param_5,&uStack_1ac);
        lVar4 = FUN_1401b8430(param_3,uStack_1ac);
        if (lVar4 == 0) {
          return 0;
        }
        if ((int)param_2[7] == 0) {
          FUN_140459510(lStack_1b8,plVar6);
        }
        uVar5 = (**(code **)(*plVar7 + 200))(plVar7);
        lVar8 = 0;
        uVar9 = 0;
      }
      goto LAB_1401b7b02;
    }
  }
LAB_1401b7904:
  cVar1 = func_0x000144f21430(param_4);
  if (cVar1 == '\0') {
    auStack_d8._0_12_ = ZEXT812(0);
    auStack_d8._12_4_ = 0;
    uStack_1a8 = 0x275822c4;
    func_0x000144df5050(auStack_198);
    uStack_178 = 0;
    uStack_1a0 = FUN_144f214d0(param_5,0);
    uStack_1a4 = FUN_144f215a0(param_5);
    uStack_1a8 = 0x275822c4;
    cVar1 = func_0x000144da4370(*(undefined1 *)(_DAT_14ab7ef10 + 0x232));
    if (cVar1 == '\0') {
      func_0x000144391190(&uStack_158,&uStack_1a8,param_2[2],*(undefined8 *)(*param_2 + 0x230),
                          *(undefined8 *)
                           (*(longlong *)(param_1 + 0x10) + 0x18 +
                           (ulonglong)*(uint *)(param_2 + 1) * 0x30));
      uVar5 = func_0x000140004380(*(undefined4 *)(*param_2 + 0x2c));
      pcStack_78 = FUN_1443911b0;
      puStack_70 = &UNK_1403a85f0;
      puStack_68 = &SUB_140004380;
      puStack_80 = &uStack_158;
      FUN_14438f520(param_5,auStack_b8,&puStack_80,uVar5);
      FUN_144e46a00(auStack_198,auStack_b8);
      lVar4 = FUN_1401bae50(lVar4,*(undefined8 *)(*param_2 + 0x230),&uStack_1a8);
    }
    else {
      lVar4 = *(longlong *)(param_1 + 0x10) + 0x10 + (ulonglong)*(uint *)(param_2 + 1) * 0x30;
      uVar5 = *(undefined8 *)(lVar4 + 8);
      FUN_1401b8230(param_5,&uStack_158);
      lVar4 = FUN_145079070(&uStack_1a8,param_2,&uStack_158,uVar5,lVar4,
                            in_stack_fffffffffffffe30 & 0xffffffffffffff00);
    }
    if (lVar4 != 0) {
      uVar5 = FUN_1401b82d0(param_3,lVar4,uVar3,lVar8);
      return uVar5;
    }
  }
  else {
    auStack_e8._0_12_ = ZEXT812(0);
    auStack_e8._12_4_ = 0;
    uStack_1a8 = 0x275822c4;
    func_0x000144df5050(auStack_198);
    uStack_178 = 0;
    uStack_1a0 = FUN_144f214d0(param_5,0);
    uStack_1a4 = FUN_144f215a0(param_5);
    FUN_140092c30(param_5,&uStack_158);
    uStack_1a8 = uStack_158;
    cVar1 = func_0x000144da4370(*(undefined1 *)(_DAT_14ab7ef10 + 0x232));
    if (cVar1 == '\0') {
      func_0x000144391190(&uStack_158,&uStack_1a8,param_2[2],*(undefined8 *)(*param_2 + 0x230),
                          *(undefined8 *)
                           (*(longlong *)(param_1 + 0x10) + 0x18 +
                           (ulonglong)*(uint *)(param_2 + 1) * 0x30));
      uVar5 = func_0x000140004380(*(undefined4 *)(*param_2 + 0x2c));
      pcStack_58 = FUN_1443911b0;
      puStack_50 = &UNK_1403a85f0;
      puStack_48 = &SUB_140004380;
      puStack_60 = &uStack_158;
      FUN_14438f520(param_5,auStack_a8,&puStack_60,uVar5);
      FUN_144e46a00(auStack_198,auStack_a8);
      plVar6 = (longlong *)FUN_1401bae50(lVar4,*(undefined8 *)(*param_2 + 0x230),&uStack_1a8);
    }
    else {
      lVar4 = *(longlong *)(param_1 + 0x10) + 0x10 + (ulonglong)*(uint *)(param_2 + 1) * 0x30;
      uVar5 = *(undefined8 *)(lVar4 + 8);
      FUN_1401b8230(param_5,&uStack_158);
      plVar6 = (longlong *)
               FUN_145079070(&uStack_1a8,param_2,&uStack_158,uVar5,lVar4,
                             in_stack_fffffffffffffe30 & 0xffffffffffffff00);
    }
    if (plVar6 != (longlong *)0x0) {
      FUN_140092fd0(param_5,&uStack_158);
      lVar4 = FUN_1401b8430(param_3,uStack_158);
      if (lVar4 != 0) {
        uVar5 = (**(code **)(*plVar6 + 200))(plVar6);
        uVar9 = (undefined1)uVar3;
LAB_1401b7b02:
        uVar5 = FUN_1401b84f0(param_3,lVar4,plVar6,uVar5,uVar9,lVar8);
        return uVar5;
      }
    }
  }
  return 0;
}

