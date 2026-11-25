// Recovered from game_scarlett_master.exe (GTA VI, Xbox Series X, PE32+ x64)
// Address: 14001eff0  size: 978 bytes
// Name:    FUN_14001eff0
// Subsystem: core
//
// Referenced strings (0 in this body, 0 including direct callees):
// Callees: FUN_144df69c0, FUN_144df2390, FUN_144e065a0, FUN_144e09710, FUN_144df2140, FUN_144e079f0, FUN_144df6280
//
// Generated decompilation. Formatting follows MiscRef/GTAVSRC conventions;
// identifiers are recovered, not original. See ../../../README.md.

#include "gta6decomp/rage_types.h"


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

ulonglong FUN_14001eff0(longlong *param_1,longlong param_2,undefined8 param_3,longlong param_4,
                       undefined1 param_5)

{
  longlong *plVar1;
  float fVar2;
  float fVar3;
  undefined1 auVar4 [16];
  undefined1 auVar5 [16];
  undefined1 auVar6 [16];
  undefined1 auVar7 [16];
  undefined1 auVar8 [16];
  undefined1 auVar9 [16];
  longlong lVar10;
  byte bVar11;
  byte bVar12;
  int iVar13;
  undefined4 uVar14;
  undefined7 uVar15;
  ulonglong uVar16;
  undefined8 unaff_RBP;
  undefined1 auVar17 [16];
  undefined1 auVar18 [16];
  undefined1 auVar19 [16];
  undefined1 auVar20 [16];
  undefined1 auVar21 [16];
  float fVar22;
  undefined1 auVar23 [16];
  undefined1 auVar24 [64];
  float fVar25;
  undefined1 auVar26 [64];
  undefined1 auVar27 [64];
  undefined8 uStack_168;
  undefined8 uStack_160;
  undefined8 uStack_158;
  undefined8 uStack_150;
  undefined1 auStack_148 [16];
  undefined1 auStack_138 [16];
  undefined8 uStack_128;
  undefined1 uStack_120;
  undefined8 uStack_118;
  undefined8 uStack_110;
  undefined1 auStack_108 [16];
  float fStack_f8;
  undefined4 uStack_f4;
  undefined8 uStack_f0;
  undefined8 uStack_d8;
  undefined8 uStack_d0;
  undefined8 uStack_c8;
  undefined8 uStack_c0;
  undefined1 auStack_b8 [8];
  undefined8 uStack_b0;
  undefined1 auStack_a8 [16];
  undefined1 auStack_98 [16];
  undefined1 aauStack_88 [5] [16];
  
  if (*(longlong *)(param_2 + 0xd0) == 0 && *(longlong *)(param_2 + 200) == 0) {
    uVar16 = 0;
    goto LAB_14001f2d8;
  }
  uVar15 = (undefined7)((ulonglong)param_2 >> 8);
  FUN_144df2140(auStack_148,CONCAT71(uVar15,1));
  func_0x000144df21b0(auStack_148,2);
  FUN_144e079f0(param_2,param_3,auStack_148,
                CONCAT71((int7)((ulonglong)unaff_RBP >> 8),param_5) & 0xffffffff);
  plVar1 = (longlong *)*param_1;
  lVar10 = param_1[1];
  iVar13 = func_0x000144e05fa0(plVar1[1]);
  if ((int)lVar10 == iVar13) {
    uStack_118 = _DAT_145fc6ee0;
    uStack_110 = _UNK_145fc6ee8;
    auStack_108._0_12_ = ZEXT812(0);
    auStack_108._12_4_ = 0;
  }
  else {
    uVar14 = (**(code **)(*plVar1 + 0xf0))(plVar1,(int)lVar10);
    (**(code **)(*plVar1 + 0x108))(plVar1,uVar14,&uStack_118);
  }
  uStack_158 = 0;
  uStack_150 = 0;
  uStack_168 = uStack_118;
  uStack_160 = uStack_110;
  if (*(longlong *)(param_2 + 200) == 0) {
LAB_14001f30e:
    bVar11 = 0;
  }
  else {
    auStack_148._8_8_ = _UNK_145fc6ee8;
    auStack_148._0_8_ = _DAT_145fc6ee0;
    auVar24 = ZEXT1664(auStack_148);
    uStack_120 = 0;
    uStack_128 = 0;
    auStack_138 = auStack_148;
    FUN_144df6280(auStack_148,*(longlong *)(param_2 + 200),*(undefined8 *)(param_2 + 0xe0));
    if ((float)uStack_128 <= 0.0) goto LAB_14001f30e;
    plVar1 = (longlong *)*param_1;
    auVar27 = ZEXT1664(auStack_148);
    auVar26 = ZEXT1664(auStack_138);
    lVar10 = param_1[1];
    fVar22 = (float)uStack_128;
    iVar13 = func_0x000144e05fa0(plVar1[1]);
    auVar23 = auVar24._0_16_;
    auVar20 = auVar27._0_16_;
    auVar18 = auVar26._0_16_;
    if ((int)lVar10 != iVar13) {
      uVar14 = (**(code **)(*plVar1 + 0xf0))(plVar1,(int)lVar10);
      (**(code **)(*plVar1 + 0x108))(plVar1,uVar14,&fStack_f8);
      auVar20 = auVar27._0_16_;
      auVar18 = auVar26._0_16_;
      auVar23._4_4_ = uStack_f4;
      auVar23._0_4_ = fStack_f8;
      auVar23._8_8_ = uStack_f0;
    }
    auVar5 = vshufps_avx(auVar18,auVar18,0xff);
    fVar25 = auVar18._0_4_;
    auVar6 = vshufps_avx(auVar18,auVar18,0x55);
    auVar7 = vshufps_avx(auVar18,auVar18,0xaa);
    auVar18._0_4_ = auVar20._0_4_ ^ _DAT_145fc6f10;
    auVar18._4_4_ = auVar20._4_4_ ^ _DAT_145fc6f10;
    auVar18._8_4_ = auVar20._8_4_ ^ _DAT_145fc6f10;
    auVar18._12_4_ = auVar20._12_4_ ^ _DAT_145fc6f10;
    auVar18 = vblendps_avx(auVar18,auVar20,8);
    auVar21._0_4_ = (uint)auVar18._0_4_ ^ _DAT_145fc6f10;
    auVar21._4_4_ = (uint)auVar18._4_4_ ^ _DAT_145fc6f10;
    auVar21._8_4_ = (uint)auVar18._8_4_ ^ _DAT_145fc6f10;
    auVar21._12_4_ = (uint)auVar18._12_4_ ^ _DAT_145fc6f10;
    auVar17._0_4_ = (uint)auVar23._0_4_ ^ _DAT_145fc6f10;
    auVar17._4_4_ = (uint)auVar23._4_4_ ^ _DAT_145fc6f10;
    auVar17._8_4_ = (uint)auVar23._8_4_ ^ _DAT_145fc6f10;
    auVar17._12_4_ = (uint)auVar23._12_4_ ^ _DAT_145fc6f10;
    auVar20 = vblendps_avx(auVar21,auVar18,10);
    auVar8 = vshufps_avx(auVar20,auVar20,0x1b);
    auVar4 = vshufpd_avx(auVar18,auVar21,1);
    auVar20 = vblendps_avx(auVar21,auVar18,9);
    auVar21 = vshufps_avx(auVar20,auVar20,0xb1);
    auVar20 = vblendps_avx(auVar17,auVar23,10);
    auVar9 = vshufps_avx(auVar20,auVar20,0x1b);
    auVar19._0_4_ =
         auVar7._0_4_ * auVar21._0_4_ +
         auVar6._0_4_ * auVar4._0_4_ + fVar25 * auVar8._0_4_ + auVar18._0_4_ * auVar5._0_4_;
    auVar19._4_4_ =
         auVar7._4_4_ * auVar21._4_4_ +
         auVar6._4_4_ * auVar4._4_4_ + fVar25 * auVar8._4_4_ + auVar18._4_4_ * auVar5._4_4_;
    auVar19._8_4_ =
         auVar7._8_4_ * auVar21._8_4_ +
         auVar6._8_4_ * auVar4._8_4_ + fVar25 * auVar8._8_4_ + auVar18._8_4_ * auVar5._8_4_;
    auVar19._12_4_ =
         auVar7._12_4_ * auVar21._12_4_ +
         auVar6._12_4_ * auVar4._12_4_ + fVar25 * auVar8._12_4_ + auVar18._12_4_ * auVar5._12_4_;
    auVar4 = vshufps_avx(auVar19,auVar19,0xff);
    auVar5 = vshufps_avx(auVar19,auVar19,0x55);
    auVar6 = vshufps_avx(auVar19,auVar19,0xaa);
    auVar20 = vshufpd_avx(auVar23,auVar17,1);
    auVar18 = vblendps_avx(auVar17,auVar23,9);
    auVar18 = vshufps_avx(auVar18,auVar18,0xb1);
    auStack_98._0_4_ =
         auVar6._0_4_ * auVar18._0_4_ +
         auVar5._0_4_ * auVar20._0_4_ + auVar19._0_4_ * auVar9._0_4_ + auVar23._0_4_ * auVar4._0_4_;
    auStack_98._4_4_ =
         auVar6._4_4_ * auVar18._4_4_ +
         auVar5._4_4_ * auVar20._4_4_ + auVar19._0_4_ * auVar9._4_4_ + auVar23._4_4_ * auVar4._4_4_;
    auStack_98._8_4_ =
         auVar6._8_4_ * auVar18._8_4_ +
         auVar5._8_4_ * auVar20._8_4_ + auVar19._0_4_ * auVar9._8_4_ + auVar23._8_4_ * auVar4._8_4_;
    auStack_98._12_4_ =
         auVar6._12_4_ * auVar18._12_4_ +
         auVar5._12_4_ * auVar20._12_4_ +
         auVar19._0_4_ * auVar9._12_4_ + auVar23._12_4_ * auVar4._12_4_;
    aauStack_88[0]._4_4_ = fVar22;
    aauStack_88[0]._0_4_ = fVar22;
    aauStack_88[0]._8_4_ = fVar22;
    aauStack_88[0]._12_4_ = fVar22;
    bVar11 = FUN_144e09710(auStack_98,aauStack_88,&uStack_168,&uStack_158);
  }
  if (*(longlong *)(param_2 + 0xd0) != 0) {
    auStack_a8._0_12_ = ZEXT812(0);
    auStack_a8._12_4_ = 0;
    FUN_144df69c0(&fStack_f8,auStack_148,&uStack_118,param_2,auStack_a8);
    if (0.0 < fStack_f8) {
      uStack_b0 = uStack_f0;
      uStack_c8 = auStack_148._0_8_;
      uStack_c0 = auStack_148._8_8_;
      bVar12 = FUN_144e09710(&uStack_c8,auStack_b8,&uStack_168,&uStack_158);
      bVar11 = bVar11 | bVar12;
    }
  }
  bVar11 = (float)uStack_158 != 0.0 & bVar11;
  uVar16 = CONCAT71(uVar15,bVar11);
  if (bVar11 == 1) {
    auVar20._0_4_ = (float)uStack_168 * (float)uStack_168;
    auVar20._4_4_ = uStack_168._4_4_ * uStack_168._4_4_;
    auVar20._8_4_ = (float)uStack_160 * (float)uStack_160;
    auVar20._12_4_ = uStack_160._4_4_ * uStack_160._4_4_;
    auVar23 = vhaddps_avx(auVar20,auVar20);
    auVar23 = vhaddps_avx(auVar23,auVar23);
    auVar18 = vrsqrtps_avx(auVar23);
    fVar22 = auVar18._0_4_;
    fVar25 = auVar18._4_4_;
    fVar2 = auVar18._8_4_;
    fVar3 = auVar18._12_4_;
    uStack_168 = CONCAT44(((fVar25 * fVar25 * auVar23._4_4_ * _DAT_145fc6f08 - _DAT_145fc6f08) *
                           fVar25 + fVar25) * uStack_168._4_4_,
                          ((fVar22 * fVar22 * auVar23._0_4_ * _DAT_145fc6f08 - _DAT_145fc6f08) *
                           fVar22 + fVar22) * (float)uStack_168);
    uStack_160 = CONCAT44(((fVar3 * fVar3 * auVar23._12_4_ * _DAT_145fc6f08 - _DAT_145fc6f08) *
                           fVar3 + fVar3) * uStack_160._4_4_,
                          ((fVar2 * fVar2 * auVar23._8_4_ * _DAT_145fc6f08 - _DAT_145fc6f08) * fVar2
                          + fVar2) * (float)uStack_160);
    uStack_d8 = uStack_168;
    uStack_d0 = uStack_160;
    FUN_144df2390(*param_1,(int)param_1[1]);
    if (param_4 != 0) {
      FUN_144e065a0(auStack_148,param_1,param_4);
    }
  }
LAB_14001f2d8:
  return uVar16 & 0xffffffff;
}

