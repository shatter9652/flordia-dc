// Recovered from game_scarlett_master.exe (GTA VI, Xbox Series X, PE32+ x64)
// Address: 1401cc870  size: 141 bytes
// Name:    FUN_1401cc870
// Subsystem: core
//
// Referenced strings (0 in this body, 0 including direct callees):
// Callees: FUN_144e6cf90, FUN_144dbce00
//
// Generated decompilation. Formatting follows MiscRef/GTAVSRC conventions;
// identifiers are recovered, not original. See ../../../README.md.

#include "gta6decomp/rage_types.h"


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1401cc870(longlong param_1,longlong param_2)

{
  longlong lVar1;
  uint uVar2;
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
  
  uStack_58 = *(undefined8 *)(param_1 + 0x18);
  uStack_50 = *(undefined8 *)(param_1 + 0x20);
  uStack_48 = *(undefined8 *)(param_1 + 0x28);
  uStack_40 = *(undefined8 *)(param_1 + 0x30);
  uStack_38 = *(undefined8 *)(param_1 + 0x38);
  uStack_30 = *(undefined8 *)(param_1 + 0x40);
  uStack_28 = *(undefined8 *)(param_1 + 0x48);
  uStack_20 = *(undefined8 *)(param_1 + 0x50);
  *(undefined4 *)(param_1 + 0x14) = *(undefined4 *)(param_1 + 0x60);
  func_0x000144e8abd0();
  lVar1 = *(longlong *)(param_1 + 8);
  uVar2 = FUN_144e6cf90(lVar1);
  lVar1 = *(longlong *)(lVar1 + (ulonglong)uVar2 * 8);
  if ((lVar1 != 0) && ((ushort)(*(short *)(lVar1 + 0x12) - 1U) < _DAT_14a943ab8)) {
    *(undefined1 *)(param_2 + 0x121a4) = 1;
    uStack_5e = 0xffffffff;
    uStack_5a = 0xffff;
    FUN_144dbce00(param_2,0,lVar1,&uStack_5e,0x103);
  }
  return;
}

