// Recovered from game_scarlett_master.exe (GTA VI, Xbox Series X, PE32+ x64)
// Address: 14019a390  size: 57 bytes
// Name:    FUN_14019a390
// Subsystem: core
//
// Referenced strings (0 in this body, 0 including direct callees):
// Callees: 
//
// Generated decompilation. Formatting follows MiscRef/GTAVSRC conventions;
// identifiers are recovered, not original. See ../../../README.md.

#include "gta6decomp/rage_types.h"


undefined8 * FUN_14019a390(undefined8 *param_1)

{
  undefined1 auVar1 [16];
  
  auVar1._0_12_ = ZEXT812(0);
  auVar1._12_4_ = 0;
  *(undefined1 *)(param_1 + 3) = 0;
  *(undefined1 (*) [16])(param_1 + 1) = auVar1;
  func_0x000144e72fd0(param_1 + 4);
  *param_1 = &UNK_14655e3d0;
  param_1[9] = 0;
  return param_1;
}

