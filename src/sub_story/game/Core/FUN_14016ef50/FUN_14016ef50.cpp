// Recovered from game_scarlett_master.exe (GTA VI, Xbox Series X, PE32+ x64)
// Address: 14016ef50  size: 266 bytes
// Name:    FUN_14016ef50
// Subsystem: core
//
// Referenced strings (0 in this body, 0 including direct callees):
// Callees: 
//
// Generated decompilation. Formatting follows MiscRef/GTAVSRC conventions;
// identifiers are recovered, not original. See ../../../README.md.

#include "gta6decomp/rage_types.h"


/* WARNING: Possible PIC construction at 0x00014016efc2: Changing call to branch */

void FUN_14016ef50(uint *param_1,undefined8 *param_2)

{
  int *piVar1;
  undefined8 *puVar2;
  uint uVar3;
  undefined8 *puVar4;
  undefined8 *puVar5;
  uint uVar6;
  ulonglong uVar7;
  undefined8 *puVar8;
  longlong lVar9;
  
  uVar3 = param_1[1];
  if (uVar3 == *param_1) {
    uVar6 = 1;
    if (1 < uVar3) {
      uVar6 = uVar3 >> 1;
    }
    puVar4 = (undefined8 *)func_0x000144d9c140(8,(ulonglong)(uVar6 + uVar3) * 8);
    uVar7 = (ulonglong)param_1[1];
    if (uVar7 != 0) {
      puVar2 = *(undefined8 **)(param_1 + 2);
      lVar9 = uVar7 * 8;
      puVar5 = puVar2;
      puVar8 = puVar4;
      do {
        if (puVar8 != (undefined8 *)0x0) goto code_r0x00014016ef30;
        puVar5 = puVar5 + 1;
        puVar8 = (undefined8 *)0x8;
        lVar9 = lVar9 + -8;
      } while (lVar9 != 0);
      lVar9 = 0;
      do {
        puVar8 = *(undefined8 **)((longlong)puVar2 + lVar9);
        if (puVar8 != (undefined8 *)0x0) {
          LOCK();
          piVar1 = (int *)(puVar8 + 2);
          *piVar1 = *piVar1 + -1;
          UNLOCK();
          if (*piVar1 == 0) {
            (**(code **)*puVar8)(puVar8,1);
          }
        }
        lVar9 = lVar9 + 8;
      } while (uVar7 << 3 != lVar9);
    }
    if (*(longlong *)(param_1 + 2) != 0) {
      func_0x000144d9c130();
    }
    *(undefined8 **)(param_1 + 2) = puVar4;
    *param_1 = uVar6 + uVar3;
    uVar3 = param_1[1];
  }
  else {
    puVar4 = *(undefined8 **)(param_1 + 2);
  }
  param_1[1] = uVar3 + 1;
  if (puVar4 == (undefined8 *)0x0) {
    return;
  }
  puVar8 = puVar4 + uVar3;
  puVar5 = param_2;
code_r0x00014016ef30:
  *puVar8 = 0;
  *puVar8 = *puVar5;
  *puVar5 = 0;
  return;
}

