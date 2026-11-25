// Recovered from game_scarlett_master.exe (GTA VI, Xbox Series X, PE32+ x64)
// Address: 1400622e0  size: 991 bytes
// Name:    FUN_1400622e0
// Subsystem: core
//
// Referenced strings (0 in this body, 0 including direct callees):
// Callees: 
//
// Generated decompilation. Formatting follows MiscRef/GTAVSRC conventions;
// identifiers are recovered, not original. See ../../../README.md.

#include "gta6decomp/rage_types.h"


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1400622e0(longlong param_1,float *param_2)

{
  float fVar1;
  float fVar2;
  float fVar3;
  float fVar4;
  float fVar5;
  ulonglong uVar6;
  byte bVar7;
  short sVar8;
  short sVar9;
  float fVar10;
  undefined1 auVar11 [16];
  undefined1 auVar12 [16];
  undefined1 auVar13 [16];
  undefined1 auVar14 [16];
  undefined1 auVar15 [16];
  undefined1 auVar16 [16];
  undefined1 auVar17 [16];
  float fVar18;
  float fVar23;
  float fVar24;
  undefined1 auVar19 [16];
  undefined1 auVar20 [16];
  float fVar25;
  undefined1 auVar21 [16];
  undefined1 auVar22 [16];
  undefined1 auVar26 [16];
  undefined1 auVar27 [16];
  
  auVar13._0_12_ = ZEXT812(0);
  auVar13._12_4_ = 0;
  bVar7 = 1;
  if ((*(uint *)(param_1 + 0x104) & 0x1006d) == 0) {
    bVar7 = (byte)*(uint *)(param_1 + 0x104) >> 1 & 1;
  }
  *(byte *)(param_1 + 1) = bVar7;
  fVar18 = _DAT_145fc6f00;
  auVar11._0_4_ = *(float *)(param_1 + 0xc0) * *(float *)(param_1 + 0xc0);
  auVar11._4_4_ = *(float *)(param_1 + 0xc4) * *(float *)(param_1 + 0xc4);
  auVar11._8_4_ = *(float *)(param_1 + 200) * *(float *)(param_1 + 200);
  auVar11._12_4_ = *(float *)(param_1 + 0xcc) * *(float *)(param_1 + 0xcc);
  auVar11 = vblendps_avx(auVar11,auVar13,8);
  auVar11 = vhaddps_avx(auVar11,auVar11);
  auVar11 = vhaddps_avx(auVar11,auVar11);
  fVar23 = auVar11._0_4_;
  *(bool *)param_1 = _DAT_145fc6f00 < fVar23;
  fVar25 = _DAT_145fc6f08;
  fVar10 = _DAT_145fc6edc;
  if (fVar18 < fVar23) {
    auVar19 = vrsqrtss_avx(auVar11,auVar11);
    fVar18 = auVar19._0_4_;
    auVar11 = vcmpss_avx(ZEXT416(_DAT_146159bfc),auVar11,2);
    *(uint *)(param_1 + 0xf0) =
         auVar11._0_4_ &
         (uint)(((fVar18 * fVar18 * fVar23 * _DAT_145fc6f08 + _DAT_145fc6edc) * fVar18 + fVar18) *
               fVar23);
    *(undefined8 *)(param_1 + 0xd0) = *(undefined8 *)(param_1 + 0xc0);
    *(undefined8 *)(param_1 + 0xd8) = *(undefined8 *)(param_1 + 200);
    uVar6 = _DAT_146159bc0;
    fVar2 = *(float *)(param_1 + 0xd0);
    fVar3 = *(float *)(param_1 + 0xd4);
    fVar4 = *(float *)(param_1 + 0xd8);
    fVar5 = *(float *)(param_1 + 0xdc);
    auVar19._0_4_ = fVar2 * fVar2;
    auVar19._4_4_ = fVar3 * fVar3;
    auVar19._8_4_ = fVar4 * fVar4;
    auVar19._12_4_ = fVar5 * fVar5;
    auVar11 = vblendps_avx(auVar19,auVar13,8);
    auVar11 = vhaddps_avx(auVar11,auVar11);
    auVar19 = vhaddps_avx(auVar11,auVar11);
    auVar11 = vrsqrtps_avx(auVar19);
    fVar18 = auVar11._0_4_;
    fVar23 = auVar11._4_4_;
    fVar24 = auVar11._8_4_;
    fVar1 = auVar11._12_4_;
    auVar11 = vcmpps_avx(auVar13,auVar19,1);
    auVar15._0_4_ =
         (float)(auVar11._0_4_ &
                (uint)(((fVar25 * fVar18 * fVar18 * auVar19._0_4_ - fVar25) * fVar18 + fVar18) *
                      fVar2));
    auVar15._4_4_ =
         (float)(auVar11._4_4_ &
                (uint)(((fVar25 * fVar23 * fVar23 * auVar19._4_4_ - fVar25) * fVar23 + fVar23) *
                      fVar3));
    auVar15._8_4_ =
         (float)(auVar11._8_4_ &
                (uint)(((fVar25 * fVar24 * fVar24 * auVar19._8_4_ - fVar25) * fVar24 + fVar24) *
                      fVar4));
    auVar15._12_4_ =
         (float)(auVar11._12_4_ &
                (uint)(((fVar25 * fVar1 * fVar1 * auVar19._12_4_ - fVar25) * fVar1 + fVar1) * fVar5)
                );
    auVar20._8_8_ = 0;
    auVar20._0_8_ = _DAT_146159bc0;
    auVar11 = vshufps_avx(auVar15,auVar15,0xc9);
    *(undefined1 (*) [16])(param_1 + 0xd0) = auVar15;
    auVar19 = vshufps_avx(auVar20,auVar20,0xc9);
    auVar20 = vshufps_avx(auVar15,auVar15,0xd2);
    *(float *)(param_1 + 0xb0) = -((float)uVar6 * auVar20._0_4_) + auVar11._0_4_ * auVar19._0_4_;
    *(float *)(param_1 + 0xb4) =
         -((float)(uVar6 >> 0x20) * auVar20._4_4_) + auVar11._4_4_ * auVar19._4_4_;
    *(float *)(param_1 + 0xb8) = -(auVar20._8_4_ * 0.0) + auVar11._8_4_ * auVar19._8_4_;
    *(float *)(param_1 + 0xbc) = -(auVar20._12_4_ * 0.0) + auVar11._12_4_ * auVar19._12_4_;
    *(undefined4 *)(param_1 + 0xb8) = 0;
    fVar2 = *(float *)(param_1 + 0xb0);
    fVar3 = *(float *)(param_1 + 0xb4);
    fVar4 = *(float *)(param_1 + 0xb8);
    fVar5 = *(float *)(param_1 + 0xbc);
    auVar26._0_4_ = fVar2 * fVar2;
    auVar26._4_4_ = fVar3 * fVar3;
    auVar26._8_4_ = fVar4 * fVar4;
    auVar26._12_4_ = fVar5 * fVar5;
    auVar11 = vblendps_avx(auVar26,auVar13,8);
    auVar11 = vhaddps_avx(auVar11,auVar11);
    auVar19 = vhaddps_avx(auVar11,auVar11);
    auVar11 = vrsqrtps_avx(auVar19);
    fVar18 = auVar11._0_4_;
    fVar23 = auVar11._4_4_;
    fVar24 = auVar11._8_4_;
    fVar1 = auVar11._12_4_;
    auVar11 = vcmpps_avx(auVar13,auVar19,1);
    fVar18 = (float)(auVar11._0_4_ &
                    (uint)(((fVar25 * fVar18 * fVar18 * auVar19._0_4_ - fVar25) * fVar18 + fVar18) *
                          fVar2));
    fVar23 = (float)(auVar11._4_4_ &
                    (uint)(((fVar25 * fVar23 * fVar23 * auVar19._4_4_ - fVar25) * fVar23 + fVar23) *
                          fVar3));
    fVar24 = (float)(auVar11._8_4_ &
                    (uint)(((fVar25 * fVar24 * fVar24 * auVar19._8_4_ - fVar25) * fVar24 + fVar24) *
                          fVar4));
    fVar25 = (float)(auVar11._12_4_ &
                    (uint)(((fVar25 * fVar1 * fVar1 * auVar19._12_4_ - fVar25) * fVar1 + fVar1) *
                          fVar5));
    *(float *)(param_1 + 0xb0) = fVar18;
    *(float *)(param_1 + 0xb4) = fVar23;
    *(float *)(param_1 + 0xb8) = fVar24;
    *(float *)(param_1 + 0xbc) = fVar25;
    auVar11 = *(undefined1 (*) [16])(param_1 + 0x10);
    auVar21._0_4_ = fVar18 * auVar11._0_4_;
    auVar21._4_4_ = fVar23 * auVar11._4_4_;
    auVar21._8_4_ = fVar24 * auVar11._8_4_;
    auVar21._12_4_ = fVar25 * auVar11._12_4_;
    auVar13 = vblendps_avx(auVar21,auVar13,8);
    auVar13 = vhaddps_avx(auVar13,auVar13);
    auVar13 = vhaddps_avx(auVar13,auVar13);
    *(uint *)(param_1 + 0xf4) = auVar13._0_4_ ^ _DAT_145fc6f10;
    if (bVar7 == 0) {
      fVar10 = *param_2 + _DAT_145fc6ed8;
    }
    auVar14._0_4_ = fVar10 * *(float *)(param_1 + 0x50);
    auVar14._4_4_ = fVar10 * *(float *)(param_1 + 0x54);
    auVar14._8_4_ = fVar10 * *(float *)(param_1 + 0x58);
    auVar14._12_4_ = fVar10 * *(float *)(param_1 + 0x5c);
    auVar13 = vsubps_avx(auVar11,auVar14);
    *(undefined1 (*) [16])(param_1 + 0x70) = auVar13;
    auVar22._0_4_ = fVar10 * *(float *)(param_1 + 0x60);
    auVar22._4_4_ = fVar10 * *(float *)(param_1 + 100);
    auVar22._8_4_ = fVar10 * *(float *)(param_1 + 0x68);
    auVar22._12_4_ = fVar10 * *(float *)(param_1 + 0x6c);
    auVar13 = *(undefined1 (*) [16])(param_1 + 0x20);
    auVar12._0_4_ = fVar10 * auVar15._0_4_;
    auVar12._4_4_ = fVar10 * auVar15._4_4_;
    auVar12._8_4_ = fVar10 * auVar15._8_4_;
    auVar12._12_4_ = fVar10 * auVar15._12_4_;
    auVar19 = vsubps_avx(auVar13,auVar22);
    *(undefined1 (*) [16])(param_1 + 0x80) = auVar19;
    *(float *)(param_1 + 0x90) = auVar14._0_4_ + auVar11._0_4_;
    *(float *)(param_1 + 0x94) = auVar14._4_4_ + auVar11._4_4_;
    *(float *)(param_1 + 0x98) = auVar14._8_4_ + auVar11._8_4_;
    *(float *)(param_1 + 0x9c) = auVar14._12_4_ + auVar11._12_4_;
    *(float *)(param_1 + 0xa0) = auVar13._0_4_ + auVar22._0_4_;
    *(float *)(param_1 + 0xa4) = auVar13._4_4_ + auVar22._4_4_;
    *(float *)(param_1 + 0xa8) = auVar13._8_4_ + auVar22._8_4_;
    *(float *)(param_1 + 0xac) = auVar13._12_4_ + auVar22._12_4_;
    *(undefined4 *)(param_1 + 0x7c) = 1;
    *(undefined4 *)(param_1 + 0x8c) = 2;
    *(undefined4 *)(param_1 + 0x9c) = 1;
    *(undefined4 *)(param_1 + 0xac) = 2;
    auVar16._0_4_ = auVar12._0_4_ + *(float *)(param_1 + 0x80);
    auVar16._4_4_ = auVar12._4_4_ + *(float *)(param_1 + 0x84);
    auVar16._8_4_ = auVar12._8_4_ + *(float *)(param_1 + 0x88);
    auVar16._12_4_ = auVar12._12_4_ + *(float *)(param_1 + 0x8c);
    auVar27._0_4_ = auVar12._0_4_ + *(float *)(param_1 + 0xa0);
    auVar27._4_4_ = auVar12._4_4_ + *(float *)(param_1 + 0xa4);
    auVar27._8_4_ = auVar12._8_4_ + *(float *)(param_1 + 0xa8);
    auVar27._12_4_ = auVar12._12_4_ + *(float *)(param_1 + 0xac);
    auVar21 = vsubps_avx(*(undefined1 (*) [16])(param_1 + 0x70),auVar12);
    auVar26 = vsubps_avx(*(undefined1 (*) [16])(param_1 + 0x90),auVar12);
    auVar13 = vshufpd_avx(auVar16,auVar16,1);
    auVar20 = vshufpd_avx(auVar21,auVar21,1);
    auVar19 = vmovlhps_avx(auVar21,auVar16);
    auVar11 = vminss_avx(auVar20,auVar13);
    auVar13 = vmaxss_avx(auVar20,auVar13);
    auVar20 = vshufpd_avx(auVar26,auVar26,1);
    auVar15 = vshufps_avx(auVar19,auVar19,0x78);
    auVar11 = vminss_avx(auVar11,auVar20);
    auVar13 = vmaxss_avx(auVar13,auVar20);
    auVar19 = vshufpd_avx(auVar27,auVar27,1);
    auVar13 = vmaxss_avx(auVar13,auVar19);
    auVar11 = vminss_avx(auVar11,auVar19);
    fVar10 = auVar11._0_4_ + _DAT_145fc6f48;
    fVar18 = auVar13._0_4_ + _DAT_145fc6ed8;
    auVar19 = vroundss_avx(ZEXT416((uint)fVar10),ZEXT416((uint)fVar10),10);
    auVar13 = vmovlhps_avx(auVar16,auVar21);
    auVar11 = vshufps_avx(auVar21,auVar21,0x50);
    auVar20 = vshufps_avx(auVar16,auVar16,0x50);
    auVar13 = vshufps_avx(auVar13,auVar13,0x78);
    auVar13 = vcmpps_avx(auVar13,auVar15,1);
    auVar11 = vblendvps_avx(auVar20,auVar11,auVar13);
    auVar20 = vshufps_avx(auVar26,auVar26,0x50);
    sVar9 = (short)(int)auVar19._0_4_;
    *(short *)(param_1 + 0x100) = sVar9;
    auVar13 = vcmpps_avx(auVar11,auVar20,1);
    auVar19 = vcmpps_avx(auVar20,auVar11,1);
    auVar13 = vblendps_avx(auVar19,auVar13,6);
    auVar11 = vblendvps_avx(auVar20,auVar11,auVar13);
    auVar20 = vshufps_avx(auVar27,auVar27,0x50);
    auVar13 = vcmpps_avx(auVar11,auVar20,1);
    auVar19 = vcmpps_avx(auVar20,auVar11,1);
    auVar13 = vblendps_avx(auVar19,auVar13,6);
    auVar15 = vroundss_avx(ZEXT416((uint)fVar18),ZEXT416((uint)fVar18),10);
    auVar13 = vblendvps_avx(auVar20,auVar11,auVar13);
    auVar19 = vroundps_avx(auVar13,10);
    auVar11 = vmovshdup_avx(auVar13);
    auVar17._0_4_ = (int)auVar19._0_4_;
    auVar17._4_4_ = (int)auVar19._4_4_;
    auVar17._8_4_ = (int)auVar19._8_4_;
    auVar17._12_4_ = (int)auVar19._12_4_;
    auVar19 = vpackssdw_avx(auVar17,auVar17);
    auVar20 = vpshuflw_avx(auVar19,0xe1);
    *(longlong *)(param_1 + 0xf8) = auVar20._0_8_;
    sVar8 = (short)(int)auVar15._0_4_;
    *(short *)(param_1 + 0x102) = sVar8;
    if (auVar11._0_4_ < (float)(int)(short)auVar17._4_4_) {
      *(short *)(param_1 + 0xf8) = (short)auVar17._4_4_ + -1;
    }
    auVar11 = vshufpd_avx(auVar13,auVar13,1);
    if (auVar11._0_4_ < (float)(int)auVar19._4_2_) {
      *(short *)(param_1 + 0xfc) = auVar19._4_2_ + -1;
    }
    if (fVar10 < (float)(int)sVar9) {
      *(short *)(param_1 + 0x100) = sVar9 + -1;
    }
    if ((float)(int)auVar19._0_2_ < auVar13._0_4_) {
      *(short *)(param_1 + 0xfa) = auVar19._0_2_ + 1;
    }
    auVar13 = vshufps_avx(auVar13,auVar13,0xff);
    if ((float)(int)auVar19._6_2_ < auVar13._0_4_) {
      *(short *)(param_1 + 0xfe) = auVar19._6_2_ + 1;
    }
    if ((float)(int)sVar8 < fVar18) {
      *(short *)(param_1 + 0x102) = sVar8 + 1;
    }
  }
  return;
}

