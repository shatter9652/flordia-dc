// Recovered from game_scarlett_master.exe (GTA VI, Xbox Series X, PE32+ x64)
// Address: 14008df00  size: 320 bytes
// Name:    FUN_14008df00
// Subsystem: core
//
// Referenced strings (0 in this body, 0 including direct callees):
// Callees: FUN_14008e3d0, FUN_145073ad0, FUN_144fa7490, FUN_144f11d80, FUN_14008e070, FUN_14008e140
//
// Generated decompilation. Formatting follows MiscRef/GTAVSRC conventions;
// identifiers are recovered, not original. See ../../../README.md.

#include "gta6decomp/rage_types.h"


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_14008df00(void)

{
  undefined4 uVar1;
  undefined1 uVar2;
  undefined8 uVar3;
  longlong lVar4;
  undefined1 in_ZMM0 [64];
  undefined1 auVar5 [16];
  uint uVar6;
  undefined1 auVar7 [16];
  undefined1 auVar8 [64];
  undefined8 auStack_68 [11];
  
  uVar1 = _DAT_149defc84;
  auVar8 = ZEXT1664(in_ZMM0._0_16_);
  _DAT_149dd8070 = 0;
  _DAT_149dd807c = 0;
  LOCK();
  _DAT_149debc74 = 0;
  UNLOCK();
  LOCK();
  _DAT_149defc84 = 0;
  UNLOCK();
  func_0x00014008e040(uVar1);
  if (_DAT_14a94d9f0 != 0) {
    uVar3 = func_0x000144e3bfa0();
    func_0x000145f40560(0x149dd8090,uVar3,0x730);
  }
  auVar7 = auVar8._0_16_;
  if (_DAT_149df726c != 0) {
    FUN_14008e3d0();
    auVar7 = auVar8._0_16_;
  }
  auVar5._0_12_ = ZEXT812(0);
  auVar5._12_4_ = 0;
  auVar5 = vcmpss_avx(auVar7,auVar5,1);
  auVar7 = vminss_avx(ZEXT416(_DAT_146159ec0),auVar7);
  uVar6 = ~auVar5._0_4_ & auVar7._0_4_;
  uVar2 = FUN_145073ad0(1,1,0);
  lVar4 = (longlong)_DAT_14a210d10;
  *(undefined1 *)(lVar4 + 0x149dd87d0) = uVar2;
  *(uint *)(lVar4 * 4 + 0x149dd87d4) = uVar6;
  FUN_14008e070();
  FUN_144fa7490();
  func_0x00014520bd90(auStack_68);
  FUN_14008e140();
  DAT_149dd8050 = 1;
  _DAT_149dd804c = uVar6;
  *(undefined1 *)(_DAT_149e44f08 + 0x20be8) = 1;
  auStack_68[0] = 0x149dd7e20;
  FUN_144f11d80();
  return;
}

