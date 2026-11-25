// Recovered from game_scarlett_master.exe (GTA VI, Xbox Series X, PE32+ x64)
// Address: 140183970  size: 66 bytes
// Name:    FUN_140183970
// Subsystem: core
//
// Referenced strings (0 in this body, 0 including direct callees):
// Callees: 
//
// Generated decompilation. Formatting follows MiscRef/GTAVSRC conventions;
// identifiers are recovered, not original. See ../../../README.md.

#include "gta6decomp/rage_types.h"


undefined8 * FUN_140183970(undefined8 *param_1)

{
  undefined1 auVar1 [16];
  
  func_0x000140182d50();
  auVar1._0_12_ = ZEXT812(0);
  auVar1._12_4_ = 0;
  param_1[0xe] = param_1 + 0xc;
  param_1[0xf] = param_1 + 0xc;
  *(undefined1 (*) [16])(param_1 + 0x10) = auVar1;
  *(undefined4 *)(param_1 + 0x12) = 0x80000000;
  *param_1 = &UNK_146632990;
  return param_1;
}

