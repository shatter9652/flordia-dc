// Recovered from game_scarlett_master.exe (GTA VI, Xbox Series X, PE32+ x64)
// Address: 1400ea7f0  size: 2784 bytes
// Name:    FUN_1400ea7f0
// Subsystem: core
//
// Referenced strings (0 in this body, 0 including direct callees):
// Callees: FUN_144e5ffc0, FUN_1410bd3c0, FUN_142921810, FUN_1400eb5c0, FUN_1400eb2d0, FUN_142921920, FUN_1400eb310, FUN_140430600, FUN_140430620, FUN_1453e4d70, FUN_1400eb5a0, FUN_144f69c60, FUN_1410bd460, FUN_1400eb3c0
//
// Generated decompilation. Formatting follows MiscRef/GTAVSRC conventions;
// identifiers are recovered, not original. See ../../../README.md.

#include "gta6decomp/rage_types.h"


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1400ea7f0(longlong param_1,int *param_2,longlong param_3,longlong param_4,
                  undefined8 param_5,char param_6,byte param_7)

{
  uint uVar1;
  longlong *plVar2;
  undefined1 auVar3 [32];
  bool bVar4;
  char cVar5;
  byte bVar6;
  byte bVar7;
  uint uVar8;
  int iVar9;
  undefined4 uVar10;
  longlong *plVar11;
  uint *puVar12;
  longlong lVar13;
  uint uVar14;
  int iVar15;
  int iVar16;
  int iVar17;
  longlong lVar18;
  int iVar19;
  float fVar20;
  float fVar27;
  float fVar28;
  undefined1 auVar21 [16];
  undefined1 auVar22 [16];
  undefined1 auVar23 [16];
  float fVar29;
  undefined1 auVar24 [16];
  undefined1 auVar25 [16];
  undefined1 auVar26 [64];
  undefined1 auVar30 [16];
  undefined1 auVar31 [64];
  undefined1 auVar32 [64];
  undefined1 auVar33 [64];
  undefined1 auVar34 [64];
  undefined4 uStack_140;
  uint uStack_13c;
  undefined8 uStack_138;
  undefined4 uStack_130;
  undefined4 uStack_12c;
  undefined4 uStack_128;
  int iStack_124;
  uint uStack_120;
  uint uStack_11c;
  int iStack_118;
  byte bStack_114;
  undefined8 uStack_110;
  undefined4 uStack_108;
  undefined4 uStack_104;
  undefined4 uStack_100;
  byte bStack_fc;
  undefined1 (*pauStack_f0) [16];
  undefined1 (*pauStack_e8) [16];
  longlong lStack_e0;
  undefined4 *puStack_d8;
  longlong lStack_d0;
  undefined1 auStack_c8 [16];
  undefined1 auStack_b8 [16];
  undefined8 uStack_a8;
  undefined8 uStack_a0;
  undefined8 uStack_98;
  undefined8 uStack_90;
  undefined1 extraout_var [56];
  
  uVar10 = *(undefined4 *)(param_3 + 8);
  auVar31 = ZEXT1664(*(undefined1 (*) [16])((longlong)_DAT_14a210d14 * 0x730 + 0x14a94bca0));
  lVar13 = *(longlong *)(*(longlong *)(param_2 + 0xc) + 8);
  plVar11 = (longlong *)FUN_1453e4d70(lVar13,uVar10);
  uVar8 = func_0x000144e65310(lVar13 + 0x20,uVar10);
  if ((uVar8 >> 8 & 1) == 0) {
    return;
  }
  if (plVar11 == (longlong *)0x0) {
    return;
  }
  if ((uVar8 & 0x40) == 0) {
    return;
  }
  uStack_13c = 0xffffffff;
  auVar21 = vcvtps2ph_f16c(ZEXT416(_DAT_145fc6f48),3);
  auVar22 = vcvtps2ph_f16c(ZEXT416(_DAT_146159bd0),3);
  uStack_128 = 0;
  iStack_124 = 0;
  uStack_120 = 0;
  uStack_138 = 0;
  uStack_130 = 0;
  uStack_12c = 0;
  uStack_11c = auVar21._0_4_ << 0x10 | (uint)auVar22._0_2_;
  bStack_114 = 0;
  bStack_fc = 0;
  uStack_100 = 0;
  iVar9 = func_0x000144f6a920(plVar11);
  iStack_118 = iVar9;
  cVar5 = func_0x000144ec8200(plVar11);
  lStack_d0 = param_3;
  if (cVar5 == '\0') {
    cVar5 = FUN_1410bd460(plVar11);
    if ((cVar5 == '\0') && (lVar13 = FUN_1410bd3c0(plVar11), lVar13 != 0)) {
      uStack_12c = (undefined4)
                   ((ulonglong)(*(longlong *)(*(longlong *)(lVar13 + 0x28) + 0x18) - _DAT_14a943aa8)
                   >> 5);
    }
  }
  else {
    plVar2 = (longlong *)*plVar11;
    iVar9 = (int)plVar2[0x1a2];
    iVar17 = 0;
    if ((iVar9 == 0x7f3a6aa9) && (iVar17 = 0, DAT_147b9a441 != 0)) {
      iVar17 = *(int *)(*(longlong *)
                         (plVar11[1] +
                         (ulonglong)
                         *(ushort *)
                          (*(longlong *)(*plVar2 + 0x50) + -8 + (ulonglong)DAT_147b9a441 * 0x10) * 8
                         ) + (ulonglong)
                             ((ushort *)plVar2[0x191])
                             [(ulonglong)*(ushort *)plVar2[0x191] * 0xc +
                              (ulonglong)
                              *(ushort *)
                               (*(longlong *)(*plVar2 + 0x50) + -6 + (ulonglong)DAT_147b9a441 * 0x10
                               ) * 0xc + 6]);
    }
    iVar15 = 0;
    iVar16 = 0;
    if ((iVar9 == 0x7f3a6aa9) && (DAT_147b9a443 != 0)) {
      iVar16 = *(int *)(*(longlong *)
                         (plVar11[1] +
                         (ulonglong)
                         *(ushort *)
                          (*(longlong *)(*plVar2 + 0x50) + -8 + (ulonglong)DAT_147b9a443 * 0x10) * 8
                         ) + (ulonglong)
                             ((ushort *)plVar2[0x191])
                             [(ulonglong)*(ushort *)plVar2[0x191] * 0xc +
                              (ulonglong)
                              *(ushort *)
                               (*(longlong *)(*plVar2 + 0x50) + -6 + (ulonglong)DAT_147b9a443 * 0x10
                               ) * 0xc + 6]);
    }
    if ((iVar9 == 0x7f3a6aa9) && (DAT_147b9a444 != 0)) {
      iVar15 = *(int *)(*(longlong *)
                         (plVar11[1] +
                         (ulonglong)
                         *(ushort *)
                          (*(longlong *)(*plVar2 + 0x50) + -8 + (ulonglong)DAT_147b9a444 * 0x10) * 8
                         ) + (ulonglong)
                             ((ushort *)plVar2[0x191])
                             [(ulonglong)*(ushort *)plVar2[0x191] * 0xc +
                              (ulonglong)
                              *(ushort *)
                               (*(longlong *)(*plVar2 + 0x50) + -6 + (ulonglong)DAT_147b9a444 * 0x10
                               ) * 0xc + 6]);
    }
    iVar19 = 0;
    if ((iVar9 == 0x7f3a6aa9) && (iVar19 = 0, DAT_147b9a445 != 0)) {
      iVar19 = *(int *)(*(longlong *)
                         (plVar11[1] +
                         (ulonglong)
                         *(ushort *)
                          (*(longlong *)(*plVar2 + 0x50) + -8 + (ulonglong)DAT_147b9a445 * 0x10) * 8
                         ) + (ulonglong)
                             ((ushort *)plVar2[0x191])
                             [(ulonglong)*(ushort *)plVar2[0x191] * 0xc +
                              (ulonglong)
                              *(ushort *)
                               (*(longlong *)(*plVar2 + 0x50) + -6 + (ulonglong)DAT_147b9a445 * 0x10
                               ) * 0xc + 6]);
    }
    if (iVar17 != 0) {
      uStack_130 = FUN_140430620(plVar11,0xeea16b15,&uStack_138);
    }
    if (iVar16 != 0) {
      uStack_12c = FUN_140430600(plVar11,0x8fc59620);
    }
    if (iVar15 != 0) {
      uStack_128 = FUN_140430600(plVar11,0xe0548ad3);
    }
    iVar9 = iStack_118;
    if (iVar19 != 0) {
      return;
    }
  }
  cVar5 = func_0x000144f6a910(iVar9);
  if (cVar5 != '\0') {
    iStack_124 = *(int *)(*(longlong *)(param_2 + 0xe) + 0x44);
    uStack_120 = *(uint *)(*(longlong *)(param_2 + 0xe) + 0x48) & 0x7ffffff;
    if (iVar9 == 6) {
      plVar2 = (longlong *)*plVar11;
      iVar17 = (int)plVar2[0x1a2];
      bVar6 = DAT_147b9a44a;
joined_r0x0001400eadc1:
      if ((iVar17 == 0x7f3a6aa9) && (bVar6 != 0)) {
        uStack_100 = *(undefined4 *)
                      (*(longlong *)
                        (plVar11[1] +
                        (ulonglong)
                        *(ushort *)(*(longlong *)(*plVar2 + 0x50) + -8 + (ulonglong)bVar6 * 0x10) *
                        8) + (ulonglong)
                             ((ushort *)plVar2[0x191])
                             [(ulonglong)*(ushort *)plVar2[0x191] * 0xc +
                              (ulonglong)
                              *(ushort *)
                               (*(longlong *)(*plVar2 + 0x50) + -6 + (ulonglong)bVar6 * 0x10) * 0xc
                              + 6]);
      }
    }
    else {
      if (iVar9 != 7) {
        plVar2 = (longlong *)*plVar11;
        iVar17 = (int)plVar2[0x1a2];
        bVar6 = DAT_147b9a449;
        goto joined_r0x0001400eadc1;
      }
      uStack_100 = 0x3dcccccd;
    }
    if (iStack_124 != 0) {
      plVar2 = (longlong *)*plVar11;
      auVar21 = ZEXT416(_DAT_145fc6f48);
      if (((int)plVar2[0x1a2] == 0x7f3a6aa9) && (DAT_147b9a44c != 0)) {
        auVar21 = ZEXT416(*(uint *)(*(longlong *)
                                     (plVar11[1] +
                                     (ulonglong)
                                     *(ushort *)
                                      (*(longlong *)(*plVar2 + 0x50) + -8 +
                                      (ulonglong)DAT_147b9a44c * 0x10) * 8) +
                                   (ulonglong)
                                   ((ushort *)plVar2[0x191])
                                   [(ulonglong)*(ushort *)plVar2[0x191] * 0xc +
                                    (ulonglong)
                                    *(ushort *)
                                     (*(longlong *)(*plVar2 + 0x50) + -6 +
                                     (ulonglong)DAT_147b9a44c * 0x10) * 0xc + 6]));
      }
      auVar22 = ZEXT416((uint)_DAT_145fc6ed8);
      if (((int)plVar2[0x1a2] == 0x7f3a6aa9) && (DAT_147b9a44d != 0)) {
        auVar22 = ZEXT416(*(uint *)(*(longlong *)
                                     (plVar11[1] +
                                     (ulonglong)
                                     *(ushort *)
                                      (*(longlong *)(*plVar2 + 0x50) + -8 +
                                      (ulonglong)DAT_147b9a44d * 0x10) * 8) +
                                   (ulonglong)
                                   ((ushort *)plVar2[0x191])
                                   [(ulonglong)*(ushort *)plVar2[0x191] * 0xc +
                                    (ulonglong)
                                    *(ushort *)
                                     (*(longlong *)(*plVar2 + 0x50) + -6 +
                                     (ulonglong)DAT_147b9a44d * 0x10) * 0xc + 6]));
      }
      auVar23 = vcvtps2ph_f16c(auVar21,3);
      auVar21 = vmaxss_avx(auVar22,ZEXT416((uint)_DAT_145fc7020));
      auVar21 = vcvtps2ph_f16c(ZEXT416((uint)(_DAT_145fc6ed8 / auVar21._0_4_)),3);
      uStack_11c = auVar23._0_4_ << 0x10 | (uint)auVar21._0_2_;
    }
  }
  uStack_110 = 0xffff0000ffff;
  uStack_104 = func_0x0001400eb490(plVar11);
  fVar20 = 0.0;
  if ((DAT_147b9a44f != 0) && (plVar2 = (longlong *)*plVar11, (int)plVar2[0x1a2] == 0x7f3a6aa9)) {
    fVar20 = *(float *)(*(longlong *)
                         (plVar11[1] +
                         (ulonglong)
                         *(ushort *)
                          (*(longlong *)(*plVar2 + 0x50) + -8 + (ulonglong)DAT_147b9a44f * 0x10) * 8
                         ) + (ulonglong)
                             ((ushort *)plVar2[0x191])
                             [(ulonglong)*(ushort *)plVar2[0x191] * 0xc +
                              (ulonglong)
                              *(ushort *)
                               (*(longlong *)(*plVar2 + 0x50) + -6 + (ulonglong)DAT_147b9a44f * 0x10
                               ) * 0xc + 6]);
  }
  uStack_108 = (undefined4)(longlong)fVar20;
  if (((iVar9 - 1U < 4) && (iVar17 = *(int *)(param_4 + 0xd8), iVar17 < *(int *)(param_4 + 0xdc)))
     && (*(int *)(param_4 + 0xd8) = iVar17 + 1, iVar17 + 1 != 0)) {
    auVar23._4_4_ = _DAT_145fc6ed8;
    auVar23._0_4_ = _DAT_145fc6ed8;
    auVar23._8_4_ = _DAT_145fc6ed8;
    auVar23._12_4_ = _DAT_145fc6ed8;
    auVar21 = *(undefined1 (*) [16])(*(longlong *)(param_2 + 0xe) + 0x20);
    auVar22 = vsubps_avx(auVar21,auVar31._0_16_);
    auVar21 = vsubps_avx(*(undefined1 (*) [16])(*(longlong *)(param_2 + 0xe) + 0x30),auVar21);
    auVar21 = vdivps_avx(auVar23,auVar21);
    auVar21 = vmovlhps_avx(auVar22,auVar21);
    *(undefined1 (*) [16])(*(longlong *)(param_4 + 0xd0) + (longlong)iVar17 * 0x10) = auVar21;
    uStack_110 = CONCAT44(iVar17,(undefined4)uStack_110);
  }
  uVar8 = *(uint *)(*(longlong *)(param_2 + 0xe) + 0x48);
  bStack_fc = (byte)(uVar8 >> 0x1e) & 1;
  auVar32 = ZEXT1664(*(undefined1 (*) [16])(param_2 + 4));
  auVar33 = ZEXT1664(*(undefined1 (*) [16])(param_2 + 8));
  lStack_e0 = param_1;
  bVar6 = FUN_1400eb310(plVar11);
  auVar23 = auVar33._0_16_;
  auVar22 = auVar32._0_16_;
  auVar21 = auVar31._0_16_;
  if ((param_7 & bVar6) == 1) {
    auVar21 = vsubps_avx(auVar22,auVar23);
    auVar22._0_4_ =
         _DAT_145fc6edc * auVar21._0_4_ +
         (float)((uint)(-(_DAT_145fc6edc * (auVar33._0_4_ + auVar32._0_4_)) + auVar31._0_4_) &
                _DAT_145fc6f4c);
    auVar22._4_4_ =
         _DAT_145fc6edc * auVar21._4_4_ +
         (float)((uint)(-(_DAT_145fc6edc * (auVar33._4_4_ + auVar32._4_4_)) + auVar31._4_4_) &
                _DAT_145fc6f4c);
    auVar22._8_4_ =
         _DAT_145fc6edc * auVar21._8_4_ +
         (float)((uint)(-(_DAT_145fc6edc * (auVar33._8_4_ + auVar32._8_4_)) + auVar31._8_4_) &
                _DAT_145fc6f4c);
    auVar22._12_4_ =
         _DAT_145fc6edc * auVar21._12_4_ +
         (float)((uint)(-(_DAT_145fc6edc * (auVar33._12_4_ + auVar32._12_4_)) + auVar31._12_4_) &
                _DAT_145fc6f4c);
    auVar21 = vmaxps_avx(ZEXT816(0) << 0x20,auVar22);
    auVar24._0_4_ = auVar21._0_4_ * auVar21._0_4_;
    auVar24._4_4_ = auVar21._4_4_ * auVar21._4_4_;
    auVar24._8_4_ = auVar21._8_4_ * auVar21._8_4_;
    auVar24._12_4_ = auVar21._12_4_ * auVar21._12_4_;
    auVar21 = vblendps_avx(auVar24,ZEXT816(0) << 0x20,8);
    auVar21 = vhaddps_avx(auVar21,auVar21);
    auVar21 = vhaddps_avx(auVar21,auVar21);
    auVar34 = ZEXT1664(auVar21);
    auVar26._0_8_ = FUN_144e5ffc0();
    auVar23 = auVar33._0_16_;
    auVar22 = auVar32._0_16_;
    auVar21 = auVar31._0_16_;
    auVar26._8_56_ = extraout_var;
    if (auVar34._0_4_ < *(float *)(param_4 + 0x13c)) {
      uVar1 = param_2[10];
      *(float *)(param_4 + 0x13c) = auVar34._0_4_;
      auVar24 = vmaxss_avx(ZEXT416(uVar1),auVar26._0_16_);
      *(int *)(param_4 + 0x140) = auVar24._0_4_;
      auVar24 = vcmpps_avx(auVar21,*(undefined1 (*) [16])(param_2 + 8),2);
      auVar30 = vcmpps_avx(*(undefined1 (*) [16])(param_2 + 4),auVar21,2);
      auVar25._0_4_ = auVar24._0_4_ & auVar30._0_4_;
      auVar25._4_4_ = auVar24._4_4_ & auVar30._4_4_;
      auVar25._8_4_ = auVar24._8_4_ & auVar30._8_4_;
      auVar25._12_4_ = auVar24._12_4_ & auVar30._12_4_;
      uVar10 = vmovmskps_avx(auVar25);
      *(bool *)(param_4 + 0x138) = (~(byte)uVar10 & 7) == 0;
    }
  }
  auVar22 = vsubps_avx(auVar22,auVar21);
  auVar31 = ZEXT1664(auVar22);
  auVar22 = vsubps_avx(auVar23,auVar21);
  auVar32 = ZEXT1664(auVar22);
  pauStack_f0 = (undefined1 (*) [16])(param_2 + 4);
  pauStack_e8 = (undefined1 (*) [16])(param_2 + 8);
  if (param_6 == '\0') {
    uVar10 = 0xffffffff;
    goto LAB_1400eacb3;
  }
  auVar22 = vcmpps_avx(*pauStack_f0,auVar21,2);
  auVar23 = vcmpps_avx(auVar21,*pauStack_e8,2);
  auVar30._0_4_ = auVar23._0_4_ & auVar22._0_4_;
  auVar30._4_4_ = auVar23._4_4_ & auVar22._4_4_;
  auVar30._8_4_ = auVar23._8_4_ & auVar22._8_4_;
  auVar30._12_4_ = auVar23._12_4_ & auVar22._12_4_;
  uVar10 = vmovmskps_avx(auVar30);
  if ((~(byte)uVar10 & 3) == 0) {
    auVar21 = vsubps_avx(*pauStack_e8,auVar21);
    auVar21 = vshufpd_avx(auVar21,auVar21,1);
    fVar27 = auVar21._0_4_;
    if ((fVar27 <= 0.0) || (*(float *)(param_4 + 0x134) <= fVar27)) goto LAB_1400eac91;
    bVar4 = true;
    *(float *)(param_4 + 0x134) = fVar27;
  }
  else {
LAB_1400eac91:
    bVar4 = false;
  }
  cVar5 = FUN_1400eb3c0(plVar11,&uStack_140);
  uVar10 = 0xffffffff;
  if (cVar5 != '\0') {
    puStack_d8 = (undefined4 *)(lStack_e0 + 0x3230);
    uVar10 = FUN_1400eb5c0(puStack_d8,plVar11,uStack_140,uVar8 >> 0x1e & 0xffffff01);
    if (bVar4) {
      *puStack_d8 = uVar10;
    }
  }
LAB_1400eacb3:
  lVar18 = lStack_d0;
  bVar7 = FUN_1400eb2d0(iVar9,*(undefined4 *)(lStack_d0 + 8),
                        *(undefined4 *)(*(longlong *)(param_2 + 0xe) + 0x48),(longlong)fVar20);
  lVar13 = lStack_e0;
  bVar7 = bVar7 & (bVar6 ^ 1);
  auStack_b8 = auVar32._0_16_;
  auStack_c8 = auVar31._0_16_;
  bStack_114 = bVar7;
  FUN_144f69c60(lStack_e0,param_4,lVar18,auStack_c8,auStack_b8,&uStack_138,&uStack_13c,uVar10);
  uVar8 = uStack_13c;
  lVar18 = (longlong)(int)uStack_13c;
  if (lVar18 != -1) {
    if (bVar7 == 0) {
      puVar12 = *(uint **)(param_4 + 0x18);
      uVar8 = puVar12[4];
      if (uVar8 < *puVar12) {
        iVar9 = *param_2;
        puVar12[4] = uVar8 + 1;
        *(uint *)(*(longlong *)(puVar12 + 2) + (ulonglong)uVar8 * 4) =
             uStack_13c & 0xffff | iVar9 << 0x10;
      }
      if ((param_7 & bVar6) != 0) {
        uVar8 = *(uint *)(lVar13 + 0x2120);
        if (uVar8 < *(uint *)(lVar13 + 0x2110)) {
          iVar9 = *param_2;
          *(uint *)(lVar13 + 0x2120) = uVar8 + 1;
          *(uint *)(*(longlong *)(lVar13 + 0x2118) + (ulonglong)uVar8 * 4) =
               uStack_13c & 0xffff | iVar9 << 0x10;
        }
      }
    }
    else {
      cVar5 = FUN_1400eb5a0(plVar11);
      if (cVar5 != '\0') {
        auVar21 = vsubps_avx(*pauStack_e8,*pauStack_f0);
        fVar20 = auVar21._0_4_ + _DAT_146164480;
        fVar27 = auVar21._4_4_ + _DAT_146164480;
        fVar28 = auVar21._8_4_ + _DAT_146164480;
        fVar29 = auVar21._12_4_ + _DAT_146164480;
        auVar21._0_4_ = fVar20 * fVar20;
        auVar21._4_4_ = fVar27 * fVar27;
        auVar21._8_4_ = fVar28 * fVar28;
        auVar21._12_4_ = fVar29 * fVar29;
        auVar21 = vhaddps_avx(auVar21,auVar21);
        if (auVar21._0_4_ < _DAT_145fc7020) {
          uVar1 = *(uint *)(param_4 + 0x80);
          if (((int)uVar1 < *(int *)(param_4 + 0x84)) &&
             (*(uint *)(param_4 + 0x80) = uVar1 + 1, uVar1 + 1 != 0)) {
            auVar3 = vpcmpeqd_avx2(ZEXT1632(auVar21),ZEXT1632(auVar21));
            *(undefined1 (*) [32])(*(longlong *)(param_4 + 0x78) + (longlong)(int)uVar1 * 0x20) =
                 auVar3;
            uStack_a8 = *(undefined8 *)*pauStack_f0;
            uStack_a0 = *(undefined8 *)(*pauStack_f0 + 8);
            uStack_98 = *(undefined8 *)*pauStack_e8;
            uStack_90 = *(undefined8 *)(*pauStack_e8 + 8);
            puVar12 = (uint *)FUN_142921810(param_5);
            if (puVar12 != (uint *)0x0) {
              plVar2 = (longlong *)*plVar11;
              uVar14 = 0;
              if (DAT_147b9a44b != 0 && (int)plVar2[0x1a2] == 0x7f3a6aa9) {
                uVar14 = (int)*(float *)(*(longlong *)
                                          (plVar11[1] +
                                          (ulonglong)
                                          *(ushort *)
                                           (*(longlong *)(*plVar2 + 0x50) + -8 +
                                           (ulonglong)DAT_147b9a44b * 0x10) * 8) +
                                        (ulonglong)
                                        ((ushort *)plVar2[0x191])
                                        [(ulonglong)*(ushort *)plVar2[0x191] * 0xc +
                                         (ulonglong)
                                         *(ushort *)
                                          (*(longlong *)(*plVar2 + 0x50) + -6 +
                                          (ulonglong)DAT_147b9a44b * 0x10) * 0xc + 6]) << 0x14;
              }
              *puVar12 = uVar8 & 0xfffff | uVar14;
              lVar18 = lVar18 * 0x54;
              lVar13 = *(longlong *)(param_4 + 0x20);
              *(uint *)(lVar13 + 0x44 + lVar18) =
                   uVar1 & 0xfffff | *(uint *)(lVar13 + 0x44 + lVar18) & 0xfff00000;
              FUN_142921920(param_5,puVar12,lVar13,*(undefined8 *)(param_4 + 0x78));
            }
          }
        }
      }
    }
  }
  return;
}

