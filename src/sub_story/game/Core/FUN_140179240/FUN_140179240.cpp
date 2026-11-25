// Recovered from game_scarlett_master.exe (GTA VI, Xbox Series X, PE32+ x64)
// Address: 140179240  size: 1349 bytes
// Name:    FUN_140179240
// Subsystem: core
//
// Referenced strings (0 in this body, 0 including direct callees):
// Callees: FUN_145032800, FUN_145031fd0
//
// Generated decompilation. Formatting follows MiscRef/GTAVSRC conventions;
// identifiers are recovered, not original. See ../../../README.md.

#include "gta6decomp/rage_types.h"


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

float FUN_140179240(longlong *param_1,char param_2)

{
  longlong *plVar1;
  longlong *plVar2;
  longlong *plVar3;
  longlong lVar4;
  float *pfVar5;
  float *pfVar6;
  float fVar7;
  float fVar8;
  float fVar9;
  float fVar10;
  float fVar11;
  float fVar15;
  float fVar16;
  undefined1 auVar12 [16];
  undefined1 auVar13 [16];
  undefined1 auVar14 [16];
  float fVar17;
  undefined1 auVar18 [16];
  float fVar20;
  undefined1 auVar19 [16];
  undefined1 auVar21 [16];
  undefined1 auVar22 [16];
  undefined1 auVar23 [16];
  undefined1 auVar24 [16];
  undefined1 auVar25 [64];
  undefined1 auVar26 [64];
  undefined1 auVar27 [16];
  undefined1 auVar28 [64];
  
  plVar1 = (longlong *)*param_1;
  plVar2 = (longlong *)param_1[1];
  if (plVar1 == (longlong *)0x0) {
    auVar12._0_12_ = ZEXT812(0);
    auVar12._12_4_ = 0.0;
  }
  else {
    if ((*(byte *)((longlong)plVar1 + 0x26e) & 2) == 0) {
      pfVar5 = (float *)(plVar1 + 0x1a);
      pfVar6 = (float *)(plVar1 + 0x1c);
    }
    else {
      pfVar5 = (float *)FUN_145031fd0(plVar1 + 0x60,(char)param_1[0x48]);
      pfVar6 = pfVar5 + 4;
    }
    fVar17 = *pfVar5;
    fVar7 = pfVar5[1];
    fVar8 = pfVar5[2];
    fVar9 = *pfVar6;
    fVar10 = pfVar6[1];
    fVar11 = pfVar6[2];
    auVar12._0_4_ =
         fVar11 * *(float *)(param_1 + 0xc) +
         fVar10 * *(float *)(param_1 + 10) +
         fVar9 * *(float *)(param_1 + 8) +
         fVar8 * *(float *)(param_1 + 6) +
         fVar7 * *(float *)(param_1 + 4) + fVar17 * *(float *)(param_1 + 2);
    auVar12._4_4_ =
         fVar11 * *(float *)((longlong)param_1 + 100) +
         fVar10 * *(float *)((longlong)param_1 + 0x54) +
         fVar9 * *(float *)((longlong)param_1 + 0x44) +
         fVar8 * *(float *)((longlong)param_1 + 0x34) +
         fVar7 * *(float *)((longlong)param_1 + 0x24) +
         fVar17 * *(float *)((longlong)param_1 + 0x14);
    auVar12._8_4_ =
         fVar11 * *(float *)(param_1 + 0xd) +
         fVar10 * *(float *)(param_1 + 0xb) +
         fVar9 * *(float *)(param_1 + 9) +
         fVar8 * *(float *)(param_1 + 7) +
         fVar7 * *(float *)(param_1 + 5) + fVar17 * *(float *)(param_1 + 3);
    auVar12._12_4_ =
         fVar11 * *(float *)((longlong)param_1 + 0x6c) +
         fVar10 * *(float *)((longlong)param_1 + 0x5c) +
         fVar9 * *(float *)((longlong)param_1 + 0x4c) +
         fVar8 * *(float *)((longlong)param_1 + 0x3c) +
         fVar7 * *(float *)((longlong)param_1 + 0x2c) +
         fVar17 * *(float *)((longlong)param_1 + 0x1c);
  }
  auVar25 = ZEXT1664(auVar12);
  if (plVar2 != (longlong *)0x0) {
    if ((*(byte *)((longlong)plVar2 + 0x26e) & 2) == 0) {
      pfVar5 = (float *)(plVar2 + 0x1a);
      pfVar6 = (float *)(plVar2 + 0x1c);
    }
    else {
      pfVar5 = (float *)FUN_145031fd0(plVar2 + 0x60,*(undefined1 *)((longlong)param_1 + 0x241));
      auVar12 = auVar25._0_16_;
      pfVar6 = pfVar5 + 4;
    }
    fVar17 = *pfVar5;
    fVar7 = pfVar5[1];
    fVar8 = pfVar5[2];
    fVar15 = auVar12._4_4_;
    fVar16 = auVar12._8_4_;
    fVar20 = auVar12._12_4_;
    fVar9 = *pfVar6;
    fVar10 = pfVar6[1];
    fVar11 = pfVar6[2];
    auVar12._0_4_ =
         fVar11 * *(float *)(param_1 + 0x24) +
         fVar10 * *(float *)(param_1 + 0x22) +
         fVar9 * *(float *)(param_1 + 0x20) +
         fVar8 * *(float *)(param_1 + 0x1e) +
         fVar7 * *(float *)(param_1 + 0x1c) + fVar17 * *(float *)(param_1 + 0x1a) + auVar12._0_4_;
    auVar12._4_4_ =
         fVar11 * *(float *)((longlong)param_1 + 0x124) +
         fVar10 * *(float *)((longlong)param_1 + 0x114) +
         fVar9 * *(float *)((longlong)param_1 + 0x104) +
         fVar8 * *(float *)((longlong)param_1 + 0xf4) +
         fVar7 * *(float *)((longlong)param_1 + 0xe4) +
         fVar17 * *(float *)((longlong)param_1 + 0xd4) + fVar15;
    auVar12._8_4_ =
         fVar11 * *(float *)(param_1 + 0x25) +
         fVar10 * *(float *)(param_1 + 0x23) +
         fVar9 * *(float *)(param_1 + 0x21) +
         fVar8 * *(float *)(param_1 + 0x1f) +
         fVar7 * *(float *)(param_1 + 0x1d) + fVar17 * *(float *)(param_1 + 0x1b) + fVar16;
    auVar12._12_4_ =
         fVar11 * *(float *)((longlong)param_1 + 300) +
         fVar10 * *(float *)((longlong)param_1 + 0x11c) +
         fVar9 * *(float *)((longlong)param_1 + 0x10c) +
         fVar8 * *(float *)((longlong)param_1 + 0xfc) +
         fVar7 * *(float *)((longlong)param_1 + 0xec) +
         fVar17 * *(float *)((longlong)param_1 + 0xdc) + fVar20;
  }
  auVar21 = *(undefined1 (*) [16])(param_1 + 0x40);
  fVar17 = auVar21._0_4_;
  if ((*(byte *)((longlong)param_1 + 0x242) & 2) != 0) {
    fVar7 = auVar12._4_4_;
    fVar8 = auVar12._8_4_;
    fVar9 = auVar12._12_4_;
    auVar19 = vshufps_avx(auVar21,auVar21,0x55);
    auVar13 = vshufps_avx(auVar21,auVar21,0xaa);
    auVar12._0_4_ =
         auVar13._0_4_ * *(float *)(param_1 + 0x3c) +
         auVar19._0_4_ * *(float *)(param_1 + 0x3a) +
         fVar17 * *(float *)(param_1 + 0x38) + auVar12._0_4_;
    auVar12._4_4_ =
         auVar13._4_4_ * *(float *)((longlong)param_1 + 0x1e4) +
         auVar19._4_4_ * *(float *)((longlong)param_1 + 0x1d4) +
         fVar17 * *(float *)((longlong)param_1 + 0x1c4) + fVar7;
    auVar12._8_4_ =
         auVar13._8_4_ * *(float *)(param_1 + 0x3d) +
         auVar19._8_4_ * *(float *)(param_1 + 0x3b) + fVar17 * *(float *)(param_1 + 0x39) + fVar8;
    auVar12._12_4_ =
         auVar13._12_4_ * *(float *)((longlong)param_1 + 0x1ec) +
         auVar19._12_4_ * *(float *)((longlong)param_1 + 0x1dc) +
         fVar17 * *(float *)((longlong)param_1 + 0x1cc) + fVar9;
  }
  auVar19 = vsubps_avx(*(undefined1 (*) [16])(param_1 + 0x3e),auVar12);
  fVar7 = auVar19._0_4_;
  auVar12 = vshufps_avx(auVar19,auVar19,0x55);
  auVar19 = vshufps_avx(auVar19,auVar19,0xaa);
  auVar13._0_4_ =
       auVar19._0_4_ * *(float *)(param_1 + 0x36) +
       auVar12._0_4_ * *(float *)(param_1 + 0x34) + fVar7 * *(float *)(param_1 + 0x32);
  auVar13._4_4_ =
       auVar19._4_4_ * *(float *)((longlong)param_1 + 0x1b4) +
       auVar12._4_4_ * *(float *)((longlong)param_1 + 0x1a4) +
       fVar7 * *(float *)((longlong)param_1 + 0x194);
  auVar13._8_4_ =
       auVar19._8_4_ * *(float *)(param_1 + 0x37) +
       auVar12._8_4_ * *(float *)(param_1 + 0x35) + fVar7 * *(float *)(param_1 + 0x33);
  auVar13._12_4_ =
       auVar19._12_4_ * *(float *)((longlong)param_1 + 0x1bc) +
       auVar12._12_4_ * *(float *)((longlong)param_1 + 0x1ac) +
       fVar7 * *(float *)((longlong)param_1 + 0x19c);
  if ((*(byte *)((longlong)param_1 + 0x242) & 1) == 0) {
    auVar19._0_4_ = fVar17 + auVar13._0_4_;
    auVar19._4_4_ = auVar21._4_4_ + auVar13._4_4_;
    auVar19._8_4_ = auVar21._8_4_ + auVar13._8_4_;
    auVar19._12_4_ = auVar21._12_4_ + auVar13._12_4_;
  }
  else {
    auVar14._0_4_ = fVar17 + auVar13._0_4_;
    auVar14._4_4_ = auVar21._4_4_ + auVar13._4_4_;
    auVar14._8_4_ = auVar21._8_4_ + auVar13._8_4_;
    auVar14._12_4_ = auVar21._12_4_ + auVar13._12_4_;
    auVar12 = vmaxps_avx(auVar14,*(undefined1 (*) [16])(param_1 + 0x44));
    auVar19 = vminps_avx(auVar12,*(undefined1 (*) [16])(param_1 + 0x46));
    auVar13 = vsubps_avx(auVar19,auVar21);
  }
  *(undefined1 (*) [16])(param_1 + 0x40) = auVar19;
  if (param_2 != '\0') {
    lVar4 = param_1[0x41];
    plVar3 = (longlong *)param_1[0x42];
    *plVar3 = *(longlong *)*(undefined1 (*) [16])(param_1 + 0x40);
    plVar3[1] = lVar4;
  }
  fVar17 = auVar13._0_4_;
  auVar27._4_4_ = fVar17;
  auVar27._0_4_ = fVar17;
  auVar27._8_4_ = fVar17;
  auVar27._12_4_ = fVar17;
  auVar28 = ZEXT1664(auVar27);
  auVar12 = vshufps_avx(auVar13,auVar13,0x55);
  auVar26 = ZEXT1664(auVar12);
  auVar21 = vshufps_avx(auVar13,auVar13,0xaa);
  auVar25 = ZEXT1664(auVar21);
  if (plVar1 == (longlong *)0x0) {
    fVar17 = 0.0;
  }
  else {
    fVar7 = auVar21._0_4_ * *(float *)(param_1 + 0x12) +
            auVar12._0_4_ * *(float *)(param_1 + 0x10) + fVar17 * *(float *)(param_1 + 0xe);
    fVar8 = auVar21._4_4_ * *(float *)((longlong)param_1 + 0x94) +
            auVar12._4_4_ * *(float *)((longlong)param_1 + 0x84) +
            fVar17 * *(float *)((longlong)param_1 + 0x74);
    fVar9 = auVar21._8_4_ * *(float *)(param_1 + 0x13) +
            auVar12._8_4_ * *(float *)(param_1 + 0x11) + fVar17 * *(float *)(param_1 + 0xf);
    fVar10 = auVar21._12_4_ * *(float *)((longlong)param_1 + 0x9c) +
             auVar12._12_4_ * *(float *)((longlong)param_1 + 0x8c) +
             fVar17 * *(float *)((longlong)param_1 + 0x7c);
    fVar11 = auVar21._0_4_ * *(float *)(param_1 + 0x18) +
             auVar12._0_4_ * *(float *)(param_1 + 0x16) + fVar17 * *(float *)(param_1 + 0x14);
    fVar15 = auVar21._4_4_ * *(float *)((longlong)param_1 + 0xc4) +
             auVar12._4_4_ * *(float *)((longlong)param_1 + 0xb4) +
             fVar17 * *(float *)((longlong)param_1 + 0xa4);
    fVar16 = auVar21._8_4_ * *(float *)(param_1 + 0x19) +
             auVar12._8_4_ * *(float *)(param_1 + 0x17) + fVar17 * *(float *)(param_1 + 0x15);
    fVar17 = auVar21._12_4_ * *(float *)((longlong)param_1 + 0xcc) +
             auVar12._12_4_ * *(float *)((longlong)param_1 + 0xbc) +
             fVar17 * *(float *)((longlong)param_1 + 0xac);
    auVar18._0_4_ = fVar7 * fVar7;
    auVar18._4_4_ = fVar8 * fVar8;
    auVar18._8_4_ = fVar9 * fVar9;
    auVar18._12_4_ = fVar10 * fVar10;
    auVar22._0_4_ = fVar11 * fVar11;
    auVar22._4_4_ = fVar15 * fVar15;
    auVar22._8_4_ = fVar16 * fVar16;
    auVar22._12_4_ = fVar17 * fVar17;
    auVar19 = vblendps_avx(auVar18,ZEXT816(0) << 0x20,8);
    auVar13 = vblendps_avx(auVar22,ZEXT816(0) << 0x20,8);
    auVar19 = vhaddps_avx(auVar19,auVar19);
    auVar13 = vhaddps_avx(auVar13,auVar13);
    auVar14 = vhaddps_avx(auVar19,auVar19);
    auVar13 = vhaddps_avx(auVar13,auVar13);
    auVar19 = vrsqrtss_avx(auVar14,auVar14);
    fVar17 = auVar19._0_4_;
    auVar19 = vcmpss_avx(ZEXT416(_DAT_146159bfc),auVar14,2);
    fVar7 = (float)(auVar19._0_4_ &
                   (uint)(((_DAT_145fc6f08 * fVar17 * fVar17 * auVar14._0_4_ + _DAT_145fc6edc) *
                           fVar17 + fVar17) * auVar14._0_4_));
    auVar19 = vrsqrtss_avx(auVar13,auVar13);
    fVar17 = auVar19._0_4_;
    auVar19 = vcmpss_avx(ZEXT416(_DAT_146159bfc),auVar13,2);
    fVar17 = (float)(auVar19._0_4_ &
                    (uint)(((_DAT_145fc6f08 * fVar17 * fVar17 * auVar13._0_4_ + _DAT_145fc6edc) *
                            fVar17 + fVar17) * auVar13._0_4_));
    if (-1 < (char)*(byte *)((longlong)plVar1 + 0x26e)) {
      if ((*(byte *)((longlong)plVar1 + 0x26e) & 2) == 0) {
        (**(code **)(*plVar1 + 0x38))(plVar1);
        (**(code **)(*plVar1 + 0x40))(plVar1);
        auVar21 = auVar25._0_16_;
        auVar12 = auVar26._0_16_;
        auVar27 = auVar28._0_16_;
      }
      else {
        FUN_145032800(plVar1 + 0x60,(char)param_1[0x48]);
        auVar21 = auVar25._0_16_;
        auVar12 = auVar26._0_16_;
        auVar27 = auVar28._0_16_;
      }
    }
    fVar17 = fVar17 + fVar7;
  }
  if (plVar2 != (longlong *)0x0) {
    auVar23._0_12_ = ZEXT812(0);
    auVar23._12_4_ = 0;
    fVar7 = auVar21._0_4_ * *(float *)(param_1 + 0x2a) +
            auVar12._0_4_ * *(float *)(param_1 + 0x28) + auVar27._0_4_ * *(float *)(param_1 + 0x26);
    fVar8 = auVar21._4_4_ * *(float *)((longlong)param_1 + 0x154) +
            auVar12._4_4_ * *(float *)((longlong)param_1 + 0x144) +
            auVar27._4_4_ * *(float *)((longlong)param_1 + 0x134);
    fVar9 = auVar21._8_4_ * *(float *)(param_1 + 0x2b) +
            auVar12._8_4_ * *(float *)(param_1 + 0x29) + auVar27._8_4_ * *(float *)(param_1 + 0x27);
    fVar10 = auVar21._12_4_ * *(float *)((longlong)param_1 + 0x15c) +
             auVar12._12_4_ * *(float *)((longlong)param_1 + 0x14c) +
             auVar27._12_4_ * *(float *)((longlong)param_1 + 0x13c);
    fVar11 = auVar21._0_4_ * *(float *)(param_1 + 0x30) +
             auVar12._0_4_ * *(float *)(param_1 + 0x2e) + auVar27._0_4_ * *(float *)(param_1 + 0x2c)
    ;
    fVar15 = auVar21._4_4_ * *(float *)((longlong)param_1 + 0x184) +
             auVar12._4_4_ * *(float *)((longlong)param_1 + 0x174) +
             auVar27._4_4_ * *(float *)((longlong)param_1 + 0x164);
    fVar16 = auVar21._8_4_ * *(float *)(param_1 + 0x31) +
             auVar12._8_4_ * *(float *)(param_1 + 0x2f) + auVar27._8_4_ * *(float *)(param_1 + 0x2d)
    ;
    fVar20 = auVar21._12_4_ * *(float *)((longlong)param_1 + 0x18c) +
             auVar12._12_4_ * *(float *)((longlong)param_1 + 0x17c) +
             auVar27._12_4_ * *(float *)((longlong)param_1 + 0x16c);
    auVar21._0_4_ = fVar7 * fVar7;
    auVar21._4_4_ = fVar8 * fVar8;
    auVar21._8_4_ = fVar9 * fVar9;
    auVar21._12_4_ = fVar10 * fVar10;
    auVar12 = vblendps_avx(auVar21,auVar23,8);
    auVar12 = vhaddps_avx(auVar12,auVar12);
    auVar19 = vhaddps_avx(auVar12,auVar12);
    auVar12 = vrsqrtss_avx(auVar19,auVar19);
    fVar7 = auVar12._0_4_;
    auVar21 = vcmpss_avx(ZEXT416(_DAT_146159bfc),auVar19,2);
    auVar24._0_4_ = fVar11 * fVar11;
    auVar24._4_4_ = fVar15 * fVar15;
    auVar24._8_4_ = fVar16 * fVar16;
    auVar24._12_4_ = fVar20 * fVar20;
    auVar12 = vblendps_avx(auVar24,auVar23,8);
    auVar12 = vhaddps_avx(auVar12,auVar12);
    auVar13 = vhaddps_avx(auVar12,auVar12);
    auVar12 = vrsqrtss_avx(auVar13,auVar13);
    fVar8 = auVar12._0_4_;
    fVar17 = (float)(auVar21._0_4_ &
                    (uint)(((_DAT_145fc6f08 * fVar7 * fVar7 * auVar19._0_4_ + _DAT_145fc6edc) *
                            fVar7 + fVar7) * auVar19._0_4_)) + fVar17;
    auVar12 = vcmpss_avx(ZEXT416(_DAT_146159bfc),auVar13,2);
    fVar7 = (float)(auVar12._0_4_ &
                   (uint)(((_DAT_145fc6f08 * fVar8 * fVar8 * auVar13._0_4_ + _DAT_145fc6edc) * fVar8
                          + fVar8) * auVar13._0_4_));
    if (-1 < (char)*(byte *)((longlong)plVar2 + 0x26e)) {
      if ((*(byte *)((longlong)plVar2 + 0x26e) & 2) == 0) {
        (**(code **)(*plVar2 + 0x38))(plVar2);
        (**(code **)(*plVar2 + 0x40))(plVar2);
      }
      else {
        FUN_145032800(plVar2 + 0x60,*(undefined1 *)((longlong)param_1 + 0x241));
      }
    }
    fVar17 = fVar17 + fVar7;
  }
  return fVar17;
}

