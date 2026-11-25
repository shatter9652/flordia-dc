// Recovered from game_scarlett_master.exe (GTA VI, Xbox Series X, PE32+ x64)
// Address: 140130080  size: 64 bytes
// Name:    FUN_140130080
// Subsystem: core
//
// Referenced strings (0 in this body, 0 including direct callees):
// Callees: FUN_1450caf90
//
// Generated decompilation. Formatting follows MiscRef/GTAVSRC conventions;
// identifiers are recovered, not original. See ../../../README.md.

#include "gta6decomp/rage_types.h"


longlong FUN_140130080(longlong param_1,undefined8 param_2)

{
  undefined2 uVar1;
  undefined1 auVar2 [16];
  
  auVar2._0_12_ = ZEXT812(0);
  auVar2._12_4_ = 0;
  *(undefined1 (*) [16])(param_1 + 8) = auVar2;
  *(undefined8 *)(param_1 + 0x20) = param_2;
  uVar1 = FUN_1450caf90(param_2,param_1 + 0x20);
  *(undefined2 *)(param_1 + 0x18) = uVar1;
  *(undefined4 *)(param_1 + 0x28) = 0xffffffff;
  *(undefined8 *)(param_1 + 0x30) = 0;
  return param_1;
}

