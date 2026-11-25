// Recovered from game_scarlett_master.exe (GTA VI, Xbox Series X, PE32+ x64)
// Address: 140077970  size: 590 bytes
// Name:    FUN_140077970
// Subsystem: core
//
// Referenced strings (0 in this body, 0 including direct callees):
// Callees: FUN_140465670, FUN_140006180
//
// Generated decompilation. Formatting follows MiscRef/GTAVSRC conventions;
// identifiers are recovered, not original. See ../../../README.md.

#include "gta6decomp/rage_types.h"


void FUN_140077970(uint *param_1,int param_2,char param_3)

{
  ulonglong *puVar1;
  undefined4 uVar2;
  undefined4 *puVar3;
  char cVar4;
  int iVar5;
  uint uVar6;
  ulonglong uVar7;
  longlong lVar8;
  uint uVar9;
  ulonglong uVar10;
  uint *puVar11;
  uint uVar12;
  bool bVar13;
  bool bVar14;
  ulonglong uStack_48;
  longlong lVar15;
  
  puVar1 = (ulonglong *)(param_1 + 2);
  uVar12 = *param_1;
LAB_1400779a7:
  do {
    uVar6 = uVar12;
    if ((uVar6 & 0x1ff0000) != 0) {
      LOCK();
      uVar12 = *param_1;
      bVar13 = uVar6 == uVar12;
      if (bVar13) {
        *param_1 = uVar6 + 0x100;
        uVar12 = uVar6;
      }
      UNLOCK();
      if (bVar13) {
        uVar9 = (uint)(*puVar1 >> 7) & 0xffffff;
        uVar10 = *puVar1;
        if ((*puVar1 >> 7 & 0xffffff) != 0) {
          do {
            if ((longlong)uVar10 < 0x100000000) {
              uVar7 = *puVar1;
            }
            else {
              LOCK();
              uVar7 = *puVar1;
              if (uVar10 == uVar7) {
                *puVar1 = uVar10 - 0x100000000;
                uVar7 = uVar10;
              }
              UNLOCK();
              uVar12 = uVar6;
              if (uVar10 == uVar7) goto LAB_1400779a7;
            }
            uVar9 = uVar9 - 1;
            uVar10 = uVar7;
          } while (uVar9 != 0);
        }
        uVar10 = *puVar1;
        do {
          while (uStack_48 = uVar10, (longlong)uStack_48 < 0x100000000) {
            cVar4 = FUN_140006180(puVar1,1,&uStack_48);
            uVar12 = uVar6;
            uVar10 = uStack_48;
            if (cVar4 != '\0') goto LAB_1400779a7;
          }
          LOCK();
          uVar10 = *puVar1;
          if (uStack_48 == uVar10) {
            *puVar1 = uStack_48 - 0x100000000;
            uVar10 = uStack_48;
          }
          UNLOCK();
          uVar12 = uVar6;
        } while (uStack_48 != uVar10);
      }
      goto LAB_1400779a7;
    }
    LOCK();
    uVar12 = *param_1;
    bVar13 = uVar6 == uVar12;
    if (bVar13) {
      *param_1 = uVar6 + 1;
      uVar12 = uVar6;
    }
    UNLOCK();
  } while (!bVar13);
  if (((-1 < param_2) && (iVar5 = func_0x000140577ef0(param_2), iVar5 == 3)) &&
     ((ulonglong)param_1[7] != 0)) {
    uVar10 = 0;
    do {
      if (**(int **)(*(longlong *)(param_1 + 8) + uVar10 * 8) == param_2) {
        puVar11 = param_1 + 0x2c;
        puVar1 = (ulonglong *)(param_1 + 0x30);
        puVar3 = *(undefined4 **)(*(longlong *)(param_1 + 8) + (uVar10 & 0xffffffff) * 8);
        uVar12 = param_1[0x2c];
        goto LAB_140077aac;
      }
      uVar10 = uVar10 + 1;
    } while (param_1[7] != uVar10);
  }
  goto LAB_140077ba6;
  while( true ) {
    LOCK();
    uVar12 = *puVar11;
    bVar13 = uVar6 == uVar12;
    if (bVar13) {
      *puVar11 = uVar6 | 0x1000000;
      uVar12 = uVar6;
    }
    UNLOCK();
    if (bVar13) break;
LAB_140077aac:
    uVar6 = uVar12;
    if ((uVar6 & 0x10000ff) != 0) {
      LOCK();
      uVar12 = *puVar11;
      bVar13 = uVar6 == uVar12;
      if (bVar13) {
        *puVar11 = uVar6 + 0x10000;
        uVar12 = uVar6;
      }
      UNLOCK();
      if (bVar13) {
        uVar9 = (uint)(*puVar1 >> 7) & 0xffffff;
        uVar10 = *puVar1;
        if ((*puVar1 >> 7 & 0xffffff) != 0) {
          do {
            if ((longlong)uVar10 < 0x100000000) {
              uVar7 = *puVar1;
            }
            else {
              LOCK();
              uVar7 = *puVar1;
              if (uVar10 == uVar7) {
                *puVar1 = uVar10 - 0x100000000;
                uVar7 = uVar10;
              }
              UNLOCK();
              uVar12 = uVar6;
              if (uVar10 == uVar7) goto LAB_140077aac;
            }
            uVar9 = uVar9 - 1;
            uVar10 = uVar7;
          } while (uVar9 != 0);
        }
        uVar10 = *puVar1;
        do {
          while (uStack_48 = uVar10, (longlong)uStack_48 < 0x100000000) {
            cVar4 = FUN_140006180(puVar1,1,&uStack_48);
            uVar12 = uVar6;
            uVar10 = uStack_48;
            if (cVar4 != '\0') goto LAB_140077aac;
          }
          LOCK();
          uVar10 = *puVar1;
          if (uStack_48 == uVar10) {
            *puVar1 = uStack_48 - 0x100000000;
            uVar10 = uStack_48;
          }
          UNLOCK();
          uVar12 = uVar6;
        } while (uStack_48 != uVar10);
      }
      goto LAB_140077aac;
    }
  }
  if ((*(ushort *)((longlong)puVar3 + 0x5c2) & 8) == 0) {
    uVar12 = param_1[0x33];
    if (uVar12 != param_1[0x32]) {
      *(ushort *)((longlong)puVar3 + 0x5c2) = *(ushort *)((longlong)puVar3 + 0x5c2) | 8;
      uVar2 = *puVar3;
      param_1[0x33] = uVar12 + 1;
      *(undefined4 *)(*(longlong *)(param_1 + 0x34) + (ulonglong)uVar12 * 4) = uVar2;
    }
  }
  if (param_3 != '\0') {
    *(undefined8 *)(puVar3 + 0x17c) = 0;
  }
  FUN_140465670(puVar11);
LAB_140077ba6:
  LOCK();
  uVar12 = *param_1;
  *param_1 = *param_1 - 1;
  UNLOCK();
  uVar12 = uVar12 - 1;
  if ((char)uVar12 == '\0') {
    if ((uVar12 & 0xff0000) == 0) {
      if ((uVar12 & 0xff00) != 0) {
        uVar12 = *param_1;
        do {
          LOCK();
          uVar6 = *param_1;
          bVar13 = uVar12 == uVar6;
          if (bVar13) {
            *param_1 = uVar12 & 0xffff00ff;
            uVar6 = uVar12;
          }
          uVar12 = uVar6;
          UNLOCK();
        } while (!bVar13);
        uVar12 = uVar12 >> 8 & 0xff;
        if (uVar12 != 0) {
          puVar11 = param_1 + 2;
          lVar15 = *(longlong *)(param_1 + 2);
          do {
            while (-1 < lVar15) {
              LOCK();
              lVar8 = *(longlong *)puVar11;
              if (lVar15 == lVar8) {
                *(ulonglong *)puVar11 = lVar15 + ((ulonglong)uVar12 << 0x20);
                lVar8 = lVar15;
              }
              UNLOCK();
              bVar13 = lVar15 == lVar8;
              lVar15 = lVar8;
              if (bVar13) {
                return;
              }
            }
            cVar4 = FUN_1400062d0(puVar11,uVar12,&stack0xffffffffffffffc8);
          } while (cVar4 == '\0');
        }
      }
    }
    else {
      puVar11 = param_1 + 4;
      do {
        if ((uVar12 & 0xff0000) == 0) {
          return;
        }
        LOCK();
        uVar6 = *param_1;
        bVar13 = uVar12 == uVar6;
        if (bVar13) {
          *param_1 = uVar12 - 0x10000;
          uVar6 = uVar12;
        }
        UNLOCK();
        if (bVar13) {
          lVar15 = *(longlong *)puVar11;
          do {
            while (lVar15 < 0) {
              cVar4 = FUN_1400062d0(puVar11,1,&stack0xffffffffffffffc8);
              uVar6 = uVar12;
              if (cVar4 != '\0') goto code_r0x00014032361d;
            }
            LOCK();
            lVar8 = *(longlong *)puVar11;
            if (lVar15 == lVar8) {
              *(longlong *)puVar11 = lVar15 + 0x100000000;
              lVar8 = lVar15;
            }
            UNLOCK();
            bVar14 = lVar15 != lVar8;
            uVar6 = uVar12;
            lVar15 = lVar8;
          } while (bVar14);
        }
code_r0x00014032361d:
        uVar12 = uVar6;
      } while (!bVar13);
    }
  }
  return;
}

