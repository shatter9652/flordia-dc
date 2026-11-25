// Recovered from game_scarlett_master.exe (GTA VI, Xbox Series X, PE32+ x64)
// Address: 1400c95c0  size: 513 bytes
// Name:    FUN_1400c95c0
// Subsystem: core
//
// Referenced strings (0 in this body, 0 including direct callees):
// Callees: FUN_143404890
//
// Generated decompilation. Formatting follows MiscRef/GTAVSRC conventions;
// identifiers are recovered, not original. See ../../../README.md.

#include "gta6decomp/rage_types.h"


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1400c95c0(longlong param_1,longlong *param_2,longlong param_3,longlong param_4,
                  longlong param_5,byte param_6)

{
  undefined1 auVar1 [16];
  undefined1 auVar2 [16];
  undefined1 auVar3 [16];
  float fVar4;
  undefined8 uVar5;
  float fVar6;
  float fVar7;
  float fVar8;
  undefined1 auVar9 [16];
  undefined1 auVar10 [16];
  undefined1 auVar11 [16];
  float fVar13;
  float fVar14;
  undefined1 auVar12 [16];
  float fVar15;
  undefined4 uVar16;
  undefined1 auVar17 [64];
  undefined1 auVar18 [16];
  undefined1 auStack_98 [16];
  undefined1 auStack_88 [16];
  undefined1 auStack_78 [16];
  undefined1 auStack_68 [16];
  
  if (((param_6 & 1) != 0) || (0.0 < *(float *)(param_4 + 0x94))) {
    uVar5 = func_0x0001418fb150(*(undefined4 *)(param_1 + 0x358),*(undefined4 *)(param_5 + 0x30));
    uVar16 = *(undefined4 *)(param_4 + 0x38);
    uVar5 = func_0x000143404800(uVar5,uVar16);
    uVar5 = func_0x000143404810(uVar5,*(undefined1 *)(param_3 + 0x120),param_5,0);
    FUN_143404890(param_1,uVar5,param_4 + 0x98,param_4 + 0x9c,uVar16,param_3,param_5,0);
    fVar4 = *(float *)(param_4 + 0x98) + *(float *)(param_5 + 0x68);
    auVar9._4_4_ = fVar4;
    auVar9._0_4_ = fVar4;
    auVar9._8_4_ = fVar4;
    auVar9._12_4_ = fVar4;
    auVar9 = vblendps_avx(*(undefined1 (*) [16])(param_5 + 0x60),auVar9,4);
    auVar17 = ZEXT1664(auVar9);
    *(undefined1 (*) [16])(param_5 + 0x60) = auVar9;
    (**(code **)(*param_2 + 0x88))(param_2,auStack_98);
    auVar18._0_12_ = ZEXT812(0);
    auVar18._12_4_ = 0;
    auVar10 = vsubps_avx(auVar17._0_16_,auStack_68);
    auVar9 = vpsubw_avx(auVar17._0_16_,auStack_68);
    auVar9 = vblendps_avx(auVar10,auVar9,8);
    auVar10 = vpunpckhwd_avx(auVar9,auVar9);
    auVar10 = vpsrad_avx(auVar10,0x10);
    auVar10 = vcvtdq2ps_avx(auVar10);
    auVar10 = vshufpd_avx(auVar10,auVar10,3);
    auVar11._0_4_ = auVar10._0_4_ * _DAT_146159c90 + auVar9._0_4_;
    auVar11._4_4_ = auVar10._4_4_ * _UNK_146159c94 + auVar9._4_4_;
    auVar11._8_4_ = auVar10._8_4_ * _UNK_146159c98 + auVar9._8_4_;
    auVar11._12_4_ = auVar10._12_4_ * _UNK_146159c9c + auVar9._12_4_;
    auVar9 = vshufps_avx(auStack_78,auStack_88,0x33);
    auVar1 = vunpcklps_avx(auStack_88,auVar18);
    auVar9 = vshufps_avx(auStack_88,auVar9,0x8f);
    auVar10 = vunpckhps_avx(auStack_88,auVar18);
    auVar12._0_4_ = auVar9._0_4_ + _DAT_145fc6ed8;
    auVar12._4_4_ = auVar9._4_4_ + _DAT_145fc6ed8;
    auVar12._8_4_ = auVar9._8_4_ + _DAT_145fc6ed8;
    auVar12._12_4_ = auVar9._12_4_ + _DAT_145fc6ed8;
    auVar18 = vunpcklps_avx(auStack_98,auStack_78);
    auVar9 = vunpckhps_avx(auStack_98,auStack_78);
    auVar2 = vunpcklps_avx(auVar9,auVar10);
    auVar3 = vunpcklps_avx(auVar18,auVar1);
    auVar18 = vunpckhps_avx(auVar18,auVar1);
    auVar10 = vshufps_avx(auVar11,auVar11,0x55);
    auVar1 = vshufps_avx(auVar11,auVar11,0xaa);
    auVar9 = vrcpps_avx(auVar12);
    fVar4 = auVar9._0_4_;
    fVar6 = auVar9._4_4_;
    fVar13 = fVar6 * auVar12._4_4_ - _DAT_145fc6ed8;
    fVar7 = auVar9._8_4_;
    fVar14 = fVar7 * auVar12._8_4_ - _DAT_145fc6ed8;
    fVar8 = auVar9._12_4_;
    fVar15 = fVar8 * auVar12._12_4_ - _DAT_145fc6ed8;
    *(float *)(param_4 + 0x50) =
         (-(auVar2._0_4_ * auVar1._0_4_) -
         (auVar18._0_4_ * auVar10._0_4_ + auVar11._0_4_ * auVar3._0_4_)) *
         ((fVar4 * auVar12._0_4_ - _DAT_145fc6ed8) * fVar4 - fVar4);
    *(float *)(param_4 + 0x54) =
         (-(auVar2._4_4_ * auVar1._4_4_) -
         (auVar18._4_4_ * auVar10._4_4_ + auVar11._0_4_ * auVar3._4_4_)) * (fVar13 * fVar6 - fVar6);
    *(float *)(param_4 + 0x58) =
         (-(auVar2._8_4_ * auVar1._8_4_) -
         (auVar18._8_4_ * auVar10._8_4_ + auVar11._0_4_ * auVar3._8_4_)) * (fVar14 * fVar7 - fVar7);
    *(float *)(param_4 + 0x5c) =
         (-(auVar2._12_4_ * auVar1._12_4_) -
         (auVar18._12_4_ * auVar10._12_4_ + auVar11._0_4_ * auVar3._12_4_)) *
         (fVar15 * fVar8 - fVar8);
    fVar4 = *(float *)(param_4 + 0x98);
    fVar6 = fVar4 * _UNK_14614f7f4;
    fVar7 = fVar4 * _UNK_14614f7f8;
    fVar8 = fVar4 * _UNK_14614f7fc;
    *(float *)(param_4 + 0x70) = fVar4 * _DAT_14614f7f0;
    *(float *)(param_4 + 0x74) = fVar6;
    *(float *)(param_4 + 0x78) = fVar7;
    *(float *)(param_4 + 0x7c) = fVar8;
  }
  else {
    *(undefined4 *)(param_4 + 0x98) = 0;
  }
  return;
}

