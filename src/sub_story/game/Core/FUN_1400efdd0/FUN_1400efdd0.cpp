// Recovered from game_scarlett_master.exe (GTA VI, Xbox Series X, PE32+ x64)
// Address: 1400efdd0  size: 441 bytes
// Name:    FUN_1400efdd0
// Subsystem: core
//
// Referenced strings (0 in this body, 0 including direct callees):
// Callees: FUN_144f7ad70
//
// Generated decompilation. Formatting follows MiscRef/GTAVSRC conventions;
// identifiers are recovered, not original. See ../../../README.md.

#include "gta6decomp/rage_types.h"


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

longlong FUN_1400efdd0(uint param_1,longlong param_2,undefined1 (*param_3) [16])

{
  uint uVar1;
  float fVar2;
  float fVar3;
  float fVar4;
  float fVar5;
  longlong lVar6;
  longlong lVar7;
  longlong lVar8;
  undefined1 auVar9 [16];
  undefined1 auVar10 [16];
  undefined1 auVar11 [16];
  undefined1 auVar12 [16];
  undefined1 auVar13 [16];
  float fVar14;
  float fVar15;
  float fVar16;
  float fVar17;
  undefined1 auVar18 [64];
  undefined1 auVar19 [16];
  undefined1 auVar20 [64];
  undefined1 auVar21 [64];
  undefined1 auVar22 [64];
  undefined1 auVar23 [64];
  undefined1 in_ZMM11 [64];
  undefined1 auVar24 [64];
  undefined1 auStack_d8 [16];
  undefined1 auStack_c8 [16];
  undefined1 aauStack_b8 [6] [16];
  undefined1 auStack_58 [16];
  
  auStack_58 = in_ZMM11._0_16_;
  if (param_1 == 0) {
    lVar7 = 0;
  }
  else {
    auVar18 = ZEXT464(_DAT_14615b36c);
    auVar21 = ZEXT1664(CONCAT412(_DAT_145fc6ed8,
                                 CONCAT48(_DAT_145fc6ed8,CONCAT44(_DAT_145fc6ed8,_DAT_145fc6ed8))));
    auVar22 = ZEXT1664(CONCAT412(_DAT_14615a034,
                                 CONCAT48(_DAT_14615a034,CONCAT44(_DAT_14615a034,_DAT_14615a034))));
    lVar7 = 0;
    auVar20 = ZEXT1264(ZEXT812(0));
    lVar8 = (ulonglong)param_1 * 0x70;
    do {
      uVar1 = *(uint *)(param_2 + 8);
      if ((~uVar1 & 0x1ffff) == 0) {
LAB_1400efe6c:
        if (*(int *)(param_2 + 0x50) == 0) {
          FUN_144f7ad70(uVar1,*(undefined1 *)(param_2 + 0xc),aauStack_b8,param_2 + 0x20);
          FUN_144f7ad70(*(undefined4 *)(param_2 + 8),*(undefined1 *)(param_2 + 0xc),auStack_c8,
                        param_2 + 0x10);
          auVar24 = ZEXT1664(*param_3);
          auVar10 = vsubps_avx(aauStack_b8[0],auStack_c8);
          auVar23 = ZEXT1664(auVar10);
          FUN_144f7ad70(*(undefined4 *)(param_2 + 8),*(undefined1 *)(param_2 + 0xc),auStack_d8,
                        param_2 + 0x10);
          fVar17 = auVar23._0_4_;
          auVar13._0_4_ = fVar17 * fVar17;
          fVar2 = auVar23._4_4_;
          auVar13._4_4_ = fVar2 * fVar2;
          fVar3 = auVar23._8_4_;
          auVar13._8_4_ = fVar3 * fVar3;
          fVar4 = auVar23._12_4_;
          auVar13._12_4_ = fVar4 * fVar4;
          auVar19 = auVar20._0_16_;
          auVar10 = vblendps_avx(auVar13,auVar19,8);
          auVar10 = vhaddps_avx(auVar10,auVar10);
          auVar12 = vsubps_avx(auVar24._0_16_,auStack_d8);
          auVar9 = vhaddps_avx(auVar10,auVar10);
          auVar10._0_4_ = fVar17 * auVar12._0_4_;
          auVar10._4_4_ = fVar2 * auVar12._4_4_;
          auVar10._8_4_ = fVar3 * auVar12._8_4_;
          auVar10._12_4_ = fVar4 * auVar12._12_4_;
          auVar10 = vblendps_avx(auVar10,auVar19,8);
          auVar10 = vhaddps_avx(auVar10,auVar10);
          auVar11 = vrcpps_avx(auVar9);
          auVar12 = vhaddps_avx(auVar10,auVar10);
          fVar14 = auVar11._0_4_;
          fVar15 = auVar11._4_4_;
          fVar16 = auVar11._8_4_;
          fVar5 = auVar11._12_4_;
          auVar10 = vcmpps_avx(auVar22._0_16_,auVar9,1);
          auVar11._0_4_ =
               (-((auVar9._0_4_ * fVar14 - auVar21._0_4_) * fVar14) + fVar14) * auVar12._0_4_;
          auVar11._4_4_ =
               (-((auVar9._4_4_ * fVar15 - auVar21._4_4_) * fVar15) + fVar15) * auVar12._4_4_;
          auVar11._8_4_ =
               (-((auVar9._8_4_ * fVar16 - auVar21._8_4_) * fVar16) + fVar16) * auVar12._8_4_;
          auVar11._12_4_ =
               (-((auVar9._12_4_ * fVar5 - auVar21._12_4_) * fVar5) + fVar5) * auVar12._12_4_;
          auVar9 = vmaxps_avx(auVar11,auVar19);
          auVar9 = vminps_avx(auVar9,auVar21._0_16_);
          auVar12._0_4_ = fVar17 * (float)(auVar10._0_4_ & auVar9._0_4_) + auStack_d8._0_4_;
          auVar12._4_4_ = fVar2 * (float)(auVar10._4_4_ & auVar9._4_4_) + auStack_d8._4_4_;
          auVar12._8_4_ = fVar3 * (float)(auVar10._8_4_ & auVar9._8_4_) + auStack_d8._8_4_;
          auVar12._12_4_ = fVar4 * (float)(auVar10._12_4_ & auVar9._12_4_) + auStack_d8._12_4_;
          auVar10 = vsubps_avx(auVar12,*param_3);
          auVar9._0_4_ = auVar10._0_4_ * auVar10._0_4_;
          auVar9._4_4_ = auVar10._4_4_ * auVar10._4_4_;
          auVar9._8_4_ = auVar10._8_4_ * auVar10._8_4_;
          auVar9._12_4_ = auVar10._12_4_ * auVar10._12_4_;
          auVar10 = vhaddps_avx(auVar9,auVar9);
          fVar17 = auVar18._0_4_;
          auVar9 = vminss_avx(auVar10,auVar18._0_16_);
          auVar18 = ZEXT1664(auVar9);
          if (auVar10._0_4_ < fVar17) {
            lVar7 = param_2;
          }
        }
      }
      else {
        lVar6 = func_0x000144dd0bd0(uVar1);
        if (lVar6 != 0) goto LAB_1400efe6c;
      }
      param_2 = param_2 + 0x70;
      lVar8 = lVar8 + -0x70;
    } while (lVar8 != 0);
  }
  return lVar7;
}

