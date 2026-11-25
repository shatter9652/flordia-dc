// Recovered from game_scarlett_master.exe (GTA VI, Xbox Series X, PE32+ x64)
// Address: 140171240  size: 519 bytes
// Name:    FUN_140171240
// Subsystem: core
//
// Referenced strings (0 in this body, 0 including direct callees):
// Callees: FUN_140171d10, FUN_140171450, FUN_140171610, FUN_1401714e0, FUN_140189080, FUN_14004c030
//
// Generated decompilation. Formatting follows MiscRef/GTAVSRC conventions;
// identifiers are recovered, not original. See ../../../README.md.

#include "gta6decomp/rage_types.h"


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_140171240(longlong param_1)

{
  ulonglong *puVar1;
  uint *puVar2;
  longlong lVar3;
  undefined1 auVar4 [16];
  code *pcVar5;
  longlong *plVar6;
  char cVar7;
  int iVar8;
  ulonglong uVar9;
  ulonglong uVar10;
  uint uVar11;
  longlong lVar12;
  ulonglong uVar13;
  uint uVar14;
  bool bVar15;
  
  plVar6 = _DAT_14abbcfa0;
  uVar9 = _DAT_14abbcfa0[4];
  do {
    iVar8 = (int)uVar9;
    if (iVar8 == 0x1fffe) goto LAB_140171422;
    uVar13 = uVar9 & 0xffffffff;
    LOCK();
    uVar10 = plVar6[4];
    bVar15 = uVar9 == uVar10;
    if (bVar15) {
      plVar6[4] = (ulonglong)(*(uint *)(plVar6[5] + uVar13 * 4) & 0x1ffff) |
                  uVar9 & 0xffffffff00000000;
      uVar10 = uVar9;
    }
    UNLOCK();
    uVar9 = uVar10;
  } while (!bVar15);
  LOCK();
  *(int *)(plVar6 + 2) = (int)plVar6[2] + 1;
  UNLOCK();
  puVar2 = (uint *)(plVar6[5] + uVar13 * 4);
  *puVar2 = *puVar2 | *(uint *)(plVar6 + 6);
  if (*plVar6 != 0) {
    lVar12 = *plVar6 + (ulonglong)(uint)((int)plVar6[1] * iVar8);
    if (plVar6[3] != 0) {
      FUN_14004c030();
    }
    *(longlong *)(lVar12 + 0x2c0) = lVar12 + 0x2d0;
    *(undefined8 *)(lVar12 + 0x2b0) = 0xf;
    func_0x00014016d140(lVar12);
    lVar3 = *(longlong *)(param_1 + 0x310);
    if (lVar3 != 0) {
      *(undefined4 *)(lVar3 + 0x2b4) = 0;
      if ((lVar3 + 0x2d0 != *(longlong *)(lVar3 + 0x2c0)) && (*(longlong *)(lVar3 + 0x2c0) != 0)) {
        func_0x000144d9c130();
      }
      *(undefined4 *)(lVar3 + 0x2b0) = 0xf;
      *(undefined8 *)(lVar3 + 0x2c0) = 0;
      plVar6 = _DAT_14abbcfa0;
      auVar4._8_8_ = 0;
      auVar4._0_8_ = lVar3 - *_DAT_14abbcfa0;
      uVar11 = SUB164(auVar4 / ZEXT416(*(uint *)(_DAT_14abbcfa0 + 1)),0);
      uVar14 = *(uint *)(_DAT_14abbcfa0[5] +
                        (SUB168(auVar4 / ZEXT416(*(uint *)(_DAT_14abbcfa0 + 1)),0) & 0xffffffff) * 4
                        ) & 0xfffe0000 | uVar11;
      uVar11 = uVar11 & 0x1ffff | 0x20000;
      if (uVar14 < 0xfffe0000) {
        uVar11 = uVar14 + 0x20000;
      }
      puVar1 = (ulonglong *)(_DAT_14abbcfa0 + 4);
      LOCK();
      *(int *)(_DAT_14abbcfa0 + 2) = (int)_DAT_14abbcfa0[2] + -1;
      UNLOCK();
      uVar9 = *puVar1;
      do {
        *(uint *)(plVar6[5] + (ulonglong)(uVar11 & 0x1ffff) * 4) =
             (uint)uVar9 & 0x1ffff | uVar11 & 0xfffe0000;
        LOCK();
        uVar10 = plVar6[4];
        bVar15 = uVar9 == uVar10;
        if (bVar15) {
          plVar6[4] = (uVar9 & 0xffffffff00000000) + (ulonglong)(uVar11 & 0x1ffff) + 0x100000000;
          uVar10 = uVar9;
        }
        UNLOCK();
        uVar9 = uVar10;
      } while (!bVar15);
      if (plVar6[3] != 0) {
        FUN_140189080(plVar6,lVar3);
      }
    }
    *(longlong *)(param_1 + 0x310) = lVar12;
    cVar7 = FUN_140171d10(param_1,*(undefined8 *)(param_1 + 0x410));
    *(byte *)(param_1 + 0x482) = *(byte *)(param_1 + 0x482) & 0xfd | cVar7 * '\x02';
    if (cVar7 != '\0') {
      FUN_140171450(param_1);
      FUN_140171610(param_1);
    }
    FUN_1401714e0(param_1);
    *(byte *)(param_1 + 0x482) = *(byte *)(param_1 + 0x482) & 0xfe;
    return;
  }
LAB_140171422:
  pcVar5 = (code *)swi(3);
  (*pcVar5)();
  return;
}

