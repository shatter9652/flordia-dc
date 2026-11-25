// Recovered from game_scarlett_master.exe (GTA VI, Xbox Series X, PE32+ x64)
// Address: 14001bbd0  size: 159 bytes
// Name:    FUN_14001bbd0
// Subsystem: core
//
// Referenced strings (0 in this body, 0 including direct callees):
// Callees: FUN_144e48600
//
// Generated decompilation. Formatting follows MiscRef/GTAVSRC conventions;
// identifiers are recovered, not original. See ../../../README.md.

#include "gta6decomp/rage_types.h"


void FUN_14001bbd0(undefined8 param_1,longlong param_2,undefined1 (*param_3) [16])

{
  undefined1 auVar1 [16];
  undefined1 auVar2 [16];
  undefined1 auVar3 [16];
  undefined1 auVar4 [16];
  undefined1 auVar5 [16];
  float fVar6;
  float fVar8;
  float fVar9;
  float fVar10;
  undefined1 auVar7 [16];
  undefined1 auVar11 [16];
  undefined1 auVar12 [64];
  undefined1 auStack_58 [12];
  float fStack_4c;
  undefined1 aauStack_48 [2] [16];
  
  func_0x000144e474c0(aauStack_48);
  auVar12 = ZEXT1664(aauStack_48[0]);
  FUN_144e48600(param_1,auStack_58,*(undefined4 *)(param_2 + 0x10));
  auVar4._12_4_ = fStack_4c;
  auVar4._0_12_ = auStack_58;
  auVar11 = auVar12._0_16_;
  auVar1 = vshufps_avx(auVar11,auVar11,0xd2);
  auVar2 = vshufps_avx(auVar11,auVar11,0xc9);
  auVar3 = vshufps_avx(auVar4,auVar4,0xc9);
  auVar4 = vshufps_avx(auVar4,auVar4,0xd2);
  fVar6 = -(auVar4._0_4_ * auVar2._0_4_) + auVar3._0_4_ * auVar1._0_4_;
  fVar8 = -(auVar4._4_4_ * auVar2._4_4_) + auVar3._4_4_ * auVar1._4_4_;
  fVar9 = -(auVar4._8_4_ * auVar2._8_4_) + auVar3._8_4_ * auVar1._8_4_;
  fVar10 = -(auVar4._12_4_ * auVar2._12_4_) + auVar3._12_4_ * auVar1._12_4_;
  auVar7._0_4_ = fVar6 + fVar6;
  auVar7._4_4_ = fVar8 + fVar8;
  auVar7._8_4_ = fVar9 + fVar9;
  auVar7._12_4_ = fVar10 + fVar10;
  auVar1 = vshufps_avx(auVar7,auVar7,0xd2);
  auVar2 = vshufps_avx(auVar7,auVar7,0xc9);
  auVar5._0_4_ = auVar7._0_4_ * fStack_4c + auVar12._0_4_ +
                 -(auVar4._0_4_ * auVar2._0_4_) + auVar1._0_4_ * auVar3._0_4_;
  auVar5._4_4_ = auVar7._4_4_ * fStack_4c + auVar12._4_4_ +
                 -(auVar4._4_4_ * auVar2._4_4_) + auVar1._4_4_ * auVar3._4_4_;
  auVar5._8_4_ = auVar7._8_4_ * fStack_4c + auVar12._8_4_ +
                 -(auVar4._8_4_ * auVar2._8_4_) + auVar1._8_4_ * auVar3._8_4_;
  auVar5._12_4_ =
       auVar7._12_4_ * fStack_4c + auVar12._12_4_ +
       -(auVar4._12_4_ * auVar2._12_4_) + auVar1._12_4_ * auVar3._12_4_;
  auVar1 = vblendps_avx(auVar5,auVar11,8);
  *param_3 = auVar1;
  return;
}

