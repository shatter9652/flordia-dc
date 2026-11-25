// Recovered from game_scarlett_master.exe (GTA VI, Xbox Series X, PE32+ x64)
// Address: 140022960  size: 364 bytes
// Name:    FUN_140022960
// Subsystem: core
//
// Referenced strings (0 in this body, 0 including direct callees):
// Callees: FUN_144e22e50, FUN_144e22f90, FUN_144df39a0, FUN_144e46c00
//
// Generated decompilation. Formatting follows MiscRef/GTAVSRC conventions;
// identifiers are recovered, not original. See ../../../README.md.

#include "gta6decomp/rage_types.h"


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

bool FUN_140022960(undefined8 param_1,longlong *param_2,undefined8 *param_3)

{
  undefined1 auVar1 [16];
  undefined1 auVar2 [16];
  undefined1 auVar3 [16];
  undefined1 auVar4 [16];
  undefined1 auVar5 [16];
  float fVar6;
  float fVar7;
  float fVar8;
  float fVar9;
  undefined1 auVar10 [64];
  undefined1 auVar11 [64];
  undefined1 auStack_108 [16];
  undefined8 uStack_f8;
  undefined8 uStack_f0;
  undefined8 uStack_e8;
  undefined8 uStack_e0;
  undefined1 auStack_d8 [16];
  undefined1 auStack_c8 [16];
  undefined1 auStack_b8 [16];
  undefined8 uStack_a8;
  undefined8 uStack_a0;
  float fStack_98;
  float fStack_94;
  float fStack_90;
  float fStack_8c;
  undefined1 auStack_88 [16];
  undefined8 uStack_78;
  undefined8 uStack_70;
  undefined8 uStack_68;
  undefined8 uStack_60;
  undefined1 auStack_58 [16];
  
  auStack_58._0_12_ = ZEXT812(0);
  auStack_58._12_4_ = 0;
  auVar10 = ZEXT1664(auStack_58);
  auStack_88 = ZEXT416((uint)_DAT_145fc6ed8);
  uStack_78 = _DAT_146159bc0;
  uStack_70 = 0;
  uStack_68 = _DAT_14614f7f0;
  uStack_60 = _UNK_14614f7f8;
  (**(code **)(*param_2 + 0x18))(param_2,&uStack_a8);
  FUN_144e22e50(param_1,auStack_88,&fStack_98);
  uStack_f8 = uStack_a8;
  uStack_f0 = uStack_a0;
  FUN_144df39a0(auStack_b8,auStack_88);
  auVar2._8_8_ = uStack_70;
  auVar2._0_8_ = uStack_78;
  auVar1._8_8_ = uStack_60;
  auVar1._0_8_ = uStack_68;
  auVar1 = vshufps_avx(auVar2,auVar1,0x33);
  auVar1 = vshufps_avx(auVar2,auVar1,0x2f);
  auVar3._0_4_ = auVar1._0_4_ + _DAT_145fc6ed8;
  auVar3._4_4_ = auVar1._4_4_ + _DAT_145fc6ed8;
  auVar3._8_4_ = auVar1._8_4_ + _DAT_145fc6ed8;
  auVar3._12_4_ = auVar1._12_4_ + _DAT_145fc6ed8;
  auVar1 = vrcpps_avx(auVar3);
  fVar6 = auVar1._0_4_;
  fVar7 = auVar1._4_4_;
  fVar8 = auVar1._8_4_;
  fVar9 = auVar1._12_4_;
  auVar4._0_4_ = (-((fVar6 * auVar3._0_4_ - _DAT_145fc6ed8) * fVar6) + fVar6) * fStack_98;
  auVar4._4_4_ = (-((fVar7 * auVar3._4_4_ - _DAT_145fc6ed8) * fVar7) + fVar7) * fStack_94;
  auVar4._8_4_ = (-((fVar8 * auVar3._8_4_ - _DAT_145fc6ed8) * fVar8) + fVar8) * fStack_90;
  auVar4._12_4_ = (-((fVar9 * auVar3._12_4_ - _DAT_145fc6ed8) * fVar9) + fVar9) * fStack_8c;
  auStack_108 = vblendps_avx(auVar4,auVar10._0_16_,8);
  FUN_144e22f90(auStack_d8,auStack_c8,auStack_108,auStack_b8);
  auVar11 = ZEXT1664(auStack_d8);
  FUN_144e46c00(&uStack_e8,auStack_88);
  *param_3 = uStack_e8;
  param_3[1] = uStack_e0;
  auVar1 = vsubps_avx(auStack_b8,auVar11._0_16_);
  auVar5._0_4_ = auVar1._0_4_ * auVar1._0_4_;
  auVar5._4_4_ = auVar1._4_4_ * auVar1._4_4_;
  auVar5._8_4_ = auVar1._8_4_ * auVar1._8_4_;
  auVar5._12_4_ = auVar1._12_4_ * auVar1._12_4_;
  auVar1 = vblendps_avx(auVar5,auVar10._0_16_,8);
  auVar1 = vhaddps_avx(auVar1,auVar1);
  auVar1 = vhaddps_avx(auVar1,auVar1);
  return _DAT_14617be10 < auVar1._0_4_;
}

