// Recovered from game_scarlett_master.exe (GTA VI, Xbox Series X, PE32+ x64)
// Address: 140111490  size: 165 bytes
// Name:    FUN_140111490
// Subsystem: core
//
// Referenced strings (0 in this body, 0 including direct callees):
// Callees: 
//
// Generated decompilation. Formatting follows MiscRef/GTAVSRC conventions;
// identifiers are recovered, not original. See ../../../README.md.

#include "gta6decomp/rage_types.h"


void FUN_140111490(longlong param_1,undefined8 param_2,undefined4 param_3,undefined4 param_4)

{
  byte bVar1;
  undefined4 uVar2;
  longlong lVar3;
  undefined8 *puVar4;
  
  uVar2 = *(undefined4 *)(param_1 + 0x156c8 + (ulonglong)*(uint *)(param_1 + 0x14) * 4);
  puVar4 = (undefined8 *)func_0x0001400f2070(param_1,1);
  *puVar4 = FUN_1448b3a40;
  *(undefined4 *)(puVar4 + 1) = 0;
  *(undefined2 *)((longlong)puVar4 + 0xc) = 0x500;
  lVar3 = *(longlong *)(param_1 + 0x13148 + (ulonglong)*(uint *)(param_1 + 0x10) * 8);
  bVar1 = *(byte *)(lVar3 + 10);
  *(byte *)(lVar3 + 10) = bVar1 + 1;
  *(undefined8 **)(lVar3 + 0x10 + (ulonglong)bVar1 * 8) = puVar4;
  *(undefined2 *)(puVar4 + 1) = 1;
  *(undefined4 *)(puVar4 + 5) = uVar2;
  puVar4[6] = *(undefined8 *)(param_1 + 0x30);
  puVar4[7] = param_2;
  *(undefined4 *)(puVar4 + 8) = param_3;
  *(undefined4 *)(puVar4 + 9) = param_4;
  *(undefined8 **)(param_1 + 0x13148 + (ulonglong)*(uint *)(param_1 + 0x10) * 8) = puVar4;
  return;
}

