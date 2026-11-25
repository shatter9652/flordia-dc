// Recovered from game_scarlett_master.exe (GTA VI, Xbox Series X, PE32+ x64)
// Address: 1401054b0  size: 164 bytes
// Name:    FUN_1401054b0
// Subsystem: core
//
// Referenced strings (0 in this body, 0 including direct callees):
// Callees: FUN_144da6330
//
// Generated decompilation. Formatting follows MiscRef/GTAVSRC conventions;
// identifiers are recovered, not original. See ../../../README.md.

#include "gta6decomp/rage_types.h"


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined8 * FUN_1401054b0(undefined8 *param_1)

{
  undefined1 auVar1 [16];
  undefined4 uVar2;
  undefined8 uVar3;
  
  FUN_144da6330();
  *param_1 = &UNK_14667af70;
  *(undefined4 *)(param_1 + 2) = 0x1ff;
  *(undefined8 *)((longlong)param_1 + 0x14) = 0;
  *(undefined1 (*) [32])(param_1 + 6) = ZEXT1232(ZEXT812(0));
  *(undefined1 (*) [32])(param_1 + 8) = ZEXT1232(ZEXT812(0));
  uVar2 = _DAT_145fc6ed8;
  *(undefined4 *)(param_1 + 0xc) = _DAT_145fc6ed8;
  *(undefined4 *)((longlong)param_1 + 100) = uVar2;
  *(undefined4 *)(param_1 + 0xd) = uVar2;
  *(undefined4 *)((longlong)param_1 + 0x6c) = uVar2;
  uVar3 = _UNK_14615b278;
  param_1[4] = _DAT_14615b270;
  param_1[5] = uVar3;
  *(undefined4 *)((longlong)param_1 + 0x3c) = 1;
  *param_1 = &UNK_14667b950;
  *(undefined1 *)(param_1 + 2) = 0;
  *(undefined4 *)((longlong)param_1 + 0x5c) = 0;
  *(undefined4 *)((longlong)param_1 + 0x4c) = 0;
  auVar1 = vblendps_avx(ZEXT816(0) << 0x20,*(undefined1 (*) [16])(param_1 + 8),8);
  *(undefined1 (*) [16])(param_1 + 8) = auVar1;
  func_0x000144fad540(param_1);
  return param_1;
}

