// Recovered from game_scarlett_master.exe (GTA VI, Xbox Series X, PE32+ x64)
// Address: 1401346f0  size: 120 bytes
// Name:    FUN_1401346f0
// Subsystem: core
//
// Referenced strings (0 in this body, 0 including direct callees):
// Callees: FUN_144e92980
//
// Generated decompilation. Formatting follows MiscRef/GTAVSRC conventions;
// identifiers are recovered, not original. See ../../../README.md.

#include "gta6decomp/rage_types.h"


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined8 FUN_1401346f0(longlong param_1)

{
  uint uVar1;
  undefined1 auVar2 [16];
  char cVar3;
  undefined8 uVar4;
  undefined1 auVar5 [16];
  
  uVar1 = *(uint *)(param_1 + 0xabc);
  if ((~uVar1 & 0x3fffff) == 0) {
LAB_140134707:
    uVar4 = 1;
  }
  else {
    cVar3 = FUN_144e92980(uVar1,1);
    if (cVar3 != '\0') {
      cVar3 = FUN_144e92980(uVar1,0);
      if (cVar3 == '\0') goto LAB_140134707;
    }
    if (*(longlong *)(param_1 + 0xaa0) != 0) {
      auVar2 = vsubps_avx(_DAT_14a151a60,**(undefined1 (**) [16])(param_1 + 0xc28));
      auVar5._0_4_ = auVar2._0_4_ * auVar2._0_4_;
      auVar5._4_4_ = auVar2._4_4_ * auVar2._4_4_;
      auVar5._8_4_ = auVar2._8_4_ * auVar2._8_4_;
      auVar5._12_4_ = auVar2._12_4_ * auVar2._12_4_;
      auVar2 = vhaddps_avx(auVar5,auVar5);
      if (auVar2._0_4_ < _DAT_146dc99dc * _DAT_146dc99dc) goto LAB_140134707;
    }
    uVar4 = 0;
  }
  return uVar4;
}

