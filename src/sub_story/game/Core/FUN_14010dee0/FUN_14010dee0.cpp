// Recovered from game_scarlett_master.exe (GTA VI, Xbox Series X, PE32+ x64)
// Address: 14010dee0  size: 389 bytes
// Name:    FUN_14010dee0
// Subsystem: core
//
// Referenced strings (0 in this body, 0 including direct callees):
// Callees: FUN_140312ef0, FUN_1451d17a0, FUN_1451d15d0
//
// Generated decompilation. Formatting follows MiscRef/GTAVSRC conventions;
// identifiers are recovered, not original. See ../../../README.md.

#include "gta6decomp/rage_types.h"


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_14010dee0(longlong param_1,undefined1 (*param_2) [16],undefined1 (*param_3) [16],
                  undefined1 (*param_4) [16])

{
  undefined1 auVar1 [16];
  float fVar2;
  float fVar3;
  float fVar4;
  undefined1 auVar5 [16];
  undefined8 uVar6;
  undefined1 *puVar7;
  float fVar8;
  float fVar9;
  float fVar11;
  float fVar12;
  float fVar13;
  undefined1 auVar10 [16];
  undefined1 auVar14 [16];
  undefined1 auVar15 [16];
  undefined1 auVar16 [16];
  undefined1 auVar17 [16];
  undefined1 auVar18 [16];
  undefined1 auVar19 [64];
  undefined1 auStack_768 [128];
  undefined8 uStack_6e8;
  undefined8 uStack_6e0;
  undefined8 uStack_6d8;
  undefined8 uStack_6d0;
  undefined8 uStack_6c8;
  undefined8 uStack_6c0;
  undefined8 uStack_6b8;
  undefined8 uStack_6b0;
  
  auVar16 = *param_2;
  auVar15 = *param_3;
  auVar1 = *param_4;
  auVar17._0_12_ = ZEXT812(0);
  auVar17._12_4_ = 0;
  *(undefined1 (*) [16])(param_1 + 0x40) = auVar16;
  auVar16 = vsubps_avx(auVar15,auVar16);
  fVar9 = auVar16._0_4_;
  auVar15._0_4_ = fVar9 * fVar9;
  fVar3 = auVar16._4_4_;
  auVar15._4_4_ = fVar3 * fVar3;
  fVar8 = auVar16._8_4_;
  auVar15._8_4_ = fVar8 * fVar8;
  fVar12 = auVar16._12_4_;
  auVar15._12_4_ = fVar12 * fVar12;
  auVar16 = vblendps_avx(auVar15,auVar17,8);
  auVar16 = vhaddps_avx(auVar16,auVar16);
  auVar16 = vhaddps_avx(auVar16,auVar16);
  auVar15 = vrsqrtps_avx(auVar16);
  fVar2 = auVar15._0_4_;
  fVar4 = auVar15._4_4_;
  fVar11 = auVar15._8_4_;
  fVar13 = auVar15._12_4_;
  auVar14._0_4_ =
       ((_DAT_145fc6f08 * fVar2 * fVar2 * auVar16._0_4_ - _DAT_145fc6f08) * fVar2 + fVar2) * fVar9;
  auVar14._4_4_ =
       ((_DAT_145fc6f08 * fVar4 * fVar4 * auVar16._4_4_ - _DAT_145fc6f08) * fVar4 + fVar4) * fVar3;
  auVar14._8_4_ =
       ((_DAT_145fc6f08 * fVar11 * fVar11 * auVar16._8_4_ - _DAT_145fc6f08) * fVar11 + fVar11) *
       fVar8;
  auVar14._12_4_ =
       ((_DAT_145fc6f08 * fVar13 * fVar13 * auVar16._12_4_ - _DAT_145fc6f08) * fVar13 + fVar13) *
       fVar12;
  auVar16 = vshufps_avx(auVar1,auVar1,0xc9);
  auVar15 = vshufps_avx(auVar1,auVar1,0xd2);
  auVar1 = vshufps_avx(auVar14,auVar14,0xd2);
  auVar5 = vshufps_avx(auVar14,auVar14,0xc9);
  fVar8 = -(auVar5._0_4_ * auVar15._0_4_) + auVar1._0_4_ * auVar16._0_4_;
  fVar11 = -(auVar5._4_4_ * auVar15._4_4_) + auVar1._4_4_ * auVar16._4_4_;
  fVar12 = -(auVar5._8_4_ * auVar15._8_4_) + auVar1._8_4_ * auVar16._8_4_;
  fVar13 = -(auVar5._12_4_ * auVar15._12_4_) + auVar1._12_4_ * auVar16._12_4_;
  auVar16._0_4_ = fVar8 * fVar8;
  auVar16._4_4_ = fVar11 * fVar11;
  auVar16._8_4_ = fVar12 * fVar12;
  auVar16._12_4_ = fVar13 * fVar13;
  auVar16 = vblendps_avx(auVar16,auVar17,8);
  auVar16 = vhaddps_avx(auVar16,auVar16);
  auVar16 = vhaddps_avx(auVar16,auVar16);
  auVar15 = vrsqrtps_avx(auVar16);
  fVar9 = auVar15._0_4_;
  fVar2 = auVar15._4_4_;
  fVar3 = auVar15._8_4_;
  fVar4 = auVar15._12_4_;
  auVar10._0_4_ =
       fVar8 * ((_DAT_145fc6f08 * fVar9 * fVar9 * auVar16._0_4_ - _DAT_145fc6f08) * fVar9 + fVar9);
  auVar10._4_4_ =
       fVar11 * ((_DAT_145fc6f08 * fVar2 * fVar2 * auVar16._4_4_ - _DAT_145fc6f08) * fVar2 + fVar2);
  auVar10._8_4_ =
       fVar12 * ((_DAT_145fc6f08 * fVar3 * fVar3 * auVar16._8_4_ - _DAT_145fc6f08) * fVar3 + fVar3);
  auVar10._12_4_ =
       fVar13 * ((_DAT_145fc6f08 * fVar4 * fVar4 * auVar16._12_4_ - _DAT_145fc6f08) * fVar4 + fVar4)
  ;
  auVar16 = vshufps_avx(auVar10,auVar10,0xd2);
  auVar15 = vshufps_avx(auVar10,auVar10,0xc9);
  *(undefined1 (*) [16])(param_1 + 0x10) = auVar10;
  auVar18._0_4_ = -(auVar1._0_4_ * auVar15._0_4_) + auVar16._0_4_ * auVar5._0_4_;
  auVar18._4_4_ = -(auVar1._4_4_ * auVar15._4_4_) + auVar16._4_4_ * auVar5._4_4_;
  auVar18._8_4_ = -(auVar1._8_4_ * auVar15._8_4_) + auVar16._8_4_ * auVar5._8_4_;
  auVar18._12_4_ = -(auVar1._12_4_ * auVar15._12_4_) + auVar16._12_4_ * auVar5._12_4_;
  *(undefined1 (*) [16])(param_1 + 0x20) = auVar18;
  *(undefined1 (*) [16])(param_1 + 0x30) = auVar14;
  uVar6 = *(undefined8 *)(*param_3 + 8);
  *(undefined8 *)(param_1 + 0x40) = *(undefined8 *)*param_3;
  *(undefined8 *)(param_1 + 0x48) = uVar6;
  puVar7 = auStack_768;
  FUN_1451d17a0();
  auVar19 = ZEXT464(_DAT_145fc6ed8);
  fVar9 = *(float *)(param_1 + 4);
  atan2f(puVar7,param_2);
  FUN_1451d15d0(auStack_768,fVar9 * _DAT_14616c904,auVar19._0_8_,*(undefined4 *)(param_1 + 0xd0),
                *(undefined4 *)(param_1 + 0xc),0);
  *(undefined8 *)(param_1 + 0xb0) = uStack_6c8;
  *(undefined8 *)(param_1 + 0xb8) = uStack_6c0;
  *(undefined8 *)(param_1 + 0xc0) = uStack_6b8;
  *(undefined8 *)(param_1 + 200) = uStack_6b0;
  *(undefined8 *)(param_1 + 0x90) = uStack_6e8;
  *(undefined8 *)(param_1 + 0x98) = uStack_6e0;
  *(undefined8 *)(param_1 + 0xa0) = uStack_6d8;
  *(undefined8 *)(param_1 + 0xa8) = uStack_6d0;
  FUN_140312ef0(param_1 + 0x50,&uStack_6e8,param_1 + 0x10);
  return;
}

