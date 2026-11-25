// Recovered from game_scarlett_master.exe (GTA VI, Xbox Series X, PE32+ x64)
// Address: 14003ce50  size: 53 bytes
// Name:    FUN_14003ce50
// Subsystem: core
//
// Referenced strings (0 in this body, 0 including direct callees):
// Callees: FUN_144e50f80
//
// Generated decompilation. Formatting follows MiscRef/GTAVSRC conventions;
// identifiers are recovered, not original. See ../../../README.md.

#include "gta6decomp/rage_types.h"


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

float FUN_14003ce50(void)

{
  undefined1 auVar1 [64];
  undefined1 auVar2 [16];
  float fVar3;
  undefined1 extraout_var [56];
  
  fVar3 = *(float *)(_DAT_14ab7f650 + 0x3b0);
  auVar1._0_8_ = FUN_144e50f80();
  auVar1._8_56_ = extraout_var;
  auVar2._0_12_ = ZEXT812(0);
  auVar2._12_4_ = 0;
  auVar2 = vmaxss_avx(auVar1._0_16_,auVar2);
  return auVar2._0_4_ + fVar3;
}

