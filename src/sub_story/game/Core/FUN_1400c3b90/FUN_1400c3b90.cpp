// Recovered from game_scarlett_master.exe (GTA VI, Xbox Series X, PE32+ x64)
// Address: 1400c3b90  size: 140 bytes
// Name:    FUN_1400c3b90
// Subsystem: core
//
// Referenced strings (0 in this body, 0 including direct callees):
// Callees: 
//
// Generated decompilation. Formatting follows MiscRef/GTAVSRC conventions;
// identifiers are recovered, not original. See ../../../README.md.

#include "gta6decomp/rage_types.h"


void FUN_1400c3b90(int param_1,longlong param_2,undefined8 *param_3)

{
  int *piVar1;
  undefined4 uVar2;
  longlong lVar3;
  undefined8 *puVar4;
  undefined8 *puVar5;
  longlong lVar6;
  undefined8 unaff_RBX;
  undefined8 unaff_RSI;
  undefined8 unaff_RDI;
  ulonglong uVar7;
  undefined1 uVar8;
  uint uVar9;
  uint uVar10;
  
  lVar6 = (ulonglong)(param_1 - 1) * 0x10;
  lVar3 = *(longlong *)(param_2 + lVar6);
  uVar10 = *(uint *)(param_2 + 8 + lVar6);
  puVar5 = (undefined8 *)
           func_0x000144f5cca0(*(undefined4 *)(lVar3 + 0x34),*(undefined8 *)(lVar3 + 0x38),uVar10);
  if (puVar5 == (undefined8 *)0x0) {
    uVar2 = *(undefined4 *)(param_2 + lVar6 + 0xc);
    LOCK();
    *(int *)(param_3 + 3) = *(int *)(param_3 + 3) + 1;
    UNLOCK();
    uVar10 = *(uint *)(lVar3 + 0x34);
    if (uVar10 == *(uint *)(lVar3 + 0x30)) {
      uVar9 = 1;
      if (1 < uVar10) {
        uVar9 = uVar10 >> 1;
      }
      FUN_1448b6a20(lVar3 + 0x30,uVar9 + uVar10,uVar2,uVar9 + uVar10,unaff_RBX,unaff_RDI,unaff_RSI);
      uVar10 = *(uint *)(lVar3 + 0x34);
    }
    *(uint *)(lVar3 + 0x34) = uVar10 + 1;
    if (*(longlong *)(lVar3 + 0x38) == 0) {
      piVar1 = (int *)(param_3 + 3);
      LOCK();
      *piVar1 = *piVar1 + -1;
      UNLOCK();
      if (*piVar1 == 0) {
        (**(code **)*param_3)(param_3,1);
      }
    }
    else {
      *(undefined8 **)(*(longlong *)(lVar3 + 0x38) + (ulonglong)uVar10 * 8) = param_3;
    }
    uVar10 = *(uint *)(lVar3 + 0x84);
    if (uVar10 == *(uint *)(lVar3 + 0x80)) {
      uVar9 = 1;
      if (1 < uVar10) {
        uVar9 = uVar10 >> 1;
      }
      FUN_1448b6ad0(lVar3 + 0x80,uVar9 + uVar10);
      uVar10 = *(uint *)(lVar3 + 0x84);
    }
    *(uint *)(lVar3 + 0x84) = uVar10 + 1;
    *(char *)(*(longlong *)(lVar3 + 0x88) + (ulonglong)uVar10) = (char)uVar2;
    return;
  }
  uVar8 = (undefined1)*(undefined4 *)(param_2 + lVar6 + 0xc);
  if ((puVar5 == param_3) &&
     (*(int *)((longlong)puVar5 + 0x24) == *(int *)((longlong)param_3 + 0x24))) {
    *(undefined1 *)(*(longlong *)(lVar3 + 0x88) + (ulonglong)uVar10) = uVar8;
    return;
  }
  lVar6 = *(longlong *)(lVar3 + 0x38);
  uVar7 = (ulonglong)uVar10;
  puVar5 = *(undefined8 **)(lVar6 + uVar7 * 8);
  if (puVar5 != (undefined8 *)0x0) {
    LOCK();
    *(int *)(puVar5 + 3) = *(int *)(puVar5 + 3) + 1;
    UNLOCK();
    lVar6 = *(longlong *)(lVar3 + 0x38);
    if (*(undefined8 **)(lVar6 + uVar7 * 8) == param_3) {
      *(undefined1 *)(*(longlong *)(lVar3 + 0x88) + uVar7) = uVar8;
      goto LAB_1400c40e1;
    }
  }
  LOCK();
  *(int *)(param_3 + 3) = *(int *)(param_3 + 3) + 1;
  UNLOCK();
  puVar4 = *(undefined8 **)(lVar6 + uVar7 * 8);
  if (puVar4 != (undefined8 *)0x0) {
    LOCK();
    piVar1 = (int *)(puVar4 + 3);
    *piVar1 = *piVar1 + -1;
    UNLOCK();
    if (*piVar1 == 0) {
      (**(code **)*puVar4)(puVar4,1);
    }
  }
  *(undefined8 **)(lVar6 + uVar7 * 8) = param_3;
  *(undefined1 *)(*(longlong *)(lVar3 + 0x88) + uVar7) = uVar8;
  if (puVar5 == (undefined8 *)0x0) {
    return;
  }
LAB_1400c40e1:
  LOCK();
  piVar1 = (int *)(puVar5 + 3);
  *piVar1 = *piVar1 + -1;
  UNLOCK();
  if (*piVar1 != 0) {
    return;
  }
                    /* WARNING: Could not recover jumptable at 0x0001400c413d. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)*puVar5)(puVar5,1);
  return;
}

