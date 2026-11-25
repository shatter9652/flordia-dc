// Recovered from game_scarlett_master.exe (GTA VI, Xbox Series X, PE32+ x64)
// Address: 140192190  size: 134 bytes
// Name:    FUN_140192190
// Subsystem: core
//
// Referenced strings (0 in this body, 0 including direct callees):
// Callees: FUN_140192110, FUN_1401923f0
//
// Generated decompilation. Formatting follows MiscRef/GTAVSRC conventions;
// identifiers are recovered, not original. See ../../../README.md.

#include "gta6decomp/rage_types.h"


void FUN_140192190(longlong param_1,undefined4 *param_2)

{
  undefined4 *puVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  undefined8 uVar6;
  undefined8 uVar7;
  undefined8 uVar8;
  ulonglong uVar9;
  ulonglong uVar10;
  longlong lStack_38;
  uint uStack_2c;
  char cStack_28;
  
  FUN_1401923f0(param_1 + 8,&lStack_38,param_2);
  if (cStack_28 == '\0') {
    uVar9 = (ulonglong)(uStack_2c & 0xf);
    uVar10 = (ulonglong)(uStack_2c >> 4);
  }
  else {
    uVar9 = (ulonglong)(uStack_2c & 0xf);
    uVar10 = (ulonglong)(uStack_2c >> 4);
    *(undefined4 *)(uVar9 * 0x68 + uVar10 * 0x690 + lStack_38 + 0x10) = *param_2;
    FUN_140192110();
  }
  puVar1 = (undefined4 *)(uVar9 * 0x68 + 0x18 + uVar10 * 0x690 + lStack_38);
  *puVar1 = *param_2;
  *(undefined8 *)(puVar1 + 2) = *(undefined8 *)(param_2 + 2);
  *(undefined8 *)(puVar1 + 4) = *(undefined8 *)(param_2 + 4);
  puVar1[6] = param_2[6];
  puVar1[7] = param_2[7];
  uVar2 = *(undefined8 *)(param_2 + 10);
  uVar3 = *(undefined8 *)(param_2 + 0xc);
  uVar4 = *(undefined8 *)(param_2 + 0xe);
  uVar5 = *(undefined8 *)(param_2 + 0xe);
  uVar6 = *(undefined8 *)(param_2 + 0x10);
  uVar7 = *(undefined8 *)(param_2 + 0x12);
  uVar8 = *(undefined8 *)(param_2 + 0x14);
  *(undefined8 *)(puVar1 + 8) = *(undefined8 *)(param_2 + 8);
  *(undefined8 *)(puVar1 + 10) = uVar2;
  *(undefined8 *)(puVar1 + 0xc) = uVar3;
  *(undefined8 *)(puVar1 + 0xe) = uVar4;
  *(undefined8 *)(puVar1 + 0xe) = uVar5;
  *(undefined8 *)(puVar1 + 0x10) = uVar6;
  *(undefined8 *)(puVar1 + 0x12) = uVar7;
  *(undefined8 *)(puVar1 + 0x14) = uVar8;
  *(undefined1 *)(puVar1 + 0x16) = *(undefined1 *)(param_2 + 0x16);
  return;
}

