// Recovered from game_scarlett_master.exe (GTA VI, Xbox Series X, PE32+ x64)
// Address: 1400541a0  size: 43 bytes
// Name:    FUN_1400541a0
// Subsystem: core
//
// Referenced strings (0 in this body, 0 including direct callees):
// Callees: FUN_144e7a630
//
// Generated decompilation. Formatting follows MiscRef/GTAVSRC conventions;
// identifiers are recovered, not original. See ../../../README.md.

#include "gta6decomp/rage_types.h"


undefined8 FUN_1400541a0(void)

{
  byte bVar1;
  longlong lVar2;
  undefined8 extraout_XMM0_Qa;
  undefined8 uVar3;
  undefined1 auVar4 [16];
  undefined1 extraout_var [56];
  undefined1 auVar5 [64];
  
  lVar2 = FUN_144e7a630();
  if (lVar2 == 0) {
    uVar3 = 0;
  }
  else {
    bVar1 = func_0x000144e7aff0(0,*(undefined8 *)(lVar2 + 8));
    auVar5._8_56_ = extraout_var;
    auVar5._0_8_ = extraout_XMM0_Qa;
    auVar4._0_4_ = (float)bVar1;
    auVar4._4_12_ = auVar5._4_12_;
    uVar3 = auVar4._0_8_;
  }
  return uVar3;
}

