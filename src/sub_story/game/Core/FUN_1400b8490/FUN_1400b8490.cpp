// Recovered from game_scarlett_master.exe (GTA VI, Xbox Series X, PE32+ x64)
// Address: 1400b8490  size: 198 bytes
// Name:    FUN_1400b8490
// Subsystem: core
//
// Referenced strings (0 in this body, 0 including direct callees):
// Callees: FUN_1400b7600, FUN_1400b6b80
//
// Generated decompilation. Formatting follows MiscRef/GTAVSRC conventions;
// identifiers are recovered, not original. See ../../../README.md.

#include "gta6decomp/rage_types.h"


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined8 * FUN_1400b8490(undefined8 *param_1,longlong param_2)

{
  uint uVar1;
  undefined8 uVar2;
  char cVar3;
  
  FUN_1400b7600();
  uVar1 = _DAT_145fc6ed8;
  *param_1 = &UNK_14646d390;
  *(undefined1 (*) [16])(param_1 + 0x2a) = ZEXT416(uVar1);
  param_1[0x2c] = _DAT_146159bc0;
  param_1[0x2d] = 0;
  uVar2 = _UNK_14614f7f8;
  param_1[0x2e] = _DAT_14614f7f0;
  param_1[0x2f] = uVar2;
  *(undefined1 (*) [16])(param_1 + 0x30) = ZEXT816(0) << 0x20;
  *(undefined1 (*) [16])((longlong)param_1 + 0x18c) = ZEXT816(0) << 0x20;
  *(undefined4 *)((longlong)param_1 + 0x19c) = 0xffffffff;
  param_1[0x34] = 0;
  param_1[0x35] = 0xffffffff00000000;
  *(undefined4 *)(param_1 + 0x36) = 0;
  *(undefined2 *)((longlong)param_1 + 0x1b4) = 0;
  *(byte *)((longlong)param_1 + 0x123) = *(byte *)((longlong)param_1 + 0x123) | 0x40;
  cVar3 = FUN_1400b6b80(*(undefined8 *)(param_2 + 0x20));
  *(byte *)(param_1 + 0x28) = *(byte *)(param_1 + 0x28) & 0xef | cVar3 << 4;
  return param_1;
}

