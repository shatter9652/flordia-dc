// Recovered from game_scarlett_master.exe (GTA VI, Xbox Series X, PE32+ x64)
// Address: 14018ce40  size: 186 bytes
// Name:    FUN_14018ce40
// Subsystem: core
//
// Referenced strings (0 in this body, 0 including direct callees):
// Callees: FUN_14018cf00, FUN_14018d140, FUN_14004c030
//
// Generated decompilation. Formatting follows MiscRef/GTAVSRC conventions;
// identifiers are recovered, not original. See ../../../README.md.

#include "gta6decomp/rage_types.h"


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

longlong FUN_14018ce40(longlong param_1)

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
  
  plVar3 = _DAT_149d27440;
  lVar7 = *(longlong *)(param_1 + 0x18);
  if (lVar7 == 0) {
    uVar5 = _DAT_149d27440[4];
    do {
      iVar4 = (int)uVar5;
      if (iVar4 == 0x1fffe) goto LAB_14018ceed;
      uVar8 = uVar5 & 0xffffffff;
      LOCK();
      uVar6 = plVar3[4];
      bVar9 = uVar5 == uVar6;
      if (bVar9) {
        plVar3[4] = (ulonglong)(*(uint *)(plVar3[5] + uVar8 * 4) & 0x1ffff) |
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
LAB_14018ceed:
      pcVar2 = (code *)swi(3);
      lVar7 = (*pcVar2)();
      return lVar7;
    }
    lVar7 = *plVar3 + (ulonglong)(uint)((int)plVar3[1] * iVar4);
    if (plVar3[3] != 0) {
      FUN_14004c030(plVar3,lVar7);
    }
    FUN_14018d140(lVar7);
    *(longlong *)(param_1 + 0x18) = lVar7;
    FUN_14018cf00(lVar7,*(ulonglong *)(param_1 + 8) & 0xfffffffffffffff0);
    lVar7 = *(longlong *)(param_1 + 0x18);
  }
  return lVar7;
}

