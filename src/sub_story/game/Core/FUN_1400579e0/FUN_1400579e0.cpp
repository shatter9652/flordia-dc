// Recovered from game_scarlett_master.exe (GTA VI, Xbox Series X, PE32+ x64)
// Address: 1400579e0  size: 84 bytes
// Name:    FUN_1400579e0
// Subsystem: core
//
// Referenced strings (0 in this body, 0 including direct callees):
// Callees: FUN_140047dc0
//
// Generated decompilation. Formatting follows MiscRef/GTAVSRC conventions;
// identifiers are recovered, not original. See ../../../README.md.

#include "gta6decomp/rage_types.h"


/* WARNING: Removing unreachable block (ram,0x000141a9b662) */
/* WARNING: Removing unreachable block (ram,0x000141a9b667) */
/* WARNING: Removing unreachable block (ram,0x000141a9b676) */
/* WARNING: Removing unreachable block (ram,0x000141a9b689) */
/* WARNING: Removing unreachable block (ram,0x000141a9b695) */
/* WARNING: Removing unreachable block (ram,0x000141a9b6dd) */
/* WARNING: Removing unreachable block (ram,0x000141a9b74e) */
/* WARNING: Removing unreachable block (ram,0x000141a9b75a) */
/* WARNING: Removing unreachable block (ram,0x000141a9b761) */
/* WARNING: Removing unreachable block (ram,0x000141a9b6f3) */
/* WARNING: Removing unreachable block (ram,0x000141a9b702) */
/* WARNING: Removing unreachable block (ram,0x000141a9b728) */
/* WARNING: Removing unreachable block (ram,0x000141a9b734) */
/* WARNING: Removing unreachable block (ram,0x000141a9b73b) */
/* WARNING: Removing unreachable block (ram,0x000141a9b70a) */
/* WARNING: Removing unreachable block (ram,0x000141a9b71d) */
/* WARNING: Removing unreachable block (ram,0x000141a9b723) */
/* WARNING: Removing unreachable block (ram,0x000141a9b744) */
/* WARNING: Removing unreachable block (ram,0x000141a9b6a0) */
/* WARNING: Removing unreachable block (ram,0x000141a9b6b3) */
/* WARNING: Removing unreachable block (ram,0x000141a9b91c) */
/* WARNING: Removing unreachable block (ram,0x000141a9b924) */
/* WARNING: Removing unreachable block (ram,0x000141a9b947) */
/* WARNING: Removing unreachable block (ram,0x000141a9b950) */
/* WARNING: Removing unreachable block (ram,0x000141a9b9e1) */
/* WARNING: Removing unreachable block (ram,0x000141a9bac7) */
/* WARNING: Removing unreachable block (ram,0x000141a9bad4) */
/* WARNING: Removing unreachable block (ram,0x000141a9bb12) */
/* WARNING: Removing unreachable block (ram,0x000141a9bb02) */
/* WARNING: Removing unreachable block (ram,0x000141a9bb10) */
/* WARNING: Removing unreachable block (ram,0x000141a9ba03) */
/* WARNING: Removing unreachable block (ram,0x000141a9ba10) */
/* WARNING: Removing unreachable block (ram,0x000141a9ba41) */
/* WARNING: Removing unreachable block (ram,0x000141a9ba49) */
/* WARNING: Removing unreachable block (ram,0x000141a9ba4e) */
/* WARNING: Removing unreachable block (ram,0x000141a9ba59) */
/* WARNING: Removing unreachable block (ram,0x000141a9ba62) */
/* WARNING: Removing unreachable block (ram,0x000141a9ba71) */
/* WARNING: Removing unreachable block (ram,0x000141a9bb46) */
/* WARNING: Removing unreachable block (ram,0x000141a9bb5e) */
/* WARNING: Removing unreachable block (ram,0x000141a9bc10) */
/* WARNING: Removing unreachable block (ram,0x000141a9bc1c) */
/* WARNING: Removing unreachable block (ram,0x000141a9bc45) */
/* WARNING: Removing unreachable block (ram,0x000141a9bb3f) */
/* WARNING: Removing unreachable block (ram,0x000141a9ba86) */
/* WARNING: Removing unreachable block (ram,0x000141a9ba88) */
/* WARNING: Removing unreachable block (ram,0x000141a9b6cc) */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined8 FUN_1400579e0(longlong *param_1,undefined4 param_2)

{
  longlong lVar1;
  undefined8 *puVar2;
  char cVar3;
  longlong lVar4;
  ulonglong uVar5;
  undefined8 *puVar6;
  longlong lVar7;
  undefined8 uVar8;
  ulonglong uVar9;
  undefined8 *puVar10;
  uint uVar11;
  ulonglong uVar12;
  uint uVar13;
  uint uVar14;
  longlong unaff_GS_OFFSET;
  bool bVar15;
  undefined8 *puStack_50;
  char cStack_48;
  
  if ((param_1 == (longlong *)0x0) || (lVar4 = (**(code **)(*param_1 + 0xa8))(), lVar4 == 0)) {
    return 0;
  }
  cVar3 = FUN_140047dc0(*(undefined8 *)(lVar4 + 0x18),param_2);
  lVar4 = lRam000000014ab4e8e8;
  if (cVar3 == '\0') {
    return 0;
  }
  if (*(char *)(**(longlong **)(unaff_GS_OFFSET + 0x58) + 0x1440) == '\x01') {
    lVar7 = *(longlong *)(**(longlong **)(unaff_GS_OFFSET + 0x58) + 0x1438);
  }
  else {
    lVar1 = **(longlong **)(unaff_GS_OFFSET + 0x58);
    *(undefined1 *)(lVar1 + 0x1440) = 1;
    lVar7 = FUN_1400063f0();
    *(longlong *)(lVar1 + 0x1438) = lVar7;
  }
  if (lVar7 != lVar4) {
    uVar14 = uRam000000014ab4e8d0;
code_r0x0001455402f5:
    do {
      uVar13 = uVar14;
      if ((uVar13 & 0x1ff0000) != 0) {
        LOCK();
        bVar15 = uVar13 == uRam000000014ab4e8d0;
        uVar11 = uVar13 + 0x100;
        uVar14 = uVar13;
        if (!bVar15) {
          uVar11 = uRam000000014ab4e8d0;
          uVar14 = uRam000000014ab4e8d0;
        }
        uRam000000014ab4e8d0 = uVar11;
        UNLOCK();
        if (bVar15) {
          uVar11 = (uint)((ulonglong)puRam000000014ab4e8d8 >> 7) & 0xffffff;
          puVar10 = puRam000000014ab4e8d8;
          puVar6 = puRam000000014ab4e8d8;
          if (((ulonglong)puRam000000014ab4e8d8 >> 7 & 0xffffff) != 0) {
            do {
              puVar6 = puRam000000014ab4e8d8;
              if (0xffffffff < (longlong)puVar10) {
                LOCK();
                puVar6 = puVar10;
                puVar2 = puVar10 + -0x20000000;
                if (puVar10 != puRam000000014ab4e8d8) {
                  puVar6 = puRam000000014ab4e8d8;
                  puVar2 = puRam000000014ab4e8d8;
                }
                puRam000000014ab4e8d8 = puVar2;
                UNLOCK();
                uVar14 = uVar13;
                if (puVar10 == puVar6) goto code_r0x0001455402f5;
              }
              uVar11 = uVar11 - 1;
              puVar10 = puVar6;
              puVar6 = puRam000000014ab4e8d8;
            } while (uVar11 != 0);
          }
          do {
            while (puStack_50 = puVar6, (longlong)puStack_50 < 0x100000000) {
              cVar3 = FUN_140006180(0x14ab4e8d8,1,&puStack_50);
              puVar6 = puStack_50;
              uVar14 = uVar13;
              if (cVar3 != '\0') goto code_r0x0001455402f5;
            }
            LOCK();
            puVar6 = puStack_50;
            puVar10 = puStack_50 + -0x20000000;
            if (puStack_50 != puRam000000014ab4e8d8) {
              puVar6 = puRam000000014ab4e8d8;
              puVar10 = puRam000000014ab4e8d8;
            }
            puRam000000014ab4e8d8 = puVar10;
            UNLOCK();
            uVar14 = uVar13;
          } while (puStack_50 != puVar6);
        }
        goto code_r0x0001455402f5;
      }
      LOCK();
      bVar15 = uVar13 != uRam000000014ab4e8d0;
      uVar14 = uVar13 + 1;
      if (bVar15) {
        uVar14 = uRam000000014ab4e8d0;
        uVar13 = uRam000000014ab4e8d0;
      }
      uRam000000014ab4e8d0 = uVar14;
      UNLOCK();
      uVar14 = uVar13;
    } while (bVar15);
  }
  lVar4 = lRam000000014ab4e8e8;
  if (_DAT_14ab4e8f8 != 0) {
    uVar5 = 0;
    uVar12 = _DAT_14ab4e8f8;
    do {
      if ((*(longlong **)(uVar12 + 0x20) < param_1) ||
         ((*(longlong **)(uVar12 + 0x20) <= param_1 && (*(int *)(uVar12 + 0x28) < -1)))) {
        uVar12 = *(ulonglong *)(uVar12 + 8) & 0xfffffffffffffffe;
      }
      else {
        uVar5 = uVar12;
        uVar12 = *(ulonglong *)(uVar12 + 0x10);
      }
    } while (uVar12 != 0);
    if ((uVar5 != 0) && (*(longlong **)(uVar5 + 0x20) <= param_1)) {
      uVar12 = 0;
      if (*(int *)(uVar5 + 0x28) < 0) {
        uVar12 = uVar5;
      }
      if (*(longlong **)(uVar5 + 0x20) < param_1) {
        uVar12 = uVar5;
      }
      goto code_r0x0001455403b6;
    }
  }
  uVar12 = 0;
code_r0x0001455403b6:
  if (*(char *)(**(longlong **)(unaff_GS_OFFSET + 0x58) + 0x1440) == '\x01') {
    lVar7 = *(longlong *)(**(longlong **)(unaff_GS_OFFSET + 0x58) + 0x1438);
  }
  else {
    lVar1 = **(longlong **)(unaff_GS_OFFSET + 0x58);
    *(undefined1 *)(lVar1 + 0x1440) = 1;
    lVar7 = FUN_1400063f0();
    *(longlong *)(lVar1 + 0x1438) = lVar7;
  }
  if (lVar7 != lVar4) {
    LOCK();
    uVar14 = uRam000000014ab4e8d0 - 1;
    UNLOCK();
    uVar13 = uRam000000014ab4e8d0 - 1;
    uRam000000014ab4e8d0 = uVar14;
    if ((char)uVar13 == '\0') {
      if ((uVar13 & 0xff0000) == 0) {
        if ((uVar13 & 0xff00) != 0) {
          do {
            LOCK();
            bVar15 = uVar14 != uRam000000014ab4e8d0;
            uVar13 = uVar14 & 0xffff00ff;
            if (bVar15) {
              uVar14 = uRam000000014ab4e8d0;
              uVar13 = uRam000000014ab4e8d0;
            }
            uRam000000014ab4e8d0 = uVar13;
            UNLOCK();
          } while (bVar15);
          uVar14 = uVar14 >> 8 & 0xff;
          if (uVar14 != 0) {
            puStack_50 = puRam000000014ab4e8d8;
            puVar6 = puStack_50;
            do {
              while (puStack_50 = puVar6, (longlong)puStack_50 < 0) {
                cVar3 = FUN_1400062d0(0x14ab4e8d8,uVar14,&puStack_50);
                puVar6 = puStack_50;
                if (cVar3 != '\0') goto code_r0x000145540405;
              }
              LOCK();
              puVar6 = puStack_50;
              puVar10 = (undefined8 *)((longlong)puStack_50 + ((ulonglong)uVar14 << 0x20));
              if (puStack_50 != puRam000000014ab4e8d8) {
                puVar6 = puRam000000014ab4e8d8;
                puVar10 = puRam000000014ab4e8d8;
              }
              puRam000000014ab4e8d8 = puVar10;
              UNLOCK();
            } while (puStack_50 != puVar6);
          }
        }
      }
      else {
        do {
          if ((uVar13 & 0xff0000) == 0) break;
          LOCK();
          bVar15 = uVar13 != uRam000000014ab4e8d0;
          uVar14 = uVar13;
          uVar11 = uVar13 - 0x10000;
          if (bVar15) {
            uVar14 = uRam000000014ab4e8d0;
            uVar11 = uRam000000014ab4e8d0;
          }
          uRam000000014ab4e8d0 = uVar11;
          UNLOCK();
          puVar6 = puRam000000014ab4e8e0;
          if (!bVar15) {
            do {
              while (puStack_50 = puVar6, (longlong)puStack_50 < 0) {
                cVar3 = FUN_1400062d0(0x14ab4e8e0,1,&puStack_50);
                uVar14 = uVar13;
                puVar6 = puStack_50;
                if (cVar3 != '\0') goto code_r0x0001455404ba;
              }
              LOCK();
              puVar6 = puStack_50;
              puVar10 = puStack_50 + 0x20000000;
              if (puStack_50 != puRam000000014ab4e8e0) {
                puVar6 = puRam000000014ab4e8e0;
                puVar10 = puRam000000014ab4e8e0;
              }
              puRam000000014ab4e8e0 = puVar10;
              UNLOCK();
              uVar14 = uVar13;
            } while (puStack_50 != puVar6);
          }
code_r0x0001455404ba:
          uVar13 = uVar14;
        } while (bVar15);
      }
    }
  }
code_r0x000145540405:
  if (uVar12 != 0) {
    uVar8 = 1;
    if (((*(byte *)(uVar12 + 0x2e9) & 0x40) == 0) && ((*(byte *)(uVar12 + 0x2e9) & 1) == 0)) {
      func_0x0001450fb340(*(undefined4 *)(uVar12 + 0x270));
      uVar8 = 0;
    }
    return uVar8;
  }
  if ((*(uint *)((longlong)param_1 + 0xb4) & 0x3e) == 0x2e) {
    uVar5 = (ulonglong)((uint)*(ushort *)(param_1 + 0x1a) * (int)plRam000000014a9ec948[1]) +
            *plRam000000014a9ec948;
    if ((~*(uint *)(plRam000000014a9ec948[5] + (ulonglong)*(ushort *)(param_1 + 0x1a) * 4) &
        *(uint *)(plRam000000014a9ec948 + 6)) != 0) {
      uVar5 = 0;
    }
    FUN_141a9b770(&puStack_50,0x14ab4e8d0,1);
    uVar12 = 0;
    if (_DAT_14ab4e8f8 != 0) {
      uVar9 = 0;
      uVar12 = _DAT_14ab4e8f8;
      do {
        if ((*(ulonglong *)(uVar12 + 0x20) < uVar5) ||
           ((*(ulonglong *)(uVar12 + 0x20) <= uVar5 && (*(int *)(uVar12 + 0x28) < -1)))) {
          uVar12 = *(ulonglong *)(uVar12 + 8) & 0xfffffffffffffffe;
        }
        else {
          uVar9 = uVar12;
          uVar12 = *(ulonglong *)(uVar12 + 0x10);
        }
      } while (uVar12 != 0);
      if ((uVar9 == 0) || (uVar5 < *(ulonglong *)(uVar9 + 0x20))) {
        uVar12 = 0;
      }
      else {
        uVar12 = 0;
        if (*(int *)(uVar9 + 0x28) < 0) {
          uVar12 = uVar9;
        }
        if (*(ulonglong *)(uVar9 + 0x20) < uVar5) {
          uVar12 = uVar9;
        }
      }
    }
    if (cStack_48 == '\x01') {
      FUN_1402c59f0(puStack_50);
    }
    if (uVar12 != 0) {
      uVar8 = FUN_141a9bc50(uVar12,param_1,0xffffffff);
      return uVar8;
    }
  }
  return 0;
}

