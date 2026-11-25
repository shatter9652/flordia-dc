// Recovered from game_scarlett_master.exe (GTA VI, Xbox Series X, PE32+ x64)
// Address: 1400b86d0  size: 106 bytes
// Name:    FUN_1400b86d0
// Subsystem: core
//
// Referenced strings (0 in this body, 0 including direct callees):
// Callees: FUN_144ec4e40
//
// Generated decompilation. Formatting follows MiscRef/GTAVSRC conventions;
// identifiers are recovered, not original. See ../../../README.md.

#include "gta6decomp/rage_types.h"


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined1 (*) [16] FUN_1400b86d0(undefined1 (*param_1) [16])

{
  undefined1 auVar1 [16];
  undefined1 auVar2 [16];
  undefined1 auVar3 [16];
  
  auVar3._4_4_ = _DAT_145fc6f50;
  auVar3._0_4_ = _DAT_145fc6f50;
  auVar3._8_4_ = _DAT_145fc6f50;
  auVar3._12_4_ = _DAT_145fc6f50;
  auVar2._4_4_ = _DAT_145fc6f54;
  auVar2._0_4_ = _DAT_145fc6f54;
  auVar2._8_4_ = _DAT_145fc6f54;
  auVar2._12_4_ = _DAT_145fc6f54;
  auVar1._0_12_ = ZEXT812(0);
  auVar1._12_4_ = 0;
  *param_1 = auVar1;
  param_1[1] = auVar3;
  param_1[2] = auVar2;
  FUN_144ec4e40(param_1 + 3);
  FUN_144ec4e40(param_1[3] + 8);
  FUN_144ec4e40(param_1 + 4);
  FUN_144ec4e40(param_1[4] + 8);
  *(undefined1 (*) [32])(param_1 + 5) = ZEXT1232(ZEXT812(0));
  *(undefined1 (*) [32])(param_1 + 3) = ZEXT1232(ZEXT812(0));
  return param_1;
}

