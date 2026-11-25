// Recovered from game_scarlett_master.exe (GTA VI, Xbox Series X, PE32+ x64)
// Address: 1401ccd50  size: 437 bytes
// Name:    FUN_1401ccd50
// Subsystem: core
//
// Referenced strings (0 in this body, 0 including direct callees):
// Callees: FUN_144e6cf90, FUN_144dbce00
//
// Generated decompilation. Formatting follows MiscRef/GTAVSRC conventions;
// identifiers are recovered, not original. See ../../../README.md.

#include "gta6decomp/rage_types.h"


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1401ccd50(longlong param_1,longlong param_2)

{
  longlong *plVar1;
  longlong lVar2;
  uint uVar3;
  undefined4 uStack_5e;
  undefined2 uStack_5a;
  undefined8 uStack_58;
  undefined8 uStack_50;
  undefined8 uStack_48;
  undefined8 uStack_40;
  undefined8 uStack_38;
  undefined8 uStack_30;
  undefined8 uStack_28;
  undefined8 uStack_20;
  
  uStack_38 = *(undefined8 *)(param_1 + 0x50);
  uStack_30 = *(undefined8 *)(param_1 + 0x58);
  uStack_28 = *(undefined8 *)(param_1 + 0x60);
  uStack_20 = *(undefined8 *)(param_1 + 0x68);
  plVar1 = *(longlong **)(param_1 + 0x70);
  uStack_58 = *(undefined8 *)(param_1 + 0x30);
  uStack_50 = *(undefined8 *)(param_1 + 0x38);
  uStack_48 = *(undefined8 *)(param_1 + 0x40);
  uStack_40 = *(undefined8 *)(param_1 + 0x48);
  *(undefined4 *)((longlong)plVar1 + 0xc) = *(undefined4 *)(param_1 + 0x28);
  func_0x000144e8abd0();
  lVar2 = *plVar1;
  uVar3 = FUN_144e6cf90(lVar2);
  lVar2 = *(longlong *)(lVar2 + (ulonglong)uVar3 * 8);
  if ((lVar2 != 0) && ((ushort)(*(short *)(lVar2 + 0x12) - 1U) < _DAT_14a943ab8)) {
    *(undefined1 *)(param_2 + 0x121a4) = 1;
    uStack_5e = 0xffffffff;
    uStack_5a = 0xffff;
    FUN_144dbce00(param_2,0,lVar2,&uStack_5e,0x103);
  }
  uStack_38 = *(undefined8 *)(param_1 + 0xa8);
  uStack_30 = *(undefined8 *)(param_1 + 0xb0);
  uStack_28 = *(undefined8 *)(param_1 + 0xb8);
  uStack_20 = *(undefined8 *)(param_1 + 0xc0);
  plVar1 = *(longlong **)(param_1 + 200);
  uStack_58 = *(undefined8 *)(param_1 + 0x88);
  uStack_50 = *(undefined8 *)(param_1 + 0x90);
  uStack_48 = *(undefined8 *)(param_1 + 0x98);
  uStack_40 = *(undefined8 *)(param_1 + 0xa0);
  *(undefined4 *)((longlong)plVar1 + 0xc) = *(undefined4 *)(param_1 + 0x80);
  func_0x000144e8abd0();
  lVar2 = *plVar1;
  uVar3 = FUN_144e6cf90(lVar2);
  lVar2 = *(longlong *)(lVar2 + (ulonglong)uVar3 * 8);
  if ((lVar2 != 0) && ((ushort)(*(short *)(lVar2 + 0x12) - 1U) < _DAT_14a943ab8)) {
    *(undefined1 *)(param_2 + 0x121a4) = 1;
    uStack_5e = 0xffffffff;
    uStack_5a = 0xffff;
    FUN_144dbce00(param_2,0,lVar2,&uStack_5e,0x103);
  }
  uStack_38 = *(undefined8 *)(param_1 + 0x100);
  uStack_30 = *(undefined8 *)(param_1 + 0x108);
  uStack_28 = *(undefined8 *)(param_1 + 0x110);
  uStack_20 = *(undefined8 *)(param_1 + 0x118);
  plVar1 = *(longlong **)(param_1 + 0x120);
  uStack_58 = *(undefined8 *)(param_1 + 0xe0);
  uStack_50 = *(undefined8 *)(param_1 + 0xe8);
  uStack_48 = *(undefined8 *)(param_1 + 0xf0);
  uStack_40 = *(undefined8 *)(param_1 + 0xf8);
  *(undefined4 *)((longlong)plVar1 + 0xc) = *(undefined4 *)(param_1 + 0xd8);
  func_0x000144e8abd0();
  lVar2 = *plVar1;
  uVar3 = FUN_144e6cf90(lVar2);
  lVar2 = *(longlong *)(lVar2 + (ulonglong)uVar3 * 8);
  if ((lVar2 != 0) && ((ushort)(*(short *)(lVar2 + 0x12) - 1U) < _DAT_14a943ab8)) {
    *(undefined1 *)(param_2 + 0x121a4) = 1;
    uStack_5e = 0xffffffff;
    uStack_5a = 0xffff;
    FUN_144dbce00(param_2,0,lVar2,&uStack_5e,0x103);
  }
  return;
}

