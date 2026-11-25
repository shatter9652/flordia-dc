// Recovered from game_scarlett_master.exe (GTA VI, Xbox Series X, PE32+ x64)
// Address: 1401b6aa0  size: 285 bytes
// Name:    FUN_1401b6aa0
// Subsystem: core
//
// Referenced strings (0 in this body, 0 including direct callees):
// Callees: FUN_145f0a430
//
// Generated decompilation. Formatting follows MiscRef/GTAVSRC conventions;
// identifiers are recovered, not original. See ../../../README.md.

#include "gta6decomp/rage_types.h"


uint * FUN_1401b6aa0(uint *param_1,undefined8 *param_2)

{
  uint uVar1;
  undefined8 *puVar2;
  undefined8 uVar3;
  uint *puVar4;
  ulonglong uVar5;
  uint *puVar6;
  longlong lVar7;
  
  uVar1 = *(uint *)(param_2 + 9);
  param_1[0x12] = uVar1;
  if (uVar1 != 0) {
    *(undefined1 *)(param_1 + 2) = *(undefined1 *)(param_2 + 1);
    *(undefined8 *)param_1 = *param_2;
    *(uint **)(param_1 + 6) = param_1 + 8;
    param_1[4] = 4;
    param_1[5] = 0;
    uVar1 = *(uint *)((longlong)param_2 + 0x14);
    uVar5 = (ulonglong)uVar1;
    if (uVar5 == 0) {
      return param_1;
    }
    uVar3 = param_2[3];
    FUN_145f0a430(param_1 + 4,uVar5);
    func_0x000145f40560(*(undefined8 *)(param_1 + 6),uVar3,uVar5 << 3);
    param_1[5] = uVar1;
    return param_1;
  }
  puVar6 = param_1 + 4;
  *(uint **)(param_1 + 2) = puVar6;
  param_1[0] = 4;
  param_1[1] = 0;
  uVar1 = *(uint *)((longlong)param_2 + 4);
  if ((ulonglong)uVar1 == 0) goto LAB_1401b6afe;
  puVar2 = (undefined8 *)param_2[1];
  lVar7 = (ulonglong)uVar1 << 3;
  if (uVar1 < 5) {
    if (uVar1 != 1) goto LAB_1401b6b9f;
    *(undefined8 *)puVar6 = *puVar2;
  }
  else {
    puVar4 = (uint *)func_0x000144d9c140(8,lVar7);
    if (puVar4 == (uint *)0x0) {
      puVar4 = puVar6;
    }
    *(uint **)(param_1 + 2) = puVar4;
    *param_1 = uVar1;
    puVar6 = puVar4;
LAB_1401b6b9f:
    func_0x000145f40560(puVar6,puVar2,lVar7);
  }
  param_1[1] = uVar1;
LAB_1401b6afe:
  *(undefined8 *)(param_1 + 0x10) = param_2[8];
  uVar3 = param_2[7];
  *(undefined8 *)(param_1 + 0xc) = param_2[6];
  *(undefined8 *)(param_1 + 0xe) = uVar3;
  return param_1;
}

