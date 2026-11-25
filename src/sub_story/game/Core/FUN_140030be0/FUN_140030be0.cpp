// Recovered from game_scarlett_master.exe (GTA VI, Xbox Series X, PE32+ x64)
// Address: 140030be0  size: 270 bytes
// Name:    FUN_140030be0
// Subsystem: core
//
// Referenced strings (0 in this body, 0 including direct callees):
// Callees: FUN_140526b10
//
// Generated decompilation. Formatting follows MiscRef/GTAVSRC conventions;
// identifiers are recovered, not original. See ../../../README.md.

#include "gta6decomp/rage_types.h"


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_140030be0(longlong param_1)

{
  byte bVar1;
  undefined4 uVar2;
  undefined8 uVar3;
  undefined8 uStack_38;
  undefined8 uStack_30;
  
  uVar3 = _UNK_14615cdd8;
  uVar2 = *(undefined4 *)(param_1 + 0x12f8);
  *(undefined8 *)(param_1 + 0x1304) = _DAT_14615cdd0;
  *(undefined8 *)(param_1 + 0x130c) = uVar3;
  *(undefined1 *)(param_1 + 0x1315) = 1;
  *(undefined4 *)(param_1 + 0x12f8) = 0;
  bVar1 = *(byte *)(param_1 + 0x131e);
  *(byte *)(param_1 + 0x131e) = bVar1 & 0xfc;
  *(undefined4 *)(param_1 + 0x150) = 0;
  func_0x000144f7ac60(&uStack_38);
  *(undefined8 *)(param_1 + 0xf30) = uStack_38;
  *(undefined8 *)(param_1 + 0xf38) = uStack_30;
  func_0x000144f7ac60(&uStack_38);
  *(undefined8 *)(param_1 + 0xf40) = uStack_38;
  *(undefined8 *)(param_1 + 0xf48) = uStack_30;
  func_0x000144f7ac60(&uStack_38);
  *(undefined8 *)(param_1 + 0xf70) = uStack_38;
  *(undefined8 *)(param_1 + 0xf78) = uStack_30;
  func_0x000144f7ac60(&uStack_38);
  *(undefined8 *)(param_1 + 0xf80) = uStack_38;
  *(undefined8 *)(param_1 + 0xf88) = uStack_30;
  func_0x000144f7ac60(&uStack_38);
  *(undefined8 *)(param_1 + 0xf90) = uStack_38;
  *(undefined8 *)(param_1 + 0xf98) = uStack_30;
  func_0x000144f7ac60(&uStack_38);
  *(undefined8 *)(param_1 + 4000) = uStack_38;
  *(undefined8 *)(param_1 + 0xfa8) = uStack_30;
  if ((bVar1 & 0x20) != 0) {
    *(undefined4 *)(param_1 + 0x12f8) = uVar2;
  }
  FUN_140526b10(param_1);
  func_0x000140030cf0(param_1);
  *(undefined1 *)(param_1 + 0x1315) = 1;
  return;
}

