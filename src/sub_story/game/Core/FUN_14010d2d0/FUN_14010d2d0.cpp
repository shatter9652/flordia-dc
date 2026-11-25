// Recovered from game_scarlett_master.exe (GTA VI, Xbox Series X, PE32+ x64)
// Address: 14010d2d0  size: 833 bytes
// Name:    FUN_14010d2d0
// Subsystem: core
//
// Referenced strings (0 in this body, 0 including direct callees):
// Callees: 
//
// Generated decompilation. Formatting follows MiscRef/GTAVSRC conventions;
// identifiers are recovered, not original. See ../../../README.md.

#include "gta6decomp/rage_types.h"


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_14010d2d0(undefined1 (*param_1) [16],undefined1 (*param_2) [16],undefined1 (*param_3) [16],
                  float *param_4,float *param_5)

{
  float fVar1;
  float fVar2;
  float fVar3;
  float fVar4;
  undefined1 auVar5 [16];
  undefined1 auVar6 [16];
  undefined1 auVar7 [16];
  undefined1 auVar8 [16];
  undefined1 auVar9 [16];
  undefined1 auVar10 [16];
  undefined1 auVar11 [16];
  undefined1 auVar12 [16];
  float fVar13;
  float fVar15;
  float fVar16;
  float fVar17;
  undefined1 auVar14 [16];
  float fVar18;
  float fVar21;
  float fVar22;
  float fVar23;
  undefined1 auVar19 [16];
  undefined1 auVar20 [16];
  undefined1 auVar24 [16];
  undefined1 auVar25 [16];
  float fVar26;
  float fVar28;
  float fVar29;
  float fVar30;
  undefined1 auVar27 [16];
  float fVar31;
  float fVar35;
  float fVar36;
  float fVar37;
  undefined1 auVar32 [16];
  undefined1 auVar33 [16];
  undefined1 auVar34 [16];
  undefined1 auVar38 [16];
  undefined1 auVar39 [16];
  undefined1 auVar40 [16];
  undefined1 auVar41 [16];
  undefined1 auVar42 [16];
  undefined1 auVar43 [16];
  undefined1 auVar44 [16];
  undefined1 auVar45 [16];
  
  auVar5 = *param_1;
  auVar8 = vsubps_avx(*param_3,auVar5);
  fVar26 = auVar8._0_4_;
  fVar18 = fVar26 + *param_4;
  fVar28 = auVar8._4_4_;
  fVar21 = fVar28 + param_4[1];
  fVar29 = auVar8._8_4_;
  fVar22 = fVar29 + param_4[2];
  fVar30 = auVar8._12_4_;
  fVar23 = fVar30 + param_4[3];
  fVar13 = fVar26 + *param_5;
  fVar15 = fVar28 + param_5[1];
  fVar16 = fVar29 + param_5[2];
  fVar17 = fVar30 + param_5[3];
  auVar8._0_4_ = fVar18 * fVar18;
  auVar8._4_4_ = fVar21 * fVar21;
  auVar8._8_4_ = fVar22 * fVar22;
  auVar8._12_4_ = fVar23 * fVar23;
  fVar31 = fVar18 + *param_5;
  fVar35 = fVar21 + param_5[1];
  fVar36 = fVar22 + param_5[2];
  fVar37 = fVar23 + param_5[3];
  auVar7 = ZEXT816(0) << 0x20;
  auVar8 = vblendps_avx(auVar8,auVar7,8);
  auVar8 = vhaddps_avx(auVar8,auVar8);
  auVar8 = vhaddps_avx(auVar8,auVar8);
  auVar10 = vrsqrtps_avx(auVar8);
  fVar1 = auVar10._0_4_;
  fVar2 = auVar10._4_4_;
  fVar3 = auVar10._8_4_;
  fVar4 = auVar10._12_4_;
  auVar24._0_4_ =
       ((_DAT_145fc6f08 * fVar1 * fVar1 * auVar8._0_4_ - _DAT_145fc6f08) * fVar1 + fVar1) * fVar18;
  auVar24._4_4_ =
       ((_DAT_145fc6f08 * fVar2 * fVar2 * auVar8._4_4_ - _DAT_145fc6f08) * fVar2 + fVar2) * fVar21;
  auVar24._8_4_ =
       ((_DAT_145fc6f08 * fVar3 * fVar3 * auVar8._8_4_ - _DAT_145fc6f08) * fVar3 + fVar3) * fVar22;
  auVar24._12_4_ =
       ((_DAT_145fc6f08 * fVar4 * fVar4 * auVar8._12_4_ - _DAT_145fc6f08) * fVar4 + fVar4) * fVar23;
  auVar19._0_4_ = fVar26 * fVar26;
  auVar19._4_4_ = fVar28 * fVar28;
  auVar19._8_4_ = fVar29 * fVar29;
  auVar19._12_4_ = fVar30 * fVar30;
  auVar8 = vblendps_avx(auVar19,auVar7,8);
  auVar14 = vshufps_avx(auVar24,auVar24,0xd2);
  auVar6 = vshufps_avx(auVar24,auVar24,0xc9);
  auVar8 = vhaddps_avx(auVar8,auVar8);
  auVar8 = vhaddps_avx(auVar8,auVar8);
  auVar10 = vrsqrtps_avx(auVar8);
  fVar1 = auVar10._0_4_;
  fVar2 = auVar10._4_4_;
  fVar3 = auVar10._8_4_;
  fVar4 = auVar10._12_4_;
  auVar10._0_4_ =
       ((_DAT_145fc6f08 * fVar1 * fVar1 * auVar8._0_4_ - _DAT_145fc6f08) * fVar1 + fVar1) * fVar26;
  auVar10._4_4_ =
       ((_DAT_145fc6f08 * fVar2 * fVar2 * auVar8._4_4_ - _DAT_145fc6f08) * fVar2 + fVar2) * fVar28;
  auVar10._8_4_ =
       ((_DAT_145fc6f08 * fVar3 * fVar3 * auVar8._8_4_ - _DAT_145fc6f08) * fVar3 + fVar3) * fVar29;
  auVar10._12_4_ =
       ((_DAT_145fc6f08 * fVar4 * fVar4 * auVar8._12_4_ - _DAT_145fc6f08) * fVar4 + fVar4) * fVar30;
  auVar9 = vshufps_avx(auVar10,auVar10,0xc9);
  auVar19 = vshufps_avx(auVar10,auVar10,0xd2);
  fVar26 = -(auVar6._0_4_ * auVar19._0_4_) + auVar14._0_4_ * auVar9._0_4_;
  fVar28 = -(auVar6._4_4_ * auVar19._4_4_) + auVar14._4_4_ * auVar9._4_4_;
  fVar29 = -(auVar6._8_4_ * auVar19._8_4_) + auVar14._8_4_ * auVar9._8_4_;
  fVar30 = -(auVar6._12_4_ * auVar19._12_4_) + auVar14._12_4_ * auVar9._12_4_;
  auVar11._0_4_ = fVar26 * fVar26;
  auVar11._4_4_ = fVar28 * fVar28;
  auVar11._8_4_ = fVar29 * fVar29;
  auVar11._12_4_ = fVar30 * fVar30;
  auVar8 = vblendps_avx(auVar11,auVar7,8);
  auVar8 = vhaddps_avx(auVar8,auVar8);
  auVar10 = vhaddps_avx(auVar8,auVar8);
  auVar8 = vrsqrtps_avx(auVar10);
  fVar1 = auVar8._0_4_;
  fVar2 = auVar8._4_4_;
  fVar3 = auVar8._8_4_;
  fVar4 = auVar8._12_4_;
  auVar40._0_4_ = fVar31 * fVar31;
  auVar40._4_4_ = fVar35 * fVar35;
  auVar40._8_4_ = fVar36 * fVar36;
  auVar40._12_4_ = fVar37 * fVar37;
  auVar8 = vblendps_avx(auVar40,auVar7,8);
  auVar8 = vhaddps_avx(auVar8,auVar8);
  auVar8 = vhaddps_avx(auVar8,auVar8);
  auVar12._0_4_ =
       fVar26 * ((_DAT_145fc6f08 * fVar1 * fVar1 * auVar10._0_4_ - _DAT_145fc6f08) * fVar1 + fVar1);
  auVar12._4_4_ =
       fVar28 * ((_DAT_145fc6f08 * fVar2 * fVar2 * auVar10._4_4_ - _DAT_145fc6f08) * fVar2 + fVar2);
  auVar12._8_4_ =
       fVar29 * ((_DAT_145fc6f08 * fVar3 * fVar3 * auVar10._8_4_ - _DAT_145fc6f08) * fVar3 + fVar3);
  auVar12._12_4_ =
       fVar30 * ((_DAT_145fc6f08 * fVar4 * fVar4 * auVar10._12_4_ - _DAT_145fc6f08) * fVar4 + fVar4)
  ;
  fVar1 = auVar5._0_4_;
  auVar25._0_4_ = auVar12._0_4_ * fVar1;
  fVar3 = auVar5._4_4_;
  auVar25._4_4_ = auVar12._4_4_ * fVar3;
  fVar26 = auVar5._8_4_;
  auVar25._8_4_ = auVar12._8_4_ * fVar26;
  fVar29 = auVar5._12_4_;
  auVar25._12_4_ = auVar12._12_4_ * fVar29;
  auVar10 = vrsqrtps_avx(auVar8);
  auVar5 = vblendps_avx(auVar25,auVar7,8);
  auVar5 = vhaddps_avx(auVar5,auVar5);
  fVar2 = auVar10._0_4_;
  fVar4 = auVar10._4_4_;
  fVar28 = auVar10._8_4_;
  fVar30 = auVar10._12_4_;
  auVar5 = vhaddps_avx(auVar5,auVar5);
  auVar27._0_4_ = auVar5._0_4_ ^ _DAT_145fc6f10;
  auVar27._4_4_ = auVar5._4_4_ ^ _DAT_145fc6f10;
  auVar27._8_4_ = auVar5._8_4_ ^ _DAT_145fc6f10;
  auVar27._12_4_ = auVar5._12_4_ ^ _DAT_145fc6f10;
  auVar5 = vblendps_avx(auVar12,auVar27,8);
  auVar32._0_4_ =
       ((_DAT_145fc6f08 * fVar2 * fVar2 * auVar8._0_4_ - _DAT_145fc6f08) * fVar2 + fVar2) * fVar31;
  auVar32._4_4_ =
       ((_DAT_145fc6f08 * fVar4 * fVar4 * auVar8._4_4_ - _DAT_145fc6f08) * fVar4 + fVar4) * fVar35;
  auVar32._8_4_ =
       ((_DAT_145fc6f08 * fVar28 * fVar28 * auVar8._8_4_ - _DAT_145fc6f08) * fVar28 + fVar28) *
       fVar36;
  auVar32._12_4_ =
       ((_DAT_145fc6f08 * fVar30 * fVar30 * auVar8._12_4_ - _DAT_145fc6f08) * fVar30 + fVar30) *
       fVar37;
  auVar11 = vshufps_avx(auVar32,auVar32,0xd2);
  auVar20 = vshufps_avx(auVar32,auVar32,0xc9);
  fVar18 = -(auVar20._0_4_ * auVar14._0_4_) + auVar6._0_4_ * auVar11._0_4_;
  fVar21 = -(auVar20._4_4_ * auVar14._4_4_) + auVar6._4_4_ * auVar11._4_4_;
  fVar22 = -(auVar20._8_4_ * auVar14._8_4_) + auVar6._8_4_ * auVar11._8_4_;
  fVar23 = -(auVar20._12_4_ * auVar14._12_4_) + auVar6._12_4_ * auVar11._12_4_;
  auVar33._0_4_ = fVar18 * fVar18;
  auVar33._4_4_ = fVar21 * fVar21;
  auVar33._8_4_ = fVar22 * fVar22;
  auVar33._12_4_ = fVar23 * fVar23;
  auVar8 = vblendps_avx(auVar33,auVar7,8);
  auVar8 = vhaddps_avx(auVar8,auVar8);
  auVar8 = vhaddps_avx(auVar8,auVar8);
  auVar10 = vrsqrtps_avx(auVar8);
  fVar2 = auVar10._0_4_;
  fVar4 = auVar10._4_4_;
  fVar28 = auVar10._8_4_;
  fVar30 = auVar10._12_4_;
  auVar34._0_4_ =
       fVar18 * ((_DAT_145fc6f08 * fVar2 * fVar2 * auVar8._0_4_ - _DAT_145fc6f08) * fVar2 + fVar2);
  auVar34._4_4_ =
       fVar21 * ((_DAT_145fc6f08 * fVar4 * fVar4 * auVar8._4_4_ - _DAT_145fc6f08) * fVar4 + fVar4);
  auVar34._8_4_ =
       fVar22 * ((_DAT_145fc6f08 * fVar28 * fVar28 * auVar8._8_4_ - _DAT_145fc6f08) * fVar28 +
                fVar28);
  auVar34._12_4_ =
       fVar23 * ((_DAT_145fc6f08 * fVar30 * fVar30 * auVar8._12_4_ - _DAT_145fc6f08) * fVar30 +
                fVar30);
  auVar45._0_4_ = fVar13 * fVar13;
  auVar45._4_4_ = fVar15 * fVar15;
  auVar45._8_4_ = fVar16 * fVar16;
  auVar45._12_4_ = fVar17 * fVar17;
  auVar8 = vblendps_avx(auVar45,auVar7,8);
  auVar38._0_4_ = auVar34._0_4_ * fVar1;
  auVar38._4_4_ = auVar34._4_4_ * fVar3;
  auVar38._8_4_ = auVar34._8_4_ * fVar26;
  auVar38._12_4_ = auVar34._12_4_ * fVar29;
  auVar10 = vhaddps_avx(auVar8,auVar8);
  auVar8 = vblendps_avx(auVar38,auVar7,8);
  auVar8 = vhaddps_avx(auVar8,auVar8);
  auVar10 = vhaddps_avx(auVar10,auVar10);
  auVar8 = vhaddps_avx(auVar8,auVar8);
  auVar14 = vrsqrtps_avx(auVar10);
  auVar39._0_4_ = auVar8._0_4_ ^ _DAT_145fc6f10;
  auVar39._4_4_ = auVar8._4_4_ ^ _DAT_145fc6f10;
  auVar39._8_4_ = auVar8._8_4_ ^ _DAT_145fc6f10;
  auVar39._12_4_ = auVar8._12_4_ ^ _DAT_145fc6f10;
  auVar8 = vblendps_avx(auVar34,auVar39,8);
  fVar2 = auVar14._0_4_;
  fVar4 = auVar14._4_4_;
  fVar28 = auVar14._8_4_;
  fVar30 = auVar14._12_4_;
  auVar14._0_4_ =
       ((_DAT_145fc6f08 * fVar2 * fVar2 * auVar10._0_4_ - _DAT_145fc6f08) * fVar2 + fVar2) * fVar13;
  auVar14._4_4_ =
       ((_DAT_145fc6f08 * fVar4 * fVar4 * auVar10._4_4_ - _DAT_145fc6f08) * fVar4 + fVar4) * fVar15;
  auVar14._8_4_ =
       ((_DAT_145fc6f08 * fVar28 * fVar28 * auVar10._8_4_ - _DAT_145fc6f08) * fVar28 + fVar28) *
       fVar16;
  auVar14._12_4_ =
       ((_DAT_145fc6f08 * fVar30 * fVar30 * auVar10._12_4_ - _DAT_145fc6f08) * fVar30 + fVar30) *
       fVar17;
  auVar10 = vshufps_avx(auVar14,auVar14,0xd2);
  auVar14 = vshufps_avx(auVar14,auVar14,0xc9);
  fVar18 = -(auVar14._0_4_ * auVar11._0_4_) + auVar20._0_4_ * auVar10._0_4_;
  fVar21 = -(auVar14._4_4_ * auVar11._4_4_) + auVar20._4_4_ * auVar10._4_4_;
  fVar22 = -(auVar14._8_4_ * auVar11._8_4_) + auVar20._8_4_ * auVar10._8_4_;
  fVar23 = -(auVar14._12_4_ * auVar11._12_4_) + auVar20._12_4_ * auVar10._12_4_;
  fVar13 = -(auVar9._0_4_ * auVar10._0_4_) + auVar14._0_4_ * auVar19._0_4_;
  fVar15 = -(auVar9._4_4_ * auVar10._4_4_) + auVar14._4_4_ * auVar19._4_4_;
  fVar16 = -(auVar9._8_4_ * auVar10._8_4_) + auVar14._8_4_ * auVar19._8_4_;
  fVar17 = -(auVar9._12_4_ * auVar10._12_4_) + auVar14._12_4_ * auVar19._12_4_;
  auVar41._0_4_ = fVar18 * fVar18;
  auVar41._4_4_ = fVar21 * fVar21;
  auVar41._8_4_ = fVar22 * fVar22;
  auVar41._12_4_ = fVar23 * fVar23;
  auVar10 = vblendps_avx(auVar41,auVar7,8);
  auVar20._0_4_ = fVar13 * fVar13;
  auVar20._4_4_ = fVar15 * fVar15;
  auVar20._8_4_ = fVar16 * fVar16;
  auVar20._12_4_ = fVar17 * fVar17;
  auVar14 = vhaddps_avx(auVar10,auVar10);
  auVar10 = vblendps_avx(auVar20,auVar7,8);
  auVar10 = vhaddps_avx(auVar10,auVar10);
  auVar14 = vhaddps_avx(auVar14,auVar14);
  auVar6 = vhaddps_avx(auVar10,auVar10);
  auVar10 = vrsqrtps_avx(auVar14);
  auVar9 = vrsqrtps_avx(auVar6);
  fVar2 = auVar10._0_4_;
  fVar4 = auVar10._4_4_;
  fVar28 = auVar10._8_4_;
  fVar30 = auVar10._12_4_;
  auVar42._0_4_ =
       fVar18 * ((_DAT_145fc6f08 * fVar2 * fVar2 * auVar14._0_4_ - _DAT_145fc6f08) * fVar2 + fVar2);
  auVar42._4_4_ =
       fVar21 * ((_DAT_145fc6f08 * fVar4 * fVar4 * auVar14._4_4_ - _DAT_145fc6f08) * fVar4 + fVar4);
  auVar42._8_4_ =
       fVar22 * ((_DAT_145fc6f08 * fVar28 * fVar28 * auVar14._8_4_ - _DAT_145fc6f08) * fVar28 +
                fVar28);
  auVar42._12_4_ =
       fVar23 * ((_DAT_145fc6f08 * fVar30 * fVar30 * auVar14._12_4_ - _DAT_145fc6f08) * fVar30 +
                fVar30);
  auVar43._0_4_ = auVar42._0_4_ * fVar1;
  auVar43._4_4_ = auVar42._4_4_ * fVar3;
  auVar43._8_4_ = auVar42._8_4_ * fVar26;
  auVar43._12_4_ = auVar42._12_4_ * fVar29;
  auVar10 = vblendps_avx(auVar43,auVar7,8);
  auVar10 = vhaddps_avx(auVar10,auVar10);
  auVar10 = vhaddps_avx(auVar10,auVar10);
  auVar44._0_4_ = auVar10._0_4_ ^ _DAT_145fc6f10;
  auVar44._4_4_ = auVar10._4_4_ ^ _DAT_145fc6f10;
  auVar44._8_4_ = auVar10._8_4_ ^ _DAT_145fc6f10;
  auVar44._12_4_ = auVar10._12_4_ ^ _DAT_145fc6f10;
  auVar10 = vblendps_avx(auVar42,auVar44,8);
  auVar10 = vunpckhps_avx(auVar5,auVar10);
  fVar2 = auVar9._0_4_;
  fVar4 = auVar9._4_4_;
  fVar28 = auVar9._8_4_;
  fVar30 = auVar9._12_4_;
  auVar9._0_4_ = fVar13 * ((_DAT_145fc6f08 * fVar2 * fVar2 * auVar6._0_4_ - _DAT_145fc6f08) * fVar2
                          + fVar2);
  auVar9._4_4_ = fVar15 * ((_DAT_145fc6f08 * fVar4 * fVar4 * auVar6._4_4_ - _DAT_145fc6f08) * fVar4
                          + fVar4);
  auVar9._8_4_ = fVar16 * ((_DAT_145fc6f08 * fVar28 * fVar28 * auVar6._8_4_ - _DAT_145fc6f08) *
                           fVar28 + fVar28);
  auVar9._12_4_ =
       fVar17 * ((_DAT_145fc6f08 * fVar30 * fVar30 * auVar6._12_4_ - _DAT_145fc6f08) * fVar30 +
                fVar30);
  auVar5._0_4_ = auVar9._0_4_ * fVar1;
  auVar5._4_4_ = auVar9._4_4_ * fVar3;
  auVar5._8_4_ = auVar9._8_4_ * fVar26;
  auVar5._12_4_ = auVar9._12_4_ * fVar29;
  auVar5 = vblendps_avx(auVar5,auVar7,8);
  auVar14 = vunpcklps_avx(auVar12,auVar42);
  auVar5 = vhaddps_avx(auVar5,auVar5);
  auVar5 = vhaddps_avx(auVar5,auVar5);
  auVar6._0_4_ = auVar5._0_4_ ^ _DAT_145fc6f10;
  auVar6._4_4_ = auVar5._4_4_ ^ _DAT_145fc6f10;
  auVar6._8_4_ = auVar5._8_4_ ^ _DAT_145fc6f10;
  auVar6._12_4_ = auVar5._12_4_ ^ _DAT_145fc6f10;
  auVar5 = vblendps_avx(auVar9,auVar6,8);
  auVar6 = vunpcklps_avx(auVar34,auVar9);
  auVar5 = vunpckhps_avx(auVar8,auVar5);
  auVar8 = vunpckhps_avx(auVar14,auVar6);
  auVar6 = vunpcklps_avx(auVar14,auVar6);
  auVar14 = vunpckhps_avx(auVar10,auVar5);
  auVar5 = vunpcklps_avx(auVar10,auVar5);
  *param_2 = auVar6;
  param_2[1] = auVar8;
  param_2[2] = auVar5;
  param_2[3] = auVar14;
  return;
}

