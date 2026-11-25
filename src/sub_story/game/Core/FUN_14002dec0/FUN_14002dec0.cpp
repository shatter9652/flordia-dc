// Recovered from game_scarlett_master.exe (GTA VI, Xbox Series X, PE32+ x64)
// Address: 14002dec0  size: 384 bytes
// Name:    FUN_14002dec0
// Subsystem: core
//
// Referenced strings (0 in this body, 0 including direct callees):
// Callees: FUN_145089470
//
// Generated decompilation. Formatting follows MiscRef/GTAVSRC conventions;
// identifiers are recovered, not original. See ../../../README.md.

#include "gta6decomp/rage_types.h"


void FUN_14002dec0(longlong param_1,undefined8 param_2,longlong param_3,undefined8 *param_4)

{
  byte bVar1;
  undefined4 uVar2;
  undefined8 *puVar3;
  undefined8 uVar4;
  undefined8 *puVar5;
  
  puVar5 = *(undefined8 **)(param_1 + 0x13148 + (ulonglong)*(uint *)(param_1 + 0x10) * 8);
  puVar3 = puVar5;
  if (*(char *)(param_3 + 0x20) == '\x01') {
    puVar3 = (undefined8 *)func_0x0001400f2070(param_1,0);
    *puVar3 = FUN_1448b34e0;
    *(undefined4 *)(puVar3 + 1) = 0;
    *(undefined2 *)((longlong)puVar3 + 0xc) = 0x500;
    bVar1 = *(byte *)((longlong)puVar5 + 10);
    *(byte *)((longlong)puVar5 + 10) = bVar1 + 1;
    puVar5[(ulonglong)bVar1 + 2] = puVar3;
    *(undefined2 *)(puVar3 + 1) = 1;
    puVar3[5] = param_2;
    puVar3[6] = *(undefined8 *)(*(longlong *)(*(longlong *)(param_1 + 0x20) + 0x98) + 0xa8);
    uVar4 = func_0x000144e29fc0(*(undefined8 *)
                                 (*(longlong *)(*(longlong *)(param_1 + 0x20) + 0x98) + 0x80));
    puVar3[7] = uVar4;
    uVar4 = func_0x000144e29fa0(*(undefined8 *)(param_1 + 0x20));
    puVar3[8] = uVar4;
    puVar3[9] = *param_4;
    *(undefined4 *)(puVar3 + 10) = *(undefined4 *)(param_4 + 1);
    puVar3[0xb] = param_3 + 0x20;
  }
  uVar2 = *(undefined4 *)(param_1 + 0x156c8 + (ulonglong)*(uint *)(param_1 + 0x14) * 4);
  puVar5 = (undefined8 *)func_0x0001400f2070(param_1,1);
  *puVar5 = FUN_1448b3530;
  *(undefined4 *)(puVar5 + 1) = 0;
  *(undefined2 *)((longlong)puVar5 + 0xc) = 0x500;
  bVar1 = *(byte *)((longlong)puVar3 + 10);
  *(byte *)((longlong)puVar3 + 10) = bVar1 + 1;
  puVar3[(ulonglong)bVar1 + 2] = puVar5;
  *(undefined2 *)(puVar5 + 1) = 1;
  *(undefined4 *)(puVar5 + 5) = uVar2;
  puVar5[6] = *(undefined8 *)(param_1 + 0x30);
  puVar5[7] = param_2;
  puVar5[8] = *(undefined8 *)(*(longlong *)(param_1 + 0x28) + 0x80);
  uVar4 = FUN_145089470(*(undefined8 *)(param_1 + 0x20));
  puVar5[9] = uVar4;
  puVar5[10] = param_3;
  puVar5[0xb] = *param_4;
  *(undefined4 *)(puVar5 + 0xc) = *(undefined4 *)(param_4 + 1);
  puVar5[0xd] = *(longlong *)(param_1 + 0x20) + 0xb0;
  *(undefined8 **)(param_1 + 0x13148 + (ulonglong)*(uint *)(param_1 + 0x10) * 8) = puVar5;
  return;
}

