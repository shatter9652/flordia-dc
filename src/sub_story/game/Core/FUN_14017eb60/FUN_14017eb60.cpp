// Recovered from game_scarlett_master.exe (GTA VI, Xbox Series X, PE32+ x64)
// Address: 14017eb60  size: 161 bytes
// Name:    FUN_14017eb60
// Subsystem: core
//
// Referenced strings (0 in this body, 0 including direct callees):
// Callees: 
//
// Generated decompilation. Formatting follows MiscRef/GTAVSRC conventions;
// identifiers are recovered, not original. See ../../../README.md.

#include "gta6decomp/rage_types.h"


void FUN_14017eb60(longlong param_1,undefined4 param_2,undefined8 param_3,undefined8 param_4)

{
  byte bVar1;
  undefined4 uVar2;
  longlong lVar3;
  longlong lVar4;
  undefined8 *puVar5;
  
  lVar3 = *(longlong *)(param_1 + 0x30);
  uVar2 = *(undefined4 *)(param_1 + 0x156c8 + (ulonglong)*(uint *)(param_1 + 0x14) * 4);
  puVar5 = (undefined8 *)func_0x0001400f2070(param_1,1);
  *puVar5 = FUN_1448ae8b0;
  *(undefined4 *)(puVar5 + 1) = 0;
  *(undefined2 *)((longlong)puVar5 + 0xc) = 0x500;
  lVar4 = *(longlong *)(param_1 + 0x13148 + (ulonglong)*(uint *)(param_1 + 0x10) * 8);
  bVar1 = *(byte *)(lVar4 + 10);
  *(byte *)(lVar4 + 10) = bVar1 + 1;
  *(undefined8 **)(lVar4 + 0x10 + (ulonglong)bVar1 * 8) = puVar5;
  *(undefined2 *)(puVar5 + 1) = 1;
  *(undefined4 *)(puVar5 + 5) = uVar2;
  puVar5[6] = param_3;
  puVar5[7] = param_4;
  puVar5[8] = lVar3 + 0x3c;
  *(undefined4 *)(puVar5 + 9) = param_2;
  *(undefined8 **)(param_1 + 0x13148 + (ulonglong)*(uint *)(param_1 + 0x10) * 8) = puVar5;
  return;
}

