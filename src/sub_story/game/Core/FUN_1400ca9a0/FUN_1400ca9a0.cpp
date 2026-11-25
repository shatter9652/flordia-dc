// Recovered from game_scarlett_master.exe (GTA VI, Xbox Series X, PE32+ x64)
// Address: 1400ca9a0  size: 803 bytes
// Name:    FUN_1400ca9a0
// Subsystem: core
//
// Referenced strings (0 in this body, 0 including direct callees):
// Callees: FUN_1450128a0, FUN_145012860
//
// Generated decompilation. Formatting follows MiscRef/GTAVSRC conventions;
// identifiers are recovered, not original. See ../../../README.md.

#include "gta6decomp/rage_types.h"


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

uint FUN_1400ca9a0(undefined8 param_1,longlong *param_2,uint param_3,int param_4,longlong *param_5,
                  longlong *param_6,char param_7)

{
  longlong *plVar1;
  uint uVar2;
  longlong lVar3;
  int iVar4;
  undefined4 uVar5;
  int iVar6;
  int iVar7;
  longlong lVar8;
  float fVar12;
  float fVar13;
  undefined1 auVar9 [16];
  float fVar14;
  undefined1 auVar10 [16];
  undefined1 auVar11 [16];
  undefined1 auVar15 [16];
  undefined1 auVar16 [16];
  float fVar17;
  undefined1 auVar18 [64];
  undefined1 auVar19 [16];
  undefined1 auVar20 [64];
  undefined1 auVar21 [16];
  undefined1 auVar22 [64];
  undefined1 auVar23 [16];
  undefined1 auStack_d8 [16];
  float fStack_c8;
  float fStack_c4;
  float fStack_c0;
  float fStack_bc;
  undefined *puStack_98;
  longlong *plStack_90;
  undefined1 auVar24 [64];
  
  (**(code **)(*param_2 + 0x88))(param_2,auStack_d8);
  auVar9._0_8_ = CONCAT44(_DAT_145fc6ed8 + fStack_c4,_DAT_145fc6ed8 + fStack_c8);
  auVar9._8_4_ = _DAT_145fc6ed8 + fStack_c0;
  auVar9._12_4_ = _DAT_145fc6ed8 + fStack_bc;
  auVar11 = vshufps_avx(auVar9,auVar9,0xff);
  auVar18 = ZEXT1664(auVar11);
  lVar8 = func_0x000144e63d10(auVar9._0_8_);
  plVar1 = (longlong *)*param_5;
  if (lVar8 == 0 || plVar1 == (longlong *)0x0) {
    plVar1 = (longlong *)*param_6;
    if (plVar1 == (longlong *)0x0) goto LAB_1400cac75;
    lVar8 = param_6[1];
    iVar4 = func_0x000144e05fa0(plVar1[1]);
    if ((int)lVar8 == iVar4) {
      auVar11._0_12_ = ZEXT812(0);
      auVar11._12_4_ = 0;
    }
    else {
      uVar5 = (**(code **)(*plVar1 + 0xf0))(plVar1,(int)lVar8);
      (**(code **)(*plVar1 + 0x108))(plVar1,uVar5,auStack_d8);
      auVar11._4_4_ = fStack_c4;
      auVar11._0_4_ = fStack_c8;
      auVar11._8_4_ = fStack_c0;
      auVar11._12_4_ = fStack_bc;
    }
    auVar10._0_8_ = auVar11._0_8_;
    auVar19._0_4_ = auVar11._0_4_ * auVar18._0_4_;
    auVar19._4_4_ = auVar11._4_4_ * auVar18._4_4_;
    auVar19._8_4_ = auVar11._8_4_ * auVar18._8_4_;
    auVar19._12_4_ = auVar11._12_4_ * auVar18._12_4_;
  }
  else {
    lVar3 = param_5[1];
    iVar4 = func_0x000144e05fa0(plVar1[1]);
    if ((int)lVar3 == iVar4) {
      fVar17 = 0.0;
      fVar12 = 0.0;
      fVar13 = 0.0;
      fVar14 = 0.0;
    }
    else {
      uVar5 = (**(code **)(*plVar1 + 0xf0))(plVar1,(int)lVar3);
      (**(code **)(*plVar1 + 0x108))(plVar1,uVar5,auStack_d8);
      fVar17 = fStack_c8;
      fVar12 = fStack_c4;
      fVar13 = fStack_c0;
      fVar14 = fStack_bc;
    }
    auVar10._0_8_ = CONCAT44(fVar12 * auVar18._4_4_,fVar17 * auVar18._0_4_);
    auVar10._8_4_ = fVar13 * auVar18._8_4_;
    auVar10._12_4_ = fVar14 * auVar18._12_4_;
    uVar5 = *(undefined4 *)(*(longlong *)(lVar8 + 0x928) + 0x28);
    auVar15._4_4_ = uVar5;
    auVar15._0_4_ = uVar5;
    auVar15._8_4_ = uVar5;
    auVar15._12_4_ = uVar5;
    auVar11 = vsubps_avx(auVar10,auVar15);
    auVar19 = vblendps_avx(auVar10,auVar11,4);
  }
  auVar20 = ZEXT1664(auVar19);
  uVar5 = FUN_1450128a0(auVar10._0_8_,param_4 + 4);
  FUN_145012860(&puStack_98,param_2,uVar5,param_4);
  puStack_98 = &UNK_14669fee0;
  lVar8 = plStack_90[0x766];
  iVar4 = func_0x0001450141d0(&puStack_98);
  iVar4 = func_0x00014001bd40(*(undefined8 *)(*(longlong *)(lVar8 + 0x10) + 0x80),
                              *(undefined4 *)(&UNK_14669fec8 + (longlong)iVar4 * 4));
  plVar1 = plStack_90;
  lVar8 = plStack_90[0x766];
  iVar6 = (**(code **)(puStack_98 + 8))(&puStack_98);
  iVar6 = func_0x00014001bd40(*(undefined8 *)(*(longlong *)(lVar8 + 0x10) + 0x80),
                              *(undefined4 *)(&UNK_14669fed0 + (longlong)iVar6 * 4));
  iVar7 = func_0x000144e05fa0(plVar1[1]);
  auVar22 = ZEXT1664(ZEXT816(0));
  auVar23 = ZEXT816(0);
  if (iVar4 != iVar7) {
    uVar5 = (**(code **)(*plVar1 + 0xf0))(plVar1,iVar4);
    (**(code **)(*plVar1 + 0x108))(plVar1,uVar5,auStack_d8);
    auVar23._4_4_ = fStack_c4;
    auVar23._0_4_ = fStack_c8;
    auVar23._8_4_ = fStack_c0;
    auVar23._12_4_ = fStack_bc;
  }
  auVar24 = ZEXT1664(auVar23);
  iVar4 = func_0x000144e05fa0(plStack_90[1]);
  auVar11 = auVar20._0_16_;
  fVar17 = auVar18._0_4_;
  auVar21 = auVar22._0_16_;
  auVar9 = auVar24._0_16_;
  if (iVar6 != iVar4) {
    uVar5 = (**(code **)(*plStack_90 + 0xf0))(plStack_90,iVar6);
    (**(code **)(*plStack_90 + 0x108))(plStack_90,uVar5,auStack_d8);
    auVar11 = auVar20._0_16_;
    fVar17 = auVar18._0_4_;
    auVar9 = auVar24._0_16_;
    auVar21._4_4_ = fStack_c4;
    auVar21._0_4_ = fStack_c8;
    auVar21._8_4_ = fStack_c0;
    auVar21._12_4_ = fStack_bc;
  }
  auVar9 = vshufpd_avx(auVar9,auVar9,1);
  auVar19 = vshufpd_avx(auVar21,auVar21,1);
  fVar13 = auVar9._0_4_ * fVar17;
  fVar12 = _DAT_146159f8c;
  if ((char)param_3 == '\0') {
    fVar12 = _DAT_145fc7020;
  }
  auVar16._0_4_ = (uint)(-(fVar17 * auVar19._0_4_) + fVar13) & _DAT_145fc6f4c;
  auVar16._4_4_ = auVar19._4_4_ & _DAT_145fc6f4c;
  auVar16._8_4_ = auVar19._8_4_ & _DAT_145fc6f4c;
  auVar16._12_4_ = auVar19._12_4_ & _DAT_145fc6f4c;
  auVar11 = vshufpd_avx(auVar11,auVar11,1);
  uVar2 = _DAT_14615ae90;
  if (param_7 != '\0') {
    fVar12 = fVar12 + _DAT_14614f7d0;
    uVar2 = _DAT_146170720;
  }
  auVar9 = vcmpps_avx(auVar16,ZEXT416(uVar2),2);
  auVar11 = vcmpps_avx(ZEXT416((uint)(fVar13 - auVar11._0_4_)),ZEXT416((uint)fVar12),2);
  param_3 = auVar11._0_4_ & auVar9._0_4_;
LAB_1400cac75:
  return param_3 & 0xffffff01;
}

