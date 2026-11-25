// Recovered from game_scarlett_master.exe (GTA VI, Xbox Series X, PE32+ x64)
// Address: 1400e5660  size: 629 bytes
// Name:    FUN_1400e5660
// Subsystem: core
//
// Referenced strings (0 in this body, 0 including direct callees):
// Callees: FUN_140acbf60, FUN_145028490
//
// Generated decompilation. Formatting follows MiscRef/GTAVSRC conventions;
// identifiers are recovered, not original. See ../../../README.md.

#include "gta6decomp/rage_types.h"


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1400e5660(longlong param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  char cVar1;
  undefined8 uVar2;
  longlong lVar3;
  undefined8 unaff_RSI;
  undefined8 unaff_XMM6_Qa;
  undefined8 unaff_XMM6_Qb;
  undefined1 auVar4 [64];
  
  cVar1 = FUN_145028490(*(undefined8 *)(param_1 + 0xf0));
  if (cVar1 != '\0') {
    FUN_140acbf60(param_1 + 0xf0,_DAT_145fc6ed8);
  }
  cVar1 = FUN_145028490(*(undefined8 *)(param_1 + 0xf8));
  if (cVar1 != '\0') {
    FUN_140acbf60(param_1 + 0xf8,_DAT_145fc6ed8);
  }
  cVar1 = FUN_145028490(*(undefined8 *)(param_1 + 0x100));
  if (cVar1 != '\0') {
    FUN_140acbf60(param_1 + 0x100,_DAT_145fc6ed8);
  }
  cVar1 = FUN_145028490(*(undefined8 *)(param_1 + 0x108));
  if (cVar1 != '\0') {
    FUN_140acbf60(param_1 + 0x108,_DAT_145fc6ed8);
  }
  cVar1 = FUN_145028490(*(undefined8 *)(param_1 + 0x110));
  if (cVar1 != '\0') {
    FUN_140acbf60(param_1 + 0x110,_DAT_145fc6ed8);
  }
  cVar1 = FUN_145028490(*(undefined8 *)(param_1 + 0x118));
  if (cVar1 != '\0') {
    FUN_140acbf60(param_1 + 0x118,_DAT_145fc6ed8);
  }
  cVar1 = FUN_145028490(*(undefined8 *)(param_1 + 0x120));
  if (cVar1 != '\0') {
    FUN_140acbf60(param_1 + 0x120,_DAT_145fc6ed8);
  }
  cVar1 = FUN_145028490(*(undefined8 *)(param_1 + 0x128));
  if (cVar1 != '\0') {
    FUN_140acbf60(param_1 + 0x128,_DAT_145fc6ed8);
  }
  cVar1 = FUN_145028490(*(undefined8 *)(param_1 + 0x130));
  if (cVar1 != '\0') {
    FUN_140acbf60(param_1 + 0x130,_DAT_145fc6ed8);
  }
  cVar1 = FUN_145028490(*(undefined8 *)(param_1 + 0x138));
  if (cVar1 != '\0') {
    FUN_140acbf60(param_1 + 0x138,_DAT_145fc6ed8);
  }
  cVar1 = FUN_145028490(*(undefined8 *)(param_1 + 0x140));
  if (cVar1 != '\0') {
    FUN_140acbf60(param_1 + 0x140,_DAT_145fc6ed8);
  }
  cVar1 = FUN_145028490(*(undefined8 *)(param_1 + 0x148));
  if (cVar1 != '\0') {
    FUN_140acbf60(param_1 + 0x148,_DAT_145fc6ed8);
  }
  cVar1 = FUN_145028490(*(undefined8 *)(param_1 + 0x150));
  if (cVar1 != '\0') {
    FUN_140acbf60(param_1 + 0x150,_DAT_145fc6ed8);
  }
  cVar1 = FUN_145028490(*(undefined8 *)(param_1 + 0x158));
  if (cVar1 != '\0') {
    FUN_140acbf60(param_1 + 0x158,_DAT_145fc6ed8);
  }
  cVar1 = FUN_145028490(*(undefined8 *)(param_1 + 0x160));
  if (cVar1 == '\0') {
    return;
  }
  auVar4 = ZEXT464(_DAT_145fc6ed8);
  cVar1 = FUN_145028490(*(longlong *)(param_1 + 0x160));
  if (cVar1 == '\0') {
    return;
  }
  uVar2 = func_0x0001452a14f0(*(undefined8 *)(*(longlong *)(param_1 + 0x160) + 400));
  auVar4 = ZEXT1664(auVar4._0_16_);
  lVar3 = func_0x000140acc010(uVar2,0x64579385);
  if (lVar3 != 0) {
    *(int *)(lVar3 + 8) = auVar4._0_4_;
    return;
  }
  auVar4 = ZEXT1664(auVar4._0_16_);
  lVar3 = FUN_1440ab850(uVar2,0x64579385,1,param_4,unaff_XMM6_Qa,unaff_XMM6_Qb,unaff_RSI);
  *(int *)(lVar3 + 8) = auVar4._0_4_;
  return;
}

