// Recovered from game_scarlett_master.exe (GTA VI, Xbox Series X, PE32+ x64)
// Address: 140192910  size: 158 bytes
// Name:    FUN_140192910
// Subsystem: core
//
// Referenced strings (0 in this body, 0 including direct callees):
// Callees: FUN_140192110, FUN_1401923f0
//
// Generated decompilation. Formatting follows MiscRef/GTAVSRC conventions;
// identifiers are recovered, not original. See ../../../README.md.

#include "gta6decomp/rage_types.h"


void FUN_140192910(longlong param_1,undefined4 *param_2,undefined8 *param_3)

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
  longlong lStack_40;
  uint uStack_34;
  char cStack_30;
  
  FUN_1401923f0(param_1 + 8,&lStack_40,param_2);
  if (cStack_30 == '\0') {
    uVar10 = (ulonglong)(uStack_34 & 0xf);
    uVar9 = (ulonglong)(uStack_34 >> 4);
  }
  else {
    uVar10 = (ulonglong)(uStack_34 & 0xf);
    uVar9 = (ulonglong)(uStack_34 >> 4);
    *(undefined4 *)(uVar10 * 0x68 + uVar9 * 0x690 + lStack_40 + 0x10) = *param_2;
    FUN_140192110();
  }
  uVar2 = *param_3;
  uVar3 = param_3[1];
  uVar4 = param_3[2];
  uVar5 = param_3[3];
  uVar6 = param_3[4];
  uVar7 = param_3[5];
  uVar8 = param_3[6];
  lStack_40 = uVar9 * 0x690 + lStack_40;
  puVar1 = (undefined8 *)(uVar10 * 0x68 + 0x50 + lStack_40);
  *puVar1 = param_3[3];
  puVar1[1] = uVar6;
  puVar1[2] = uVar7;
  puVar1[3] = uVar8;
  puVar1 = (undefined8 *)(uVar10 * 0x68 + 0x38 + lStack_40);
  *puVar1 = uVar2;
  puVar1[1] = uVar3;
  puVar1[2] = uVar4;
  puVar1[3] = uVar5;
  return;
}

