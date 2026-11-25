// Recovered from game_scarlett_master.exe (GTA VI, Xbox Series X, PE32+ x64)
// Address: 14008a710  size: 1488 bytes
// Name:    FUN_14008a710
// Subsystem: core
//
// Referenced strings (0 in this body, 0 including direct callees):
// Callees: 
//
// Generated decompilation. Formatting follows MiscRef/GTAVSRC conventions;
// identifiers are recovered, not original. See ../../../README.md.

#include "gta6decomp/rage_types.h"


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_14008a710(ushort param_1,uint param_2,longlong param_3,longlong param_4,uint param_5)

{
  ushort uVar1;
  ushort uVar2;
  uint uVar3;
  float fVar4;
  float fVar5;
  float fVar6;
  float fVar7;
  ulonglong uVar8;
  undefined4 uVar9;
  uint uVar10;
  ushort *puVar11;
  uint uVar12;
  ushort *puVar13;
  longlong lVar14;
  ushort *puVar15;
  ushort *puVar16;
  undefined1 auVar17 [16];
  undefined1 auVar18 [16];
  undefined1 auVar19 [16];
  undefined1 auVar20 [16];
  undefined1 auVar21 [16];
  undefined1 auVar22 [16];
  undefined1 auVar23 [16];
  undefined1 auVar24 [16];
  undefined1 auVar25 [16];
  undefined1 auVar26 [16];
  undefined1 auVar27 [16];
  undefined1 auVar28 [16];
  float fVar29;
  float fVar32;
  float fVar33;
  undefined1 auVar30 [16];
  float fVar34;
  undefined1 auVar31 [16];
  undefined1 auVar35 [16];
  undefined1 auVar36 [16];
  undefined1 auVar37 [16];
  undefined1 auVar38 [16];
  undefined1 auVar39 [16];
  ushort *puStack_b0;
  char *apcStack_a8 [2];
  ushort *puStack_98;
  char *apcStack_88 [2];
  ushort *puStack_78;
  undefined1 auVar40 [64];
  
  puVar11 = (ushort *)(param_3 + 0x10 + (ulonglong)((uint)param_1 * 0x50));
  func_0x000144f0e340(apcStack_88,puVar11,param_2);
  if (*apcStack_88[0] != '\0') {
    return;
  }
  uVar1 = *puStack_78;
  uVar10 = (uint)uVar1;
  if ((int)param_5 <= (int)(uint)uVar1) {
    return;
  }
  lVar14 = param_3 + 0x10;
  uVar12 = *(uint *)(param_3 + 0x1c + (ulonglong)(uVar10 * 0x50));
  if ((uVar12 & 0x2004) == 0) {
    return;
  }
  if ((uVar12 & 1) != 0) {
    return;
  }
  puStack_b0 = (ushort *)((ulonglong)(uVar10 * 0x50) + lVar14);
  uVar12 = ~param_2 & 1;
  func_0x000144f0e340(apcStack_a8,puStack_b0,uVar12);
  if (*apcStack_a8[0] == '\x01') {
    return;
  }
  if (*puStack_98 != param_1) {
    return;
  }
  if (param_5 <= uVar10) {
    return;
  }
  func_0x000144f0e340(apcStack_88,(ulonglong)(uVar10 * 0x50) + lVar14,param_2);
  if (*apcStack_88[0] != '\0') {
    return;
  }
  uVar2 = *puStack_78;
  uVar10 = (uint)uVar2;
  if (param_5 <= uVar10) {
    return;
  }
  uVar3 = *(uint *)(param_3 + 0x1c + (ulonglong)((uint)uVar2 * 0x50));
  if ((uVar3 & 0x2004) == 0) {
    return;
  }
  if ((uVar3 & 1) != 0) {
    return;
  }
  puVar13 = (ushort *)((ulonglong)((uint)uVar2 * 0x50) + lVar14);
  func_0x000144f0e340(apcStack_a8,puVar13,uVar12);
  if (*apcStack_a8[0] == '\x01') {
    return;
  }
  if (*puStack_98 != uVar1) {
    return;
  }
  if (param_5 <= uVar10) {
    return;
  }
  func_0x000144f0e340(apcStack_88,(ulonglong)(uVar10 * 0x50) + lVar14,param_2);
  if (((*apcStack_88[0] == '\0') && (*puStack_78 < param_5)) &&
     (uVar8 = (ulonglong)((uint)*puStack_78 * 0x50), uVar10 = *(uint *)(param_3 + 0x1c + uVar8),
     (uVar10 & 1) == 0 && (uVar10 & 0x2004) != 0)) {
    puVar15 = (ushort *)(lVar14 + uVar8);
    func_0x000144f0e340(apcStack_a8,puVar15,uVar12);
    if (*apcStack_a8[0] != '\0') goto LAB_14008acbc;
    puVar16 = (ushort *)0x0;
    if (*puStack_98 == uVar2) {
      puVar16 = puVar15;
    }
  }
  else {
LAB_14008acbc:
    puVar16 = (ushort *)0x0;
  }
  auVar21._0_12_ = ZEXT812(0);
  auVar21._12_4_ = 0;
  puVar15 = puVar13;
  if (param_2 == 0) {
    puVar15 = puVar11;
    puVar11 = puVar13;
  }
  auVar19 = *(undefined1 (*) [16])(param_4 + (ulonglong)((*puVar11 & 0x3fff) << 4));
  auVar17 = *(undefined1 (*) [16])(param_4 + (ulonglong)((puVar11[2] & 0x3fff) << 4));
  auVar30 = vsubps_avx(auVar17,auVar19);
  auVar23 = vcmpps_avx(auVar30,auVar21,0);
  uVar9 = vmovmskps_avx(auVar23);
  if ((~(byte)uVar9 & 7) == 0) {
    auVar23._4_4_ = (float)_DAT_145fc6f70;
    auVar23._0_4_ = (float)_DAT_145fc6f70;
    auVar23._8_4_ = (float)_DAT_145fc6f70;
    auVar23._12_4_ = (float)_DAT_145fc6f70;
  }
  else {
    auVar35._0_4_ = auVar30._0_4_ & _DAT_145fc6f4c;
    auVar35._4_4_ = auVar30._4_4_ & _DAT_145fc6f4c;
    auVar35._8_4_ = auVar30._8_4_ & _DAT_145fc6f4c;
    auVar35._12_4_ = auVar30._12_4_ & _DAT_145fc6f4c;
    auVar23._4_4_ = (float)_DAT_145fc6f70;
    auVar23._0_4_ = (float)_DAT_145fc6f70;
    auVar23._8_4_ = (float)_DAT_145fc6f70;
    auVar23._12_4_ = (float)_DAT_145fc6f70;
    auVar35 = vcmpps_avx(auVar35,auVar23,0x11);
    uVar9 = vmovmskps_avx(auVar35);
    if ((~(byte)uVar9 & 7) == 0) {
      auVar23 = vmovshdup_avx(auVar30);
      auVar24._0_4_ = auVar30._0_4_ ^ _DAT_145fc6f10;
      auVar24._4_4_ = auVar30._4_4_ ^ _DAT_145fc6f10;
      auVar24._8_4_ = auVar30._8_4_ ^ _DAT_145fc6f10;
      auVar24._12_4_ = auVar30._12_4_ ^ _DAT_145fc6f10;
      auVar23 = vunpcklps_avx(auVar23,auVar24);
      auVar23 = vinsertps_avx(auVar23,auVar30,0x74);
      fVar29 = auVar23._0_4_;
      auVar30._0_4_ = fVar29 * fVar29;
      fVar32 = auVar23._4_4_;
      auVar30._4_4_ = fVar32 * fVar32;
      fVar33 = auVar23._8_4_;
      auVar30._8_4_ = fVar33 * fVar33;
      fVar34 = auVar23._12_4_;
      auVar30._12_4_ = fVar34 * fVar34;
      auVar23 = vblendps_avx(auVar30,ZEXT816(0) << 0x20,8);
      auVar23 = vhaddps_avx(auVar23,auVar23);
      auVar23 = vhaddps_avx(auVar23,auVar23);
      auVar30 = vrsqrtps_avx(auVar23);
      auVar23._0_4_ = auVar30._0_4_ * fVar29;
      auVar23._4_4_ = auVar30._4_4_ * fVar32;
      auVar23._8_4_ = auVar30._8_4_ * fVar33;
      auVar23._12_4_ = auVar30._12_4_ * fVar34;
    }
  }
  auVar30 = vsubps_avx(*(undefined1 (*) [16])(param_4 + (ulonglong)((puVar15[2] & 0x3fff) << 4)),
                       *(undefined1 (*) [16])(param_4 + (ulonglong)((*puVar15 & 0x3fff) << 4)));
  fVar29 = auVar30._0_4_;
  auVar36._0_4_ = fVar29 * fVar29;
  fVar32 = auVar30._4_4_;
  auVar36._4_4_ = fVar32 * fVar32;
  fVar33 = auVar30._8_4_;
  auVar36._8_4_ = fVar33 * fVar33;
  fVar34 = auVar30._12_4_;
  auVar36._12_4_ = fVar34 * fVar34;
  auVar30 = vblendps_avx(auVar36,auVar21,8);
  auVar30 = vhaddps_avx(auVar30,auVar30);
  auVar30 = vhaddps_avx(auVar30,auVar30);
  auVar35 = vrsqrtps_avx(auVar30);
  auVar39._4_4_ = _DAT_145fc6f14;
  auVar39._0_4_ = _DAT_145fc6f14;
  auVar39._8_4_ = _DAT_145fc6f14;
  auVar39._12_4_ = _DAT_145fc6f14;
  auVar40 = ZEXT1664(auVar39);
  auVar30 = vcmpps_avx(auVar39,auVar30,1);
  fVar29 = (float)(auVar30._0_4_ & (uint)(auVar35._0_4_ * fVar29));
  fVar32 = (float)(auVar30._4_4_ & (uint)(auVar35._4_4_ * fVar32));
  fVar33 = (float)(auVar30._8_4_ & (uint)(auVar35._8_4_ * fVar33));
  fVar34 = (float)(auVar30._12_4_ & (uint)(auVar35._12_4_ * fVar34));
  auVar25._0_4_ = fVar29 * auVar23._0_4_;
  auVar25._4_4_ = fVar32 * auVar23._4_4_;
  auVar25._8_4_ = fVar33 * auVar23._8_4_;
  auVar25._12_4_ = fVar34 * auVar23._12_4_;
  auVar21 = vblendps_avx(auVar25,auVar21,8);
  auVar21 = vhaddps_avx(auVar21,auVar21);
  auVar21 = vhaddps_avx(auVar21,auVar21);
  if (0.0 < auVar21._0_4_) {
LAB_14008aae1:
    puVar11 = puStack_b0;
    puVar15 = puVar16;
    if (param_2 == 0) {
      puVar11 = puVar16;
      puVar15 = puStack_b0;
    }
    puStack_b0 = puVar13;
    if ((puVar11 == (ushort *)0x0) || (puVar15 == (ushort *)0x0)) goto LAB_14008ac68;
    auVar22._0_12_ = ZEXT812(0);
    auVar22._12_4_ = 0;
    auVar21 = *(undefined1 (*) [16])(param_4 + (ulonglong)((*puVar11 & 0x3fff) << 4));
    auVar19 = *(undefined1 (*) [16])(param_4 + (ulonglong)((puVar11[2] & 0x3fff) << 4));
    auVar23 = vsubps_avx(auVar19,auVar21);
    auVar17 = vcmpps_avx(auVar23,auVar22,0);
    uVar9 = vmovmskps_avx(auVar17);
    if ((~(byte)uVar9 & 7) == 0) {
      auVar26._4_4_ = (float)_DAT_145fc6f70;
      auVar26._0_4_ = (float)_DAT_145fc6f70;
      auVar26._8_4_ = (float)_DAT_145fc6f70;
      auVar26._12_4_ = (float)_DAT_145fc6f70;
    }
    else {
      auVar37._0_4_ = auVar23._0_4_ & _DAT_145fc6f4c;
      auVar37._4_4_ = auVar23._4_4_ & _DAT_145fc6f4c;
      auVar37._8_4_ = auVar23._8_4_ & _DAT_145fc6f4c;
      auVar37._12_4_ = auVar23._12_4_ & _DAT_145fc6f4c;
      auVar26._4_4_ = (float)_DAT_145fc6f70;
      auVar26._0_4_ = (float)_DAT_145fc6f70;
      auVar26._8_4_ = (float)_DAT_145fc6f70;
      auVar26._12_4_ = (float)_DAT_145fc6f70;
      auVar17 = vcmpps_avx(auVar37,auVar26,0x11);
      uVar9 = vmovmskps_avx(auVar17);
      if ((~(byte)uVar9 & 7) == 0) {
        auVar17 = vmovshdup_avx(auVar23);
        auVar27._0_4_ = auVar23._0_4_ ^ _DAT_145fc6f10;
        auVar27._4_4_ = auVar23._4_4_ ^ _DAT_145fc6f10;
        auVar27._8_4_ = auVar23._8_4_ ^ _DAT_145fc6f10;
        auVar27._12_4_ = auVar23._12_4_ ^ _DAT_145fc6f10;
        auVar17 = vunpcklps_avx(auVar17,auVar27);
        auVar17 = vinsertps_avx(auVar17,auVar23,0x74);
        fVar29 = auVar17._0_4_;
        auVar31._0_4_ = fVar29 * fVar29;
        fVar32 = auVar17._4_4_;
        auVar31._4_4_ = fVar32 * fVar32;
        fVar33 = auVar17._8_4_;
        auVar31._8_4_ = fVar33 * fVar33;
        fVar34 = auVar17._12_4_;
        auVar31._12_4_ = fVar34 * fVar34;
        auVar17 = vblendps_avx(auVar31,ZEXT816(0) << 0x20,8);
        auVar17 = vhaddps_avx(auVar17,auVar17);
        auVar17 = vhaddps_avx(auVar17,auVar17);
        auVar17 = vrsqrtps_avx(auVar17);
        auVar26._0_4_ = auVar17._0_4_ * fVar29;
        auVar26._4_4_ = auVar17._4_4_ * fVar32;
        auVar26._8_4_ = auVar17._8_4_ * fVar33;
        auVar26._12_4_ = auVar17._12_4_ * fVar34;
      }
    }
    auVar17 = vsubps_avx(*(undefined1 (*) [16])(param_4 + (ulonglong)((puVar15[2] & 0x3fff) << 4)),
                         *(undefined1 (*) [16])(param_4 + (ulonglong)((*puVar15 & 0x3fff) << 4)));
    fVar29 = auVar17._0_4_;
    auVar38._0_4_ = fVar29 * fVar29;
    fVar32 = auVar17._4_4_;
    auVar38._4_4_ = fVar32 * fVar32;
    fVar33 = auVar17._8_4_;
    auVar38._8_4_ = fVar33 * fVar33;
    fVar34 = auVar17._12_4_;
    auVar38._12_4_ = fVar34 * fVar34;
    auVar17 = vblendps_avx(auVar38,auVar22,8);
    auVar17 = vhaddps_avx(auVar17,auVar17);
    auVar17 = vhaddps_avx(auVar17,auVar17);
    auVar23 = vrsqrtps_avx(auVar17);
    auVar17 = vcmpps_avx(auVar39,auVar17,1);
    fVar29 = (float)(auVar17._0_4_ & (uint)(auVar23._0_4_ * fVar29));
    fVar32 = (float)(auVar17._4_4_ & (uint)(auVar23._4_4_ * fVar32));
    fVar33 = (float)(auVar17._8_4_ & (uint)(auVar23._8_4_ * fVar33));
    fVar34 = (float)(auVar17._12_4_ & (uint)(auVar23._12_4_ * fVar34));
    auVar28._0_4_ = fVar29 * auVar26._0_4_;
    auVar28._4_4_ = fVar32 * auVar26._4_4_;
    auVar28._8_4_ = fVar33 * auVar26._8_4_;
    auVar28._12_4_ = fVar34 * auVar26._12_4_;
    auVar17 = vblendps_avx(auVar28,auVar22,8);
    auVar17 = vhaddps_avx(auVar17,auVar17);
    auVar17 = vhaddps_avx(auVar17,auVar17);
    if (0.0 < auVar17._0_4_) goto LAB_14008ac68;
    auVar21 = vsubps_avx(auVar21,auVar19);
    fVar4 = auVar21._0_4_;
    auVar20._0_4_ = fVar4 * fVar4;
    fVar5 = auVar21._4_4_;
    auVar20._4_4_ = fVar5 * fVar5;
    fVar6 = auVar21._8_4_;
    auVar20._8_4_ = fVar6 * fVar6;
    fVar7 = auVar21._12_4_;
    auVar20._12_4_ = fVar7 * fVar7;
    auVar21 = vblendps_avx(auVar20,ZEXT816(0) << 0x20,8);
    auVar21 = vhaddps_avx(auVar21,auVar21);
    auVar19 = vhaddps_avx(auVar21,auVar21);
    auVar21 = vcmpps_avx(auVar39,auVar19,1);
    auVar19 = vrsqrtps_avx(auVar19);
    auVar18._0_4_ = (float)(auVar21._0_4_ & (uint)(auVar19._0_4_ * fVar4)) * fVar29;
    auVar18._4_4_ = (float)(auVar21._4_4_ & (uint)(auVar19._4_4_ * fVar5)) * fVar32;
    auVar18._8_4_ = (float)(auVar21._8_4_ & (uint)(auVar19._8_4_ * fVar6)) * fVar33;
    auVar18._12_4_ = (float)(auVar21._12_4_ & (uint)(auVar19._12_4_ * fVar7)) * fVar34;
    auVar21 = vhaddps_avx(auVar18,auVar18);
    fVar29 = (float)func_0x000145f40740(auVar21._0_8_);
    if (_DAT_14615ae8c < fVar29 * _DAT_146159c20) goto LAB_14008ac68;
  }
  else {
    auVar21 = vsubps_avx(auVar19,auVar17);
    fVar4 = auVar21._0_4_;
    auVar19._0_4_ = fVar4 * fVar4;
    fVar5 = auVar21._4_4_;
    auVar19._4_4_ = fVar5 * fVar5;
    fVar6 = auVar21._8_4_;
    auVar19._8_4_ = fVar6 * fVar6;
    fVar7 = auVar21._12_4_;
    auVar19._12_4_ = fVar7 * fVar7;
    auVar21 = vblendps_avx(auVar19,ZEXT816(0) << 0x20,8);
    auVar21 = vhaddps_avx(auVar21,auVar21);
    auVar19 = vhaddps_avx(auVar21,auVar21);
    auVar21 = vcmpps_avx(auVar39,auVar19,1);
    auVar19 = vrsqrtps_avx(auVar19);
    auVar17._0_4_ = (float)(auVar21._0_4_ & (uint)(auVar19._0_4_ * fVar4)) * fVar29;
    auVar17._4_4_ = (float)(auVar21._4_4_ & (uint)(auVar19._4_4_ * fVar5)) * fVar32;
    auVar17._8_4_ = (float)(auVar21._8_4_ & (uint)(auVar19._8_4_ * fVar6)) * fVar33;
    auVar17._12_4_ = (float)(auVar21._12_4_ & (uint)(auVar19._12_4_ * fVar7)) * fVar34;
    auVar21 = vhaddps_avx(auVar17,auVar17);
    fVar29 = (float)func_0x000145f40740(auVar21._0_8_);
    auVar39 = auVar40._0_16_;
    if (_DAT_14615ae8c < fVar29 * _DAT_146159c20) goto LAB_14008aae1;
  }
  *(byte *)(puStack_b0 + 6) = (byte)puStack_b0[6] | 1;
LAB_14008ac68:
  if (((param_2 == 0) && (puVar15 != (ushort *)0x0)) ||
     ((param_2 == 1 && (puVar15 = puVar11, puVar11 != (ushort *)0x0)))) {
    puVar15[4] = (ushort)*(undefined4 *)(puStack_b0 + 4) | 0x40;
  }
  *(byte *)(puStack_b0 + 4) = (byte)puStack_b0[4] | 0x40;
  return;
}

