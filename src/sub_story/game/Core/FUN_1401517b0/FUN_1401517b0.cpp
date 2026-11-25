// Recovered from game_scarlett_master.exe (GTA VI, Xbox Series X, PE32+ x64)
// Address: 1401517b0  size: 355 bytes
// Name:    FUN_1401517b0
// Subsystem: core
//
// Referenced strings (0 in this body, 0 including direct callees):
// Callees: FUN_140006180
//
// Generated decompilation. Formatting follows MiscRef/GTAVSRC conventions;
// identifiers are recovered, not original. See ../../../README.md.

#include "gta6decomp/rage_types.h"


void FUN_1401517b0(longlong param_1,longlong param_2)

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
  longlong *plVar10;
  uint uVar11;
  bool bVar12;
  bool bVar13;
  ulonglong uStack_40;
  
  puVar1 = (ulonglong *)(param_1 + 0x38);
  uVar11 = *(uint *)(param_1 + 0x28);
LAB_1401517e5:
  do {
    uVar3 = uVar11;
    if ((uVar3 & 0x10000ff) != 0) {
      LOCK();
      uVar11 = *(uint *)(param_1 + 0x28);
      bVar12 = uVar3 == uVar11;
      if (bVar12) {
        *(uint *)(param_1 + 0x28) = uVar3 + 0x10000;
        uVar11 = uVar3;
      }
      UNLOCK();
      if (bVar12) {
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
              uVar11 = uVar3;
              if (uVar5 == uVar4) goto LAB_1401517e5;
            }
            uVar8 = uVar8 - 1;
            uVar5 = uVar4;
          } while (uVar8 != 0);
        }
        uVar5 = *puVar1;
        do {
          while (uStack_40 = uVar5, (longlong)uStack_40 < 0x100000000) {
            cVar2 = FUN_140006180(puVar1,1,&uStack_40);
            uVar11 = uVar3;
            uVar5 = uStack_40;
            if (cVar2 != '\0') goto LAB_1401517e5;
          }
          LOCK();
          uVar5 = *puVar1;
          if (uStack_40 == uVar5) {
            *puVar1 = uStack_40 - 0x100000000;
            uVar5 = uStack_40;
          }
          UNLOCK();
          uVar11 = uVar3;
        } while (uStack_40 != uVar5);
      }
      goto LAB_1401517e5;
    }
    LOCK();
    uVar11 = *(uint *)(param_1 + 0x28);
    bVar12 = uVar3 == uVar11;
    if (bVar12) {
      *(uint *)(param_1 + 0x28) = uVar3 | 0x1000000;
      uVar11 = uVar3;
    }
    UNLOCK();
  } while (!bVar12);
  func_0x000144116a50(param_1 + 0xfb8,*(undefined4 *)(param_2 + 0x9c));
  if (*(char *)(param_2 + 0x30) == '\x03') {
    lVar6 = 0x10f0;
    lVar7 = 0x10d0;
    lVar9 = 0x10b0;
  }
  else {
    if (*(char *)(param_2 + 0x30) != '\x02') goto FUN_144116920;
    lVar6 = 0x1100;
    lVar7 = 0x10e0;
    lVar9 = 0x10c0;
  }
  uVar11 = *(uint *)(param_2 + 0x9c) & 0x1ffff;
  *(undefined1 *)(*(longlong *)(param_1 + lVar9) + (ulonglong)uVar11) = 0;
  uVar5 = (ulonglong)(uVar11 << 2);
  *(undefined4 *)(*(longlong *)(param_1 + lVar7) + uVar5) = 0x3f800000;
  *(undefined4 *)(*(longlong *)(param_1 + lVar6) + uVar5) = 0x3f800000;
FUN_144116920:
  uVar11 = *(uint *)(param_1 + 0x28);
  do {
    LOCK();
    uVar3 = *(uint *)(param_1 + 0x28);
    bVar12 = uVar11 == uVar3;
    if (bVar12) {
      *(uint *)(param_1 + 0x28) = uVar11 & 0xfeffffff;
      uVar3 = uVar11;
    }
    uVar11 = uVar3;
    UNLOCK();
  } while (!bVar12);
  if ((uVar11 & 0xff0000) == 0) {
    if ((uVar11 & 0xff00) != 0) {
      uVar11 = *(uint *)(param_1 + 0x28);
      do {
        LOCK();
        uVar3 = *(uint *)(param_1 + 0x28);
        bVar12 = uVar11 == uVar3;
        if (bVar12) {
          *(uint *)(param_1 + 0x28) = uVar11 & 0xffff00ff;
          uVar3 = uVar11;
        }
        uVar11 = uVar3;
        UNLOCK();
      } while (!bVar12);
      uVar11 = uVar11 >> 8 & 0xff;
      if (uVar11 != 0) {
        plVar10 = (longlong *)(param_1 + 0x30);
        lVar6 = *(longlong *)(param_1 + 0x30);
        do {
          while (-1 < lVar6) {
            LOCK();
            lVar7 = *plVar10;
            if (lVar6 == lVar7) {
              *plVar10 = lVar6 + ((ulonglong)uVar11 << 0x20);
              lVar7 = lVar6;
            }
            UNLOCK();
            bVar12 = lVar6 == lVar7;
            lVar6 = lVar7;
            if (bVar12) {
              return;
            }
          }
          cVar2 = FUN_1400062d0(plVar10,uVar11,&stack0xffffffffffffffc8);
        } while (cVar2 == '\0');
      }
    }
  }
  else {
    uVar11 = uVar11 & 0xfeffffff;
    plVar10 = (longlong *)(param_1 + 0x38);
    do {
      if ((uVar11 & 0xff0000) == 0) {
        return;
      }
      LOCK();
      uVar3 = *(uint *)(param_1 + 0x28);
      bVar12 = uVar11 == uVar3;
      if (bVar12) {
        *(uint *)(param_1 + 0x28) = uVar11 - 0x10000;
        uVar3 = uVar11;
      }
      UNLOCK();
      if (bVar12) {
        lVar6 = *plVar10;
        do {
          while (lVar6 < 0) {
            cVar2 = FUN_1400062d0(plVar10,1,&stack0xffffffffffffffc8);
            uVar3 = uVar11;
            if (cVar2 != '\0') goto code_r0x0001441169c1;
          }
          LOCK();
          lVar7 = *plVar10;
          if (lVar6 == lVar7) {
            *plVar10 = lVar6 + 0x100000000;
            lVar7 = lVar6;
          }
          UNLOCK();
          bVar13 = lVar6 != lVar7;
          uVar3 = uVar11;
          lVar6 = lVar7;
        } while (bVar13);
      }
code_r0x0001441169c1:
      uVar11 = uVar3;
    } while (!bVar12);
  }
  return;
}

