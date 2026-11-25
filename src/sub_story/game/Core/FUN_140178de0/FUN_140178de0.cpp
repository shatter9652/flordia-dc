// Recovered from game_scarlett_master.exe (GTA VI, Xbox Series X, PE32+ x64)
// Address: 140178de0  size: 1004 bytes
// Name:    FUN_140178de0
// Subsystem: core
//
// Referenced strings (0 in this body, 0 including direct callees):
// Callees: FUN_145032800, FUN_145031fd0
//
// Generated decompilation. Formatting follows MiscRef/GTAVSRC conventions;
// identifiers are recovered, not original. See ../../../README.md.

#include "gta6decomp/rage_types.h"


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

float FUN_140178de0(longlong *param_1,char param_2)

{
  undefined4 uVar1;
  longlong *plVar2;
  longlong *plVar3;
  longlong *plVar4;
  longlong lVar5;
  undefined1 (*pauVar6) [16];
  undefined1 (*pauVar7) [16];
  float fVar8;
  float fVar13;
  float fVar14;
  undefined1 auVar9 [16];
  undefined1 auVar10 [16];
  undefined1 auVar11 [16];
  undefined1 auVar12 [16];
  float fVar15;
  float fVar16;
  float fVar20;
  float fVar21;
  undefined1 auVar17 [16];
  undefined1 auVar18 [16];
  undefined1 auVar19 [16];
  float fVar22;
  undefined1 auVar23 [16];
  undefined1 auVar24 [16];
  undefined1 auVar25 [16];
  undefined1 auVar26 [16];
  float fVar27;
  undefined1 auVar28 [16];
  undefined1 auVar29 [16];
  undefined1 auVar30 [16];
  undefined1 auVar31 [16];
  undefined1 auVar32 [16];
  undefined1 auVar33 [16];
  undefined1 auVar34 [64];
  
  plVar2 = (longlong *)*param_1;
  plVar3 = (longlong *)param_1[1];
  if (plVar2 == (longlong *)0x0) {
    auVar33._0_12_ = ZEXT812(0);
    auVar33._12_4_ = 0.0;
  }
  else {
    if ((*(byte *)((longlong)plVar2 + 0x26e) & 2) == 0) {
      pauVar6 = (undefined1 (*) [16])(plVar2 + 0x1a);
      pauVar7 = (undefined1 (*) [16])(plVar2 + 0x1c);
    }
    else {
      pauVar6 = (undefined1 (*) [16])FUN_145031fd0(plVar2 + 0x60,(char)param_1[0x19]);
      pauVar7 = pauVar6 + 1;
    }
    auVar33 = *pauVar6;
    auVar11 = *pauVar7;
    auVar17._0_12_ = ZEXT812(0);
    auVar17._12_4_ = 0;
    auVar9._0_4_ = auVar33._0_4_ * *(float *)(param_1 + 2);
    auVar9._4_4_ = auVar33._4_4_ * *(float *)((longlong)param_1 + 0x14);
    auVar9._8_4_ = auVar33._8_4_ * *(float *)(param_1 + 3);
    auVar9._12_4_ = auVar33._12_4_ * *(float *)((longlong)param_1 + 0x1c);
    auVar23._0_4_ = auVar11._0_4_ * *(float *)(param_1 + 4);
    auVar23._4_4_ = auVar11._4_4_ * *(float *)((longlong)param_1 + 0x24);
    auVar23._8_4_ = auVar11._8_4_ * *(float *)(param_1 + 5);
    auVar23._12_4_ = auVar11._12_4_ * *(float *)((longlong)param_1 + 0x2c);
    auVar33 = vblendps_avx(auVar9,auVar17,8);
    auVar11 = vblendps_avx(auVar23,auVar17,8);
    auVar33 = vhaddps_avx(auVar33,auVar33);
    auVar11 = vhaddps_avx(auVar11,auVar11);
    auVar9 = vhaddps_avx(auVar33,auVar33);
    auVar11 = vhaddps_avx(auVar11,auVar11);
    auVar33._0_4_ = auVar11._0_4_ + auVar9._0_4_;
    auVar33._4_4_ = auVar11._4_4_ + auVar9._4_4_;
    auVar33._8_4_ = auVar11._8_4_ + auVar9._8_4_;
    auVar33._12_4_ = auVar11._12_4_ + auVar9._12_4_;
  }
  auVar34 = ZEXT1664(auVar33);
  if (plVar3 != (longlong *)0x0) {
    if ((*(byte *)((longlong)plVar3 + 0x26e) & 2) == 0) {
      pauVar6 = (undefined1 (*) [16])(plVar3 + 0x1a);
      pauVar7 = (undefined1 (*) [16])(plVar3 + 0x1c);
    }
    else {
      pauVar6 = (undefined1 (*) [16])
                FUN_145031fd0(plVar3 + 0x60,*(undefined1 *)((longlong)param_1 + 0xc9));
      auVar33 = auVar34._0_16_;
      pauVar7 = pauVar6 + 1;
    }
    auVar11 = *pauVar6;
    auVar9 = *pauVar7;
    auVar18._0_12_ = ZEXT812(0);
    auVar18._12_4_ = 0;
    auVar10._0_4_ = auVar11._0_4_ * *(float *)(param_1 + 10);
    auVar10._4_4_ = auVar11._4_4_ * *(float *)((longlong)param_1 + 0x54);
    auVar10._8_4_ = auVar11._8_4_ * *(float *)(param_1 + 0xb);
    auVar10._12_4_ = auVar11._12_4_ * *(float *)((longlong)param_1 + 0x5c);
    auVar24._0_4_ = auVar9._0_4_ * *(float *)(param_1 + 0xc);
    auVar24._4_4_ = auVar9._4_4_ * *(float *)((longlong)param_1 + 100);
    auVar24._8_4_ = auVar9._8_4_ * *(float *)(param_1 + 0xd);
    auVar24._12_4_ = auVar9._12_4_ * *(float *)((longlong)param_1 + 0x6c);
    auVar11 = vblendps_avx(auVar10,auVar18,8);
    auVar9 = vblendps_avx(auVar24,auVar18,8);
    auVar11 = vhaddps_avx(auVar11,auVar11);
    auVar9 = vhaddps_avx(auVar9,auVar9);
    auVar11 = vhaddps_avx(auVar11,auVar11);
    auVar9 = vhaddps_avx(auVar9,auVar9);
    fVar8 = auVar33._4_4_;
    fVar13 = auVar33._8_4_;
    fVar14 = auVar33._12_4_;
    auVar33._0_4_ = auVar33._0_4_ + auVar11._0_4_ + auVar9._0_4_;
    auVar33._4_4_ = fVar8 + auVar11._4_4_ + auVar9._4_4_;
    auVar33._8_4_ = fVar13 + auVar11._8_4_ + auVar9._8_4_;
    auVar33._12_4_ = fVar14 + auVar11._12_4_ + auVar9._12_4_;
  }
  uVar1 = (undefined4)param_1[0x14];
  auVar11._4_4_ = uVar1;
  auVar11._0_4_ = uVar1;
  auVar11._8_4_ = uVar1;
  auVar11._12_4_ = uVar1;
  auVar25._0_12_ = ZEXT812(0);
  auVar25._12_4_ = 0;
  auVar33 = vsubps_avx(auVar11,auVar33);
  fVar8 = *(float *)(param_1 + 0x16);
  auVar12._4_4_ = fVar8;
  auVar12._0_4_ = fVar8;
  auVar12._8_4_ = fVar8;
  auVar12._12_4_ = fVar8;
  auVar19._0_4_ = auVar33._0_4_ * *(float *)(param_1 + 0x12) + fVar8;
  auVar19._4_4_ = auVar33._4_4_ * *(float *)((longlong)param_1 + 0x94) + fVar8;
  auVar19._8_4_ = auVar33._8_4_ * *(float *)(param_1 + 0x13) + fVar8;
  auVar19._12_4_ = auVar33._12_4_ * *(float *)((longlong)param_1 + 0x9c) + fVar8;
  auVar11 = vmaxps_avx(auVar19,auVar25);
  auVar33 = vblendps_avx(auVar11,*(undefined1 (*) [16])(param_1 + 0x16),0xe);
  *(undefined1 (*) [16])(param_1 + 0x16) = auVar33;
  if (param_2 != '\0') {
    plVar4 = (longlong *)param_1[0x18];
    lVar5 = param_1[0x17];
    *plVar4 = param_1[0x16];
    plVar4[1] = lVar5;
  }
  auVar33 = vsubps_avx(auVar11,auVar12);
  auVar34 = ZEXT1664(auVar33);
  if (plVar2 == (longlong *)0x0) {
    fVar8 = 0.0;
  }
  else {
    fVar8 = auVar33._0_4_ * *(float *)(param_1 + 6);
    fVar13 = auVar33._4_4_ * *(float *)((longlong)param_1 + 0x34);
    fVar14 = auVar33._8_4_ * *(float *)(param_1 + 7);
    fVar15 = auVar33._12_4_ * *(float *)((longlong)param_1 + 0x3c);
    auVar28._0_12_ = ZEXT812(0);
    auVar28._12_4_ = 0;
    fVar16 = auVar33._0_4_ * *(float *)(param_1 + 8);
    fVar20 = auVar33._4_4_ * *(float *)((longlong)param_1 + 0x44);
    fVar21 = auVar33._8_4_ * *(float *)(param_1 + 9);
    fVar22 = auVar33._12_4_ * *(float *)((longlong)param_1 + 0x4c);
    auVar26._0_4_ = fVar8 * fVar8;
    auVar26._4_4_ = fVar13 * fVar13;
    auVar26._8_4_ = fVar14 * fVar14;
    auVar26._12_4_ = fVar15 * fVar15;
    auVar30._0_4_ = fVar16 * fVar16;
    auVar30._4_4_ = fVar20 * fVar20;
    auVar30._8_4_ = fVar21 * fVar21;
    auVar30._12_4_ = fVar22 * fVar22;
    auVar11 = vblendps_avx(auVar26,auVar28,8);
    auVar9 = vblendps_avx(auVar30,auVar28,8);
    auVar11 = vhaddps_avx(auVar11,auVar11);
    auVar9 = vhaddps_avx(auVar9,auVar9);
    auVar17 = vhaddps_avx(auVar11,auVar11);
    auVar9 = vhaddps_avx(auVar9,auVar9);
    auVar11 = vrsqrtss_avx(auVar17,auVar17);
    fVar8 = auVar11._0_4_;
    auVar11 = vcmpss_avx(ZEXT416(_DAT_146159bfc),auVar17,2);
    fVar13 = (float)(auVar11._0_4_ &
                    (uint)(((_DAT_145fc6f08 * fVar8 * fVar8 * auVar17._0_4_ + _DAT_145fc6edc) *
                            fVar8 + fVar8) * auVar17._0_4_));
    auVar11 = vrsqrtss_avx(auVar9,auVar9);
    fVar8 = auVar11._0_4_;
    auVar11 = vcmpss_avx(ZEXT416(_DAT_146159bfc),auVar9,2);
    fVar8 = (float)(auVar11._0_4_ &
                   (uint)(((_DAT_145fc6f08 * fVar8 * fVar8 * auVar9._0_4_ + _DAT_145fc6edc) * fVar8
                          + fVar8) * auVar9._0_4_));
    if (-1 < (char)*(byte *)((longlong)plVar2 + 0x26e)) {
      if ((*(byte *)((longlong)plVar2 + 0x26e) & 2) == 0) {
        (**(code **)(*plVar2 + 0x38))(plVar2);
        (**(code **)(*plVar2 + 0x40))(plVar2);
        auVar33 = auVar34._0_16_;
      }
      else {
        FUN_145032800(plVar2 + 0x60,(char)param_1[0x19]);
        auVar33 = auVar34._0_16_;
      }
    }
    fVar8 = fVar8 + fVar13;
  }
  if (plVar3 != (longlong *)0x0) {
    fVar13 = auVar33._0_4_ * *(float *)(param_1 + 0xe);
    fVar14 = auVar33._4_4_ * *(float *)((longlong)param_1 + 0x74);
    fVar15 = auVar33._8_4_ * *(float *)(param_1 + 0xf);
    fVar16 = auVar33._12_4_ * *(float *)((longlong)param_1 + 0x7c);
    auVar31._0_12_ = ZEXT812(0);
    auVar31._12_4_ = 0;
    fVar20 = auVar33._0_4_ * *(float *)(param_1 + 0x10);
    fVar21 = auVar33._4_4_ * *(float *)((longlong)param_1 + 0x84);
    fVar22 = auVar33._8_4_ * *(float *)(param_1 + 0x11);
    fVar27 = auVar33._12_4_ * *(float *)((longlong)param_1 + 0x8c);
    auVar29._0_4_ = fVar13 * fVar13;
    auVar29._4_4_ = fVar14 * fVar14;
    auVar29._8_4_ = fVar15 * fVar15;
    auVar29._12_4_ = fVar16 * fVar16;
    auVar33 = vblendps_avx(auVar29,auVar31,8);
    auVar33 = vhaddps_avx(auVar33,auVar33);
    auVar9 = vhaddps_avx(auVar33,auVar33);
    auVar33 = vrsqrtss_avx(auVar9,auVar9);
    fVar13 = auVar33._0_4_;
    auVar11 = vcmpss_avx(ZEXT416(_DAT_146159bfc),auVar9,2);
    auVar32._0_4_ = fVar20 * fVar20;
    auVar32._4_4_ = fVar21 * fVar21;
    auVar32._8_4_ = fVar22 * fVar22;
    auVar32._12_4_ = fVar27 * fVar27;
    auVar33 = vblendps_avx(auVar32,auVar31,8);
    auVar33 = vhaddps_avx(auVar33,auVar33);
    auVar17 = vhaddps_avx(auVar33,auVar33);
    auVar33 = vrsqrtss_avx(auVar17,auVar17);
    fVar14 = auVar33._0_4_;
    fVar8 = (float)(auVar11._0_4_ &
                   (uint)(((_DAT_145fc6f08 * fVar13 * fVar13 * auVar9._0_4_ + _DAT_145fc6edc) *
                           fVar13 + fVar13) * auVar9._0_4_)) + fVar8;
    auVar33 = vcmpss_avx(ZEXT416(_DAT_146159bfc),auVar17,2);
    fVar13 = (float)(auVar33._0_4_ &
                    (uint)(((_DAT_145fc6f08 * fVar14 * fVar14 * auVar17._0_4_ + _DAT_145fc6edc) *
                            fVar14 + fVar14) * auVar17._0_4_));
    if (-1 < (char)*(byte *)((longlong)plVar3 + 0x26e)) {
      if ((*(byte *)((longlong)plVar3 + 0x26e) & 2) == 0) {
        (**(code **)(*plVar3 + 0x38))(plVar3);
        (**(code **)(*plVar3 + 0x40))(plVar3);
      }
      else {
        FUN_145032800(plVar3 + 0x60,*(undefined1 *)((longlong)param_1 + 0xc9));
      }
    }
    fVar8 = fVar8 + fVar13;
  }
  return fVar8;
}

