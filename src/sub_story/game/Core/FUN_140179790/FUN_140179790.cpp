// Recovered from game_scarlett_master.exe (GTA VI, Xbox Series X, PE32+ x64)
// Address: 140179790  size: 1547 bytes
// Name:    FUN_140179790
// Subsystem: core
//
// Referenced strings (0 in this body, 0 including direct callees):
// Callees: FUN_145032800, FUN_145031fd0
//
// Generated decompilation. Formatting follows MiscRef/GTAVSRC conventions;
// identifiers are recovered, not original. See ../../../README.md.

#include "gta6decomp/rage_types.h"


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

float FUN_140179790(longlong *param_1,char param_2)

{
  longlong *plVar1;
  longlong *plVar2;
  undefined4 uVar3;
  longlong lVar4;
  undefined1 (*pauVar5) [16];
  float *pfVar6;
  float fVar14;
  undefined1 auVar7 [16];
  undefined1 auVar8 [16];
  undefined1 auVar9 [16];
  undefined1 auVar10 [16];
  undefined1 auVar11 [16];
  float fVar15;
  undefined1 auVar12 [16];
  undefined1 auVar13 [16];
  float fVar23;
  undefined1 auVar16 [16];
  undefined1 auVar17 [16];
  undefined1 auVar18 [16];
  float fVar24;
  undefined1 auVar19 [16];
  undefined1 auVar20 [16];
  undefined1 auVar21 [16];
  undefined1 auVar22 [16];
  float fVar25;
  float fVar29;
  float fVar30;
  undefined1 auVar26 [16];
  float fVar31;
  undefined1 auVar27 [16];
  undefined1 auVar28 [16];
  undefined1 auVar32 [16];
  undefined1 auVar33 [16];
  undefined1 auVar34 [16];
  undefined1 auVar35 [16];
  undefined1 auVar36 [16];
  float unaff_XMM6_Da;
  float unaff_XMM6_Db;
  float unaff_XMM6_Dc;
  float unaff_XMM6_Dd;
  undefined1 auVar37 [16];
  undefined1 in_ZMM8 [64];
  undefined1 auVar38 [16];
  undefined1 auVar39 [16];
  undefined1 auVar40 [16];
  undefined1 auVar41 [16];
  undefined1 auVar42 [64];
  float fVar43;
  
  plVar1 = (longlong *)*param_1;
  plVar2 = (longlong *)param_1[1];
  if (plVar1 == (longlong *)0x0) {
    auVar40._0_12_ = ZEXT812(0);
    auVar40._12_4_ = 0.0;
  }
  else {
    if ((*(byte *)((longlong)plVar1 + 0x26e) & 2) == 0) {
      pauVar5 = (undefined1 (*) [16])(plVar1 + 0x1c);
    }
    else {
      lVar4 = FUN_145031fd0(plVar1 + 0x60,(char)param_1[0x33]);
      pauVar5 = (undefined1 (*) [16])(lVar4 + 0x10);
    }
    auVar40 = *pauVar5;
    in_ZMM8 = ZEXT1664(auVar40);
    auVar16._0_12_ = ZEXT812(0);
    auVar16._12_4_ = 0;
    auVar7._0_4_ = auVar40._0_4_ * *(float *)(param_1 + 2);
    auVar7._4_4_ = auVar40._4_4_ * *(float *)((longlong)param_1 + 0x14);
    auVar7._8_4_ = auVar40._8_4_ * *(float *)(param_1 + 3);
    auVar7._12_4_ = auVar40._12_4_ * *(float *)((longlong)param_1 + 0x1c);
    auVar40 = vblendps_avx(auVar7,auVar16,8);
    auVar40 = vhaddps_avx(auVar40,auVar40);
    auVar40 = vhaddps_avx(auVar40,auVar40);
  }
  auVar7 = in_ZMM8._0_16_;
  auVar42 = ZEXT1664(auVar40);
  if (plVar2 != (longlong *)0x0) {
    if ((*(byte *)((longlong)plVar2 + 0x26e) & 2) == 0) {
      pfVar6 = (float *)(plVar2 + 0x1c);
    }
    else {
      lVar4 = FUN_145031fd0(plVar2 + 0x60,*(undefined1 *)((longlong)param_1 + 0x199));
      auVar7 = in_ZMM8._0_16_;
      auVar40 = auVar42._0_16_;
      pfVar6 = (float *)(lVar4 + 0x10);
    }
    unaff_XMM6_Da = *pfVar6;
    unaff_XMM6_Db = pfVar6[1];
    unaff_XMM6_Dc = pfVar6[2];
    unaff_XMM6_Dd = pfVar6[3];
    auVar17._0_12_ = ZEXT812(0);
    auVar17._12_4_ = 0;
    auVar8._0_4_ = unaff_XMM6_Da * *(float *)(param_1 + 8);
    auVar8._4_4_ = unaff_XMM6_Db * *(float *)((longlong)param_1 + 0x44);
    auVar8._8_4_ = unaff_XMM6_Dc * *(float *)(param_1 + 9);
    auVar8._12_4_ = unaff_XMM6_Dd * *(float *)((longlong)param_1 + 0x4c);
    auVar16 = vblendps_avx(auVar8,auVar17,8);
    auVar16 = vhaddps_avx(auVar16,auVar16);
    auVar16 = vhaddps_avx(auVar16,auVar16);
    auVar38._0_4_ = auVar40._0_4_ + auVar16._0_4_;
    auVar38._4_4_ = auVar40._4_4_ + auVar16._4_4_;
    auVar38._8_4_ = auVar40._8_4_ + auVar16._8_4_;
    auVar38._12_4_ = auVar40._12_4_ + auVar16._12_4_;
    auVar40 = auVar38;
  }
  if ((char)param_1[0x15] != '\x02') {
    fVar43 = _DAT_145fc6f48;
    if ((char)param_1[0x15] == '\0') {
      fVar43 = _DAT_145fc6ed8;
    }
    auVar16 = *(undefined1 (*) [16])(param_1 + 0x1a);
    auVar41._0_12_ = ZEXT812(0);
    auVar41._12_4_ = 0;
    auVar28._0_4_ =
         ((-(auVar16._0_4_ * *(float *)(param_1 + 0x1e)) - auVar40._0_4_ * fVar43) +
         *(float *)(param_1 + 0x18)) * *(float *)(param_1 + 0x16) + auVar16._0_4_;
    auVar28._4_4_ =
         ((-(auVar16._4_4_ * *(float *)((longlong)param_1 + 0xf4)) - auVar40._4_4_ * fVar43) +
         *(float *)((longlong)param_1 + 0xc4)) * *(float *)((longlong)param_1 + 0xb4) +
         auVar16._4_4_;
    auVar28._8_4_ =
         ((-(auVar16._8_4_ * *(float *)(param_1 + 0x1f)) - auVar40._8_4_ * fVar43) +
         *(float *)(param_1 + 0x19)) * *(float *)(param_1 + 0x17) + auVar16._8_4_;
    auVar28._12_4_ =
         ((-(auVar16._12_4_ * *(float *)((longlong)param_1 + 0xfc)) - auVar40._12_4_ * fVar43) +
         *(float *)((longlong)param_1 + 0xcc)) * *(float *)((longlong)param_1 + 0xbc) +
         auVar16._12_4_;
    auVar40 = vmaxps_avx(auVar28,auVar41);
    auVar40 = vminps_avx(auVar40,*(undefined1 (*) [16])(param_1 + 0x1c));
    auVar16 = vsubps_avx(auVar40,auVar16);
    *(undefined1 (*) [16])(param_1 + 0x1a) = auVar40;
    fVar14 = auVar16._0_4_ * fVar43;
    fVar15 = auVar16._4_4_ * fVar43;
    fVar23 = auVar16._8_4_ * fVar43;
    fVar43 = auVar16._12_4_ * fVar43;
    if (plVar1 != (longlong *)0x0) {
      auVar37._0_4_ = fVar14 * *(float *)(param_1 + 6) + auVar7._0_4_;
      auVar37._4_4_ = fVar15 * *(float *)((longlong)param_1 + 0x34) + auVar7._4_4_;
      auVar37._8_4_ = fVar23 * *(float *)(param_1 + 7) + auVar7._8_4_;
      auVar37._12_4_ = fVar43 * *(float *)((longlong)param_1 + 0x3c) + auVar7._12_4_;
      auVar22._0_4_ = auVar37._0_4_ * *(float *)(param_1 + 2);
      auVar22._4_4_ = auVar37._4_4_ * *(float *)((longlong)param_1 + 0x14);
      auVar22._8_4_ = auVar37._8_4_ * *(float *)(param_1 + 3);
      auVar22._12_4_ = auVar37._12_4_ * *(float *)((longlong)param_1 + 0x1c);
      auVar40 = vblendps_avx(auVar22,ZEXT816(0) << 0x20,8);
      auVar40 = vhaddps_avx(auVar40,auVar40);
      auVar41 = vhaddps_avx(auVar40,auVar40);
      auVar7 = auVar37;
    }
    auVar40 = auVar41;
    if (plVar2 != (longlong *)0x0) {
      unaff_XMM6_Da = fVar14 * *(float *)(param_1 + 0xc) + unaff_XMM6_Da;
      unaff_XMM6_Db = fVar15 * *(float *)((longlong)param_1 + 100) + unaff_XMM6_Db;
      unaff_XMM6_Dc = fVar23 * *(float *)(param_1 + 0xd) + unaff_XMM6_Dc;
      unaff_XMM6_Dd = fVar43 * *(float *)((longlong)param_1 + 0x6c) + unaff_XMM6_Dd;
      auVar12._0_4_ = unaff_XMM6_Da * *(float *)(param_1 + 8);
      auVar12._4_4_ = unaff_XMM6_Db * *(float *)((longlong)param_1 + 0x44);
      auVar12._8_4_ = unaff_XMM6_Dc * *(float *)(param_1 + 9);
      auVar12._12_4_ = unaff_XMM6_Dd * *(float *)((longlong)param_1 + 0x4c);
      auVar40 = vblendps_avx(auVar12,ZEXT816(0) << 0x20,8);
      auVar40 = vhaddps_avx(auVar40,auVar40);
      auVar16 = vhaddps_avx(auVar40,auVar40);
      auVar40._0_4_ = auVar41._0_4_ + auVar16._0_4_;
      auVar40._4_4_ = auVar41._4_4_ + auVar16._4_4_;
      auVar40._8_4_ = auVar41._8_4_ + auVar16._8_4_;
      auVar40._12_4_ = auVar41._12_4_ + auVar16._12_4_;
    }
  }
  auVar16 = *(undefined1 (*) [16])(param_1 + 0x30);
  auVar9._0_12_ = ZEXT812(0);
  auVar9._12_4_ = 0;
  auVar8 = vcmpps_avx(auVar16,auVar9,4);
  if ((((SUB161(auVar8 >> 0x1f,0) & 1) != 0 || (SUB161(auVar8 >> 0x3f,0) & 1) != 0) ||
      (SUB161(auVar8 >> 0x5f,0) & 1) != 0) || auVar8[0xf] < '\0') {
    auVar17 = vsubps_avx(auVar40,*(undefined1 (*) [16])(param_1 + 0x24));
    auVar40 = *(undefined1 (*) [16])(param_1 + 0x2c);
    auVar8 = *(undefined1 (*) [16])(param_1 + 0x2e);
    auVar38 = vsubps_avx(auVar17,*(undefined1 (*) [16])(param_1 + 0x26));
    auVar17 = vsubps_avx(auVar17,*(undefined1 (*) [16])(param_1 + 0x28));
    auVar38 = vminps_avx(auVar38,auVar9);
    auVar17 = vmaxps_avx(auVar17,auVar9);
    auVar20._0_4_ =
         -((auVar40._0_4_ * auVar16._0_4_ + auVar17._0_4_ + auVar38._0_4_) *
          *(float *)(param_1 + 0x22)) + auVar40._0_4_;
    auVar20._4_4_ =
         -((auVar40._4_4_ * auVar16._4_4_ + auVar17._4_4_ + auVar38._4_4_) *
          *(float *)((longlong)param_1 + 0x114)) + auVar40._4_4_;
    auVar20._8_4_ =
         -((auVar40._8_4_ * auVar16._8_4_ + auVar17._8_4_ + auVar38._8_4_) *
          *(float *)(param_1 + 0x23)) + auVar40._8_4_;
    auVar20._12_4_ =
         -((auVar40._12_4_ * auVar16._12_4_ + auVar17._12_4_ + auVar38._12_4_) *
          *(float *)((longlong)param_1 + 0x11c)) + auVar40._12_4_;
    auVar27._0_4_ = auVar8._0_4_ ^ _DAT_145fc6f10;
    auVar27._4_4_ = auVar8._4_4_ ^ _DAT_145fc6f10;
    auVar27._8_4_ = auVar8._8_4_ ^ _DAT_145fc6f10;
    auVar27._12_4_ = auVar8._12_4_ ^ _DAT_145fc6f10;
    auVar16 = vmaxps_avx(auVar20,auVar27);
    auVar16 = vminps_avx(auVar16,auVar8);
    *(undefined1 (*) [16])(param_1 + 0x2c) = auVar16;
    auVar16 = vsubps_avx(auVar16,auVar40);
    if (plVar1 != (longlong *)0x0) {
      auVar13._0_4_ =
           (auVar16._0_4_ * *(float *)(param_1 + 6) + auVar7._0_4_) * *(float *)(param_1 + 2);
      auVar13._4_4_ =
           (auVar16._4_4_ * *(float *)((longlong)param_1 + 0x34) + auVar7._4_4_) *
           *(float *)((longlong)param_1 + 0x14);
      auVar13._8_4_ =
           (auVar16._8_4_ * *(float *)(param_1 + 7) + auVar7._8_4_) * *(float *)(param_1 + 3);
      auVar13._12_4_ =
           (auVar16._12_4_ * *(float *)((longlong)param_1 + 0x3c) + auVar7._12_4_) *
           *(float *)((longlong)param_1 + 0x1c);
      auVar40 = vblendps_avx(auVar13,ZEXT416(0) << 0x20,8);
      auVar40 = vhaddps_avx(auVar40,auVar40);
      auVar9 = vhaddps_avx(auVar40,auVar40);
    }
    auVar40 = auVar9;
    if (plVar2 != (longlong *)0x0) {
      auVar21._0_4_ =
           (auVar16._0_4_ * *(float *)(param_1 + 0xc) + unaff_XMM6_Da) * *(float *)(param_1 + 8);
      auVar21._4_4_ =
           (auVar16._4_4_ * *(float *)((longlong)param_1 + 100) + unaff_XMM6_Db) *
           *(float *)((longlong)param_1 + 0x44);
      auVar21._8_4_ =
           (auVar16._8_4_ * *(float *)(param_1 + 0xd) + unaff_XMM6_Dc) * *(float *)(param_1 + 9);
      auVar21._12_4_ =
           (auVar16._12_4_ * *(float *)((longlong)param_1 + 0x6c) + unaff_XMM6_Dd) *
           *(float *)((longlong)param_1 + 0x4c);
      auVar40 = vblendps_avx(auVar21,ZEXT816(0) << 0x40,8);
      auVar40 = vhaddps_avx(auVar40,auVar40);
      auVar7 = vhaddps_avx(auVar40,auVar40);
      auVar40._0_4_ = auVar7._0_4_ + auVar9._0_4_;
      auVar40._4_4_ = auVar7._4_4_ + auVar9._4_4_;
      auVar40._8_4_ = auVar7._8_4_ + auVar9._8_4_;
      auVar40._12_4_ = auVar7._12_4_ + auVar9._12_4_;
    }
  }
  auVar7 = *(undefined1 (*) [16])(param_1 + 0x12);
  auVar18._0_12_ = ZEXT812(0);
  auVar18._12_4_ = 0;
  auVar10._0_4_ = auVar40._0_4_ ^ _DAT_145fc6f10;
  auVar10._4_4_ = auVar40._4_4_ ^ _DAT_145fc6f10;
  auVar10._8_4_ = auVar40._8_4_ ^ _DAT_145fc6f10;
  auVar10._12_4_ = auVar40._12_4_ ^ _DAT_145fc6f10;
  auVar40 = vunpcklps_avx(auVar10,auVar40);
  auVar11._0_4_ =
       (auVar40._0_4_ + *(float *)(param_1 + 0x10)) * *(float *)(param_1 + 0xe) + auVar7._0_4_;
  auVar11._4_4_ =
       (auVar40._4_4_ + *(float *)((longlong)param_1 + 0x84)) * *(float *)((longlong)param_1 + 0x74)
       + auVar7._4_4_;
  auVar11._8_4_ =
       (auVar40._8_4_ + *(float *)(param_1 + 0x11)) * *(float *)(param_1 + 0xf) + auVar7._8_4_;
  auVar11._12_4_ =
       (auVar40._12_4_ + *(float *)((longlong)param_1 + 0x8c)) *
       *(float *)((longlong)param_1 + 0x7c) + auVar7._12_4_;
  auVar16 = vmaxps_avx(auVar11,auVar18);
  auVar40 = vsubps_avx(auVar16,auVar7);
  *(undefined1 (*) [16])(param_1 + 0x12) = auVar16;
  auVar40 = vhsubps_avx(auVar40,auVar40);
  if (param_2 != '\0') {
    auVar7 = vcmpps_avx(auVar18,auVar16,1);
    uVar3 = vmovmskps_avx(auVar7);
    if ((~(byte)uVar3 & 3) != 0) {
      auVar18 = auVar16;
    }
    *(undefined1 (*) [16])param_1[0x14] = auVar18;
    if ((char)param_1[0x15] != '\x02') {
      *(int *)param_1[0x20] = (int)param_1[0x1a];
    }
    auVar19._0_12_ = ZEXT812(0);
    auVar19._12_4_ = 0;
    auVar7 = vcmpps_avx(auVar19,*(undefined1 (*) [16])(param_1 + 0x30),4);
    if ((((SUB161(auVar7 >> 0x1f,0) & 1) != 0 || (SUB161(auVar7 >> 0x3f,0) & 1) != 0) ||
        (SUB161(auVar7 >> 0x5f,0) & 1) != 0) || auVar7[0xf] < '\0') {
      *(int *)param_1[0x32] = (int)param_1[0x2c];
    }
  }
  fVar43 = auVar40._0_4_;
  auVar39._4_4_ = fVar43;
  auVar39._0_4_ = fVar43;
  auVar39._8_4_ = fVar43;
  auVar39._12_4_ = fVar43;
  auVar42 = ZEXT1664(auVar39);
  if (plVar1 == (longlong *)0x0) {
    fVar43 = 0.0;
  }
  else {
    fVar14 = fVar43 * *(float *)((longlong)param_1 + 0x24);
    fVar15 = fVar43 * *(float *)((longlong)param_1 + 0x2c);
    auVar32._0_12_ = ZEXT812(0);
    auVar32._12_4_ = 0;
    fVar23 = fVar43 * *(float *)((longlong)param_1 + 0x34);
    fVar24 = fVar43 * *(float *)((longlong)param_1 + 0x3c);
    auVar26._0_4_ = fVar43 * *(float *)(param_1 + 4) * fVar43 * *(float *)(param_1 + 4);
    auVar26._4_4_ = fVar14 * fVar14;
    auVar26._8_4_ = fVar43 * *(float *)(param_1 + 5) * fVar43 * *(float *)(param_1 + 5);
    auVar26._12_4_ = fVar15 * fVar15;
    auVar34._0_4_ = fVar43 * *(float *)(param_1 + 6) * fVar43 * *(float *)(param_1 + 6);
    auVar34._4_4_ = fVar23 * fVar23;
    auVar34._8_4_ = fVar43 * *(float *)(param_1 + 7) * fVar43 * *(float *)(param_1 + 7);
    auVar34._12_4_ = fVar24 * fVar24;
    auVar40 = vblendps_avx(auVar26,auVar32,8);
    auVar7 = vblendps_avx(auVar34,auVar32,8);
    auVar40 = vhaddps_avx(auVar40,auVar40);
    auVar7 = vhaddps_avx(auVar7,auVar7);
    auVar16 = vhaddps_avx(auVar40,auVar40);
    auVar7 = vhaddps_avx(auVar7,auVar7);
    auVar40 = vrsqrtss_avx(auVar16,auVar16);
    fVar43 = auVar40._0_4_;
    auVar40 = vcmpss_avx(ZEXT416(_DAT_146159bfc),auVar16,2);
    fVar14 = (float)(auVar40._0_4_ &
                    (uint)(((_DAT_145fc6f08 * fVar43 * fVar43 * auVar16._0_4_ + _DAT_145fc6edc) *
                            fVar43 + fVar43) * auVar16._0_4_));
    auVar40 = vrsqrtss_avx(auVar7,auVar7);
    fVar43 = auVar40._0_4_;
    auVar40 = vcmpss_avx(ZEXT416(_DAT_146159bfc),auVar7,2);
    fVar43 = (float)(auVar40._0_4_ &
                    (uint)(((_DAT_145fc6f08 * fVar43 * fVar43 * auVar7._0_4_ + _DAT_145fc6edc) *
                            fVar43 + fVar43) * auVar7._0_4_));
    if (-1 < (char)*(byte *)((longlong)plVar1 + 0x26e)) {
      if ((*(byte *)((longlong)plVar1 + 0x26e) & 2) == 0) {
        (**(code **)(*plVar1 + 0x38))(plVar1);
        (**(code **)(*plVar1 + 0x40))(plVar1);
        auVar39 = auVar42._0_16_;
      }
      else {
        FUN_145032800(plVar1 + 0x60,(char)param_1[0x33]);
        auVar39 = auVar42._0_16_;
      }
    }
    fVar43 = fVar43 + fVar14;
  }
  if (plVar2 != (longlong *)0x0) {
    fVar14 = auVar39._0_4_ * *(float *)(param_1 + 10);
    fVar15 = auVar39._4_4_ * *(float *)((longlong)param_1 + 0x54);
    fVar23 = auVar39._8_4_ * *(float *)(param_1 + 0xb);
    fVar24 = auVar39._12_4_ * *(float *)((longlong)param_1 + 0x5c);
    auVar35._0_12_ = ZEXT812(0);
    auVar35._12_4_ = 0;
    fVar25 = auVar39._0_4_ * *(float *)(param_1 + 0xc);
    fVar29 = auVar39._4_4_ * *(float *)((longlong)param_1 + 100);
    fVar30 = auVar39._8_4_ * *(float *)(param_1 + 0xd);
    fVar31 = auVar39._12_4_ * *(float *)((longlong)param_1 + 0x6c);
    auVar33._0_4_ = fVar14 * fVar14;
    auVar33._4_4_ = fVar15 * fVar15;
    auVar33._8_4_ = fVar23 * fVar23;
    auVar33._12_4_ = fVar24 * fVar24;
    auVar40 = vblendps_avx(auVar33,auVar35,8);
    auVar40 = vhaddps_avx(auVar40,auVar40);
    auVar16 = vhaddps_avx(auVar40,auVar40);
    auVar40 = vrsqrtss_avx(auVar16,auVar16);
    fVar14 = auVar40._0_4_;
    auVar7 = vcmpss_avx(ZEXT416(_DAT_146159bfc),auVar16,2);
    auVar36._0_4_ = fVar25 * fVar25;
    auVar36._4_4_ = fVar29 * fVar29;
    auVar36._8_4_ = fVar30 * fVar30;
    auVar36._12_4_ = fVar31 * fVar31;
    auVar40 = vblendps_avx(auVar36,auVar35,8);
    auVar40 = vhaddps_avx(auVar40,auVar40);
    auVar8 = vhaddps_avx(auVar40,auVar40);
    auVar40 = vrsqrtss_avx(auVar8,auVar8);
    fVar15 = auVar40._0_4_;
    fVar43 = (float)(auVar7._0_4_ &
                    (uint)(((_DAT_145fc6f08 * fVar14 * fVar14 * auVar16._0_4_ + _DAT_145fc6edc) *
                            fVar14 + fVar14) * auVar16._0_4_)) + fVar43;
    auVar40 = vcmpss_avx(ZEXT416(_DAT_146159bfc),auVar8,2);
    fVar14 = (float)(auVar40._0_4_ &
                    (uint)(((_DAT_145fc6f08 * fVar15 * fVar15 * auVar8._0_4_ + _DAT_145fc6edc) *
                            fVar15 + fVar15) * auVar8._0_4_));
    if (-1 < (char)*(byte *)((longlong)plVar2 + 0x26e)) {
      if ((*(byte *)((longlong)plVar2 + 0x26e) & 2) == 0) {
        (**(code **)(*plVar2 + 0x38))(plVar2);
        (**(code **)(*plVar2 + 0x40))(plVar2);
      }
      else {
        FUN_145032800(plVar2 + 0x60,*(undefined1 *)((longlong)param_1 + 0x199));
      }
    }
    fVar43 = fVar43 + fVar14;
  }
  return fVar43;
}

