// Recovered from game_scarlett_master.exe (GTA VI, Xbox Series X, PE32+ x64)
// Address: 140109de0  size: 520 bytes
// Name:    FUN_140109de0
// Subsystem: core
//
// Referenced strings (0 in this body, 0 including direct callees):
// Callees: 
//
// Generated decompilation. Formatting follows MiscRef/GTAVSRC conventions;
// identifiers are recovered, not original. See ../../../README.md.

#include "gta6decomp/rage_types.h"


void FUN_140109de0(undefined8 *param_1)

{
  int *piVar1;
  uint uVar2;
  undefined8 *puVar3;
  longlong lVar4;
  longlong lVar5;
  int iVar6;
  ulonglong uVar7;
  ulonglong uVar8;
  longlong unaff_GS_OFFSET;
  undefined8 auStack_80 [6];
  undefined8 uStack_50;
  
  *param_1 = &UNK_1466d1698;
  puVar3 = (undefined8 *)param_1[5];
  if (puVar3 != (undefined8 *)0x0) {
    LOCK();
    piVar1 = (int *)(puVar3 + 3);
    *piVar1 = *piVar1 + -1;
    UNLOCK();
    if (*piVar1 == 0) {
      uStack_50 = 0x140109e11;
      (**(code **)*puVar3)(puVar3,1);
    }
  }
  puVar3 = (undefined8 *)param_1[6];
  if (puVar3 != (undefined8 *)0x0) {
    LOCK();
    piVar1 = (int *)(puVar3 + 3);
    *piVar1 = *piVar1 + -1;
    UNLOCK();
    if (*piVar1 == 0) {
      uStack_50 = 0x140109e2a;
      (**(code **)*puVar3)(puVar3,1);
    }
  }
  puVar3 = (undefined8 *)param_1[7];
  if (puVar3 != (undefined8 *)0x0) {
    LOCK();
    piVar1 = (int *)(puVar3 + 3);
    *piVar1 = *piVar1 + -1;
    UNLOCK();
    if (*piVar1 == 0) {
      uStack_50 = 0x140109e43;
      (**(code **)*puVar3)(puVar3,1);
    }
  }
  uVar2 = *(uint *)(param_1 + 9);
  iVar6 = *(int *)(param_1 + 10);
  if (iVar6 != 0 && (ulonglong)uVar2 != 0) {
    uVar8 = 0;
    do {
      lVar4 = param_1[8];
      lVar5 = *(longlong *)(lVar4 + uVar8 * 8);
      if (lVar5 != 0) {
        do {
          lVar4 = *(longlong *)(lVar5 + 0x10);
          uStack_50 = 0x140109e79;
          func_0x000144d9c130(lVar5,0x18);
          iVar6 = iVar6 + -1;
          lVar5 = lVar4;
        } while (lVar4 != 0);
        lVar4 = param_1[8];
      }
      *(undefined8 *)(lVar4 + uVar8 * 8) = 0;
      uVar8 = uVar8 + 1;
    } while ((uVar8 < uVar2) && (iVar6 != 0));
  }
  *(undefined4 *)(param_1 + 10) = 0;
  uVar2 = *(uint *)(param_1 + 0xc);
  iVar6 = *(int *)(param_1 + 0xd);
  if (iVar6 != 0 && (ulonglong)uVar2 != 0) {
    uVar8 = 0;
    do {
      lVar4 = param_1[0xb];
      lVar5 = *(longlong *)(lVar4 + uVar8 * 8);
      if (lVar5 != 0) {
        do {
          lVar4 = *(longlong *)(lVar5 + 0x10);
          uStack_50 = 0x140109ed8;
          func_0x000144d9c130(lVar5,0x18);
          iVar6 = iVar6 + -1;
          lVar5 = lVar4;
        } while (lVar4 != 0);
        lVar4 = param_1[0xb];
      }
      *(undefined8 *)(lVar4 + uVar8 * 8) = 0;
      uVar8 = uVar8 + 1;
    } while ((uVar8 < uVar2) && (iVar6 != 0));
  }
  *(undefined4 *)(param_1 + 0xd) = 0;
  puVar3 = (undefined8 *)param_1[4];
  if (puVar3 != (undefined8 *)0x0) {
    uStack_50 = 0x140109f14;
    (**(code **)*puVar3)(puVar3,1);
  }
  uVar8 = (ulonglong)*(uint *)(param_1 + 0xc);
  if (*(uint *)(param_1 + 0xc) != 0) {
    uVar7 = 0;
    do {
      lVar4 = *(longlong *)(param_1[0xb] + uVar7 * 8);
      if (lVar4 != 0) {
        do {
          lVar5 = *(longlong *)(lVar4 + 0x10);
          uStack_50 = 0x140109f38;
          func_0x000144d9c130(lVar4,0x18);
          lVar4 = lVar5;
        } while (lVar5 != 0);
        uVar8 = (ulonglong)*(uint *)(param_1 + 0xc);
      }
      uVar7 = uVar7 + 1;
    } while (uVar7 < uVar8);
  }
  if (param_1[0xb] != 0) {
    uStack_50 = 0x140109f5b;
    func_0x000144d9c130();
  }
  param_1[0xb] = 0;
  *(undefined4 *)(param_1 + 0xd) = 0;
  *(undefined4 *)(param_1 + 0xc) = 0;
  uVar8 = (ulonglong)*(uint *)(param_1 + 9);
  if (*(uint *)(param_1 + 9) != 0) {
    uVar7 = 0;
    do {
      lVar4 = *(longlong *)(param_1[8] + uVar7 * 8);
      if (lVar4 != 0) {
        do {
          lVar5 = *(longlong *)(lVar4 + 0x10);
          uStack_50 = 0x140109f8f;
          func_0x000144d9c130(lVar4,0x18);
          lVar4 = lVar5;
        } while (lVar5 != 0);
        uVar8 = (ulonglong)*(uint *)(param_1 + 9);
      }
      uVar7 = uVar7 + 1;
    } while (uVar7 < uVar8);
  }
  if (param_1[8] != 0) {
    uStack_50 = 0x140109fb2;
    func_0x000144d9c130();
  }
  param_1[8] = 0;
  *(undefined4 *)(param_1 + 10) = 0;
  *(undefined4 *)(param_1 + 9) = 0;
  uStack_50 = 0x140109fcb;
  func_0x000144fb0750(param_1[2]);
  *param_1 = &UNK_146209118;
  if (param_1[1] != 0) {
    auStack_80[0] = 0;
    FUN_140108550(param_1[1],auStack_80);
    FUN_144faf900(auStack_80);
    *(undefined8 **)(**(longlong **)(unaff_GS_OFFSET + 0x58) + 0x880) = param_1;
  }
  return;
}

