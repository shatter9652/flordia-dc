// Recovered from game_scarlett_master.exe (GTA VI, Xbox Series X, PE32+ x64)
// Address: 14016ee20  size: 272 bytes
// Name:    FUN_14016ee20
// Subsystem: core
//
// Referenced strings (0 in this body, 0 including direct callees):
// Callees: 
//
// Generated decompilation. Formatting follows MiscRef/GTAVSRC conventions;
// identifiers are recovered, not original. See ../../../README.md.

#include "gta6decomp/rage_types.h"


/* WARNING: Possible PIC construction at 0x00014016ee95: Changing call to branch */

void FUN_14016ee20(uint *param_1,undefined8 *param_2)

{
  int *piVar1;
  undefined8 *puVar2;
  uint uVar3;
  undefined8 *puVar4;
  undefined8 *puVar5;
  longlong lVar6;
  uint uVar7;
  ulonglong uVar8;
  undefined8 *puVar9;
  
  uVar3 = param_1[1];
  if (uVar3 == *param_1) {
    uVar7 = 1;
    if (1 < uVar3) {
      uVar7 = uVar3 >> 1;
    }
    puVar4 = (undefined8 *)func_0x000144d9c140(8,(ulonglong)(uVar7 + uVar3) * 8);
    uVar8 = (ulonglong)param_1[1];
    if (uVar8 != 0) {
      puVar2 = *(undefined8 **)(param_1 + 2);
      lVar6 = uVar8 * 8;
      puVar5 = puVar2;
      puVar9 = puVar4;
      do {
        if (puVar9 != (undefined8 *)0x0) goto code_r0x00014016ef30;
        puVar5 = puVar5 + 1;
        puVar9 = (undefined8 *)0x8;
        lVar6 = lVar6 + -8;
      } while (lVar6 != 0);
      lVar6 = 0;
      do {
        puVar9 = *(undefined8 **)((longlong)puVar2 + lVar6);
        if (puVar9 != (undefined8 *)0x0) {
          LOCK();
          piVar1 = (int *)(puVar9 + 2);
          *piVar1 = *piVar1 + -1;
          UNLOCK();
          if (*piVar1 == 0) {
            (**(code **)*puVar9)(puVar9,1);
          }
        }
        lVar6 = lVar6 + 8;
      } while (uVar8 << 3 != lVar6);
    }
    if (*(longlong *)(param_1 + 2) != 0) {
      func_0x000144d9c130();
    }
    *(undefined8 **)(param_1 + 2) = puVar4;
    *param_1 = uVar7 + uVar3;
    uVar3 = param_1[1];
  }
  else {
    puVar4 = *(undefined8 **)(param_1 + 2);
  }
  param_1[1] = uVar3 + 1;
  if (puVar4 == (undefined8 *)0x0) {
    return;
  }
  puVar9 = puVar4 + uVar3;
  puVar5 = param_2;
code_r0x00014016ef30:
  *puVar9 = 0;
  *puVar9 = *puVar5;
  *puVar5 = 0;
  return;
}

