// Recovered from game_scarlett_master.exe (GTA VI, Xbox Series X, PE32+ x64)
// Address: 1400b6a80  size: 155 bytes
// Name:    FUN_1400b6a80
// Subsystem: core
//
// Referenced strings (0 in this body, 0 including direct callees):
// Callees: FUN_14004c030, FUN_140fd0810
//
// Generated decompilation. Formatting follows MiscRef/GTAVSRC conventions;
// identifiers are recovered, not original. See ../../../README.md.

#include "gta6decomp/rage_types.h"


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

longlong FUN_1400b6a80(undefined8 param_1,undefined8 param_2)

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
  
  plVar3 = _DAT_1499aad58;
  uVar5 = _DAT_1499aad58[4];
  do {
    iVar4 = (int)uVar5;
    if (iVar4 == 0x1fffe) goto LAB_1400b6b0d;
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
  if (*plVar3 != 0) {
    lVar7 = *plVar3 + (ulonglong)(uint)((int)plVar3[1] * iVar4);
    if (plVar3[3] != 0) {
      FUN_14004c030(plVar3,lVar7);
    }
    FUN_140fd0810(lVar7,param_1,param_2);
    return lVar7;
  }
LAB_1400b6b0d:
  pcVar2 = (code *)swi(3);
  lVar7 = (*pcVar2)();
  return lVar7;
}

