// Recovered from game_scarlett_master.exe (GTA VI, Xbox Series X, PE32+ x64)
// Address: 14002c4f0  size: 437 bytes
// Name:    FUN_14002c4f0
// Subsystem: core
//
// Referenced strings (0 in this body, 0 including direct callees):
// Callees: FUN_14002c700, FUN_14002c6b0
//
// Generated decompilation. Formatting follows MiscRef/GTAVSRC conventions;
// identifiers are recovered, not original. See ../../../README.md.

#include "gta6decomp/rage_types.h"


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

bool FUN_14002c4f0(undefined8 *param_1,longlong *param_2,undefined1 (*param_3) [16])

{
  undefined1 auVar1 [16];
  float fVar2;
  float fVar7;
  float fVar8;
  undefined1 auVar3 [16];
  undefined1 auVar4 [16];
  undefined1 auVar5 [16];
  undefined1 auVar6 [16];
  float fVar9;
  short sVar10;
  short sVar13;
  float fVar14;
  float fVar15;
  undefined1 auVar11 [16];
  undefined1 auVar12 [16];
  undefined1 auVar16 [64];
  float fVar17;
  float fVar18;
  undefined1 auVar19 [64];
  float fStack_a8;
  float fStack_a4;
  float fStack_a0;
  float fStack_9c;
  undefined1 auStack_98 [16];
  undefined1 auStack_88 [16];
  undefined1 aauStack_78 [5] [16];
  
  FUN_14002c700();
  (**(code **)(*(longlong *)*param_1 + 0x18))((longlong *)*param_1,aauStack_78);
  (**(code **)(*param_2 + 0x18))(param_2,auStack_88);
  auVar19 = ZEXT1664(aauStack_78[0]);
  auVar16 = ZEXT1664(auStack_88);
  fVar17 = 0.0;
  fVar18 = 0.0;
  auVar3 = vpsubw_avx(auStack_88,aauStack_78[0]);
  auVar6 = vsubps_avx(auStack_88,aauStack_78[0]);
  auVar3 = vblendps_avx(auVar6,auVar3,8);
  auVar3 = vpunpckhwd_avx(auVar3,auVar3);
  auVar3 = vpsrad_avx(auVar3,0x10);
  auVar3 = vcvtdq2ps_avx(auVar3);
  vshufpd_avx(auVar3,auVar3,3);
  fVar2 = _DAT_146159c90;
  fVar7 = _UNK_146159c94;
  FUN_14002c6b0(&fStack_a8,auStack_98);
  auVar4._4_4_ = _DAT_14615a290;
  auVar4._0_4_ = _DAT_14615a290;
  auVar4._8_4_ = _DAT_14615a290;
  auVar4._12_4_ = _DAT_14615a290;
  auVar3._0_4_ = auVar19._0_4_ + fStack_a8;
  auVar3._4_4_ = auVar19._4_4_ + fStack_a4;
  auVar3._8_4_ = auVar19._8_4_ + fStack_a0;
  auVar3._12_4_ = auVar19._12_4_ + fStack_9c;
  auVar3 = vblendps_avx(auVar3,auVar19._0_16_,8);
  auVar6 = vrcpps_avx(auVar4);
  fVar8 = auVar6._0_4_;
  fVar9 = auVar6._4_4_;
  fVar14 = auVar6._8_4_;
  fVar15 = auVar6._12_4_;
  auVar11._0_4_ = ((-(fVar8 * _DAT_14615a290) + _DAT_145fc6ed8) * fVar8 + fVar8) * auVar3._0_4_;
  auVar11._4_4_ = ((-(fVar9 * _DAT_14615a290) + _DAT_145fc6ed8) * fVar9 + fVar9) * auVar3._4_4_;
  auVar11._8_4_ = ((-(fVar14 * _DAT_14615a290) + _DAT_145fc6ed8) * fVar14 + fVar14) * auVar3._8_4_;
  auVar11._12_4_ = ((-(fVar15 * _DAT_14615a290) + _DAT_145fc6ed8) * fVar15 + fVar15) * auVar3._12_4_
  ;
  auVar6 = vroundps_avx(auVar11,3);
  auVar5._0_4_ = -(auVar6._0_4_ * _DAT_14615a290) + auVar3._0_4_;
  auVar5._4_4_ = -(auVar6._4_4_ * _DAT_14615a290) + auVar3._4_4_;
  auVar5._8_4_ = -(auVar6._8_4_ * _DAT_14615a290) + auVar3._8_4_;
  auVar5._12_4_ = -(auVar6._12_4_ * _DAT_14615a290) + auVar3._12_4_;
  auVar12._0_4_ = (int)auVar6._0_4_;
  auVar12._4_4_ = (int)auVar6._4_4_;
  auVar12._8_4_ = (int)auVar6._8_4_;
  auVar12._12_4_ = (int)auVar6._12_4_;
  auVar4 = vpackssdw_avx(auVar12,auVar12);
  auVar6 = vblendps_avx(auVar3,auVar5,3);
  sVar10 = auVar4._0_2_;
  auVar1._0_2_ = sVar10 + auVar3._0_2_;
  sVar13 = auVar4._2_2_;
  auVar1._2_2_ = sVar13 + auVar3._2_2_;
  auVar1._4_2_ = sVar10 + auVar3._4_2_;
  auVar1._6_2_ = sVar13 + auVar3._6_2_;
  auVar1._8_2_ = sVar10 + auVar3._8_2_;
  auVar1._10_2_ = sVar13 + auVar3._10_2_;
  auVar1._12_2_ = sVar10 + auVar3._12_2_;
  auVar1._14_2_ = sVar13 + auVar3._14_2_;
  auVar3 = vblendps_avx(auVar6,auVar1,8);
  *param_3 = auVar3;
  auVar6 = vsubps_avx(auVar3,auVar16._0_16_);
  auVar3 = vpsubw_avx(auVar3,auVar16._0_16_);
  auVar3 = vblendps_avx(auVar6,auVar3,8);
  auVar6 = vpunpckhwd_avx(auVar3,auVar3);
  auVar6 = vpsrad_avx(auVar6,0x10);
  auVar6 = vcvtdq2ps_avx(auVar6);
  auVar6 = vshufpd_avx(auVar6,auVar6,3);
  fVar2 = fVar2 * auVar6._0_4_ + auVar3._0_4_;
  fVar7 = fVar7 * auVar6._4_4_ + auVar3._4_4_;
  fVar8 = fVar17 * auVar6._8_4_ + auVar3._8_4_;
  fVar9 = fVar18 * auVar6._12_4_ + auVar3._12_4_;
  auVar6._0_4_ = fVar2 * fVar2;
  auVar6._4_4_ = fVar7 * fVar7;
  auVar6._8_4_ = fVar8 * fVar8;
  auVar6._12_4_ = fVar9 * fVar9;
  auVar3 = vblendps_avx(auVar6,ZEXT416(0) << 0x20,8);
  auVar3 = vhaddps_avx(auVar3,auVar3);
  auVar3 = vhaddps_avx(auVar3,auVar3);
  return _DAT_14617be10 < auVar3._0_4_;
}

