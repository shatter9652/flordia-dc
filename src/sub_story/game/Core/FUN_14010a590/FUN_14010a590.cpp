// Recovered from game_scarlett_master.exe (GTA VI, Xbox Series X, PE32+ x64)
// Address: 14010a590  size: 130 bytes
// Name:    FUN_14010a590
// Subsystem: core
//
// Referenced strings (0 in this body, 0 including direct callees):
// Callees: 
//
// Generated decompilation. Formatting follows MiscRef/GTAVSRC conventions;
// identifiers are recovered, not original. See ../../../README.md.

#include "gta6decomp/rage_types.h"


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

longlong FUN_14010a590(longlong param_1)

{
  uint uVar1;
  undefined8 uVar2;
  undefined1 auVar3 [16];
  
  uVar2 = func_0x000144febb80();
  func_0x000144f63f40(param_1,uVar2);
  auVar3._0_12_ = ZEXT812(0);
  auVar3._12_4_ = 0;
  *(undefined1 (*) [16])(param_1 + 0x4a0) = auVar3;
  *(undefined1 (*) [16])(param_1 + 0x4aa) = auVar3;
  uVar1 = _DAT_145fc6ed8;
  *(byte *)(param_1 + 0x4bf) = *(byte *)(param_1 + 0x4bf) & 0xc0;
  *(undefined1 (*) [16])(param_1 + 0x4d0) = ZEXT416(uVar1);
  *(undefined8 *)(param_1 + 0x4e0) = _DAT_146159bc0;
  *(undefined8 *)(param_1 + 0x4e8) = 0;
  uVar2 = _UNK_14614f7f8;
  *(undefined8 *)(param_1 + 0x4f0) = _DAT_14614f7f0;
  *(undefined8 *)(param_1 + 0x4f8) = uVar2;
  *(undefined1 (*) [32])(param_1 + 0x500) = ZEXT832(0) << 0x20;
  *(undefined1 *)(param_1 + 0x4be) = 0xc;
  return param_1;
}

