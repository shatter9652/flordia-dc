// Recovered from game_scarlett_master.exe (GTA VI, Xbox Series X, PE32+ x64)
// Address: 140019630  size: 148 bytes
// Name:    FUN_140019630
// Subsystem: core
//
// Referenced strings (0 in this body, 0 including direct callees):
// Callees: FUN_1452e2b10, FUN_1400196d0
//
// Generated decompilation. Formatting follows MiscRef/GTAVSRC conventions;
// identifiers are recovered, not original. See ../../../README.md.

#include "gta6decomp/rage_types.h"


void FUN_140019630(undefined8 *param_1)

{
  int iVar1;
  undefined8 *puVar2;
  undefined8 *puVar3;
  longlong lVar4;
  char cVar5;
  uint uVar6;
  longlong lVar7;
  int *piVar8;
  ulonglong uVar9;
  
  *param_1 = &UNK_14653d610;
  FUN_1400196d0();
  if (param_1[0xe] != 0) {
    FUN_1452e2b10(param_1[0xe],*(undefined2 *)(param_1 + 0xd));
  }
  param_1[0xe] = 0;
  puVar2 = (undefined8 *)param_1[0xc];
  if (puVar2 != (undefined8 *)0x0) {
    puVar3 = (undefined8 *)puVar2[3];
    LOCK();
    piVar8 = (int *)(puVar2 + 2);
    *piVar8 = *piVar8 + -1;
    UNLOCK();
    if (*piVar8 == 0) {
      (**(code **)*puVar2)(puVar2,1);
    }
    if (puVar3 != (undefined8 *)0x0) {
      LOCK();
      piVar8 = (int *)(puVar3 + 2);
      *piVar8 = *piVar8 + -1;
      UNLOCK();
      if (*piVar8 == 0) {
        (**(code **)*puVar3)(puVar3,1);
      }
    }
  }
  *param_1 = &UNK_14633ab50;
  FUN_14020f240();
  uVar6 = *(uint *)(param_1 + 6);
  if (uVar6 != 0) {
    uVar9 = 0;
    do {
      lVar7 = *(longlong *)(param_1[5] + uVar9 * 8);
      if (lVar7 != 0) {
        do {
          lVar7 = *(longlong *)(lVar7 + 0x10);
          FUN_140018ce0();
        } while (lVar7 != 0);
        uVar6 = *(uint *)(param_1 + 6);
      }
      uVar9 = uVar9 + 1;
    } while (uVar9 < uVar6);
  }
  FUN_140018ce0(param_1[5]);
  param_1[5] = 0;
  *(undefined4 *)(param_1 + 7) = 0;
  *(undefined4 *)(param_1 + 6) = 0;
  uVar6 = *(uint *)(param_1 + 3);
  if (uVar6 != 0) {
    uVar9 = 0;
    do {
      lVar7 = *(longlong *)(param_1[2] + uVar9 * 8);
      if (lVar7 != 0) {
        do {
          lVar4 = *(longlong *)(lVar7 + 0x20);
          func_0x00014020f2b0(lVar7 + 8);
          FUN_140018ce0(lVar7);
          lVar7 = lVar4;
        } while (lVar4 != 0);
        uVar6 = *(uint *)(param_1 + 3);
      }
      uVar9 = uVar9 + 1;
    } while (uVar9 < uVar6);
  }
  FUN_140018ce0(param_1[2]);
  param_1[2] = 0;
  *(undefined4 *)(param_1 + 4) = 0;
  *(undefined4 *)(param_1 + 3) = 0;
  piVar8 = (int *)(param_1 + 1);
  iVar1 = *piVar8;
  if (iVar1 != 0) {
    cVar5 = func_0x0001404e3730(CONCAT71((int7)((ulonglong)piVar8 >> 8),
                                         *(undefined1 *)((longlong)param_1 + 0xc)));
    if (cVar5 != '\0') {
      FUN_1402115b0(iVar1);
      *(byte *)((longlong)param_1 + 0xc) = *(byte *)((longlong)param_1 + 0xc) & 0xfd;
    }
    FUN_14020f480(piVar8);
  }
  *piVar8 = 0;
  *(byte *)((longlong)param_1 + 0xc) = *(byte *)((longlong)param_1 + 0xc) & 0xfe;
  return;
}

