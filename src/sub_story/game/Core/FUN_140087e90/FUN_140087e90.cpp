// Recovered from game_scarlett_master.exe (GTA VI, Xbox Series X, PE32+ x64)
// Address: 140087e90  size: 487 bytes
// Name:    FUN_140087e90
// Subsystem: core
//
// Referenced strings (0 in this body, 0 including direct callees):
// Callees: 
//
// Generated decompilation. Formatting follows MiscRef/GTAVSRC conventions;
// identifiers are recovered, not original. See ../../../README.md.

#include "gta6decomp/rage_types.h"


void FUN_140087e90(longlong param_1,ulonglong param_2,undefined4 param_3,undefined1 param_4,
                  undefined4 param_5,longlong param_6,undefined8 param_7,longlong param_8)

{
  byte bVar1;
  uint uVar2;
  uint uVar3;
  undefined4 uVar4;
  longlong lVar5;
  longlong lVar6;
  undefined8 *puVar7;
  uint uVar8;
  ulonglong uVar9;
  
  uVar2 = *(uint *)(param_1 + 0x10);
  lVar5 = *(longlong *)(param_1 + 0x30);
  uVar8 = *(uint *)(param_1 + 0x14) - 1;
  uVar3 = *(uint *)(param_1 + 0x156c8 + (ulonglong)*(uint *)(param_1 + 0x14) * 4);
  uVar4 = *(undefined4 *)(param_1 + 0x156c8 + (ulonglong)uVar8 * 4);
  puVar7 = (undefined8 *)func_0x0001400f2070(param_1,3);
  if (param_8 == 0) {
    *puVar7 = *(undefined8 *)
               (&UNK_14668b400 + (param_2 & 0xffffffff) * 8 + (ulonglong)(param_6 != 0) * 0x18);
    *(undefined4 *)(puVar7 + 1) = 0;
    *(undefined2 *)((longlong)puVar7 + 0xc) = 0x500;
    lVar6 = *(longlong *)(param_1 + 0x13148 + (ulonglong)uVar2 * 8);
    uVar9 = (ulonglong)(uVar2 - 1);
    bVar1 = *(byte *)(lVar6 + 10);
    *(byte *)(lVar6 + 10) = bVar1 + 1;
    *(undefined8 **)(lVar6 + 0x10 + (ulonglong)bVar1 * 8) = puVar7;
    lVar6 = *(longlong *)(param_1 + 0x13148 + uVar9 * 8);
    bVar1 = *(byte *)(lVar6 + 10);
    *(byte *)(lVar6 + 10) = bVar1 + 1;
    *(undefined8 **)(lVar6 + 0x10 + (ulonglong)bVar1 * 8) = puVar7;
    *(undefined2 *)(puVar7 + 1) = 2;
    *(undefined4 *)(puVar7 + 5) = uVar4;
    *(uint *)(puVar7 + 6) = uVar3;
    puVar7[7] = param_6;
    puVar7[8] = param_7;
    puVar7[9] = lVar5 + 0x3c;
    *(undefined4 *)(puVar7 + 10) = param_3;
    *(undefined1 *)(puVar7 + 0xb) = param_4;
    *(undefined4 *)(puVar7 + 0xc) = param_5;
    *(undefined4 *)(puVar7 + 0xd) = *(undefined4 *)(lVar5 + 0x34);
  }
  else {
    *puVar7 = *(undefined8 *)(&UNK_14668b430 + (param_2 & 0xffffffff) * 8);
    *(undefined4 *)(puVar7 + 1) = 0;
    *(undefined2 *)((longlong)puVar7 + 0xc) = 0x500;
    lVar6 = *(longlong *)(param_1 + 0x13148 + (ulonglong)uVar2 * 8);
    uVar9 = (ulonglong)(uVar2 - 1);
    bVar1 = *(byte *)(lVar6 + 10);
    *(byte *)(lVar6 + 10) = bVar1 + 1;
    *(undefined8 **)(lVar6 + 0x10 + (ulonglong)bVar1 * 8) = puVar7;
    lVar6 = *(longlong *)(param_1 + 0x13148 + uVar9 * 8);
    bVar1 = *(byte *)(lVar6 + 10);
    *(byte *)(lVar6 + 10) = bVar1 + 1;
    *(undefined8 **)(lVar6 + 0x10 + (ulonglong)bVar1 * 8) = puVar7;
    *(undefined2 *)(puVar7 + 1) = 2;
    *(undefined4 *)(puVar7 + 5) = uVar4;
    *(uint *)(puVar7 + 6) = uVar3;
    puVar7[7] = param_6;
    puVar7[8] = param_7;
    puVar7[9] = lVar5;
    *(undefined4 *)(puVar7 + 10) = param_3;
    *(undefined1 *)(puVar7 + 0xb) = param_4;
    *(undefined4 *)(puVar7 + 0xc) = param_5;
    puVar7[0xd] = param_8;
  }
  puVar7[0xe] = *(undefined8 *)(param_1 + 0x20);
  *(undefined8 **)(param_1 + 0x14a48 + (ulonglong)uVar3 * 8) = puVar7;
  *(undefined8 **)(param_1 + 0x13148 + uVar9 * 8) = puVar7;
  *(int *)(param_1 + 0x10) = (int)uVar9;
  *(uint *)(param_1 + 0x14) = uVar8;
  return;
}

