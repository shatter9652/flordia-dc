// Recovered from game_scarlett_master.exe (GTA VI, Xbox Series X, PE32+ x64)
// Address: 140166170  size: 314 bytes
// Name:    FUN_140166170
// Subsystem: core
//
// Referenced strings (0 in this body, 0 including direct callees):
// Callees: FUN_140006180
//
// Generated decompilation. Formatting follows MiscRef/GTAVSRC conventions;
// identifiers are recovered, not original. See ../../../README.md.

#include "gta6decomp/rage_types.h"


void FUN_140166170(longlong param_1,longlong param_2)

{
  uint *puVar1;
  ulonglong *puVar2;
  uint *puVar3;
  ushort uVar4;
  char cVar5;
  uint uVar6;
  ulonglong uVar7;
  ulonglong uVar8;
  longlong lVar9;
  uint uVar10;
  longlong *plVar11;
  uint uVar12;
  bool bVar13;
  bool bVar14;
  ulonglong uStack_48;
  longlong lVar15;
  
  puVar1 = (uint *)(param_1 + 0x168);
  puVar2 = (ulonglong *)(param_1 + 0x170);
  uVar10 = *(uint *)(param_1 + 0x168);
LAB_1401661b3:
  do {
    uVar6 = uVar10;
    if ((uVar6 & 0x1ff0000) != 0) {
      LOCK();
      uVar10 = *puVar1;
      bVar13 = uVar6 == uVar10;
      if (bVar13) {
        *puVar1 = uVar6 + 0x100;
        uVar10 = uVar6;
      }
      UNLOCK();
      if (bVar13) {
        uVar12 = (uint)(*puVar2 >> 7) & 0xffffff;
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
              uVar10 = uVar6;
              if (uVar8 == uVar7) goto LAB_1401661b3;
            }
            uVar12 = uVar12 - 1;
            uVar8 = uVar7;
          } while (uVar12 != 0);
        }
        uVar8 = *puVar2;
        do {
          while (uStack_48 = uVar8, (longlong)uStack_48 < 0x100000000) {
            cVar5 = FUN_140006180(puVar2,1,&uStack_48);
            uVar10 = uVar6;
            uVar8 = uStack_48;
            if (cVar5 != '\0') goto LAB_1401661b3;
          }
          LOCK();
          uVar8 = *puVar2;
          if (uStack_48 == uVar8) {
            *puVar2 = uStack_48 - 0x100000000;
            uVar8 = uStack_48;
          }
          UNLOCK();
          uVar10 = uVar6;
        } while (uStack_48 != uVar8);
      }
      goto LAB_1401661b3;
    }
    LOCK();
    uVar10 = *puVar1;
    bVar13 = uVar6 == uVar10;
    if (bVar13) {
      *puVar1 = uVar6 + 1;
      uVar10 = uVar6;
    }
    UNLOCK();
    if (bVar13) {
      uVar4 = *(ushort *)(param_2 + 0x516);
      if (uVar4 != 0xffff) {
        uVar10 = 1 << (uVar4 & 0x1f);
        if ((*(byte *)(param_2 + 0x51d) & 2) == 0) {
          LOCK();
          puVar3 = (uint *)(*(longlong *)(param_1 + 0x50) + (ulonglong)(uVar4 >> 5) * 4);
          *puVar3 = *puVar3 & ~uVar10;
          UNLOCK();
        }
        else {
          LOCK();
          puVar3 = (uint *)(*(longlong *)(param_1 + 0x50) + (ulonglong)(uVar4 >> 5) * 4);
          *puVar3 = *puVar3 | uVar10;
          UNLOCK();
        }
      }
      LOCK();
      uVar10 = *puVar1;
      *puVar1 = *puVar1 - 1;
      UNLOCK();
      uVar10 = uVar10 - 1;
      if ((char)uVar10 == '\0') {
        if ((uVar10 & 0xff0000) == 0) {
          if ((uVar10 & 0xff00) != 0) {
            uVar10 = *puVar1;
            do {
              LOCK();
              uVar6 = *puVar1;
              bVar13 = uVar10 == uVar6;
              if (bVar13) {
                *puVar1 = uVar10 & 0xffff00ff;
                uVar6 = uVar10;
              }
              uVar10 = uVar6;
              UNLOCK();
            } while (!bVar13);
            uVar10 = uVar10 >> 8 & 0xff;
            if (uVar10 != 0) {
              plVar11 = (longlong *)(param_1 + 0x170);
              lVar15 = *(longlong *)(param_1 + 0x170);
              do {
                while (-1 < lVar15) {
                  LOCK();
                  lVar9 = *plVar11;
                  if (lVar15 == lVar9) {
                    *plVar11 = lVar15 + ((ulonglong)uVar10 << 0x20);
                    lVar9 = lVar15;
                  }
                  UNLOCK();
                  bVar13 = lVar15 == lVar9;
                  lVar15 = lVar9;
                  if (bVar13) {
                    return;
                  }
                }
                cVar5 = FUN_1400062d0(plVar11,uVar10,&stack0xffffffffffffffc8);
              } while (cVar5 == '\0');
            }
          }
        }
        else {
          plVar11 = (longlong *)(param_1 + 0x178);
          do {
            if ((uVar10 & 0xff0000) == 0) {
              return;
            }
            LOCK();
            uVar6 = *puVar1;
            bVar13 = uVar10 == uVar6;
            if (bVar13) {
              *puVar1 = uVar10 - 0x10000;
              uVar6 = uVar10;
            }
            UNLOCK();
            if (bVar13) {
              lVar15 = *plVar11;
              do {
                while (lVar15 < 0) {
                  cVar5 = FUN_1400062d0(plVar11,1,&stack0xffffffffffffffc8);
                  uVar6 = uVar10;
                  if (cVar5 != '\0') goto code_r0x00014241e215;
                }
                LOCK();
                lVar9 = *plVar11;
                if (lVar15 == lVar9) {
                  *plVar11 = lVar15 + 0x100000000;
                  lVar9 = lVar15;
                }
                UNLOCK();
                bVar14 = lVar15 != lVar9;
                uVar6 = uVar10;
                lVar15 = lVar9;
              } while (bVar14);
            }
code_r0x00014241e215:
            uVar10 = uVar6;
          } while (!bVar13);
        }
      }
      return;
    }
  } while( true );
}

