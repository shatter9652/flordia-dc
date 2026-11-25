// Recovered from game_scarlett_master.exe (GTA VI, Xbox Series X, PE32+ x64)
// Address: 1400c4a80  size: 860 bytes
// Name:    FUN_1400c4a80
// Subsystem: core
//
// Referenced strings (0 in this body, 0 including direct callees):
// Callees: 
//
// Generated decompilation. Formatting follows MiscRef/GTAVSRC conventions;
// identifiers are recovered, not original. See ../../../README.md.

#include "gta6decomp/rage_types.h"


undefined8 * FUN_1400c4a80(undefined8 *param_1,int param_2)

{
  int *piVar1;
  uint uVar2;
  undefined8 *puVar3;
  undefined8 *puVar4;
  longlong lVar5;
  longlong lVar6;
  
  *param_1 = &UNK_14668c0b0;
  lVar5 = param_1[0x4a];
  uVar2 = *(uint *)((longlong)param_1 + 0x24c);
  if ((ulonglong)uVar2 != 0) {
    lVar6 = 0;
    do {
      *(undefined4 *)(lVar5 + 4 + lVar6) = 0;
      if (*(longlong *)(lVar5 + 8 + lVar6) != 0) {
        func_0x000144d9c130();
      }
      *(undefined4 *)(lVar5 + lVar6) = 0;
      *(undefined8 *)(lVar5 + 8 + lVar6) = 0;
      lVar6 = lVar6 + 0x20;
    } while ((ulonglong)uVar2 << 5 != lVar6);
    lVar5 = param_1[0x4a];
  }
  *(undefined4 *)((longlong)param_1 + 0x24c) = 0;
  if (lVar5 != 0) {
    func_0x000144d9c130(lVar5);
  }
  *(undefined4 *)(param_1 + 0x49) = 0;
  param_1[0x4a] = 0;
  param_1[0x46] = 2;
  *param_1 = &UNK_14668c040;
  *(undefined4 *)((longlong)param_1 + 0x1fc) = 0;
  if (param_1 + 0x41 != (undefined8 *)param_1[0x40]) {
    func_0x000144f5d9a0();
  }
  *(undefined4 *)(param_1 + 0x3f) = 8;
  param_1[0x40] = 0;
  func_0x000144f5d9a0(0);
  param_1[0x40] = 0;
  *(undefined4 *)((longlong)param_1 + 0x1cc) = 0;
  if (param_1 + 0x3b != (undefined8 *)param_1[0x3a]) {
    func_0x000144f5d9a0();
  }
  *(undefined4 *)(param_1 + 0x39) = 8;
  param_1[0x3a] = 0;
  func_0x000144f5d9a0(0);
  param_1[0x3a] = 0;
  *(undefined4 *)((longlong)param_1 + 0x19c) = 0;
  if (param_1 + 0x35 != (undefined8 *)param_1[0x34]) {
    func_0x000144f5d9a0();
  }
  *(undefined4 *)(param_1 + 0x33) = 8;
  param_1[0x34] = 0;
  func_0x000144f5d9a0(0);
  param_1[0x34] = 0;
  *(undefined4 *)((longlong)param_1 + 0x16c) = 0;
  if (param_1 + 0x2f != (undefined8 *)param_1[0x2e]) {
    func_0x000144f5d9a0();
  }
  *(undefined4 *)(param_1 + 0x2d) = 8;
  param_1[0x2e] = 0;
  func_0x000144f5d9a0(0);
  param_1[0x2e] = 0;
  puVar4 = (undefined8 *)param_1[0x14];
  uVar2 = *(uint *)((longlong)param_1 + 0x9c);
  if ((ulonglong)uVar2 != 0) {
    lVar5 = 0;
    do {
      puVar3 = *(undefined8 **)((longlong)puVar4 + lVar5);
      if (puVar3 != (undefined8 *)0x0) {
        LOCK();
        piVar1 = (int *)(puVar3 + 3);
        *piVar1 = *piVar1 + -1;
        UNLOCK();
        if (*piVar1 == 0) {
          (**(code **)*puVar3)(puVar3,1);
        }
      }
      lVar5 = lVar5 + 0x18;
    } while ((ulonglong)uVar2 * 0x18 != lVar5);
    puVar4 = (undefined8 *)param_1[0x14];
  }
  *(undefined4 *)((longlong)param_1 + 0x9c) = 0;
  if (param_1 + 0x15 != puVar4) {
    func_0x000144f5d9a0();
  }
  *(undefined4 *)(param_1 + 0x13) = 8;
  param_1[0x14] = 0;
  func_0x000144f5d9a0(0);
  param_1[0x14] = 0;
  *(undefined4 *)((longlong)param_1 + 0x84) = 0;
  if (param_1 + 0x12 != (undefined8 *)param_1[0x11]) {
    func_0x000144f5d9a0();
  }
  *(undefined4 *)(param_1 + 0x10) = 8;
  param_1[0x11] = 0;
  func_0x000144f5d9a0(0);
  param_1[0x11] = 0;
  puVar4 = (undefined8 *)param_1[7];
  uVar2 = *(uint *)((longlong)param_1 + 0x34);
  if ((ulonglong)uVar2 != 0) {
    lVar5 = 0;
    do {
      puVar3 = *(undefined8 **)((longlong)puVar4 + lVar5);
      if (puVar3 != (undefined8 *)0x0) {
        LOCK();
        piVar1 = (int *)(puVar3 + 3);
        *piVar1 = *piVar1 + -1;
        UNLOCK();
        if (*piVar1 == 0) {
          (**(code **)*puVar3)(puVar3,1);
        }
      }
      lVar5 = lVar5 + 8;
    } while ((ulonglong)uVar2 << 3 != lVar5);
    puVar4 = (undefined8 *)param_1[7];
  }
  *(undefined4 *)((longlong)param_1 + 0x34) = 0;
  if (param_1 + 8 != puVar4) {
    func_0x000144f5d9a0(puVar4);
  }
  *(undefined4 *)(param_1 + 6) = 8;
  param_1[7] = 0;
  func_0x000144f5d9a0(0);
  param_1[7] = 0;
  func_0x000144ea3690(param_1);
  if (param_2 != 0) {
    func_0x000144f5d9a0(param_1);
  }
  return param_1;
}

