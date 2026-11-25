// Recovered from game_scarlett_master.exe (GTA VI, Xbox Series X, PE32+ x64)
// Address: 14011c5a0  size: 234 bytes
// Name:    FUN_14011c5a0
// Subsystem: core
//
// Referenced strings (0 in this body, 0 including direct callees):
// Callees: FUN_140bea410, FUN_14004c030, FUN_1413afe20, FUN_142857c40, FUN_141393460
//
// Generated decompilation. Formatting follows MiscRef/GTAVSRC conventions;
// identifiers are recovered, not original. See ../../../README.md.

#include "gta6decomp/rage_types.h"


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

longlong FUN_14011c5a0(longlong param_1)

{
  uint *puVar1;
  code *pcVar2;
  longlong *plVar3;
  char cVar4;
  int iVar5;
  longlong lVar6;
  ulonglong uVar8;
  longlong lVar9;
  ulonglong uVar10;
  bool bVar11;
  ulonglong uVar7;
  
  lVar9 = *(longlong *)(param_1 + 0x180);
  if (lVar9 == 0) {
    if (((*(int *)((longlong)_DAT_14a9ec8f0 + 0xc) == (int)_DAT_14a9ec8f0[2]) &&
        (cVar4 = FUN_142857c40(), cVar4 == '\0')) ||
       (lVar6 = FUN_141393460(), plVar3 = _DAT_14a9ec8f0, lVar6 == 0)) {
      lVar9 = 0;
    }
    else {
      uVar7 = _DAT_14a9ec8f0[4];
      do {
        iVar5 = (int)uVar7;
        if (iVar5 == 0x1fffe) goto LAB_14011c67c;
        uVar10 = uVar7 & 0xffffffff;
        LOCK();
        uVar8 = plVar3[4];
        bVar11 = uVar7 == uVar8;
        if (bVar11) {
          plVar3[4] = (ulonglong)(*(uint *)(plVar3[5] + uVar10 * 4) & 0x1ffff) |
                      uVar7 & 0xffffffff00000000;
          uVar8 = uVar7;
        }
        UNLOCK();
        uVar7 = uVar8;
      } while (!bVar11);
      LOCK();
      *(int *)(plVar3 + 2) = (int)plVar3[2] + 1;
      UNLOCK();
      puVar1 = (uint *)(plVar3[5] + uVar10 * 4);
      *puVar1 = *puVar1 | *(uint *)(plVar3 + 6);
      if (*plVar3 == 0) {
LAB_14011c67c:
        pcVar2 = (code *)swi(3);
        lVar9 = (*pcVar2)();
        return lVar9;
      }
      lVar9 = *plVar3 + (ulonglong)(uint)((int)plVar3[1] * iVar5);
      if (plVar3[3] != 0) {
        FUN_14004c030(plVar3,lVar9);
      }
      FUN_1413afe20(lVar9,param_1,lVar6);
    }
  }
  else if (*(char *)(lVar9 + 0x20) == '\x01') {
    FUN_140bea410(lVar9,0);
  }
  return lVar9;
}

