// Recovered from game_scarlett_master.exe (GTA VI, Xbox Series X, PE32+ x64)
// Address: 14016b720  size: 348 bytes
// Name:    FUN_14016b720
// Subsystem: core
//
// Referenced strings (0 in this body, 0 including direct callees):
// Callees: FUN_14016b880
//
// Generated decompilation. Formatting follows MiscRef/GTAVSRC conventions;
// identifiers are recovered, not original. See ../../../README.md.

#include "gta6decomp/rage_types.h"


void FUN_14016b720(undefined8 *param_1)

{
  uint uVar1;
  undefined8 *puVar2;
  undefined8 *puVar3;
  longlong lVar4;
  
  *param_1 = &UNK_1465f4ad0;
  FUN_14016b880();
  *(undefined4 *)((longlong)param_1 + 0x17c) = 0;
  puVar2 = (undefined8 *)param_1[0x30];
  if ((param_1 + 0x31 != puVar2) && (puVar2 != (undefined8 *)0x0)) {
    func_0x000144d9c130(puVar2);
  }
  *(undefined4 *)(param_1 + 0x2f) = 0xc;
  param_1[0x30] = 0;
  *(undefined4 *)((longlong)param_1 + 0x10c) = 0;
  puVar2 = (undefined8 *)param_1[0x22];
  if ((param_1 + 0x23 != puVar2) && (puVar2 != (undefined8 *)0x0)) {
    func_0x000144d9c130(puVar2);
  }
  *(undefined4 *)(param_1 + 0x21) = 0xc;
  param_1[0x22] = 0;
  uVar1 = *(uint *)((longlong)param_1 + 0x44);
  if ((ulonglong)uVar1 != 0) {
    puVar2 = param_1 + 9;
    do {
      puVar3 = (undefined8 *)puVar2[1];
      if ((ulonglong)*(uint *)((longlong)puVar2 + 4) != 0) {
        lVar4 = (ulonglong)*(uint *)((longlong)puVar2 + 4) * 0x60;
        do {
          (**(code **)*puVar3)(puVar3,0);
          puVar3 = puVar3 + 0xc;
          lVar4 = lVar4 + -0x60;
        } while (lVar4 != 0);
        puVar3 = (undefined8 *)puVar2[1];
      }
      *(undefined4 *)((longlong)puVar2 + 4) = 0;
      if (puVar3 != (undefined8 *)0x0) {
        func_0x000144d9c130(puVar3);
      }
      *(undefined4 *)puVar2 = 0;
      puVar2[1] = 0;
      puVar2 = puVar2 + 0xc;
    } while (puVar2 != param_1 + (ulonglong)uVar1 * 0xc + 9);
  }
  param_1[8] = 2;
  *param_1 = &UNK_1465f4c40;
  func_0x0001450268f0((longlong)param_1 + 0x34);
  func_0x000144ddb0c0(*(undefined2 *)((longlong)param_1 + 0x32));
  FUN_145026b00((longlong)param_1 + 0x2e);
  FUN_145026b00((longlong)param_1 + 0x2a);
  param_1[2] = 2;
  return;
}

