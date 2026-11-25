// Recovered from game_scarlett_master.exe (GTA VI, Xbox Series X, PE32+ x64)
// Address: 14001dcc0  size: 330 bytes
// Name:    FUN_14001dcc0
// Subsystem: core
//
// Referenced strings (0 in this body, 0 including direct callees):
// Callees: FUN_144db6f00, FUN_144db6f30
//
// Generated decompilation. Formatting follows MiscRef/GTAVSRC conventions;
// identifiers are recovered, not original. See ../../../README.md.

#include "gta6decomp/rage_types.h"


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

float * FUN_14001dcc0(longlong param_1,float *param_2)

{
  undefined1 auVar1 [16];
  undefined1 auVar2 [16];
  float fVar3;
  float fVar5;
  float fVar6;
  float fVar7;
  undefined1 auVar4 [16];
  float fVar8;
  float fVar10;
  float fVar11;
  float fVar12;
  undefined1 auVar9 [16];
  undefined1 auVar13 [16];
  undefined1 auVar14 [64];
  undefined1 auStack_78 [12];
  float fStack_6c;
  undefined1 auStack_68 [16];
  undefined1 auStack_58 [16];
  undefined1 aauStack_48 [2] [16];
  
  FUN_144db6f00(*(undefined8 *)(param_1 + 0x20),aauStack_48,*(undefined4 *)(param_1 + 0x4c));
  FUN_144db6f00(*(undefined8 *)(param_1 + 0x20),auStack_58,*(undefined4 *)(param_1 + 0x48));
  FUN_144db6f00(*(undefined8 *)(param_1 + 0x20),auStack_68,*(undefined4 *)(param_1 + 0x44));
  auVar4 = vsubps_avx(aauStack_48[0],auStack_58);
  auVar13 = vsubps_avx(auStack_68,auStack_58);
  auVar1 = vshufps_avx(auVar13,auVar13,0xc9);
  auVar2 = vshufps_avx(auVar4,auVar4,0xd2);
  auVar13 = vshufps_avx(auVar13,auVar13,0xd2);
  auVar4 = vshufps_avx(auVar4,auVar4,0xc9);
  fVar3 = -(auVar13._0_4_ * auVar4._0_4_) + auVar1._0_4_ * auVar2._0_4_;
  fVar5 = -(auVar13._4_4_ * auVar4._4_4_) + auVar1._4_4_ * auVar2._4_4_;
  fVar6 = -(auVar13._8_4_ * auVar4._8_4_) + auVar1._8_4_ * auVar2._8_4_;
  fVar7 = -(auVar13._12_4_ * auVar4._12_4_) + auVar1._12_4_ * auVar2._12_4_;
  auVar2._0_4_ = fVar3 * fVar3;
  auVar2._4_4_ = fVar5 * fVar5;
  auVar2._8_4_ = fVar6 * fVar6;
  auVar2._12_4_ = fVar7 * fVar7;
  auVar1 = vblendps_avx(auVar2,ZEXT416(0) << 0x20,8);
  auVar1 = vhaddps_avx(auVar1,auVar1);
  auVar1 = vhaddps_avx(auVar1,auVar1);
  auVar2 = vrsqrtps_avx(auVar1);
  fVar8 = auVar2._0_4_;
  fVar10 = auVar2._4_4_;
  fVar11 = auVar2._8_4_;
  fVar12 = auVar2._12_4_;
  auVar14 = ZEXT1664(CONCAT412(((fVar12 * fVar12 * auVar1._12_4_ * _DAT_145fc6f08 - _DAT_145fc6f08)
                                * fVar12 + fVar12) * fVar7,
                               CONCAT48(((fVar11 * fVar11 * auVar1._8_4_ * _DAT_145fc6f08 -
                                         _DAT_145fc6f08) * fVar11 + fVar11) * fVar6,
                                        CONCAT44(((fVar10 * fVar10 * auVar1._4_4_ * _DAT_145fc6f08 -
                                                  _DAT_145fc6f08) * fVar10 + fVar10) * fVar5,
                                                 ((fVar8 * fVar8 * auVar1._0_4_ * _DAT_145fc6f08 -
                                                  _DAT_145fc6f08) * fVar8 + fVar8) * fVar3))));
  FUN_144db6f30(*(undefined8 *)(param_1 + 0x20),auStack_78,*(undefined4 *)(param_1 + 0x44));
  auVar1._12_4_ = fStack_6c;
  auVar1._0_12_ = auStack_78;
  auVar13 = auVar14._0_16_;
  auVar2 = vshufps_avx(auVar13,auVar13,0xd2);
  auVar13 = vshufps_avx(auVar13,auVar13,0xc9);
  auVar4._0_4_ = auStack_78._0_4_ ^ _DAT_145fc6f10;
  auVar4._4_4_ = auStack_78._4_4_ ^ _DAT_145fc6f10;
  auVar4._8_4_ = auStack_78._8_4_ ^ _DAT_145fc6f10;
  auVar4._12_4_ = (uint)fStack_6c ^ _DAT_145fc6f10;
  auVar1 = vblendps_avx(auVar4,auVar1,8);
  auVar4 = vshufps_avx(auVar1,auVar1,0xc9);
  auVar1 = vshufps_avx(auVar1,auVar1,0xd2);
  fVar8 = -(auVar1._0_4_ * auVar13._0_4_) + auVar4._0_4_ * auVar2._0_4_;
  fVar10 = -(auVar1._4_4_ * auVar13._4_4_) + auVar4._4_4_ * auVar2._4_4_;
  fVar11 = -(auVar1._8_4_ * auVar13._8_4_) + auVar4._8_4_ * auVar2._8_4_;
  fVar12 = -(auVar1._12_4_ * auVar13._12_4_) + auVar4._12_4_ * auVar2._12_4_;
  auVar9._0_4_ = fVar8 + fVar8;
  auVar9._4_4_ = fVar10 + fVar10;
  auVar9._8_4_ = fVar11 + fVar11;
  auVar9._12_4_ = fVar12 + fVar12;
  auVar2 = vshufps_avx(auVar9,auVar9,0xd2);
  auVar13 = vshufps_avx(auVar9,auVar9,0xc9);
  *param_2 = auVar9._0_4_ * fStack_6c + auVar14._0_4_ +
             -(auVar1._0_4_ * auVar13._0_4_) + auVar2._0_4_ * auVar4._0_4_;
  param_2[1] = auVar9._4_4_ * fStack_6c + auVar14._4_4_ +
               -(auVar1._4_4_ * auVar13._4_4_) + auVar2._4_4_ * auVar4._4_4_;
  param_2[2] = auVar9._8_4_ * fStack_6c + auVar14._8_4_ +
               -(auVar1._8_4_ * auVar13._8_4_) + auVar2._8_4_ * auVar4._8_4_;
  param_2[3] = auVar9._12_4_ * fStack_6c + auVar14._12_4_ +
               -(auVar1._12_4_ * auVar13._12_4_) + auVar2._12_4_ * auVar4._12_4_;
  return param_2;
}

