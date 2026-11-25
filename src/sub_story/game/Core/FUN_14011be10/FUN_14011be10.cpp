// Recovered from game_scarlett_master.exe (GTA VI, Xbox Series X, PE32+ x64)
// Address: 14011be10  size: 357 bytes
// Name:    FUN_14011be10
// Subsystem: core
//
// Referenced strings (0 in this body, 0 including direct callees):
// Callees: 
//
// Generated decompilation. Formatting follows MiscRef/GTAVSRC conventions;
// identifiers are recovered, not original. See ../../../README.md.

#include "gta6decomp/rage_types.h"


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_14011be10(undefined1 (*param_1) [16],float *param_2,float param_3,float *param_4,
                  float param_5,undefined1 (*param_6) [16])

{
  float fVar1;
  float fVar2;
  float fVar3;
  float fVar4;
  float fVar5;
  float fVar6;
  float fVar7;
  float fVar8;
  float fVar9;
  float fVar10;
  undefined1 auVar11 [16];
  float fVar12;
  undefined1 auVar13 [16];
  undefined1 auVar14 [16];
  float fVar15;
  float fVar17;
  float fVar18;
  float fVar19;
  undefined1 auVar16 [16];
  undefined1 auVar20 [16];
  undefined1 auVar21 [16];
  undefined1 auVar22 [16];
  float fVar23;
  float fVar24;
  float fVar25;
  float fVar26;
  
  auVar20._0_12_ = ZEXT812(0);
  auVar20._12_4_ = 0;
  auVar13 = *param_6;
  auVar11 = vminss_avx(ZEXT416(_DAT_145fc6ed8),ZEXT416((uint)(param_3 * _DAT_14615a5c8)));
  auVar20 = vcmpss_avx(ZEXT416((uint)(param_3 * _DAT_14615a5c8)),auVar20,1);
  fVar12 = (float)(~auVar20._0_4_ & (uint)(auVar11._0_4_ * _DAT_146159ca4));
  auVar20 = vsubps_avx(*(undefined1 (*) [16])(param_2 + 4),auVar13);
  fVar15 = fVar12 * auVar20._0_4_ + auVar13._0_4_;
  fVar17 = fVar12 * auVar20._4_4_ + auVar13._4_4_;
  fVar18 = fVar12 * auVar20._8_4_ + auVar13._8_4_;
  fVar19 = fVar12 * auVar20._12_4_ + auVar13._12_4_;
  auVar11 = ZEXT816(0) << 0x20;
  auVar13._0_4_ = fVar15 * fVar15;
  auVar13._4_4_ = fVar17 * fVar17;
  auVar13._8_4_ = fVar18 * fVar18;
  auVar13._12_4_ = fVar19 * fVar19;
  auVar13 = vblendps_avx(auVar13,auVar11,8);
  auVar13 = vhaddps_avx(auVar13,auVar13);
  auVar13 = vhaddps_avx(auVar13,auVar13);
  auVar20 = vrsqrtps_avx(auVar13);
  fVar12 = auVar20._0_4_;
  fVar1 = auVar20._4_4_;
  fVar2 = auVar20._8_4_;
  fVar3 = auVar20._12_4_;
  auVar14._0_4_ =
       ((_DAT_145fc6f08 * fVar12 * fVar12 * auVar13._0_4_ - _DAT_145fc6f08) * fVar12 + fVar12) *
       fVar15;
  auVar14._4_4_ =
       ((_DAT_145fc6f08 * fVar1 * fVar1 * auVar13._4_4_ - _DAT_145fc6f08) * fVar1 + fVar1) * fVar17;
  auVar14._8_4_ =
       ((_DAT_145fc6f08 * fVar2 * fVar2 * auVar13._8_4_ - _DAT_145fc6f08) * fVar2 + fVar2) * fVar18;
  auVar14._12_4_ =
       ((_DAT_145fc6f08 * fVar3 * fVar3 * auVar13._12_4_ - _DAT_145fc6f08) * fVar3 + fVar3) * fVar19
  ;
  auVar13 = vblendps_avx(auVar14,auVar11,4);
  fVar12 = auVar13._0_4_;
  auVar21._0_4_ = fVar12 * fVar12;
  fVar2 = auVar13._4_4_;
  auVar21._4_4_ = fVar2 * fVar2;
  fVar15 = auVar13._8_4_;
  auVar21._8_4_ = fVar15 * fVar15;
  fVar18 = auVar13._12_4_;
  auVar21._12_4_ = fVar18 * fVar18;
  auVar13 = vblendps_avx(auVar21,auVar11,8);
  auVar13 = vhaddps_avx(auVar13,auVar13);
  auVar20 = vhaddps_avx(auVar13,auVar13);
  auVar13 = vrsqrtps_avx(auVar20);
  fVar1 = auVar13._0_4_;
  fVar3 = auVar13._4_4_;
  fVar17 = auVar13._8_4_;
  fVar19 = auVar13._12_4_;
  auVar13 = vcmpps_avx(auVar11,auVar20,1);
  auVar11._0_4_ =
       auVar13._0_4_ &
       (uint)(((_DAT_145fc6f08 * fVar1 * fVar1 * auVar20._0_4_ - _DAT_145fc6f08) * fVar1 + fVar1) *
             fVar12);
  auVar11._4_4_ =
       auVar13._4_4_ &
       (uint)(((_DAT_145fc6f08 * fVar3 * fVar3 * auVar20._4_4_ - _DAT_145fc6f08) * fVar3 + fVar3) *
             fVar2);
  auVar11._8_4_ =
       auVar13._8_4_ &
       (uint)(((_DAT_145fc6f08 * fVar17 * fVar17 * auVar20._8_4_ - _DAT_145fc6f08) * fVar17 + fVar17
              ) * fVar15);
  auVar11._12_4_ =
       auVar13._12_4_ &
       (uint)(((_DAT_145fc6f08 * fVar19 * fVar19 * auVar20._12_4_ - _DAT_145fc6f08) * fVar19 +
              fVar19) * fVar18);
  auVar22._8_8_ = 0;
  auVar22._0_8_ = _DAT_146159bc0;
  auVar13 = vshufps_avx(auVar11,auVar11,0xc9);
  auVar20 = vshufps_avx(auVar11,auVar11,0xd2);
  auVar11 = vshufps_avx(auVar22,auVar22,0xc9);
  auVar21 = vshufps_avx(auVar14,auVar14,0xc9);
  auVar16._0_4_ = -((float)_DAT_146159bc0 * auVar20._0_4_) + auVar13._0_4_ * auVar11._0_4_;
  auVar16._4_4_ = -((float)(_DAT_146159bc0 >> 0x20) * auVar20._4_4_) + auVar13._4_4_ * auVar11._4_4_
  ;
  auVar16._8_4_ = -(auVar20._8_4_ * 0.0) + auVar13._8_4_ * auVar11._8_4_;
  auVar16._12_4_ = -(auVar20._12_4_ * 0.0) + auVar13._12_4_ * auVar11._12_4_;
  auVar13 = vshufps_avx(auVar14,auVar14,0xd2);
  auVar20 = vshufps_avx(auVar16,auVar16,0xc9);
  *param_1 = auVar16;
  param_1[1] = auVar14;
  auVar11 = vshufps_avx(auVar16,auVar16,0xd2);
  fVar23 = -(auVar11._0_4_ * auVar21._0_4_) + auVar20._0_4_ * auVar13._0_4_;
  fVar24 = -(auVar11._4_4_ * auVar21._4_4_) + auVar20._4_4_ * auVar13._4_4_;
  fVar25 = -(auVar11._8_4_ * auVar21._8_4_) + auVar20._8_4_ * auVar13._8_4_;
  fVar26 = -(auVar11._12_4_ * auVar21._12_4_) + auVar20._12_4_ * auVar13._12_4_;
  *(float *)param_1[2] = fVar23;
  *(float *)(param_1[2] + 4) = fVar24;
  *(float *)(param_1[2] + 8) = fVar25;
  *(float *)(param_1[2] + 0xc) = fVar26;
  fVar12 = *param_4;
  fVar8 = param_2[1];
  fVar9 = param_2[2];
  fVar10 = param_2[3];
  fVar1 = param_4[1];
  fVar2 = param_4[2];
  fVar3 = param_2[0xd];
  fVar18 = param_2[0xe];
  fVar5 = param_2[0xf];
  fVar15 = param_2[5];
  fVar19 = param_2[6];
  fVar6 = param_2[7];
  fVar17 = param_2[9];
  fVar4 = param_2[10];
  fVar7 = param_2[0xb];
  *(float *)param_1[3] =
       fVar23 * 0.0 -
       (auVar14._0_4_ * param_5 -
       (auVar16._0_4_ * 0.0 +
       fVar2 * param_2[8] + fVar1 * param_2[4] + fVar12 * *param_2 + param_2[0xc]));
  *(float *)(param_1[3] + 4) =
       fVar24 * 0.0 -
       (auVar14._4_4_ * param_5 -
       (auVar16._4_4_ * 0.0 + fVar2 * fVar17 + fVar1 * fVar15 + fVar12 * fVar8 + fVar3));
  *(float *)(param_1[3] + 8) =
       fVar25 * 0.0 -
       (auVar14._8_4_ * param_5 -
       (auVar16._8_4_ * 0.0 + fVar2 * fVar4 + fVar1 * fVar19 + fVar12 * fVar9 + fVar18));
  *(float *)(param_1[3] + 0xc) =
       fVar26 * 0.0 -
       (auVar14._12_4_ * param_5 -
       (auVar16._12_4_ * 0.0 + fVar2 * fVar7 + fVar1 * fVar6 + fVar12 * fVar10 + fVar5));
  return;
}

