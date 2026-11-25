// Recovered from game_scarlett_master.exe (GTA VI, Xbox Series X, PE32+ x64)
// Address: 1401134f0  size: 577 bytes
// Name:    FUN_1401134f0
// Subsystem: core
//
// Referenced strings (0 in this body, 0 including direct callees):
// Callees: FUN_1401137e0
//
// Generated decompilation. Formatting follows MiscRef/GTAVSRC conventions;
// identifiers are recovered, not original. See ../../../README.md.

#include "gta6decomp/rage_types.h"


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1401134f0(longlong param_1,undefined8 param_2,float *param_3)

{
  undefined1 auVar1 [16];
  float *pfVar2;
  undefined1 auVar3 [16];
  float fVar4;
  float fVar5;
  float fVar6;
  float fVar7;
  float fVar8;
  short sVar9;
  short sVar12;
  undefined1 auVar10 [16];
  undefined1 auVar11 [16];
  float fVar13;
  float fVar15;
  float fVar16;
  float fVar17;
  undefined1 auVar14 [16];
  float fVar18;
  float fVar19;
  float fVar20;
  float fVar21;
  undefined1 auVar22 [16];
  undefined1 auVar23 [16];
  undefined1 auVar24 [16];
  undefined1 auVar25 [16];
  float fVar26;
  undefined1 auVar27 [16];
  undefined1 auVar28 [16];
  undefined1 auVar29 [16];
  undefined1 auVar30 [16];
  undefined1 auVar31 [16];
  undefined1 auVar32 [16];
  undefined1 auVar33 [16];
  undefined1 auVar34 [16];
  undefined1 auVar35 [16];
  undefined1 auVar36 [16];
  undefined1 auVar37 [16];
  undefined1 auVar38 [16];
  
  FUN_1401137e0();
  fVar4 = _DAT_145fc6ed8;
  pfVar2 = *(float **)(param_1 + 8);
  if (pfVar2 != (float *)0x0) {
    fVar17 = *param_3;
    fVar18 = param_3[1];
    fVar19 = param_3[2];
    fVar20 = param_3[3];
    auVar27._0_12_ = ZEXT812(0);
    auVar27._12_4_ = 0;
    auVar10 = *(undefined1 (*) [16])(pfVar2 + 4);
    auVar11 = *(undefined1 (*) [16])(pfVar2 + 8);
    fVar5 = *pfVar2;
    fVar6 = pfVar2[1];
    fVar7 = pfVar2[2];
    fVar8 = pfVar2[3];
    auVar1 = *(undefined1 (*) [16])(pfVar2 + 0xc);
    auVar22._0_4_ = fVar17 * fVar17;
    auVar22._4_4_ = fVar18 * fVar18;
    auVar22._8_4_ = fVar19 * fVar19;
    auVar22._12_4_ = fVar20 * fVar20;
    auVar3 = vshufps_avx(auVar11,auVar10,0x33);
    auVar29 = vshufps_avx(auVar10,auVar3,0x8f);
    auVar3 = vblendps_avx(auVar22,auVar27,8);
    auVar3 = vhaddps_avx(auVar3,auVar3);
    auVar14 = vhaddps_avx(auVar3,auVar3);
    auVar3 = vrsqrtps_avx(auVar14);
    fVar26 = auVar3._0_4_;
    fVar13 = auVar3._4_4_;
    fVar15 = auVar3._8_4_;
    fVar16 = auVar3._12_4_;
    auVar30._4_4_ = _DAT_146159bfc;
    auVar30._0_4_ = _DAT_146159bfc;
    auVar30._8_4_ = _DAT_146159bfc;
    auVar30._12_4_ = _DAT_146159bfc;
    auVar3 = vcmpps_avx(auVar30,auVar14,2);
    auVar23._0_4_ =
         (float)((uint)(((fVar26 * fVar26 * auVar14._0_4_ * _DAT_145fc6f08 - _DAT_145fc6f08) *
                         fVar26 + fVar26) * auVar14._0_4_) & auVar3._0_4_);
    auVar23._4_4_ =
         (float)((uint)(((fVar13 * fVar13 * auVar14._4_4_ * _DAT_145fc6f08 - _DAT_145fc6f08) *
                         fVar13 + fVar13) * auVar14._4_4_) & auVar3._4_4_);
    auVar23._8_4_ =
         (float)((uint)(((fVar15 * fVar15 * auVar14._8_4_ * _DAT_145fc6f08 - _DAT_145fc6f08) *
                         fVar15 + fVar15) * auVar14._8_4_) & auVar3._8_4_);
    auVar23._12_4_ =
         (float)((uint)(((fVar16 * fVar16 * auVar14._12_4_ * _DAT_145fc6f08 - _DAT_145fc6f08) *
                         fVar16 + fVar16) * auVar14._12_4_) & auVar3._12_4_);
    auVar3 = vrcpps_avx(auVar23);
    auVar31._0_4_ = _DAT_145fc6f10 ^ (uint)auVar23._0_4_;
    auVar31._4_4_ = _DAT_145fc6f10 ^ (uint)auVar23._4_4_;
    auVar31._8_4_ = _DAT_145fc6f10 ^ (uint)auVar23._8_4_;
    auVar31._12_4_ = _DAT_145fc6f10 ^ (uint)auVar23._12_4_;
    fVar13 = auVar3._0_4_;
    fVar15 = auVar3._4_4_;
    fVar16 = auVar3._8_4_;
    fVar26 = auVar3._12_4_;
    auVar37._0_4_ = -((auVar23._0_4_ * fVar13 - _DAT_145fc6ed8) * fVar13) + fVar13;
    auVar37._4_4_ = -((auVar23._4_4_ * fVar15 - _DAT_145fc6ed8) * fVar15) + fVar15;
    auVar37._8_4_ = -((auVar23._8_4_ * fVar16 - _DAT_145fc6ed8) * fVar16) + fVar16;
    auVar37._12_4_ = -((auVar23._12_4_ * fVar26 - _DAT_145fc6ed8) * fVar26) + fVar26;
    auVar3 = vcmpps_avx(auVar31,auVar23,0);
    auVar32._4_4_ = _DAT_14615b36c;
    auVar32._0_4_ = _DAT_14615b36c;
    auVar32._8_4_ = _DAT_14615b36c;
    auVar32._12_4_ = _DAT_14615b36c;
    auVar3 = vblendvps_avx(auVar37,auVar32,auVar3);
    fVar26 = auVar3._0_4_;
    auVar33._0_4_ = fVar26 * param_3[4];
    fVar13 = auVar3._4_4_;
    auVar33._4_4_ = fVar13 * param_3[5];
    fVar15 = auVar3._8_4_;
    auVar33._8_4_ = fVar15 * param_3[6];
    fVar16 = auVar3._12_4_;
    auVar33._12_4_ = fVar16 * param_3[7];
    auVar38._0_4_ = (auVar29._0_4_ + _DAT_145fc6ed8) * param_3[0xc];
    auVar38._4_4_ = (auVar29._4_4_ + _DAT_145fc6ed8) * param_3[0xd];
    auVar38._8_4_ = (auVar29._8_4_ + _DAT_145fc6ed8) * param_3[0xe];
    auVar38._12_4_ = (auVar29._12_4_ + _DAT_145fc6ed8) * param_3[0xf];
    auVar24._0_4_ = fVar26 * fVar17;
    auVar24._4_4_ = fVar13 * fVar18;
    auVar24._8_4_ = fVar15 * fVar19;
    auVar24._12_4_ = fVar16 * fVar20;
    auVar28._0_4_ = fVar26 * param_3[8];
    auVar28._4_4_ = fVar13 * param_3[9];
    auVar28._8_4_ = fVar15 * param_3[10];
    auVar28._12_4_ = fVar16 * param_3[0xb];
    auVar3 = vshufps_avx(auVar24,auVar24,0x55);
    auVar14 = vshufps_avx(auVar24,auVar24,0xaa);
    fVar18 = auVar10._0_4_;
    fVar19 = auVar10._4_4_;
    fVar20 = auVar10._8_4_;
    fVar21 = auVar10._12_4_;
    auVar10 = vshufps_avx(auVar33,auVar33,0x55);
    fVar13 = auVar11._0_4_;
    fVar15 = auVar11._4_4_;
    fVar16 = auVar11._8_4_;
    fVar17 = auVar11._12_4_;
    auVar11 = vshufps_avx(auVar33,auVar33,0xaa);
    auVar29 = vshufps_avx(auVar28,auVar28,0x55);
    *param_3 = fVar13 * auVar14._0_4_ + fVar18 * auVar3._0_4_ + auVar24._0_4_ * fVar5;
    param_3[1] = fVar15 * auVar14._4_4_ + fVar19 * auVar3._4_4_ + auVar24._0_4_ * fVar6;
    param_3[2] = fVar16 * auVar14._8_4_ + fVar20 * auVar3._8_4_ + auVar24._0_4_ * fVar7;
    param_3[3] = fVar17 * auVar14._12_4_ + fVar21 * auVar3._12_4_ + auVar24._0_4_ * fVar8;
    fVar26 = _DAT_14615a290;
    auVar25._0_4_ = fVar13 * auVar11._0_4_ + fVar18 * auVar10._0_4_ + auVar33._0_4_ * fVar5;
    auVar25._4_4_ = fVar15 * auVar11._4_4_ + fVar19 * auVar10._4_4_ + auVar33._0_4_ * fVar6;
    auVar25._8_4_ = fVar16 * auVar11._8_4_ + fVar20 * auVar10._8_4_ + auVar33._0_4_ * fVar7;
    auVar25._12_4_ = fVar17 * auVar11._12_4_ + fVar21 * auVar10._12_4_ + auVar33._0_4_ * fVar8;
    auVar10 = vshufps_avx(auVar28,auVar28,0xaa);
    auVar11 = vshufps_avx(auVar38,auVar38,0x55);
    auVar34._0_4_ = fVar13 * auVar10._0_4_ + fVar18 * auVar29._0_4_ + auVar28._0_4_ * fVar5;
    auVar34._4_4_ = fVar15 * auVar10._4_4_ + fVar19 * auVar29._4_4_ + auVar28._0_4_ * fVar6;
    auVar34._8_4_ = fVar16 * auVar10._8_4_ + fVar20 * auVar29._8_4_ + auVar28._0_4_ * fVar7;
    auVar34._12_4_ = fVar17 * auVar10._12_4_ + fVar21 * auVar29._12_4_ + auVar28._0_4_ * fVar8;
    auVar10 = vshufps_avx(auVar38,auVar38,0xaa);
    auVar29._0_4_ =
         fVar13 * auVar10._0_4_ + fVar18 * auVar11._0_4_ + fVar5 * auVar38._0_4_ + auVar1._0_4_;
    auVar29._4_4_ =
         fVar15 * auVar10._4_4_ + fVar19 * auVar11._4_4_ + fVar6 * auVar38._0_4_ + auVar1._4_4_;
    auVar29._8_4_ =
         fVar16 * auVar10._8_4_ + fVar20 * auVar11._8_4_ + fVar7 * auVar38._0_4_ + auVar1._8_4_;
    auVar29._12_4_ =
         fVar17 * auVar10._12_4_ + fVar21 * auVar11._12_4_ + fVar8 * auVar38._0_4_ + auVar1._12_4_;
    auVar10 = vblendps_avx(auVar29,auVar1,8);
    auVar14._0_4_ = auVar23._0_4_ + _DAT_145fc6f48;
    auVar14._4_4_ = auVar23._4_4_ + _DAT_145fc6f48;
    auVar14._8_4_ = auVar23._8_4_ + _DAT_145fc6f48;
    auVar14._12_4_ = auVar23._12_4_ + _DAT_145fc6f48;
    auVar11 = vinsertps_avx(auVar25,auVar14,0x30);
    auVar3 = vinsertps_avx(auVar34,auVar14,0xb0);
    auVar35._4_4_ = _DAT_14615a290;
    auVar35._0_4_ = _DAT_14615a290;
    auVar35._8_4_ = _DAT_14615a290;
    auVar35._12_4_ = _DAT_14615a290;
    *(undefined1 (*) [16])(param_3 + 4) = auVar11;
    *(undefined1 (*) [16])(param_3 + 8) = auVar3;
    auVar11 = vrcpps_avx(auVar35);
    fVar13 = auVar11._0_4_;
    fVar15 = auVar11._4_4_;
    fVar16 = auVar11._8_4_;
    fVar17 = auVar11._12_4_;
    auVar11._0_4_ = auVar10._0_4_ * ((-(fVar13 * fVar26) + fVar4) * fVar13 + fVar13);
    auVar11._4_4_ = auVar10._4_4_ * ((-(fVar15 * fVar26) + fVar4) * fVar15 + fVar15);
    auVar11._8_4_ = auVar10._8_4_ * ((-(fVar16 * fVar26) + fVar4) * fVar16 + fVar16);
    auVar11._12_4_ = auVar10._12_4_ * ((-(fVar17 * fVar26) + fVar4) * fVar17 + fVar17);
    auVar11 = vroundps_avx(auVar11,3);
    auVar36._0_4_ = -(auVar11._0_4_ * fVar26) + auVar10._0_4_;
    auVar36._4_4_ = -(auVar11._4_4_ * fVar26) + auVar10._4_4_;
    auVar36._8_4_ = -(auVar11._8_4_ * fVar26) + auVar10._8_4_;
    auVar36._12_4_ = -(auVar11._12_4_ * fVar26) + auVar10._12_4_;
    auVar10._0_4_ = (int)auVar11._0_4_;
    auVar10._4_4_ = (int)auVar11._4_4_;
    auVar10._8_4_ = (int)auVar11._8_4_;
    auVar10._12_4_ = (int)auVar11._12_4_;
    auVar11 = vpackssdw_avx(auVar10,auVar10);
    auVar10 = vblendps_avx(auVar29,auVar36,3);
    sVar9 = auVar11._0_2_;
    auVar3._0_2_ = sVar9 + auVar1._0_2_;
    sVar12 = auVar11._2_2_;
    auVar3._2_2_ = sVar12 + auVar1._2_2_;
    auVar3._4_2_ = sVar9 + auVar1._4_2_;
    auVar3._6_2_ = sVar12 + auVar1._6_2_;
    auVar3._8_2_ = sVar9 + auVar1._8_2_;
    auVar3._10_2_ = sVar12 + auVar1._10_2_;
    auVar3._12_2_ = sVar9 + auVar1._12_2_;
    auVar3._14_2_ = sVar12 + auVar1._14_2_;
    auVar10 = vblendps_avx(auVar10,auVar3,8);
    auVar11 = vpunpckhwd_avx(auVar10,auVar10);
    auVar11 = vpsrad_avx(auVar11,0x10);
    auVar11 = vcvtdq2ps_avx(auVar11);
    auVar11 = vshufpd_avx(auVar11,auVar11,3);
    fVar4 = auVar11._4_4_ * _UNK_146159c94;
    fVar26 = auVar11._8_4_ * _UNK_146159c98;
    fVar13 = auVar11._12_4_ * _UNK_146159c9c;
    param_3[0xc] = auVar11._0_4_ * _DAT_146159c90 + auVar10._0_4_;
    param_3[0xd] = fVar4 + auVar10._4_4_;
    param_3[0xe] = fVar26 + auVar10._8_4_;
    param_3[0xf] = fVar13 + auVar10._12_4_;
  }
  return;
}

