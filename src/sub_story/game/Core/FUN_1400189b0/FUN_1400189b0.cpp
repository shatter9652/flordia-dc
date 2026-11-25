// Recovered from game_scarlett_master.exe (GTA VI, Xbox Series X, PE32+ x64)
// Address: 1400189b0  size: 359 bytes
// Name:    FUN_1400189b0
// Subsystem: core
//
// Referenced strings (0 in this body, 0 including direct callees):
// Callees: FUN_140189080, FUN_140018b20
//
// Generated decompilation. Formatting follows MiscRef/GTAVSRC conventions;
// identifiers are recovered, not original. See ../../../README.md.

#include "gta6decomp/rage_types.h"


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined8 * FUN_1400189b0(undefined8 *param_1,int param_2)

{
  ulonglong *puVar1;
  int *piVar2;
  undefined8 *puVar3;
  undefined8 *puVar4;
  undefined1 auVar5 [16];
  longlong *plVar6;
  ulonglong uVar7;
  ulonglong uVar8;
  uint uVar9;
  uint uVar10;
  bool bVar11;
  
  *param_1 = &UNK_1463d1230;
  puVar3 = (undefined8 *)param_1[0x5d];
  if (puVar3 != (undefined8 *)0x0) {
    puVar4 = (undefined8 *)puVar3[3];
    LOCK();
    piVar2 = (int *)(puVar3 + 2);
    *piVar2 = *piVar2 + -1;
    UNLOCK();
    if (*piVar2 == 0) {
      (**(code **)*puVar3)();
    }
    if (puVar4 != (undefined8 *)0x0) {
      LOCK();
      piVar2 = (int *)(puVar4 + 2);
      *piVar2 = *piVar2 + -1;
      UNLOCK();
      if (*piVar2 == 0) {
        (**(code **)*puVar4)(puVar4);
      }
    }
  }
  puVar3 = (undefined8 *)param_1[0x5b];
  if (puVar3 != (undefined8 *)0x0) {
    *(byte *)((longlong)puVar3 + 0x22c) = *(byte *)((longlong)puVar3 + 0x22c) | 4;
    LOCK();
    piVar2 = (int *)(puVar3 + 0x45);
    *piVar2 = *piVar2 + -1;
    UNLOCK();
    if (*piVar2 == 0) {
      (**(code **)*puVar3)();
    }
  }
  param_1[0x5b] = 0;
  FUN_140018b20(param_1);
  plVar6 = _DAT_1492e3130;
  if (param_2 != 0) {
    auVar5._8_8_ = 0;
    auVar5._0_8_ = (longlong)param_1 - *_DAT_1492e3130;
    uVar9 = SUB164(auVar5 / ZEXT416(*(uint *)(_DAT_1492e3130 + 1)),0);
    uVar10 = *(uint *)(_DAT_1492e3130[5] +
                      (SUB168(auVar5 / ZEXT416(*(uint *)(_DAT_1492e3130 + 1)),0) & 0xffffffff) * 4)
             & 0xfffe0000 | uVar9;
    uVar9 = uVar9 & 0x1ffff | 0x20000;
    if (uVar10 < 0xfffe0000) {
      uVar9 = uVar10 + 0x20000;
    }
    puVar1 = (ulonglong *)(_DAT_1492e3130 + 4);
    LOCK();
    *(int *)(_DAT_1492e3130 + 2) = (int)_DAT_1492e3130[2] + -1;
    UNLOCK();
    uVar7 = *puVar1;
    do {
      *(uint *)(plVar6[5] + (ulonglong)(uVar9 & 0x1ffff) * 4) =
           (uint)uVar7 & 0x1ffff | uVar9 & 0xfffe0000;
      LOCK();
      uVar8 = plVar6[4];
      bVar11 = uVar7 == uVar8;
      if (bVar11) {
        plVar6[4] = (uVar7 & 0xffffffff00000000 | (ulonglong)(uVar9 & 0x1ffff)) + 0x100000000;
        uVar8 = uVar7;
      }
      UNLOCK();
      uVar7 = uVar8;
    } while (!bVar11);
    if (plVar6[3] != 0) {
      FUN_140189080(plVar6,param_1);
    }
  }
  return param_1;
}

