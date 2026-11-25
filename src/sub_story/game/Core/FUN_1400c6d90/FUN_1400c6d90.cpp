// Recovered from game_scarlett_master.exe (GTA VI, Xbox Series X, PE32+ x64)
// Address: 1400c6d90  size: 812 bytes
// Name:    FUN_1400c6d90
// Subsystem: core
//
// Referenced strings (0 in this body, 0 including direct callees):
// Callees: FUN_14201d3b0, FUN_1414dd5b0, FUN_1433e3a10, FUN_1414dcea0, FUN_1414dc920, FUN_140006180, FUN_145791040, FUN_144f61a90, FUN_144f618c0, FUN_1414dced0, FUN_144f92060
//
// Generated decompilation. Formatting follows MiscRef/GTAVSRC conventions;
// identifiers are recovered, not original. See ../../../README.md.

#include "gta6decomp/rage_types.h"


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1400c6d90(longlong param_1,longlong param_2)

{
  uint *puVar1;
  ulonglong *puVar2;
  char cVar3;
  uint uVar4;
  undefined4 uVar5;
  ulonglong uVar6;
  longlong lVar7;
  longlong lVar8;
  uint uVar9;
  uint uVar10;
  int iVar11;
  ulonglong uVar12;
  longlong *plVar13;
  bool bVar14;
  bool bVar15;
  ulonglong uStack_68;
  undefined *puStack_60;
  ulonglong uStack_58;
  undefined8 uStack_50;
  
  puVar1 = (uint *)(param_1 + 0x78);
  puVar2 = (ulonglong *)(param_1 + 0x88);
  uVar4 = *(uint *)(param_1 + 0x78);
LAB_1400c6dcd:
  do {
    uVar10 = uVar4;
    if ((uVar10 & 0x10000ff) != 0) {
      LOCK();
      uVar4 = *puVar1;
      bVar14 = uVar10 == uVar4;
      if (bVar14) {
        *puVar1 = uVar10 + 0x10000;
        uVar4 = uVar10;
      }
      UNLOCK();
      if (bVar14) {
        uVar9 = (uint)(*puVar2 >> 7) & 0xffffff;
        uVar12 = *puVar2;
        if ((*puVar2 >> 7 & 0xffffff) != 0) {
          do {
            if ((longlong)uVar12 < 0x100000000) {
              uVar6 = *puVar2;
            }
            else {
              LOCK();
              uVar6 = *puVar2;
              if (uVar12 == uVar6) {
                *puVar2 = uVar12 - 0x100000000;
                uVar6 = uVar12;
              }
              UNLOCK();
              uVar4 = uVar10;
              if (uVar12 == uVar6) goto LAB_1400c6dcd;
            }
            uVar9 = uVar9 - 1;
            uVar12 = uVar6;
          } while (uVar9 != 0);
        }
        uVar12 = *puVar2;
        do {
          while (uStack_68 = uVar12, (longlong)uStack_68 < 0x100000000) {
            cVar3 = FUN_140006180(puVar2,1,&uStack_68);
            uVar4 = uVar10;
            uVar12 = uStack_68;
            if (cVar3 != '\0') goto LAB_1400c6dcd;
          }
          LOCK();
          uVar12 = *puVar2;
          if (uStack_68 == uVar12) {
            *puVar2 = uStack_68 - 0x100000000;
            uVar12 = uStack_68;
          }
          UNLOCK();
          uVar4 = uVar10;
        } while (uStack_68 != uVar12);
      }
      goto LAB_1400c6dcd;
    }
    LOCK();
    uVar4 = *puVar1;
    bVar14 = uVar10 == uVar4;
    if (bVar14) {
      *puVar1 = uVar10 | 0x1000000;
      uVar4 = uVar10;
    }
    UNLOCK();
    if (bVar14) {
      FUN_144f92060(param_2,&uStack_68);
      uVar4 = *(uint *)(param_1 + 0x14);
      if (uVar4 != 0) {
        uVar12 = 0;
        do {
          uVar10 = (uint)uVar12;
          plVar13 = *(longlong **)(*(longlong *)(param_1 + 0x18) + uVar12 * 8);
          if (*plVar13 == param_2) {
            cVar3 = FUN_14201d3b0(plVar13);
            if (cVar3 == '\0') {
              uVar4 = *(uint *)(param_1 + 0x14);
            }
            else {
              uVar4 = *(uint *)(param_1 + 0x24);
              if (uVar4 == *(uint *)(param_1 + 0x20)) {
                uVar9 = uVar4 >> 1;
                if (uVar4 < 2) {
                  uVar9 = 1;
                }
                FUN_145791040(param_1 + 0x20,uVar9 + uVar4);
                uVar4 = *(uint *)(param_1 + 0x24);
              }
              *(uint *)(param_1 + 0x24) = uVar4 + 1;
              *(longlong **)(*(longlong *)(param_1 + 0x28) + (ulonglong)uVar4 * 8) = plVar13;
              lVar7 = func_0x000144f1ba00(*(undefined4 *)(_DAT_14ab83d78 + 0xc),
                                          *(undefined8 *)(_DAT_14ab83d78 + 0x10),(short)plVar13[1]);
              if (lVar7 != 0) {
                lVar7 = func_0x00014086e7a0((int)plVar13[2],param_2,lVar7);
                uStack_58 = uStack_68;
                uStack_50 = puStack_60;
                lVar7 = FUN_1414dd5b0(*(undefined4 *)(lVar7 + 4),&uStack_58);
                if (lVar7 != 0) {
                  FUN_1433e3a10(param_1,plVar13,lVar7);
                }
              }
              uVar9 = *(int *)(param_1 + 0x14) - 1;
              uVar4 = uVar10;
              if (uVar9 != uVar10) {
                *(undefined8 *)(*(longlong *)(param_1 + 0x18) + uVar12 * 8) =
                     *(undefined8 *)(*(longlong *)(param_1 + 0x18) + (ulonglong)uVar9 * 8);
                uVar4 = *(int *)(param_1 + 0x14) - 1;
              }
              uVar10 = uVar10 - 1;
              *(uint *)(param_1 + 0x14) = uVar4;
            }
          }
          uVar12 = (ulonglong)(uVar10 + 1);
        } while (uVar10 + 1 < uVar4);
      }
      uVar4 = *(uint *)(param_1 + 0x24);
      if (uVar4 != 0) {
        uVar12 = 0;
        do {
          uVar10 = (uint)uVar12;
          plVar13 = *(longlong **)(*(longlong *)(param_1 + 0x28) + uVar12 * 8);
          if (*plVar13 == param_2) {
            cVar3 = FUN_14201d3b0(plVar13);
            if (cVar3 == '\0') {
              uVar4 = *(uint *)(param_1 + 0x14);
              if (uVar4 == *(uint *)(param_1 + 0x10)) {
                uVar9 = uVar4 >> 1;
                if (uVar4 < 2) {
                  uVar9 = 1;
                }
                FUN_145791040(param_1 + 0x10,uVar9 + uVar4);
                uVar4 = *(uint *)(param_1 + 0x14);
              }
              *(uint *)(param_1 + 0x14) = uVar4 + 1;
              *(longlong **)(*(longlong *)(param_1 + 0x18) + (ulonglong)uVar4 * 8) = plVar13;
              if (plVar13[10] != 0) {
                func_0x0001433d7600(plVar13);
              }
              FUN_1414dced0(plVar13);
              FUN_1414dcea0(plVar13);
              uVar9 = *(int *)(param_1 + 0x24) - 1;
              uVar4 = uVar10;
              if (uVar9 != uVar10) {
                *(undefined8 *)(*(longlong *)(param_1 + 0x28) + uVar12 * 8) =
                     *(undefined8 *)(*(longlong *)(param_1 + 0x28) + (ulonglong)uVar9 * 8);
                uVar4 = *(int *)(param_1 + 0x24) - 1;
              }
              uVar10 = uVar10 - 1;
              *(uint *)(param_1 + 0x24) = uVar4;
            }
            else {
              uVar4 = *(uint *)(param_1 + 0x24);
            }
          }
          uVar12 = (ulonglong)(uVar10 + 1);
        } while (uVar10 + 1 < uVar4);
      }
      if (*(int *)(param_1 + 0x34) != 0) {
        uVar12 = 0;
        do {
          iVar11 = (int)uVar12;
          if ((((**(longlong **)(*(longlong *)(param_1 + 0x38) + uVar12 * 8) == param_2) &&
               (uVar5 = FUN_144f61a90(param_2), (short)uVar5 != -1)) &&
              (lVar7 = func_0x0001433e2b10(*(undefined8 *)(_DAT_14ab5d000 + 0x80),uVar5),
              *(char *)(lVar7 + 5) == '\x01')) && (cVar3 = FUN_144f618c0(param_2,1), cVar3 == '\0'))
          {
            FUN_1414dc920(param_1,param_2);
            iVar11 = iVar11 + -1;
          }
          uVar12 = (ulonglong)(iVar11 + 1U);
        } while (iVar11 + 1U < *(uint *)(param_1 + 0x34));
      }
      uVar4 = *puVar1;
      do {
        LOCK();
        uVar10 = *puVar1;
        bVar14 = uVar4 == uVar10;
        if (bVar14) {
          *puVar1 = uVar4 & 0xfeffffff;
          uVar10 = uVar4;
        }
        uVar4 = uVar10;
        UNLOCK();
      } while (!bVar14);
      if ((uVar4 & 0xff0000) == 0) {
        if ((uVar4 & 0xff00) != 0) {
          uVar4 = *puVar1;
          do {
            LOCK();
            uVar10 = *puVar1;
            bVar14 = uVar4 == uVar10;
            if (bVar14) {
              *puVar1 = uVar4 & 0xffff00ff;
              uVar10 = uVar4;
            }
            uVar4 = uVar10;
            UNLOCK();
          } while (!bVar14);
          uVar4 = uVar4 >> 8 & 0xff;
          if (uVar4 != 0) {
            plVar13 = (longlong *)(param_1 + 0x80);
            lVar7 = *(longlong *)(param_1 + 0x80);
            do {
              while (-1 < lVar7) {
                LOCK();
                lVar8 = *plVar13;
                if (lVar7 == lVar8) {
                  *plVar13 = lVar7 + ((ulonglong)uVar4 << 0x20);
                  lVar8 = lVar7;
                }
                UNLOCK();
                bVar14 = lVar7 == lVar8;
                lVar7 = lVar8;
                if (bVar14) {
                  return;
                }
              }
              puStack_60 = &UNK_14046577c;
              cVar3 = FUN_1400062d0(plVar13,uVar4,&stack0xffffffffffffffc8);
            } while (cVar3 == '\0');
          }
        }
      }
      else {
        uVar4 = uVar4 & 0xfeffffff;
        plVar13 = (longlong *)(param_1 + 0x88);
        do {
          if ((uVar4 & 0xff0000) == 0) {
            return;
          }
          LOCK();
          uVar10 = *puVar1;
          bVar14 = uVar4 == uVar10;
          if (bVar14) {
            *puVar1 = uVar4 - 0x10000;
            uVar10 = uVar4;
          }
          UNLOCK();
          if (bVar14) {
            lVar7 = *plVar13;
            do {
              while (lVar7 < 0) {
                puStack_60 = &UNK_1404656ef;
                cVar3 = FUN_1400062d0(plVar13,1,&stack0xffffffffffffffc8);
                uVar10 = uVar4;
                if (cVar3 != '\0') goto code_r0x00014046570e;
              }
              LOCK();
              lVar8 = *plVar13;
              if (lVar7 == lVar8) {
                *plVar13 = lVar7 + 0x100000000;
                lVar8 = lVar7;
              }
              UNLOCK();
              bVar15 = lVar7 != lVar8;
              uVar10 = uVar4;
              lVar7 = lVar8;
            } while (bVar15);
          }
code_r0x00014046570e:
          uVar4 = uVar10;
        } while (!bVar14);
      }
      return;
    }
  } while( true );
}

