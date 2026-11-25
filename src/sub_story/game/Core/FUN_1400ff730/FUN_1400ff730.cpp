// Recovered from game_scarlett_master.exe (GTA VI, Xbox Series X, PE32+ x64)
// Address: 1400ff730  size: 104 bytes
// Name:    FUN_1400ff730
// Subsystem: core
//
// Referenced strings (0 in this body, 0 including direct callees):
// Callees: 
//
// Generated decompilation. Formatting follows MiscRef/GTAVSRC conventions;
// identifiers are recovered, not original. See ../../../README.md.

#include "gta6decomp/rage_types.h"


void FUN_1400ff730(longlong param_1,undefined8 *param_2)

{
  undefined1 auVar1 [16];
  undefined1 auVar2 [16];
  undefined1 auVar3 [16];
  undefined8 uStack_48;
  undefined8 uStack_40;
  undefined1 auStack_38 [16];
  undefined1 auStack_28 [16];
  
  uStack_48 = *param_2;
  uStack_40 = param_2[1];
  func_0x000144dc3790(&uStack_48,auStack_28);
  func_0x000144fa06a0(param_1,auStack_38);
  auVar3._0_12_ = ZEXT812(0);
  auVar3._12_4_ = 0;
  auVar1 = vsubps_avx(auStack_38,auStack_28);
  auVar2._0_4_ = auVar1._0_4_ * auVar1._0_4_;
  auVar2._4_4_ = auVar1._4_4_ * auVar1._4_4_;
  auVar2._8_4_ = auVar1._8_4_ * auVar1._8_4_;
  auVar2._12_4_ = auVar1._12_4_ * auVar1._12_4_;
  auVar1 = vblendps_avx(auVar2,auVar3,8);
  auVar2 = vhaddps_avx(auVar2,auVar2);
  auVar1 = vhaddps_avx(auVar1,auVar1);
  auVar1 = vhaddps_avx(auVar1,auVar1);
  *(int *)(param_1 + 0x48) = auVar1._0_4_;
  *(int *)(param_1 + 0x4c) = auVar2._0_4_;
  return;
}

