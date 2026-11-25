// Recovered from game_scarlett_master.exe (GTA VI, Xbox Series X, PE32+ x64)
// Address: 14008dec0  size: 54 bytes
// Name:    FUN_14008dec0
// Subsystem: core
//
// Referenced strings (0 in this body, 0 including direct callees):
// Callees: 
//
// Generated decompilation. Formatting follows MiscRef/GTAVSRC conventions;
// identifiers are recovered, not original. See ../../../README.md.

#include "gta6decomp/rage_types.h"


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_14008dec0(void)

{
  undefined4 uVar1;
  char cVar2;
  undefined1 uVar3;
  undefined8 uVar4;
  longlong lVar5;
  undefined1 auVar6 [16];
  undefined1 auVar7 [16];
  uint uVar8;
  undefined1 auVar9 [64];
  undefined8 auStack_68 [7];
  undefined8 uStack_30;
  
  if (DAT_14abbe2e0 == '\0') {
    uStack_30 = 0x14008ded2;
    cVar2 = func_0x000144f7b6a0();
    if ((cVar2 == '\0') && (DAT_14abbe2e1 != '\x01')) {
      auVar6 = ZEXT416(_DAT_14abbef4c);
      goto LAB_14008dee7;
    }
  }
  auVar6._0_12_ = ZEXT812(0);
  auVar6._12_4_ = 0;
LAB_14008dee7:
  uVar1 = _DAT_149defc84;
  auVar9 = ZEXT1664(auVar6);
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
    uVar4 = func_0x000144e3bfa0();
    func_0x000145f40560(0x149dd8090,uVar4,0x730);
  }
  auVar6 = auVar9._0_16_;
  if (_DAT_149df726c != 0) {
    FUN_14008e3d0();
    auVar6 = auVar9._0_16_;
  }
  auVar7._0_12_ = ZEXT812(0);
  auVar7._12_4_ = 0;
  auVar7 = vcmpss_avx(auVar6,auVar7,1);
  auVar6 = vminss_avx(ZEXT416(_DAT_146159ec0),auVar6);
  uVar8 = ~auVar7._0_4_ & auVar6._0_4_;
  uVar3 = FUN_145073ad0(1,1,0);
  lVar5 = (longlong)_DAT_14a210d10;
  *(undefined1 *)(lVar5 + 0x149dd87d0) = uVar3;
  *(uint *)(lVar5 * 4 + 0x149dd87d4) = uVar8;
  FUN_14008e070();
  FUN_144fa7490();
  func_0x00014520bd90(auStack_68);
  FUN_14008e140();
  DAT_149dd8050 = 1;
  _DAT_149dd804c = uVar8;
  *(undefined1 *)(_DAT_149e44f08 + 0x20be8) = 1;
  auStack_68[0] = 0x149dd7e20;
  FUN_144f11d80();
  return;
}

