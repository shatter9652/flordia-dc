// Recovered from game_scarlett_master.exe (GTA VI, Xbox Series X, PE32+ x64)
// Address: 14019d120  size: 367 bytes
// Name:    FUN_14019d120
// Subsystem: core
//
// Referenced strings (0 in this body, 0 including direct callees):
// Callees: 
//
// Generated decompilation. Formatting follows MiscRef/GTAVSRC conventions;
// identifiers are recovered, not original. See ../../../README.md.

#include "gta6decomp/rage_types.h"


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_14019d120(longlong param_1,undefined8 *param_2,undefined8 *param_3,undefined4 param_4,
                  undefined1 (*param_5) [16],float *param_6)

{
  undefined1 auVar1 [16];
  undefined1 auVar2 [16];
  undefined1 auVar3 [16];
  undefined8 uVar4;
  undefined8 uVar5;
  undefined8 uVar6;
  undefined8 uVar7;
  undefined8 uVar8;
  undefined8 uVar9;
  undefined8 uVar10;
  float fVar11;
  undefined1 auVar12 [16];
  undefined1 auVar13 [16];
  float fVar14;
  float fVar16;
  float fVar17;
  float fVar18;
  undefined1 auVar15 [16];
  float fVar19;
  float fVar20;
  float fVar21;
  float fVar22;
  float fVar23;
  float fVar24;
  float fVar26;
  float fVar27;
  float fVar28;
  undefined1 auVar25 [16];
  undefined1 auVar29 [16];
  undefined1 auVar30 [16];
  
  fVar11 = _DAT_145fc6ed8;
  uVar4 = *param_2;
  uVar5 = param_2[1];
  uVar6 = param_2[2];
  uVar7 = param_2[3];
  uVar8 = param_2[5];
  uVar9 = param_2[6];
  uVar10 = param_2[7];
  *(undefined8 *)(param_1 + 0x80) = param_2[4];
  *(undefined8 *)(param_1 + 0x88) = uVar8;
  *(undefined8 *)(param_1 + 0x90) = uVar9;
  *(undefined8 *)(param_1 + 0x98) = uVar10;
  *(undefined8 *)(param_1 + 0x60) = uVar4;
  *(undefined8 *)(param_1 + 0x68) = uVar5;
  *(undefined8 *)(param_1 + 0x70) = uVar6;
  *(undefined8 *)(param_1 + 0x78) = uVar7;
  uVar4 = param_3[1];
  uVar5 = param_3[2];
  uVar6 = param_3[3];
  *(undefined8 *)(param_1 + 0xa0) = *param_3;
  *(undefined8 *)(param_1 + 0xa8) = uVar4;
  *(undefined8 *)(param_1 + 0xb0) = uVar5;
  *(undefined8 *)(param_1 + 0xb8) = uVar6;
  *(undefined4 *)(param_1 + 0xc0) = param_4;
  auVar1 = *param_5;
  auVar2 = param_5[1];
  auVar12._0_4_ = auVar1._0_4_ ^ _DAT_145fc6f10;
  auVar12._4_4_ = auVar1._4_4_ ^ _DAT_145fc6f10;
  auVar12._8_4_ = auVar1._8_4_ ^ _DAT_145fc6f10;
  auVar12._12_4_ = auVar1._12_4_ ^ _DAT_145fc6f10;
  auVar3 = vshufps_avx(auVar2,auVar2,0xd2);
  auVar15 = vshufps_avx(auVar2,auVar2,0xc9);
  auVar1 = vblendps_avx(auVar12,auVar1,8);
  auVar12 = vshufps_avx(auVar1,auVar1,0xc9);
  auVar25 = vshufps_avx(auVar1,auVar1,0xd2);
  auVar13._0_4_ = auVar1._0_4_ + auVar1._0_4_;
  auVar13._4_4_ = auVar1._4_4_ + auVar1._4_4_;
  auVar13._8_4_ = auVar1._8_4_ + auVar1._8_4_;
  auVar13._12_4_ = auVar1._12_4_ + auVar1._12_4_;
  fVar14 = auVar12._0_4_;
  fVar16 = auVar12._4_4_;
  fVar17 = auVar12._8_4_;
  fVar18 = auVar12._12_4_;
  fVar20 = auVar25._0_4_;
  fVar24 = -(fVar20 * auVar15._0_4_) + fVar14 * auVar3._0_4_;
  fVar21 = auVar25._4_4_;
  fVar26 = -(fVar21 * auVar15._4_4_) + fVar16 * auVar3._4_4_;
  fVar22 = auVar25._8_4_;
  fVar27 = -(fVar22 * auVar15._8_4_) + fVar17 * auVar3._8_4_;
  fVar23 = auVar25._12_4_;
  fVar28 = -(fVar23 * auVar15._12_4_) + fVar18 * auVar3._12_4_;
  auVar25._0_4_ = fVar24 + fVar24;
  auVar25._4_4_ = fVar26 + fVar26;
  auVar25._8_4_ = fVar27 + fVar27;
  auVar25._12_4_ = fVar28 + fVar28;
  auVar1 = vshufps_avx(auVar25,auVar25,0xd2);
  auVar3 = vshufps_avx(auVar25,auVar25,0xc9);
  fVar24 = *(float *)(*param_5 + 0xc);
  fVar26 = (fVar20 * auVar3._0_4_ - auVar1._0_4_ * fVar14) +
           (-(fVar24 * auVar25._0_4_) - auVar2._0_4_);
  fVar27 = (fVar21 * auVar3._4_4_ - auVar1._4_4_ * fVar16) +
           (-(fVar24 * auVar25._4_4_) - auVar2._4_4_);
  fVar28 = (fVar22 * auVar3._8_4_ - auVar1._8_4_ * fVar17) +
           (-(fVar24 * auVar25._8_4_) - auVar2._8_4_);
  fVar19 = (fVar23 * auVar3._12_4_ - auVar1._12_4_ * fVar18) +
           (-(fVar24 * auVar25._12_4_) - auVar2._12_4_);
  auVar1 = vshufps_avx(auVar13,auVar13,0xc9);
  auVar2 = vshufps_avx(auVar13,auVar13,0xd2);
  auVar15._0_4_ = -(fVar24 * auVar2._0_4_) + fVar14 * auVar13._0_4_;
  auVar15._4_4_ = -(fVar24 * auVar2._4_4_) + fVar16 * auVar13._4_4_;
  auVar15._8_4_ = -(fVar24 * auVar2._8_4_) + fVar17 * auVar13._8_4_;
  auVar15._12_4_ = -(fVar24 * auVar2._12_4_) + fVar18 * auVar13._12_4_;
  auVar29._0_4_ = fVar20 * auVar13._0_4_ + auVar1._0_4_ * fVar24;
  auVar29._4_4_ = fVar21 * auVar13._4_4_ + auVar1._4_4_ * fVar24;
  auVar29._8_4_ = fVar22 * auVar13._8_4_ + auVar1._8_4_ * fVar24;
  auVar29._12_4_ = fVar23 * auVar13._12_4_ + auVar1._12_4_ * fVar24;
  auVar30._0_4_ = -(auVar2._0_4_ * fVar20) - (fVar14 * auVar1._0_4_ - fVar11);
  auVar30._4_4_ = -(auVar2._4_4_ * fVar21) - (fVar16 * auVar1._4_4_ - fVar11);
  auVar30._8_4_ = -(auVar2._8_4_ * fVar22) - (fVar17 * auVar1._8_4_ - fVar11);
  auVar30._12_4_ = -(auVar2._12_4_ * fVar23) - (fVar18 * auVar1._12_4_ - fVar11);
  auVar1 = vblendps_avx(auVar29,auVar15,2);
  auVar2 = vblendps_avx(auVar30,auVar29,2);
  auVar3 = vblendps_avx(auVar15,auVar30,2);
  auVar2 = vblendps_avx(auVar15,auVar2,3);
  auVar3 = vblendps_avx(auVar29,auVar3,3);
  auVar1 = vblendps_avx(auVar30,auVar1,3);
  *(undefined1 (*) [16])(param_1 + 0xd0) = auVar2;
  *(undefined1 (*) [16])(param_1 + 0xe0) = auVar3;
  *(undefined1 (*) [16])(param_1 + 0xf0) = auVar1;
  *(float *)(param_1 + 0x100) = fVar26;
  *(float *)(param_1 + 0x104) = fVar27;
  *(float *)(param_1 + 0x108) = fVar28;
  *(float *)(param_1 + 0x10c) = fVar19;
  fVar24 = *param_6;
  *(float *)(param_1 + 0xd0) = auVar2._0_4_ * fVar24;
  *(float *)(param_1 + 0xd4) = auVar2._4_4_ * fVar24;
  *(float *)(param_1 + 0xd8) = auVar2._8_4_ * fVar24;
  *(float *)(param_1 + 0xdc) = auVar2._12_4_ * fVar24;
  *(float *)(param_1 + 0xe0) = auVar3._0_4_ * fVar24;
  *(float *)(param_1 + 0xe4) = auVar3._4_4_ * fVar24;
  *(float *)(param_1 + 0xe8) = auVar3._8_4_ * fVar24;
  *(float *)(param_1 + 0xec) = auVar3._12_4_ * fVar24;
  *(float *)(param_1 + 0xf0) = auVar1._0_4_ * fVar24;
  *(float *)(param_1 + 0xf4) = auVar1._4_4_ * fVar24;
  *(float *)(param_1 + 0xf8) = auVar1._8_4_ * fVar24;
  *(float *)(param_1 + 0xfc) = auVar1._12_4_ * fVar24;
  *(float *)(param_1 + 0x100) = fVar24 * fVar26;
  *(float *)(param_1 + 0x104) = fVar24 * fVar27;
  *(float *)(param_1 + 0x108) = fVar24 * fVar28;
  *(float *)(param_1 + 0x10c) = fVar24 * fVar19;
  return;
}

