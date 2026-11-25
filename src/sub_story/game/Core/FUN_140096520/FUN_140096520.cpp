// Recovered from game_scarlett_master.exe (GTA VI, Xbox Series X, PE32+ x64)
// Address: 140096520  size: 695 bytes
// Name:    FUN_140096520
// Subsystem: core
//
// Referenced strings (0 in this body, 0 including direct callees):
// Callees: FUN_140323580, FUN_1458d61b0, FUN_140006180
//
// Generated decompilation. Formatting follows MiscRef/GTAVSRC conventions;
// identifiers are recovered, not original. See ../../../README.md.

#include "gta6decomp/rage_types.h"


void FUN_140096520(uint *param_1,undefined8 *param_2,longlong param_3,uint *param_4)

{
  ulonglong *puVar1;
  char cVar2;
  uint uVar3;
  ulonglong uVar4;
  longlong lVar5;
  ulonglong uVar6;
  undefined8 *puVar7;
  uint uVar8;
  uint *puVar9;
  int iVar10;
  uint uVar11;
  ulonglong uVar12;
  longlong lVar13;
  bool bVar14;
  bool bVar15;
  ulonglong uStack_58;
  undefined8 *puStack_50;
  ulonglong uStack_48;
  
  puVar1 = (ulonglong *)(param_4 + 2);
  uVar11 = *param_4;
  puStack_50 = param_2;
LAB_14009655e:
  do {
    uVar3 = uVar11;
    if ((uVar3 & 0x1ff0000) != 0) {
      LOCK();
      uVar11 = *param_4;
      bVar14 = uVar3 == uVar11;
      if (bVar14) {
        *param_4 = uVar3 + 0x100;
        uVar11 = uVar3;
      }
      UNLOCK();
      if (bVar14) {
        uVar8 = (uint)(*puVar1 >> 7) & 0xffffff;
        uVar12 = *puVar1;
        if ((*puVar1 >> 7 & 0xffffff) != 0) {
          do {
            if ((longlong)uVar12 < 0x100000000) {
              uVar4 = *puVar1;
            }
            else {
              LOCK();
              uVar4 = *puVar1;
              if (uVar12 == uVar4) {
                *puVar1 = uVar12 - 0x100000000;
                uVar4 = uVar12;
              }
              UNLOCK();
              uVar11 = uVar3;
              if (uVar12 == uVar4) goto LAB_14009655e;
            }
            uVar8 = uVar8 - 1;
            uVar12 = uVar4;
          } while (uVar8 != 0);
        }
        uVar12 = *puVar1;
        do {
          while (uStack_58 = uVar12, (longlong)uStack_58 < 0x100000000) {
            cVar2 = FUN_140006180(puVar1,1,&uStack_58);
            uVar11 = uVar3;
            uVar12 = uStack_58;
            if (cVar2 != '\0') goto LAB_14009655e;
          }
          LOCK();
          uVar12 = *puVar1;
          if (uStack_58 == uVar12) {
            *puVar1 = uStack_58 - 0x100000000;
            uVar12 = uStack_58;
          }
          UNLOCK();
          uVar11 = uVar3;
        } while (uStack_58 != uVar12);
      }
      goto LAB_14009655e;
    }
    LOCK();
    uVar11 = *param_4;
    bVar14 = uVar3 == uVar11;
    if (bVar14) {
      *param_4 = uVar3 + 1;
      uVar11 = uVar3;
    }
    UNLOCK();
  } while (!bVar14);
  uVar12 = param_3 - (longlong)puStack_50;
  if (uVar12 == 0) {
    LOCK();
    uVar11 = *param_4;
    *param_4 = *param_4 - 1;
    UNLOCK();
    uVar11 = uVar11 - 1;
    if ((char)uVar11 == '\0') {
      if ((uVar11 & 0xff0000) == 0) {
        if ((uVar11 & 0xff00) != 0) {
          uVar11 = *param_4;
          do {
            LOCK();
            uVar3 = *param_4;
            bVar14 = uVar11 == uVar3;
            if (bVar14) {
              *param_4 = uVar11 & 0xffff00ff;
              uVar3 = uVar11;
            }
            uVar11 = uVar3;
            UNLOCK();
          } while (!bVar14);
          uVar11 = uVar11 >> 8 & 0xff;
          if (uVar11 != 0) {
            puVar9 = param_4 + 2;
            lVar13 = *(longlong *)(param_4 + 2);
            do {
              while (-1 < lVar13) {
                LOCK();
                lVar5 = *(longlong *)puVar9;
                if (lVar13 == lVar5) {
                  *(ulonglong *)puVar9 = lVar13 + ((ulonglong)uVar11 << 0x20);
                  lVar5 = lVar13;
                }
                UNLOCK();
                bVar14 = lVar13 == lVar5;
                lVar13 = lVar5;
                if (bVar14) {
                  return;
                }
              }
              cVar2 = FUN_1400062d0(puVar9,uVar11,&stack0xffffffffffffffc8);
            } while (cVar2 == '\0');
          }
        }
      }
      else {
        puVar9 = param_4 + 4;
        do {
          if ((uVar11 & 0xff0000) == 0) {
            return;
          }
          LOCK();
          uVar3 = *param_4;
          bVar14 = uVar11 == uVar3;
          if (bVar14) {
            *param_4 = uVar11 - 0x10000;
            uVar3 = uVar11;
          }
          UNLOCK();
          if (bVar14) {
            lVar13 = *(longlong *)puVar9;
            do {
              while (lVar13 < 0) {
                cVar2 = FUN_1400062d0(puVar9,1,&stack0xffffffffffffffc8);
                uVar3 = uVar11;
                if (cVar2 != '\0') goto code_r0x00014032361d;
              }
              LOCK();
              lVar5 = *(longlong *)puVar9;
              if (lVar13 == lVar5) {
                *(longlong *)puVar9 = lVar13 + 0x100000000;
                lVar5 = lVar13;
              }
              UNLOCK();
              bVar15 = lVar13 != lVar5;
              uVar3 = uVar11;
              lVar13 = lVar5;
            } while (bVar15);
          }
code_r0x00014032361d:
          uVar11 = uVar3;
        } while (!bVar14);
      }
    }
    return;
  }
  uVar4 = (ulonglong)param_1[1];
  iVar10 = (int)(uVar12 >> 3);
  if (iVar10 != 0) {
    uVar6 = (ulonglong)*param_1;
    do {
      uVar11 = (uint)uVar4;
      if (*param_1 < uVar11 + iVar10) {
        lVar5 = *(longlong *)(param_1 + 2);
        lVar13 = lVar5 + uVar6 * 8;
        goto LAB_140096667;
      }
      LOCK();
      uVar3 = param_1[1];
      bVar14 = uVar11 == uVar3;
      if (bVar14) {
        param_1[1] = uVar11 + iVar10;
        uVar3 = uVar11;
      }
      UNLOCK();
      uVar4 = (ulonglong)uVar3;
    } while (!bVar14);
    uVar4 = (ulonglong)uVar3;
    puVar7 = (undefined8 *)(uVar4 * 8 + *(longlong *)(param_1 + 2));
    if (uVar12 == 8) {
      *puVar7 = *puStack_50;
    }
    else {
      func_0x000145f40560(puVar7,puStack_50,uVar12);
    }
  }
  lVar5 = *(longlong *)(param_1 + 2);
  uVar6 = (ulonglong)*param_1;
  lVar13 = lVar5 + uVar4 * 8;
LAB_140096667:
  FUN_140323580(param_4);
  if (lVar13 != lVar5 + uVar6 * 8) {
    return;
  }
  puVar1 = (ulonglong *)(param_4 + 4);
  uVar11 = *param_4;
  uStack_48 = uVar12;
LAB_140096699:
  do {
    uVar3 = uVar11;
    if ((uVar3 & 0x10000ff) != 0) {
      LOCK();
      uVar11 = *param_4;
      bVar14 = uVar3 == uVar11;
      if (bVar14) {
        *param_4 = uVar3 + 0x10000;
        uVar11 = uVar3;
      }
      UNLOCK();
      if (bVar14) {
        uVar8 = (uint)(*puVar1 >> 7) & 0xffffff;
        uVar12 = *puVar1;
        if ((*puVar1 >> 7 & 0xffffff) != 0) {
          do {
            if ((longlong)uVar12 < 0x100000000) {
              uVar4 = *puVar1;
            }
            else {
              LOCK();
              uVar4 = *puVar1;
              if (uVar12 == uVar4) {
                *puVar1 = uVar12 - 0x100000000;
                uVar4 = uVar12;
              }
              UNLOCK();
              uVar11 = uVar3;
              if (uVar12 == uVar4) goto LAB_140096699;
            }
            uVar8 = uVar8 - 1;
            uVar12 = uVar4;
          } while (uVar8 != 0);
        }
        uVar12 = *puVar1;
        do {
          while (uStack_58 = uVar12, (longlong)uStack_58 < 0x100000000) {
            cVar2 = FUN_140006180(puVar1,1,&uStack_58);
            uVar11 = uVar3;
            uVar12 = uStack_58;
            if (cVar2 != '\0') goto LAB_140096699;
          }
          LOCK();
          uVar12 = *puVar1;
          if (uStack_58 == uVar12) {
            *puVar1 = uStack_58 - 0x100000000;
            uVar12 = uStack_58;
          }
          UNLOCK();
          uVar11 = uVar3;
        } while (uStack_58 != uVar12);
      }
      goto LAB_140096699;
    }
    LOCK();
    uVar11 = *param_4;
    bVar14 = uVar3 == uVar11;
    if (bVar14) {
      *param_4 = uVar3 | 0x1000000;
      uVar11 = uVar3;
    }
    UNLOCK();
  } while (!bVar14);
  uVar11 = *param_1;
  if (uVar11 < param_1[1] + iVar10) {
    FUN_1458d61b0(param_1);
    uVar11 = *param_1;
  }
  uVar3 = param_1[1];
  if (iVar10 != 0) {
    do {
      if (uVar11 < uVar3 + iVar10) goto LAB_14009677b;
      LOCK();
      uVar8 = param_1[1];
      bVar14 = uVar3 == uVar8;
      if (bVar14) {
        param_1[1] = uVar3 + iVar10;
        uVar8 = uVar3;
      }
      uVar3 = uVar8;
      UNLOCK();
    } while (!bVar14);
    func_0x000145f40560((ulonglong)uVar3 * 8 + *(longlong *)(param_1 + 2),puStack_50,uStack_48);
  }
LAB_14009677b:
  uVar11 = *param_4;
  do {
    LOCK();
    uVar3 = *param_4;
    bVar14 = uVar11 == uVar3;
    if (bVar14) {
      *param_4 = uVar11 & 0xfeffffff;
      uVar3 = uVar11;
    }
    uVar11 = uVar3;
    UNLOCK();
  } while (!bVar14);
  if ((uVar11 & 0xff0000) == 0) {
    if ((uVar11 & 0xff00) != 0) {
      uVar11 = *param_4;
      do {
        LOCK();
        uVar3 = *param_4;
        bVar14 = uVar11 == uVar3;
        if (bVar14) {
          *param_4 = uVar11 & 0xffff00ff;
          uVar3 = uVar11;
        }
        uVar11 = uVar3;
        UNLOCK();
      } while (!bVar14);
      uVar11 = uVar11 >> 8 & 0xff;
      if (uVar11 != 0) {
        puVar9 = param_4 + 2;
        lVar13 = *(longlong *)(param_4 + 2);
        do {
          while (-1 < lVar13) {
            LOCK();
            lVar5 = *(longlong *)puVar9;
            if (lVar13 == lVar5) {
              *(ulonglong *)puVar9 = lVar13 + ((ulonglong)uVar11 << 0x20);
              lVar5 = lVar13;
            }
            UNLOCK();
            bVar14 = lVar13 == lVar5;
            lVar13 = lVar5;
            if (bVar14) {
              return;
            }
          }
          cVar2 = FUN_1400062d0(puVar9,uVar11,&stack0xffffffffffffffc8);
        } while (cVar2 == '\0');
      }
    }
  }
  else {
    uVar11 = uVar11 & 0xfeffffff;
    puVar9 = param_4 + 4;
    do {
      if ((uVar11 & 0xff0000) == 0) {
        return;
      }
      LOCK();
      uVar3 = *param_4;
      bVar14 = uVar11 == uVar3;
      if (bVar14) {
        *param_4 = uVar11 - 0x10000;
        uVar3 = uVar11;
      }
      UNLOCK();
      if (bVar14) {
        lVar13 = *(longlong *)puVar9;
        do {
          while (lVar13 < 0) {
            cVar2 = FUN_1400062d0(puVar9,1,&stack0xffffffffffffffc8);
            uVar3 = uVar11;
            if (cVar2 != '\0') goto code_r0x00014046570e;
          }
          LOCK();
          lVar5 = *(longlong *)puVar9;
          if (lVar13 == lVar5) {
            *(longlong *)puVar9 = lVar13 + 0x100000000;
            lVar5 = lVar13;
          }
          UNLOCK();
          bVar15 = lVar13 != lVar5;
          uVar3 = uVar11;
          lVar13 = lVar5;
        } while (bVar15);
      }
code_r0x00014046570e:
      uVar11 = uVar3;
    } while (!bVar14);
  }
  return;
}

