// Recovered from game_scarlett_master.exe (GTA VI, Xbox Series X, PE32+ x64)
// Address: 14002bea0  size: 375 bytes
// Name:    FUN_14002bea0
// Subsystem: core
//
// Referenced strings (0 in this body, 0 including direct callees):
// Callees: FUN_144e46c00, FUN_144df39a0, FUN_14185e550, FUN_14180dbe0
//
// Generated decompilation. Formatting follows MiscRef/GTAVSRC conventions;
// identifiers are recovered, not original. See ../../../README.md.

#include "gta6decomp/rage_types.h"


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

ulonglong FUN_14002bea0(undefined8 param_1,longlong *param_2,undefined8 *param_3)

{
  undefined1 auVar1 [16];
  undefined1 auVar2 [16];
  undefined1 auVar3 [64];
  undefined1 auVar4 [64];
  float fVar5;
  undefined1 auStack_138 [16];
  undefined8 uStack_128;
  undefined8 uStack_120;
  undefined8 uStack_118;
  undefined8 uStack_110;
  undefined1 auStack_108 [16];
  undefined1 auStack_f8 [16];
  undefined1 auStack_e8 [16];
  undefined8 uStack_d8;
  undefined8 uStack_d0;
  float fStack_c8;
  undefined4 uStack_c4;
  undefined1 auStack_a8 [16];
  undefined8 uStack_98;
  undefined8 uStack_90;
  undefined8 uStack_88;
  undefined8 uStack_80;
  undefined1 auStack_78 [16];
  
  auStack_78._0_12_ = ZEXT812(0);
  auStack_78._12_4_ = 0;
  auVar3 = ZEXT1664(auStack_78);
  auStack_a8 = ZEXT416(_DAT_145fc6ed8);
  uStack_98 = _DAT_146159bc0;
  uStack_90 = 0;
  uStack_88 = _DAT_14614f7f0;
  uStack_80 = _UNK_14614f7f8;
  (**(code **)(*param_2 + 0x18))(param_2,&uStack_d8);
  FUN_14185e550(param_1,auStack_a8,&fStack_c8);
  auVar1._4_4_ = uStack_c4;
  auVar1._0_4_ = uStack_c4;
  auVar1._8_4_ = uStack_c4;
  auVar1._12_4_ = uStack_c4;
  auVar1 = vblendps_avx(auVar1,auVar3._0_16_,0xd);
  auVar4 = ZEXT1664(auVar1);
  uStack_128 = uStack_d8;
  uStack_120 = uStack_d0;
  fVar5 = fStack_c8;
  FUN_144df39a0(auStack_e8,auStack_a8);
  auStack_138 = auVar4._0_16_;
  FUN_14180dbe0(auStack_108,auStack_f8,auStack_138,auStack_e8);
  auVar1 = vsubps_avx(auStack_108,auStack_e8);
  auVar2._0_4_ = auVar1._0_4_ * auVar1._0_4_;
  auVar2._4_4_ = auVar1._4_4_ * auVar1._4_4_;
  auVar2._8_4_ = auVar1._8_4_ * auVar1._8_4_;
  auVar2._12_4_ = auVar1._12_4_ * auVar1._12_4_;
  auVar1 = vblendps_avx(auVar2,auVar3._0_16_,8);
  auVar1 = vhaddps_avx(auVar1,auVar1);
  auVar1 = vhaddps_avx(auVar1,auVar1);
  FUN_144e46c00(&uStack_118,auStack_a8);
  *param_3 = uStack_118;
  param_3[1] = uStack_110;
  return CONCAT71((int7)((ulonglong)auStack_e8 >> 8),auVar1._0_4_ <= fVar5 * fVar5) & 0xffffffff;
}

