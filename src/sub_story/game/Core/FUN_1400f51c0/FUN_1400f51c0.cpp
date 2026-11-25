// Recovered from game_scarlett_master.exe (GTA VI, Xbox Series X, PE32+ x64)
// Address: 1400f51c0  size: 62 bytes
// Name:    FUN_1400f51c0
// Subsystem: core
//
// Referenced strings (0 in this body, 0 including direct callees):
// Callees: 
//
// Generated decompilation. Formatting follows MiscRef/GTAVSRC conventions;
// identifiers are recovered, not original. See ../../../README.md.

#include "gta6decomp/rage_types.h"


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1400f51c0(undefined1 (*param_1) [16],undefined1 (*param_2) [16])

{
  undefined1 auVar1 [16];
  undefined1 auVar2 [16];
  undefined1 auVar3 [16];
  
  auVar3._0_12_ = ZEXT812(0);
  auVar3._12_4_ = 0;
  auVar1 = vsubps_avx(*param_1,*param_2);
  auVar2._0_4_ = auVar1._0_4_ * auVar1._0_4_;
  auVar2._4_4_ = auVar1._4_4_ * auVar1._4_4_;
  auVar2._8_4_ = auVar1._8_4_ * auVar1._8_4_;
  auVar2._12_4_ = auVar1._12_4_ * auVar1._12_4_;
  auVar1 = vblendps_avx(auVar2,auVar3,8);
  auVar1 = vhaddps_avx(auVar1,auVar1);
  auVar1 = vhaddps_avx(auVar1,auVar1);
  if (_DAT_14615a7f8 < auVar1._0_4_) {
    _DAT_149274014 = func_0x000145308c40();
  }
  return;
}

