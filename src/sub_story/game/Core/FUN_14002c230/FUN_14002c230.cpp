// Recovered from game_scarlett_master.exe (GTA VI, Xbox Series X, PE32+ x64)
// Address: 14002c230  size: 355 bytes
// Name:    FUN_14002c230
// Subsystem: core
//
// Referenced strings (0 in this body, 0 including direct callees):
// Callees: FUN_144e46c00, FUN_144e22e50, FUN_144df39a0, FUN_144e22f90
//
// Generated decompilation. Formatting follows MiscRef/GTAVSRC conventions;
// identifiers are recovered, not original. See ../../../README.md.

#include "gta6decomp/rage_types.h"


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

ulonglong FUN_14002c230(undefined8 param_1,longlong *param_2,undefined8 *param_3)

{
  undefined1 auVar1 [16];
  undefined1 auVar2 [16];
  undefined4 uVar3;
  undefined8 unaff_RBP;
  undefined1 auVar4 [16];
  undefined1 auVar5 [16];
  undefined1 auVar6 [16];
  float fVar7;
  float fVar9;
  float fVar10;
  float fVar11;
  undefined1 auVar8 [16];
  undefined1 auVar12 [64];
  undefined1 auStack_108 [16];
  undefined8 uStack_f8;
  undefined8 uStack_f0;
  undefined1 auStack_e8 [16];
  undefined8 uStack_d8;
  undefined8 uStack_d0;
  undefined1 auStack_c8 [16];
  uint uStack_b8;
  uint uStack_b4;
  uint uStack_b0;
  uint uStack_ac;
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
  auVar12 = ZEXT1664(auStack_58);
  auStack_88 = ZEXT416((uint)_DAT_145fc6ed8);
  uStack_78 = _DAT_146159bc0;
  uStack_70 = 0;
  uStack_68 = _DAT_14614f7f0;
  uStack_60 = _UNK_14614f7f8;
  (**(code **)(*param_2 + 0x18))(param_2,&uStack_a8);
  FUN_144e22e50(param_1,auStack_88,&fStack_98);
  uStack_f8 = uStack_a8;
  uStack_f0 = uStack_a0;
  FUN_144df39a0(&uStack_b8,auStack_88);
  auVar2._8_8_ = uStack_70;
  auVar2._0_8_ = uStack_78;
  auVar1._8_8_ = uStack_60;
  auVar1._0_8_ = uStack_68;
  auVar1 = vshufps_avx(auVar2,auVar1,0x33);
  auVar1 = vshufps_avx(auVar2,auVar1,0x2f);
  auVar4._0_4_ = auVar1._0_4_ + _DAT_145fc6ed8;
  auVar4._4_4_ = auVar1._4_4_ + _DAT_145fc6ed8;
  auVar4._8_4_ = auVar1._8_4_ + _DAT_145fc6ed8;
  auVar4._12_4_ = auVar1._12_4_ + _DAT_145fc6ed8;
  auVar1 = vrcpps_avx(auVar4);
  fVar7 = auVar1._0_4_;
  fVar9 = auVar1._4_4_;
  fVar10 = auVar1._8_4_;
  fVar11 = auVar1._12_4_;
  auVar6._0_4_ = _DAT_145fc6f4c & uStack_b8;
  auVar6._4_4_ = _DAT_145fc6f4c & uStack_b4;
  auVar6._8_4_ = _DAT_145fc6f4c & uStack_b0;
  auVar6._12_4_ = _DAT_145fc6f4c & uStack_ac;
  auVar5._0_4_ = (-((fVar7 * auVar4._0_4_ - _DAT_145fc6ed8) * fVar7) + fVar7) * fStack_98;
  auVar5._4_4_ = (-((fVar9 * auVar4._4_4_ - _DAT_145fc6ed8) * fVar9) + fVar9) * fStack_94;
  auVar5._8_4_ = (-((fVar10 * auVar4._8_4_ - _DAT_145fc6ed8) * fVar10) + fVar10) * fStack_90;
  auVar5._12_4_ = (-((fVar11 * auVar4._12_4_ - _DAT_145fc6ed8) * fVar11) + fVar11) * fStack_8c;
  auVar8._0_4_ = auVar5._0_4_ * _DAT_145fc6edc;
  auVar8._4_4_ = auVar5._4_4_ * _DAT_145fc6edc;
  auVar8._8_4_ = auVar5._8_4_ * _DAT_145fc6edc;
  auVar8._12_4_ = auVar5._12_4_ * _DAT_145fc6edc;
  auStack_108 = vblendps_avx(auVar5,auVar12._0_16_,8);
  auVar1 = vcmpps_avx(auVar6,auVar8,1);
  uVar3 = vmovmskps_avx(auVar1);
  FUN_144e22f90(auStack_e8,auStack_c8,auStack_108,&uStack_b8);
  FUN_144e46c00(&uStack_d8,auStack_88);
  *param_3 = uStack_d8;
  param_3[1] = uStack_d0;
  return CONCAT71((int7)((ulonglong)unaff_RBP >> 8),(~(byte)uVar3 & 7) == 0) & 0xffffffff;
}

