// Recovered from game_scarlett_master.exe (GTA VI, Xbox Series X, PE32+ x64)
// Address: 140151740  size: 41 bytes
// Name:    FUN_140151740
// Subsystem: core
//
// Referenced strings (0 in this body, 0 including direct callees):
// Callees: FUN_14501d2b0
//
// Generated decompilation. Formatting follows MiscRef/GTAVSRC conventions;
// identifiers are recovered, not original. See ../../../README.md.

#include "gta6decomp/rage_types.h"


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_140151740(longlong param_1)

{
  ulonglong *puVar1;
  char cVar2;
  uint uVar3;
  ulonglong uVar4;
  ulonglong uVar5;
  longlong lVar6;
  longlong lVar7;
  uint uVar8;
  longlong lVar9;
  ulonglong uVar10;
  longlong *plVar11;
  uint uVar12;
  bool bVar13;
  bool bVar14;
  ulonglong uStack_40;
  longlong lVar15;
  
  uVar10 = *(ulonglong *)(param_1 + 8) & 0xfffffffffffffff0;
  FUN_14501d2b0(uVar10);
  lVar15 = _DAT_14ab56e30;
  puVar1 = (ulonglong *)(_DAT_14ab56e30 + 0x38);
  uVar12 = *(uint *)(_DAT_14ab56e30 + 0x28);
code_r0x0001401517e5:
  do {
    uVar3 = uVar12;
    if ((uVar3 & 0x10000ff) != 0) {
      LOCK();
      uVar12 = *(uint *)(lVar15 + 0x28);
      bVar13 = uVar3 == uVar12;
      if (bVar13) {
        *(uint *)(lVar15 + 0x28) = uVar3 + 0x10000;
        uVar12 = uVar3;
      }
      UNLOCK();
      if (bVar13) {
        uVar8 = (uint)(*puVar1 >> 7) & 0xffffff;
        uVar5 = *puVar1;
        if ((*puVar1 >> 7 & 0xffffff) != 0) {
          do {
            if ((longlong)uVar5 < 0x100000000) {
              uVar4 = *puVar1;
            }
            else {
              LOCK();
              uVar4 = *puVar1;
              if (uVar5 == uVar4) {
                *puVar1 = uVar5 - 0x100000000;
                uVar4 = uVar5;
              }
              UNLOCK();
              uVar12 = uVar3;
              if (uVar5 == uVar4) goto code_r0x0001401517e5;
            }
            uVar8 = uVar8 - 1;
            uVar5 = uVar4;
          } while (uVar8 != 0);
        }
        uVar5 = *puVar1;
        do {
          while (uStack_40 = uVar5, (longlong)uStack_40 < 0x100000000) {
            cVar2 = FUN_140006180(puVar1,1,&uStack_40);
            uVar12 = uVar3;
            uVar5 = uStack_40;
            if (cVar2 != '\0') goto code_r0x0001401517e5;
          }
          LOCK();
          uVar5 = *puVar1;
          if (uStack_40 == uVar5) {
            *puVar1 = uStack_40 - 0x100000000;
            uVar5 = uStack_40;
          }
          UNLOCK();
          uVar12 = uVar3;
        } while (uStack_40 != uVar5);
      }
      goto code_r0x0001401517e5;
    }
    LOCK();
    uVar12 = *(uint *)(lVar15 + 0x28);
    bVar13 = uVar3 == uVar12;
    if (bVar13) {
      *(uint *)(lVar15 + 0x28) = uVar3 | 0x1000000;
      uVar12 = uVar3;
    }
    UNLOCK();
  } while (!bVar13);
  func_0x000144116a50(lVar15 + 0xfb8,*(undefined4 *)(uVar10 + 0x9c));
  if (*(char *)(uVar10 + 0x30) == '\x03') {
    lVar6 = 0x10f0;
    lVar7 = 0x10d0;
    lVar9 = 0x10b0;
  }
  else {
    if (*(char *)(uVar10 + 0x30) != '\x02') goto code_r0x0001401518fc;
    lVar6 = 0x1100;
    lVar7 = 0x10e0;
    lVar9 = 0x10c0;
  }
  uVar12 = *(uint *)(uVar10 + 0x9c) & 0x1ffff;
  *(undefined1 *)(*(longlong *)(lVar15 + lVar9) + (ulonglong)uVar12) = 0;
  uVar10 = (ulonglong)(uVar12 << 2);
  *(undefined4 *)(*(longlong *)(lVar15 + lVar7) + uVar10) = 0x3f800000;
  *(undefined4 *)(*(longlong *)(lVar15 + lVar6) + uVar10) = 0x3f800000;
code_r0x0001401518fc:
  uVar12 = *(uint *)(lVar15 + 0x28);
  do {
    LOCK();
    uVar3 = *(uint *)(lVar15 + 0x28);
    bVar13 = uVar12 == uVar3;
    if (bVar13) {
      *(uint *)(lVar15 + 0x28) = uVar12 & 0xfeffffff;
      uVar3 = uVar12;
    }
    uVar12 = uVar3;
    UNLOCK();
  } while (!bVar13);
  if ((uVar12 & 0xff0000) == 0) {
    if ((uVar12 & 0xff00) != 0) {
      uVar12 = *(uint *)(lVar15 + 0x28);
      do {
        LOCK();
        uVar3 = *(uint *)(lVar15 + 0x28);
        bVar13 = uVar12 == uVar3;
        if (bVar13) {
          *(uint *)(lVar15 + 0x28) = uVar12 & 0xffff00ff;
          uVar3 = uVar12;
        }
        uVar12 = uVar3;
        UNLOCK();
      } while (!bVar13);
      uVar12 = uVar12 >> 8 & 0xff;
      if (uVar12 != 0) {
        plVar11 = (longlong *)(lVar15 + 0x30);
        lVar15 = *(longlong *)(lVar15 + 0x30);
        do {
          while (-1 < lVar15) {
            LOCK();
            lVar6 = *plVar11;
            if (lVar15 == lVar6) {
              *plVar11 = lVar15 + ((ulonglong)uVar12 << 0x20);
              lVar6 = lVar15;
            }
            UNLOCK();
            bVar13 = lVar15 == lVar6;
            lVar15 = lVar6;
            if (bVar13) {
              return;
            }
          }
          cVar2 = FUN_1400062d0(plVar11,uVar12,&stack0xffffffffffffffc8);
        } while (cVar2 == '\0');
      }
    }
  }
  else {
    uVar12 = uVar12 & 0xfeffffff;
    plVar11 = (longlong *)(lVar15 + 0x38);
    do {
      if ((uVar12 & 0xff0000) == 0) {
        return;
      }
      LOCK();
      uVar3 = *(uint *)(lVar15 + 0x28);
      bVar13 = uVar12 == uVar3;
      if (bVar13) {
        *(uint *)(lVar15 + 0x28) = uVar12 - 0x10000;
        uVar3 = uVar12;
      }
      UNLOCK();
      if (bVar13) {
        lVar6 = *plVar11;
        do {
          while (lVar6 < 0) {
            cVar2 = FUN_1400062d0(plVar11,1,&stack0xffffffffffffffc8);
            uVar3 = uVar12;
            if (cVar2 != '\0') goto code_r0x0001441169c1;
          }
          LOCK();
          lVar7 = *plVar11;
          if (lVar6 == lVar7) {
            *plVar11 = lVar6 + 0x100000000;
            lVar7 = lVar6;
          }
          UNLOCK();
          bVar14 = lVar6 != lVar7;
          uVar3 = uVar12;
          lVar6 = lVar7;
        } while (bVar14);
      }
code_r0x0001441169c1:
      uVar12 = uVar3;
    } while (!bVar13);
  }
  return;
}

