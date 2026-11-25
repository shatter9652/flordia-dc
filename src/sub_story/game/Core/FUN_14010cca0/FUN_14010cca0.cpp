// Recovered from game_scarlett_master.exe (GTA VI, Xbox Series X, PE32+ x64)
// Address: 14010cca0  size: 1454 bytes
// Name:    FUN_14010cca0
// Subsystem: core
//
// Referenced strings (0 in this body, 0 including direct callees):
// Callees: FUN_14010d2d0, FUN_145647140, FUN_144fb2f30
//
// Generated decompilation. Formatting follows MiscRef/GTAVSRC conventions;
// identifiers are recovered, not original. See ../../../README.md.

#include "gta6decomp/rage_types.h"


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined8 FUN_14010cca0(undefined1 (*param_1) [16],undefined1 (*param_2) [16])

{
  int iVar1;
  undefined1 auVar2 [16];
  undefined8 uVar3;
  longlong lVar4;
  int iVar5;
  undefined1 auVar6 [16];
  undefined1 auVar7 [16];
  undefined1 auVar8 [16];
  undefined1 auVar9 [16];
  undefined1 auVar10 [16];
  undefined1 auVar11 [16];
  undefined1 auVar12 [16];
  undefined1 auVar13 [16];
  float fVar18;
  float fVar19;
  undefined1 auVar14 [16];
  undefined1 auVar15 [16];
  undefined1 auVar16 [16];
  undefined1 auVar17 [16];
  float fVar20;
  float fVar22;
  float fVar23;
  float fVar24;
  undefined1 auVar21 [16];
  float fVar25;
  float fVar28;
  undefined1 auVar26 [16];
  undefined1 auVar27 [16];
  float fVar29;
  undefined1 auVar30 [16];
  undefined1 auVar31 [16];
  undefined8 unaff_XMM6_Qa;
  undefined8 unaff_XMM6_Qb;
  undefined8 unaff_XMM7_Qa;
  undefined8 unaff_XMM7_Qb;
  undefined1 auVar32 [16];
  undefined8 unaff_XMM8_Qa;
  undefined8 unaff_XMM8_Qb;
  undefined1 auVar33 [16];
  undefined8 unaff_XMM9_Qa;
  undefined8 unaff_XMM9_Qb;
  undefined1 auVar34 [16];
  undefined8 unaff_XMM10_Qa;
  undefined8 unaff_XMM10_Qb;
  undefined8 unaff_XMM11_Qa;
  undefined8 unaff_XMM11_Qb;
  undefined8 unaff_XMM12_Qa;
  undefined8 unaff_XMM12_Qb;
  undefined8 unaff_XMM13_Qa;
  undefined8 unaff_XMM13_Qb;
  undefined1 auVar35 [16];
  undefined8 unaff_XMM14_Qa;
  undefined8 unaff_XMM14_Qb;
  undefined1 auVar37 [16];
  undefined8 unaff_XMM15_Qa;
  undefined8 unaff_XMM15_Qb;
  undefined1 auVar39 [16];
  longlong alStackX_8 [2];
  float afStackX_18 [4];
  undefined8 uStack_20;
  undefined1 auVar36 [64];
  undefined1 auVar38 [64];
  
  uStack_20 = 0x14010ccad;
  lVar4 = FUN_145647140();
  lVar4 = -lVar4;
  *(undefined8 *)(&stack0x00001148 + lVar4) = unaff_XMM15_Qa;
  *(undefined8 *)(&stack0x00001150 + lVar4) = unaff_XMM15_Qb;
  *(undefined8 *)(&stack0x00001138 + lVar4) = unaff_XMM14_Qa;
  *(undefined8 *)(&stack0x00001140 + lVar4) = unaff_XMM14_Qb;
  *(undefined8 *)(&stack0x00001128 + lVar4) = unaff_XMM13_Qa;
  *(undefined8 *)(&stack0x00001130 + lVar4) = unaff_XMM13_Qb;
  *(undefined8 *)(&stack0x00001118 + lVar4) = unaff_XMM12_Qa;
  *(undefined8 *)(&stack0x00001120 + lVar4) = unaff_XMM12_Qb;
  *(undefined8 *)(&stack0x00001108 + lVar4) = unaff_XMM11_Qa;
  *(undefined8 *)(&stack0x00001110 + lVar4) = unaff_XMM11_Qb;
  *(undefined8 *)(&stack0x000010f8 + lVar4) = unaff_XMM10_Qa;
  *(undefined8 *)(&stack0x00001100 + lVar4) = unaff_XMM10_Qb;
  *(undefined8 *)(&stack0x000010e8 + lVar4) = unaff_XMM9_Qa;
  *(undefined8 *)(&stack0x000010f0 + lVar4) = unaff_XMM9_Qb;
  *(undefined8 *)(&stack0x000010d8 + lVar4) = unaff_XMM8_Qa;
  *(undefined8 *)(&stack0x000010e0 + lVar4) = unaff_XMM8_Qb;
  *(undefined8 *)(&stack0x000010c8 + lVar4) = unaff_XMM7_Qa;
  *(undefined8 *)(&stack0x000010d0 + lVar4) = unaff_XMM7_Qb;
  *(undefined8 *)(&stack0x000010b8 + lVar4) = unaff_XMM6_Qa;
  *(undefined8 *)(&stack0x000010c0 + lVar4) = unaff_XMM6_Qb;
  auVar10 = *param_1;
  *(undefined8 *)(&stack0x000000d8 + lVar4) = 0x40;
  auVar34._0_12_ = ZEXT812(0);
  auVar34._12_4_ = 0;
  uVar3 = *(undefined8 *)(*param_2 + 8);
  *(undefined8 *)(&stack0x000000c8 + lVar4) = *(undefined8 *)*param_2;
  *(undefined8 *)(&stack0x000000d0 + lVar4) = uVar3;
  auVar14 = vsubps_avx(auVar10,*param_2);
  fVar25 = auVar14._0_4_;
  auVar9._0_4_ = fVar25 * fVar25;
  fVar28 = auVar14._4_4_;
  auVar9._4_4_ = fVar28 * fVar28;
  fVar29 = auVar14._8_4_;
  auVar9._8_4_ = fVar29 * fVar29;
  fVar18 = auVar14._12_4_;
  auVar9._12_4_ = fVar18 * fVar18;
  auVar14 = vblendps_avx(auVar9,auVar34,8);
  auVar14 = vhaddps_avx(auVar14,auVar14);
  auVar14 = vhaddps_avx(auVar14,auVar14);
  auVar9 = vrsqrtps_avx(auVar14);
  *(undefined1 (*) [16])(&stack0x00000048 + lVar4) = auVar14;
  fVar20 = auVar9._0_4_;
  fVar22 = auVar9._4_4_;
  fVar23 = auVar9._8_4_;
  fVar24 = auVar9._12_4_;
  fVar20 = (_DAT_145fc6f08 * fVar20 * fVar20 * auVar14._0_4_ - _DAT_145fc6f08) * fVar20 + fVar20;
  fVar22 = (_DAT_145fc6f08 * fVar22 * fVar22 * auVar14._4_4_ - _DAT_145fc6f08) * fVar22 + fVar22;
  fVar23 = (_DAT_145fc6f08 * fVar23 * fVar23 * auVar14._8_4_ - _DAT_145fc6f08) * fVar23 + fVar23;
  fVar24 = (_DAT_145fc6f08 * fVar24 * fVar24 * auVar14._12_4_ - _DAT_145fc6f08) * fVar24 + fVar24;
  auVar6._0_4_ = fVar20 * fVar25;
  auVar6._4_4_ = fVar22 * fVar28;
  auVar6._8_4_ = fVar23 * fVar29;
  auVar6._12_4_ = fVar24 * fVar18;
  *(float *)(&stack0x00000038 + lVar4) = fVar20;
  *(float *)(&stack0x0000003c + lVar4) = fVar22;
  *(float *)(&stack0x00000040 + lVar4) = fVar23;
  *(float *)(&stack0x00000044 + lVar4) = fVar24;
  auVar14 = vshufpd_avx(auVar6,auVar6,1);
  auVar9 = _DAT_14614f7f0;
  if (_DAT_145fc6f8c <= (float)(auVar14._0_4_ & _DAT_145fc6f4c)) {
    auVar9 = _DAT_14615abe0;
  }
  auVar14 = vshufps_avx(auVar9,auVar9,0xd2);
  auVar7 = vshufps_avx(auVar6,auVar6,0xc9);
  auVar8 = vshufps_avx(auVar6,auVar6,0xd2);
  auVar9 = vshufps_avx(auVar9,auVar9,0xc9);
  auVar37._4_4_ = _DAT_145fc6f50;
  auVar37._0_4_ = _DAT_145fc6f50;
  auVar37._8_4_ = _DAT_145fc6f50;
  auVar37._12_4_ = _DAT_145fc6f50;
  auVar35._4_4_ = _DAT_145fc6f54;
  auVar35._0_4_ = _DAT_145fc6f54;
  auVar35._8_4_ = _DAT_145fc6f54;
  auVar35._12_4_ = _DAT_145fc6f54;
  iVar5 = 0;
  fVar23 = -(auVar8._0_4_ * auVar9._0_4_) + auVar14._0_4_ * auVar7._0_4_;
  fVar18 = -(auVar8._4_4_ * auVar9._4_4_) + auVar14._4_4_ * auVar7._4_4_;
  fVar24 = -(auVar8._8_4_ * auVar9._8_4_) + auVar14._8_4_ * auVar7._8_4_;
  fVar19 = -(auVar8._12_4_ * auVar9._12_4_) + auVar14._12_4_ * auVar7._12_4_;
  auVar26._0_4_ = fVar23 * fVar23;
  auVar26._4_4_ = fVar18 * fVar18;
  auVar26._8_4_ = fVar24 * fVar24;
  auVar26._12_4_ = fVar19 * fVar19;
  auVar14 = vblendps_avx(auVar26,auVar34,8);
  auVar14 = vhaddps_avx(auVar14,auVar14);
  auVar14 = vhaddps_avx(auVar14,auVar14);
  auVar9 = vrsqrtps_avx(auVar14);
  fVar20 = auVar9._0_4_;
  fVar28 = auVar9._4_4_;
  fVar22 = auVar9._8_4_;
  fVar29 = auVar9._12_4_;
  fVar25 = *(float *)(*param_1 + 0xc);
  *(undefined1 (*) [16])(&stack0x00000058 + lVar4) = auVar10;
  fVar25 = fVar25 + fVar25;
  auVar27._0_4_ =
       ((_DAT_145fc6f08 * fVar20 * fVar20 * auVar14._0_4_ - _DAT_145fc6f08) * fVar20 + fVar20) *
       fVar25 * fVar23;
  auVar27._4_4_ =
       ((_DAT_145fc6f08 * fVar28 * fVar28 * auVar14._4_4_ - _DAT_145fc6f08) * fVar28 + fVar28) *
       fVar25 * fVar18;
  auVar27._8_4_ =
       ((_DAT_145fc6f08 * fVar22 * fVar22 * auVar14._8_4_ - _DAT_145fc6f08) * fVar22 + fVar22) *
       fVar25 * fVar24;
  auVar27._12_4_ =
       ((_DAT_145fc6f08 * fVar29 * fVar29 * auVar14._12_4_ - _DAT_145fc6f08) * fVar29 + fVar29) *
       fVar25 * fVar19;
  auVar14 = vshufps_avx(auVar27,auVar27,0xc9);
  *(undefined1 (*) [16])(&stack0x00000028 + lVar4) = auVar27;
  auVar9 = vshufps_avx(auVar27,auVar27,0xd2);
  fVar23 = -(auVar7._0_4_ * auVar9._0_4_) + auVar14._0_4_ * auVar8._0_4_;
  fVar18 = -(auVar7._4_4_ * auVar9._4_4_) + auVar14._4_4_ * auVar8._4_4_;
  fVar24 = -(auVar7._8_4_ * auVar9._8_4_) + auVar14._8_4_ * auVar8._8_4_;
  fVar19 = -(auVar7._12_4_ * auVar9._12_4_) + auVar14._12_4_ * auVar8._12_4_;
  auVar14._0_4_ = fVar23 * fVar23;
  auVar14._4_4_ = fVar18 * fVar18;
  auVar14._8_4_ = fVar24 * fVar24;
  auVar14._12_4_ = fVar19 * fVar19;
  auVar14 = vblendps_avx(auVar14,auVar34,8);
  auVar14 = vhaddps_avx(auVar14,auVar14);
  auVar14 = vhaddps_avx(auVar14,auVar14);
  auVar9 = vrsqrtps_avx(auVar14);
  fVar20 = auVar9._0_4_;
  fVar28 = auVar9._4_4_;
  fVar22 = auVar9._8_4_;
  fVar29 = auVar9._12_4_;
  *(float *)((longlong)afStackX_18 + lVar4) =
       ((_DAT_145fc6f08 * fVar20 * fVar20 * auVar14._0_4_ - _DAT_145fc6f08) * fVar20 + fVar20) *
       fVar25 * fVar23;
  *(float *)((longlong)afStackX_18 + lVar4 + 4) =
       ((_DAT_145fc6f08 * fVar28 * fVar28 * auVar14._4_4_ - _DAT_145fc6f08) * fVar28 + fVar28) *
       fVar25 * fVar18;
  *(float *)((longlong)afStackX_18 + lVar4 + 8) =
       ((_DAT_145fc6f08 * fVar22 * fVar22 * auVar14._8_4_ - _DAT_145fc6f08) * fVar22 + fVar22) *
       fVar25 * fVar24;
  *(float *)((longlong)afStackX_18 + lVar4 + 0xc) =
       ((_DAT_145fc6f08 * fVar29 * fVar29 * auVar14._12_4_ - _DAT_145fc6f08) * fVar29 + fVar29) *
       fVar25 * fVar19;
  auVar14 = vshufps_avx(auVar10,auVar10,0xff);
  *(float *)(&stack0x00000078 + lVar4) =
       -(auVar6._0_4_ * auVar14._0_4_ * _DAT_145fc6edc) + auVar10._0_4_;
  *(float *)(&stack0x0000007c + lVar4) =
       -(auVar6._4_4_ * auVar14._4_4_ * _DAT_145fc6edc) + auVar10._4_4_;
  *(float *)(&stack0x00000080 + lVar4) =
       -(auVar6._8_4_ * auVar14._8_4_ * _DAT_145fc6edc) + auVar10._8_4_;
  *(float *)(&stack0x00000084 + lVar4) =
       -(auVar6._12_4_ * auVar14._12_4_ * _DAT_145fc6edc) + auVar10._12_4_;
  auVar10._4_4_ = _DAT_145f43778;
  auVar10._0_4_ = _DAT_145f43778;
  auVar10._8_4_ = _DAT_145f43778;
  auVar10._12_4_ = _DAT_145f43778;
  *(undefined1 (*) [16])(&stack0x00000068 + lVar4) = auVar10;
  do {
    auVar38 = ZEXT1664(auVar37);
    auVar36 = ZEXT1664(auVar35);
    *(undefined8 *)((longlong)&uStack_20 + lVar4) = 0x14010ceba;
    func_0x00014010d250(&stack0x00000858 + lVar4,iVar5,0x10);
    auVar33._4_4_ = _DAT_145fc6ed8;
    auVar33._0_4_ = _DAT_145fc6ed8;
    auVar33._8_4_ = _DAT_145fc6ed8;
    auVar33._12_4_ = _DAT_145fc6ed8;
    iVar1 = *(int *)(&stack0x000000dc + lVar4);
    iVar5 = iVar5 + 1;
    fVar20 = SUB164(*(undefined1 (*) [16])(&stack0x00000858 + lVar4),0) * _DAT_145fc6f84;
    fVar25 = fVar20 * _DAT_146159b48;
    auVar10 = vsubps_avx(auVar33,*(undefined1 (*) [16])(&stack0x00000858 + lVar4));
    auVar7._0_4_ = -(auVar10._0_4_ * auVar10._0_4_) + _DAT_145fc6ed8;
    auVar7._4_4_ = -(auVar10._4_4_ * auVar10._4_4_) + _DAT_145fc6ed8;
    auVar7._8_4_ = -(auVar10._8_4_ * auVar10._8_4_) + _DAT_145fc6ed8;
    auVar7._12_4_ = -(auVar10._12_4_ * auVar10._12_4_) + _DAT_145fc6ed8;
    auVar6 = vshufps_avx(auVar7,auVar7,0x55);
    auVar15._4_4_ = fVar25;
    auVar15._0_4_ = fVar25;
    auVar15._8_4_ = fVar25;
    auVar15._12_4_ = fVar25;
    auVar10 = vroundps_avx(auVar15,0);
    auVar14 = vroundps_avx(auVar15,1);
    fVar25 = auVar10._0_4_ * _DAT_146159be0 + fVar20;
    fVar28 = auVar10._4_4_ * _DAT_146159be0 + fVar20;
    fVar22 = auVar10._8_4_ * _DAT_146159be0 + fVar20;
    fVar29 = auVar10._12_4_ * _DAT_146159be0 + fVar20;
    auVar11._0_4_ = (int)auVar10._0_4_;
    auVar11._4_4_ = (int)auVar10._4_4_;
    auVar11._8_4_ = (int)auVar10._8_4_;
    auVar11._12_4_ = (int)auVar10._12_4_;
    auVar10 = vpand_avx(auVar11,*(undefined1 (*) [16])(&stack0x00000068 + lVar4));
    fVar23 = fVar25 * fVar25;
    fVar18 = fVar28 * fVar28;
    fVar24 = fVar22 * fVar22;
    fVar19 = fVar29 * fVar29;
    auVar34 = ZEXT416(0) << 0x20;
    auVar10 = vpcmpeqd_avx(auVar34,auVar10);
    fVar23 = fVar23 * (fVar23 * (fVar23 * (fVar23 * _DAT_146159be8 + _DAT_146159be4) +
                                _DAT_146159bec) + _DAT_146159bf0) + _DAT_145fc6ed8;
    fVar18 = fVar18 * (fVar18 * (fVar18 * (fVar18 * _DAT_146159be8 + _DAT_146159be4) +
                                _DAT_146159bec) + _DAT_146159bf0) + _DAT_145fc6ed8;
    fVar24 = fVar24 * (fVar24 * (fVar24 * (fVar24 * _DAT_146159be8 + _DAT_146159be4) +
                                _DAT_146159bec) + _DAT_146159bf0) + _DAT_145fc6ed8;
    fVar19 = fVar19 * (fVar19 * (fVar19 * (fVar19 * _DAT_146159be8 + _DAT_146159be4) +
                                _DAT_146159bec) + _DAT_146159bf0) + _DAT_145fc6ed8;
    auVar30._0_4_ = fVar23 * fVar25;
    auVar30._4_4_ = fVar18 * fVar28;
    auVar30._8_4_ = fVar24 * fVar22;
    auVar30._12_4_ = fVar19 * fVar29;
    auVar32._0_4_ = -(fVar25 * fVar23) - 0.0;
    auVar32._4_4_ = -(fVar28 * fVar18) - 0.0;
    auVar32._8_4_ = -(fVar22 * fVar24) - 0.0;
    auVar32._12_4_ = -(fVar29 * fVar19) - 0.0;
    auVar10 = vblendvps_avx(auVar32,auVar30,auVar10);
    auVar16._0_4_ = (int)auVar14._0_4_;
    auVar16._4_4_ = (int)auVar14._4_4_;
    auVar16._8_4_ = (int)auVar14._8_4_;
    auVar16._12_4_ = (int)auVar14._12_4_;
    fVar25 = _DAT_146159be0 * (auVar14._0_4_ + _DAT_145fc6edc) + fVar20;
    fVar28 = _DAT_146159be0 * (auVar14._4_4_ + _DAT_145fc6edc) + fVar20;
    fVar22 = _DAT_146159be0 * (auVar14._8_4_ + _DAT_145fc6edc) + fVar20;
    fVar20 = _DAT_146159be0 * (auVar14._12_4_ + _DAT_145fc6edc) + fVar20;
    auVar9 = vrsqrtps_avx(auVar6);
    auVar14 = vpand_avx(auVar16,*(undefined1 (*) [16])(&stack0x00000068 + lVar4));
    auVar14 = vpcmpeqd_avx(auVar34,auVar14);
    fVar29 = fVar25 * fVar25;
    fVar23 = fVar28 * fVar28;
    fVar18 = fVar22 * fVar22;
    fVar24 = fVar20 * fVar20;
    fVar29 = fVar29 * (fVar29 * (fVar29 * (fVar29 * _DAT_146159be8 + _DAT_146159be4) +
                                _DAT_146159bec) + _DAT_146159bf0) + _DAT_145fc6ed8;
    fVar23 = fVar23 * (fVar23 * (fVar23 * (fVar23 * _DAT_146159be8 + _DAT_146159be4) +
                                _DAT_146159bec) + _DAT_146159bf0) + _DAT_145fc6ed8;
    fVar18 = fVar18 * (fVar18 * (fVar18 * (fVar18 * _DAT_146159be8 + _DAT_146159be4) +
                                _DAT_146159bec) + _DAT_146159bf0) + _DAT_145fc6ed8;
    fVar24 = fVar24 * (fVar24 * (fVar24 * (fVar24 * _DAT_146159be8 + _DAT_146159be4) +
                                _DAT_146159bec) + _DAT_146159bf0) + _DAT_145fc6ed8;
    auVar31._0_4_ = fVar29 * fVar25;
    auVar31._4_4_ = fVar23 * fVar28;
    auVar31._8_4_ = fVar18 * fVar22;
    auVar31._12_4_ = fVar24 * fVar20;
    auVar39._0_4_ = -(fVar25 * fVar29) - 0.0;
    auVar39._4_4_ = -(fVar28 * fVar23) - 0.0;
    auVar39._8_4_ = -(fVar22 * fVar18) - 0.0;
    auVar39._12_4_ = -(fVar20 * fVar24) - 0.0;
    fVar25 = auVar9._0_4_;
    fVar20 = auVar9._4_4_;
    fVar28 = auVar9._8_4_;
    fVar22 = auVar9._12_4_;
    auVar14 = vblendvps_avx(auVar31,auVar39,auVar14);
    auVar21._4_4_ = _DAT_146159bfc;
    auVar21._0_4_ = _DAT_146159bfc;
    auVar21._8_4_ = _DAT_146159bfc;
    auVar21._12_4_ = _DAT_146159bfc;
    auVar9 = vcmpps_avx(auVar21,auVar6,2);
    auVar12._0_4_ =
         (float)(auVar9._0_4_ &
                (uint)(((-(_DAT_145fc6edc * fVar25 * fVar25 * auVar6._0_4_) + _DAT_145fc6edc) *
                        fVar25 + fVar25) * auVar6._0_4_)) *
         (auVar14._0_4_ * *(float *)(&stack0x00000028 + lVar4) +
         auVar10._0_4_ * *(float *)((longlong)afStackX_18 + lVar4)) +
         *(float *)(&stack0x00000078 + lVar4);
    auVar12._4_4_ =
         (float)(auVar9._4_4_ &
                (uint)(((-(_DAT_145fc6edc * fVar20 * fVar20 * auVar6._4_4_) + _DAT_145fc6edc) *
                        fVar20 + fVar20) * auVar6._4_4_)) *
         (auVar14._4_4_ * *(float *)(&stack0x0000002c + lVar4) +
         auVar10._4_4_ * *(float *)((longlong)afStackX_18 + lVar4 + 4)) +
         *(float *)(&stack0x0000007c + lVar4);
    auVar12._8_4_ =
         (float)(auVar9._8_4_ &
                (uint)(((-(_DAT_145fc6edc * fVar28 * fVar28 * auVar6._8_4_) + _DAT_145fc6edc) *
                        fVar28 + fVar28) * auVar6._8_4_)) *
         (auVar14._8_4_ * *(float *)(&stack0x00000030 + lVar4) +
         auVar10._8_4_ * *(float *)((longlong)afStackX_18 + lVar4 + 8)) +
         *(float *)(&stack0x00000080 + lVar4);
    auVar12._12_4_ =
         (float)(auVar9._12_4_ &
                (uint)(((-(_DAT_145fc6edc * fVar22 * fVar22 * auVar6._12_4_) + _DAT_145fc6edc) *
                        fVar22 + fVar22) * auVar6._12_4_)) *
         (auVar14._12_4_ * *(float *)(&stack0x00000034 + lVar4) +
         auVar10._12_4_ * *(float *)((longlong)afStackX_18 + lVar4 + 0xc)) +
         *(float *)(&stack0x00000084 + lVar4);
    auVar10 = vsubps_avx(auVar12,*(undefined1 (*) [16])(&stack0x000000c8 + lVar4));
    *(int *)(&stack0x000000dc + lVar4) = iVar1 + 1;
    auVar37 = vminps_avx(auVar12,auVar38._0_16_);
    auVar35 = vmaxps_avx(auVar12,auVar36._0_16_);
    fVar25 = auVar10._0_4_;
    auVar17._0_4_ = fVar25 * fVar25;
    fVar28 = auVar10._4_4_;
    auVar17._4_4_ = fVar28 * fVar28;
    fVar29 = auVar10._8_4_;
    auVar17._8_4_ = fVar29 * fVar29;
    fVar18 = auVar10._12_4_;
    auVar17._12_4_ = fVar18 * fVar18;
    auVar10 = vblendps_avx(auVar17,auVar34,8);
    auVar10 = vhaddps_avx(auVar10,auVar10);
    auVar10 = vhaddps_avx(auVar10,auVar10);
    auVar14 = vrsqrtps_avx(auVar10);
    fVar20 = auVar14._0_4_;
    fVar22 = auVar14._4_4_;
    fVar23 = auVar14._8_4_;
    fVar24 = auVar14._12_4_;
    auVar8._0_4_ = fVar25 * ((-(_DAT_145fc6edc * fVar20 * fVar20 * auVar10._0_4_) + _DAT_145fc6edc)
                             * fVar20 + fVar20);
    auVar8._4_4_ = fVar28 * ((-(_DAT_145fc6edc * fVar22 * fVar22 * auVar10._4_4_) + _DAT_145fc6edc)
                             * fVar22 + fVar22);
    auVar8._8_4_ = fVar29 * ((-(_DAT_145fc6edc * fVar23 * fVar23 * auVar10._8_4_) + _DAT_145fc6edc)
                             * fVar23 + fVar23);
    auVar8._12_4_ =
         fVar18 * ((-(_DAT_145fc6edc * fVar24 * fVar24 * auVar10._12_4_) + _DAT_145fc6edc) * fVar24
                  + fVar24);
    *(undefined1 (*) [16])(&stack0x000000e8 + (longlong)iVar1 * 0x10 + lVar4) = auVar8;
  } while (iVar5 != 0x10);
  fVar25 = *(float *)((longlong)afStackX_18 + lVar4 + 4);
  fVar20 = *(float *)((longlong)afStackX_18 + lVar4 + 8);
  fVar28 = *(float *)((longlong)afStackX_18 + lVar4 + 0xc);
  auVar10 = *(undefined1 (*) [16])(&stack0x000000c8 + lVar4);
  *(undefined8 *)(&stack0x00000858 + lVar4) = 0x40;
  auVar9 = vminps_avx(auVar10,auVar37);
  auVar14 = vmaxps_avx(auVar10,auVar35);
  *(undefined1 (*) [16])(&stack0x000007f8 + lVar4) = auVar9;
  *(undefined1 (*) [16])(&stack0x00000808 + lVar4) = auVar14;
  auVar14 = vcmpss_avx(ZEXT416(_DAT_146159bfc),*(undefined1 (*) [16])(&stack0x00000048 + lVar4),2);
  fVar22 = _DAT_145fc6ed8 /
           (float)(auVar14._0_4_ &
                  (uint)(SUB164(*(undefined1 (*) [16])(&stack0x00000048 + lVar4),0) *
                        *(float *)(&stack0x00000038 + lVar4)));
  *(float *)(&stack0x00000c68 + lVar4) = fVar22;
  *(float *)(&stack0x00000c6c + lVar4) = fVar22;
  *(float *)(&stack0x00000c70 + lVar4) = fVar22;
  *(float *)(&stack0x00000c74 + lVar4) = fVar22;
  *(float *)(&stack0x00000c78 + lVar4) = fVar22;
  *(float *)(&stack0x00000c7c + lVar4) = fVar22;
  *(float *)(&stack0x00000c80 + lVar4) = fVar22;
  *(float *)(&stack0x00000c84 + lVar4) = fVar22;
  *(float *)(&stack0x00000c88 + lVar4) = fVar22;
  *(float *)(&stack0x00000c8c + lVar4) = fVar22;
  *(float *)(&stack0x00000c90 + lVar4) = fVar22;
  *(float *)(&stack0x00000c94 + lVar4) = fVar22;
  *(float *)(&stack0x00000c98 + lVar4) = fVar22;
  *(float *)(&stack0x00000c9c + lVar4) = fVar22;
  *(float *)(&stack0x00000ca0 + lVar4) = fVar22;
  *(float *)(&stack0x00000ca4 + lVar4) = fVar22;
  *(float *)(&stack0x00000ca8 + lVar4) = fVar22;
  *(float *)(&stack0x00000cac + lVar4) = fVar22;
  *(float *)(&stack0x00000cb0 + lVar4) = fVar22;
  *(float *)(&stack0x00000cb4 + lVar4) = fVar22;
  *(float *)(&stack0x00000cb8 + lVar4) = fVar22;
  *(float *)(&stack0x00000cbc + lVar4) = fVar22;
  *(float *)(&stack0x00000cc0 + lVar4) = fVar22;
  *(float *)(&stack0x00000cc4 + lVar4) = fVar22;
  *(float *)(&stack0x00000cc8 + lVar4) = fVar22;
  *(float *)(&stack0x00000ccc + lVar4) = fVar22;
  *(float *)(&stack0x00000cd0 + lVar4) = fVar22;
  *(float *)(&stack0x00000cd4 + lVar4) = fVar22;
  *(undefined1 (*) [32])(&stack0x00001068 + lVar4) = ZEXT832(0) << 0x20;
  *(float *)(&stack0x00000cd8 + lVar4) = fVar22;
  *(float *)(&stack0x00000cdc + lVar4) = fVar22;
  *(float *)(&stack0x00000ce0 + lVar4) = fVar22;
  *(float *)(&stack0x00000ce4 + lVar4) = fVar22;
  *(float *)(&stack0x00000ce8 + lVar4) = fVar22;
  *(float *)(&stack0x00000cec + lVar4) = fVar22;
  *(float *)(&stack0x00000cf0 + lVar4) = fVar22;
  *(float *)(&stack0x00000cf4 + lVar4) = fVar22;
  *(float *)(&stack0x00000cf8 + lVar4) = fVar22;
  *(float *)(&stack0x00000cfc + lVar4) = fVar22;
  *(float *)(&stack0x00000d00 + lVar4) = fVar22;
  *(float *)(&stack0x00000d04 + lVar4) = fVar22;
  *(float *)(&stack0x00000d08 + lVar4) = fVar22;
  *(float *)(&stack0x00000d0c + lVar4) = fVar22;
  *(float *)(&stack0x00000d10 + lVar4) = fVar22;
  *(float *)(&stack0x00000d14 + lVar4) = fVar22;
  *(float *)(&stack0x00000d18 + lVar4) = fVar22;
  *(float *)(&stack0x00000d1c + lVar4) = fVar22;
  *(float *)(&stack0x00000d20 + lVar4) = fVar22;
  *(float *)(&stack0x00000d24 + lVar4) = fVar22;
  *(float *)(&stack0x00000d28 + lVar4) = fVar22;
  *(float *)(&stack0x00000d2c + lVar4) = fVar22;
  *(float *)(&stack0x00000d30 + lVar4) = fVar22;
  *(float *)(&stack0x00000d34 + lVar4) = fVar22;
  *(float *)(&stack0x00000d38 + lVar4) = fVar22;
  *(float *)(&stack0x00000d3c + lVar4) = fVar22;
  *(float *)(&stack0x00000d40 + lVar4) = fVar22;
  *(float *)(&stack0x00000d44 + lVar4) = fVar22;
  *(float *)(&stack0x00000d48 + lVar4) = fVar22;
  *(float *)(&stack0x00000d4c + lVar4) = fVar22;
  *(float *)(&stack0x00000d50 + lVar4) = fVar22;
  *(float *)(&stack0x00000d54 + lVar4) = fVar22;
  *(undefined1 (*) [32])(&stack0x00001088 + lVar4) = ZEXT832(0) << 0x20;
  *(float *)(&stack0x00000d58 + lVar4) = fVar22;
  *(float *)(&stack0x00000d5c + lVar4) = fVar22;
  *(float *)(&stack0x00000d60 + lVar4) = fVar22;
  *(float *)(&stack0x00000d64 + lVar4) = fVar22;
  *(float *)(&stack0x000010a8 + lVar4) = fVar22;
  *(float *)(&stack0x000010ac + lVar4) = fVar22;
  *(float *)(&stack0x000010b0 + lVar4) = fVar22;
  *(float *)(&stack0x000010b4 + lVar4) = fVar22;
  auVar13._0_4_ = *(float *)(&stack0x00000028 + lVar4) + *(float *)((longlong)afStackX_18 + lVar4);
  auVar13._4_4_ = *(float *)(&stack0x0000002c + lVar4) + fVar25;
  auVar13._8_4_ = *(float *)(&stack0x00000030 + lVar4) + fVar20;
  auVar13._12_4_ = *(float *)(&stack0x00000034 + lVar4) + fVar28;
  auVar14 = vsubps_avx(*(undefined1 (*) [16])(&stack0x00000058 + lVar4),auVar13);
  *(undefined1 (*) [16])(&stack0x000000a8 + lVar4) = auVar14;
  *(undefined1 (*) [16])(&stack0x000000b8 + lVar4) = auVar10;
  *(float *)(&stack0x00000098 + lVar4) = *(float *)((longlong)afStackX_18 + lVar4);
  *(float *)(&stack0x0000009c + lVar4) = fVar25;
  *(float *)(&stack0x000000a0 + lVar4) = fVar20;
  *(float *)(&stack0x000000a4 + lVar4) = fVar28;
  *(float *)(&stack0x00000088 + lVar4) = *(float *)(&stack0x00000028 + lVar4);
  *(float *)(&stack0x0000008c + lVar4) = *(float *)(&stack0x0000002c + lVar4);
  *(float *)(&stack0x00000090 + lVar4) = *(float *)(&stack0x00000030 + lVar4);
  *(float *)(&stack0x00000094 + lVar4) = *(float *)(&stack0x00000034 + lVar4);
  *(undefined1 **)((longlong)alStackX_8 + lVar4) = &stack0x00000088 + lVar4;
  auVar36 = ZEXT1664(CONCAT412(_DAT_146159be0,
                               CONCAT48(_DAT_146159be0,CONCAT44(_DAT_146159be0,_DAT_146159be0))));
  *(undefined8 *)((longlong)&uStack_20 + lVar4) = 0x14010d1cb;
  fVar25 = _DAT_145fc6ed8;
  FUN_14010d2d0();
  *(undefined8 *)((longlong)&uStack_20 + lVar4) = 0x14010d1db;
  FUN_144fb2f30(&stack0x000000c8 + lVar4,&stack0x00000858 + lVar4);
  auVar2._4_12_ = auVar36._4_12_;
  auVar2._0_4_ = (float)*(int *)(&stack0x0000085c + lVar4) * _DAT_14616b790 + fVar25;
  return auVar2._0_8_;
}

