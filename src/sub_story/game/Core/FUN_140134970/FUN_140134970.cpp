// Recovered from game_scarlett_master.exe (GTA VI, Xbox Series X, PE32+ x64)
// Address: 140134970  size: 448 bytes
// Name:    FUN_140134970
// Subsystem: core
//
// Referenced strings (0 in this body, 0 including direct callees):
// Callees: 
//
// Generated decompilation. Formatting follows MiscRef/GTAVSRC conventions;
// identifiers are recovered, not original. See ../../../README.md.

#include "gta6decomp/rage_types.h"


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_140134970(undefined1 (*param_1) [16],undefined1 (*param_2) [16],float *param_3)

{
  float fVar1;
  float fVar2;
  float fVar3;
  float fVar4;
  float fVar5;
  float fVar6;
  undefined1 auVar7 [16];
  undefined1 auVar8 [16];
  undefined1 auVar9 [16];
  float fVar10;
  float fVar11;
  float fVar12;
  float fVar13;
  float fVar14;
  float fVar15;
  float fVar16;
  float fVar17;
  float fVar18;
  float fVar19;
  float fVar20;
  float fVar21;
  float fVar22;
  undefined8 uVar23;
  undefined8 uVar24;
  undefined1 auVar25 [16];
  undefined1 auVar26 [16];
  undefined1 auVar27 [16];
  undefined1 auVar28 [16];
  undefined1 auVar29 [16];
  undefined1 auVar30 [16];
  undefined1 auVar31 [16];
  undefined1 auVar32 [16];
  
  auVar7 = *param_2;
  fVar1 = *(float *)(*param_2 + 0xc);
  uVar23 = *(undefined8 *)param_2[1];
  uVar24 = *(undefined8 *)(param_2[1] + 8);
  auVar25._0_4_ = auVar7._0_4_ + auVar7._0_4_;
  auVar25._4_4_ = auVar7._4_4_ + auVar7._4_4_;
  auVar25._8_4_ = auVar7._8_4_ + auVar7._8_4_;
  auVar25._12_4_ = auVar7._12_4_ + auVar7._12_4_;
  auVar27 = vshufps_avx(auVar7,auVar7,0xc9);
  auVar7 = vshufps_avx(auVar7,auVar7,0xd2);
  auVar8 = vshufps_avx(auVar25,auVar25,0xc9);
  auVar9 = vshufps_avx(auVar25,auVar25,0xd2);
  auVar28._0_4_ = auVar7._0_4_ * auVar25._0_4_ + auVar8._0_4_ * fVar1;
  auVar28._4_4_ = auVar7._4_4_ * auVar25._4_4_ + auVar8._4_4_ * fVar1;
  auVar28._8_4_ = auVar7._8_4_ * auVar25._8_4_ + auVar8._8_4_ * fVar1;
  auVar28._12_4_ = auVar7._12_4_ * auVar25._12_4_ + auVar8._12_4_ * fVar1;
  auVar26._0_4_ = -(fVar1 * auVar9._0_4_) + auVar27._0_4_ * auVar25._0_4_;
  auVar26._4_4_ = -(fVar1 * auVar9._4_4_) + auVar27._4_4_ * auVar25._4_4_;
  auVar26._8_4_ = -(fVar1 * auVar9._8_4_) + auVar27._8_4_ * auVar25._8_4_;
  auVar26._12_4_ = -(fVar1 * auVar9._12_4_) + auVar27._12_4_ * auVar25._12_4_;
  fVar1 = *(float *)param_2[1];
  fVar2 = *(float *)(param_2[1] + 4);
  auVar30._0_4_ = -(auVar9._0_4_ * auVar7._0_4_) - (auVar27._0_4_ * auVar8._0_4_ - _DAT_145fc6ed8);
  auVar30._4_4_ = -(auVar9._4_4_ * auVar7._4_4_) - (auVar27._4_4_ * auVar8._4_4_ - _DAT_145fc6ed8);
  auVar30._8_4_ = -(auVar9._8_4_ * auVar7._8_4_) - (auVar27._8_4_ * auVar8._8_4_ - _DAT_145fc6ed8);
  auVar30._12_4_ =
       -(auVar9._12_4_ * auVar7._12_4_) - (auVar27._12_4_ * auVar8._12_4_ - _DAT_145fc6ed8);
  auVar7 = vblendps_avx(auVar28,auVar26,2);
  auVar27 = vblendps_avx(auVar26,auVar30,2);
  auVar8 = vblendps_avx(auVar30,auVar28,2);
  auVar7 = vblendps_avx(auVar30,auVar7,3);
  auVar8 = vblendps_avx(auVar26,auVar8,3);
  auVar27 = vblendps_avx(auVar28,auVar27,3);
  fVar3 = *(float *)(param_2[1] + 8);
  *param_1 = auVar8;
  param_1[1] = auVar27;
  param_1[2] = auVar7;
  *(undefined8 *)param_1[3] = uVar23;
  *(undefined8 *)(param_1[3] + 8) = uVar24;
  fVar4 = *(float *)(param_2[2] + 4);
  fVar5 = *(float *)(param_2[2] + 8);
  fVar6 = *(float *)param_2[2];
  auVar32._0_4_ = fVar6 * auVar8._0_4_;
  auVar32._4_4_ = fVar6 * auVar8._4_4_;
  auVar32._8_4_ = fVar6 * auVar8._8_4_;
  auVar32._12_4_ = fVar6 * auVar8._12_4_;
  auVar29._0_4_ = fVar5 * auVar7._0_4_;
  auVar29._4_4_ = fVar5 * auVar7._4_4_;
  auVar29._8_4_ = fVar5 * auVar7._8_4_;
  auVar29._12_4_ = fVar5 * auVar7._12_4_;
  auVar31._0_4_ = fVar4 * auVar27._0_4_;
  auVar31._4_4_ = fVar4 * auVar27._4_4_;
  auVar31._8_4_ = fVar4 * auVar27._8_4_;
  auVar31._12_4_ = fVar4 * auVar27._12_4_;
  *param_1 = auVar32;
  param_1[1] = auVar31;
  param_1[2] = auVar29;
  auVar8 = vshufps_avx(auVar32,auVar32,0x55);
  auVar7 = *(undefined1 (*) [16])(param_3 + 0xc);
  fVar11 = *param_3;
  fVar12 = param_3[1];
  fVar13 = param_3[2];
  fVar14 = param_3[3];
  fVar15 = param_3[4];
  fVar16 = param_3[5];
  fVar17 = param_3[6];
  fVar18 = param_3[7];
  fVar19 = param_3[8];
  fVar20 = param_3[9];
  fVar21 = param_3[10];
  fVar22 = param_3[0xb];
  auVar27 = vpunpckhwd_avx(auVar7,auVar7);
  auVar27 = vpsrad_avx(auVar27,0x10);
  auVar27 = vcvtdq2ps_avx(auVar27);
  auVar27 = vshufpd_avx(auVar27,auVar27,3);
  fVar4 = auVar27._0_4_ * _DAT_146159c90;
  fVar5 = auVar27._4_4_ * _UNK_146159c94;
  fVar6 = auVar27._8_4_ * _UNK_146159c98;
  fVar10 = auVar27._12_4_ * _UNK_146159c9c;
  auVar27 = vshufps_avx(auVar32,auVar32,0xaa);
  auVar9 = vshufps_avx(auVar31,auVar31,0x55);
  auVar25 = vshufps_avx(auVar31,auVar31,0xaa);
  auVar26 = vshufps_avx(auVar29,auVar29,0x55);
  *(float *)*param_1 = fVar19 * auVar27._0_4_ + fVar15 * auVar8._0_4_ + auVar32._0_4_ * fVar11;
  *(float *)(*param_1 + 4) = fVar20 * auVar27._4_4_ + fVar16 * auVar8._4_4_ + auVar32._0_4_ * fVar12
  ;
  *(float *)(*param_1 + 8) = fVar21 * auVar27._8_4_ + fVar17 * auVar8._8_4_ + auVar32._0_4_ * fVar13
  ;
  *(float *)(*param_1 + 0xc) =
       fVar22 * auVar27._12_4_ + fVar18 * auVar8._12_4_ + auVar32._0_4_ * fVar14;
  auVar27 = vshufps_avx(auVar29,auVar29,0xaa);
  *(float *)param_1[1] = fVar19 * auVar25._0_4_ + fVar15 * auVar9._0_4_ + auVar31._0_4_ * fVar11;
  *(float *)(param_1[1] + 4) =
       fVar20 * auVar25._4_4_ + fVar16 * auVar9._4_4_ + auVar31._0_4_ * fVar12;
  *(float *)(param_1[1] + 8) =
       fVar21 * auVar25._8_4_ + fVar17 * auVar9._8_4_ + auVar31._0_4_ * fVar13;
  *(float *)(param_1[1] + 0xc) =
       fVar22 * auVar25._12_4_ + fVar18 * auVar9._12_4_ + auVar31._0_4_ * fVar14;
  *(float *)param_1[2] = fVar19 * auVar27._0_4_ + fVar15 * auVar26._0_4_ + auVar29._0_4_ * fVar11;
  *(float *)(param_1[2] + 4) =
       fVar20 * auVar27._4_4_ + fVar16 * auVar26._4_4_ + auVar29._0_4_ * fVar12;
  *(float *)(param_1[2] + 8) =
       fVar21 * auVar27._8_4_ + fVar17 * auVar26._8_4_ + auVar29._0_4_ * fVar13;
  *(float *)(param_1[2] + 0xc) =
       fVar22 * auVar27._12_4_ + fVar18 * auVar26._12_4_ + auVar29._0_4_ * fVar14;
  *(float *)param_1[3] = fVar19 * fVar3 + fVar15 * fVar2 + fVar11 * fVar1 + fVar4 + auVar7._0_4_;
  *(float *)(param_1[3] + 4) =
       fVar20 * fVar3 + fVar16 * fVar2 + fVar12 * fVar1 + fVar5 + auVar7._4_4_;
  *(float *)(param_1[3] + 8) =
       fVar21 * fVar3 + fVar17 * fVar2 + fVar13 * fVar1 + fVar6 + auVar7._8_4_;
  *(float *)(param_1[3] + 0xc) =
       fVar22 * fVar3 + fVar18 * fVar2 + fVar14 * fVar1 + fVar10 + auVar7._12_4_;
  return;
}

