// Recovered from game_scarlett_master.exe (GTA VI, Xbox Series X, PE32+ x64)
// Address: 14002cd70  size: 946 bytes
// Name:    FUN_14002cd70
// Subsystem: core
//
// Referenced strings (0 in this body, 0 including direct callees):
// Callees: FUN_140323580, FUN_140006180, FUN_141f96920, FUN_141e396a0, FUN_140c95450
//
// Generated decompilation. Formatting follows MiscRef/GTAVSRC conventions;
// identifiers are recovered, not original. See ../../../README.md.

#include "gta6decomp/rage_types.h"


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

ulonglong FUN_14002cd70(longlong param_1)

{
  ulonglong *puVar1;
  longlong lVar2;
  uint *puVar3;
  char cVar4;
  uint uVar5;
  uint uVar6;
  undefined8 uVar7;
  ulonglong uVar8;
  ulonglong uVar9;
  uint uVar10;
  longlong lVar11;
  undefined7 uVar12;
  char *pcVar13;
  longlong unaff_GS_OFFSET;
  bool bVar14;
  ulonglong uStack_70;
  char *pcStack_68;
  uint uStack_5c;
  undefined1 auStack_58 [8];
  uint *puStack_50;
  
  if ((param_1 == 0) ||
     ((*(byte *)(param_1 + 0x155) & 0xfffffffe) != 2 &&
      *(byte *)(param_1 + 0x155) - 0x11 < 0xfffffffa)) {
    uVar9 = 0;
  }
  else {
    lVar11 = *(longlong *)(param_1 + 0x1a8);
    if (*(char *)(*(longlong *)(*(longlong *)(unaff_GS_OFFSET + 0x58) + (ulonglong)__tls_index * 8)
                 + 8) == '\0') {
      func_0x0001455db994();
    }
    lVar2 = **(longlong **)(unaff_GS_OFFSET + 0x58);
    uVar12 = (undefined7)((ulonglong)lVar11 >> 8);
    pcStack_68 = (char *)param_1;
    if (*(char *)(lVar2 + 0xb24) == '\x01') {
      uVar7 = FUN_141e396a0();
      FUN_140c95450(uVar7,auStack_58,lVar11);
      puVar3 = puStack_50;
      puVar1 = (ulonglong *)(puStack_50 + 2);
      uVar6 = *puStack_50;
LAB_14002ce42:
      do {
        uVar5 = uVar6;
        if ((uVar5 & 0x1ff0000) != 0) {
          LOCK();
          uVar6 = *puVar3;
          bVar14 = uVar5 == uVar6;
          if (bVar14) {
            *puVar3 = uVar5 + 0x100;
            uVar6 = uVar5;
          }
          UNLOCK();
          if (bVar14) {
            uVar10 = (uint)(*puVar1 >> 7) & 0xffffff;
            uVar9 = *puVar1;
            if ((*puVar1 >> 7 & 0xffffff) != 0) {
              do {
                if ((longlong)uVar9 < 0x100000000) {
                  uVar8 = *puVar1;
                }
                else {
                  LOCK();
                  uVar8 = *puVar1;
                  if (uVar9 == uVar8) {
                    *puVar1 = uVar9 - 0x100000000;
                    uVar8 = uVar9;
                  }
                  UNLOCK();
                  uVar6 = uVar5;
                  if (uVar9 == uVar8) goto LAB_14002ce42;
                }
                uVar10 = uVar10 - 1;
                uVar9 = uVar8;
              } while (uVar10 != 0);
            }
            uVar9 = *puVar1;
            do {
              while (uStack_70 = uVar9, (longlong)uStack_70 < 0x100000000) {
                cVar4 = FUN_140006180(puVar1,1,&uStack_70);
                uVar6 = uVar5;
                uVar9 = uStack_70;
                if (cVar4 != '\0') goto LAB_14002ce42;
              }
              LOCK();
              uVar9 = *puVar1;
              if (uStack_70 == uVar9) {
                *puVar1 = uStack_70 - 0x100000000;
                uVar9 = uStack_70;
              }
              UNLOCK();
              uVar6 = uVar5;
            } while (uStack_70 != uVar9);
          }
          goto LAB_14002ce42;
        }
        LOCK();
        uVar6 = *puVar3;
        bVar14 = uVar5 == uVar6;
        if (bVar14) {
          *puVar3 = uVar5 + 1;
          uVar6 = uVar5;
        }
        UNLOCK();
      } while (!bVar14);
      if (**(longlong **)(lVar11 + 0x40) == 0) {
        uVar9 = 0;
      }
      else {
        uVar9 = CONCAT71(uVar12,*(undefined1 *)(**(longlong **)(lVar11 + 0x40) + 0x18));
      }
      FUN_140323580(puVar3);
      uVar7 = FUN_141e396a0();
      FUN_141f96920(uVar7,auStack_58);
    }
    else if ((*(longlong **)(lVar11 + 0x40) == (longlong *)0x0) ||
            (lVar11 = **(longlong **)(lVar11 + 0x40), lVar11 == 0)) {
      uVar9 = 0;
    }
    else {
      uVar9 = CONCAT71(uVar12,*(undefined1 *)(lVar11 + 0x18));
    }
    lVar11 = *(longlong *)((longlong)pcStack_68 + 0x170);
    if (((lVar11 != 0) && (*(longlong *)(lVar11 + 0x498) != 0)) &&
       (lVar11 = *(longlong *)(lVar11 + 0x488), lVar11 != 0)) {
      pcVar13 = (char *)(lVar2 + 0xb24);
      uStack_5c = (uint)uVar9;
      pcStack_68 = pcVar13;
      do {
        lVar2 = *(longlong *)(*(longlong *)(lVar11 + 0x100) + 0x1a8);
        if (*(char *)(*(longlong *)
                       (*(longlong *)(unaff_GS_OFFSET + 0x58) + (ulonglong)__tls_index * 8) + 8) ==
            '\0') {
          func_0x0001455db994();
        }
        if (*pcVar13 == '\x01') {
          uVar7 = FUN_141e396a0();
          FUN_140c95450(uVar7,auStack_58,lVar2);
          puVar3 = puStack_50;
          puVar1 = (ulonglong *)(puStack_50 + 2);
          uVar6 = *puStack_50;
LAB_14002cfe5:
          do {
            uVar5 = uVar6;
            if ((uVar5 & 0x1ff0000) != 0) {
              LOCK();
              uVar6 = *puVar3;
              bVar14 = uVar5 == uVar6;
              if (bVar14) {
                *puVar3 = uVar5 + 0x100;
                uVar6 = uVar5;
              }
              UNLOCK();
              if (bVar14) {
                uVar10 = (uint)(*puVar1 >> 7) & 0xffffff;
                uVar9 = *puVar1;
                if ((*puVar1 >> 7 & 0xffffff) != 0) {
                  do {
                    if ((longlong)uVar9 < 0x100000000) {
                      uVar8 = *puVar1;
                    }
                    else {
                      LOCK();
                      uVar8 = *puVar1;
                      if (uVar9 == uVar8) {
                        *puVar1 = uVar9 - 0x100000000;
                        uVar8 = uVar9;
                      }
                      UNLOCK();
                      uVar6 = uVar5;
                      if (uVar9 == uVar8) goto LAB_14002cfe5;
                    }
                    uVar10 = uVar10 - 1;
                    uVar9 = uVar8;
                  } while (uVar10 != 0);
                }
                uVar9 = *puVar1;
                do {
                  while (uStack_70 = uVar9, (longlong)uStack_70 < 0x100000000) {
                    cVar4 = FUN_140006180(puVar1,1,&uStack_70);
                    uVar6 = uVar5;
                    uVar9 = uStack_70;
                    if (cVar4 != '\0') goto LAB_14002cfe5;
                  }
                  LOCK();
                  uVar9 = *puVar1;
                  if (uStack_70 == uVar9) {
                    *puVar1 = uStack_70 - 0x100000000;
                    uVar9 = uStack_70;
                  }
                  UNLOCK();
                  uVar6 = uVar5;
                } while (uStack_70 != uVar9);
              }
              goto LAB_14002cfe5;
            }
            LOCK();
            uVar6 = *puVar3;
            bVar14 = uVar5 == uVar6;
            if (bVar14) {
              *puVar3 = uVar5 + 1;
              uVar6 = uVar5;
            }
            UNLOCK();
          } while (!bVar14);
          if (**(longlong **)(lVar2 + 0x40) == 0) {
            FUN_140323580(puVar3);
            uVar7 = FUN_141e396a0();
            FUN_141f96920(uVar7,auStack_58);
            pcVar13 = pcStack_68;
          }
          else {
            cVar4 = *(char *)(**(longlong **)(lVar2 + 0x40) + 0x18);
            FUN_140323580(puVar3);
            uVar7 = FUN_141e396a0();
            FUN_141f96920(uVar7,auStack_58);
            pcVar13 = pcStack_68;
joined_r0x00014002d0a2:
            if (cVar4 != '\0') {
              uVar9 = 0xffffffff00000001;
              goto LAB_14002cda6;
            }
          }
        }
        else if ((*(longlong **)(lVar2 + 0x40) != (longlong *)0x0) &&
                (lVar2 = **(longlong **)(lVar2 + 0x40), lVar2 != 0)) {
          cVar4 = *(char *)(lVar2 + 0x18);
          goto joined_r0x00014002d0a2;
        }
        lVar11 = *(longlong *)(lVar11 + 0x478);
      } while (lVar11 != 0);
      uVar9 = (ulonglong)uStack_5c;
    }
  }
LAB_14002cda6:
  return uVar9 & 0xffffffff;
}

