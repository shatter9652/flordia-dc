// Recovered from game_scarlett_master.exe (GTA VI, Xbox Series X, PE32+ x64)
// Address: 1400b5c90  size: 181 bytes
// Name:    FUN_1400b5c90
// Subsystem: core
//
// Referenced strings (0 in this body, 0 including direct callees):
// Callees: FUN_1400b7600, FUN_144e4c850, FUN_1400b5d50
//
// Generated decompilation. Formatting follows MiscRef/GTAVSRC conventions;
// identifiers are recovered, not original. See ../../../README.md.

#include "gta6decomp/rage_types.h"


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined8 * FUN_1400b5c90(undefined8 *param_1,longlong param_2)

{
  longlong lVar1;
  uint uVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  undefined8 *puVar6;
  undefined1 auVar7 [16];
  
  FUN_1400b7600();
  uVar4 = _DAT_146159bc0;
  uVar3 = _UNK_14614f7f8;
  uVar5 = _DAT_14614f7f0;
  uVar2 = _DAT_145fc6ed8;
  auVar7._0_12_ = ZEXT812(0);
  auVar7._12_4_ = 0;
  *param_1 = &UNK_14646dbb0;
  *(undefined1 (*) [16])(param_1 + 0x28) = auVar7;
  *(undefined1 (*) [16])(param_1 + 0x2a) = ZEXT416(uVar2);
  param_1[0x2c] = uVar4;
  param_1[0x2d] = 0;
  param_1[0x2e] = uVar5;
  param_1[0x2f] = uVar3;
  *(undefined1 (*) [16])(param_1 + 0x30) = auVar7;
  *(undefined1 (*) [16])((longlong)param_1 + 0x18c) = auVar7;
  *(undefined4 *)((longlong)param_1 + 0x19c) = 0xffffffff;
  *(byte *)((longlong)param_1 + 0x123) = *(byte *)((longlong)param_1 + 0x123) | 0x40;
  lVar1 = *(longlong *)(param_2 + 0x20);
  uVar5 = FUN_144e4c850(*(undefined4 *)(lVar1 + 0x58),*(undefined1 *)(lVar1 + 0x84));
  param_1[0x28] = uVar5;
  puVar6 = (undefined8 *)FUN_1400b5d50(*(undefined8 *)(lVar1 + 0x60));
  if (puVar6 != (undefined8 *)0x0) {
    uVar5 = puVar6[1];
    param_1[0x32] = *puVar6;
    param_1[0x33] = uVar5;
  }
  return param_1;
}

