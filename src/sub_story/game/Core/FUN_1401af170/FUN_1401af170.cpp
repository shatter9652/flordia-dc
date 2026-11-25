// Recovered from game_scarlett_master.exe (GTA VI, Xbox Series X, PE32+ x64)
// Address: 1401af170  size: 335 bytes
// Name:    FUN_1401af170
// Subsystem: core
//
// Referenced strings (0 in this body, 0 including direct callees):
// Callees: FUN_1401af390, FUN_1401b0a70, FUN_1401b0df0, FUN_1401af2c0
//
// Generated decompilation. Formatting follows MiscRef/GTAVSRC conventions;
// identifiers are recovered, not original. See ../../../README.md.

#include "gta6decomp/rage_types.h"


void FUN_1401af170(longlong param_1,undefined8 *param_2)

{
  int iVar1;
  undefined4 uVar2;
  ulonglong uVar3;
  int iVar4;
  int iVar5;
  undefined8 uVar6;
  undefined8 uVar7;
  ulonglong uVar8;
  bool bVar9;
  bool bVar10;
  longlong lStack_58;
  longlong lStack_50;
  byte bStack_48;
  
  iVar1 = *(int *)(param_1 + 0x188);
  uVar3 = *(ulonglong *)(param_1 + 0x180);
  *(undefined8 *)(param_1 + 0x180) = 1;
  uVar7 = *param_2;
  uVar6 = func_0x000144f200a0(*(undefined4 *)(param_1 + 0x48));
  iVar4 = FUN_1401af390(uVar6,uVar7,param_1);
  *(int *)(param_1 + 0x188) = iVar4;
  uVar7 = *param_2;
  uVar6 = func_0x000144f200a0(*(undefined4 *)(param_1 + 0x48));
  iVar5 = FUN_1401b0df0(uVar6,uVar7,param_1);
  *(int *)(param_1 + 0x18c) = iVar5;
  if (iVar5 == 1) {
    uVar7 = *param_2;
    uVar6 = func_0x000144f200a0(*(undefined4 *)(param_1 + 0x48));
    iVar5 = FUN_1401b0a70(uVar6,uVar7,param_1);
    bVar10 = iVar5 == 1;
    uVar8 = (ulonglong)(iVar4 == 1) * 2 + 2;
    *(int *)(param_1 + 0x18c) = iVar5;
    bVar9 = iVar4 == 1 && bVar10;
  }
  else {
    uVar8 = 2;
    bVar10 = false;
    bVar9 = false;
  }
  uVar2 = *(undefined4 *)(param_1 + 0x48);
  uVar7 = func_0x000144f200a0(uVar2);
  iVar4 = FUN_1401af2c0(uVar7,param_1);
  *(int *)(param_1 + 400) = iVar4;
  if (bVar9) {
    uVar8 = *(ulonglong *)(param_1 + 0x180);
  }
  else {
    *(ulonglong *)(param_1 + 0x180) = uVar8;
    if (iVar4 != 1) {
      uVar8 = uVar8 | 8;
      *(ulonglong *)(param_1 + 0x180) = uVar8;
    }
  }
  if ((iVar1 != 0x1d8) && (uVar8 == uVar3)) {
    return;
  }
  iVar1 = *(int *)(param_1 + 0x188);
  lStack_58 = func_0x000144f200a0(uVar2);
  if (lStack_58 == 0) {
    lStack_50 = 0;
  }
  else {
    FUN_1450caf90(lStack_58,&lStack_58);
    lStack_50 = lStack_58;
    if (lStack_58 != 0) {
      FUN_1450caf90(lStack_58,&lStack_50);
    }
  }
  bStack_48 = iVar1 == 1 & bVar10;
  FUN_1402e5b80(4);
  if (lStack_50 != 0) {
    FUN_1450cb0e0(lStack_50,&lStack_50);
  }
  if (lStack_58 != 0) {
    FUN_1450cb0e0(lStack_58,&lStack_58);
  }
  return;
}

