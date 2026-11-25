// Recovered from game_scarlett_master.exe (GTA VI, Xbox Series X, PE32+ x64)
// Address: 1400edc40  size: 1887 bytes
// Name:    FUN_1400edc40
// Subsystem: core
//
// Referenced strings (0 in this body, 0 including direct callees):
// Callees: 
//
// Generated decompilation. Formatting follows MiscRef/GTAVSRC conventions;
// identifiers are recovered, not original. See ../../../README.md.

#include "gta6decomp/rage_types.h"


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined8 FUN_1400edc40(undefined1 (*param_1) [16],undefined1 (*param_2) [16],float param_3)

{
  float fVar1;
  float fVar2;
  float fVar3;
  float fVar4;
  char cVar5;
  undefined1 auVar6 [16];
  float fVar7;
  float fVar8;
  undefined1 auVar9 [16];
  undefined1 auVar10 [16];
  undefined1 auVar11 [16];
  undefined1 auVar12 [16];
  undefined1 auVar13 [16];
  undefined1 auVar14 [16];
  undefined1 auVar15 [16];
  undefined1 auVar16 [16];
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
  undefined1 auVar29 [16];
  undefined1 auVar30 [16];
  undefined1 auVar31 [16];
  undefined1 auVar32 [16];
  undefined1 auVar33 [16];
  undefined1 auVar34 [16];
  undefined1 auVar35 [16];
  undefined1 auVar36 [16];
  undefined1 auVar37 [16];
  undefined1 auVar38 [16];
  undefined1 auVar39 [16];
  undefined1 auVar40 [16];
  undefined1 auVar41 [16];
  float fVar44;
  float fVar45;
  undefined1 auVar42 [16];
  undefined1 auVar43 [16];
  undefined1 auVar46 [16];
  undefined1 auVar47 [16];
  undefined1 auStack_138 [8];
  float fStack_130;
  float fStack_12c;
  undefined1 auStack_128 [8];
  float fStack_120;
  float fStack_11c;
  
  auVar43 = *param_1;
  auVar39 = param_1[1];
  auVar37 = param_1[2];
  auVar46 = param_1[3];
  _auStack_128 = *param_2;
  auVar17 = param_2[1];
  auVar18 = param_2[2];
  auVar19 = param_2[3];
  auVar14 = param_1[5];
  auVar36 = param_1[6];
  auVar31 = param_2[5];
  param_3 = param_3 * _DAT_146159ca4;
  auVar24 = param_1[4];
  auVar20 = param_2[4];
  auVar22 = param_2[6];
  auVar29 = param_1[7];
  auVar16 = param_2[7];
  auVar28._0_4_ =
       _DAT_14615a6b8 *
       (*(float *)param_2[7] +
       *(float *)param_2[6] + auVar31._0_4_ + auVar20._0_4_ +
       auVar18._0_4_ + auVar19._0_4_ + auStack_128._0_4_ + auVar17._0_4_);
  auVar28._4_4_ =
       _DAT_14615a6b8 *
       (*(float *)(param_2[7] + 4) +
       *(float *)(param_2[6] + 4) + auVar31._4_4_ + auVar20._4_4_ +
       auVar18._4_4_ + auVar19._4_4_ + auStack_128._4_4_ + auVar17._4_4_);
  auVar28._8_4_ =
       _DAT_14615a6b8 *
       (*(float *)(param_2[7] + 8) +
       *(float *)(param_2[6] + 8) + auVar31._8_4_ + auVar20._8_4_ +
       auVar18._8_4_ + auVar19._8_4_ + auStack_128._8_4_ + auVar17._8_4_);
  auVar28._12_4_ =
       _DAT_14615a6b8 *
       (*(float *)(param_2[7] + 0xc) +
       *(float *)(param_2[6] + 0xc) + auVar31._12_4_ + auVar20._12_4_ +
       auVar18._12_4_ + auVar19._12_4_ + auStack_128._12_4_ + auVar17._12_4_);
  auVar27._0_4_ =
       _DAT_14615a6b8 *
       (*(float *)param_1[7] +
       *(float *)param_1[6] + *(float *)param_1[5] + auVar24._0_4_ +
       auVar46._0_4_ + auVar37._0_4_ + auVar39._0_4_ + auVar43._0_4_);
  auVar27._4_4_ =
       _DAT_14615a6b8 *
       (*(float *)(param_1[7] + 4) +
       *(float *)(param_1[6] + 4) + *(float *)(param_1[5] + 4) + auVar24._4_4_ +
       auVar46._4_4_ + auVar37._4_4_ + auVar39._4_4_ + auVar43._4_4_);
  auVar27._8_4_ =
       _DAT_14615a6b8 *
       (*(float *)(param_1[7] + 8) +
       *(float *)(param_1[6] + 8) + *(float *)(param_1[5] + 8) + auVar24._8_4_ +
       auVar46._8_4_ + auVar37._8_4_ + auVar39._8_4_ + auVar43._8_4_);
  auVar27._12_4_ =
       _DAT_14615a6b8 *
       (*(float *)(param_1[7] + 0xc) +
       *(float *)(param_1[6] + 0xc) + *(float *)(param_1[5] + 0xc) + auVar24._12_4_ +
       auVar46._12_4_ + auVar37._12_4_ + auVar39._12_4_ + auVar43._12_4_);
  auVar11 = ZEXT416(0) << 0x20;
  auVar9 = vsubps_avx(_auStack_128,auVar28);
  auVar43 = vsubps_avx(auVar43,auVar27);
  fVar1 = auVar9._0_4_;
  auVar42._0_4_ = fVar1 * fVar1;
  fVar2 = auVar9._4_4_;
  auVar42._4_4_ = fVar2 * fVar2;
  fVar3 = auVar9._8_4_;
  auVar42._8_4_ = fVar3 * fVar3;
  fVar4 = auVar9._12_4_;
  auVar42._12_4_ = fVar4 * fVar4;
  auVar9._0_4_ = auVar43._0_4_ * auVar43._0_4_;
  auVar9._4_4_ = auVar43._4_4_ * auVar43._4_4_;
  auVar9._8_4_ = auVar43._8_4_ * auVar43._8_4_;
  auVar9._12_4_ = auVar43._12_4_ * auVar43._12_4_;
  auVar43 = vblendps_avx(auVar42,auVar11,8);
  auVar9 = vblendps_avx(auVar9,auVar11,8);
  auVar43 = vhaddps_avx(auVar43,auVar43);
  auVar9 = vhaddps_avx(auVar9,auVar9);
  auVar43 = vhaddps_avx(auVar43,auVar43);
  auVar9 = vhaddps_avx(auVar9,auVar9);
  fVar7 = (auVar43._0_4_ * param_3) / auVar9._0_4_;
  cVar5 = _DAT_145fc6ed8 < fVar7;
  if ((bool)cVar5) {
    fVar7 = SQRT(_DAT_145fc6ed8 / fVar7) + _DAT_145fc6f48;
    fVar8 = fVar1 * fVar7 * _DAT_146163980 + auStack_128._0_4_;
    fVar44 = fVar2 * fVar7 * _DAT_146163980 + auStack_128._4_4_;
    fVar45 = fVar3 * fVar7 * _DAT_146163980 + auStack_128._8_4_;
    fStack_11c = fVar4 * fVar7 * _DAT_146163980 + auStack_128._12_4_;
    auStack_128._4_4_ = fVar44;
    auStack_128._0_4_ = fVar8;
    fStack_120 = fVar45;
    *(float *)*param_2 = fVar8;
    *(float *)(*param_2 + 4) = fVar44;
    *(float *)(*param_2 + 8) = fVar45;
    *(float *)(*param_2 + 0xc) = fStack_11c;
    auVar43._0_4_ = _DAT_14615a6b8 * fVar1 * fVar7;
    auVar43._4_4_ = _DAT_14615a6b8 * fVar2 * fVar7;
    auVar43._8_4_ = _DAT_14615a6b8 * fVar3 * fVar7;
    auVar43._12_4_ = _DAT_14615a6b8 * fVar4 * fVar7;
    auVar28 = vsubps_avx(auVar28,auVar43);
  }
  else {
    auVar43 = ZEXT816(0);
  }
  _auStack_138 = vsubps_avx(auVar17,auVar43);
  auVar39 = vsubps_avx(auVar39,auVar27);
  param_2[1] = _auStack_138;
  auVar17 = vsubps_avx(_auStack_138,auVar28);
  auVar10._0_4_ = auVar39._0_4_ * auVar39._0_4_;
  auVar10._4_4_ = auVar39._4_4_ * auVar39._4_4_;
  auVar10._8_4_ = auVar39._8_4_ * auVar39._8_4_;
  auVar10._12_4_ = auVar39._12_4_ * auVar39._12_4_;
  fVar1 = auVar17._0_4_;
  auVar38._0_4_ = fVar1 * fVar1;
  fVar2 = auVar17._4_4_;
  auVar38._4_4_ = fVar2 * fVar2;
  fVar3 = auVar17._8_4_;
  auVar38._8_4_ = fVar3 * fVar3;
  fVar4 = auVar17._12_4_;
  auVar38._12_4_ = fVar4 * fVar4;
  auVar39 = vblendps_avx(auVar10,auVar11,8);
  auVar17 = vhaddps_avx(auVar39,auVar39);
  auVar39 = vblendps_avx(auVar38,auVar11,8);
  auVar39 = vhaddps_avx(auVar39,auVar39);
  auVar17 = vhaddps_avx(auVar17,auVar17);
  auVar39 = vhaddps_avx(auVar39,auVar39);
  fVar7 = (auVar39._0_4_ * param_3) / auVar17._0_4_;
  auVar39 = auVar43;
  if (_DAT_145fc6ed8 < fVar7) {
    cVar5 = cVar5 + '\x01';
    fVar7 = SQRT(_DAT_145fc6ed8 / fVar7) + _DAT_145fc6f48;
    auStack_138._0_4_ = fVar7 * fVar1 * _DAT_146163980 + (float)auStack_138._0_4_;
    auStack_138._4_4_ = fVar7 * fVar2 * _DAT_146163980 + (float)auStack_138._4_4_;
    fStack_130 = fVar7 * fVar3 * _DAT_146163980 + fStack_130;
    fStack_12c = fVar7 * fVar4 * _DAT_146163980 + fStack_12c;
    *(undefined4 *)param_2[1] = auStack_138._0_4_;
    *(undefined4 *)(param_2[1] + 4) = auStack_138._4_4_;
    *(float *)(param_2[1] + 8) = fStack_130;
    *(float *)(param_2[1] + 0xc) = fStack_12c;
    auVar17._0_4_ = _DAT_14615a6b8 * fVar7 * fVar1;
    auVar17._4_4_ = _DAT_14615a6b8 * fVar7 * fVar2;
    auVar17._8_4_ = _DAT_14615a6b8 * fVar7 * fVar3;
    auVar17._12_4_ = _DAT_14615a6b8 * fVar7 * fVar4;
    auVar28 = vsubps_avx(auVar28,auVar17);
    auVar39._0_4_ = auVar43._0_4_ + auVar17._0_4_;
    auVar39._4_4_ = auVar43._4_4_ + auVar17._4_4_;
    auVar39._8_4_ = auVar43._8_4_ + auVar17._8_4_;
    auVar39._12_4_ = auVar43._12_4_ + auVar17._12_4_;
  }
  auVar18 = vsubps_avx(auVar18,auVar39);
  auVar37 = vsubps_avx(auVar37,auVar27);
  auVar9 = ZEXT816(0) << 0x20;
  auVar17 = vsubps_avx(auVar18,auVar28);
  auVar11._0_4_ = auVar37._0_4_ * auVar37._0_4_;
  auVar11._4_4_ = auVar37._4_4_ * auVar37._4_4_;
  auVar11._8_4_ = auVar37._8_4_ * auVar37._8_4_;
  auVar11._12_4_ = auVar37._12_4_ * auVar37._12_4_;
  param_2[2] = auVar18;
  fVar1 = auVar17._0_4_;
  auVar32._0_4_ = fVar1 * fVar1;
  fVar2 = auVar17._4_4_;
  auVar32._4_4_ = fVar2 * fVar2;
  fVar3 = auVar17._8_4_;
  auVar32._8_4_ = fVar3 * fVar3;
  fVar4 = auVar17._12_4_;
  auVar32._12_4_ = fVar4 * fVar4;
  auVar37 = vblendps_avx(auVar11,auVar9,8);
  auVar17 = vhaddps_avx(auVar37,auVar37);
  auVar37 = vblendps_avx(auVar32,auVar9,8);
  auVar37 = vhaddps_avx(auVar37,auVar37);
  auVar17 = vhaddps_avx(auVar17,auVar17);
  auVar37 = vhaddps_avx(auVar37,auVar37);
  fVar7 = (auVar37._0_4_ * param_3) / auVar17._0_4_;
  auVar37 = auVar39;
  if (_DAT_145fc6ed8 < fVar7) {
    cVar5 = cVar5 + '\x01';
    fVar7 = SQRT(_DAT_145fc6ed8 / fVar7) + _DAT_145fc6f48;
    auVar41._0_4_ = fVar7 * fVar1 * _DAT_146163980 + auVar18._0_4_;
    auVar41._4_4_ = fVar7 * fVar2 * _DAT_146163980 + auVar18._4_4_;
    auVar41._8_4_ = fVar7 * fVar3 * _DAT_146163980 + auVar18._8_4_;
    auVar41._12_4_ = fVar7 * fVar4 * _DAT_146163980 + auVar18._12_4_;
    auVar18._0_4_ = _DAT_14615a6b8 * fVar7 * fVar1;
    auVar18._4_4_ = _DAT_14615a6b8 * fVar7 * fVar2;
    auVar18._8_4_ = _DAT_14615a6b8 * fVar7 * fVar3;
    auVar18._12_4_ = _DAT_14615a6b8 * fVar7 * fVar4;
    auVar28 = vsubps_avx(auVar28,auVar18);
    auVar37._0_4_ = auVar39._0_4_ + auVar18._0_4_;
    auVar37._4_4_ = auVar39._4_4_ + auVar18._4_4_;
    auVar37._8_4_ = auVar39._8_4_ + auVar18._8_4_;
    auVar37._12_4_ = auVar39._12_4_ + auVar18._12_4_;
    param_2[2] = auVar41;
    auVar18 = auVar41;
  }
  auVar19 = vsubps_avx(auVar19,auVar37);
  auVar46 = vsubps_avx(auVar46,auVar27);
  auVar17 = vsubps_avx(auVar19,auVar28);
  auVar12._0_4_ = auVar46._0_4_ * auVar46._0_4_;
  auVar12._4_4_ = auVar46._4_4_ * auVar46._4_4_;
  auVar12._8_4_ = auVar46._8_4_ * auVar46._8_4_;
  auVar12._12_4_ = auVar46._12_4_ * auVar46._12_4_;
  param_2[3] = auVar19;
  fVar1 = auVar17._0_4_;
  auVar33._0_4_ = fVar1 * fVar1;
  fVar2 = auVar17._4_4_;
  auVar33._4_4_ = fVar2 * fVar2;
  fVar3 = auVar17._8_4_;
  auVar33._8_4_ = fVar3 * fVar3;
  fVar4 = auVar17._12_4_;
  auVar33._12_4_ = fVar4 * fVar4;
  auVar46 = vblendps_avx(auVar12,auVar9,8);
  auVar17 = vhaddps_avx(auVar46,auVar46);
  auVar46 = vblendps_avx(auVar33,auVar9,8);
  auVar46 = vhaddps_avx(auVar46,auVar46);
  auVar17 = vhaddps_avx(auVar17,auVar17);
  auVar46 = vhaddps_avx(auVar46,auVar46);
  fVar7 = (auVar46._0_4_ * param_3) / auVar17._0_4_;
  auVar46 = auVar37;
  if (_DAT_145fc6ed8 < fVar7) {
    cVar5 = cVar5 + '\x01';
    fVar7 = SQRT(_DAT_145fc6ed8 / fVar7) + _DAT_145fc6f48;
    auVar6._0_4_ = fVar7 * fVar1 * _DAT_146163980 + auVar19._0_4_;
    auVar6._4_4_ = fVar7 * fVar2 * _DAT_146163980 + auVar19._4_4_;
    auVar6._8_4_ = fVar7 * fVar3 * _DAT_146163980 + auVar19._8_4_;
    auVar6._12_4_ = fVar7 * fVar4 * _DAT_146163980 + auVar19._12_4_;
    auVar19._0_4_ = _DAT_14615a6b8 * fVar7 * fVar1;
    auVar19._4_4_ = _DAT_14615a6b8 * fVar7 * fVar2;
    auVar19._8_4_ = _DAT_14615a6b8 * fVar7 * fVar3;
    auVar19._12_4_ = _DAT_14615a6b8 * fVar7 * fVar4;
    auVar28 = vsubps_avx(auVar28,auVar19);
    auVar46._0_4_ = auVar37._0_4_ + auVar19._0_4_;
    auVar46._4_4_ = auVar37._4_4_ + auVar19._4_4_;
    auVar46._8_4_ = auVar37._8_4_ + auVar19._8_4_;
    auVar46._12_4_ = auVar37._12_4_ + auVar19._12_4_;
    param_2[3] = auVar6;
    auVar19 = auVar6;
  }
  auVar20 = vsubps_avx(auVar20,auVar46);
  auVar17 = vsubps_avx(auVar24,auVar27);
  auVar30._0_12_ = ZEXT812(0);
  auVar30._12_4_ = 0;
  auVar24 = vsubps_avx(auVar20,auVar28);
  auVar13._0_4_ = auVar17._0_4_ * auVar17._0_4_;
  auVar13._4_4_ = auVar17._4_4_ * auVar17._4_4_;
  auVar13._8_4_ = auVar17._8_4_ * auVar17._8_4_;
  auVar13._12_4_ = auVar17._12_4_ * auVar17._12_4_;
  param_2[4] = auVar20;
  fVar7 = _DAT_14615a6b8;
  fVar1 = auVar24._0_4_;
  auVar25._0_4_ = fVar1 * fVar1;
  fVar2 = auVar24._4_4_;
  auVar25._4_4_ = fVar2 * fVar2;
  fVar3 = auVar24._8_4_;
  auVar25._8_4_ = fVar3 * fVar3;
  fVar4 = auVar24._12_4_;
  auVar25._12_4_ = fVar4 * fVar4;
  auVar17 = vblendps_avx(auVar13,auVar30,8);
  auVar24 = vhaddps_avx(auVar17,auVar17);
  auVar17 = vblendps_avx(auVar25,auVar30,8);
  auVar17 = vhaddps_avx(auVar17,auVar17);
  auVar24 = vhaddps_avx(auVar24,auVar24);
  auVar17 = vhaddps_avx(auVar17,auVar17);
  fVar8 = (param_3 * auVar17._0_4_) / auVar24._0_4_;
  auVar24 = auVar46;
  if (_DAT_145fc6ed8 < fVar8) {
    cVar5 = cVar5 + '\x01';
    fVar8 = SQRT(_DAT_145fc6ed8 / fVar8) + _DAT_145fc6f48;
    auVar26._0_4_ = fVar8 * fVar1 * _DAT_146163980 + auVar20._0_4_;
    auVar26._4_4_ = fVar8 * fVar2 * _DAT_146163980 + auVar20._4_4_;
    auVar26._8_4_ = fVar8 * fVar3 * _DAT_146163980 + auVar20._8_4_;
    auVar26._12_4_ = fVar8 * fVar4 * _DAT_146163980 + auVar20._12_4_;
    param_2[4] = auVar26;
    auVar20._0_4_ = fVar8 * fVar1 * fVar7;
    auVar20._4_4_ = fVar8 * fVar2 * fVar7;
    auVar20._8_4_ = fVar8 * fVar3 * fVar7;
    auVar20._12_4_ = fVar8 * fVar4 * fVar7;
    auVar28 = vsubps_avx(auVar28,auVar20);
    auVar24._0_4_ = auVar46._0_4_ + auVar20._0_4_;
    auVar24._4_4_ = auVar46._4_4_ + auVar20._4_4_;
    auVar24._8_4_ = auVar46._8_4_ + auVar20._8_4_;
    auVar24._12_4_ = auVar46._12_4_ + auVar20._12_4_;
    auVar20 = auVar26;
  }
  auVar9 = vsubps_avx(auVar31,auVar24);
  auVar17 = vsubps_avx(auVar9,auVar28);
  param_2[5] = auVar9;
  fVar1 = auVar17._0_4_;
  auVar34._0_4_ = fVar1 * fVar1;
  fVar2 = auVar17._4_4_;
  auVar34._4_4_ = fVar2 * fVar2;
  fVar3 = auVar17._8_4_;
  auVar34._8_4_ = fVar3 * fVar3;
  fVar4 = auVar17._12_4_;
  auVar34._12_4_ = fVar4 * fVar4;
  auVar17 = vsubps_avx(auVar14,auVar27);
  auVar14._0_4_ = auVar17._0_4_ * auVar17._0_4_;
  auVar14._4_4_ = auVar17._4_4_ * auVar17._4_4_;
  auVar14._8_4_ = auVar17._8_4_ * auVar17._8_4_;
  auVar14._12_4_ = auVar17._12_4_ * auVar17._12_4_;
  auVar17 = vblendps_avx(auVar14,auVar30,8);
  auVar31 = vblendps_avx(auVar34,auVar30,8);
  auVar31 = vhaddps_avx(auVar31,auVar31);
  auVar17 = vhaddps_avx(auVar17,auVar17);
  auVar31 = vhaddps_avx(auVar31,auVar31);
  auVar17 = vhaddps_avx(auVar17,auVar17);
  fVar7 = (auVar31._0_4_ * param_3) / auVar17._0_4_;
  auVar31 = auVar24;
  if (_DAT_145fc6ed8 < fVar7) {
    cVar5 = cVar5 + '\x01';
    fVar7 = SQRT(_DAT_145fc6ed8 / fVar7) + _DAT_145fc6f48;
    auVar47._0_4_ = fVar7 * fVar1 * _DAT_146163980 + auVar9._0_4_;
    auVar47._4_4_ = fVar7 * fVar2 * _DAT_146163980 + auVar9._4_4_;
    auVar47._8_4_ = fVar7 * fVar3 * _DAT_146163980 + auVar9._8_4_;
    auVar47._12_4_ = fVar7 * fVar4 * _DAT_146163980 + auVar9._12_4_;
    auVar21._0_4_ = _DAT_14615a6b8 * fVar7 * fVar1;
    auVar21._4_4_ = _DAT_14615a6b8 * fVar7 * fVar2;
    auVar21._8_4_ = _DAT_14615a6b8 * fVar7 * fVar3;
    auVar21._12_4_ = _DAT_14615a6b8 * fVar7 * fVar4;
    auVar28 = vsubps_avx(auVar28,auVar21);
    auVar31._0_4_ = auVar21._0_4_ + auVar24._0_4_;
    auVar31._4_4_ = auVar21._4_4_ + auVar24._4_4_;
    auVar31._8_4_ = auVar21._8_4_ + auVar24._8_4_;
    auVar31._12_4_ = auVar21._12_4_ + auVar24._12_4_;
    param_2[5] = auVar47;
    auVar9 = auVar47;
  }
  auVar11 = ZEXT816(0) << 0x40;
  auVar22 = vsubps_avx(auVar22,auVar31);
  auVar17 = vsubps_avx(auVar22,auVar28);
  param_2[6] = auVar22;
  fVar1 = auVar17._0_4_;
  auVar35._0_4_ = fVar1 * fVar1;
  fVar2 = auVar17._4_4_;
  auVar35._4_4_ = fVar2 * fVar2;
  fVar3 = auVar17._8_4_;
  auVar35._8_4_ = fVar3 * fVar3;
  fVar4 = auVar17._12_4_;
  auVar35._12_4_ = fVar4 * fVar4;
  auVar36 = vsubps_avx(auVar36,auVar27);
  auVar17 = vblendps_avx(auVar35,auVar11,8);
  auVar14 = vhaddps_avx(auVar17,auVar17);
  auVar15._0_4_ = auVar36._0_4_ * auVar36._0_4_;
  auVar15._4_4_ = auVar36._4_4_ * auVar36._4_4_;
  auVar15._8_4_ = auVar36._8_4_ * auVar36._8_4_;
  auVar15._12_4_ = auVar36._12_4_ * auVar36._12_4_;
  auVar17 = vblendps_avx(auVar15,auVar11,8);
  auVar17 = vhaddps_avx(auVar17,auVar17);
  auVar14 = vhaddps_avx(auVar14,auVar14);
  auVar17 = vhaddps_avx(auVar17,auVar17);
  fVar7 = (auVar14._0_4_ * param_3) / auVar17._0_4_;
  auVar36 = auVar31;
  if (_DAT_145fc6ed8 < fVar7) {
    cVar5 = '\x01';
    fVar7 = SQRT(_DAT_145fc6ed8 / fVar7) + _DAT_145fc6f48;
    auVar40._0_4_ = fVar7 * fVar1 * _DAT_146163980 + auVar22._0_4_;
    auVar40._4_4_ = fVar7 * fVar2 * _DAT_146163980 + auVar22._4_4_;
    auVar40._8_4_ = fVar7 * fVar3 * _DAT_146163980 + auVar22._8_4_;
    auVar40._12_4_ = fVar7 * fVar4 * _DAT_146163980 + auVar22._12_4_;
    auVar22._0_4_ = _DAT_14615a6b8 * fVar7 * fVar1;
    auVar22._4_4_ = _DAT_14615a6b8 * fVar7 * fVar2;
    auVar22._8_4_ = _DAT_14615a6b8 * fVar7 * fVar3;
    auVar22._12_4_ = _DAT_14615a6b8 * fVar7 * fVar4;
    auVar28 = vsubps_avx(auVar28,auVar22);
    auVar36._0_4_ = auVar31._0_4_ + auVar22._0_4_;
    auVar36._4_4_ = auVar31._4_4_ + auVar22._4_4_;
    auVar36._8_4_ = auVar31._8_4_ + auVar22._8_4_;
    auVar36._12_4_ = auVar31._12_4_ + auVar22._12_4_;
    param_2[6] = auVar40;
    auVar22 = auVar40;
  }
  auVar14 = vsubps_avx(auVar16,auVar36);
  param_2[7] = auVar14;
  auVar17 = vsubps_avx(auVar29,auVar27);
  auVar28 = vsubps_avx(auVar14,auVar28);
  fVar1 = auVar28._0_4_;
  auVar29._0_4_ = fVar1 * fVar1;
  fVar2 = auVar28._4_4_;
  auVar29._4_4_ = fVar2 * fVar2;
  fVar3 = auVar28._8_4_;
  auVar29._8_4_ = fVar3 * fVar3;
  fVar4 = auVar28._12_4_;
  auVar29._12_4_ = fVar4 * fVar4;
  auVar16._0_4_ = auVar17._0_4_ * auVar17._0_4_;
  auVar16._4_4_ = auVar17._4_4_ * auVar17._4_4_;
  auVar16._8_4_ = auVar17._8_4_ * auVar17._8_4_;
  auVar16._12_4_ = auVar17._12_4_ * auVar17._12_4_;
  auVar17 = vblendps_avx(auVar29,auVar11,8);
  auVar28 = vblendps_avx(auVar16,auVar11,8);
  auVar17 = vhaddps_avx(auVar17,auVar17);
  auVar28 = vhaddps_avx(auVar28,auVar28);
  auVar17 = vhaddps_avx(auVar17,auVar17);
  auVar28 = vhaddps_avx(auVar28,auVar28);
  fVar7 = (param_3 * auVar17._0_4_) / auVar28._0_4_;
  if (_DAT_145fc6ed8 < fVar7) {
    fVar7 = SQRT(_DAT_145fc6ed8 / fVar7) + _DAT_145fc6f48;
    fVar8 = fVar7 * fVar2 * _DAT_146163980;
    fVar44 = fVar7 * fVar3 * _DAT_146163980;
    fVar45 = fVar7 * fVar4 * _DAT_146163980;
    *(float *)param_2[7] = fVar7 * fVar1 * _DAT_146163980 + auVar14._0_4_;
    *(float *)(param_2[7] + 4) = fVar8 + auVar14._4_4_;
    *(float *)(param_2[7] + 8) = fVar44 + auVar14._8_4_;
    *(float *)(param_2[7] + 0xc) = fVar45 + auVar14._12_4_;
    auVar23._0_4_ = fVar7 * fVar1 * _DAT_14615a6b8 + auVar36._0_4_;
    auVar23._4_4_ = fVar7 * fVar2 * _DAT_14615a6b8 + auVar36._4_4_;
    auVar23._8_4_ = fVar7 * fVar3 * _DAT_14615a6b8 + auVar36._8_4_;
    auVar23._12_4_ = fVar7 * fVar4 * _DAT_14615a6b8 + auVar36._12_4_;
  }
  else {
    auVar23 = auVar36;
    if (cVar5 == '\0') {
      return 0;
    }
  }
  auVar46 = vsubps_avx(auVar46,auVar23);
  auVar43 = vsubps_avx(auVar43,auVar23);
  *(float *)*param_2 = auVar43._0_4_ + (float)auStack_128._0_4_;
  *(float *)(*param_2 + 4) = auVar43._4_4_ + (float)auStack_128._4_4_;
  *(float *)(*param_2 + 8) = auVar43._8_4_ + fStack_120;
  *(float *)(*param_2 + 0xc) = auVar43._12_4_ + fStack_11c;
  auVar43 = vsubps_avx(auVar39,auVar23);
  *(float *)param_2[1] = auVar43._0_4_ + (float)auStack_138._0_4_;
  *(float *)(param_2[1] + 4) = auVar43._4_4_ + (float)auStack_138._4_4_;
  *(float *)(param_2[1] + 8) = auVar43._8_4_ + fStack_130;
  *(float *)(param_2[1] + 0xc) = auVar43._12_4_ + fStack_12c;
  auVar43 = vsubps_avx(auVar37,auVar23);
  *(float *)param_2[2] = auVar18._0_4_ + auVar43._0_4_;
  *(float *)(param_2[2] + 4) = auVar18._4_4_ + auVar43._4_4_;
  *(float *)(param_2[2] + 8) = auVar18._8_4_ + auVar43._8_4_;
  *(float *)(param_2[2] + 0xc) = auVar18._12_4_ + auVar43._12_4_;
  *(float *)param_2[3] = auVar46._0_4_ + auVar19._0_4_;
  *(float *)(param_2[3] + 4) = auVar46._4_4_ + auVar19._4_4_;
  *(float *)(param_2[3] + 8) = auVar46._8_4_ + auVar19._8_4_;
  *(float *)(param_2[3] + 0xc) = auVar46._12_4_ + auVar19._12_4_;
  auVar43 = vsubps_avx(auVar24,auVar23);
  *(float *)param_2[4] = auVar43._0_4_ + auVar20._0_4_;
  *(float *)(param_2[4] + 4) = auVar43._4_4_ + auVar20._4_4_;
  *(float *)(param_2[4] + 8) = auVar43._8_4_ + auVar20._8_4_;
  *(float *)(param_2[4] + 0xc) = auVar43._12_4_ + auVar20._12_4_;
  auVar43 = vsubps_avx(auVar31,auVar23);
  *(float *)param_2[5] = auVar9._0_4_ + auVar43._0_4_;
  *(float *)(param_2[5] + 4) = auVar9._4_4_ + auVar43._4_4_;
  *(float *)(param_2[5] + 8) = auVar9._8_4_ + auVar43._8_4_;
  *(float *)(param_2[5] + 0xc) = auVar9._12_4_ + auVar43._12_4_;
  auVar43 = vsubps_avx(auVar36,auVar23);
  *(float *)param_2[6] = auVar22._0_4_ + auVar43._0_4_;
  *(float *)(param_2[6] + 4) = auVar22._4_4_ + auVar43._4_4_;
  *(float *)(param_2[6] + 8) = auVar22._8_4_ + auVar43._8_4_;
  *(float *)(param_2[6] + 0xc) = auVar22._12_4_ + auVar43._12_4_;
  return 1;
}

