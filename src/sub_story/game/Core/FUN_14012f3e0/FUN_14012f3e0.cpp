// Recovered from game_scarlett_master.exe (GTA VI, Xbox Series X, PE32+ x64)
// Address: 14012f3e0  size: 164 bytes
// Name:    FUN_14012f3e0
// Subsystem: core
//
// Referenced strings (0 in this body, 0 including direct callees):
// Callees: FUN_14004c030, FUN_141f7a410
//
// Generated decompilation. Formatting follows MiscRef/GTAVSRC conventions;
// identifiers are recovered, not original. See ../../../README.md.

#include "gta6decomp/rage_types.h"


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

longlong FUN_14012f3e0(undefined8 param_1,undefined8 param_2)

{
  uint *puVar1;
  code *pcVar2;
  longlong *plVar3;
  int iVar4;
  ulonglong uVar6;
  longlong lVar7;
  ulonglong uVar8;
  bool bVar9;
  ulonglong uVar5;
  
  plVar3 = _DAT_14763acb0;
  if (*(int *)((longlong)_DAT_14763acb0 + 0xc) == (int)_DAT_14763acb0[2]) {
    lVar7 = 0;
  }
  else {
    uVar5 = _DAT_14763acb0[4];
    do {
      iVar4 = (int)uVar5;
      if (iVar4 == 0xfffffe) goto LAB_14012f476;
      uVar8 = uVar5 & 0xffffffff;
      LOCK();
      uVar6 = plVar3[4];
      bVar9 = uVar5 == uVar6;
      if (bVar9) {
        plVar3[4] = (ulonglong)(*(uint *)(plVar3[5] + uVar8 * 4) & 0xffffff) |
                    uVar5 & 0xffffffff00000000;
        uVar6 = uVar5;
      }
      UNLOCK();
      uVar5 = uVar6;
    } while (!bVar9);
    LOCK();
    *(int *)(plVar3 + 2) = (int)plVar3[2] + 1;
    UNLOCK();
    puVar1 = (uint *)(plVar3[5] + uVar8 * 4);
    *puVar1 = *puVar1 | *(uint *)(plVar3 + 6);
    if (*plVar3 == 0) {
LAB_14012f476:
      pcVar2 = (code *)swi(3);
      lVar7 = (*pcVar2)();
      return lVar7;
    }
    lVar7 = *plVar3 + (ulonglong)(uint)((int)plVar3[1] * iVar4);
    if (plVar3[3] != 0) {
      FUN_14004c030(plVar3,lVar7);
    }
    FUN_141f7a410(lVar7,param_1,param_2);
  }
  return lVar7;
}

