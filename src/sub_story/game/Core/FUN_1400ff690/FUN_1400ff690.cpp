// Recovered from game_scarlett_master.exe (GTA VI, Xbox Series X, PE32+ x64)
// Address: 1400ff690  size: 88 bytes
// Name:    FUN_1400ff690
// Subsystem: core
//
// Referenced strings (0 in this body, 0 including direct callees):
// Callees: FUN_141029040
//
// Generated decompilation. Formatting follows MiscRef/GTAVSRC conventions;
// identifiers are recovered, not original. See ../../../README.md.

#include "gta6decomp/rage_types.h"


undefined1 (*) [16] FUN_1400ff690(undefined1 (*param_1) [16])

{
  undefined1 auVar1 [16];
  
  auVar1._0_12_ = ZEXT812(0);
  auVar1._12_4_ = 0;
  *param_1 = auVar1;
  *(uint *)param_1[1] = *(uint *)param_1[1] & 0xffffff80 | 5;
  param_1[1][4] = param_1[1][4] & 0xfe;
  *(undefined1 (*) [16])(param_1[1] + 8) = auVar1;
  *(undefined4 *)(param_1[2] + 8) = 0x1ffff;
  *(undefined8 *)(param_1[2] + 0xc) = 0;
  *(undefined4 *)(param_1[3] + 4) = 0;
  FUN_141029040();
  return param_1;
}

