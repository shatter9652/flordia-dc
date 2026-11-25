// Recovered from game_scarlett_master.exe (GTA VI, Xbox Series X, PE32+ x64)
// Address: 140198f40  size: 143 bytes
// Name:    FUN_140198f40
// Subsystem: core
//
// Referenced strings (0 in this body, 0 including direct callees):
// Callees: FUN_14004c030
//
// Generated decompilation. Formatting follows MiscRef/GTAVSRC conventions;
// identifiers are recovered, not original. See ../../../README.md.

#include "gta6decomp/rage_types.h"


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

longlong FUN_140198f40(void)

{
  uint *puVar1;
  longlong lVar2;
  longlong *plVar3;
  int iVar4;
  ulonglong uVar6;
  longlong lVar7;
  ulonglong uVar8;
  bool bVar9;
  ulonglong uVar5;
  
  plVar3 = _DAT_149e575a0;
  uVar5 = _DAT_149e575a0[4];
  do {
    iVar4 = (int)uVar5;
    if (iVar4 == 0xfffffe) {
      return 0;
    }
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
  lVar2 = *plVar3;
  lVar7 = (ulonglong)(uint)((int)plVar3[1] * iVar4) + lVar2;
  if ((lVar2 == 0) || (plVar3[3] == 0)) {
    if (lVar2 == 0) {
      return lVar7;
    }
  }
  else {
    FUN_14004c030(plVar3,lVar7);
  }
  func_0x000144850860(lVar7);
  return lVar7;
}

