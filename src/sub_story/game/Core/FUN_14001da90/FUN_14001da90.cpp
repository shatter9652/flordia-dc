// Recovered from game_scarlett_master.exe (GTA VI, Xbox Series X, PE32+ x64)
// Address: 14001da90  size: 550 bytes
// Name:    FUN_14001da90
// Subsystem: core
//
// Referenced strings (0 in this body, 0 including direct callees):
// Callees: FUN_144db6f00, FUN_144e13460, FUN_144e1b6c0
//
// Generated decompilation. Formatting follows MiscRef/GTAVSRC conventions;
// identifiers are recovered, not original. See ../../../README.md.

#include "gta6decomp/rage_types.h"


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_14001da90(uint *param_1,undefined8 *param_2,undefined4 param_3,undefined8 param_4,
                  undefined4 param_5,float *param_6,undefined1 (*param_7) [16],float *param_8)

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
  undefined1 auVar10 [16];
  float fVar12;
  float fVar13;
  float fVar14;
  float fVar15;
  undefined1 auVar16 [16];
  float fVar18;
  float fVar19;
  float fVar21;
  float fVar22;
  float fVar23;
  float fVar24;
  float fVar25;
  float fVar26;
  undefined1 auVar20 [64];
  undefined1 auStack_b8 [16];
  float fStack_a8;
  float fStack_a4;
  float fStack_a0;
  float fStack_9c;
  float fStack_98;
  float fStack_94;
  float fStack_90;
  float fStack_8c;
  undefined1 auVar11 [64];
  undefined1 auVar17 [64];
  
  FUN_144e13460(*param_2,param_2[1],&fStack_98);
  auVar10._0_12_ = ZEXT812(0);
  auVar10._12_4_ = 0;
  auVar11 = ZEXT1664(auVar10);
  auVar16._4_4_ = _DAT_146159bfc;
  auVar16._0_4_ = _DAT_146159bfc;
  auVar16._8_4_ = _DAT_146159bfc;
  auVar16._12_4_ = _DAT_146159bfc;
  auVar17 = ZEXT1664(auVar16);
  auVar1._0_4_ = fStack_98 * fStack_98;
  auVar1._4_4_ = fStack_94 * fStack_94;
  auVar1._8_4_ = fStack_90 * fStack_90;
  auVar1._12_4_ = fStack_8c * fStack_8c;
  auVar1 = vblendps_avx(auVar1,auVar10,8);
  auVar1 = vhaddps_avx(auVar1,auVar1);
  auVar2 = vhaddps_avx(auVar1,auVar1);
  auVar1 = vrsqrtps_avx(auVar2);
  fVar19 = auVar1._0_4_;
  fVar22 = auVar1._4_4_;
  fVar24 = auVar1._8_4_;
  fVar26 = auVar1._12_4_;
  auVar1 = vcmpps_avx(auVar16,auVar2,2);
  fVar18 = (float)(auVar1._0_4_ &
                  (uint)(((_DAT_145fc6f08 * fVar19 * fVar19 * auVar2._0_4_ - _DAT_145fc6f08) *
                          fVar19 + fVar19) * auVar2._0_4_));
  fVar21 = (float)(auVar1._4_4_ &
                  (uint)(((_DAT_145fc6f08 * fVar22 * fVar22 * auVar2._4_4_ - _DAT_145fc6f08) *
                          fVar22 + fVar22) * auVar2._4_4_));
  fVar23 = (float)(auVar1._8_4_ &
                  (uint)(((_DAT_145fc6f08 * fVar24 * fVar24 * auVar2._8_4_ - _DAT_145fc6f08) *
                          fVar24 + fVar24) * auVar2._8_4_));
  fVar25 = (float)(auVar1._12_4_ &
                  (uint)(((_DAT_145fc6f08 * fVar26 * fVar26 * auVar2._12_4_ - _DAT_145fc6f08) *
                          fVar26 + fVar26) * auVar2._12_4_));
  fVar12 = _DAT_145fc6f08;
  fVar13 = _DAT_145fc6f08;
  fVar14 = _DAT_145fc6f08;
  fVar15 = _DAT_145fc6f08;
  FUN_144e13460(*param_2,param_2[1],&fStack_a8,param_5);
  auVar7._4_4_ = _DAT_145fc6ed8;
  auVar7._0_4_ = _DAT_145fc6ed8;
  auVar7._8_4_ = _DAT_145fc6ed8;
  auVar7._12_4_ = _DAT_145fc6ed8;
  auVar2._0_4_ = fStack_a8 * fStack_a8;
  auVar2._4_4_ = fStack_a4 * fStack_a4;
  auVar2._8_4_ = fStack_a0 * fStack_a0;
  auVar2._12_4_ = fStack_9c * fStack_9c;
  auVar3 = auVar11._0_16_;
  auVar1 = vblendps_avx(auVar2,auVar3,8);
  auVar1 = vhaddps_avx(auVar1,auVar1);
  auVar2 = vhaddps_avx(auVar1,auVar1);
  auVar1 = vrsqrtps_avx(auVar2);
  fVar19 = auVar1._0_4_;
  fVar22 = auVar1._4_4_;
  fVar24 = auVar1._8_4_;
  fVar26 = auVar1._12_4_;
  auVar1 = vcmpps_avx(auVar17._0_16_,auVar2,2);
  fVar18 = (fVar18 + (float)(auVar1._0_4_ &
                            (uint)(((fVar12 * fVar19 * fVar19 * auVar2._0_4_ - fVar12) * fVar19 +
                                   fVar19) * auVar2._0_4_))) * *param_6;
  fVar21 = (fVar21 + (float)(auVar1._4_4_ &
                            (uint)(((fVar13 * fVar22 * fVar22 * auVar2._4_4_ - fVar13) * fVar22 +
                                   fVar22) * auVar2._4_4_))) * param_6[1];
  fVar23 = (fVar23 + (float)(auVar1._8_4_ &
                            (uint)(((fVar14 * fVar24 * fVar24 * auVar2._8_4_ - fVar14) * fVar24 +
                                   fVar24) * auVar2._8_4_))) * param_6[2];
  fVar25 = (fVar25 + (float)(auVar1._12_4_ &
                            (uint)(((fVar15 * fVar26 * fVar26 * auVar2._12_4_ - fVar15) * fVar26 +
                                   fVar26) * auVar2._12_4_))) * param_6[3];
  auVar1 = vmaxps_avx(*param_7,auVar3);
  auVar1 = vminps_avx(auVar1,auVar7);
  auVar6._0_4_ = auVar1._0_4_ * *param_8;
  auVar6._4_4_ = auVar1._4_4_ * param_8[1];
  auVar6._8_4_ = auVar1._8_4_ * param_8[2];
  auVar6._12_4_ = auVar1._12_4_ * param_8[3];
  auVar5._0_4_ = fVar18 * fVar18;
  auVar5._4_4_ = fVar21 * fVar21;
  auVar5._8_4_ = fVar23 * fVar23;
  auVar5._12_4_ = fVar25 * fVar25;
  auVar8._0_4_ = auVar6._0_4_ * auVar6._0_4_;
  auVar8._4_4_ = auVar6._4_4_ * auVar6._4_4_;
  auVar8._8_4_ = auVar6._8_4_ * auVar6._8_4_;
  auVar8._12_4_ = auVar6._12_4_ * auVar6._12_4_;
  auVar1 = vblendps_avx(auVar8,auVar3,8);
  auVar1 = vhaddps_avx(auVar1,auVar1);
  auVar3 = vhaddps_avx(auVar1,auVar1);
  auVar2 = vrsqrtps_avx(auVar3);
  auVar1 = vcmpps_avx(auVar5,auVar3,1);
  fVar19 = auVar2._0_4_;
  fVar22 = auVar2._4_4_;
  fVar24 = auVar2._8_4_;
  fVar26 = auVar2._12_4_;
  auVar2 = vcmpps_avx(auVar17._0_16_,auVar3,2);
  auVar9._0_4_ = (float)(auVar2._0_4_ &
                        (uint)(((fVar12 * fVar19 * fVar19 * auVar3._0_4_ - fVar12) * fVar19 + fVar19
                               ) * auVar3._0_4_));
  auVar9._4_4_ = (float)(auVar2._4_4_ &
                        (uint)(((fVar13 * fVar22 * fVar22 * auVar3._4_4_ - fVar13) * fVar22 + fVar22
                               ) * auVar3._4_4_));
  auVar9._8_4_ = (float)(auVar2._8_4_ &
                        (uint)(((fVar14 * fVar24 * fVar24 * auVar3._8_4_ - fVar14) * fVar24 + fVar24
                               ) * auVar3._8_4_));
  auVar9._12_4_ =
       (float)(auVar2._12_4_ &
              (uint)(((fVar15 * fVar26 * fVar26 * auVar3._12_4_ - fVar15) * fVar26 + fVar26) *
                    auVar3._12_4_));
  auVar2 = vrcpps_avx(auVar9);
  fVar19 = auVar2._0_4_;
  fVar22 = auVar2._4_4_;
  fVar24 = auVar2._8_4_;
  fVar26 = auVar2._12_4_;
  auVar3._0_4_ = fVar18 * auVar6._0_4_ *
                 (-((fVar19 * auVar9._0_4_ - _DAT_145fc6ed8) * fVar19) + fVar19);
  auVar3._4_4_ = fVar21 * auVar6._4_4_ *
                 (-((fVar22 * auVar9._4_4_ - _DAT_145fc6ed8) * fVar22) + fVar22);
  auVar3._8_4_ = fVar23 * auVar6._8_4_ *
                 (-((fVar24 * auVar9._8_4_ - _DAT_145fc6ed8) * fVar24) + fVar24);
  auVar3._12_4_ =
       fVar25 * auVar6._12_4_ * (-((fVar26 * auVar9._12_4_ - _DAT_145fc6ed8) * fVar26) + fVar26);
  auVar1 = vblendvps_avx(auVar6,auVar3,auVar1);
  auVar20 = ZEXT1664(auVar1);
  FUN_144db6f00(param_2,auStack_b8,param_3);
  FUN_144e1b6c0(param_2,param_3);
  auVar4._0_4_ = auVar20._0_4_ * auVar20._0_4_;
  auVar4._4_4_ = auVar20._4_4_ * auVar20._4_4_;
  auVar4._8_4_ = auVar20._8_4_ * auVar20._8_4_;
  auVar4._12_4_ = auVar20._12_4_ * auVar20._12_4_;
  auVar1 = vblendps_avx(auVar4,auVar11._0_16_,8);
  auVar1 = vhaddps_avx(auVar1,auVar1);
  auVar2 = vhaddps_avx(auVar1,auVar1);
  auVar1 = vrsqrtps_avx(auVar2);
  fVar19 = auVar1._0_4_;
  fVar22 = auVar1._4_4_;
  fVar24 = auVar1._8_4_;
  fVar26 = auVar1._12_4_;
  auVar1 = vcmpps_avx(auVar17._0_16_,auVar2,2);
  *param_1 = auVar1._0_4_ &
             (uint)(((fVar12 * fVar19 * fVar19 * auVar2._0_4_ - fVar12) * fVar19 + fVar19) *
                   auVar2._0_4_);
  param_1[1] = auVar1._4_4_ &
               (uint)(((fVar13 * fVar22 * fVar22 * auVar2._4_4_ - fVar13) * fVar22 + fVar22) *
                     auVar2._4_4_);
  param_1[2] = auVar1._8_4_ &
               (uint)(((fVar14 * fVar24 * fVar24 * auVar2._8_4_ - fVar14) * fVar24 + fVar24) *
                     auVar2._8_4_);
  param_1[3] = auVar1._12_4_ &
               (uint)(((fVar15 * fVar26 * fVar26 * auVar2._12_4_ - fVar15) * fVar26 + fVar26) *
                     auVar2._12_4_);
  return;
}

