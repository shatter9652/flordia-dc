// Recovered from game_scarlett_master.exe (GTA VI, Xbox Series X, PE32+ x64)
// Address: 14002aae0  size: 600 bytes
// Name:    FUN_14002aae0
// Subsystem: core
//
// Referenced strings (0 in this body, 0 including direct callees):
// Callees: FUN_144db6f00, FUN_14002ad40, FUN_144db6f30
//
// Generated decompilation. Formatting follows MiscRef/GTAVSRC conventions;
// identifiers are recovered, not original. See ../../../README.md.

#include "gta6decomp/rage_types.h"


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_14002aae0(undefined4 *param_1,undefined8 param_2,undefined4 param_3,
                  undefined1 (*param_4) [16],undefined1 (*param_5) [16],float param_6)

{
  undefined1 auVar1 [16];
  undefined1 auVar2 [16];
  undefined4 uVar3;
  undefined4 uVar4;
  float fVar5;
  float fVar8;
  float fVar9;
  float fVar10;
  undefined1 auVar6 [16];
  undefined1 auVar7 [16];
  undefined1 auVar11 [16];
  undefined1 auVar12 [16];
  undefined1 auVar13 [16];
  undefined1 auVar14 [64];
  float fVar15;
  float fVar16;
  float fVar17;
  float fVar18;
  undefined1 auVar19 [64];
  undefined1 auStack_c8 [16];
  undefined1 auStack_b8 [12];
  float fStack_ac;
  
  FUN_144db6f30(param_2,auStack_b8);
  auVar2._12_4_ = fStack_ac;
  auVar2._0_12_ = auStack_b8;
  auVar7 = *param_5;
  auVar1 = vshufps_avx(auVar2,auVar2,0xc9);
  auVar19 = ZEXT1664(auVar1);
  auVar2 = vshufps_avx(auVar2,auVar2,0xd2);
  auVar14 = ZEXT1664(auVar2);
  auVar11 = vshufps_avx(auVar7,auVar7,0xd2);
  auVar12 = vshufps_avx(auVar7,auVar7,0xc9);
  fVar5 = -(auVar2._0_4_ * auVar12._0_4_) + auVar1._0_4_ * auVar11._0_4_;
  fVar8 = -(auVar2._4_4_ * auVar12._4_4_) + auVar1._4_4_ * auVar11._4_4_;
  fVar9 = -(auVar2._8_4_ * auVar12._8_4_) + auVar1._8_4_ * auVar11._8_4_;
  fVar10 = -(auVar2._12_4_ * auVar12._12_4_) + auVar1._12_4_ * auVar11._12_4_;
  auVar6._0_4_ = fVar5 + fVar5;
  auVar6._4_4_ = fVar8 + fVar8;
  auVar6._8_4_ = fVar9 + fVar9;
  auVar6._12_4_ = fVar10 + fVar10;
  auVar11 = vshufps_avx(auVar6,auVar6,0xd2);
  auVar12 = vshufps_avx(auVar6,auVar6,0xc9);
  fVar15 = fStack_ac * auVar6._0_4_ + auVar7._0_4_ +
           -(auVar2._0_4_ * auVar12._0_4_) + auVar1._0_4_ * auVar11._0_4_;
  fVar16 = fStack_ac * auVar6._4_4_ + auVar7._4_4_ +
           -(auVar2._4_4_ * auVar12._4_4_) + auVar1._4_4_ * auVar11._4_4_;
  fVar17 = fStack_ac * auVar6._8_4_ + auVar7._8_4_ +
           -(auVar2._8_4_ * auVar12._8_4_) + auVar1._8_4_ * auVar11._8_4_;
  fVar18 = fStack_ac * auVar6._12_4_ + auVar7._12_4_ +
           -(auVar2._12_4_ * auVar12._12_4_) + auVar1._12_4_ * auVar11._12_4_;
  FUN_144db6f00(param_2,auStack_c8,param_3);
  auVar7 = *param_4;
  auVar12._0_12_ = ZEXT812(0);
  auVar12._12_4_ = 0;
  auVar1 = vsubps_avx(auVar7,auStack_c8);
  fVar5 = auVar14._0_4_ * _DAT_14615bd00 + auVar19._0_4_ * _DAT_145fc6ed8;
  fVar8 = auVar14._4_4_ * _UNK_14615bd04 + auVar19._4_4_ * 0.0;
  fVar9 = auVar14._8_4_ * _UNK_14615bd08 + auVar19._8_4_ * 0.0;
  fVar10 = auVar14._12_4_ * _UNK_14615bd0c + auVar19._12_4_ * 0.0;
  auVar11._0_4_ = fVar15 * auVar1._0_4_;
  auVar11._4_4_ = fVar16 * auVar1._4_4_;
  auVar11._8_4_ = fVar17 * auVar1._8_4_;
  auVar11._12_4_ = fVar18 * auVar1._12_4_;
  auVar1 = vblendps_avx(auVar11,auVar12,8);
  auVar1 = vhaddps_avx(auVar1,auVar1);
  auVar13._0_4_ = fVar5 + fVar5;
  auVar13._4_4_ = fVar8 + fVar8;
  auVar13._8_4_ = fVar9 + fVar9;
  auVar13._12_4_ = fVar10 + fVar10;
  auVar1 = vhaddps_avx(auVar1,auVar1);
  vshufps_avx(auVar13,auVar13,0xd2);
  vshufps_avx(auVar13,auVar13,0xc9);
  fVar5 = auVar7._0_4_ + (-(fVar15 * auVar1._0_4_) - auStack_c8._0_4_);
  fVar8 = auVar7._4_4_ + (-(fVar16 * auVar1._4_4_) - auStack_c8._4_4_);
  fVar9 = auVar7._8_4_ + (-(fVar17 * auVar1._8_4_) - auStack_c8._8_4_);
  fVar10 = auVar7._12_4_ + (-(fVar18 * auVar1._12_4_) - auStack_c8._12_4_);
  auVar7._0_4_ = fVar5 * fVar5;
  auVar7._4_4_ = fVar8 * fVar8;
  auVar7._8_4_ = fVar9 * fVar9;
  auVar7._12_4_ = fVar10 * fVar10;
  auVar7 = vblendps_avx(auVar7,auVar12,8);
  auVar7 = vhaddps_avx(auVar7,auVar7);
  auVar7 = vhaddps_avx(auVar7,auVar7);
  auVar14 = ZEXT1664(auVar7);
  auVar1 = vrsqrtps_avx(auVar7);
  fVar5 = auVar1._0_4_;
  fVar5 = (auVar7._0_4_ * fVar5 * fVar5 * _DAT_145fc6f08 - _DAT_145fc6f08) * fVar5 + fVar5;
  uVar3 = FUN_14002ad40();
  uVar4 = FUN_14002ad40();
  func_0x00014055fef0(param_1);
  fVar8 = 0.0;
  *param_1 = uVar4;
  param_1[1] = uVar3;
  if (0.0 < param_6) {
    auVar7 = vcmpss_avx(ZEXT416(_DAT_146159bfc),auVar14._0_16_,2);
    fVar8 = (float)(auVar7._0_4_ & (uint)(fVar5 * auVar14._0_4_)) / param_6;
  }
  param_1[2] = fVar8;
  return;
}

