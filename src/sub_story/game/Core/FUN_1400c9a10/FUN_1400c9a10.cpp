// Recovered from game_scarlett_master.exe (GTA VI, Xbox Series X, PE32+ x64)
// Address: 1400c9a10  size: 848 bytes
// Name:    FUN_1400c9a10
// Subsystem: core
//
// Referenced strings (0 in this body, 0 including direct callees):
// Callees: FUN_1400c9d80, FUN_1400e3f90, FUN_1400c9e20, FUN_1400cc8b0, FUN_1400ca2a0, FUN_1400ca040
//
// Generated decompilation. Formatting follows MiscRef/GTAVSRC conventions;
// identifiers are recovered, not original. See ../../../README.md.

#include "gta6decomp/rage_types.h"


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1400c9a10(longlong param_1,longlong *param_2,longlong param_3,longlong param_4,
                  longlong param_5,undefined4 *param_6)

{
  undefined1 auVar1 [16];
  undefined1 auVar2 [16];
  undefined1 auVar3 [16];
  byte bVar4;
  undefined8 unaff_RBP;
  float fVar5;
  undefined8 uVar6;
  undefined8 uVar7;
  undefined8 uVar8;
  float fVar9;
  float fVar10;
  float fVar11;
  undefined1 auVar12 [16];
  undefined1 auVar13 [16];
  undefined1 auVar14 [16];
  float fVar16;
  float fVar17;
  undefined1 auVar15 [16];
  float fVar18;
  undefined4 uVar19;
  undefined1 auVar20 [64];
  undefined1 auVar21 [16];
  longlong lVar22;
  undefined1 auStack_a8 [16];
  undefined1 auStack_98 [16];
  undefined1 auStack_88 [16];
  undefined1 auStack_78 [16];
  
  bVar4 = *(byte *)(param_6 + 1);
  if (((bVar4 & 1) != 0) || (0.0 < *(float *)(param_4 + 0x174))) {
    uVar6 = FUN_1400ca2a0(param_1,param_3,param_4,param_5);
    uVar7 = FUN_1400c9d80(param_3,param_4,*(undefined1 *)(param_5 + 0x110),
                          CONCAT71((int7)((ulonglong)unaff_RBP >> 8),bVar4) & 0xffffffff);
    uVar8 = FUN_1400c9e20(param_1,param_3,*(undefined1 *)(param_5 + 0x110),*param_6);
    uVar6 = func_0x0001400c9d60(*(undefined1 *)(param_1 + 0x60),uVar6,uVar7,uVar8);
    uVar19 = (undefined4)uVar7;
    uVar7 = FUN_1400ca040(param_1,param_2,uVar6,param_3,param_4,param_5,param_6);
    fVar9 = (float)uVar6;
    lVar22 = param_5;
    FUN_1400cc8b0(param_1,uVar7,param_4 + 0x194,param_4 + 0x198,uVar19,param_3,param_5);
    fVar5 = *(float *)(param_4 + 0x194) + *(float *)(param_5 + 0x78);
    auVar12._4_4_ = fVar5;
    auVar12._0_4_ = fVar5;
    auVar12._8_4_ = fVar5;
    auVar12._12_4_ = fVar5;
    auVar1 = vblendps_avx(*(undefined1 (*) [16])(param_5 + 0x70),auVar12,4);
    *(undefined1 (*) [16])(param_5 + 0x70) = auVar1;
    fVar5 = *(float *)(param_4 + 0x194) + *(float *)(param_5 + 0xa8);
    auVar1._4_4_ = fVar5;
    auVar1._0_4_ = fVar5;
    auVar1._8_4_ = fVar5;
    auVar1._12_4_ = fVar5;
    auVar1 = vblendps_avx(*(undefined1 (*) [16])(param_5 + 0xa0),auVar1,4);
    *(undefined1 (*) [16])(param_5 + 0xa0) = auVar1;
    auVar1 = *(undefined1 (*) [16])(param_3 + 0x90);
    auVar12 = vpunpckhwd_avx(auVar1,auVar1);
    auVar12 = vpsrad_avx(auVar12,0x10);
    auVar12 = vcvtdq2ps_avx(auVar12);
    auVar12 = vshufpd_avx(auVar12,auVar12,3);
    auVar13._0_4_ = auVar12._0_4_ * _DAT_146159c90 + auVar1._0_4_;
    auVar13._4_4_ = auVar12._4_4_ * _UNK_146159c94 + auVar1._4_4_;
    auVar13._8_4_ = auVar12._8_4_ * _UNK_146159c98 + auVar1._8_4_;
    auVar13._12_4_ = auVar12._12_4_ * _UNK_146159c9c + auVar1._12_4_;
    auVar1 = vshufpd_avx(auVar13,auVar13,1);
    if (((auVar1._0_4_ - fVar9 <= *(float *)(param_1 + 0x360)) ||
        ((*(byte *)(param_3 + 0x120) & 0x20) != 0)) || ((*(byte *)(param_3 + 0x140) & 8) != 0)) {
      bVar4 = 0;
    }
    else {
      bVar4 = ~*(byte *)(param_3 + 0x120) & 1;
    }
    *(byte *)(param_4 + 0x1a5) = *(byte *)(param_4 + 0x1a5) & 0xfe | bVar4;
    if ((bVar4 != 0) || (*(float *)(param_4 + 0x18c) < 0.0)) {
      FUN_1400e3f90(param_1,param_2,param_3,param_4,param_5,uVar19,
                    CONCAT71((int7)((ulonglong)lVar22 >> 8),bVar4) ^ 1);
    }
    auVar20 = ZEXT1664(*(undefined1 (*) [16])(param_5 + 0x70));
    (**(code **)(*param_2 + 0x88))(param_2,auStack_a8);
    auVar21._0_12_ = ZEXT812(0);
    auVar21._12_4_ = 0;
    auVar12 = vsubps_avx(auVar20._0_16_,auStack_78);
    auVar1 = vpsubw_avx(auVar20._0_16_,auStack_78);
    auVar1 = vblendps_avx(auVar12,auVar1,8);
    auVar12 = vpunpckhwd_avx(auVar1,auVar1);
    auVar12 = vpsrad_avx(auVar12,0x10);
    auVar12 = vcvtdq2ps_avx(auVar12);
    auVar12 = vshufpd_avx(auVar12,auVar12,3);
    auVar14._0_4_ = auVar12._0_4_ * _DAT_146159c90 + auVar1._0_4_;
    auVar14._4_4_ = auVar12._4_4_ * _UNK_146159c94 + auVar1._4_4_;
    auVar14._8_4_ = auVar12._8_4_ * _UNK_146159c98 + auVar1._8_4_;
    auVar14._12_4_ = auVar12._12_4_ * _UNK_146159c9c + auVar1._12_4_;
    auVar1 = vshufps_avx(auStack_88,auStack_98,0x33);
    auVar13 = vunpcklps_avx(auStack_98,auVar21);
    auVar1 = vshufps_avx(auStack_98,auVar1,0x8f);
    auVar12 = vunpckhps_avx(auStack_98,auVar21);
    auVar15._0_4_ = auVar1._0_4_ + _DAT_145fc6ed8;
    auVar15._4_4_ = auVar1._4_4_ + _DAT_145fc6ed8;
    auVar15._8_4_ = auVar1._8_4_ + _DAT_145fc6ed8;
    auVar15._12_4_ = auVar1._12_4_ + _DAT_145fc6ed8;
    auVar21 = vunpcklps_avx(auStack_a8,auStack_88);
    auVar1 = vunpckhps_avx(auStack_a8,auStack_88);
    auVar2 = vunpcklps_avx(auVar1,auVar12);
    auVar3 = vunpcklps_avx(auVar21,auVar13);
    auVar21 = vunpckhps_avx(auVar21,auVar13);
    auVar12 = vshufps_avx(auVar14,auVar14,0x55);
    auVar13 = vshufps_avx(auVar14,auVar14,0xaa);
    auVar1 = vrcpps_avx(auVar15);
    fVar5 = auVar1._0_4_;
    fVar9 = auVar1._4_4_;
    fVar16 = fVar9 * auVar15._4_4_ - _DAT_145fc6ed8;
    fVar10 = auVar1._8_4_;
    fVar17 = fVar10 * auVar15._8_4_ - _DAT_145fc6ed8;
    fVar11 = auVar1._12_4_;
    fVar18 = fVar11 * auVar15._12_4_ - _DAT_145fc6ed8;
    *(float *)(param_4 + 0xd0) =
         (-(auVar2._0_4_ * auVar13._0_4_) -
         (auVar21._0_4_ * auVar12._0_4_ + auVar14._0_4_ * auVar3._0_4_)) *
         ((fVar5 * auVar15._0_4_ - _DAT_145fc6ed8) * fVar5 - fVar5);
    *(float *)(param_4 + 0xd4) =
         (-(auVar2._4_4_ * auVar13._4_4_) -
         (auVar21._4_4_ * auVar12._4_4_ + auVar14._0_4_ * auVar3._4_4_)) * (fVar16 * fVar9 - fVar9);
    *(float *)(param_4 + 0xd8) =
         (-(auVar2._8_4_ * auVar13._8_4_) -
         (auVar21._8_4_ * auVar12._8_4_ + auVar14._0_4_ * auVar3._8_4_)) *
         (fVar17 * fVar10 - fVar10);
    *(float *)(param_4 + 0xdc) =
         (-(auVar2._12_4_ * auVar13._12_4_) -
         (auVar21._12_4_ * auVar12._12_4_ + auVar14._0_4_ * auVar3._12_4_)) *
         (fVar18 * fVar11 - fVar11);
    fVar5 = *(float *)(param_4 + 0x194);
    fVar9 = fVar5 * _UNK_14614f7f4;
    fVar10 = fVar5 * _UNK_14614f7f8;
    fVar11 = fVar5 * _UNK_14614f7fc;
    *(float *)(param_4 + 0x110) = fVar5 * _DAT_14614f7f0;
    *(float *)(param_4 + 0x114) = fVar9;
    *(float *)(param_4 + 0x118) = fVar10;
    *(float *)(param_4 + 0x11c) = fVar11;
  }
  else {
    *(undefined4 *)(param_4 + 0x194) = 0;
    *(undefined4 *)(param_4 + 0x18c) = 0;
  }
  return;
}

