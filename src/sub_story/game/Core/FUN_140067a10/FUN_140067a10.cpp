// Recovered from game_scarlett_master.exe (GTA VI, Xbox Series X, PE32+ x64)
// Address: 140067a10  size: 767 bytes
// Name:    FUN_140067a10
// Subsystem: core
//
// Referenced strings (0 in this body, 0 including direct callees):
// Callees: FUN_140006180, FUN_1400062d0
//
// Generated decompilation. Formatting follows MiscRef/GTAVSRC conventions;
// identifiers are recovered, not original. See ../../../README.md.

#include "gta6decomp/rage_types.h"


longlong FUN_140067a10(longlong param_1,uint param_2)

{
  ulonglong *puVar1;
  longlong lVar2;
  int *piVar3;
  int iVar4;
  char cVar5;
  ulonglong uVar6;
  uint uVar7;
  uint uVar8;
  longlong lVar9;
  ulonglong uVar10;
  uint uVar11;
  bool bVar12;
  bool bVar13;
  ulonglong uStack_48;
  
  if (param_2 == 0xffffffff) {
    return 0;
  }
  puVar1 = (ulonglong *)(param_1 + 0x78248);
  uVar11 = *(uint *)(param_1 + 0x78240);
LAB_140067a54:
  do {
    uVar7 = uVar11;
    if ((uVar7 & 0x1ff0000) != 0) {
      LOCK();
      uVar11 = *(uint *)(param_1 + 0x78240);
      bVar12 = uVar7 == uVar11;
      if (bVar12) {
        *(uint *)(param_1 + 0x78240) = uVar7 + 0x100;
        uVar11 = uVar7;
      }
      UNLOCK();
      if (bVar12) {
        uVar8 = (uint)(*puVar1 >> 7) & 0xffffff;
        uVar10 = *puVar1;
        if ((*puVar1 >> 7 & 0xffffff) != 0) {
          do {
            if ((longlong)uVar10 < 0x100000000) {
              uVar6 = *puVar1;
            }
            else {
              LOCK();
              uVar6 = *puVar1;
              if (uVar10 == uVar6) {
                *puVar1 = uVar10 - 0x100000000;
                uVar6 = uVar10;
              }
              UNLOCK();
              uVar11 = uVar7;
              if (uVar10 == uVar6) goto LAB_140067a54;
            }
            uVar8 = uVar8 - 1;
            uVar10 = uVar6;
          } while (uVar8 != 0);
        }
        uStack_48 = *puVar1;
        do {
          while ((longlong)uStack_48 < 0x100000000) {
            cVar5 = FUN_140006180(puVar1,1,&uStack_48);
            uVar11 = uVar7;
            if (cVar5 != '\0') goto LAB_140067a54;
          }
          LOCK();
          uVar10 = *puVar1;
          if (uStack_48 == uVar10) {
            *puVar1 = uStack_48 - 0x100000000;
            uVar10 = uStack_48;
          }
          UNLOCK();
          bVar12 = uStack_48 != uVar10;
          uVar11 = uVar7;
          uStack_48 = uVar10;
        } while (bVar12);
      }
      goto LAB_140067a54;
    }
    LOCK();
    uVar11 = *(uint *)(param_1 + 0x78240);
    bVar12 = uVar7 == uVar11;
    if (bVar12) {
      *(uint *)(param_1 + 0x78240) = uVar7 + 1;
      uVar11 = uVar7;
    }
    UNLOCK();
  } while (!bVar12);
  uVar11 = *(uint *)(param_1 + 0x77238);
  if (uVar11 != 0) {
    uVar7 = (param_2 >> 0x10 ^ param_2) * -0x7a143595;
    uVar7 = (uVar7 >> 0xd ^ uVar7) * -0x3d4d51cb;
    lVar2 = param_1 + 0x77240;
    uVar10 = (ulonglong)((uVar7 >> 0x10 ^ uVar7) & uVar11 - 1);
    uVar7 = *(uint *)(param_1 + 0x77240 + uVar10 * 8);
    if (uVar7 == param_2 || uVar7 == 0xffffffff) {
      if (uVar7 != 0xffffffff) {
        lVar9 = param_1 + 0x77240 + uVar10 * 8;
        goto LAB_140067b9a;
      }
    }
    else {
      do {
        uVar10 = (ulonglong)((uint)((param_1 + 0x77248 + uVar10 * 8) - lVar2 >> 3) & uVar11 - 1);
        uVar7 = *(uint *)(lVar2 + uVar10 * 8);
        if (uVar7 == 0xffffffff) break;
      } while (uVar7 != param_2);
      if (uVar7 != 0xffffffff) {
        lVar9 = lVar2 + uVar10 * 8;
LAB_140067b9a:
        uVar10 = (ulonglong)(lVar9 - lVar2) >> 3;
        if (uVar11 != (uint)uVar10) {
          lVar9 = 0;
          do {
            if (*(int *)(lVar2 + (uVar10 & 0xffffffff) * 8) != -1) {
              if ((uint)uVar10 == uVar11) goto LAB_140067bbf;
              lVar9 = param_1 + 0x10 +
                      (ulonglong)*(ushort *)(param_1 + 0x77244 + (uVar10 & 0xffffffff) * 8) * 0x700;
              break;
            }
            uVar7 = (uint)uVar10 + 1;
            uVar10 = (ulonglong)uVar7;
          } while (uVar11 != uVar7);
          goto LAB_140067bc1;
        }
      }
    }
  }
LAB_140067bbf:
  lVar9 = 0;
LAB_140067bc1:
  LOCK();
  piVar3 = (int *)(param_1 + 0x78240);
  iVar4 = *piVar3;
  *piVar3 = *piVar3 + -1;
  UNLOCK();
  uVar11 = iVar4 - 1;
  if ((char)uVar11 == '\0') {
    if ((uVar11 & 0xff0000) == 0) {
      if ((uVar11 & 0xff00) != 0) {
        uVar11 = *(uint *)(param_1 + 0x78240);
        do {
          LOCK();
          uVar7 = *(uint *)(param_1 + 0x78240);
          bVar12 = uVar11 == uVar7;
          if (bVar12) {
            *(uint *)(param_1 + 0x78240) = uVar11 & 0xffff00ff;
            uVar7 = uVar11;
          }
          uVar11 = uVar7;
          UNLOCK();
        } while (!bVar12);
        uVar11 = uVar11 >> 8 & 0xff;
        if (uVar11 != 0) {
          uStack_48 = *puVar1;
          do {
            while (-1 < (longlong)uStack_48) {
              LOCK();
              uVar10 = *puVar1;
              if (uStack_48 == uVar10) {
                *puVar1 = uStack_48 + ((ulonglong)uVar11 << 0x20);
                uVar10 = uStack_48;
              }
              UNLOCK();
              bVar12 = uStack_48 == uVar10;
              uStack_48 = uVar10;
              if (bVar12) {
                return lVar9;
              }
            }
            cVar5 = FUN_1400062d0(puVar1,uVar11,&uStack_48);
          } while (cVar5 == '\0');
        }
      }
    }
    else {
      puVar1 = (ulonglong *)(param_1 + 0x78250);
      do {
        if ((uVar11 & 0xff0000) == 0) {
          return lVar9;
        }
        LOCK();
        uVar7 = *(uint *)(param_1 + 0x78240);
        bVar12 = uVar11 == uVar7;
        if (bVar12) {
          *(uint *)(param_1 + 0x78240) = uVar11 - 0x10000;
          uVar7 = uVar11;
        }
        UNLOCK();
        if (bVar12) {
          uStack_48 = *puVar1;
          do {
            while ((longlong)uStack_48 < 0) {
              cVar5 = FUN_1400062d0(puVar1,1,&uStack_48);
              uVar7 = uVar11;
              if (cVar5 != '\0') goto LAB_140067c5f;
            }
            LOCK();
            uVar10 = *puVar1;
            if (uStack_48 == uVar10) {
              *puVar1 = uStack_48 + 0x100000000;
              uVar10 = uStack_48;
            }
            UNLOCK();
            bVar13 = uStack_48 != uVar10;
            uVar7 = uVar11;
            uStack_48 = uVar10;
          } while (bVar13);
        }
LAB_140067c5f:
        uVar11 = uVar7;
      } while (!bVar12);
    }
  }
  return lVar9;
}

