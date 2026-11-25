// Recovered from game_scarlett_master.exe (GTA VI, Xbox Series X, PE32+ x64)
// Address: 140058470  size: 594 bytes
// Name:    FUN_140058470
// Subsystem: core
//
// Referenced strings (0 in this body, 0 including direct callees):
// Callees: FUN_1415e5ce0, FUN_14004c030
//
// Generated decompilation. Formatting follows MiscRef/GTAVSRC conventions;
// identifiers are recovered, not original. See ../../../README.md.

#include "gta6decomp/rage_types.h"


/* WARNING: Removing unreachable block (ram,0x00014005868b) */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined1 (*) [32] FUN_140058470(uint param_1)

{
  uint uVar1;
  longlong lVar2;
  longlong *plVar3;
  uint uVar4;
  int iVar5;
  uint uVar6;
  ulonglong uVar7;
  uint uVar8;
  longlong lVar9;
  uint *puVar10;
  ulonglong uVar11;
  undefined4 *puVar12;
  undefined1 (*pauVar13) [32];
  ulonglong uVar14;
  longlong unaff_GS_OFFSET;
  bool bVar15;
  
  plVar3 = _DAT_147bba930;
  uVar11 = _DAT_147bba930[4];
  do {
    iVar5 = (int)uVar11;
    if (iVar5 == 0x1fffe) {
      return (undefined1 (*) [32])0x0;
    }
    uVar14 = uVar11 & 0xffffffff;
    LOCK();
    uVar7 = plVar3[4];
    bVar15 = uVar11 == uVar7;
    if (bVar15) {
      plVar3[4] = (ulonglong)(*(uint *)(plVar3[5] + uVar14 * 4) & 0x1ffff) |
                  uVar11 & 0xffffffff00000000;
      uVar7 = uVar11;
    }
    UNLOCK();
    uVar11 = uVar7;
  } while (!bVar15);
  LOCK();
  *(int *)(plVar3 + 2) = (int)plVar3[2] + 1;
  UNLOCK();
  puVar10 = (uint *)(plVar3[5] + uVar14 * 4);
  *puVar10 = *puVar10 | *(uint *)(plVar3 + 6);
  lVar2 = *plVar3;
  pauVar13 = (undefined1 (*) [32])((ulonglong)(uint)((int)plVar3[1] * iVar5) + lVar2);
  if ((lVar2 == 0) || (plVar3[3] == 0)) {
    if (lVar2 == 0) {
      return pauVar13;
    }
  }
  else {
    FUN_14004c030(plVar3,pauVar13);
  }
  puVar12 = (undefined4 *)0x0;
  bVar15 = true;
  *pauVar13 = ZEXT1232(ZEXT812(0));
  *(undefined4 *)pauVar13[2] = 0;
  pauVar13[1] = ZEXT1232(ZEXT812(0));
  *(undefined8 *)(*pauVar13 + 4) = 0xa0001ffff;
  lVar2 = **(longlong **)(unaff_GS_OFFSET + 0x58);
  *(undefined4 *)(pauVar13[1] + 0x1f) = 0;
  *(undefined8 *)(pauVar13[1] + 0x18) = 0;
  if (*(char *)(lVar2 + 0x860) == '\0') {
    iVar5 = func_0x000145037ab0();
    if (_DAT_1487598bc == iVar5 + 1) {
      puVar12 = (undefined4 *)0x0;
    }
    else {
      puVar12 = (undefined4 *)&DAT_1487598bc;
      bVar15 = false;
      do {
      } while (_DAT_1487598bc != 0);
      LOCK();
      UNLOCK();
      _DAT_1487598bc = iVar5 + 1;
    }
  }
  uVar6 = (param_1 >> 0x10 ^ param_1) * -0x7a143595;
  uVar6 = (uVar6 >> 0xd ^ uVar6) * -0x3d4d51cb;
  do {
    lVar2 = _DAT_1487598c8;
    uVar4 = _DAT_1487598c0;
    if (_DAT_1487598c0 != 0) {
      uVar8 = _DAT_1487598c0 - 1;
      uVar11 = (ulonglong)((uVar6 >> 0x10 ^ uVar6) & uVar8);
      lVar9 = uVar11 * 0x10;
      uVar1 = *(uint *)(_DAT_1487598c8 + lVar9);
      while( true ) {
        if (uVar1 == param_1) {
          if (_DAT_1487598c0 != (uint)uVar11) goto LAB_140058650;
          goto LAB_140058608;
        }
        puVar10 = (uint *)(lVar9 + _DAT_1487598c8);
        if (uVar1 == 0) break;
        uVar11 = (ulonglong)
                 ((uint)((ulonglong)((longlong)puVar10 + (0x10 - _DAT_1487598c8)) >> 4) & uVar8);
        lVar9 = uVar11 * 0x10;
        uVar1 = *(uint *)(_DAT_1487598c8 + lVar9);
      }
      if (_DAT_1487598c4 != (_DAT_1487598c0 * 0x4b) / 100) break;
    }
    FUN_1415e5ce0(_DAT_1487598c0 * 2);
  } while( true );
  *puVar10 = param_1;
  _DAT_1487598c4 = _DAT_1487598c4 + 1;
  uVar11 = (ulonglong)((longlong)puVar10 - lVar2) >> 4;
  while ((uVar8 = (uint)uVar11, uVar6 = uVar4, uVar4 != uVar8 &&
         (uVar6 = uVar8, *(int *)(lVar2 + (uVar11 & 0xffffffff) * 0x10) == 0))) {
    uVar11 = (ulonglong)(uVar8 + 1);
  }
  *(undefined1 (**) [32])(lVar2 + 8 + (ulonglong)uVar6 * 0x10) = pauVar13;
  goto LAB_140058608;
  while (uVar11 = (ulonglong)(uVar6 + 1), uVar8 != uVar6) {
LAB_140058650:
    uVar6 = (uint)uVar11;
    if (*(int *)(_DAT_1487598c8 + uVar11 * 0x10) != 0) break;
  }
LAB_140058608:
  if (!bVar15) {
    *puVar12 = 0;
  }
  return pauVar13;
}

