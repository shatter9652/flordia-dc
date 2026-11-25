// Recovered from game_scarlett_master.exe (GTA VI, Xbox Series X, PE32+ x64)
// Address: 1400c1070  size: 295 bytes
// Name:    FUN_1400c1070
// Subsystem: core
//
// Referenced strings (0 in this body, 0 including direct callees):
// Callees: FUN_140006180, FUN_142d75a60
//
// Generated decompilation. Formatting follows MiscRef/GTAVSRC conventions;
// identifiers are recovered, not original. See ../../../README.md.

#include "gta6decomp/rage_types.h"


void FUN_1400c1070(longlong param_1,int param_2)

{
  uint *puVar1;
  ulonglong *puVar2;
  char cVar3;
  uint uVar4;
  ulonglong uVar5;
  longlong lVar6;
  int *piVar7;
  uint uVar8;
  ulonglong uVar9;
  longlong *plVar10;
  uint uVar11;
  bool bVar12;
  bool bVar13;
  ulonglong uStack_48;
  longlong lVar14;
  
  puVar1 = (uint *)(param_1 + 0x30);
  puVar2 = (ulonglong *)(param_1 + 0x40);
  uVar11 = *(uint *)(param_1 + 0x30);
LAB_1400c10a9:
  do {
    uVar4 = uVar11;
    if ((uVar4 & 0x10000ff) != 0) {
      LOCK();
      uVar11 = *puVar1;
      bVar12 = uVar4 == uVar11;
      if (bVar12) {
        *puVar1 = uVar4 + 0x10000;
        uVar11 = uVar4;
      }
      UNLOCK();
      if (bVar12) {
        uVar8 = (uint)(*puVar2 >> 7) & 0xffffff;
        uVar9 = *puVar2;
        if ((*puVar2 >> 7 & 0xffffff) != 0) {
          do {
            if ((longlong)uVar9 < 0x100000000) {
              uVar5 = *puVar2;
            }
            else {
              LOCK();
              uVar5 = *puVar2;
              if (uVar9 == uVar5) {
                *puVar2 = uVar9 - 0x100000000;
                uVar5 = uVar9;
              }
              UNLOCK();
              uVar11 = uVar4;
              if (uVar9 == uVar5) goto LAB_1400c10a9;
            }
            uVar8 = uVar8 - 1;
            uVar9 = uVar5;
          } while (uVar8 != 0);
        }
        uVar9 = *puVar2;
        do {
          while (uStack_48 = uVar9, (longlong)uStack_48 < 0x100000000) {
            cVar3 = FUN_140006180(puVar2,1,&uStack_48);
            uVar11 = uVar4;
            uVar9 = uStack_48;
            if (cVar3 != '\0') goto LAB_1400c10a9;
          }
          LOCK();
          uVar9 = *puVar2;
          if (uStack_48 == uVar9) {
            *puVar2 = uStack_48 - 0x100000000;
            uVar9 = uStack_48;
          }
          UNLOCK();
          uVar11 = uVar4;
        } while (uStack_48 != uVar9);
      }
      goto LAB_1400c10a9;
    }
    LOCK();
    uVar11 = *puVar1;
    bVar12 = uVar4 == uVar11;
    if (bVar12) {
      *puVar1 = uVar4 | 0x1000000;
      uVar11 = uVar4;
    }
    UNLOCK();
  } while (!bVar12);
  if ((ulonglong)*(uint *)(param_1 + 4) != 0) {
    piVar7 = (int *)(*(longlong *)(param_1 + 8) + 0x820);
    uVar9 = 0;
    do {
      if (*piVar7 == param_2) {
        FUN_142d75a60(param_1);
        break;
      }
      uVar9 = uVar9 + 1;
      piVar7 = piVar7 + 0x214;
    } while (*(uint *)(param_1 + 4) != uVar9);
  }
  uVar11 = *puVar1;
  do {
    LOCK();
    uVar4 = *puVar1;
    bVar12 = uVar11 == uVar4;
    if (bVar12) {
      *puVar1 = uVar11 & 0xfeffffff;
      uVar4 = uVar11;
    }
    uVar11 = uVar4;
    UNLOCK();
  } while (!bVar12);
  if ((uVar11 & 0xff0000) == 0) {
    if ((uVar11 & 0xff00) != 0) {
      uVar11 = *puVar1;
      do {
        LOCK();
        uVar4 = *puVar1;
        bVar12 = uVar11 == uVar4;
        if (bVar12) {
          *puVar1 = uVar11 & 0xffff00ff;
          uVar4 = uVar11;
        }
        uVar11 = uVar4;
        UNLOCK();
      } while (!bVar12);
      uVar11 = uVar11 >> 8 & 0xff;
      if (uVar11 != 0) {
        plVar10 = (longlong *)(param_1 + 0x38);
        lVar14 = *(longlong *)(param_1 + 0x38);
        do {
          while (-1 < lVar14) {
            LOCK();
            lVar6 = *plVar10;
            if (lVar14 == lVar6) {
              *plVar10 = lVar14 + ((ulonglong)uVar11 << 0x20);
              lVar6 = lVar14;
            }
            UNLOCK();
            bVar12 = lVar14 == lVar6;
            lVar14 = lVar6;
            if (bVar12) {
              return;
            }
          }
          cVar3 = FUN_1400062d0(plVar10,uVar11,&stack0xffffffffffffffc8);
        } while (cVar3 == '\0');
      }
    }
  }
  else {
    uVar11 = uVar11 & 0xfeffffff;
    plVar10 = (longlong *)(param_1 + 0x40);
    do {
      if ((uVar11 & 0xff0000) == 0) {
        return;
      }
      LOCK();
      uVar4 = *puVar1;
      bVar12 = uVar11 == uVar4;
      if (bVar12) {
        *puVar1 = uVar11 - 0x10000;
        uVar4 = uVar11;
      }
      UNLOCK();
      if (bVar12) {
        lVar14 = *plVar10;
        do {
          while (lVar14 < 0) {
            cVar3 = FUN_1400062d0(plVar10,1,&stack0xffffffffffffffc8);
            uVar4 = uVar11;
            if (cVar3 != '\0') goto code_r0x00014046570e;
          }
          LOCK();
          lVar6 = *plVar10;
          if (lVar14 == lVar6) {
            *plVar10 = lVar14 + 0x100000000;
            lVar6 = lVar14;
          }
          UNLOCK();
          bVar13 = lVar14 != lVar6;
          uVar4 = uVar11;
          lVar14 = lVar6;
        } while (bVar13);
      }
code_r0x00014046570e:
      uVar11 = uVar4;
    } while (!bVar12);
  }
  return;
}

