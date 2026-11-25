// Recovered from game_scarlett_master.exe (GTA VI, Xbox Series X, PE32+ x64)
// Address: 1400ee3a0  size: 778 bytes
// Name:    FUN_1400ee3a0
// Subsystem: core
//
// Referenced strings (0 in this body, 0 including direct callees):
// Callees: 
//
// Generated decompilation. Formatting follows MiscRef/GTAVSRC conventions;
// identifiers are recovered, not original. See ../../../README.md.

#include "gta6decomp/rage_types.h"


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1400ee3a0(undefined1 (*param_1) [16],undefined1 (*param_2) [16],undefined1 (*param_3) [16],
                  undefined1 (*param_4) [16],float param_5,float param_6,float param_7)

{
  uint uVar1;
  undefined1 auVar2 [16];
  undefined1 auVar3 [16];
  undefined1 auVar4 [16];
  undefined1 auVar5 [16];
  undefined1 auVar6 [16];
  undefined1 auVar7 [16];
  undefined1 auVar8 [16];
  undefined1 auVar9 [16];
  undefined1 auVar10 [16];
  undefined1 auVar11 [16];
  undefined1 auVar12 [16];
  undefined1 auVar13 [16];
  float fVar14;
  float fVar17;
  float fVar18;
  float fVar19;
  undefined1 auVar15 [16];
  undefined1 auVar16 [16];
  float fVar20;
  float fVar21;
  float fVar24;
  float fVar25;
  float fVar26;
  undefined1 auVar22 [16];
  undefined1 auVar23 [16];
  
  auVar3 = *param_4;
  auVar4 = *param_3;
  auVar13 = *param_2;
  auVar2._0_12_ = ZEXT812(0);
  auVar2._12_4_ = 0;
  *param_1 = auVar2;
  uVar1 = _DAT_146159bfc;
  if (0.0 < param_7) {
    auVar12 = vsubps_avx(auVar13,auVar4);
    auVar13 = vshufps_avx(auVar12,auVar12,0xd2);
    auVar2 = vshufps_avx(auVar12,auVar12,0xc9);
    auVar4._0_4_ = auVar3._0_4_ ^ _DAT_145fc6f10;
    auVar4._4_4_ = auVar3._4_4_ ^ _DAT_145fc6f10;
    auVar4._8_4_ = auVar3._8_4_ ^ _DAT_145fc6f10;
    auVar4._12_4_ = auVar3._12_4_ ^ _DAT_145fc6f10;
    auVar4 = vblendps_avx(auVar4,auVar3,8);
    auVar7 = vshufps_avx(auVar4,auVar4,0xc9);
    auVar4 = vshufps_avx(auVar4,auVar4,0xd2);
    fVar21 = -(auVar4._0_4_ * auVar2._0_4_) + auVar7._0_4_ * auVar13._0_4_;
    fVar24 = -(auVar4._4_4_ * auVar2._4_4_) + auVar7._4_4_ * auVar13._4_4_;
    fVar25 = -(auVar4._8_4_ * auVar2._8_4_) + auVar7._8_4_ * auVar13._8_4_;
    fVar26 = -(auVar4._12_4_ * auVar2._12_4_) + auVar7._12_4_ * auVar13._12_4_;
    auVar22._0_4_ = fVar21 + fVar21;
    auVar22._4_4_ = fVar24 + fVar24;
    auVar22._8_4_ = fVar25 + fVar25;
    auVar22._12_4_ = fVar26 + fVar26;
    auVar13 = vshufps_avx(auVar22,auVar22,0xd2);
    auVar2 = vshufps_avx(auVar22,auVar22,0xc9);
    auVar9 = vshufps_avx(auVar3,auVar3,0xff);
    fVar21 = auVar9._0_4_;
    fVar24 = auVar9._4_4_;
    fVar25 = auVar9._8_4_;
    fVar26 = auVar9._12_4_;
    auVar9._0_4_ = fVar21 * auVar22._0_4_ + auVar12._0_4_ +
                   -(auVar4._0_4_ * auVar2._0_4_) + auVar13._0_4_ * auVar7._0_4_;
    auVar9._4_4_ = fVar24 * auVar22._4_4_ + auVar12._4_4_ +
                   -(auVar4._4_4_ * auVar2._4_4_) + auVar13._4_4_ * auVar7._4_4_;
    auVar9._8_4_ = fVar25 * auVar22._8_4_ + auVar12._8_4_ +
                   -(auVar4._8_4_ * auVar2._8_4_) + auVar13._8_4_ * auVar7._8_4_;
    auVar9._12_4_ =
         fVar26 * auVar22._12_4_ + auVar12._12_4_ +
         -(auVar4._12_4_ * auVar2._12_4_) + auVar13._12_4_ * auVar7._12_4_;
    auVar4 = vmovshdup_avx(auVar9);
    fVar14 = auVar4._0_4_;
    if (fVar14 <= param_7 + param_6) {
      if ((float)((uint)(param_7 + param_5) ^ _DAT_145fc6f10) <= fVar14) {
        if (fVar14 <= param_7) {
          auVar4 = ZEXT416((uint)(fVar14 + param_7));
          if ((float)((uint)param_7 ^ _DAT_145fc6f10) <= fVar14) {
            auVar4 = ZEXT816(0);
            param_5 = ((fVar14 + param_7) * (param_6 - param_5)) / (param_7 + param_7) + param_5;
          }
        }
        else {
          auVar4 = ZEXT416((uint)(fVar14 - param_7));
          param_5 = param_6;
        }
        auVar4 = vinsertps_avx(auVar9,auVar4,0x10);
        fVar14 = auVar4._0_4_;
        auVar13._0_4_ = fVar14 * fVar14;
        fVar17 = auVar4._4_4_;
        auVar13._4_4_ = fVar17 * fVar17;
        fVar18 = auVar4._8_4_;
        auVar13._8_4_ = fVar18 * fVar18;
        fVar19 = auVar4._12_4_;
        auVar13._12_4_ = fVar19 * fVar19;
        auVar4 = vblendps_avx(auVar13,ZEXT416(0) << 0x20,8);
        auVar4 = vhaddps_avx(auVar4,auVar4);
        auVar4 = vhaddps_avx(auVar4,auVar4);
        param_6 = param_5 - SQRT(auVar4._0_4_);
        fVar20 = _DAT_145fc6ed8 / (SQRT(auVar4._0_4_) + _DAT_145fc6f00);
        auVar12._0_4_ = fVar20 * fVar14;
        auVar12._4_4_ = fVar20 * fVar17;
        auVar12._8_4_ = fVar20 * fVar18;
        auVar12._12_4_ = fVar20 * fVar19;
        auVar4 = vshufps_avx(auVar3,auVar3,0xc9);
        auVar3 = vshufps_avx(auVar3,auVar3,0xd2);
        auVar13 = vshufps_avx(auVar12,auVar12,0xd2);
        auVar2 = vshufps_avx(auVar12,auVar12,0xc9);
        fVar14 = -(auVar3._0_4_ * auVar2._0_4_) + auVar13._0_4_ * auVar4._0_4_;
        fVar17 = -(auVar3._4_4_ * auVar2._4_4_) + auVar13._4_4_ * auVar4._4_4_;
        fVar18 = -(auVar3._8_4_ * auVar2._8_4_) + auVar13._8_4_ * auVar4._8_4_;
        fVar19 = -(auVar3._12_4_ * auVar2._12_4_) + auVar13._12_4_ * auVar4._12_4_;
        auVar23._0_4_ = fVar14 + fVar14;
        auVar23._4_4_ = fVar17 + fVar17;
        auVar23._8_4_ = fVar18 + fVar18;
        auVar23._12_4_ = fVar19 + fVar19;
        auVar13 = vshufps_avx(auVar23,auVar23,0xd2);
        auVar2 = vshufps_avx(auVar23,auVar23,0xc9);
        auVar7._0_4_ = auVar23._0_4_ * fVar21 + auVar12._0_4_ +
                       -(auVar3._0_4_ * auVar2._0_4_) + auVar13._0_4_ * auVar4._0_4_;
        auVar7._4_4_ = auVar23._4_4_ * fVar24 + auVar12._4_4_ +
                       -(auVar3._4_4_ * auVar2._4_4_) + auVar13._4_4_ * auVar4._4_4_;
        auVar7._8_4_ = auVar23._8_4_ * fVar25 + auVar12._8_4_ +
                       -(auVar3._8_4_ * auVar2._8_4_) + auVar13._8_4_ * auVar4._8_4_;
        auVar7._12_4_ =
             auVar23._12_4_ * fVar26 + auVar12._12_4_ +
             -(auVar3._12_4_ * auVar2._12_4_) + auVar13._12_4_ * auVar4._12_4_;
        auVar3 = vblendps_avx(auVar7,ZEXT416(0) << 0x20,8);
        *param_1 = auVar3;
      }
      else {
        auVar11._0_4_ = param_7 * _DAT_146159bc0 + auVar9._0_4_;
        auVar11._4_4_ = param_7 * _UNK_146159bc4 + auVar9._4_4_;
        auVar11._8_4_ = param_7 * _UNK_146159bc8 + auVar9._8_4_;
        auVar11._12_4_ = param_7 * _UNK_146159bcc + auVar9._12_4_;
        auVar4 = vshufps_avx(auVar3,auVar3,0xc9);
        auVar3 = vshufps_avx(auVar3,auVar3,0xd2);
        auVar13 = vshufps_avx(auVar11,auVar11,0xd2);
        auVar2 = vshufps_avx(auVar11,auVar11,0xc9);
        fVar14 = -(auVar3._0_4_ * auVar2._0_4_) + auVar13._0_4_ * auVar4._0_4_;
        fVar17 = -(auVar3._4_4_ * auVar2._4_4_) + auVar13._4_4_ * auVar4._4_4_;
        fVar18 = -(auVar3._8_4_ * auVar2._8_4_) + auVar13._8_4_ * auVar4._8_4_;
        fVar19 = -(auVar3._12_4_ * auVar2._12_4_) + auVar13._12_4_ * auVar4._12_4_;
        auVar16._0_4_ = fVar14 + fVar14;
        auVar16._4_4_ = fVar17 + fVar17;
        auVar16._8_4_ = fVar18 + fVar18;
        auVar16._12_4_ = fVar19 + fVar19;
        auVar13 = vshufps_avx(auVar16,auVar16,0xd2);
        auVar2 = vshufps_avx(auVar16,auVar16,0xc9);
        fVar14 = auVar16._0_4_ * fVar21 + auVar11._0_4_ +
                 -(auVar3._0_4_ * auVar2._0_4_) + auVar13._0_4_ * auVar4._0_4_;
        fVar17 = auVar16._4_4_ * fVar24 + auVar11._4_4_ +
                 -(auVar3._4_4_ * auVar2._4_4_) + auVar13._4_4_ * auVar4._4_4_;
        fVar18 = auVar16._8_4_ * fVar25 + auVar11._8_4_ +
                 -(auVar3._8_4_ * auVar2._8_4_) + auVar13._8_4_ * auVar4._8_4_;
        fVar19 = auVar16._12_4_ * fVar26 + auVar11._12_4_ +
                 -(auVar3._12_4_ * auVar2._12_4_) + auVar13._12_4_ * auVar4._12_4_;
        auVar6._0_4_ = fVar14 * fVar14;
        auVar6._4_4_ = fVar17 * fVar17;
        auVar6._8_4_ = fVar18 * fVar18;
        auVar6._12_4_ = fVar19 * fVar19;
        auVar3 = vblendps_avx(auVar6,ZEXT816(0) << 0x20,8);
        auVar3 = vhaddps_avx(auVar3,auVar3);
        auVar4 = vhaddps_avx(auVar3,auVar3);
        auVar3 = vrsqrtps_avx(auVar4);
        fVar21 = auVar3._0_4_;
        fVar24 = auVar3._4_4_;
        fVar25 = auVar3._8_4_;
        fVar26 = auVar3._12_4_;
        fVar21 = (fVar21 * fVar21 * auVar4._0_4_ * _DAT_145fc6f08 - _DAT_145fc6f08) * fVar21 +
                 fVar21;
        auVar3._0_4_ = fVar21 * fVar14;
        auVar3._4_4_ = ((fVar24 * fVar24 * auVar4._4_4_ * _DAT_145fc6f08 - _DAT_145fc6f08) * fVar24
                       + fVar24) * fVar17;
        auVar3._8_4_ = ((fVar25 * fVar25 * auVar4._8_4_ * _DAT_145fc6f08 - _DAT_145fc6f08) * fVar25
                       + fVar25) * fVar18;
        auVar3._12_4_ =
             ((fVar26 * fVar26 * auVar4._12_4_ * _DAT_145fc6f08 - _DAT_145fc6f08) * fVar26 + fVar26)
             * fVar19;
        auVar3 = vblendps_avx(auVar3,ZEXT816(0) << 0x20,8);
        *param_1 = auVar3;
        auVar3 = vcmpss_avx(ZEXT416(uVar1),auVar4,2);
        param_6 = param_5 - (float)(auVar3._0_4_ & (uint)(fVar21 * auVar4._0_4_));
      }
    }
    else {
      auVar10._0_4_ = param_7 * _DAT_14615bd00 + auVar9._0_4_;
      auVar10._4_4_ = param_7 * _UNK_14615bd04 + auVar9._4_4_;
      auVar10._8_4_ = param_7 * _UNK_14615bd08 + auVar9._8_4_;
      auVar10._12_4_ = param_7 * _UNK_14615bd0c + auVar9._12_4_;
      auVar4 = vshufps_avx(auVar3,auVar3,0xc9);
      auVar3 = vshufps_avx(auVar3,auVar3,0xd2);
      auVar13 = vshufps_avx(auVar10,auVar10,0xd2);
      auVar2 = vshufps_avx(auVar10,auVar10,0xc9);
      fVar14 = -(auVar3._0_4_ * auVar2._0_4_) + auVar13._0_4_ * auVar4._0_4_;
      fVar17 = -(auVar3._4_4_ * auVar2._4_4_) + auVar13._4_4_ * auVar4._4_4_;
      fVar18 = -(auVar3._8_4_ * auVar2._8_4_) + auVar13._8_4_ * auVar4._8_4_;
      fVar19 = -(auVar3._12_4_ * auVar2._12_4_) + auVar13._12_4_ * auVar4._12_4_;
      auVar15._0_4_ = fVar14 + fVar14;
      auVar15._4_4_ = fVar17 + fVar17;
      auVar15._8_4_ = fVar18 + fVar18;
      auVar15._12_4_ = fVar19 + fVar19;
      auVar13 = vshufps_avx(auVar15,auVar15,0xd2);
      auVar2 = vshufps_avx(auVar15,auVar15,0xc9);
      fVar14 = auVar15._0_4_ * fVar21 + auVar10._0_4_ +
               -(auVar3._0_4_ * auVar2._0_4_) + auVar13._0_4_ * auVar4._0_4_;
      fVar17 = auVar15._4_4_ * fVar24 + auVar10._4_4_ +
               -(auVar3._4_4_ * auVar2._4_4_) + auVar13._4_4_ * auVar4._4_4_;
      fVar18 = auVar15._8_4_ * fVar25 + auVar10._8_4_ +
               -(auVar3._8_4_ * auVar2._8_4_) + auVar13._8_4_ * auVar4._8_4_;
      fVar19 = auVar15._12_4_ * fVar26 + auVar10._12_4_ +
               -(auVar3._12_4_ * auVar2._12_4_) + auVar13._12_4_ * auVar4._12_4_;
      auVar8._0_4_ = fVar14 * fVar14;
      auVar8._4_4_ = fVar17 * fVar17;
      auVar8._8_4_ = fVar18 * fVar18;
      auVar8._12_4_ = fVar19 * fVar19;
      auVar3 = vblendps_avx(auVar8,ZEXT416(0) << 0x20,8);
      auVar3 = vhaddps_avx(auVar3,auVar3);
      auVar4 = vhaddps_avx(auVar3,auVar3);
      auVar3 = vrsqrtps_avx(auVar4);
      fVar21 = auVar3._0_4_;
      fVar24 = auVar3._4_4_;
      fVar25 = auVar3._8_4_;
      fVar26 = auVar3._12_4_;
      fVar21 = (fVar21 * fVar21 * auVar4._0_4_ * _DAT_145fc6f08 - _DAT_145fc6f08) * fVar21 + fVar21;
      auVar5._0_4_ = fVar21 * fVar14;
      auVar5._4_4_ = ((fVar24 * fVar24 * auVar4._4_4_ * _DAT_145fc6f08 - _DAT_145fc6f08) * fVar24 +
                     fVar24) * fVar17;
      auVar5._8_4_ = ((fVar25 * fVar25 * auVar4._8_4_ * _DAT_145fc6f08 - _DAT_145fc6f08) * fVar25 +
                     fVar25) * fVar18;
      auVar5._12_4_ =
           ((fVar26 * fVar26 * auVar4._12_4_ * _DAT_145fc6f08 - _DAT_145fc6f08) * fVar26 + fVar26) *
           fVar19;
      auVar3 = vblendps_avx(auVar5,ZEXT416(0) << 0x20,8);
      *param_1 = auVar3;
      auVar3 = vcmpss_avx(ZEXT416(uVar1),auVar4,2);
      param_6 = param_6 - (float)(auVar3._0_4_ & (uint)(fVar21 * auVar4._0_4_));
    }
    *(float *)(*param_1 + 0xc) = param_6;
  }
  return;
}

