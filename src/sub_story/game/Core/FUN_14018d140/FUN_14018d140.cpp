// Recovered from game_scarlett_master.exe (GTA VI, Xbox Series X, PE32+ x64)
// Address: 14018d140  size: 165 bytes
// Name:    FUN_14018d140
// Subsystem: core
//
// Referenced strings (0 in this body, 0 including direct callees):
// Callees: FUN_140985d70, FUN_14018d1f0
//
// Generated decompilation. Formatting follows MiscRef/GTAVSRC conventions;
// identifiers are recovered, not original. See ../../../README.md.

#include "gta6decomp/rage_types.h"


longlong * FUN_14018d140(longlong *param_1)

{
  undefined1 uVar1;
  undefined1 auVar2 [16];
  
  FUN_140985d70();
  *param_1 = (longlong)&UNK_1465fb670;
  FUN_14018d1f0(param_1 + 0x26);
  auVar2._0_12_ = ZEXT812(0);
  auVar2._12_4_ = 0;
  param_1[0x4a] = 0;
  param_1[0x4e] = 0;
  *(undefined1 (*) [16])(param_1 + 0x50) = auVar2;
  *(undefined4 *)(param_1 + 0x52) = 0;
  *(undefined8 *)((longlong)param_1 + 0x294) = 0xff3f800000;
  param_1[0x4c] = (longlong)&UNK_14662f8e0;
  param_1[0x54] = 0;
  *(undefined4 *)(param_1 + 0x55) = 0xbf800000;
  param_1[0x56] = -1;
  *(undefined2 *)((longlong)param_1 + 700) = 1;
  uVar1 = (**(code **)(*param_1 + 0x68))(param_1);
  *(undefined1 *)((longlong)param_1 + 0xa4) = uVar1;
  return param_1;
}

