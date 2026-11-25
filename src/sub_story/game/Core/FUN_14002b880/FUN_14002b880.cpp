// Recovered from game_scarlett_master.exe (GTA VI, Xbox Series X, PE32+ x64)
// Address: 14002b880  size: 164 bytes
// Name:    FUN_14002b880
// Subsystem: core
//
// Referenced strings (0 in this body, 0 including direct callees):
// Callees: FUN_144db6f00, FUN_144f64580
//
// Generated decompilation. Formatting follows MiscRef/GTAVSRC conventions;
// identifiers are recovered, not original. See ../../../README.md.

#include "gta6decomp/rage_types.h"


void FUN_14002b880(longlong param_1,undefined8 *param_2,undefined1 (*param_3) [16])

{
  undefined1 auVar1 [16];
  undefined1 auVar2 [16];
  undefined1 auVar3 [16];
  undefined1 auVar4 [16];
  undefined1 auVar5 [16];
  undefined1 auVar6 [16];
  float fVar7;
  float fVar9;
  float fVar10;
  float fVar11;
  undefined1 auVar8 [16];
  undefined8 uStack_58;
  undefined8 uStack_50;
  undefined1 auStack_48 [12];
  float fStack_3c;
  float fStack_38;
  float fStack_34;
  float fStack_30;
  float fStack_2c;
  
  FUN_144f64580(*(undefined8 *)(param_1 + 0x20),*(undefined4 *)(param_1 + 0x4c),auStack_48);
  auVar1 = *(undefined1 (*) [16])(param_1 + 0x60);
  auVar5._12_4_ = fStack_3c;
  auVar5._0_12_ = auStack_48;
  auVar2 = vshufps_avx(auVar5,auVar5,0xc9);
  auVar3 = vshufps_avx(auVar1,auVar1,0xd2);
  auVar4 = vshufps_avx(auVar1,auVar1,0xc9);
  auVar5 = vshufps_avx(auVar5,auVar5,0xd2);
  fVar7 = -(auVar5._0_4_ * auVar4._0_4_) + auVar2._0_4_ * auVar3._0_4_;
  fVar9 = -(auVar5._4_4_ * auVar4._4_4_) + auVar2._4_4_ * auVar3._4_4_;
  fVar10 = -(auVar5._8_4_ * auVar4._8_4_) + auVar2._8_4_ * auVar3._8_4_;
  fVar11 = -(auVar5._12_4_ * auVar4._12_4_) + auVar2._12_4_ * auVar3._12_4_;
  auVar8._0_4_ = fVar7 + fVar7;
  auVar8._4_4_ = fVar9 + fVar9;
  auVar8._8_4_ = fVar10 + fVar10;
  auVar8._12_4_ = fVar11 + fVar11;
  auVar3 = vshufps_avx(auVar8,auVar8,0xd2);
  auVar4 = vshufps_avx(auVar8,auVar8,0xc9);
  auVar6._0_4_ = auVar8._0_4_ * fStack_3c + auVar1._0_4_ + fStack_38 +
                 -(auVar5._0_4_ * auVar4._0_4_) + auVar3._0_4_ * auVar2._0_4_;
  auVar6._4_4_ = auVar8._4_4_ * fStack_3c + auVar1._4_4_ + fStack_34 +
                 -(auVar5._4_4_ * auVar4._4_4_) + auVar3._4_4_ * auVar2._4_4_;
  auVar6._8_4_ = auVar8._8_4_ * fStack_3c + auVar1._8_4_ + fStack_30 +
                 -(auVar5._8_4_ * auVar4._8_4_) + auVar3._8_4_ * auVar2._8_4_;
  auVar6._12_4_ =
       auVar8._12_4_ * fStack_3c + auVar1._12_4_ + fStack_2c +
       -(auVar5._12_4_ * auVar4._12_4_) + auVar3._12_4_ * auVar2._12_4_;
  *param_3 = auVar6;
  FUN_144db6f00(*(undefined8 *)(param_1 + 0x20),&uStack_58,*(undefined4 *)(param_1 + 0x48));
  *param_2 = uStack_58;
  param_2[1] = uStack_50;
  return;
}

