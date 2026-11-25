// Recovered from game_scarlett_master.exe (GTA VI, Xbox Series X, PE32+ x64)
// Address: 14016d0c0  size: 127 bytes
// Name:    FUN_14016d0c0
// Subsystem: core
//
// Referenced strings (0 in this body, 0 including direct callees):
// Callees: 
//
// Generated decompilation. Formatting follows MiscRef/GTAVSRC conventions;
// identifiers are recovered, not original. See ../../../README.md.

#include "gta6decomp/rage_types.h"


void FUN_14016d0c0(longlong param_1)

{
  longlong lVar1;
  undefined1 auVar2 [16];
  undefined4 uVar3;
  undefined1 auVar4 [16];
  undefined1 auVar5 [16];
  undefined8 uStack_48;
  undefined8 uStack_40;
  undefined1 auStack_38 [16];
  undefined1 auStack_28 [16];
  
  uVar3 = func_0x000145027180(*(undefined8 *)(param_1 + 0x40));
  lVar1 = *(longlong *)(param_1 + 0x310);
  *(undefined4 *)(lVar1 + 0x294) = uVar3;
  uStack_48 = *(undefined8 *)(*(longlong *)(param_1 + 0x410) + 0x70);
  uStack_40 = *(undefined8 *)(*(longlong *)(param_1 + 0x410) + 0x78);
  func_0x000144dc3790(&uStack_48,auStack_28);
  func_0x000144f2b0e0(auStack_38);
  auVar5._0_12_ = ZEXT812(0);
  auVar5._12_4_ = 0;
  auVar2 = vsubps_avx(auStack_38,auStack_28);
  auVar4._0_4_ = auVar2._0_4_ * auVar2._0_4_;
  auVar4._4_4_ = auVar2._4_4_ * auVar2._4_4_;
  auVar4._8_4_ = auVar2._8_4_ * auVar2._8_4_;
  auVar4._12_4_ = auVar2._12_4_ * auVar2._12_4_;
  auVar2 = vblendps_avx(auVar4,auVar5,8);
  auVar2 = vhaddps_avx(auVar2,auVar2);
  auVar2 = vhaddps_avx(auVar2,auVar2);
  *(int *)(lVar1 + 0x298) = auVar2._0_4_;
  return;
}

