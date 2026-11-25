// Recovered from game_scarlett_master.exe (GTA VI, Xbox Series X, PE32+ x64)
// Address: 14012c410  size: 303 bytes
// Name:    FUN_14012c410
// Subsystem: core
//
// Referenced strings (0 in this body, 0 including direct callees):
// Callees: FUN_140006180, FUN_145046120
//
// Generated decompilation. Formatting follows MiscRef/GTAVSRC conventions;
// identifiers are recovered, not original. See ../../../README.md.

#include "gta6decomp/rage_types.h"


void FUN_14012c410(longlong param_1)

{
  uint *puVar1;
  ulonglong *puVar2;
  char cVar3;
  uint uVar4;
  ulonglong uVar5;
  ulonglong uVar6;
  longlong lVar7;
  uint uVar8;
  longlong *plVar9;
  uint uVar10;
  bool bVar11;
  bool bVar12;
  ulonglong uStack_40;
  longlong lVar13;
  
  if (*(char *)(param_1 + 0x34) != '\x01') {
    return;
  }
  puVar1 = (uint *)(param_1 + 0x18);
  puVar2 = (ulonglong *)(param_1 + 0x28);
  uVar10 = *(uint *)(param_1 + 0x18);
LAB_14012c450:
  do {
    uVar4 = uVar10;
    if ((uVar4 & 0x10000ff) != 0) {
      LOCK();
      uVar10 = *puVar1;
      bVar11 = uVar4 == uVar10;
      if (bVar11) {
        *puVar1 = uVar4 + 0x10000;
        uVar10 = uVar4;
      }
      UNLOCK();
      if (bVar11) {
        uVar8 = (uint)(*puVar2 >> 7) & 0xffffff;
        uVar6 = *puVar2;
        if ((*puVar2 >> 7 & 0xffffff) != 0) {
          do {
            if ((longlong)uVar6 < 0x100000000) {
              uVar5 = *puVar2;
            }
            else {
              LOCK();
              uVar5 = *puVar2;
              if (uVar6 == uVar5) {
                *puVar2 = uVar6 - 0x100000000;
                uVar5 = uVar6;
              }
              UNLOCK();
              uVar10 = uVar4;
              if (uVar6 == uVar5) goto LAB_14012c450;
            }
            uVar8 = uVar8 - 1;
            uVar6 = uVar5;
          } while (uVar8 != 0);
        }
        uVar6 = *puVar2;
        do {
          while (uStack_40 = uVar6, (longlong)uStack_40 < 0x100000000) {
            cVar3 = FUN_140006180(puVar2,1,&uStack_40);
            uVar10 = uVar4;
            uVar6 = uStack_40;
            if (cVar3 != '\0') goto LAB_14012c450;
          }
          LOCK();
          uVar6 = *puVar2;
          if (uStack_40 == uVar6) {
            *puVar2 = uStack_40 - 0x100000000;
            uVar6 = uStack_40;
          }
          UNLOCK();
          uVar10 = uVar4;
        } while (uStack_40 != uVar6);
      }
      goto LAB_14012c450;
    }
    LOCK();
    uVar10 = *puVar1;
    bVar11 = uVar4 == uVar10;
    if (bVar11) {
      *puVar1 = uVar4 | 0x1000000;
      uVar10 = uVar4;
    }
    UNLOCK();
    if (bVar11) {
      FUN_145046120(*(longlong *)(param_1 + 0x10),
                    *(int *)(*(longlong *)(param_1 + 0x10) + 0x10) / 1000 + 1);
      uVar10 = *puVar1;
      do {
        LOCK();
        uVar4 = *puVar1;
        bVar11 = uVar10 == uVar4;
        if (bVar11) {
          *puVar1 = uVar10 & 0xfeffffff;
          uVar4 = uVar10;
        }
        uVar10 = uVar4;
        UNLOCK();
      } while (!bVar11);
      if ((uVar10 & 0xff0000) == 0) {
        if ((uVar10 & 0xff00) != 0) {
          uVar10 = *puVar1;
          do {
            LOCK();
            uVar4 = *puVar1;
            bVar11 = uVar10 == uVar4;
            if (bVar11) {
              *puVar1 = uVar10 & 0xffff00ff;
              uVar4 = uVar10;
            }
            uVar10 = uVar4;
            UNLOCK();
          } while (!bVar11);
          uVar10 = uVar10 >> 8 & 0xff;
          if (uVar10 != 0) {
            plVar9 = (longlong *)(param_1 + 0x20);
            lVar13 = *(longlong *)(param_1 + 0x20);
            do {
              while (-1 < lVar13) {
                LOCK();
                lVar7 = *plVar9;
                if (lVar13 == lVar7) {
                  *plVar9 = lVar13 + ((ulonglong)uVar10 << 0x20);
                  lVar7 = lVar13;
                }
                UNLOCK();
                bVar11 = lVar13 == lVar7;
                lVar13 = lVar7;
                if (bVar11) {
                  return;
                }
              }
              cVar3 = FUN_1400062d0(plVar9,uVar10,&stack0xffffffffffffffc8);
            } while (cVar3 == '\0');
          }
        }
      }
      else {
        uVar10 = uVar10 & 0xfeffffff;
        plVar9 = (longlong *)(param_1 + 0x28);
        do {
          if ((uVar10 & 0xff0000) == 0) {
            return;
          }
          LOCK();
          uVar4 = *puVar1;
          bVar11 = uVar10 == uVar4;
          if (bVar11) {
            *puVar1 = uVar10 - 0x10000;
            uVar4 = uVar10;
          }
          UNLOCK();
          if (bVar11) {
            lVar13 = *plVar9;
            do {
              while (lVar13 < 0) {
                cVar3 = FUN_1400062d0(plVar9,1,&stack0xffffffffffffffc8);
                uVar4 = uVar10;
                if (cVar3 != '\0') goto code_r0x00014046570e;
              }
              LOCK();
              lVar7 = *plVar9;
              if (lVar13 == lVar7) {
                *plVar9 = lVar13 + 0x100000000;
                lVar7 = lVar13;
              }
              UNLOCK();
              bVar12 = lVar13 != lVar7;
              uVar4 = uVar10;
              lVar13 = lVar7;
            } while (bVar12);
          }
code_r0x00014046570e:
          uVar10 = uVar4;
        } while (!bVar11);
      }
      return;
    }
  } while( true );
}

