// Recovered from game_scarlett_master.exe (GTA VI, Xbox Series X, PE32+ x64)
// Address: 140083e50  size: 251 bytes
// Name:    FUN_140083e50
// Subsystem: core
//
// Referenced strings (0 in this body, 0 including direct callees):
// Callees: FUN_14048acc0, FUN_1452a2530, FUN_1452a2590, FUN_145224ba0
//
// Generated decompilation. Formatting follows MiscRef/GTAVSRC conventions;
// identifiers are recovered, not original. See ../../../README.md.

#include "gta6decomp/rage_types.h"


void FUN_140083e50(longlong param_1,longlong *param_2)

{
  longlong *plVar1;
  uint uVar2;
  undefined8 uVar3;
  longlong lVar4;
  undefined1 auStack_428 [144];
  undefined4 uStack_398;
  undefined1 auStack_2a0 [24];
  undefined1 auStack_288 [392];
  undefined1 auStack_100 [224];
  
  FUN_1452a2590(auStack_428);
  uStack_398 = 0xf5be1bcf;
  uVar3 = (**(code **)(*param_2 + 0x10))(param_2);
  FUN_145224ba0(auStack_428,uVar3,0);
  FUN_14048acc0(auStack_288,0,0x7d,auStack_428,1);
  FUN_1452a2530(*(ulonglong *)(param_1 + 8) & 0xfffffffffffffff0,param_1 + 0x10a8,auStack_288,1);
  lVar4 = (**(code **)(*param_2 + 0x10))(param_2);
  if (lVar4 == 0) {
    uVar2 = 0x1ffff;
  }
  else {
    plVar1 = *(longlong **)((ulonglong)*(byte *)(lVar4 + 0x30) * 8 + 0x14abbe7c0);
    uVar2 = (uint)((ulonglong)(lVar4 - *plVar1) / (ulonglong)*(uint *)(plVar1 + 1)) & 0x1ffff;
    uVar2 = (*(byte *)(lVar4 + 0x30) & 0x1f) << 0x11 | uVar2 |
            (*(uint *)(plVar1[5] + (ulonglong)uVar2 * 4) & 0x7fe0000) << 5;
  }
  *(uint *)(param_1 + 0x10a4) = uVar2;
  func_0x0001452a2430(auStack_100);
  func_0x0001452a2430(auStack_2a0);
  return;
}

