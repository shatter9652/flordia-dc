// Recovered from game_scarlett_master.exe (GTA VI, Xbox Series X, PE32+ x64)
// Address: 14010c010  size: 677 bytes
// Name:    FUN_14010c010
// Subsystem: core
//
// Referenced strings (0 in this body, 0 including direct callees):
// Callees: FUN_144eab380
//
// Generated decompilation. Formatting follows MiscRef/GTAVSRC conventions;
// identifiers are recovered, not original. See ../../../README.md.

#include "gta6decomp/rage_types.h"


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

float FUN_14010c010(undefined1 (*param_1) [16],undefined1 (*param_2) [16],float *param_3)

{
  float fVar1;
  float fVar2;
  float fVar3;
  float fVar4;
  undefined1 auVar5 [16];
  undefined1 auVar6 [16];
  undefined1 auVar7 [16];
  undefined1 auVar8 [16];
  float fVar10;
  float fVar11;
  float fVar12;
  undefined1 auVar9 [16];
  undefined1 auVar13 [16];
  undefined1 auVar14 [16];
  float fVar16;
  float fVar17;
  undefined1 auVar18 [64];
  float fVar19;
  float fVar20;
  float fVar22;
  float fVar23;
  float fVar24;
  undefined1 auVar21 [16];
  float fVar25;
  undefined1 auVar26 [16];
  undefined1 auVar27 [16];
  undefined1 auVar15 [64];
  
  auVar14._0_12_ = ZEXT812(0);
  auVar14._12_4_ = 0;
  auVar15 = ZEXT1664(auVar14);
  auVar13._4_4_ = _DAT_146159bfc;
  auVar13._0_4_ = _DAT_146159bfc;
  auVar13._8_4_ = _DAT_146159bfc;
  auVar13._12_4_ = _DAT_146159bfc;
  auVar7 = vsubps_avx(*param_2,*param_1);
  auVar5._0_4_ = *param_3 * *param_3;
  auVar5._4_4_ = param_3[1] * param_3[1];
  auVar5._8_4_ = param_3[2] * param_3[2];
  auVar5._12_4_ = param_3[3] * param_3[3];
  auVar6._0_4_ = auVar7._0_4_ * auVar7._0_4_;
  auVar6._4_4_ = auVar7._4_4_ * auVar7._4_4_;
  auVar6._8_4_ = auVar7._8_4_ * auVar7._8_4_;
  auVar6._12_4_ = auVar7._12_4_ * auVar7._12_4_;
  auVar7 = vblendps_avx(auVar5,auVar14,8);
  auVar5 = vhaddps_avx(auVar7,auVar7);
  auVar7 = vblendps_avx(auVar6,auVar14,8);
  auVar7 = vhaddps_avx(auVar7,auVar7);
  auVar5 = vhaddps_avx(auVar5,auVar5);
  auVar6 = vhaddps_avx(auVar7,auVar7);
  auVar7 = vrsqrtps_avx(auVar6);
  fVar3 = auVar7._0_4_;
  auVar7 = vcmpps_avx(auVar13,auVar6,2);
  fVar19 = (float)(auVar7._0_4_ &
                  (uint)(((_DAT_145fc6f08 * fVar3 * fVar3 * auVar6._0_4_ - _DAT_145fc6f08) * fVar3 +
                         fVar3) * auVar6._0_4_));
  auVar7 = vrsqrtps_avx(auVar5);
  fVar3 = auVar7._0_4_;
  auVar7 = vcmpps_avx(auVar13,auVar5,2);
  fVar16 = (float)(auVar7._0_4_ &
                  (uint)(((_DAT_145fc6f08 * fVar3 * fVar3 * auVar5._0_4_ - _DAT_145fc6f08) * fVar3 +
                         fVar3) * auVar5._0_4_));
  fVar3 = (float)FUN_144eab380();
  if (fVar16 + fVar3 <= fVar19) {
    return 0.0;
  }
  auVar18 = ZEXT464((uint)_DAT_145fc6ed8);
  fVar3 = *(float *)(param_1[4] + 4);
  auVar7._0_4_ = *(float *)param_1[1] * _DAT_14616bd60;
  auVar7._4_4_ = *(float *)(param_1[1] + 4) * _UNK_14616bd64;
  auVar7._8_4_ = *(float *)(param_1[1] + 8) * _UNK_14616bd68;
  auVar7._12_4_ = *(float *)(param_1[1] + 0xc) * _UNK_14616bd6c;
  auVar7 = vblendps_avx(auVar7,auVar15._0_16_,8);
  auVar7 = vhaddps_avx(auVar7,auVar7);
  auVar7 = vhaddps_avx(auVar7,auVar7);
  auVar15 = ZEXT1664(auVar7);
  fVar4 = (float)func_0x00014010c2c0((fVar19 - fVar16) * (fVar19 - fVar16));
  fVar17 = auVar18._0_4_;
  if ((((0.0 < fVar19) && (0.0 < fVar4)) && (*(int *)(param_1[8] + 4) == 2)) &&
     (_DAT_146159ef4 < *(float *)(param_1[5] + 4))) {
    auVar7 = *param_1;
    fVar10 = *(float *)param_1[2];
    fVar11 = *(float *)(param_1[2] + 4);
    fVar12 = *(float *)(param_1[2] + 8);
    fVar2 = *(float *)(param_1[2] + 0xc);
    auVar27._0_12_ = ZEXT812(0);
    auVar27._12_4_ = 0;
    auVar5 = vminss_avx(ZEXT416((uint)_DAT_145fc6ed8),ZEXT416((uint)*(float *)(param_1[5] + 4)));
    fVar19 = auVar5._0_4_ * auVar5._0_4_;
    fVar1 = _DAT_145fc6ed8 - fVar19;
    auVar5 = vrsqrtss_avx(ZEXT416((uint)fVar1),ZEXT416((uint)fVar1));
    fVar24 = auVar5._0_4_;
    fVar17 = 0.0;
    auVar6 = vcmpss_avx(ZEXT816(0),ZEXT416((uint)fVar1),0);
    auVar5 = *param_2;
    fVar24 = (float)(~auVar6._0_4_ &
                    (uint)(fVar24 * _DAT_145fc6f08 * (fVar24 * fVar24 * fVar1 + _DAT_145fc6f04))) *
             fVar16;
    fVar20 = auVar5._0_4_ + (fVar10 * fVar24 - auVar7._0_4_);
    fVar22 = auVar5._4_4_ + (fVar11 * fVar24 - auVar7._4_4_);
    fVar23 = auVar5._8_4_ + (fVar12 * fVar24 - auVar7._8_4_);
    fVar24 = auVar5._12_4_ + (fVar2 * fVar24 - auVar7._12_4_);
    auVar26._0_4_ = fVar20 * fVar10;
    auVar26._4_4_ = fVar22 * fVar11;
    auVar26._8_4_ = fVar23 * fVar12;
    auVar26._12_4_ = fVar24 * fVar2;
    auVar6 = vblendps_avx(auVar26,auVar27,8);
    auVar6 = vhaddps_avx(auVar6,auVar6);
    auVar6 = vhaddps_avx(auVar6,auVar6);
    fVar25 = auVar6._0_4_;
    if (0.0 < fVar25) {
      auVar21._0_4_ = fVar20 * fVar20;
      auVar21._4_4_ = fVar22 * fVar22;
      auVar21._8_4_ = fVar23 * fVar23;
      auVar21._12_4_ = fVar24 * fVar24;
      auVar6 = vblendps_avx(auVar21,auVar27,8);
      auVar6 = vhaddps_avx(auVar6,auVar6);
      auVar6 = vhaddps_avx(auVar6,auVar6);
      if (auVar6._0_4_ * fVar19 <= fVar25 * fVar25) {
        auVar7 = vsubps_avx(auVar5,auVar7);
        fVar24 = auVar7._0_4_;
        auVar8._0_4_ = fVar24 * fVar10;
        fVar10 = auVar7._4_4_;
        auVar8._4_4_ = fVar10 * fVar11;
        fVar11 = auVar7._8_4_;
        auVar8._8_4_ = fVar11 * fVar12;
        fVar12 = auVar7._12_4_;
        auVar8._12_4_ = fVar12 * fVar2;
        auVar7 = vblendps_avx(auVar8,ZEXT816(0),8);
        auVar7 = vhaddps_avx(auVar7,auVar7);
        auVar7 = vhaddps_avx(auVar7,auVar7);
        fVar19 = auVar7._0_4_;
        if (fVar19 < 0.0) {
          auVar9._0_4_ = fVar24 * fVar24;
          auVar9._4_4_ = fVar10 * fVar10;
          auVar9._8_4_ = fVar11 * fVar11;
          auVar9._12_4_ = fVar12 * fVar12;
          auVar7 = vblendps_avx(auVar9,ZEXT816(0),8);
          auVar7 = vhaddps_avx(auVar7,auVar7);
          auVar7 = vhaddps_avx(auVar7,auVar7);
          if ((auVar7._0_4_ * fVar1 <= fVar19 * fVar19) && (fVar16 * fVar16 < auVar7._0_4_))
          goto LAB_14010c236;
        }
        fVar17 = _DAT_145fc6ed8;
      }
    }
  }
LAB_14010c236:
  return fVar17 * auVar15._0_4_ * fVar3 * fVar4;
}

