// Recovered from game_scarlett_master.exe (GTA VI, Xbox Series X, PE32+ x64)
// Address: 14007f9c0  size: 92 bytes
// Name:    FUN_14007f9c0
// Subsystem: core
//
// Referenced strings (0 in this body, 0 including direct callees):
// Callees: FUN_144eef480
//
// Generated decompilation. Formatting follows MiscRef/GTAVSRC conventions;
// identifiers are recovered, not original. See ../../../README.md.

#include "gta6decomp/rage_types.h"


undefined8 * FUN_14007f9c0(undefined8 *param_1)

{
  undefined1 auVar1 [16];
  
  FUN_144eef480(param_1,5);
  auVar1._0_12_ = ZEXT812(0);
  auVar1._12_4_ = 0;
  *param_1 = &UNK_1465f49e0;
  *(undefined4 *)(param_1 + 8) = 0;
  *(undefined8 *)((longlong)param_1 + 0x44) = 0;
  *(undefined1 (*) [16])(param_1 + 10) = auVar1;
  *(undefined2 *)((longlong)param_1 + 0x74) = 0;
  *(undefined4 *)(param_1 + 0xf) = 0;
  *(uint *)((longlong)param_1 + 0x7c) = *(uint *)((longlong)param_1 + 0x7c) & 0xfffe0000;
  *(undefined4 *)(param_1 + 0xe) = 0;
  *(byte *)(param_1 + 0x10) = *(byte *)(param_1 + 0x10) & 0xf2;
  *(undefined4 *)(param_1 + 0xc) = 0x3f800000;
  return param_1;
}

