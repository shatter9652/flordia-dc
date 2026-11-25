// Recovered from game_scarlett_master.exe (GTA VI, Xbox Series X, PE32+ x64)
// Address: 140095c10  size: 140 bytes
// Name:    FUN_140095c10
// Subsystem: core
//
// Referenced strings (0 in this body, 0 including direct callees):
// Callees: FUN_1401d7580
//
// Generated decompilation. Formatting follows MiscRef/GTAVSRC conventions;
// identifiers are recovered, not original. See ../../../README.md.

#include "gta6decomp/rage_types.h"


undefined1 (*) [16]
FUN_140095c10(undefined1 (*param_1) [16],longlong param_2,undefined8 param_3,char param_4,
             char param_5)

{
  longlong lVar1;
  byte bVar2;
  byte bVar3;
  undefined1 auVar4 [16];
  
  auVar4._0_12_ = ZEXT812(0);
  auVar4._12_4_ = 0;
  *param_1 = auVar4;
  *(undefined4 *)param_1[0x1d] = 1;
  bVar3 = param_5 << 2 | param_4 * '\x02' | param_1[0x1d][0xc] & 0xf1;
  param_1[0x1d][0xc] = bVar3;
  lVar1 = *(longlong *)(param_2 + 0x10);
  *(undefined8 *)(param_1[0x1d] + 4) = 0xffffffff;
  bVar2 = FUN_1401d7580(*(undefined8 *)(lVar1 + 0x10),*(undefined2 *)(lVar1 + 0x18),0x2c3cf7e6);
  param_1[0x1d][0xc] = bVar3 & 0xf6 | bVar2;
  if (bVar2 != 0) {
    *(longlong *)*param_1 = param_2;
    *(undefined8 *)(*param_1 + 8) = param_3;
  }
  return param_1;
}

