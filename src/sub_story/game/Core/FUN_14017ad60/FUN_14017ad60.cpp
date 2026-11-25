// Recovered from game_scarlett_master.exe (GTA VI, Xbox Series X, PE32+ x64)
// Address: 14017ad60  size: 1087 bytes
// Name:    FUN_14017ad60
// Subsystem: core
//
// Referenced strings (0 in this body, 0 including direct callees):
// Callees: FUN_145032800, FUN_145031fd0
//
// Generated decompilation. Formatting follows MiscRef/GTAVSRC conventions;
// identifiers are recovered, not original. See ../../../README.md.

#include "gta6decomp/rage_types.h"


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

float FUN_14017ad60(longlong *param_1,char param_2,char param_3)

{
  longlong *plVar1;
  longlong *plVar2;
  undefined4 uVar3;
  undefined1 (*pauVar4) [16];
  undefined1 (*pauVar5) [16];
  float fVar6;
  float fVar12;
  float fVar13;
  undefined1 auVar7 [16];
  undefined1 auVar8 [16];
  undefined1 auVar9 [16];
  undefined1 auVar10 [16];
  undefined1 auVar11 [16];
  float fVar14;
  float fVar15;
  float fVar19;
  float fVar20;
  undefined1 auVar16 [16];
  undefined1 auVar17 [16];
  undefined1 auVar18 [16];
  float fVar21;
  undefined1 auVar22 [16];
  undefined1 auVar23 [16];
  undefined1 auVar24 [16];
  float fVar25;
  undefined1 auVar26 [16];
  undefined1 auVar27 [16];
  undefined1 auVar28 [16];
  undefined1 auVar29 [16];
  undefined1 auVar30 [16];
  undefined1 auVar31 [16];
  undefined1 auVar32 [16];
  undefined1 auVar33 [64];
  
  plVar1 = (longlong *)*param_1;
  plVar2 = (longlong *)param_1[1];
  if (plVar1 == (longlong *)0x0) {
    auVar31._0_12_ = ZEXT812(0);
    auVar31._12_4_ = 0.0;
  }
  else {
    if ((*(byte *)((longlong)plVar1 + 0x26e) & 2) == 0) {
      pauVar4 = (undefined1 (*) [16])(plVar1 + 0x1a);
      pauVar5 = (undefined1 (*) [16])(plVar1 + 0x1c);
    }
    else {
      pauVar4 = (undefined1 (*) [16])FUN_145031fd0(plVar1 + 0x60,(char)param_1[0x19]);
      pauVar5 = pauVar4 + 1;
    }
    auVar31 = *pauVar4;
    auVar32 = *pauVar5;
    auVar16._0_12_ = ZEXT812(0);
    auVar16._12_4_ = 0;
    auVar7._0_4_ = auVar31._0_4_ * *(float *)(param_1 + 2);
    auVar7._4_4_ = auVar31._4_4_ * *(float *)((longlong)param_1 + 0x14);
    auVar7._8_4_ = auVar31._8_4_ * *(float *)(param_1 + 3);
    auVar7._12_4_ = auVar31._12_4_ * *(float *)((longlong)param_1 + 0x1c);
    auVar22._0_4_ = auVar32._0_4_ * *(float *)(param_1 + 4);
    auVar22._4_4_ = auVar32._4_4_ * *(float *)((longlong)param_1 + 0x24);
    auVar22._8_4_ = auVar32._8_4_ * *(float *)(param_1 + 5);
    auVar22._12_4_ = auVar32._12_4_ * *(float *)((longlong)param_1 + 0x2c);
    auVar31 = vblendps_avx(auVar7,auVar16,8);
    auVar32 = vblendps_avx(auVar22,auVar16,8);
    auVar31 = vhaddps_avx(auVar31,auVar31);
    auVar32 = vhaddps_avx(auVar32,auVar32);
    auVar7 = vhaddps_avx(auVar31,auVar31);
    auVar32 = vhaddps_avx(auVar32,auVar32);
    auVar31._0_4_ = auVar32._0_4_ + auVar7._0_4_;
    auVar31._4_4_ = auVar32._4_4_ + auVar7._4_4_;
    auVar31._8_4_ = auVar32._8_4_ + auVar7._8_4_;
    auVar31._12_4_ = auVar32._12_4_ + auVar7._12_4_;
  }
  auVar33 = ZEXT1664(auVar31);
  if (plVar2 != (longlong *)0x0) {
    if ((*(byte *)((longlong)plVar2 + 0x26e) & 2) == 0) {
      pauVar4 = (undefined1 (*) [16])(plVar2 + 0x1a);
      pauVar5 = (undefined1 (*) [16])(plVar2 + 0x1c);
    }
    else {
      pauVar4 = (undefined1 (*) [16])
                FUN_145031fd0(plVar2 + 0x60,*(undefined1 *)((longlong)param_1 + 0xc9));
      auVar31 = auVar33._0_16_;
      pauVar5 = pauVar4 + 1;
    }
    auVar32 = *pauVar4;
    auVar7 = *pauVar5;
    auVar17._0_12_ = ZEXT812(0);
    auVar17._12_4_ = 0;
    auVar8._0_4_ = auVar32._0_4_ * *(float *)(param_1 + 10);
    auVar8._4_4_ = auVar32._4_4_ * *(float *)((longlong)param_1 + 0x54);
    auVar8._8_4_ = auVar32._8_4_ * *(float *)(param_1 + 0xb);
    auVar8._12_4_ = auVar32._12_4_ * *(float *)((longlong)param_1 + 0x5c);
    auVar23._0_4_ = auVar7._0_4_ * *(float *)(param_1 + 0xc);
    auVar23._4_4_ = auVar7._4_4_ * *(float *)((longlong)param_1 + 100);
    auVar23._8_4_ = auVar7._8_4_ * *(float *)(param_1 + 0xd);
    auVar23._12_4_ = auVar7._12_4_ * *(float *)((longlong)param_1 + 0x6c);
    auVar32 = vblendps_avx(auVar8,auVar17,8);
    auVar7 = vblendps_avx(auVar23,auVar17,8);
    auVar32 = vhaddps_avx(auVar32,auVar32);
    auVar7 = vhaddps_avx(auVar7,auVar7);
    auVar32 = vhaddps_avx(auVar32,auVar32);
    auVar7 = vhaddps_avx(auVar7,auVar7);
    fVar6 = auVar31._4_4_;
    fVar12 = auVar31._8_4_;
    fVar13 = auVar31._12_4_;
    auVar31._0_4_ = auVar31._0_4_ + auVar32._0_4_ + auVar7._0_4_;
    auVar31._4_4_ = fVar6 + auVar32._4_4_ + auVar7._4_4_;
    auVar31._8_4_ = fVar12 + auVar32._8_4_ + auVar7._8_4_;
    auVar31._12_4_ = fVar13 + auVar32._12_4_ + auVar7._12_4_;
  }
  if (param_3 == '\0') {
    auVar32 = *(undefined1 (*) [16])(param_1 + 0x16);
    auVar10._0_4_ = (uint)auVar31._0_4_ ^ _DAT_145fc6f10;
    auVar10._4_4_ = (uint)auVar31._4_4_ ^ _DAT_145fc6f10;
    auVar10._8_4_ = (uint)auVar31._8_4_ ^ _DAT_145fc6f10;
    auVar10._12_4_ = (uint)auVar31._12_4_ ^ _DAT_145fc6f10;
    auVar31 = vunpcklps_avx(auVar10,auVar31);
    auVar11._0_4_ =
         (auVar31._0_4_ + *(float *)(param_1 + 0x14)) * *(float *)(param_1 + 0x12) + auVar32._0_4_;
    auVar11._4_4_ =
         (auVar31._4_4_ + *(float *)((longlong)param_1 + 0xa4)) *
         *(float *)((longlong)param_1 + 0x94) + auVar32._4_4_;
    auVar11._8_4_ =
         (auVar31._8_4_ + *(float *)(param_1 + 0x15)) * *(float *)(param_1 + 0x13) + auVar32._8_4_;
    auVar11._12_4_ =
         (auVar31._12_4_ + *(float *)((longlong)param_1 + 0xac)) *
         *(float *)((longlong)param_1 + 0x9c) + auVar32._12_4_;
    auVar7 = vmaxps_avx(auVar11,ZEXT816(0));
    auVar31 = vsubps_avx(auVar7,auVar32);
    auVar31 = vhsubps_avx(auVar31,auVar31);
    uVar3 = auVar31._0_4_;
    auVar32._4_4_ = uVar3;
    auVar32._0_4_ = uVar3;
    auVar32._8_4_ = uVar3;
    auVar32._12_4_ = uVar3;
  }
  else {
    fVar6 = *(float *)((longlong)param_1 + 0xa4);
    fVar12 = *(float *)((longlong)param_1 + 0xb4);
    auVar18._4_4_ = fVar12;
    auVar18._0_4_ = fVar12;
    auVar18._8_4_ = fVar12;
    auVar18._12_4_ = fVar12;
    auVar9._0_4_ = (auVar31._0_4_ + fVar6) * *(float *)(param_1 + 0x12) + fVar12;
    auVar9._4_4_ = (auVar31._4_4_ + fVar6) * *(float *)((longlong)param_1 + 0x94) + fVar12;
    auVar9._8_4_ = (auVar31._8_4_ + fVar6) * *(float *)(param_1 + 0x13) + fVar12;
    auVar9._12_4_ = (auVar31._12_4_ + fVar6) * *(float *)((longlong)param_1 + 0x9c) + fVar12;
    auVar31 = vmaxps_avx(auVar9,ZEXT816(0));
    auVar32 = vsubps_avx(auVar18,auVar31);
    auVar7 = vunpcklps_avx(ZEXT816(0),auVar31);
  }
  auVar33 = ZEXT1664(auVar32);
  *(undefined1 (*) [16])(param_1 + 0x16) = auVar7;
  if (param_2 != '\0') {
    auVar31 = vcmpps_avx(ZEXT816(0) << 0x20,auVar7,1);
    uVar3 = vmovmskps_avx(auVar31);
    auVar31 = ZEXT816(0) << 0x20;
    if ((~(byte)uVar3 & 3) != 0) {
      auVar31 = auVar7;
    }
    *(undefined1 (*) [16])param_1[0x18] = auVar31;
  }
  if (plVar1 == (longlong *)0x0) {
    fVar6 = 0.0;
  }
  else {
    fVar6 = auVar32._0_4_ * *(float *)(param_1 + 6);
    fVar12 = auVar32._4_4_ * *(float *)((longlong)param_1 + 0x34);
    fVar13 = auVar32._8_4_ * *(float *)(param_1 + 7);
    fVar14 = auVar32._12_4_ * *(float *)((longlong)param_1 + 0x3c);
    auVar26._0_12_ = ZEXT812(0);
    auVar26._12_4_ = 0;
    fVar15 = auVar32._0_4_ * *(float *)(param_1 + 8);
    fVar19 = auVar32._4_4_ * *(float *)((longlong)param_1 + 0x44);
    fVar20 = auVar32._8_4_ * *(float *)(param_1 + 9);
    fVar21 = auVar32._12_4_ * *(float *)((longlong)param_1 + 0x4c);
    auVar24._0_4_ = fVar6 * fVar6;
    auVar24._4_4_ = fVar12 * fVar12;
    auVar24._8_4_ = fVar13 * fVar13;
    auVar24._12_4_ = fVar14 * fVar14;
    auVar28._0_4_ = fVar15 * fVar15;
    auVar28._4_4_ = fVar19 * fVar19;
    auVar28._8_4_ = fVar20 * fVar20;
    auVar28._12_4_ = fVar21 * fVar21;
    auVar31 = vblendps_avx(auVar24,auVar26,8);
    auVar7 = vblendps_avx(auVar28,auVar26,8);
    auVar31 = vhaddps_avx(auVar31,auVar31);
    auVar7 = vhaddps_avx(auVar7,auVar7);
    auVar16 = vhaddps_avx(auVar31,auVar31);
    auVar7 = vhaddps_avx(auVar7,auVar7);
    auVar31 = vrsqrtss_avx(auVar16,auVar16);
    fVar6 = auVar31._0_4_;
    auVar31 = vcmpss_avx(ZEXT416(_DAT_146159bfc),auVar16,2);
    fVar12 = (float)(auVar31._0_4_ &
                    (uint)(((_DAT_145fc6f08 * fVar6 * fVar6 * auVar16._0_4_ + _DAT_145fc6edc) *
                            fVar6 + fVar6) * auVar16._0_4_));
    auVar31 = vrsqrtss_avx(auVar7,auVar7);
    fVar6 = auVar31._0_4_;
    auVar31 = vcmpss_avx(ZEXT416(_DAT_146159bfc),auVar7,2);
    fVar6 = (float)(auVar31._0_4_ &
                   (uint)(((_DAT_145fc6f08 * fVar6 * fVar6 * auVar7._0_4_ + _DAT_145fc6edc) * fVar6
                          + fVar6) * auVar7._0_4_));
    if (-1 < (char)*(byte *)((longlong)plVar1 + 0x26e)) {
      if ((*(byte *)((longlong)plVar1 + 0x26e) & 2) == 0) {
        (**(code **)(*plVar1 + 0x38))(plVar1);
        (**(code **)(*plVar1 + 0x40))(plVar1);
        auVar32 = auVar33._0_16_;
      }
      else {
        FUN_145032800(plVar1 + 0x60,(char)param_1[0x19]);
        auVar32 = auVar33._0_16_;
      }
    }
    fVar6 = fVar6 + fVar12;
  }
  if (plVar2 != (longlong *)0x0) {
    fVar12 = auVar32._0_4_ * *(float *)(param_1 + 0xe);
    fVar13 = auVar32._4_4_ * *(float *)((longlong)param_1 + 0x74);
    fVar14 = auVar32._8_4_ * *(float *)(param_1 + 0xf);
    fVar15 = auVar32._12_4_ * *(float *)((longlong)param_1 + 0x7c);
    auVar29._0_12_ = ZEXT812(0);
    auVar29._12_4_ = 0;
    fVar19 = auVar32._0_4_ * *(float *)(param_1 + 0x10);
    fVar20 = auVar32._4_4_ * *(float *)((longlong)param_1 + 0x84);
    fVar21 = auVar32._8_4_ * *(float *)(param_1 + 0x11);
    fVar25 = auVar32._12_4_ * *(float *)((longlong)param_1 + 0x8c);
    auVar27._0_4_ = fVar12 * fVar12;
    auVar27._4_4_ = fVar13 * fVar13;
    auVar27._8_4_ = fVar14 * fVar14;
    auVar27._12_4_ = fVar15 * fVar15;
    auVar31 = vblendps_avx(auVar27,auVar29,8);
    auVar31 = vhaddps_avx(auVar31,auVar31);
    auVar7 = vhaddps_avx(auVar31,auVar31);
    auVar31 = vrsqrtss_avx(auVar7,auVar7);
    fVar12 = auVar31._0_4_;
    auVar32 = vcmpss_avx(ZEXT416(_DAT_146159bfc),auVar7,2);
    auVar30._0_4_ = fVar19 * fVar19;
    auVar30._4_4_ = fVar20 * fVar20;
    auVar30._8_4_ = fVar21 * fVar21;
    auVar30._12_4_ = fVar25 * fVar25;
    auVar31 = vblendps_avx(auVar30,auVar29,8);
    auVar31 = vhaddps_avx(auVar31,auVar31);
    auVar16 = vhaddps_avx(auVar31,auVar31);
    auVar31 = vrsqrtss_avx(auVar16,auVar16);
    fVar13 = auVar31._0_4_;
    fVar6 = (float)(auVar32._0_4_ &
                   (uint)(((_DAT_145fc6f08 * fVar12 * fVar12 * auVar7._0_4_ + _DAT_145fc6edc) *
                           fVar12 + fVar12) * auVar7._0_4_)) + fVar6;
    auVar31 = vcmpss_avx(ZEXT416(_DAT_146159bfc),auVar16,2);
    fVar12 = (float)(auVar31._0_4_ &
                    (uint)(((_DAT_145fc6f08 * fVar13 * fVar13 * auVar16._0_4_ + _DAT_145fc6edc) *
                            fVar13 + fVar13) * auVar16._0_4_));
    if (-1 < (char)*(byte *)((longlong)plVar2 + 0x26e)) {
      if ((*(byte *)((longlong)plVar2 + 0x26e) & 2) == 0) {
        (**(code **)(*plVar2 + 0x38))(plVar2);
        (**(code **)(*plVar2 + 0x40))(plVar2);
      }
      else {
        FUN_145032800(plVar2 + 0x60,*(undefined1 *)((longlong)param_1 + 0xc9));
      }
    }
    fVar6 = fVar6 + fVar12;
  }
  return fVar6;
}

