// Recovered from game_scarlett_master.exe (GTA VI, Xbox Series X, PE32+ x64)
// Address: 140052c00  size: 2461 bytes
// Name:    FUN_140052c00
// Subsystem: core
//
// Referenced strings (0 in this body, 0 including direct callees):
// Callees: 
//
// Generated decompilation. Formatting follows MiscRef/GTAVSRC conventions;
// identifiers are recovered, not original. See ../../../README.md.

#include "gta6decomp/rage_types.h"


/* WARNING: Removing unreachable block (ram,0x000141fca4d7) */
/* WARNING: Removing unreachable block (ram,0x000141fca4e8) */
/* WARNING: Removing unreachable block (ram,0x000141fca4ef) */
/* WARNING: Removing unreachable block (ram,0x000141fca504) */
/* WARNING: Removing unreachable block (ram,0x000141fca4fa) */
/* WARNING: Removing unreachable block (ram,0x000141fca502) */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_140052c00(longlong param_1,undefined1 param_2,char param_3,longlong *param_4)

{
  int *piVar1;
  uint *puVar2;
  undefined1 auVar3 [16];
  int iVar4;
  undefined1 (*pauVar5) [16];
  longlong lVar6;
  float fVar7;
  float fVar8;
  float fVar9;
  float fVar10;
  char cVar11;
  byte bVar12;
  undefined1 uVar13;
  uint uVar14;
  longlong lVar15;
  ulonglong uVar16;
  undefined8 uVar17;
  longlong lVar18;
  longlong lVar19;
  undefined1 uVar20;
  uint uVar21;
  ulonglong *puVar22;
  longlong *plVar23;
  uint uVar24;
  undefined4 uVar25;
  ulonglong uVar26;
  bool bVar27;
  bool bVar28;
  undefined1 auVar29 [16];
  undefined1 auVar30 [16];
  undefined1 auVar31 [16];
  undefined1 auVar32 [16];
  undefined1 auVar33 [16];
  undefined1 auVar34 [16];
  undefined1 auVar35 [16];
  undefined1 auVar36 [16];
  undefined1 auVar37 [16];
  undefined1 auVar38 [16];
  undefined1 auVar39 [16];
  undefined1 auVar40 [16];
  undefined1 auVar41 [16];
  undefined1 auVar42 [16];
  byte bStack_99;
  undefined1 auStack_98 [16];
  undefined8 uStack_88;
  undefined8 uStack_80;
  undefined *puStack_60;
  undefined *puStack_40;
  
  switch(param_2) {
  case 0:
    if ((*(byte *)(param_1 + 0x12) & 1) != 0) {
      *(byte *)(param_1 + 0x12) = *(byte *)(param_1 + 0x12) & 0xfe;
      puStack_40 = &UNK_142bab2cb;
      lVar19 = (**(code **)(*(longlong *)**(undefined8 **)(param_1 + 8) + 0xa0))();
      lVar15 = *(longlong *)(*(longlong *)(param_1 + 0x18) + 0x80);
      if (lVar15 == 0) {
        lVar15 = 0;
      }
      else {
        lVar15 = *(longlong *)(lVar15 + 0x40);
      }
      if ((lVar19 != lVar15) && (lVar19 != 0)) {
        uVar26 = (ulonglong)
                 *(byte *)(*(longlong *)(param_1 + 0x18) + 0xc0 + (ulonglong)bRam000000014ab7f600);
        if ((uVar26 == 0xff) ||
           (*(longlong *)(*(longlong *)(param_1 + 0x18) + 0x10 + uVar26 * 8) == 0)) {
          puStack_60 = &UNK_141fca52f;
          uVar17 = FUN_141fca550();
          puStack_60 = &UNK_141fca541;
          FUN_140327f00(uVar17,*(undefined8 *)(param_1 + 0x18),lVar19);
          puStack_60 = &UNK_141fca54d;
          FUN_1451e6a10(*(undefined8 *)(param_1 + 0x18),uVar17);
        }
        else {
          puStack_60 = &UNK_141fca4a8;
          FUN_140327f80();
          uVar26 = (ulonglong)
                   *(byte *)(*(longlong *)(param_1 + 0x18) + 0xc0 + (ulonglong)DAT_14a95df40);
          if ((uVar26 != 0xff) &&
             (*(longlong *)(*(longlong *)(param_1 + 0x18) + 0x10 + uVar26 * 8) != 0)) {
            puStack_60 = &UNK_141fca4d3;
            FUN_1407d36f0();
          }
        }
        return;
      }
      return;
    }
    break;
  case 1:
    lVar15 = *param_4;
    if (lVar15 != 0) {
      FUN_140c18570(param_1,1,*(undefined1 *)(lVar15 + 0x10),*(undefined1 *)(lVar15 + 0x11),
                    *(undefined1 *)(lVar15 + 0x12),*(undefined1 *)(lVar15 + 0x13));
    }
    break;
  case 2:
    lVar15 = *(longlong *)(param_1 + 8);
    lVar19 = (ulonglong)((uint)DAT_14abbe8d0 * 2) * 3;
    bVar12 = *(byte *)(lVar15 + 0x18 + lVar19);
    uVar26 = (ulonglong)bVar12;
    if ((((((bVar12 == 0x1e) &&
           (bVar12 = *(byte *)(lVar15 + 0x19 + lVar19), uVar26 = (ulonglong)bVar12, bVar12 == 0x1e))
          && (bVar12 = *(byte *)(lVar15 + 0x1a + lVar19), uVar26 = (ulonglong)bVar12, bVar12 == 0x1e
             )) && ((bVar12 = *(byte *)(lVar15 + 0x1b + lVar19), uVar26 = (ulonglong)bVar12,
                    bVar12 == 0x1e &&
                    (bVar12 = *(byte *)(lVar15 + 0x1c + lVar19), uVar26 = (ulonglong)bVar12,
                    bVar12 == 0x1e)))) &&
        (bVar12 = *(byte *)(lVar15 + 0x1d + lVar19), uVar26 = (ulonglong)bVar12, bVar12 == 0x1e)) ||
       (lVar15 = *(longlong *)(lVar15 + 0xa0 + uVar26 * 8), lVar15 == 0)) {
      uVar13 = 0;
      uVar20 = 4;
      uVar25 = 0;
    }
    else {
      uVar13 = *(undefined1 *)(lVar15 + 0xe8);
      uVar25 = *(undefined4 *)(lVar15 + 0xa0);
      uVar20 = *(undefined1 *)(lVar15 + 0x98);
    }
    lVar15 = *(longlong *)(param_1 + 0x18);
    *(undefined4 *)(lVar15 + 0xd0) = uVar25;
    *(undefined1 *)(lVar15 + 0xd4) = uVar20;
    *(undefined1 *)(lVar15 + 0xd5) = uVar13;
    break;
  case 6:
    if ((*(byte *)(param_1 + 0x12) & 8) == 0) {
      return;
    }
    uVar26 = (ulonglong)*(byte *)(*(longlong *)(param_1 + 0x18) + 0xc0 + (ulonglong)DAT_14abc3ab0);
    if ((uVar26 != 0xff) &&
       (lVar15 = *(longlong *)(*(longlong *)(param_1 + 0x18) + 0x10 + uVar26 * 8), lVar15 != 0)) {
      FUN_140b80480(lVar15);
    }
    uVar17 = 0;
    goto code_r0x0001400532f7;
  case 7:
    uVar26 = (ulonglong)*(byte *)(*(longlong *)(param_1 + 0x18) + 0xc0 + (ulonglong)DAT_14abc3ab0);
    if ((uVar26 != 0xff) &&
       (lVar15 = *(longlong *)(*(longlong *)(param_1 + 0x18) + 0x10 + uVar26 * 8), lVar15 != 0)) {
      FUN_140b80480(lVar15);
    }
    uVar17 = 1;
code_r0x0001400532f7:
    FUN_144e9af80(param_1,uVar17);
    *(byte *)(param_1 + 0x12) = *(byte *)(param_1 + 0x12) & 0xf7;
    break;
  case 8:
    FUN_142bab2b0(param_1,1);
    if ((*(longlong *)(*(longlong *)(param_1 + 0x18) + 0xb0) == 0) &&
       (lVar15 = FUN_14556e230(**(undefined8 **)(param_1 + 8)), lVar15 != 0)) {
      *(longlong *)(*(longlong *)(param_1 + 0x18) + 0xb0) = lVar15;
    }
    break;
  case 9:
    lVar15 = *(longlong *)(param_1 + 0x18);
    lVar19 = *(longlong *)(param_1 + 8);
    cVar11 = func_0x000145455000(*(undefined8 *)(lVar15 + 0xb8),*(undefined8 *)(param_1 + 0x98));
    if (cVar11 != '\0') {
      if (param_3 == '\x04') {
        lVar6 = (ulonglong)((uint)DAT_14abbe8d0 * 2) * 3;
        uVar26 = (ulonglong)*(byte *)(lVar19 + 0x18 + lVar6);
        if (((((((uVar26 == 0x1e) ||
                (lVar18 = *(longlong *)(lVar19 + 0xa0 + uVar26 * 8), lVar18 == 0)) ||
               ((*(byte *)(lVar18 + 0x12) & 4) != 0)) &&
              (((uVar26 = (ulonglong)
                          *(byte *)(lVar19 + (ulonglong)((uint)DAT_14abbe8d0 * 2) * 3 + 0x19),
                uVar26 == 0x1e || (lVar18 = *(longlong *)(lVar19 + 0xa0 + uVar26 * 8), lVar18 == 0))
               || ((*(byte *)(lVar18 + 0x12) & 4) != 0)))) &&
             (((uVar26 = (ulonglong)*(byte *)(lVar19 + 0x1a + lVar6), uVar26 == 0x1e ||
               (lVar18 = *(longlong *)(lVar19 + 0xa0 + uVar26 * 8), lVar18 == 0)) ||
              ((*(byte *)(lVar18 + 0x12) & 4) != 0)))) &&
            (((uVar26 = (ulonglong)*(byte *)(lVar19 + 0x1b + lVar6), uVar26 == 0x1e ||
              (lVar18 = *(longlong *)(lVar19 + 0xa0 + uVar26 * 8), lVar18 == 0)) ||
             ((*(byte *)(lVar18 + 0x12) & 4) != 0)))) &&
           (((uVar26 = (ulonglong)*(byte *)(lVar19 + 0x1c + lVar6), uVar26 == 0x1e ||
             (lVar18 = *(longlong *)(lVar19 + 0xa0 + uVar26 * 8), lVar18 == 0)) ||
            ((*(byte *)(lVar18 + 0x12) & 4) != 0)))) {
          uVar26 = (ulonglong)*(byte *)(lVar19 + 0x1d + lVar6);
          if (uVar26 == 0x1e) {
            return;
          }
          lVar18 = *(longlong *)(lVar19 + 0xa0 + uVar26 * 8);
          if (lVar18 == 0) {
            return;
          }
          if ((*(byte *)(lVar18 + 0x12) & 4) != 0) {
            return;
          }
        }
        bVar12 = *(byte *)(lVar18 + 0x119);
        if ((bVar12 & 0x10) == 0) {
          if (*(char *)(lVar18 + 0x116) == '\0') {
            bVar12 = bVar12 | *(byte *)(lVar18 + 0x11a);
          }
          if ((bVar12 & 8) != 0) {
            return;
          }
        }
        puVar2 = (uint *)(lVar15 + 0x90);
        puVar22 = (ulonglong *)(lVar15 + 0xa0);
        uVar24 = *(uint *)(lVar15 + 0x90);
code_r0x000140053174:
        do {
          uVar14 = uVar24;
          if ((uVar14 & 0x10000ff) != 0) {
            LOCK();
            uVar24 = *puVar2;
            bVar27 = uVar14 == uVar24;
            if (bVar27) {
              *puVar2 = uVar14 + 0x10000;
              uVar24 = uVar14;
            }
            UNLOCK();
            if (bVar27) {
              uVar21 = (uint)(*puVar22 >> 7) & 0xffffff;
              uVar26 = *puVar22;
              if ((*puVar22 >> 7 & 0xffffff) != 0) {
                do {
                  if ((longlong)uVar26 < 0x100000000) {
                    uVar16 = *puVar22;
                  }
                  else {
                    LOCK();
                    uVar16 = *puVar22;
                    if (uVar26 == uVar16) {
                      *puVar22 = uVar26 - 0x100000000;
                      uVar16 = uVar26;
                    }
                    UNLOCK();
                    uVar24 = uVar14;
                    if (uVar26 == uVar16) goto code_r0x000140053174;
                  }
                  uVar21 = uVar21 - 1;
                  uVar26 = uVar16;
                } while (uVar21 != 0);
              }
              uVar26 = *puVar22;
              do {
                auStack_98._0_8_ = uVar26;
                uVar16 = uVar26;
                while ((longlong)uVar16 < 0x100000000) {
                  cVar11 = FUN_140006180(puVar22,1,auStack_98);
                  uVar24 = uVar14;
                  if (cVar11 != '\0') goto code_r0x000140053174;
                  uVar16 = auStack_98._0_8_;
                }
                LOCK();
                uVar26 = *puVar22;
                if (uVar16 == uVar26) {
                  *puVar22 = uVar16 - 0x100000000;
                  uVar26 = uVar16;
                }
                UNLOCK();
                uVar24 = uVar14;
              } while (auStack_98._0_8_ != uVar26);
            }
            goto code_r0x000140053174;
          }
          LOCK();
          uVar24 = *puVar2;
          bVar27 = uVar14 == uVar24;
          if (bVar27) {
            *puVar2 = uVar14 | 0x1000000;
            uVar24 = uVar14;
          }
          UNLOCK();
        } while (!bVar27);
        auStack_98[8] = 0;
        uVar24 = *(uint *)(lVar19 + 400);
        if ((ulonglong)uVar24 != 0) {
          uVar26 = 0;
          do {
            if ((*(byte *)(lVar19 + 0x1bd + uVar26 * 4) & 8) != 0) {
              func_0x000144e74b90(*(undefined8 *)(lVar19 + 0xa0 + uVar26 * 8),0xb,0xff,auStack_98);
            }
            uVar26 = uVar26 + 1;
          } while (uVar24 != uVar26);
        }
      }
      else {
        puVar2 = (uint *)(lVar15 + 0x90);
        puVar22 = (ulonglong *)(lVar15 + 0xa0);
        uVar24 = *(uint *)(lVar15 + 0x90);
code_r0x000140053467:
        do {
          uVar14 = uVar24;
          if ((uVar14 & 0x10000ff) != 0) {
            LOCK();
            uVar24 = *puVar2;
            bVar27 = uVar14 == uVar24;
            if (bVar27) {
              *puVar2 = uVar14 + 0x10000;
              uVar24 = uVar14;
            }
            UNLOCK();
            if (bVar27) {
              uVar21 = (uint)(*puVar22 >> 7) & 0xffffff;
              uVar26 = *puVar22;
              if ((*puVar22 >> 7 & 0xffffff) != 0) {
                do {
                  if ((longlong)uVar26 < 0x100000000) {
                    uVar16 = *puVar22;
                  }
                  else {
                    LOCK();
                    uVar16 = *puVar22;
                    if (uVar26 == uVar16) {
                      *puVar22 = uVar26 - 0x100000000;
                      uVar16 = uVar26;
                    }
                    UNLOCK();
                    uVar24 = uVar14;
                    if (uVar26 == uVar16) goto code_r0x000140053467;
                  }
                  uVar21 = uVar21 - 1;
                  uVar26 = uVar16;
                } while (uVar21 != 0);
              }
              uVar26 = *puVar22;
              do {
                auStack_98._0_8_ = uVar26;
                uVar16 = uVar26;
                while ((longlong)uVar16 < 0x100000000) {
                  cVar11 = FUN_140006180(puVar22,1,auStack_98);
                  uVar24 = uVar14;
                  if (cVar11 != '\0') goto code_r0x000140053467;
                  uVar16 = auStack_98._0_8_;
                }
                LOCK();
                uVar26 = *puVar22;
                if (uVar16 == uVar26) {
                  *puVar22 = uVar16 - 0x100000000;
                  uVar26 = uVar16;
                }
                UNLOCK();
                uVar24 = uVar14;
              } while (auStack_98._0_8_ != uVar26);
            }
            goto code_r0x000140053467;
          }
          LOCK();
          uVar24 = *puVar2;
          bVar27 = uVar14 == uVar24;
          if (bVar27) {
            *puVar2 = uVar14 | 0x1000000;
            uVar24 = uVar14;
          }
          UNLOCK();
        } while (!bVar27);
        auStack_98[8] = 0;
        uVar24 = *(uint *)(lVar19 + 400);
        if ((ulonglong)uVar24 != 0) {
          uVar26 = 0;
          do {
            if ((*(byte *)(lVar19 + 0x1bd + uVar26 * 4) & 8) != 0) {
              func_0x000144e74b90(*(undefined8 *)(lVar19 + 0xa0 + uVar26 * 8),0xb,0xff,auStack_98);
            }
            uVar26 = uVar26 + 1;
          } while (uVar24 != uVar26);
        }
      }
      FUN_140465670(lVar15 + 0x90);
    }
    break;
  case 10:
    if ((param_3 == '\x03') && (uVar24 = *(uint *)(param_1 + 0x24), (ulonglong)uVar24 != 0)) {
      lVar15 = *(longlong *)(param_1 + 0x28);
      lVar19 = 0;
      do {
        lVar6 = *(longlong *)(lVar15 + lVar19);
        if (lVar6 != 0) {
          LOCK();
          piVar1 = (int *)(lVar6 + 0x30);
          *piVar1 = *piVar1 + -1;
          UNLOCK();
          if (*piVar1 == 0) {
            func_0x000144e3f350(lVar6);
            func_0x000144d9c130(lVar6,0x40);
          }
        }
        lVar19 = lVar19 + 8;
      } while ((ulonglong)uVar24 << 3 != lVar19);
      *(undefined4 *)(param_1 + 0x24) = 0;
    }
    break;
  case 0xb:
    FUN_1453d6030(*(undefined8 *)(param_1 + 0x18));
    *(undefined8 *)(param_1 + 0x98) = *(undefined8 *)(*(longlong *)(param_1 + 0x18) + 0xb8);
    break;
  case 0xe:
    uVar26 = (ulonglong)
             *(byte *)(*(longlong *)(param_1 + 0x18) + 0xc0 + (ulonglong)bRam0000000149e4eb88);
    if ((uVar26 != 0xff) &&
       (lVar15 = *(longlong *)(*(longlong *)(param_1 + 0x18) + 0x10 + uVar26 * 8), lVar15 != 0)) {
      func_0x0001455b4db0(*(undefined8 *)(param_1 + 8),&bStack_99);
      iVar4 = *(int *)(lVar15 + 0x24);
      lVar15 = *(longlong *)(lVar15 + 0x28);
      if (iVar4 != 0) {
        lVar19 = 0;
        do {
          if (*(byte *)(lVar15 + 0x60 + lVar19) < bStack_99) {
            *(undefined1 *)(lVar15 + 0x61 + lVar19) = 2;
          }
          lVar19 = lVar19 + 0x70;
        } while ((longlong)iVar4 * 0x70 - lVar19 != 0);
      }
      return;
    }
    break;
  case 0x10:
    lVar15 = *(longlong *)(param_1 + 0x18);
    uVar26 = (ulonglong)*(byte *)(lVar15 + 0xc0 + (ulonglong)bRam0000000149e4eb88);
    if ((uVar26 != 0xff) && (lVar19 = *(longlong *)(lVar15 + 0x10 + uVar26 * 8), lVar19 != 0)) {
      FUN_1447b0c60(*(undefined4 *)(lVar19 + 0x24),*(undefined8 *)(lVar19 + 0x28));
      lVar15 = *(longlong *)(param_1 + 0x18);
    }
    uVar26 = (ulonglong)*(byte *)(lVar15 + 0xc0 + (ulonglong)DAT_149fee6b8);
    if ((uVar26 != 0xff) && (lVar19 = *(longlong *)(lVar15 + 0x10 + uVar26 * 8), lVar19 != 0)) {
      puVar2 = (uint *)(lVar15 + 0x90);
      puVar22 = (ulonglong *)(lVar15 + 0x98);
      uVar24 = *(uint *)(lVar15 + 0x90);
code_r0x000140052d23:
      do {
        uVar14 = uVar24;
        if ((uVar14 & 0x1ff0000) != 0) {
          LOCK();
          uVar24 = *puVar2;
          bVar27 = uVar14 == uVar24;
          if (bVar27) {
            *puVar2 = uVar14 + 0x100;
            uVar24 = uVar14;
          }
          UNLOCK();
          if (bVar27) {
            uVar21 = (uint)(*puVar22 >> 7) & 0xffffff;
            uVar26 = *puVar22;
            if ((*puVar22 >> 7 & 0xffffff) != 0) {
              do {
                if ((longlong)uVar26 < 0x100000000) {
                  uVar16 = *puVar22;
                }
                else {
                  LOCK();
                  uVar16 = *puVar22;
                  if (uVar26 == uVar16) {
                    *puVar22 = uVar26 - 0x100000000;
                    uVar16 = uVar26;
                  }
                  UNLOCK();
                  uVar24 = uVar14;
                  if (uVar26 == uVar16) goto code_r0x000140052d23;
                }
                uVar21 = uVar21 - 1;
                uVar26 = uVar16;
              } while (uVar21 != 0);
            }
            uVar26 = *puVar22;
            do {
              auStack_98._0_8_ = uVar26;
              uVar16 = uVar26;
              while ((longlong)uVar16 < 0x100000000) {
                cVar11 = FUN_140006180(puVar22,1,auStack_98);
                uVar24 = uVar14;
                if (cVar11 != '\0') goto code_r0x000140052d23;
                uVar16 = auStack_98._0_8_;
              }
              LOCK();
              uVar26 = *puVar22;
              if (uVar16 == uVar26) {
                *puVar22 = uVar16 - 0x100000000;
                uVar26 = uVar16;
              }
              UNLOCK();
              uVar24 = uVar14;
            } while (auStack_98._0_8_ != uVar26);
          }
          goto code_r0x000140052d23;
        }
        LOCK();
        uVar24 = *puVar2;
        bVar27 = uVar14 == uVar24;
        if (bVar27) {
          *puVar2 = uVar14 + 1;
          uVar24 = uVar14;
        }
        UNLOCK();
        if (bVar27) {
          FUN_1420a27a0(*(undefined4 *)(lVar19 + 0x20),*(undefined8 *)(lVar19 + 0x28));
          LOCK();
          uVar24 = *puVar2;
          *puVar2 = *puVar2 - 1;
          UNLOCK();
          uVar24 = uVar24 - 1;
          if ((char)uVar24 == '\0') {
            if ((uVar24 & 0xff0000) == 0) {
              if ((uVar24 & 0xff00) != 0) {
                uVar24 = *puVar2;
                do {
                  LOCK();
                  uVar14 = *puVar2;
                  bVar27 = uVar24 == uVar14;
                  if (bVar27) {
                    *puVar2 = uVar24 & 0xffff00ff;
                    uVar14 = uVar24;
                  }
                  uVar24 = uVar14;
                  UNLOCK();
                } while (!bVar27);
                uVar24 = uVar24 >> 8 & 0xff;
                if (uVar24 != 0) {
                  plVar23 = (longlong *)(lVar15 + 0x98);
                  lVar15 = *(longlong *)(lVar15 + 0x98);
                  do {
                    while (lVar15 < 0) {
                      puStack_60 = &UNK_14032369a;
                      cVar11 = FUN_1400062d0(plVar23,uVar24,&stack0xffffffffffffffc8);
                      if (cVar11 != '\0') {
                        return;
                      }
                    }
                    LOCK();
                    lVar19 = *plVar23;
                    if (lVar15 == lVar19) {
                      *plVar23 = lVar15 + ((ulonglong)uVar24 << 0x20);
                      lVar19 = lVar15;
                    }
                    UNLOCK();
                    bVar27 = lVar15 != lVar19;
                    lVar15 = lVar19;
                  } while (bVar27);
                }
              }
            }
            else {
              plVar23 = (longlong *)(lVar15 + 0xa0);
              do {
                if ((uVar24 & 0xff0000) == 0) {
                  return;
                }
                LOCK();
                uVar14 = *puVar2;
                bVar27 = uVar24 == uVar14;
                if (bVar27) {
                  *puVar2 = uVar24 - 0x10000;
                  uVar14 = uVar24;
                }
                UNLOCK();
                if (bVar27) {
                  lVar15 = *plVar23;
                  do {
                    while (-1 < lVar15) {
                      LOCK();
                      lVar19 = *plVar23;
                      if (lVar15 == lVar19) {
                        *plVar23 = lVar15 + 0x100000000;
                        lVar19 = lVar15;
                      }
                      UNLOCK();
                      bVar28 = lVar15 == lVar19;
                      uVar14 = uVar24;
                      lVar15 = lVar19;
                      if (bVar28) goto code_r0x00014032361d;
                    }
                    puStack_60 = &UNK_1403235fe;
                    cVar11 = FUN_1400062d0(plVar23,1,&stack0xffffffffffffffc8);
                    uVar14 = uVar24;
                  } while (cVar11 == '\0');
                }
code_r0x00014032361d:
                uVar24 = uVar14;
              } while (!bVar27);
            }
          }
          return;
        }
      } while( true );
    }
    break;
  case 0x11:
    pauVar5 = (undefined1 (*) [16])*param_4;
    if (pauVar5 != (undefined1 (*) [16])0x0) {
      auVar3 = *pauVar5;
      auVar30 = pauVar5[1];
      auVar35 = pauVar5[2];
      uStack_88 = *(undefined8 *)pauVar5[3];
      uStack_80 = *(undefined8 *)(pauVar5[3] + 8);
      auVar36 = vblendps_avx(auVar3,auVar30,2);
      auVar36 = vblendps_avx(auVar35,auVar36,3);
      auVar31 = vshufps_avx(auVar36,auVar36,0x49);
      auVar32 = vshufps_avx(auVar36,auVar36,0x92);
      auVar33 = vshufps_avx(auVar36,auVar36,0x24);
      auVar39._0_4_ = auVar32._0_4_ + auVar31._0_4_;
      auVar39._4_4_ = auVar32._4_4_ + auVar31._4_4_;
      auVar39._8_4_ = auVar32._8_4_ + auVar31._8_4_;
      auVar39._12_4_ = auVar32._12_4_ + auVar31._12_4_;
      auVar29._0_4_ = auVar39._0_4_ + auVar33._0_4_;
      auVar29._4_4_ = auVar39._4_4_ + auVar33._4_4_;
      auVar29._8_4_ = auVar39._8_4_ + auVar33._8_4_;
      auVar29._12_4_ = auVar39._12_4_ + auVar33._12_4_;
      auVar36 = vsubps_avx(auVar36,auVar39);
      auVar36 = vblendps_avx(auVar36,auVar29,8);
      auVar37._0_4_ = auVar36._0_4_ + _DAT_145fc6ed8;
      auVar37._4_4_ = auVar36._4_4_ + _DAT_145fc6ed8;
      auVar37._8_4_ = auVar36._8_4_ + _DAT_145fc6ed8;
      auVar37._12_4_ = auVar36._12_4_ + _DAT_145fc6ed8;
      auVar36 = vrsqrtps_avx(auVar37);
      fVar7 = auVar36._0_4_;
      fVar8 = auVar36._4_4_;
      fVar9 = auVar36._8_4_;
      fVar10 = auVar36._12_4_;
      auVar36 = vblendps_avx(auVar30,auVar35,3);
      auVar36 = vshufps_avx(auVar36,auVar3,0x12);
      auVar3 = vblendps_avx(auVar3,auVar30,3);
      auVar3 = vblendps_avx(auVar3,auVar35,2);
      auVar3 = vshufps_avx(auVar3,auVar3,9);
      auVar32._0_4_ = auVar36._0_4_ + auVar3._0_4_;
      auVar32._4_4_ = auVar36._4_4_ + auVar3._4_4_;
      auVar32._8_4_ = auVar36._8_4_ + auVar3._8_4_;
      auVar32._12_4_ = auVar36._12_4_ + auVar3._12_4_;
      auVar35 = vsubps_avx(auVar36,auVar3);
      auVar34._0_4_ =
           _DAT_145fc6edc *
           ((-(_DAT_145fc6edc * fVar7 * fVar7 * auVar37._0_4_) + _DAT_145fc6edc) * fVar7 + fVar7);
      auVar34._4_4_ =
           _DAT_145fc6edc *
           ((-(_DAT_145fc6edc * fVar8 * fVar8 * auVar37._4_4_) + _DAT_145fc6edc) * fVar8 + fVar8);
      auVar34._8_4_ =
           _DAT_145fc6edc *
           ((-(_DAT_145fc6edc * fVar9 * fVar9 * auVar37._8_4_) + _DAT_145fc6edc) * fVar9 + fVar9);
      auVar34._12_4_ =
           _DAT_145fc6edc *
           ((-(_DAT_145fc6edc * fVar10 * fVar10 * auVar37._12_4_) + _DAT_145fc6edc) * fVar10 +
           fVar10);
      uVar25 = *(undefined4 *)(pauVar5[2] + 8);
      auVar42._4_4_ = uVar25;
      auVar42._0_4_ = uVar25;
      auVar42._8_4_ = uVar25;
      auVar42._12_4_ = uVar25;
      auVar3 = vblendps_avx(auVar32,auVar35,1);
      auVar30 = vblendps_avx(auVar32,auVar35,2);
      auVar31 = vshufps_avx(auVar32,auVar35,0xa1);
      auVar35 = vblendps_avx(auVar35,auVar37,8);
      auVar32 = vshufps_avx(auVar3,auVar3,0x18);
      auVar36 = vshufpd_avx(auVar30,auVar30,1);
      auVar3 = vblendps_avx(auVar31,auVar37,4);
      auVar30 = vblendps_avx(auVar32,auVar37,1);
      auVar36 = vblendps_avx(auVar36,auVar37,2);
      auVar38._0_4_ = auVar34._0_4_ * auVar30._0_4_;
      auVar38._4_4_ = auVar34._0_4_ * auVar30._4_4_;
      auVar38._8_4_ = auVar34._0_4_ * auVar30._8_4_;
      auVar38._12_4_ = auVar34._0_4_ * auVar30._12_4_;
      auVar30 = vshufps_avx(auVar34,auVar34,0x55);
      auVar40._0_4_ = auVar30._0_4_ * auVar36._0_4_;
      auVar40._4_4_ = auVar30._4_4_ * auVar36._4_4_;
      auVar40._8_4_ = auVar30._8_4_ * auVar36._8_4_;
      auVar40._12_4_ = auVar30._12_4_ * auVar36._12_4_;
      auVar30 = vshufps_avx(auVar34,auVar34,0xaa);
      auVar36 = vshufps_avx(auVar34,auVar34,0xff);
      auVar33._0_4_ = auVar30._0_4_ * auVar3._0_4_;
      auVar33._4_4_ = auVar30._4_4_ * auVar3._4_4_;
      auVar33._8_4_ = auVar30._8_4_ * auVar3._8_4_;
      auVar33._12_4_ = auVar30._12_4_ * auVar3._12_4_;
      auVar31._0_4_ = auVar36._0_4_ * auVar35._0_4_;
      auVar31._4_4_ = auVar36._4_4_ * auVar35._4_4_;
      auVar31._8_4_ = auVar36._8_4_ * auVar35._8_4_;
      auVar31._12_4_ = auVar36._12_4_ * auVar35._12_4_;
      uVar25 = *(undefined4 *)*pauVar5;
      auVar35._4_4_ = uVar25;
      auVar35._0_4_ = uVar25;
      auVar35._8_4_ = uVar25;
      auVar35._12_4_ = uVar25;
      uVar25 = *(undefined4 *)(pauVar5[1] + 4);
      auVar41._4_4_ = uVar25;
      auVar41._0_4_ = uVar25;
      auVar41._8_4_ = uVar25;
      auVar41._12_4_ = uVar25;
      auVar3 = vcmpps_avx(auVar35,auVar41,1);
      auVar30 = vcmpps_avx(auVar41,auVar42,1);
      auVar35 = vcmpps_avx(auVar35,auVar42,1);
      auVar3 = vblendvps_avx(auVar38,auVar40,auVar3);
      auVar36._0_4_ = auVar35._0_4_ & auVar30._0_4_;
      auVar36._4_4_ = auVar35._4_4_ & auVar30._4_4_;
      auVar36._8_4_ = auVar35._8_4_ & auVar30._8_4_;
      auVar36._12_4_ = auVar35._12_4_ & auVar30._12_4_;
      auVar3 = vblendvps_avx(auVar3,auVar33,auVar36);
      auVar30 = vcmpps_avx(ZEXT416(0) << 0x20,auVar29,1);
      auVar30._4_4_ = auVar30._0_4_;
      auVar30._8_4_ = auVar30._0_4_;
      auVar30._12_4_ = auVar30._0_4_;
      auStack_98 = vblendvps_avx(auVar3,auVar31,auVar30);
      func_0x000141a3f920(*(undefined8 *)(param_1 + 0x18));
    }
  }
  return;
}

