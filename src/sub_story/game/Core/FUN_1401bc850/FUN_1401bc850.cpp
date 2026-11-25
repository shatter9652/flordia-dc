// Recovered from game_scarlett_master.exe (GTA VI, Xbox Series X, PE32+ x64)
// Address: 1401bc850  size: 57 bytes
// Name:    FUN_1401bc850
// Subsystem: core
//
// Referenced strings (0 in this body, 0 including direct callees):
// Callees: 
//
// Generated decompilation. Formatting follows MiscRef/GTAVSRC conventions;
// identifiers are recovered, not original. See ../../../README.md.

#include "gta6decomp/rage_types.h"


undefined8 * FUN_1401bc850(undefined8 *param_1,undefined8 param_2)

{
  undefined1 auVar1 [16];
  
  func_0x000144ff2680(param_1,param_2,9,2);
  auVar1._0_12_ = ZEXT812(0);
  auVar1._12_4_ = 0;
  *param_1 = &UNK_146678080;
  *(undefined1 (*) [16])(param_1 + 8) = auVar1;
  param_1[10] = 0;
  return param_1;
}

