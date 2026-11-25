// Recovered from game_scarlett_master.exe (GTA VI, Xbox Series X, PE32+ x64)
// Address: 140091c80  size: 94 bytes
// Name:    FUN_140091c80
// Subsystem: core
//
// Referenced strings (0 in this body, 0 including direct callees):
// Callees: FUN_140091ce0
//
// Generated decompilation. Formatting follows MiscRef/GTAVSRC conventions;
// identifiers are recovered, not original. See ../../../README.md.

#include "gta6decomp/rage_types.h"


void FUN_140091c80(longlong param_1)

{
  undefined1 auVar1 [16];
  
  FUN_140091ce0();
  func_0x000144f1fb10(param_1 + 0x90);
  auVar1._0_12_ = ZEXT812(0);
  auVar1._12_4_ = 0;
  *(undefined4 *)(param_1 + 0xa0) = 0xffffffff;
  *(undefined1 (*) [16])(param_1 + 0xa4) = auVar1;
  *(undefined8 *)(param_1 + 0xb1) = 0;
  *(undefined1 (*) [32])(param_1 + 0xba) = ZEXT432(0) << 0x20;
  *(undefined1 (*) [32])(param_1 + 0xce) = ZEXT432(0) << 0x20;
  *(byte *)(param_1 + 0xb9) = *(byte *)(param_1 + 0xb9) & 0xfc;
  return;
}

