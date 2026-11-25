// Recovered from game_scarlett_master.exe (GTA VI, Xbox Series X, PE32+ x64)
// Address: 14017f960  size: 132 bytes
// Name:    FUN_14017f960
// Subsystem: core
//
// Referenced strings (0 in this body, 0 including direct callees):
// Callees: FUN_14017fd90
//
// Generated decompilation. Formatting follows MiscRef/GTAVSRC conventions;
// identifiers are recovered, not original. See ../../../README.md.

#include "gta6decomp/rage_types.h"


undefined8 * FUN_14017f960(undefined8 *param_1)

{
  undefined1 auVar1 [16];
  
  FUN_14017fd90();
  *param_1 = &UNK_1466d0d20;
  func_0x00014017f9f0();
  auVar1._0_12_ = ZEXT812(0);
  auVar1._12_4_ = 0;
  *(undefined4 *)(param_1 + 0xc15) = 0xffff;
  param_1[0xc17] = 0;
  *(undefined4 *)(param_1 + 0xc18) = 0;
  *(undefined4 *)((longlong)param_1 + 0x26c) = 0xffff;
  *(undefined8 *)((longlong)param_1 + 0x60ac) = 0;
  *(undefined8 *)((longlong)param_1 + 0x60cc) = 0xc8000000c800;
  *(undefined4 *)((longlong)param_1 + 0x60b4) = 0;
  *(undefined4 *)((longlong)param_1 + 0x60d4) = 0;
  *(undefined1 (*) [16])(param_1 + 0xc1c) = auVar1;
  *(undefined1 (*) [16])((longlong)param_1 + 0x60ec) = auVar1;
  return param_1;
}

