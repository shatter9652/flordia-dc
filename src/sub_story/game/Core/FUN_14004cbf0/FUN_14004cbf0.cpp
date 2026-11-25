// Recovered from game_scarlett_master.exe (GTA VI, Xbox Series X, PE32+ x64)
// Address: 14004cbf0  size: 390 bytes
// Name:    FUN_14004cbf0
// Subsystem: core
//
// Referenced strings (0 in this body, 0 including direct callees):
// Callees: FUN_14004ce80, FUN_14004dd00, FUN_144e2dd40, FUN_145221720, FUN_1452446a0, FUN_14004ce20, FUN_14004ef80, FUN_14004cda0
//
// Generated decompilation. Formatting follows MiscRef/GTAVSRC conventions;
// identifiers are recovered, not original. See ../../../README.md.

#include "gta6decomp/rage_types.h"


void FUN_14004cbf0(longlong param_1)

{
  longlong lVar1;
  ulonglong uVar2;
  undefined1 auStack_78 [16];
  undefined8 uStack_68;
  undefined1 uStack_60;
  undefined8 uStack_58;
  undefined8 uStack_50;
  undefined8 uStack_48;
  undefined8 uStack_40;
  undefined8 uStack_38;
  undefined8 uStack_30;
  
  uVar2 = *(ulonglong *)(param_1 + 8) & 0xfffffffffffffff0;
  lVar1 = *(longlong *)(uVar2 + 0x20);
  *(ulonglong *)(param_1 + 0x14b0) = uVar2;
  *(longlong *)(param_1 + 0x14b8) = param_1 + 0x1fd0;
  FUN_14004ef80();
  uStack_58 = *(undefined8 *)(uVar2 + 0x40);
  uStack_50 = *(undefined8 *)(uVar2 + 0x48);
  uStack_48 = *(undefined8 *)(uVar2 + 0x50);
  uStack_40 = *(undefined8 *)(uVar2 + 0x58);
  uStack_38 = *(undefined8 *)(uVar2 + 0x60);
  uStack_30 = *(undefined8 *)(uVar2 + 0x68);
  uStack_68 = 0x3f00000000000000;
  auStack_78 = ZEXT816(0) << 0x20;
  uStack_60 = 2;
  FUN_1452446a0(auStack_78);
  func_0x0001452216f0(param_1,auStack_78);
  func_0x000144e2c700(param_1,auStack_78);
  FUN_145221720(param_1,auStack_78);
  FUN_144e2dd40(param_1,auStack_78);
  FUN_14004cda0(param_1,*(undefined4 *)(lVar1 + 0x228));
  FUN_14004ce20(param_1,uVar2);
  FUN_14004dd00(param_1,uVar2);
  if ((ulonglong)*(uint *)(param_1 + 0x6d44) < 5) {
    lVar1 = (ulonglong)*(uint *)(param_1 + 0x6d44) * 0x18 + 0x6d48;
    do {
      *(undefined8 *)(param_1 + lVar1) = 0xbf800000ffffffff;
      *(undefined1 *)(param_1 + 8 + lVar1) = 1;
      *(undefined8 *)(param_1 + 0xc + lVar1) = 0xbf800000ffffffff;
      *(undefined1 *)(param_1 + 0x14 + lVar1) = 1;
      lVar1 = lVar1 + 0x18;
    } while (lVar1 != 0x6dc0);
  }
  *(undefined4 *)(param_1 + 0x6d44) = 5;
  func_0x00014004cdc0(param_1 + 0x1d70,uVar2);
  func_0x00014004cd80(param_1,uVar2);
  *(ulonglong *)(param_1 + 0x1720) = uVar2;
  *(ulonglong *)(param_1 + 0x1cc0) = uVar2;
  *(ulonglong *)(param_1 + 0x1b80) = uVar2;
  lVar1 = func_0x000144f97130(0x68);
  if (lVar1 != 0) {
    FUN_14004ce80(lVar1);
  }
  *(longlong *)(param_1 + 0x6e68) = lVar1;
  func_0x00014004cd90(param_1 + 0x1350,uVar2,param_1 + 0x1fd0);
  return;
}

