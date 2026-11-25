// Recovered from game_scarlett_master.exe (GTA VI, Xbox Series X, PE32+ x64)
// Address: 140133970  size: 44 bytes
// Name:    FUN_140133970
// Subsystem: core
//
// Referenced strings (0 in this body, 0 including direct callees):
// Callees: FUN_144db8640
//
// Generated decompilation. Formatting follows MiscRef/GTAVSRC conventions;
// identifiers are recovered, not original. See ../../../README.md.

#include "gta6decomp/rage_types.h"


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined8 FUN_140133970(void)

{
  undefined1 auVar1 [16];
  undefined1 auVar2 [64];
  undefined1 auVar3 [16];
  undefined1 extraout_var [56];
  
  auVar2._0_8_ = FUN_144db8640();
  auVar2._8_56_ = extraout_var;
  auVar3._0_12_ = ZEXT812(0);
  auVar3._12_4_ = 0;
  auVar1 = vminss_avx(ZEXT416(_DAT_145fc6ed8),auVar2._0_16_);
  auVar3 = vcmpss_avx(auVar2._0_16_,auVar3,1);
  return CONCAT44(~auVar3._4_4_ & auVar1._4_4_,~auVar3._0_4_ & auVar1._0_4_);
}

