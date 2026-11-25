// Recovered from game_scarlett_master.exe (GTA VI, Xbox Series X, PE32+ x64)
// Address: 1400c97d0  size: 574 bytes
// Name:    FUN_1400c97d0
// Subsystem: core
//
// Referenced strings (0 in this body, 0 including direct callees):
// Callees: FUN_143404890, FUN_143404aa0
//
// Generated decompilation. Formatting follows MiscRef/GTAVSRC conventions;
// identifiers are recovered, not original. See ../../../README.md.

#include "gta6decomp/rage_types.h"


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1400c97d0(longlong param_1,longlong *param_2,longlong param_3,longlong param_4,
                  longlong param_5,byte param_6)

{
  undefined1 auVar1 [16];
  undefined1 auVar2 [16];
  undefined1 auVar3 [16];
  float fVar4;
  undefined8 uVar5;
  undefined8 uVar6;
  float fVar7;
  float fVar8;
  float fVar9;
  undefined1 auVar10 [16];
  undefined1 auVar11 [16];
  undefined1 auVar12 [16];
  float fVar14;
  float fVar15;
  undefined1 auVar13 [16];
  float fVar16;
  undefined1 auVar17 [64];
  undefined4 uVar18;
  undefined1 auVar19 [16];
  undefined1 auStack_98 [16];
  undefined1 auStack_88 [16];
  undefined1 auStack_78 [16];
  undefined1 auStack_68 [16];
  
  if (((param_6 & 1) != 0) || (0.0 < *(float *)(param_4 + 0x94))) {
    uVar5 = func_0x0001418fb150(*(undefined4 *)(param_1 + 0x35c),*(undefined4 *)(param_5 + 0x34));
    uVar6 = FUN_143404aa0(param_4);
    uVar5 = func_0x000143404b50(*(undefined4 *)(param_3 + 0x98),*(undefined4 *)(param_3 + 0xe4),
                                uVar5,uVar6);
    uVar18 = (undefined4)uVar6;
    uVar5 = func_0x000143404810(uVar5,*(undefined1 *)(param_3 + 0x120),param_5,1);
    FUN_143404890(param_1,uVar5,param_4 + 0xa0,param_4 + 0xa4,uVar18,param_3,param_5,1);
    fVar4 = *(float *)(param_4 + 0xa0) + *(float *)(param_5 + 0x98);
    auVar10._4_4_ = fVar4;
    auVar10._0_4_ = fVar4;
    auVar10._8_4_ = fVar4;
    auVar10._12_4_ = fVar4;
    auVar10 = vblendps_avx(*(undefined1 (*) [16])(param_5 + 0x90),auVar10,4);
    auVar17 = ZEXT1664(auVar10);
    *(undefined1 (*) [16])(param_5 + 0x90) = auVar10;
    (**(code **)(*param_2 + 0x88))(param_2,auStack_98);
    auVar19._0_12_ = ZEXT812(0);
    auVar19._12_4_ = 0;
    auVar11 = vsubps_avx(auVar17._0_16_,auStack_68);
    auVar10 = vpsubw_avx(auVar17._0_16_,auStack_68);
    auVar10 = vblendps_avx(auVar11,auVar10,8);
    auVar11 = vpunpckhwd_avx(auVar10,auVar10);
    auVar11 = vpsrad_avx(auVar11,0x10);
    auVar11 = vcvtdq2ps_avx(auVar11);
    auVar11 = vshufpd_avx(auVar11,auVar11,3);
    auVar12._0_4_ = auVar11._0_4_ * _DAT_146159c90 + auVar10._0_4_;
    auVar12._4_4_ = auVar11._4_4_ * _UNK_146159c94 + auVar10._4_4_;
    auVar12._8_4_ = auVar11._8_4_ * _UNK_146159c98 + auVar10._8_4_;
    auVar12._12_4_ = auVar11._12_4_ * _UNK_146159c9c + auVar10._12_4_;
    auVar10 = vshufps_avx(auStack_78,auStack_88,0x33);
    auVar1 = vunpcklps_avx(auStack_88,auVar19);
    auVar10 = vshufps_avx(auStack_88,auVar10,0x8f);
    auVar11 = vunpckhps_avx(auStack_88,auVar19);
    auVar13._0_4_ = auVar10._0_4_ + _DAT_145fc6ed8;
    auVar13._4_4_ = auVar10._4_4_ + _DAT_145fc6ed8;
    auVar13._8_4_ = auVar10._8_4_ + _DAT_145fc6ed8;
    auVar13._12_4_ = auVar10._12_4_ + _DAT_145fc6ed8;
    auVar19 = vunpcklps_avx(auStack_98,auStack_78);
    auVar10 = vunpckhps_avx(auStack_98,auStack_78);
    auVar2 = vunpcklps_avx(auVar10,auVar11);
    auVar3 = vunpcklps_avx(auVar19,auVar1);
    auVar19 = vunpckhps_avx(auVar19,auVar1);
    auVar11 = vshufps_avx(auVar12,auVar12,0x55);
    auVar1 = vshufps_avx(auVar12,auVar12,0xaa);
    auVar10 = vrcpps_avx(auVar13);
    fVar4 = auVar10._0_4_;
    fVar7 = auVar10._4_4_;
    fVar14 = fVar7 * auVar13._4_4_ - _DAT_145fc6ed8;
    fVar8 = auVar10._8_4_;
    fVar15 = fVar8 * auVar13._8_4_ - _DAT_145fc6ed8;
    fVar9 = auVar10._12_4_;
    fVar16 = fVar9 * auVar13._12_4_ - _DAT_145fc6ed8;
    *(float *)(param_4 + 0x60) =
         (-(auVar2._0_4_ * auVar1._0_4_) -
         (auVar19._0_4_ * auVar11._0_4_ + auVar12._0_4_ * auVar3._0_4_)) *
         ((fVar4 * auVar13._0_4_ - _DAT_145fc6ed8) * fVar4 - fVar4);
    *(float *)(param_4 + 100) =
         (-(auVar2._4_4_ * auVar1._4_4_) -
         (auVar19._4_4_ * auVar11._4_4_ + auVar12._0_4_ * auVar3._4_4_)) * (fVar14 * fVar7 - fVar7);
    *(float *)(param_4 + 0x68) =
         (-(auVar2._8_4_ * auVar1._8_4_) -
         (auVar19._8_4_ * auVar11._8_4_ + auVar12._0_4_ * auVar3._8_4_)) * (fVar15 * fVar8 - fVar8);
    *(float *)(param_4 + 0x6c) =
         (-(auVar2._12_4_ * auVar1._12_4_) -
         (auVar19._12_4_ * auVar11._12_4_ + auVar12._0_4_ * auVar3._12_4_)) *
         (fVar16 * fVar9 - fVar9);
    fVar4 = *(float *)(param_4 + 0xa0);
    fVar7 = fVar4 * _UNK_14614f7f4;
    fVar8 = fVar4 * _UNK_14614f7f8;
    fVar9 = fVar4 * _UNK_14614f7fc;
    *(float *)(param_4 + 0x80) = fVar4 * _DAT_14614f7f0;
    *(float *)(param_4 + 0x84) = fVar7;
    *(float *)(param_4 + 0x88) = fVar8;
    *(float *)(param_4 + 0x8c) = fVar9;
  }
  else {
    *(undefined4 *)(param_4 + 0xa0) = 0;
  }
  return;
}

