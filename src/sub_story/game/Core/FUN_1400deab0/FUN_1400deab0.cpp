// Recovered from game_scarlett_master.exe (GTA VI, Xbox Series X, PE32+ x64)
// Address: 1400deab0  size: 522 bytes
// Name:    FUN_1400deab0
// Subsystem: core
//
// Referenced strings (0 in this body, 0 including direct callees):
// Callees: 
//
// Generated decompilation. Formatting follows MiscRef/GTAVSRC conventions;
// identifiers are recovered, not original. See ../../../README.md.

#include "gta6decomp/rage_types.h"


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1400deab0(undefined1 (*param_1) [16],undefined1 (*param_2) [16],undefined1 (*param_3) [16])

{
  undefined1 auVar1 [16];
  undefined8 uVar2;
  float fVar3;
  undefined8 uVar4;
  undefined1 auVar5 [16];
  undefined1 auVar6 [16];
  short sVar7;
  float fVar8;
  short sVar12;
  float fVar13;
  float fVar14;
  float fVar15;
  undefined1 auVar9 [16];
  undefined1 auVar10 [16];
  undefined1 auVar11 [16];
  undefined1 auVar16 [16];
  undefined1 auVar17 [16];
  undefined1 auVar18 [16];
  float fVar19;
  float fVar20;
  float fVar23;
  float fVar24;
  float fVar25;
  undefined1 auVar21 [16];
  undefined1 auVar22 [16];
  float fVar26;
  undefined1 auVar27 [16];
  undefined1 auVar28 [16];
  undefined1 auVar29 [16];
  undefined1 auVar30 [16];
  undefined1 auVar31 [16];
  
  uVar4 = _DAT_146159c90;
  fVar3 = _DAT_145fc6f08;
  uVar2 = *(undefined8 *)(*param_2 + 8);
  auVar18 = *param_3;
  *(undefined8 *)*param_1 = *(undefined8 *)*param_2;
  *(undefined8 *)(*param_1 + 8) = uVar2;
  auVar17 = *param_2;
  auVar16 = vsubps_avx(auVar18,auVar17);
  auVar18 = vpsubw_avx(auVar18,auVar17);
  auVar18 = vblendps_avx(auVar16,auVar18,8);
  auVar16 = vpunpckhwd_avx(auVar18,auVar18);
  auVar16 = vpsrad_avx(auVar16,0x10);
  auVar16 = vcvtdq2ps_avx(auVar16);
  auVar1 = vshufpd_avx(auVar16,auVar16,3);
  fVar19 = (float)uVar4;
  fVar23 = (float)((ulonglong)uVar4 >> 0x20);
  auVar16 = vsubps_avx(param_2[3],auVar17);
  auVar17 = vpsubw_avx(param_2[3],auVar17);
  auVar17 = vblendps_avx(auVar16,auVar17,8);
  auVar16 = vpunpckhwd_avx(auVar17,auVar17);
  auVar16 = vpsrad_avx(auVar16,0x10);
  auVar16 = vcvtdq2ps_avx(auVar16);
  auVar16 = vshufpd_avx(auVar16,auVar16,3);
  fVar8 = fVar19 * auVar16._0_4_ + auVar17._0_4_;
  fVar13 = fVar23 * auVar16._4_4_ + auVar17._4_4_;
  fVar14 = auVar16._8_4_ * 0.0 + auVar17._8_4_;
  fVar15 = auVar16._12_4_ * 0.0 + auVar17._12_4_;
  auVar5 = ZEXT816(0) << 0x20;
  auVar16._0_4_ = fVar8 * fVar8;
  auVar16._4_4_ = fVar13 * fVar13;
  auVar16._8_4_ = fVar14 * fVar14;
  auVar16._12_4_ = fVar15 * fVar15;
  auVar17 = vblendps_avx(auVar16,auVar5,8);
  auVar17 = vhaddps_avx(auVar17,auVar17);
  auVar16 = vhaddps_avx(auVar17,auVar17);
  auVar17 = vrsqrtps_avx(auVar16);
  fVar20 = auVar17._0_4_;
  fVar24 = auVar17._4_4_;
  fVar25 = auVar17._8_4_;
  fVar26 = auVar17._12_4_;
  auVar17 = vcmpps_avx(auVar5,auVar16,1);
  auVar9._0_4_ = (float)(auVar17._0_4_ &
                        (uint)(((fVar3 * fVar20 * fVar20 * auVar16._0_4_ - fVar3) * fVar20 + fVar20)
                              * fVar8));
  auVar9._4_4_ = (float)(auVar17._4_4_ &
                        (uint)(((fVar3 * fVar24 * fVar24 * auVar16._4_4_ - fVar3) * fVar24 + fVar24)
                              * fVar13));
  auVar9._8_4_ = (float)(auVar17._8_4_ &
                        (uint)(((fVar3 * fVar25 * fVar25 * auVar16._8_4_ - fVar3) * fVar25 + fVar25)
                              * fVar14));
  auVar9._12_4_ =
       (float)(auVar17._12_4_ &
              (uint)(((fVar3 * fVar26 * fVar26 * auVar16._12_4_ - fVar3) * fVar26 + fVar26) * fVar15
                    ));
  auVar21._8_8_ = 0;
  auVar21._0_8_ = _DAT_146159bc0;
  auVar17 = vshufps_avx(auVar9,auVar9,0xc9);
  auVar16 = vshufps_avx(auVar21,auVar21,0xc9);
  auVar21 = vshufps_avx(auVar9,auVar9,0xd2);
  fVar8 = -((float)_DAT_146159bc0 * auVar21._0_4_) + auVar17._0_4_ * auVar16._0_4_;
  fVar13 = -((float)(_DAT_146159bc0 >> 0x20) * auVar21._4_4_) + auVar17._4_4_ * auVar16._4_4_;
  fVar14 = -(auVar21._8_4_ * 0.0) + auVar17._8_4_ * auVar16._8_4_;
  fVar15 = -(auVar21._12_4_ * 0.0) + auVar17._12_4_ * auVar16._12_4_;
  auVar22._0_4_ = fVar8 * fVar8;
  auVar22._4_4_ = fVar13 * fVar13;
  auVar22._8_4_ = fVar14 * fVar14;
  auVar22._12_4_ = fVar15 * fVar15;
  auVar17 = vblendps_avx(auVar22,auVar5,8);
  auVar17 = vhaddps_avx(auVar17,auVar17);
  auVar16 = vhaddps_avx(auVar17,auVar17);
  auVar17 = vrsqrtps_avx(auVar16);
  fVar20 = auVar17._0_4_;
  fVar24 = auVar17._4_4_;
  fVar25 = auVar17._8_4_;
  fVar26 = auVar17._12_4_;
  auVar17 = vcmpps_avx(auVar5,auVar16,1);
  fVar20 = (float)(auVar17._0_4_ &
                  (uint)(fVar8 * ((fVar3 * fVar20 * fVar20 * auVar16._0_4_ - fVar3) * fVar20 +
                                 fVar20)));
  fVar24 = (float)(auVar17._4_4_ &
                  (uint)(fVar13 * ((fVar3 * fVar24 * fVar24 * auVar16._4_4_ - fVar3) * fVar24 +
                                  fVar24)));
  fVar25 = (float)(auVar17._8_4_ &
                  (uint)(fVar14 * ((fVar3 * fVar25 * fVar25 * auVar16._8_4_ - fVar3) * fVar25 +
                                  fVar25)));
  fVar26 = (float)(auVar17._12_4_ &
                  (uint)(fVar15 * ((fVar3 * fVar26 * fVar26 * auVar16._12_4_ - fVar3) * fVar26 +
                                  fVar26)));
  auVar17._0_4_ = fVar20 * (fVar19 * auVar1._0_4_ + auVar18._0_4_);
  auVar17._4_4_ = fVar24 * (fVar23 * auVar1._4_4_ + auVar18._4_4_);
  auVar17._8_4_ = fVar25 * (auVar1._8_4_ * 0.0 + auVar18._8_4_);
  auVar17._12_4_ = fVar26 * (auVar1._12_4_ * 0.0 + auVar18._12_4_);
  auVar18 = vblendps_avx(auVar17,auVar5,8);
  auVar18 = vhaddps_avx(auVar18,auVar18);
  auVar18 = vhaddps_avx(auVar18,auVar18);
  if (auVar18._0_4_ < 0.0) {
    fVar20 = (float)((uint)fVar20 ^ _DAT_145fc6f10);
    fVar24 = (float)((uint)fVar24 ^ _DAT_145fc6f10);
    fVar25 = (float)((uint)fVar25 ^ _DAT_145fc6f10);
    fVar26 = (float)((uint)fVar26 ^ _DAT_145fc6f10);
  }
  auVar30._4_4_ = _DAT_14615a290;
  auVar30._0_4_ = _DAT_14615a290;
  auVar30._8_4_ = _DAT_14615a290;
  auVar30._12_4_ = _DAT_14615a290;
  auVar18._0_4_ = fVar20 * _DAT_145fc7020 + *(float *)*param_1;
  auVar18._4_4_ = fVar24 * _DAT_145fc7020 + *(float *)(*param_1 + 4);
  auVar18._8_4_ = fVar25 * _DAT_145fc7020 + *(float *)(*param_1 + 8);
  auVar18._12_4_ = fVar26 * _DAT_145fc7020 + *(float *)(*param_1 + 0xc);
  auVar17 = vrcpps_avx(auVar30);
  auVar18 = vblendps_avx(auVar18,*param_1,8);
  fVar20 = auVar17._0_4_;
  fVar24 = auVar17._4_4_;
  fVar25 = auVar17._8_4_;
  fVar26 = auVar17._12_4_;
  fVar20 = (-(fVar20 * _DAT_14615a290) + _DAT_145fc6ed8) * fVar20 + fVar20;
  fVar24 = (-(fVar24 * _DAT_14615a290) + _DAT_145fc6ed8) * fVar24 + fVar24;
  fVar25 = (-(fVar25 * _DAT_14615a290) + _DAT_145fc6ed8) * fVar25 + fVar25;
  fVar26 = (-(fVar26 * _DAT_14615a290) + _DAT_145fc6ed8) * fVar26 + fVar26;
  auVar27._0_4_ = fVar20 * auVar18._0_4_;
  auVar27._4_4_ = fVar24 * auVar18._4_4_;
  auVar27._8_4_ = fVar25 * auVar18._8_4_;
  auVar27._12_4_ = fVar26 * auVar18._12_4_;
  auVar17 = vroundps_avx(auVar27,3);
  auVar29._0_4_ = -(auVar17._0_4_ * _DAT_14615a290) + auVar18._0_4_;
  auVar29._4_4_ = -(auVar17._4_4_ * _DAT_14615a290) + auVar18._4_4_;
  auVar29._8_4_ = -(auVar17._8_4_ * _DAT_14615a290) + auVar18._8_4_;
  auVar29._12_4_ = -(auVar17._12_4_ * _DAT_14615a290) + auVar18._12_4_;
  auVar28._0_4_ = (int)auVar17._0_4_;
  auVar28._4_4_ = (int)auVar17._4_4_;
  auVar28._8_4_ = (int)auVar17._8_4_;
  auVar28._12_4_ = (int)auVar17._12_4_;
  auVar16 = vpackssdw_avx(auVar28,auVar28);
  auVar17 = vblendps_avx(auVar18,auVar29,3);
  sVar7 = auVar16._0_2_;
  auVar1._0_2_ = sVar7 + auVar18._0_2_;
  sVar12 = auVar16._2_2_;
  auVar1._2_2_ = sVar12 + auVar18._2_2_;
  auVar1._4_2_ = sVar7 + auVar18._4_2_;
  auVar1._6_2_ = sVar12 + auVar18._6_2_;
  auVar1._8_2_ = sVar7 + auVar18._8_2_;
  auVar1._10_2_ = sVar12 + auVar18._10_2_;
  auVar1._12_2_ = sVar7 + auVar18._12_2_;
  auVar1._14_2_ = sVar12 + auVar18._14_2_;
  auVar18 = vblendps_avx(auVar17,auVar1,8);
  auVar6._0_4_ = auVar9._0_4_ * 0.0 + auVar18._0_4_;
  auVar6._4_4_ = auVar9._4_4_ * 0.0 + auVar18._4_4_;
  auVar6._8_4_ = auVar9._8_4_ * 0.0 + auVar18._8_4_;
  auVar6._12_4_ = auVar9._12_4_ * 0.0 + auVar18._12_4_;
  auVar18 = vblendps_avx(auVar6,auVar18,8);
  auVar10._0_4_ = auVar18._0_4_ * fVar20;
  auVar10._4_4_ = auVar18._4_4_ * fVar24;
  auVar10._8_4_ = auVar18._8_4_ * fVar25;
  auVar10._12_4_ = auVar18._12_4_ * fVar26;
  auVar17 = vroundps_avx(auVar10,3);
  auVar31._0_4_ = -(auVar17._0_4_ * _DAT_14615a290) + auVar18._0_4_;
  auVar31._4_4_ = -(auVar17._4_4_ * _DAT_14615a290) + auVar18._4_4_;
  auVar31._8_4_ = -(auVar17._8_4_ * _DAT_14615a290) + auVar18._8_4_;
  auVar31._12_4_ = -(auVar17._12_4_ * _DAT_14615a290) + auVar18._12_4_;
  auVar11._0_4_ = (int)auVar17._0_4_;
  auVar11._4_4_ = (int)auVar17._4_4_;
  auVar11._8_4_ = (int)auVar17._8_4_;
  auVar11._12_4_ = (int)auVar17._12_4_;
  auVar16 = vpackssdw_avx(auVar11,auVar11);
  auVar17 = vblendps_avx(auVar18,auVar31,3);
  sVar7 = auVar16._0_2_;
  auVar5._0_2_ = sVar7 + auVar18._0_2_;
  sVar12 = auVar16._2_2_;
  auVar5._2_2_ = sVar12 + auVar18._2_2_;
  auVar5._4_2_ = sVar7 + auVar18._4_2_;
  auVar5._6_2_ = sVar12 + auVar18._6_2_;
  auVar5._8_2_ = sVar7 + auVar18._8_2_;
  auVar5._10_2_ = sVar12 + auVar18._10_2_;
  auVar5._12_2_ = sVar7 + auVar18._12_2_;
  auVar5._14_2_ = sVar12 + auVar18._14_2_;
  auVar18 = vblendps_avx(auVar17,auVar5,8);
  *param_1 = auVar18;
  return;
}

