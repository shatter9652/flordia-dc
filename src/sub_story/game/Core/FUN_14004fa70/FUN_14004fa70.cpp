// Recovered from game_scarlett_master.exe (GTA VI, Xbox Series X, PE32+ x64)
// Address: 14004fa70  size: 300 bytes
// Name:    FUN_14004fa70
// Subsystem: core
//
// Referenced strings (0 in this body, 0 including direct callees):
// Callees: FUN_144e2c710, FUN_145419180, FUN_14534a8f0, FUN_144e2d0f0
//
// Generated decompilation. Formatting follows MiscRef/GTAVSRC conventions;
// identifiers are recovered, not original. See ../../../README.md.

#include "gta6decomp/rage_types.h"


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_14004fa70(longlong param_1,undefined8 param_2)

{
  undefined1 auVar1 [16];
  undefined1 auVar2 [64];
  undefined1 auStack_88 [16];
  undefined8 uStack_78;
  undefined1 uStack_70;
  undefined1 auStack_68 [16];
  undefined1 auStack_58 [16];
  
  auStack_58._8_8_ = 0;
  auStack_58._0_8_ = _DAT_14aaf3f98;
  auStack_68._8_8_ = 0;
  auStack_68._0_8_ = _DAT_14aaf3fa0;
  auVar1 = vmovlhps_avx(auStack_58,auStack_68);
  if (param_1 != 0x14aaf3f78) {
    *(undefined1 (*) [16])(param_1 + 0x20) = auVar1;
  }
  if (param_1 != 0x14aaf3f88) {
    *(undefined1 (*) [16])(param_1 + 0x10) = auVar1;
  }
  *(undefined8 *)(param_1 + 0x3c) = 0;
  FUN_145419180(param_1);
  auStack_88._0_12_ = ZEXT812(0);
  auStack_88._12_4_ = 0;
  auVar2 = ZEXT1664(auStack_88);
  uStack_78 = 0x3f00000000000000;
  uStack_70 = 2;
  FUN_144e2d0f0(auStack_88,param_2);
  FUN_144e2c710(param_1,auStack_88);
  auStack_88 = auVar2._0_16_;
  uStack_78 = 0x3f00000000000000;
  uStack_70 = 2;
  FUN_144e2d0f0(auStack_88,param_2);
  func_0x000144e2c790(param_1,auStack_88);
  auStack_88 = auVar2._0_16_;
  uStack_78 = 0x3f00000000000000;
  uStack_70 = 2;
  FUN_144e2d0f0(auStack_88,0);
  func_0x000144e2df80(param_1,auStack_88);
  FUN_14534a8f0(param_1,0);
  *(byte *)(param_1 + 0x16b) = *(byte *)(param_1 + 0x16b) & 0xef;
  return;
}

