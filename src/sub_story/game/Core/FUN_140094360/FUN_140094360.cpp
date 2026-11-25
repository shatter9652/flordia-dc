// Recovered from game_scarlett_master.exe (GTA VI, Xbox Series X, PE32+ x64)
// Address: 140094360  size: 249 bytes
// Name:    FUN_140094360
// Subsystem: core
//
// Referenced strings (0 in this body, 0 including direct callees):
// Callees: FUN_142474a90, FUN_14248c6b0
//
// Generated decompilation. Formatting follows MiscRef/GTAVSRC conventions;
// identifiers are recovered, not original. See ../../../README.md.

#include "gta6decomp/rage_types.h"


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_140094360(longlong param_1,longlong param_2,int param_3)

{
  code *pcVar1;
  int *piVar2;
  int iVar3;
  uint uVar4;
  int iVar5;
  ulonglong uVar6;
  longlong *plVar7;
  bool bVar8;
  undefined1 auVar9 [16];
  
  plVar7 = *(longlong **)(param_1 + 0x12348);
  if (plVar7 == (longlong *)0x0) {
    FUN_142474a90(param_1 + 0x12300);
    plVar7 = *(longlong **)(param_1 + 0x12348);
  }
  func_0x000144da6190(param_1 + 0x12300);
  uVar6 = *(ulonglong *)(param_1 + 0x20);
  if ((uVar6 & 0x30000000000) == 0) {
LAB_140094402:
    if (uVar6 == 0) goto LAB_14009440f;
  }
  else {
    pcVar1 = *(code **)(param_1 + 0x122c0);
    if (pcVar1 != (code *)0x0) {
      piVar2 = *(int **)(param_1 + 0x12198);
      iVar5 = *piVar2;
      do {
        LOCK();
        iVar3 = *piVar2;
        if (iVar5 == iVar3) {
          *piVar2 = iVar5 + 0x4000000;
          iVar3 = iVar5;
        }
        UNLOCK();
        bVar8 = iVar5 != iVar3;
        iVar5 = iVar3;
      } while (bVar8);
      (*pcVar1)(param_1,uVar6,*(undefined8 *)(param_1 + 0x122c8));
      iVar5 = *piVar2;
      do {
        LOCK();
        iVar3 = *piVar2;
        if (iVar5 == iVar3) {
          *piVar2 = iVar5 + -0x4000000;
          iVar3 = iVar5;
        }
        UNLOCK();
        bVar8 = iVar5 != iVar3;
        iVar5 = iVar3;
      } while (bVar8);
      uVar6 = *(ulonglong *)(param_1 + 0x20);
      goto LAB_140094402;
    }
  }
  FUN_14248c6b0(param_1);
LAB_14009440f:
  uVar4 = *(ushort *)(param_2 + 0x10) & 0x2040;
  if ((*(ushort *)(param_2 + 0x10) & 0x2040) != 0) {
    uVar4 = *(uint *)(param_2 + 0x14);
  }
  auVar9._0_12_ = ZEXT812(0);
  auVar9._12_4_ = 0;
  (**(code **)(*plVar7 + 0x1e8))
            (plVar7,_DAT_1475e75e8,1,*(undefined8 *)(param_2 + 0x20),uVar4 + param_3,auVar9);
  return;
}

