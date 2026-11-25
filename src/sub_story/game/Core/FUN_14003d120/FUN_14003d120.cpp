// Recovered from game_scarlett_master.exe (GTA VI, Xbox Series X, PE32+ x64)
// Address: 14003d120  size: 192 bytes
// Name:    FUN_14003d120
// Subsystem: core
//
// Referenced strings (0 in this body, 0 including direct callees):
// Callees: FUN_144e50fe0, FUN_14003db80
//
// Generated decompilation. Formatting follows MiscRef/GTAVSRC conventions;
// identifiers are recovered, not original. See ../../../README.md.

#include "gta6decomp/rage_types.h"


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_14003d120(longlong param_1)

{
  undefined8 uVar1;
  uint uVar2;
  undefined1 auVar3 [16];
  
  FUN_14003db80();
  FUN_144e50fe0(param_1);
  uVar2 = _DAT_145fc6f48;
  auVar3._0_12_ = ZEXT812(0);
  auVar3._12_4_ = 0;
  *(undefined1 *)(param_1 + 0x10f0) = 0;
  *(undefined1 *)(param_1 + 0xcb0) = 0;
  *(undefined1 (*) [16])(param_1 + 0xc40) = auVar3;
  *(undefined1 (*) [16])(param_1 + 0xcd0) = auVar3;
  *(undefined4 *)(param_1 + 0xce0) = 0;
  *(undefined8 *)(param_1 + 0xc50) = 0x1ffff0001ffff;
  *(undefined1 *)(param_1 + 0xc30) = 0;
  *(undefined1 *)(param_1 + 0xcb8) = 1;
  *(undefined8 *)(param_1 + 0xc90) = 0xffffffff00000000;
  uVar1 = vmovlps_avx(ZEXT416(uVar2));
  *(undefined8 *)(param_1 + 0xc58) = uVar1;
  *(undefined4 *)(param_1 + 0xcb4) = 0;
  func_0x00014003d1e0(param_1 + 0xc30);
  func_0x00014003d1f0(param_1 + 0xc30);
  *(undefined8 *)(param_1 + 0xcbc) = 0x1ffff00000000;
  *(undefined4 *)(param_1 + 0xc98) = 0;
  *(undefined1 *)(param_1 + 0x10fc) = 0;
  return;
}

