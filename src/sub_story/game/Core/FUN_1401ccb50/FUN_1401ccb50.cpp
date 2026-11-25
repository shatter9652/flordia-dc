// Recovered from game_scarlett_master.exe (GTA VI, Xbox Series X, PE32+ x64)
// Address: 1401ccb50  size: 499 bytes
// Name:    FUN_1401ccb50
// Subsystem: core
//
// Referenced strings (0 in this body, 0 including direct callees):
// Callees: 
//
// Generated decompilation. Formatting follows MiscRef/GTAVSRC conventions;
// identifiers are recovered, not original. See ../../../README.md.

#include "gta6decomp/rage_types.h"


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1401ccb50(undefined1 (*param_1) [16],undefined1 (*param_2) [16],longlong param_3)

{
  float fVar1;
  float fVar2;
  float fVar3;
  float fVar4;
  float fVar5;
  float fVar6;
  float fVar7;
  float fVar8;
  float fVar12;
  float fVar13;
  undefined1 auVar9 [16];
  undefined1 auVar10 [16];
  float fVar14;
  undefined1 auVar11 [16];
  undefined1 auVar15 [16];
  undefined1 auVar16 [16];
  float fVar17;
  float fVar18;
  float fVar21;
  float fVar23;
  float fVar25;
  undefined1 auVar19 [16];
  float fVar22;
  float fVar24;
  float fVar26;
  undefined1 auVar20 [16];
  undefined1 auVar27 [16];
  undefined1 auVar28 [16];
  float fVar29;
  float fVar31;
  float fVar32;
  float fVar33;
  undefined1 auVar30 [16];
  undefined1 auVar34 [16];
  float fVar35;
  float fVar37;
  float fVar38;
  float fVar39;
  undefined1 auVar36 [16];
  undefined1 auVar40 [16];
  undefined1 auVar41 [16];
  undefined1 auVar42 [16];
  
  if (*(char *)(param_3 + 0x714) == '\x01') {
    fVar17 = *(float *)(param_3 + 0x6f0);
    fVar21 = *(float *)(param_3 + 0x6f4);
    auVar10 = *(undefined1 (*) [16])(param_3 + 0xe0);
    fVar1 = *(float *)(param_3 + 0x6d0);
    fVar2 = *(float *)(param_3 + 0x6d4);
    auVar40._0_4_ =
         fVar21 * (float)(_DAT_145fc6f4c & *(uint *)(param_3 + 0xd0)) +
         (float)(_DAT_145fc6f4c & *(uint *)(param_3 + 0xc0)) * fVar17;
    auVar40._4_4_ =
         fVar21 * (float)(_DAT_145fc6f4c & *(uint *)(param_3 + 0xd4)) +
         (float)(_DAT_145fc6f4c & *(uint *)(param_3 + 0xc4)) * fVar17;
    auVar40._8_4_ =
         fVar21 * (float)(_DAT_145fc6f4c & *(uint *)(param_3 + 0xd8)) +
         (float)(_DAT_145fc6f4c & *(uint *)(param_3 + 200)) * fVar17;
    auVar40._12_4_ =
         fVar21 * (float)(_DAT_145fc6f4c & *(uint *)(param_3 + 0xdc)) +
         (float)(_DAT_145fc6f4c & *(uint *)(param_3 + 0xcc)) * fVar17;
    fVar17 = (float)((uint)(auVar40._0_4_ + auVar10._0_4_) ^ _DAT_145fc6f10);
    fVar21 = (float)((uint)(auVar40._4_4_ + auVar10._4_4_) ^ _DAT_145fc6f10);
    fVar23 = (float)((uint)(auVar40._8_4_ + auVar10._8_4_) ^ _DAT_145fc6f10);
    fVar25 = (float)((uint)(auVar40._12_4_ + auVar10._12_4_) ^ _DAT_145fc6f10);
    auVar27._0_4_ = fVar2 * fVar17;
    auVar27._4_4_ = fVar2 * fVar21;
    auVar27._8_4_ = fVar2 * fVar23;
    auVar27._12_4_ = fVar2 * fVar25;
    auVar19._0_4_ = fVar1 * fVar17;
    auVar19._4_4_ = fVar1 * fVar21;
    auVar19._8_4_ = fVar1 * fVar23;
    auVar19._12_4_ = fVar1 * fVar25;
    auVar11 = vminps_avx(auVar19,auVar27);
    auVar10 = vsubps_avx(auVar40,auVar10);
    auVar34._0_4_ = auVar11._0_4_ + *(float *)(param_3 + 0xf0);
    auVar34._4_4_ = auVar11._4_4_ + *(float *)(param_3 + 0xf4);
    auVar34._8_4_ = auVar11._8_4_ + *(float *)(param_3 + 0xf8);
    auVar34._12_4_ = auVar11._12_4_ + *(float *)(param_3 + 0xfc);
    auVar15._0_4_ = auVar10._0_4_ * fVar2;
    auVar15._4_4_ = auVar10._4_4_ * fVar2;
    auVar15._8_4_ = auVar10._8_4_ * fVar2;
    auVar15._12_4_ = auVar10._12_4_ * fVar2;
    auVar9._0_4_ = auVar10._0_4_ * fVar1;
    auVar9._4_4_ = auVar10._4_4_ * fVar1;
    auVar9._8_4_ = auVar10._8_4_ * fVar1;
    auVar9._12_4_ = auVar10._12_4_ * fVar1;
    auVar11 = vmaxps_avx(auVar9,auVar15);
    auVar10._0_4_ = auVar11._0_4_ + *(float *)(param_3 + 0xf0);
    auVar10._4_4_ = auVar11._4_4_ + *(float *)(param_3 + 0xf4);
    auVar10._8_4_ = auVar11._8_4_ + *(float *)(param_3 + 0xf8);
    auVar10._12_4_ = auVar11._12_4_ + *(float *)(param_3 + 0xfc);
  }
  else {
    auVar10 = *(undefined1 (*) [16])(param_3 + 0x550);
    fVar2 = *(float *)(param_3 + 0xd0);
    fVar23 = *(float *)(param_3 + 0xd4);
    fVar25 = *(float *)(param_3 + 0xd8);
    fVar3 = *(float *)(param_3 + 0xdc);
    fVar4 = *(float *)(param_3 + 0xe0);
    fVar5 = *(float *)(param_3 + 0xe4);
    fVar6 = *(float *)(param_3 + 0xe8);
    fVar7 = *(float *)(param_3 + 0xec);
    auVar11 = vhsubps_avx(auVar10,auVar10);
    fVar21 = (*(float *)(param_3 + 0x554) - auVar10._0_4_) * _DAT_145fc6edc;
    fVar17 = *(float *)(param_3 + 0x6d0);
    auVar10 = vmovshdup_avx(auVar11);
    fVar1 = auVar10._0_4_ * _DAT_145fc6edc;
    fVar8 = fVar21 * *(float *)(param_3 + 0xc0) + *(float *)(param_3 + 0xf0);
    fVar12 = fVar21 * *(float *)(param_3 + 0xc4) + *(float *)(param_3 + 0xf4);
    fVar13 = fVar21 * *(float *)(param_3 + 200) + *(float *)(param_3 + 0xf8);
    fVar14 = fVar21 * *(float *)(param_3 + 0xcc) + *(float *)(param_3 + 0xfc);
    fVar18 = -(fVar21 * *(float *)(param_3 + 0xc0)) + *(float *)(param_3 + 0xf0);
    fVar22 = -(fVar21 * *(float *)(param_3 + 0xc4)) + *(float *)(param_3 + 0xf4);
    fVar24 = -(fVar21 * *(float *)(param_3 + 200)) + *(float *)(param_3 + 0xf8);
    fVar26 = -(fVar21 * *(float *)(param_3 + 0xcc)) + *(float *)(param_3 + 0xfc);
    fVar35 = -(fVar1 * fVar2) + fVar8;
    fVar37 = -(fVar1 * fVar23) + fVar12;
    fVar38 = -(fVar1 * fVar25) + fVar13;
    fVar39 = -(fVar1 * fVar3) + fVar14;
    fVar8 = fVar1 * fVar2 + fVar8;
    fVar12 = fVar1 * fVar23 + fVar12;
    fVar13 = fVar1 * fVar25 + fVar13;
    fVar14 = fVar1 * fVar3 + fVar14;
    fVar29 = -(fVar1 * fVar2) + fVar18;
    fVar31 = -(fVar1 * fVar23) + fVar22;
    fVar32 = -(fVar1 * fVar25) + fVar24;
    fVar33 = -(fVar1 * fVar3) + fVar26;
    fVar18 = fVar1 * fVar2 + fVar18;
    fVar22 = fVar1 * fVar23 + fVar22;
    fVar24 = fVar1 * fVar25 + fVar24;
    fVar26 = fVar1 * fVar3 + fVar26;
    fVar21 = *(float *)(param_3 + 0x6d4);
    auVar41._0_4_ = -(fVar17 * fVar4) + fVar35;
    auVar41._4_4_ = -(fVar17 * fVar5) + fVar37;
    auVar41._8_4_ = -(fVar17 * fVar6) + fVar38;
    auVar41._12_4_ = -(fVar17 * fVar7) + fVar39;
    auVar28._0_4_ = -(fVar17 * fVar4) + fVar29;
    auVar28._4_4_ = -(fVar17 * fVar5) + fVar31;
    auVar28._8_4_ = -(fVar17 * fVar6) + fVar32;
    auVar28._12_4_ = -(fVar17 * fVar7) + fVar33;
    auVar42._0_4_ = -(fVar17 * fVar4) + fVar18;
    auVar42._4_4_ = -(fVar17 * fVar5) + fVar22;
    auVar42._8_4_ = -(fVar17 * fVar6) + fVar24;
    auVar42._12_4_ = -(fVar17 * fVar7) + fVar26;
    auVar16._0_4_ = -(fVar4 * fVar17) + fVar8;
    auVar16._4_4_ = -(fVar5 * fVar17) + fVar12;
    auVar16._8_4_ = -(fVar6 * fVar17) + fVar13;
    auVar16._12_4_ = -(fVar7 * fVar17) + fVar14;
    auVar30._0_4_ = -(fVar21 * fVar4) + fVar29;
    auVar30._4_4_ = -(fVar21 * fVar5) + fVar31;
    auVar30._8_4_ = -(fVar21 * fVar6) + fVar32;
    auVar30._12_4_ = -(fVar21 * fVar7) + fVar33;
    auVar36._0_4_ = -(fVar21 * fVar4) + fVar35;
    auVar36._4_4_ = -(fVar21 * fVar5) + fVar37;
    auVar36._8_4_ = -(fVar21 * fVar6) + fVar38;
    auVar36._12_4_ = -(fVar21 * fVar7) + fVar39;
    auVar20._0_4_ = -(fVar21 * fVar4) + fVar18;
    auVar20._4_4_ = -(fVar21 * fVar5) + fVar22;
    auVar20._8_4_ = -(fVar21 * fVar6) + fVar24;
    auVar20._12_4_ = -(fVar21 * fVar7) + fVar26;
    auVar11._0_4_ = -(fVar21 * fVar4) + fVar8;
    auVar11._4_4_ = -(fVar21 * fVar5) + fVar12;
    auVar11._8_4_ = -(fVar21 * fVar6) + fVar13;
    auVar11._12_4_ = -(fVar21 * fVar7) + fVar14;
    auVar9 = vminps_avx(auVar28,auVar41);
    auVar34 = vminps_avx(auVar20,auVar11);
    auVar15 = vminps_avx(auVar30,auVar36);
    auVar10 = vmaxps_avx(auVar20,auVar11);
    auVar11 = vmaxps_avx(auVar30,auVar36);
    auVar15 = vminps_avx(auVar15,auVar34);
    auVar20 = vminps_avx(auVar42,auVar16);
    auVar10 = vmaxps_avx(auVar11,auVar10);
    auVar11 = vmaxps_avx(auVar42,auVar16);
    auVar34 = vmaxps_avx(auVar28,auVar41);
    auVar9 = vminps_avx(auVar9,auVar20);
    auVar11 = vmaxps_avx(auVar34,auVar11);
    auVar34 = vminps_avx(auVar9,auVar15);
    auVar10 = vmaxps_avx(auVar11,auVar10);
  }
  *param_1 = auVar34;
  *param_2 = auVar10;
  return;
}

