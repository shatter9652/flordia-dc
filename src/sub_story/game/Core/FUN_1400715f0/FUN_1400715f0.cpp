// Recovered from game_scarlett_master.exe (GTA VI, Xbox Series X, PE32+ x64)
// Address: 1400715f0  size: 225 bytes
// Name:    FUN_1400715f0
// Subsystem: core
//
// Referenced strings (0 in this body, 0 including direct callees):
// Callees: 
//
// Generated decompilation. Formatting follows MiscRef/GTAVSRC conventions;
// identifiers are recovered, not original. See ../../../README.md.

#include "gta6decomp/rage_types.h"


void FUN_1400715f0(longlong param_1,undefined8 *param_2,longlong *param_3,char param_4,
                  undefined1 param_5)

{
  byte bVar1;
  uint uVar2;
  longlong lVar3;
  longlong lVar4;
  undefined8 *puVar5;
  longlong lVar6;
  
  lVar3 = param_2[5];
  lVar4 = *(longlong *)(*(longlong *)(param_1 + 0x30) + 0x28);
  uVar2 = *(uint *)(param_1 + 0x156c8 + (ulonglong)*(uint *)(param_1 + 0x14) * 4);
  puVar5 = (undefined8 *)func_0x0001400f2070(param_1,2);
  *puVar5 = FUN_1448adb00;
  *(undefined4 *)(puVar5 + 1) = 0;
  *(undefined2 *)((longlong)puVar5 + 0xc) = 0x500;
  lVar6 = *(longlong *)(param_1 + 0x13148 + (ulonglong)*(uint *)(param_1 + 0x10) * 8);
  bVar1 = *(byte *)(lVar6 + 10);
  *(byte *)(lVar6 + 10) = bVar1 + 1;
  *(undefined8 **)(lVar6 + 0x10 + (ulonglong)bVar1 * 8) = puVar5;
  *(undefined2 *)(puVar5 + 1) = 1;
  puVar5[5] = *param_2;
  *(uint *)(puVar5 + 6) = uVar2;
  lVar6 = *param_3;
  *(bool *)(puVar5 + 8) = lVar3 == lVar4;
  if (lVar6 != 0) {
    lVar6 = lVar6 + 0x20;
  }
  puVar5[7] = lVar6;
  *(undefined1 *)(puVar5 + 9) = param_5;
  *(undefined4 *)(puVar5 + 10) = *(undefined4 *)(param_2 + 7);
  puVar5[0xb] = *(longlong *)(param_1 + 0x20) + 0xb0;
  if (param_4 != '\0') {
    *(int *)(param_1 + 0x14) = *(int *)(param_1 + 0x14) + -1;
    *(undefined8 **)(param_1 + 0x14a48 + (ulonglong)uVar2 * 8) = puVar5;
  }
  *(undefined8 **)(param_1 + 0x13148 + (ulonglong)*(uint *)(param_1 + 0x10) * 8) = puVar5;
  return;
}

