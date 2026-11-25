// Recovered from game_scarlett_master.exe (GTA VI, Xbox Series X, PE32+ x64)
// Address: 14017f0a0  size: 194 bytes
// Name:    FUN_14017f0a0
// Subsystem: core
//
// Referenced strings (0 in this body, 0 including direct callees):
// Callees: 
//
// Generated decompilation. Formatting follows MiscRef/GTAVSRC conventions;
// identifiers are recovered, not original. See ../../../README.md.

#include "gta6decomp/rage_types.h"


int * FUN_14017f0a0(int *param_1,uint param_2)

{
  undefined8 *puVar1;
  int iVar2;
  int iVar3;
  uint *puVar4;
  int *piVar5;
  int *piVar6;
  ulonglong uVar7;
  ulonglong uVar8;
  ulonglong uVar9;
  
  iVar2 = func_0x000145037ab0();
  iVar3 = *param_1;
  if (iVar3 != iVar2 + 1) {
    do {
      if (iVar3 < 1) {
        LOCK();
        iVar2 = *param_1;
        if (iVar3 == iVar2) {
          *param_1 = iVar3 + -1;
        }
        UNLOCK();
        piVar6 = param_1;
        if (iVar3 == iVar2) goto LAB_14017f0d5;
      }
      iVar3 = *param_1;
    } while( true );
  }
  piVar6 = (int *)0x0;
LAB_14017f0d5:
  uVar7 = (ulonglong)*(ushort *)(param_1 + 0x18);
  if (uVar7 != 0) {
    puVar4 = *(uint **)(param_1 + 0x16);
    do {
      uVar9 = uVar7 >> 1;
      uVar8 = ~uVar9 + uVar7;
      uVar7 = uVar9;
      if ((puVar4 + uVar9 * 4 + 4)[-4] < param_2) {
        puVar4 = puVar4 + uVar9 * 4 + 4;
        uVar7 = uVar8;
      }
    } while (0 < (longlong)uVar7);
    if ((((puVar4 != *(uint **)(param_1 + 0x16) + (ulonglong)*(ushort *)(param_1 + 0x18) * 4) &&
         (*puVar4 == param_2)) &&
        (puVar1 = *(undefined8 **)(puVar4 + 2), puVar1 != (undefined8 *)0x0)) &&
       (uVar7 = (ulonglong)*(ushort *)(puVar1 + 1), uVar7 != 0)) {
      piVar5 = (int *)*puVar1;
      do {
        if (*piVar5 == param_1[0x4d]) goto LAB_14017f152;
        piVar5 = piVar5 + 5;
        uVar7 = uVar7 - 1;
      } while (uVar7 != 0);
    }
  }
  piVar5 = (int *)0x0;
LAB_14017f152:
  if (piVar6 != (int *)0x0) {
    LOCK();
    *piVar6 = *piVar6 + 1;
    UNLOCK();
  }
  return piVar5;
}

