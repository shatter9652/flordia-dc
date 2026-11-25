// Recovered from game_scarlett_master.exe (GTA VI, Xbox Series X, PE32+ x64)
// Address: 14019a3d0  size: 526 bytes
// Name:    FUN_14019a3d0
// Subsystem: core
//
// Referenced strings (0 in this body, 0 including direct callees):
// Callees: FUN_14019a5e0, FUN_145054e90
//
// Generated decompilation. Formatting follows MiscRef/GTAVSRC conventions;
// identifiers are recovered, not original. See ../../../README.md.

#include "gta6decomp/rage_types.h"


void FUN_14019a3d0(undefined4 *param_1)

{
  uint uVar1;
  undefined8 *puVar2;
  longlong lVar3;
  undefined4 *puVar4;
  longlong lVar5;
  
  FUN_14019a5e0();
  puVar4 = *(undefined4 **)(param_1 + 0x44);
  uVar1 = param_1[0x43];
  if ((ulonglong)uVar1 != 0) {
    lVar3 = 0;
    do {
      if (*(longlong **)((longlong)puVar4 + lVar3) != (longlong *)0x0) {
        (**(code **)(**(longlong **)((longlong)puVar4 + lVar3) + 0x10))();
      }
      lVar3 = lVar3 + 8;
    } while ((ulonglong)uVar1 << 3 != lVar3);
    puVar4 = *(undefined4 **)(param_1 + 0x44);
  }
  param_1[0x43] = 0;
  if ((param_1 + 0x46 != puVar4) && (puVar4 != (undefined4 *)0x0)) {
    func_0x000144d9c130(puVar4);
  }
  param_1[0x42] = 1;
  *(undefined8 *)(param_1 + 0x44) = 0;
  lVar3 = *(longlong *)(param_1 + 0x40);
  uVar1 = param_1[0x3f];
  if ((ulonglong)uVar1 != 0) {
    lVar5 = 0;
    do {
      if (*(longlong **)(lVar3 + lVar5) != (longlong *)0x0) {
        (**(code **)(**(longlong **)(lVar3 + lVar5) + 0x10))();
      }
      lVar5 = lVar5 + 8;
    } while ((ulonglong)uVar1 << 3 != lVar5);
    lVar3 = *(longlong *)(param_1 + 0x40);
  }
  param_1[0x3f] = 0;
  if (lVar3 != 0) {
    func_0x000144d9c130();
  }
  param_1[0x3e] = 0;
  *(undefined8 *)(param_1 + 0x40) = 0;
  puVar2 = *(undefined8 **)(param_1 + 0x3a);
  if (puVar2 != (undefined8 *)0x0) {
    (**(code **)*puVar2)(puVar2,1);
  }
  lVar3 = *(longlong *)(param_1 + 0x38);
  uVar1 = param_1[0x37];
  if ((ulonglong)uVar1 != 0) {
    lVar5 = 0;
    do {
      if (*(longlong *)(lVar3 + lVar5) != 0) {
        func_0x000143ef80b0();
      }
      lVar5 = lVar5 + 8;
    } while ((ulonglong)uVar1 << 3 != lVar5);
    lVar3 = *(longlong *)(param_1 + 0x38);
  }
  param_1[0x37] = 0;
  if (lVar3 != 0) {
    func_0x000144d9c130(lVar3);
  }
  param_1[0x36] = 0;
  *(undefined8 *)(param_1 + 0x38) = 0;
  puVar4 = *(undefined4 **)(param_1 + 2);
  if ((longlong)(int)param_1[1] != 0) {
    lVar3 = (longlong)(int)param_1[1] * 0x30;
    do {
      FUN_145054e90(puVar4);
      puVar4 = puVar4 + 0xc;
      lVar3 = lVar3 + -0x30;
    } while (lVar3 != 0);
    puVar4 = *(undefined4 **)(param_1 + 2);
  }
  param_1[1] = 0;
  if ((param_1 + 4 != puVar4) && (puVar4 != (undefined4 *)0x0)) {
    func_0x000144d9c130(puVar4);
  }
  *param_1 = 4;
  *(undefined8 *)(param_1 + 2) = 0;
  return;
}

