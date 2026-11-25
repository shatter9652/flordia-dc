// Recovered from game_scarlett_master.exe (GTA VI, Xbox Series X, PE32+ x64)
// Address: 1400b6780  size: 161 bytes
// Name:    FUN_1400b6780
// Subsystem: core
//
// Referenced strings (0 in this body, 0 including direct callees):
// Callees: FUN_1400b6eb0, FUN_144f43760
//
// Generated decompilation. Formatting follows MiscRef/GTAVSRC conventions;
// identifiers are recovered, not original. See ../../../README.md.

#include "gta6decomp/rage_types.h"


undefined8 * FUN_1400b6780(undefined8 *param_1,longlong param_2,undefined8 param_3)

{
  byte bVar1;
  longlong lVar2;
  undefined1 auVar3 [16];
  
  FUN_144f43760(param_1,param_2,param_3,8);
  auVar3._0_12_ = ZEXT812(0);
  auVar3._12_4_ = 0;
  *param_1 = &UNK_14646dd30;
  *(undefined4 *)(param_1 + 0x5f) = 0;
  *(undefined1 (*) [16])(param_1 + 0x5c) = auVar3;
  bVar1 = *(byte *)((longlong)param_1 + 0x2fc);
  *(byte *)((longlong)param_1 + 0x2fc) = bVar1 & 0xf9;
  lVar2 = *(longlong *)(param_2 + 0x110);
  *(undefined4 *)(param_1 + 0x58) = *(undefined4 *)(lVar2 + 0xb8);
  *(byte *)((longlong)param_1 + 0x2fc) = bVar1 & 0xf8 | *(byte *)(lVar2 + 0x150);
  param_1[0x43] = *(undefined8 *)(param_2 + 0xe0);
  FUN_1400b6eb0(param_1 + 0x44,*(undefined8 *)(param_2 + 0x110),*(undefined8 *)(param_2 + 0x20),
                param_3);
  return param_1;
}

