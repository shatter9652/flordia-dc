// Recovered from game_scarlett_master.exe (GTA VI, Xbox Series X, PE32+ x64)
// Address: 1400f8880  size: 467 bytes
// Name:    FUN_1400f8880
// Subsystem: core
//
// Referenced strings (0 in this body, 0 including direct callees):
// Callees: FUN_140006180, FUN_140323580
//
// Generated decompilation. Formatting follows MiscRef/GTAVSRC conventions;
// identifiers are recovered, not original. See ../../../README.md.

#include "gta6decomp/rage_types.h"


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

longlong FUN_1400f8880(longlong param_1,longlong param_2,undefined1 *param_3)

{
  uint *puVar1;
  ulonglong *puVar2;
  longlong lVar3;
  char cVar4;
  uint uVar5;
  uint uVar6;
  ulonglong uVar7;
  ulonglong uVar8;
  longlong lVar9;
  uint uVar10;
  uint *puVar11;
  longlong lVar12;
  bool bVar13;
  ulonglong uStack_50;
  undefined1 *puStack_48;
  
  puVar1 = (uint *)(param_1 + 0x10);
  puVar2 = (ulonglong *)(param_1 + 0x18);
  uVar6 = *(uint *)(param_1 + 0x10);
  puStack_48 = param_3;
LAB_1400f88bf:
  do {
    uVar5 = uVar6;
    if ((uVar5 & 0x1ff0000) != 0) {
      LOCK();
      uVar6 = *puVar1;
      bVar13 = uVar5 == uVar6;
      if (bVar13) {
        *puVar1 = uVar5 + 0x100;
        uVar6 = uVar5;
      }
      UNLOCK();
      if (bVar13) {
        uVar10 = (uint)(*puVar2 >> 7) & 0xffffff;
        uVar8 = *puVar2;
        if ((*puVar2 >> 7 & 0xffffff) != 0) {
          do {
            if ((longlong)uVar8 < 0x100000000) {
              uVar7 = *puVar2;
            }
            else {
              LOCK();
              uVar7 = *puVar2;
              if (uVar8 == uVar7) {
                *puVar2 = uVar8 - 0x100000000;
                uVar7 = uVar8;
              }
              UNLOCK();
              uVar6 = uVar5;
              if (uVar8 == uVar7) goto LAB_1400f88bf;
            }
            uVar10 = uVar10 - 1;
            uVar8 = uVar7;
          } while (uVar10 != 0);
        }
        uVar8 = *puVar2;
        do {
          while (uStack_50 = uVar8, 0xffffffff < (longlong)uStack_50) {
            LOCK();
            uVar8 = *puVar2;
            if (uStack_50 == uVar8) {
              *puVar2 = uStack_50 - 0x100000000;
              uVar8 = uStack_50;
            }
            UNLOCK();
            uVar6 = uVar5;
            if (uStack_50 == uVar8) goto LAB_1400f88bf;
          }
          cVar4 = FUN_140006180(puVar2,1,&uStack_50);
          uVar6 = uVar5;
          uVar8 = uStack_50;
        } while (cVar4 == '\0');
      }
      goto LAB_1400f88bf;
    }
    LOCK();
    uVar6 = *puVar1;
    bVar13 = uVar5 == uVar6;
    if (bVar13) {
      *puVar1 = uVar5 + 1;
      uVar6 = uVar5;
    }
    UNLOCK();
  } while (!bVar13);
  *puStack_48 = 0;
  uVar8 = (ulonglong)*(uint *)(param_1 + 4);
  lVar3 = *(longlong *)(param_1 + 8);
  lVar9 = 0;
  puVar11 = (uint *)(lVar3 + -0xc + uVar8 * 0xc);
  do {
    if ((int)uVar8 < 1) goto LAB_1400f89fb;
    uVar6 = *puVar11;
    if (uVar6 == 0x1ffff) {
LAB_1400f89ca:
      lVar12 = 0;
    }
    else {
      uVar5 = *(uint *)(_DAT_14abb6918[5] + (ulonglong)(uVar6 & 0x1ffff) * 4);
      if (((~uVar5 & *(uint *)(_DAT_14abb6918 + 6)) != 0) ||
         ((uVar5 & 0x7fe0000) != (uVar6 & 0xfffe0000))) goto LAB_1400f89ca;
      lVar12 = (ulonglong)((uVar6 & 0x1ffff) * (int)_DAT_14abb6918[1]) + *_DAT_14abb6918;
    }
    puVar11 = puVar11 + -3;
    uVar8 = uVar8 - 1;
  } while (lVar12 != param_2);
  bVar13 = *(int *)(lVar3 + 8 + uVar8 * 0xc) != 0x1ffff;
  *puStack_48 = bVar13;
  if ((bVar13) || (uVar6 = *(uint *)(lVar3 + 4 + uVar8 * 0xc), uVar6 == 0x1ffff)) {
    lVar9 = 0;
  }
  else {
    lVar9 = 0;
    uVar5 = *(uint *)(_DAT_1499fd0a0[5] + (ulonglong)(uVar6 & 0x1ffff) * 4);
    if (((uVar6 ^ uVar5) < 0x20000) &&
       ((uVar5 & *(uint *)(_DAT_1499fd0a0 + 6)) == *(uint *)(_DAT_1499fd0a0 + 6))) {
      lVar9 = (ulonglong)((uVar6 & 0x1ffff) * (int)_DAT_1499fd0a0[1]) + *_DAT_1499fd0a0;
    }
  }
LAB_1400f89fb:
  FUN_140323580(puVar1);
  return lVar9;
}

