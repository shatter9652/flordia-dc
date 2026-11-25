// Recovered from game_scarlett_master.exe (GTA VI, Xbox Series X, PE32+ x64)
// Address: 1400bffd0  size: 153 bytes
// Name:    FUN_1400bffd0
// Subsystem: core
//
// Referenced strings (0 in this body, 0 including direct callees):
// Callees: FUN_144f54060
//
// Generated decompilation. Formatting follows MiscRef/GTAVSRC conventions;
// identifiers are recovered, not original. See ../../../README.md.

#include "gta6decomp/rage_types.h"


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1400bffd0(longlong *param_1,undefined8 param_2)

{
  longlong lVar1;
  undefined1 auVar2 [16];
  undefined8 uVar3;
  undefined1 auVar4 [16];
  
  lVar1 = *param_1;
  uVar3 = 0x52;
  if ((*(uint *)(lVar1 + 0xd4) >> 0x10 & 1) == 0) {
    uVar3 = 2;
  }
  FUN_144f54060(_DAT_14924f9a0,param_1[1],lVar1 + 0x130,uVar3,*(undefined4 *)(lVar1 + 0x28),param_2)
  ;
  lVar1 = *param_1;
  auVar2 = vsubps_avx(*(undefined1 (*) [16])(lVar1 + 0x110),*(undefined1 (*) [16])(lVar1 + 0x130));
  auVar4._0_4_ = auVar2._0_4_ * auVar2._0_4_;
  auVar4._4_4_ = auVar2._4_4_ * auVar2._4_4_;
  auVar4._8_4_ = auVar2._8_4_ * auVar2._8_4_;
  auVar4._12_4_ = auVar2._12_4_ * auVar2._12_4_;
  auVar2 = vhaddps_avx(auVar4,auVar4);
  if (*(float *)(lVar1 + 0x23c) * *(float *)(lVar1 + 0x23c) < auVar2._0_4_) {
    *(undefined8 *)(lVar1 + 0x130) = *(undefined8 *)(lVar1 + 0x110);
    *(undefined8 *)(lVar1 + 0x138) = *(undefined8 *)(lVar1 + 0x118);
  }
  return;
}

