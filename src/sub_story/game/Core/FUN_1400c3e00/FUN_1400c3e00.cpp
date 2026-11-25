// Recovered from game_scarlett_master.exe (GTA VI, Xbox Series X, PE32+ x64)
// Address: 1400c3e00  size: 252 bytes
// Name:    FUN_1400c3e00
// Subsystem: core
//
// Referenced strings (0 in this body, 0 including direct callees):
// Callees: 
//
// Generated decompilation. Formatting follows MiscRef/GTAVSRC conventions;
// identifiers are recovered, not original. See ../../../README.md.

#include "gta6decomp/rage_types.h"


void FUN_1400c3e00(longlong *param_1,int param_2)

{
  int *piVar1;
  longlong *plVar2;
  longlong *plVar3;
  undefined8 *puVar4;
  longlong *plVar5;
  longlong lVar6;
  ulonglong uVar7;
  ulonglong uVar8;
  longlong *plVar9;
  longlong *plVar10;
  ulonglong uVar11;
  longlong lVar12;
  
  plVar5 = (longlong *)(**(code **)(*param_1 + 0x38))();
  lVar6 = (**(code **)(*param_1 + 0x28))(param_1);
  plVar2 = (longlong *)(lVar6 + (longlong)param_2 * 8);
  if (plVar2 != plVar5) {
    lVar6 = param_1[7];
    uVar7 = (ulonglong)*(uint *)((longlong)param_1 + 0x34);
    plVar3 = (longlong *)(lVar6 + uVar7 * 8);
    plVar9 = plVar2;
    plVar10 = plVar5;
    if (plVar3 != plVar5) {
      do {
        puVar4 = (undefined8 *)*plVar9;
        *plVar9 = *plVar10;
        *plVar10 = 0;
        if (puVar4 != (undefined8 *)0x0) {
          LOCK();
          piVar1 = (int *)(puVar4 + 3);
          *piVar1 = *piVar1 + -1;
          UNLOCK();
          if (*piVar1 == 0) {
            (**(code **)*puVar4)(puVar4,1);
          }
        }
        plVar10 = plVar10 + 1;
        plVar9 = plVar9 + 1;
      } while (plVar10 != plVar3);
      lVar6 = param_1[7];
      uVar7 = (ulonglong)*(uint *)((longlong)param_1 + 0x34);
    }
    uVar8 = (ulonglong)((longlong)plVar5 - (longlong)plVar2) >> 3;
    uVar11 = uVar8 & 0xffffffff;
    if (uVar11 != 0) {
      lVar12 = uVar11 * -8;
      do {
        puVar4 = *(undefined8 **)(lVar6 + uVar7 * 8 + lVar12);
        if (puVar4 != (undefined8 *)0x0) {
          LOCK();
          piVar1 = (int *)(puVar4 + 3);
          *piVar1 = *piVar1 + -1;
          UNLOCK();
          if (*piVar1 == 0) {
            (**(code **)*puVar4)(puVar4,1);
          }
        }
        lVar12 = lVar12 + 8;
      } while (lVar12 != 0);
      uVar7 = (ulonglong)*(uint *)((longlong)param_1 + 0x34);
    }
    *(int *)((longlong)param_1 + 0x34) = (int)uVar7 - (int)uVar8;
  }
  if ((longlong)param_2 != (ulonglong)*(uint *)((longlong)param_1 + 0x84)) {
    *(int *)((longlong)param_1 + 0x84) = param_2;
  }
  return;
}

