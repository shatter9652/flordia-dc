// Recovered from game_scarlett_master.exe (GTA VI, Xbox Series X, PE32+ x64)
// Address: 14006e880  size: 144 bytes
// Name:    FUN_14006e880
// Subsystem: core
//
// Referenced strings (0 in this body, 0 including direct callees):
// Callees: FUN_1437e5f10
//
// Generated decompilation. Formatting follows MiscRef/GTAVSRC conventions;
// identifiers are recovered, not original. See ../../../README.md.

#include "gta6decomp/rage_types.h"


void FUN_14006e880(longlong param_1,undefined4 param_2,undefined8 *param_3)

{
  undefined8 *puVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  undefined8 uVar6;
  undefined8 uVar7;
  undefined8 uVar8;
  ulonglong uVar9;
  ulonglong uVar10;
  longlong lStack_30;
  uint uStack_24;
  char cStack_20;
  
  FUN_1437e5f10(param_1 + 0x88,&lStack_30);
  if (cStack_20 == '\0') {
    uVar10 = (ulonglong)(uStack_24 >> 4);
  }
  else {
    uVar10 = (ulonglong)(uStack_24 >> 4);
    *(undefined4 *)((ulonglong)((uStack_24 & 0xf) << 6) + 0x10 + uVar10 * 0x410 + lStack_30) =
         param_2;
  }
  uVar2 = *param_3;
  uVar3 = param_3[1];
  uVar4 = param_3[2];
  uVar5 = param_3[3];
  uVar6 = param_3[3];
  uVar7 = param_3[4];
  uVar8 = param_3[5];
  uVar9 = (ulonglong)((uStack_24 & 0xf) << 6);
  lStack_30 = uVar10 * 0x410 + lStack_30;
  puVar1 = (undefined8 *)(uVar9 + 0x30 + lStack_30);
  *puVar1 = param_3[2];
  puVar1[1] = uVar6;
  puVar1[2] = uVar7;
  puVar1[3] = uVar8;
  puVar1 = (undefined8 *)(uVar9 + 0x20 + lStack_30);
  *puVar1 = uVar2;
  puVar1[1] = uVar3;
  puVar1[2] = uVar4;
  puVar1[3] = uVar5;
  return;
}

