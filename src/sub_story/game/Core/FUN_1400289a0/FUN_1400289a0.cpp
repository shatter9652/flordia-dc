// Recovered from game_scarlett_master.exe (GTA VI, Xbox Series X, PE32+ x64)
// Address: 1400289a0  size: 495 bytes
// Name:    FUN_1400289a0
// Subsystem: core
//
// Referenced strings (0 in this body, 0 including direct callees):
// Callees: 
//
// Generated decompilation. Formatting follows MiscRef/GTAVSRC conventions;
// identifiers are recovered, not original. See ../../../README.md.

#include "gta6decomp/rage_types.h"


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1400289a0(undefined8 param_1,undefined1 (*param_2) [16],undefined1 (*param_3) [16])

{
  undefined1 auVar1 [16];
  undefined1 auVar2 [16];
  undefined1 auVar3 [16];
  undefined1 auVar4 [16];
  undefined1 auVar5 [16];
  undefined1 auVar6 [16];
  undefined1 auVar7 [16];
  undefined1 auVar8 [16];
  undefined1 auVar9 [16];
  float fVar10;
  float fVar15;
  float fVar16;
  undefined1 auVar11 [16];
  undefined1 auVar12 [16];
  undefined1 auVar13 [16];
  float fVar17;
  undefined1 auVar14 [16];
  undefined1 auVar18 [16];
  undefined1 auVar19 [16];
  undefined1 auVar20 [16];
  undefined1 auVar21 [16];
  undefined1 auVar22 [16];
  undefined1 auVar23 [64];
  undefined1 auVar24 [16];
  undefined1 auVar25 [16];
  undefined4 uStack_98;
  undefined1 auStack_94 [12];
  undefined4 uStack_88;
  undefined4 uStack_84;
  undefined8 uStack_80;
  undefined8 uStack_78;
  undefined4 uStack_70;
  undefined4 uStack_6c;
  
  auVar23 = ZEXT1664(*param_3);
  func_0x000144e46ba0();
  auVar1._4_12_ = auStack_94;
  auVar1._0_4_ = uStack_98;
  auVar22._4_4_ = uStack_84;
  auVar22._0_4_ = uStack_88;
  auVar22._8_8_ = uStack_80;
  auVar2._8_4_ = uStack_70;
  auVar2._0_8_ = uStack_78;
  auVar2._12_4_ = uStack_6c;
  auVar7 = vblendps_avx(auVar1,auVar22,2);
  auVar7 = vblendps_avx(auVar2,auVar7,3);
  auVar4 = vshufps_avx(auVar7,auVar7,0x49);
  auVar12 = vshufps_avx(auVar7,auVar7,0x92);
  auVar8 = vshufps_avx(auVar7,auVar7,0x24);
  auVar20._0_4_ = auVar12._0_4_ + auVar4._0_4_;
  auVar20._4_4_ = auVar12._4_4_ + auVar4._4_4_;
  auVar20._8_4_ = auVar12._8_4_ + auVar4._8_4_;
  auVar20._12_4_ = auVar12._12_4_ + auVar4._12_4_;
  auVar3._0_4_ = auVar20._0_4_ + auVar8._0_4_;
  auVar3._4_4_ = auVar20._4_4_ + auVar8._4_4_;
  auVar3._8_4_ = auVar20._8_4_ + auVar8._8_4_;
  auVar3._12_4_ = auVar20._12_4_ + auVar8._12_4_;
  auVar7 = vsubps_avx(auVar7,auVar20);
  auVar7 = vblendps_avx(auVar7,auVar3,8);
  auVar18._0_4_ = auVar7._0_4_ + _DAT_145fc6ed8;
  auVar18._4_4_ = auVar7._4_4_ + _DAT_145fc6ed8;
  auVar18._8_4_ = auVar7._8_4_ + _DAT_145fc6ed8;
  auVar18._12_4_ = auVar7._12_4_ + _DAT_145fc6ed8;
  auVar7 = vrsqrtps_avx(auVar18);
  fVar10 = auVar7._0_4_;
  fVar15 = auVar7._4_4_;
  fVar16 = auVar7._8_4_;
  fVar17 = auVar7._12_4_;
  auVar7 = vblendps_avx(auVar22,auVar2,3);
  auVar4 = vshufps_avx(auVar7,auVar1,0x12);
  auVar7 = vblendps_avx(auVar1,auVar22,3);
  auVar7 = vblendps_avx(auVar7,auVar2,2);
  auVar7 = vshufps_avx(auVar7,auVar7,9);
  auVar8._0_4_ = auVar4._0_4_ + auVar7._0_4_;
  auVar8._4_4_ = auVar4._4_4_ + auVar7._4_4_;
  auVar8._8_4_ = auVar4._8_4_ + auVar7._8_4_;
  auVar8._12_4_ = auVar4._12_4_ + auVar7._12_4_;
  auVar12 = vsubps_avx(auVar4,auVar7);
  auVar11._0_4_ =
       _DAT_145fc6edc *
       ((-(_DAT_145fc6edc * fVar10 * fVar10 * auVar18._0_4_) + _DAT_145fc6edc) * fVar10 + fVar10);
  auVar11._4_4_ =
       _DAT_145fc6edc *
       ((-(_DAT_145fc6edc * fVar15 * fVar15 * auVar18._4_4_) + _DAT_145fc6edc) * fVar15 + fVar15);
  auVar11._8_4_ =
       _DAT_145fc6edc *
       ((-(_DAT_145fc6edc * fVar16 * fVar16 * auVar18._8_4_) + _DAT_145fc6edc) * fVar16 + fVar16);
  auVar11._12_4_ =
       _DAT_145fc6edc *
       ((-(_DAT_145fc6edc * fVar17 * fVar17 * auVar18._12_4_) + _DAT_145fc6edc) * fVar17 + fVar17);
  auVar25._4_4_ = uStack_70;
  auVar25._0_4_ = uStack_70;
  auVar25._8_4_ = uStack_70;
  auVar25._12_4_ = uStack_70;
  auVar7 = vblendps_avx(auVar8,auVar12,1);
  auVar4 = vblendps_avx(auVar8,auVar12,2);
  auVar1 = vshufps_avx(auVar8,auVar12,0xa1);
  auVar12 = vblendps_avx(auVar12,auVar18,8);
  auVar22 = vshufps_avx(auVar7,auVar7,0x18);
  auVar8 = vshufpd_avx(auVar4,auVar4,1);
  auVar7 = vblendps_avx(auVar1,auVar18,4);
  auVar4 = vblendps_avx(auVar22,auVar18,1);
  auVar8 = vblendps_avx(auVar8,auVar18,2);
  auVar19._0_4_ = auVar11._0_4_ * auVar4._0_4_;
  auVar19._4_4_ = auVar11._0_4_ * auVar4._4_4_;
  auVar19._8_4_ = auVar11._0_4_ * auVar4._8_4_;
  auVar19._12_4_ = auVar11._0_4_ * auVar4._12_4_;
  auVar4 = vshufps_avx(auVar11,auVar11,0x55);
  auVar21._0_4_ = auVar4._0_4_ * auVar8._0_4_;
  auVar21._4_4_ = auVar4._4_4_ * auVar8._4_4_;
  auVar21._8_4_ = auVar4._8_4_ * auVar8._8_4_;
  auVar21._12_4_ = auVar4._12_4_ * auVar8._12_4_;
  auVar4 = vshufps_avx(auVar11,auVar11,0xaa);
  auVar8 = vshufps_avx(auVar11,auVar11,0xff);
  auVar9._0_4_ = auVar4._0_4_ * auVar7._0_4_;
  auVar9._4_4_ = auVar4._4_4_ * auVar7._4_4_;
  auVar9._8_4_ = auVar4._8_4_ * auVar7._8_4_;
  auVar9._12_4_ = auVar4._12_4_ * auVar7._12_4_;
  auVar6._0_4_ = auVar8._0_4_ * auVar12._0_4_;
  auVar6._4_4_ = auVar8._4_4_ * auVar12._4_4_;
  auVar6._8_4_ = auVar8._8_4_ * auVar12._8_4_;
  auVar6._12_4_ = auVar8._12_4_ * auVar12._12_4_;
  auVar12._4_4_ = uStack_98;
  auVar12._0_4_ = uStack_98;
  auVar12._8_4_ = uStack_98;
  auVar12._12_4_ = uStack_98;
  auVar24._4_4_ = uStack_84;
  auVar24._0_4_ = uStack_84;
  auVar24._8_4_ = uStack_84;
  auVar24._12_4_ = uStack_84;
  auVar7 = vcmpps_avx(auVar12,auVar24,1);
  auVar4 = vcmpps_avx(auVar12,auVar25,1);
  auVar7 = vblendvps_avx(auVar19,auVar21,auVar7);
  auVar12 = vcmpps_avx(auVar24,auVar25,1);
  auVar13._0_4_ = auVar4._0_4_ & auVar12._0_4_;
  auVar13._4_4_ = auVar4._4_4_ & auVar12._4_4_;
  auVar13._8_4_ = auVar4._8_4_ & auVar12._8_4_;
  auVar13._12_4_ = auVar4._12_4_ & auVar12._12_4_;
  auVar7 = vblendvps_avx(auVar7,auVar9,auVar13);
  auVar22 = auVar23._0_16_;
  auVar12 = vshufps_avx(auVar22,auVar22,0xc9);
  auVar4 = vcmpps_avx(ZEXT416(0) << 0x20,auVar3,1);
  auVar8 = vshufps_avx(auVar22,auVar22,0xd2);
  auVar4._4_4_ = auVar4._0_4_;
  auVar4._8_4_ = auVar4._0_4_;
  auVar4._12_4_ = auVar4._0_4_;
  auVar4 = vblendvps_avx(auVar7,auVar6,auVar4);
  auVar7._0_4_ = auVar4._0_4_ ^ _DAT_145fc6f10;
  auVar7._4_4_ = auVar4._4_4_ ^ _DAT_145fc6f10;
  auVar7._8_4_ = auVar4._8_4_ ^ _DAT_145fc6f10;
  auVar7._12_4_ = auVar4._12_4_ ^ _DAT_145fc6f10;
  auVar7 = vblendps_avx(auVar7,auVar4,8);
  auVar4 = vshufps_avx(auVar4,auVar4,0xff);
  auVar1 = vshufps_avx(auVar7,auVar7,0xc9);
  auVar7 = vshufps_avx(auVar7,auVar7,0xd2);
  fVar10 = -(auVar7._0_4_ * auVar12._0_4_) + auVar1._0_4_ * auVar8._0_4_;
  fVar15 = -(auVar7._4_4_ * auVar12._4_4_) + auVar1._4_4_ * auVar8._4_4_;
  fVar16 = -(auVar7._8_4_ * auVar12._8_4_) + auVar1._8_4_ * auVar8._8_4_;
  fVar17 = -(auVar7._12_4_ * auVar12._12_4_) + auVar1._12_4_ * auVar8._12_4_;
  auVar14._0_4_ = fVar10 + fVar10;
  auVar14._4_4_ = fVar15 + fVar15;
  auVar14._8_4_ = fVar16 + fVar16;
  auVar14._12_4_ = fVar17 + fVar17;
  auVar12 = vshufps_avx(auVar14,auVar14,0xd2);
  auVar8 = vshufps_avx(auVar14,auVar14,0xc9);
  auVar5._0_4_ = auVar14._0_4_ * auVar4._0_4_ + auVar23._0_4_ +
                 -(auVar7._0_4_ * auVar8._0_4_) + auVar12._0_4_ * auVar1._0_4_;
  auVar5._4_4_ = auVar14._4_4_ * auVar4._4_4_ + auVar23._4_4_ +
                 -(auVar7._4_4_ * auVar8._4_4_) + auVar12._4_4_ * auVar1._4_4_;
  auVar5._8_4_ = auVar14._8_4_ * auVar4._8_4_ + auVar23._8_4_ +
                 -(auVar7._8_4_ * auVar8._8_4_) + auVar12._8_4_ * auVar1._8_4_;
  auVar5._12_4_ =
       auVar14._12_4_ * auVar4._12_4_ + auVar23._12_4_ +
       -(auVar7._12_4_ * auVar8._12_4_) + auVar12._12_4_ * auVar1._12_4_;
  auVar7 = vblendps_avx(auVar5,auVar22,8);
  *param_2 = auVar7;
  return;
}

