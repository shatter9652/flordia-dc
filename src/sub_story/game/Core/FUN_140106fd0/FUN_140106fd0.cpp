// Recovered from game_scarlett_master.exe (GTA VI, Xbox Series X, PE32+ x64)
// Address: 140106fd0  size: 3277 bytes
// Name:    FUN_140106fd0
// Subsystem: core
//
// Referenced strings (0 in this body, 0 including direct callees):
// Callees: FUN_1400062d0, FUN_14553f3b0, FUN_1409b35f0, FUN_144dd13d0, FUN_140006180, FUN_142d78dd0
//
// Generated decompilation. Formatting follows MiscRef/GTAVSRC conventions;
// identifiers are recovered, not original. See ../../../README.md.

#include "gta6decomp/rage_types.h"


/* WARNING: Removing unreachable block (ram,0x0001401071b0) */
/* WARNING: Removing unreachable block (ram,0x0001401071bd) */
/* WARNING: Removing unreachable block (ram,0x0001401071db) */
/* WARNING: Removing unreachable block (ram,0x00014010769e) */
/* WARNING: Removing unreachable block (ram,0x0001401076ab) */
/* WARNING: Removing unreachable block (ram,0x0001401076c9) */
/* WARNING: Removing unreachable block (ram,0x0001401071a5) */
/* WARNING: Removing unreachable block (ram,0x000140107693) */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_140106fd0(ulonglong param_1)

{
  uint *puVar1;
  int *piVar2;
  ushort uVar3;
  int iVar4;
  float fVar5;
  float fVar6;
  float fVar7;
  uint uVar8;
  uint uVar9;
  float fVar10;
  float fVar11;
  float fVar12;
  float fVar13;
  char cVar14;
  longlong lVar15;
  ulonglong uVar16;
  longlong lVar17;
  ulonglong uVar18;
  byte bVar19;
  short sVar20;
  ulonglong uVar21;
  ulonglong uVar22;
  uint uVar23;
  longlong lVar24;
  byte bVar25;
  undefined4 uVar27;
  undefined8 unaff_RDI;
  ushort uVar28;
  uint uVar29;
  ulonglong uVar30;
  longlong lVar31;
  ulonglong *puVar32;
  uint uVar33;
  longlong unaff_GS_OFFSET;
  bool bVar34;
  float fVar35;
  float fVar36;
  undefined1 auVar37 [16];
  undefined1 auVar38 [16];
  undefined1 auVar39 [16];
  undefined1 auVar40 [16];
  undefined1 auVar41 [16];
  undefined1 auVar42 [16];
  undefined1 auVar43 [16];
  undefined8 *unaff_XMM6_Qa;
  code *unaff_XMM6_Qb;
  undefined8 uStack_98;
  undefined8 uStack_90;
  ulonglong uStack_88;
  longlong lStack_80;
  undefined8 uStack_78;
  ulonglong uStack_70;
  undefined8 uStack_68;
  float fStack_60;
  undefined4 uStack_5c;
  undefined8 *puStack_58;
  code *pcStack_50;
  undefined *puStack_48;
  undefined4 uVar26;
  
  uVar30 = (ulonglong)((*(uint *)(param_1 + 0x118) & 0xffff) << 4);
  if (*(short *)(*(longlong *)(_DAT_14abbf348 + 0x28) + 8 + uVar30) ==
      (short)(*(uint *)(param_1 + 0x118) >> 0x10)) {
    lVar24 = *(longlong *)(*(longlong *)(_DAT_14abbf348 + 0x28) + uVar30);
  }
  else {
    lVar24 = 0;
  }
  puStack_58 = unaff_XMM6_Qa;
  pcStack_50 = unaff_XMM6_Qb;
  cVar14 = func_0x0001455ad5a0(*(undefined8 *)(param_1 + 0x120));
  if (cVar14 != '\0') {
    FUN_1409b35f0(*(undefined8 *)(param_1 + 0x1160),3);
  }
  lVar31 = *(longlong *)(param_1 + 0x110);
  if (lVar31 != 0) {
    if (*(char *)(*(longlong *)(*(longlong *)(unaff_GS_OFFSET + 0x58) + (ulonglong)__tls_index * 8)
                 + 8) == '\0') {
      func_0x0001455db994();
    }
    bVar25 = *(byte *)(**(longlong **)(unaff_GS_OFFSET + 0x58) + 0x138b);
    lVar15 = func_0x0001450f21c0(*(undefined4 *)(lVar31 + 0x9c));
    bVar25 = lVar15 != 0 & bVar25;
    uVar30 = CONCAT71((int7)((ulonglong)lVar31 >> 8),bVar25);
    uVar26 = (undefined4)uVar30;
    if (bVar25 == 1) {
      uVar27 = (undefined4)CONCAT71((int7)((ulonglong)unaff_RDI >> 8),1);
      uVar30 = (ulonglong)*(ushort *)(lVar15 + 0x58e);
      if ((uVar30 & 0xff) == 0xff) {
LAB_1401070bd:
        bVar25 = *(byte *)(lVar15 + 0x58f);
        bVar19 = *(byte *)(lVar15 + 0x58e);
        uVar3 = *(ushort *)(lVar15 + 0x58e);
        uVar33 = (uint)bVar19;
        LOCK();
        uVar28 = *(ushort *)(lVar15 + 0x58e);
        bVar34 = uVar3 == uVar28;
        if (bVar34) {
          *(ushort *)(lVar15 + 0x58e) = (bVar25 + 1) * 0x100 | (ushort)bVar19;
          uVar28 = uVar3;
        }
        UNLOCK();
        uVar29 = (uint)uVar28;
        if (!bVar34) {
          do {
            uVar33 = uVar29;
            uVar3 = (ushort)uVar33;
            LOCK();
            uVar28 = *(ushort *)(lVar15 + 0x58e);
            if (uVar3 == uVar28) {
              *(ushort *)(lVar15 + 0x58e) = uVar3 + 0x100;
              uVar29 = uVar33;
            }
            else {
              uVar29 = (uint)uVar28;
            }
            UNLOCK();
          } while (uVar3 != uVar28);
          bVar25 = (byte)(uVar33 >> 8);
        }
        uStack_78 = CONCAT44(uVar27,(undefined4)uStack_78);
        uStack_70 = CONCAT44(uStack_70._4_4_,uVar26);
        if (bVar25 == 0) {
          do {
            do {
              bVar25 = (byte)(_DAT_14a9b3da8 >> 0x20);
            } while ((short)(_DAT_14a9b3da8 >> 0x20) == 0x40);
            _DAT_14a9b3da8 =
                 (ulonglong)((int)_DAT_14a9b3da8 + 1) |
                 (_DAT_14a9b3da8 >> 0x30) << 0x20 |
                 (ulonglong)*(ushort *)((_DAT_14a9b3da8 >> 0x30) * 2 + 0x14a9b3d20) << 0x30;
            LOCK();
            UNLOCK();
            uVar28 = (ushort)bVar25;
          } while (0x3f < uVar28);
          uVar33 = uVar33 & 0xff | 0x100;
          uVar29 = uVar28 | 0x100;
          while( true ) {
            LOCK();
            uVar3 = *(ushort *)(lVar15 + 0x58e);
            bVar34 = (ushort)uVar33 == uVar3;
            if (bVar34) {
              *(ushort *)(lVar15 + 0x58e) = (ushort)uVar29;
            }
            else {
              uVar33 = (uint)uVar3;
            }
            UNLOCK();
            if (bVar34) break;
            uVar29 = uVar33 & 0xffffff00 | (uint)uVar28;
          }
        }
        else {
          while (bVar25 = (byte)uVar33, bVar25 == 0xff) {
            uVar33 = (uint)*(ushort *)(lVar15 + 0x58e);
          }
        }
        uVar16 = (ulonglong)bVar25;
        puVar1 = (uint *)(uVar16 * 0x18 + 0x14a9b3708);
        puVar32 = (ulonglong *)(uVar16 * 0x18 + 0x14a9b3718);
        uVar33 = *puVar1;
        lStack_80 = lVar24;
        uStack_68 = param_1;
LAB_140107258:
        do {
          uVar29 = uVar33;
          if ((uVar29 & 0x10000ff) != 0) {
            LOCK();
            uVar33 = *puVar1;
            bVar34 = uVar29 == uVar33;
            if (bVar34) {
              *puVar1 = uVar29 + 0x10000;
              uVar33 = uVar29;
            }
            UNLOCK();
            if (bVar34) {
              uVar23 = (uint)(*puVar32 >> 7) & 0xffffff;
              uVar30 = *puVar32;
              if ((*puVar32 >> 7 & 0xffffff) != 0) {
                do {
                  if ((longlong)uVar30 < 0x100000000) {
                    uVar21 = *puVar32;
                  }
                  else {
                    LOCK();
                    uVar21 = *puVar32;
                    if (uVar30 == uVar21) {
                      *puVar32 = uVar30 - 0x100000000;
                      uVar21 = uVar30;
                    }
                    UNLOCK();
                    uVar33 = uVar29;
                    if (uVar30 == uVar21) goto LAB_140107258;
                  }
                  uVar23 = uVar23 - 1;
                  uVar30 = uVar21;
                } while (uVar23 != 0);
              }
              uVar30 = *puVar32;
              do {
                while (uStack_88 = uVar30, (longlong)uStack_88 < 0x100000000) {
                  cVar14 = FUN_140006180(puVar32,1,&uStack_88);
                  uVar33 = uVar29;
                  uVar30 = uStack_88;
                  if (cVar14 != '\0') goto LAB_140107258;
                }
                LOCK();
                uVar30 = *puVar32;
                if (uStack_88 == uVar30) {
                  *puVar32 = uStack_88 - 0x100000000;
                  uVar30 = uStack_88;
                }
                UNLOCK();
                uVar33 = uVar29;
              } while (uStack_88 != uVar30);
            }
            goto LAB_140107258;
          }
          LOCK();
          uVar33 = *puVar1;
          bVar34 = uVar29 == uVar33;
          if (bVar34) {
            *puVar1 = uVar29 | 0x1000000;
            uVar33 = uVar29;
          }
          UNLOCK();
        } while (!bVar34);
        uVar30 = uStack_70 & 0xffffffff;
        uVar16 = 1L << (uVar16 & 0x3f);
        lVar31 = (ulonglong)(bVar25 >> 6) * 8;
        lVar24 = **(longlong **)(unaff_GS_OFFSET + 0x58);
        puVar32 = (ulonglong *)(lVar24 + 0x1398 + lVar31);
        *puVar32 = *puVar32 | uVar16;
        puVar32 = (ulonglong *)(lVar24 + 0x1390 + lVar31);
        *puVar32 = *puVar32 | uVar16;
        lVar24 = lStack_80;
        param_1 = uStack_68;
        goto LAB_14010733c;
      }
      uVar16 = (uVar30 & 0xff) >> 6;
      if ((*(ulonglong *)(**(longlong **)(unaff_GS_OFFSET + 0x58) + 0x1390 + uVar16 * 8) >>
           (uVar30 & 0x3f) & 1) == 0) {
        uVar21 = 1L << (uVar30 & 0x3f);
        uVar30 = *(ulonglong *)(**(longlong **)(unaff_GS_OFFSET + 0x58) + 0x1398 + uVar16 * 8);
        if ((uVar30 & uVar21) != 0) {
          uStack_70 = CONCAT44(uStack_70._4_4_,uVar26);
          *(ulonglong *)(**(longlong **)(unaff_GS_OFFSET + 0x58) + 0x1398 + uVar16 * 8) =
               ~uVar21 & uVar30;
          uVar30 = (ulonglong)(byte)*(undefined2 *)(lVar15 + 0x58e);
          LOCK();
          piVar2 = (int *)(uVar30 * 0x18 + 0x14a9b3708);
          iVar4 = *piVar2;
          *piVar2 = *piVar2 + -1;
          UNLOCK();
          uVar33 = iVar4 - 1;
          lStack_80 = lVar24;
          if ((char)uVar33 == '\0') {
            lVar24 = uVar30 * 0x18;
            puVar1 = (uint *)(lVar24 + 0x14a9b3708);
            if ((uVar33 & 0xff0000) == 0) {
              if ((uVar33 & 0xff00) != 0) {
                uVar33 = *puVar1;
                do {
                  LOCK();
                  uVar29 = *puVar1;
                  bVar34 = uVar33 == uVar29;
                  if (bVar34) {
                    *puVar1 = uVar33 & 0xffff00ff;
                    uVar29 = uVar33;
                  }
                  uVar33 = uVar29;
                  UNLOCK();
                } while (!bVar34);
                uVar33 = uVar33 >> 8 & 0xff;
                if (uVar33 != 0) {
                  puVar32 = (ulonglong *)(lVar24 + 0x14a9b3710);
                  uVar16 = *(ulonglong *)(lVar24 + 0x14a9b3710);
                  do {
                    while (uStack_88 = uVar16, (longlong)uStack_88 < 0) {
                      cVar14 = FUN_1400062d0(puVar32,uVar33);
                      uVar16 = uStack_88;
                      if (cVar14 != '\0') goto LAB_140107798;
                    }
                    LOCK();
                    uVar16 = *puVar32;
                    if (uStack_88 == uVar16) {
                      *puVar32 = uStack_88 + ((ulonglong)uVar33 << 0x20);
                      uVar16 = uStack_88;
                    }
                    UNLOCK();
                  } while (uStack_88 != uVar16);
                }
              }
            }
            else {
              puVar32 = (ulonglong *)(lVar24 + 0x14a9b3718);
              do {
                if ((uVar33 & 0xff0000) == 0) break;
                LOCK();
                uVar29 = *puVar1;
                bVar34 = uVar33 == uVar29;
                if (bVar34) {
                  *puVar1 = uVar33 - 0x10000;
                  uVar29 = uVar33;
                }
                UNLOCK();
                if (bVar34) {
                  uVar16 = *puVar32;
                  do {
                    while (uStack_88 = uVar16, (longlong)uStack_88 < 0) {
                      cVar14 = FUN_1400062d0(puVar32,1);
                      uVar29 = uVar33;
                      uVar16 = uStack_88;
                      if (cVar14 != '\0') goto LAB_140107b7f;
                    }
                    LOCK();
                    uVar16 = *puVar32;
                    if (uStack_88 == uVar16) {
                      *puVar32 = uStack_88 + 0x100000000;
                      uVar16 = uStack_88;
                    }
                    UNLOCK();
                    uVar29 = uVar33;
                  } while (uStack_88 != uVar16);
                }
LAB_140107b7f:
                uVar33 = uVar29;
              } while (!bVar34);
            }
          }
LAB_140107798:
          uVar3 = *(ushort *)(lVar15 + 0x58e);
          sVar20 = *(byte *)(lVar15 + 0x58f) - 1;
          bVar25 = (byte)sVar20;
          LOCK();
          uVar28 = *(ushort *)(lVar15 + 0x58e);
          bVar34 = uVar3 == uVar28;
          if (bVar34) {
            *(ushort *)(lVar15 + 0x58e) =
                 (ushort)(byte)(-(bVar25 == 0) | *(byte *)(lVar15 + 0x58e)) | sVar20 * 0x100;
            uVar28 = uVar3;
          }
          uVar33 = (uint)uVar28;
          UNLOCK();
          while (!bVar34) {
            uVar28 = (ushort)uVar33 & 0xff;
            bVar25 = (char)(uVar33 >> 8) - 1;
            if (bVar25 == 0) {
              uVar28 = 0xff;
            }
            LOCK();
            uVar3 = *(ushort *)(lVar15 + 0x58e);
            bVar34 = (ushort)uVar33 == uVar3;
            if (bVar34) {
              *(ushort *)(lVar15 + 0x58e) = uVar28 | (ushort)bVar25 << 8;
            }
            else {
              uVar33 = (uint)uVar3;
            }
            UNLOCK();
          }
          if (bVar25 == 0) {
            uVar22 = _DAT_14a9b3da8 >> 0x20 & 0xffff;
            uVar16 = _DAT_14a9b3da8 >> 0x30;
            uVar21 = _DAT_14a9b3da8 & 0xffffffff;
            do {
              *(short *)(uVar30 * 2 + 0x14a9b3d20) = (short)uVar22;
              uVar18 = uVar21 & 0xffffffff;
              uVar21 = (uVar22 & 0xffff) << 0x20 | uVar16 << 0x30 | uVar18;
              LOCK();
              bVar34 = uVar21 != _DAT_14a9b3da8;
              uVar16 = uVar22 << 0x30 | uVar30 << 0x20 | uVar18;
              if (bVar34) {
                uVar21 = _DAT_14a9b3da8;
                uVar16 = _DAT_14a9b3da8;
              }
              _DAT_14a9b3da8 = uVar16;
              UNLOCK();
              uVar22 = uVar21 >> 0x20;
              uVar16 = uVar21 >> 0x30;
            } while (bVar34);
          }
          uVar27 = 0;
          lVar24 = lStack_80;
          uVar26 = (undefined4)uStack_70;
        }
        goto LAB_1401070bd;
      }
      cVar14 = '\0';
      uStack_78 = uStack_78 & 0xffffffff;
    }
    else {
      uStack_78 = uStack_78 & 0xffffffff;
LAB_14010733c:
      cVar14 = (char)uVar30;
      if (lVar15 == 0) goto LAB_140107907;
    }
    lVar31 = *(longlong *)(param_1 + 0x1160);
    FUN_14553f3b0(*(undefined4 *)(lVar31 + 0x9c),*(undefined2 *)(param_1 + 0x11ae),&fStack_60);
    FUN_142d78dd0(lVar15,CONCAT44(uStack_5c,fStack_60),lVar31);
    if (cVar14 != '\0') {
      lVar31 = **(longlong **)(unaff_GS_OFFSET + 0x58);
      bVar19 = (byte)*(undefined2 *)(lVar15 + 0x58e);
      bVar25 = bVar19 & 0x3f;
      uVar30 = -2L << bVar25 | 0xfffffffffffffffeU >> 0x40 - bVar25;
      lVar17 = (ulonglong)(bVar19 >> 6) * 8;
      uStack_70 = lVar31 + 0x1398;
      puVar32 = (ulonglong *)(lVar31 + 0x1398 + lVar17);
      *puVar32 = *puVar32 & uVar30;
      puVar32 = (ulonglong *)(lVar31 + 0x1390 + lVar17);
      *puVar32 = *puVar32 & uVar30;
      uVar30 = (ulonglong)(byte)*(undefined2 *)(lVar15 + 0x58e);
      lVar31 = uVar30 * 0x18;
      puVar1 = (uint *)(lVar31 + 0x14a9b3708);
      uVar33 = *puVar1;
      do {
        LOCK();
        uVar29 = *puVar1;
        bVar34 = uVar33 == uVar29;
        if (bVar34) {
          *puVar1 = uVar33 & 0xfeffffff;
          uVar29 = uVar33;
        }
        uVar33 = uVar29;
        UNLOCK();
      } while (!bVar34);
      lStack_80 = lVar24;
      uStack_68 = param_1;
      if ((uVar33 & 0xff0000) == 0) {
        if ((uVar33 & 0xff00) != 0) {
          uVar33 = *puVar1;
          do {
            LOCK();
            uVar29 = *puVar1;
            bVar34 = uVar33 == uVar29;
            if (bVar34) {
              *puVar1 = uVar33 & 0xffff00ff;
              uVar29 = uVar33;
            }
            uVar33 = uVar29;
            UNLOCK();
          } while (!bVar34);
          uVar33 = uVar33 >> 8 & 0xff;
          if (uVar33 != 0) {
            puVar32 = (ulonglong *)(lVar31 + 0x14a9b3710);
            uVar16 = *(ulonglong *)(lVar31 + 0x14a9b3710);
            do {
              while (uStack_88 = uVar16, (longlong)uStack_88 < 0) {
                cVar14 = FUN_1400062d0(puVar32,uVar33);
                uVar16 = uStack_88;
                if (cVar14 != '\0') goto LAB_140107513;
              }
              LOCK();
              uVar16 = *puVar32;
              if (uStack_88 == uVar16) {
                *puVar32 = uStack_88 + ((ulonglong)uVar33 << 0x20);
                uVar16 = uStack_88;
              }
              UNLOCK();
            } while (uStack_88 != uVar16);
          }
        }
      }
      else {
        uVar33 = uVar33 & 0xfeffffff;
        puVar32 = (ulonglong *)(lVar31 + 0x14a9b3718);
        do {
          if ((uVar33 & 0xff0000) == 0) break;
          LOCK();
          uVar29 = *puVar1;
          bVar34 = uVar33 == uVar29;
          if (bVar34) {
            *puVar1 = uVar33 - 0x10000;
            uVar29 = uVar33;
          }
          UNLOCK();
          if (bVar34) {
            uVar16 = *puVar32;
            do {
              while (uStack_88 = uVar16, (longlong)uStack_88 < 0) {
                cVar14 = FUN_1400062d0(puVar32,1);
                uVar29 = uVar33;
                uVar16 = uStack_88;
                if (cVar14 != '\0') goto LAB_140107490;
              }
              LOCK();
              uVar16 = *puVar32;
              if (uStack_88 == uVar16) {
                *puVar32 = uStack_88 + 0x100000000;
                uVar16 = uStack_88;
              }
              UNLOCK();
              uVar29 = uVar33;
            } while (uStack_88 != uVar16);
          }
LAB_140107490:
          uVar33 = uVar29;
        } while (!bVar34);
      }
LAB_140107513:
      uVar3 = *(ushort *)(lVar15 + 0x58e);
      sVar20 = *(byte *)(lVar15 + 0x58f) - 1;
      bVar25 = (byte)sVar20;
      LOCK();
      uVar28 = *(ushort *)(lVar15 + 0x58e);
      bVar34 = uVar3 == uVar28;
      if (bVar34) {
        *(ushort *)(lVar15 + 0x58e) =
             (ushort)(byte)(-(bVar25 == 0) | *(byte *)(lVar15 + 0x58e)) | sVar20 * 0x100;
        uVar28 = uVar3;
      }
      uVar33 = (uint)uVar28;
      UNLOCK();
      while (!bVar34) {
        uVar28 = (ushort)uVar33 & 0xff;
        bVar25 = (char)(uVar33 >> 8) - 1;
        if (bVar25 == 0) {
          uVar28 = 0xff;
        }
        LOCK();
        uVar3 = *(ushort *)(lVar15 + 0x58e);
        bVar34 = (ushort)uVar33 == uVar3;
        if (bVar34) {
          *(ushort *)(lVar15 + 0x58e) = uVar28 | (ushort)bVar25 << 8;
        }
        else {
          uVar33 = (uint)uVar3;
        }
        UNLOCK();
      }
      if (bVar25 == 0) {
        uVar22 = _DAT_14a9b3da8 >> 0x20 & 0xffff;
        uVar16 = _DAT_14a9b3da8 >> 0x30;
        uVar21 = _DAT_14a9b3da8 & 0xffffffff;
        do {
          *(short *)(uVar30 * 2 + 0x14a9b3d20) = (short)uVar22;
          uVar18 = uVar21 & 0xffffffff;
          uVar21 = (uVar22 & 0xffff) << 0x20 | uVar16 << 0x30 | uVar18;
          LOCK();
          bVar34 = uVar21 != _DAT_14a9b3da8;
          uVar16 = uVar22 << 0x30 | uVar30 << 0x20 | uVar18;
          if (bVar34) {
            uVar21 = _DAT_14a9b3da8;
            uVar16 = _DAT_14a9b3da8;
          }
          _DAT_14a9b3da8 = uVar16;
          UNLOCK();
          uVar22 = uVar21 >> 0x20;
          uVar16 = uVar21 >> 0x30;
        } while (bVar34);
      }
      lVar24 = lStack_80;
      param_1 = uStack_68;
      if ((char)(uStack_78 >> 0x20) == '\0') {
        bVar25 = *(byte *)(lVar15 + 0x58f);
        bVar19 = *(byte *)(lVar15 + 0x58e);
        uVar3 = *(ushort *)(lVar15 + 0x58e);
        uVar33 = (uint)bVar19;
        LOCK();
        uVar28 = *(ushort *)(lVar15 + 0x58e);
        bVar34 = uVar3 == uVar28;
        if (bVar34) {
          *(ushort *)(lVar15 + 0x58e) = (bVar25 + 1) * 0x100 | (ushort)bVar19;
          uVar28 = uVar3;
        }
        UNLOCK();
        uVar29 = (uint)uVar28;
        if (!bVar34) {
          do {
            uVar33 = uVar29;
            uVar3 = (ushort)uVar33;
            LOCK();
            uVar28 = *(ushort *)(lVar15 + 0x58e);
            if (uVar3 == uVar28) {
              *(ushort *)(lVar15 + 0x58e) = uVar3 + 0x100;
              uVar29 = uVar33;
            }
            else {
              uVar29 = (uint)uVar28;
            }
            UNLOCK();
          } while (uVar3 != uVar28);
          bVar25 = (byte)(uVar33 >> 8);
        }
        if (bVar25 == 0) {
          do {
            do {
              bVar25 = (byte)(_DAT_14a9b3da8 >> 0x20);
            } while ((short)(_DAT_14a9b3da8 >> 0x20) == 0x40);
            _DAT_14a9b3da8 =
                 (ulonglong)((int)_DAT_14a9b3da8 + 1) |
                 (_DAT_14a9b3da8 >> 0x30) << 0x20 |
                 (ulonglong)*(ushort *)((_DAT_14a9b3da8 >> 0x30) * 2 + 0x14a9b3d20) << 0x30;
            LOCK();
            UNLOCK();
            uVar28 = (ushort)bVar25;
          } while (0x3f < uVar28);
          uVar33 = uVar33 & 0xff | 0x100;
          uVar29 = uVar28 | 0x100;
          while( true ) {
            LOCK();
            uVar3 = *(ushort *)(lVar15 + 0x58e);
            bVar34 = (ushort)uVar33 == uVar3;
            if (bVar34) {
              *(ushort *)(lVar15 + 0x58e) = (ushort)uVar29;
            }
            else {
              uVar33 = (uint)uVar3;
            }
            UNLOCK();
            if (bVar34) break;
            uVar29 = uVar33 & 0xffffff00 | (uint)uVar28;
          }
        }
        else {
          while (bVar25 = (byte)uVar33, bVar25 == 0xff) {
            uVar33 = (uint)*(ushort *)(lVar15 + 0x58e);
          }
        }
        uVar30 = (ulonglong)bVar25;
        puVar1 = (uint *)(uVar30 * 0x18 + 0x14a9b3708);
        puVar32 = (ulonglong *)(uVar30 * 0x18 + 0x14a9b3710);
        uVar33 = *puVar1;
LAB_140107844:
        do {
          uVar29 = uVar33;
          if ((uVar29 & 0x1ff0000) != 0) {
            LOCK();
            uVar33 = *puVar1;
            bVar34 = uVar29 == uVar33;
            if (bVar34) {
              *puVar1 = uVar29 + 0x100;
              uVar33 = uVar29;
            }
            UNLOCK();
            if (bVar34) {
              uVar23 = (uint)(*puVar32 >> 7) & 0xffffff;
              uVar16 = *puVar32;
              if ((*puVar32 >> 7 & 0xffffff) != 0) {
                do {
                  if ((longlong)uVar16 < 0x100000000) {
                    uVar21 = *puVar32;
                  }
                  else {
                    LOCK();
                    uVar21 = *puVar32;
                    if (uVar16 == uVar21) {
                      *puVar32 = uVar16 - 0x100000000;
                      uVar21 = uVar16;
                    }
                    UNLOCK();
                    uVar33 = uVar29;
                    if (uVar16 == uVar21) goto LAB_140107844;
                  }
                  uVar23 = uVar23 - 1;
                  uVar16 = uVar21;
                } while (uVar23 != 0);
              }
              uVar16 = *puVar32;
              do {
                while (uStack_88 = uVar16, (longlong)uStack_88 < 0x100000000) {
                  cVar14 = FUN_140006180(puVar32,1,&uStack_88);
                  uVar33 = uVar29;
                  uVar16 = uStack_88;
                  if (cVar14 != '\0') goto LAB_140107844;
                }
                LOCK();
                uVar16 = *puVar32;
                if (uStack_88 == uVar16) {
                  *puVar32 = uStack_88 - 0x100000000;
                  uVar16 = uStack_88;
                }
                UNLOCK();
                uVar33 = uVar29;
              } while (uStack_88 != uVar16);
            }
            goto LAB_140107844;
          }
          LOCK();
          uVar33 = *puVar1;
          bVar34 = uVar29 == uVar33;
          if (bVar34) {
            *puVar1 = uVar29 + 1;
            uVar33 = uVar29;
          }
          UNLOCK();
        } while (!bVar34);
        puVar32 = (ulonglong *)(uStack_70 + (ulonglong)(bVar25 >> 6) * 8);
        *puVar32 = *puVar32 | 1L << (uVar30 & 0x3f);
        lVar24 = lStack_80;
        param_1 = uStack_68;
      }
    }
  }
LAB_140107907:
  uVar30 = (ulonglong)((*(uint *)(param_1 + 0x118) & 0xffff) << 4);
  if (((*(short *)(*(longlong *)(_DAT_14abbf348 + 0x28) + 8 + uVar30) ==
        (short)(*(uint *)(param_1 + 0x118) >> 0x10)) &&
      (lVar31 = *(longlong *)(*(longlong *)(_DAT_14abbf348 + 0x28) + uVar30), lVar31 != 0)) &&
     ((*(byte *)(lVar31 + 0x154) & 1) != 0)) {
    lVar31 = *(longlong *)(lVar31 + 0x48);
    uVar26 = *(undefined4 *)(*(longlong *)(param_1 + 0x1160) + 0x9c);
    lVar15 = func_0x000144fe37f0(uVar26);
    if (lVar31 != 0) {
      if ((*(char *)(lVar31 + 0x30) == '\x02') && (*(int *)(lVar15 + 0x30) != 0)) {
        uVar33 = *(uint *)(_DAT_146c40d28 + 0x68);
        uVar29 = (uVar33 >> 0x10 ^ uVar33) * -0x7a143595;
        uVar29 = (uVar29 >> 0xd ^ uVar29) * -0x3d4d51cb;
        uVar29 = uVar29 >> 0x10 ^ uVar29;
        uVar23 = uVar29 >> 7;
        bVar19 = (byte)uVar29;
        bVar25 = bVar19 & 0x7f;
        auVar37._0_8_ =
             CONCAT17(bVar19,CONCAT16(bVar19,CONCAT15(bVar19,CONCAT14(bVar19,CONCAT13(bVar19,
                                                  CONCAT12(bVar19,CONCAT11(bVar19,bVar19))))))) &
             0x7f7f7f7f7f7f7f7f;
        auVar37[8] = bVar25;
        auVar37[9] = bVar25;
        auVar37[10] = bVar25;
        auVar37[0xb] = bVar25;
        auVar37[0xc] = bVar25;
        auVar37[0xd] = bVar25;
        auVar37[0xe] = bVar25;
        auVar37[0xf] = bVar25;
        while( true ) {
          uVar23 = uVar23 & *(int *)(lVar15 + 0x30) - 1U;
          auVar38 = *(undefined1 (*) [16])(*(longlong *)(lVar15 + 0x38) + (ulonglong)uVar23 * 0x90);
          auVar40 = vpcmpeqb_avx(auVar38,auVar37);
          uVar28 = (ushort)(SUB161(auVar40 >> 7,0) & 1) |
                   (ushort)(SUB161(auVar40 >> 0xf,0) & 1) << 1 |
                   (ushort)(SUB161(auVar40 >> 0x17,0) & 1) << 2 |
                   (ushort)(SUB161(auVar40 >> 0x1f,0) & 1) << 3 |
                   (ushort)(SUB161(auVar40 >> 0x27,0) & 1) << 4 |
                   (ushort)(SUB161(auVar40 >> 0x2f,0) & 1) << 5 |
                   (ushort)(SUB161(auVar40 >> 0x37,0) & 1) << 6 |
                   (ushort)(SUB161(auVar40 >> 0x3f,0) & 1) << 7 |
                   (ushort)(SUB161(auVar40 >> 0x47,0) & 1) << 8 |
                   (ushort)(SUB161(auVar40 >> 0x4f,0) & 1) << 9 |
                   (ushort)(SUB161(auVar40 >> 0x57,0) & 1) << 10 |
                   (ushort)(SUB161(auVar40 >> 0x5f,0) & 1) << 0xb |
                   (ushort)(SUB161(auVar40 >> 0x67,0) & 1) << 0xc |
                   (ushort)(SUB161(auVar40 >> 0x6f,0) & 1) << 0xd |
                   (ushort)(SUB161(auVar40 >> 0x77,0) & 1) << 0xe |
                   (ushort)(byte)(auVar40[0xf] >> 7) << 0xf;
          if (uVar28 != 0) {
            uVar29 = (uint)uVar28;
            do {
              uVar8 = 0;
              for (uVar9 = uVar29; (uVar9 & 1) == 0; uVar9 = uVar9 >> 1 | 0x80000000) {
                uVar8 = uVar8 + 1;
              }
              if (*(uint *)((ulonglong)uVar23 * 0x90 + *(longlong *)(lVar15 + 0x38) + 0x10 +
                           (ulonglong)uVar8 * 8) == uVar33) {
                if (((uVar8 | uVar23 << 4) != 0xffffffff) && (0.0 < *(float *)(param_1 + 0xf8))) {
                  lVar15 = func_0x000144db7a10(uVar26);
                  fVar35 = (float)FUN_144dd13d0(*(undefined8 *)(lVar15 + 8));
                  lVar15 = func_0x0001450bb780(*(undefined4 *)(lVar31 + 0x9c));
                  fVar36 = (float)FUN_144dd13d0(*(undefined8 *)(lVar15 + 8));
                  if (fVar36 < fVar35) {
                    lVar15 = func_0x000144db7a10(*(undefined4 *)
                                                  (*(longlong *)(param_1 + 0x1160) + 0x9c));
                    fVar35 = (float)FUN_144dd13d0(*(undefined8 *)(lVar15 + 8));
                    lVar15 = func_0x0001450bb780(*(undefined4 *)(lVar31 + 0x9c));
                    fVar36 = (float)FUN_144dd13d0(*(undefined8 *)(lVar15 + 8));
                    auVar37 = vminss_avx(ZEXT416((uint)((fVar35 * _DAT_145fc7020) / fVar36)),
                                         ZEXT416(_DAT_14615ae90));
                    *(int *)(param_1 + 0xacc) = auVar37._0_4_;
                  }
                }
                goto LAB_140107a26;
              }
              uVar29 = uVar29 - 1 & uVar29;
            } while (uVar29 != 0);
          }
          auVar38 = vpsignb_avx(auVar38,auVar38);
          if ((((((((((((((((SUB161(auVar38 >> 7,0) & 1) != 0 || (SUB161(auVar38 >> 0xf,0) & 1) != 0
                           ) || (SUB161(auVar38 >> 0x17,0) & 1) != 0) ||
                         (SUB161(auVar38 >> 0x1f,0) & 1) != 0) ||
                        (SUB161(auVar38 >> 0x27,0) & 1) != 0) ||
                       (SUB161(auVar38 >> 0x2f,0) & 1) != 0) || (SUB161(auVar38 >> 0x37,0) & 1) != 0
                      ) || (SUB161(auVar38 >> 0x3f,0) & 1) != 0) ||
                    (SUB161(auVar38 >> 0x47,0) & 1) != 0) || (SUB161(auVar38 >> 0x4f,0) & 1) != 0)
                  || (SUB161(auVar38 >> 0x57,0) & 1) != 0) || (SUB161(auVar38 >> 0x5f,0) & 1) != 0)
                || (SUB161(auVar38 >> 0x67,0) & 1) != 0) || (SUB161(auVar38 >> 0x6f,0) & 1) != 0) ||
              (SUB161(auVar38 >> 0x77,0) & 1) != 0) || auVar38[0xf] < '\0') break;
          uVar23 = uVar23 + 1;
        }
      }
      goto LAB_140107a26;
    }
  }
  lVar31 = 0;
LAB_140107a26:
  if (lVar24 != 0) {
    uVar30 = *(ulonglong *)(param_1 + 0x120);
    if ((uVar30 != 0xffffffffffffffff && lVar31 == 0) &&
       (fVar35 = *(float *)(param_1 + 0x238) - *(float *)(param_1 + 0xb8), _DAT_145fc7020 < fVar35))
    {
      auVar40._0_12_ = ZEXT812(0);
      auVar40._12_4_ = 0;
      auVar38._0_4_ = *(float *)(param_1 + 0xf0) * _DAT_14614f7f0;
      auVar38._4_4_ = *(float *)(param_1 + 0xf4) * _UNK_14614f7f4;
      auVar38._8_4_ = *(float *)(param_1 + 0xf8) * _UNK_14614f7f8;
      auVar38._12_4_ = *(float *)(param_1 + 0xfc) * _UNK_14614f7fc;
      auVar37 = vblendps_avx(auVar38,auVar40,8);
      auVar37 = vhaddps_avx(auVar37,auVar37);
      auVar37 = vhaddps_avx(auVar37,auVar37);
      if ((_DAT_145fc6f48 < auVar37._0_4_) &&
         ((_DAT_145fc6ed8 <= auVar37._0_4_ ||
          (fVar36 = (float)func_0x000145f40740(), fVar36 * _DAT_146159c20 < _DAT_146159ce0)))) {
        if ((*(int *)(*(longlong *)
                       (*(longlong *)(unaff_GS_OFFSET + 0x58) + (ulonglong)__tls_index * 8) + 4) <
             _DAT_14a01fe48) && (FUN_1455db8cc(&DAT_14a01fe48), _DAT_14a01fe48 == -1)) {
          func_0x000140d993b0(0x14a01fe50);
          _DAT_14a01fe40 = 0x14a01fe50;
          FUN_1455db934(&DAT_14a01fe48);
        }
        lVar31 = *(longlong *)(param_1 + 0x1188);
        if (*(longlong *)(param_1 + 0x1188) == 0) {
          lVar31 = _DAT_14a01fe40;
        }
        fVar10 = *(float *)(lVar31 + 0x50);
        fVar11 = *(float *)(lVar31 + 0x54);
        fVar12 = *(float *)(lVar31 + 0x58);
        fVar13 = *(float *)(lVar31 + 0x5c);
        auVar42._0_12_ = ZEXT812(0);
        auVar42._12_4_ = 0;
        auVar41._0_4_ = fVar10 * fVar10;
        auVar41._4_4_ = fVar11 * fVar11;
        auVar41._8_4_ = fVar12 * fVar12;
        auVar41._12_4_ = fVar13 * fVar13;
        auVar37 = vblendps_avx(auVar41,auVar42,8);
        auVar37 = vhaddps_avx(auVar37,auVar37);
        auVar38 = vhaddps_avx(auVar37,auVar37);
        auVar37 = vrsqrtps_avx(auVar38);
        fVar36 = auVar37._0_4_;
        fVar5 = auVar37._4_4_;
        fVar6 = auVar37._8_4_;
        fVar7 = auVar37._12_4_;
        fVar36 = (fVar36 * fVar36 * auVar38._0_4_ * _DAT_145fc6f08 - _DAT_145fc6f08) * fVar36 +
                 fVar36;
        auVar43._4_4_ = _DAT_145fc6f14;
        auVar43._0_4_ = _DAT_145fc6f14;
        auVar43._8_4_ = _DAT_145fc6f14;
        auVar43._12_4_ = _DAT_145fc6f14;
        auVar37 = vcmpps_avx(auVar43,auVar38,1);
        auVar39._0_4_ =
             (float)(auVar37._0_4_ & (uint)(fVar36 * fVar10)) * *(float *)(param_1 + 0xf0);
        auVar39._4_4_ =
             (float)(auVar37._4_4_ &
                    (uint)(((fVar5 * fVar5 * auVar38._4_4_ * _DAT_145fc6f08 - _DAT_145fc6f08) *
                            fVar5 + fVar5) * fVar11)) * *(float *)(param_1 + 0xf4);
        auVar39._8_4_ =
             (float)(auVar37._8_4_ &
                    (uint)(((fVar6 * fVar6 * auVar38._8_4_ * _DAT_145fc6f08 - _DAT_145fc6f08) *
                            fVar6 + fVar6) * fVar12)) * *(float *)(param_1 + 0xf8);
        auVar39._12_4_ =
             (float)(auVar37._12_4_ &
                    (uint)(((fVar7 * fVar7 * auVar38._12_4_ * _DAT_145fc6f08 - _DAT_145fc6f08) *
                            fVar7 + fVar7) * fVar13)) * *(float *)(param_1 + 0xfc);
        auVar37 = vblendps_avx(auVar39,auVar42,8);
        auVar37 = vhaddps_avx(auVar37,auVar37);
        auVar37 = vhaddps_avx(auVar37,auVar37);
        if (auVar37._0_4_ < 0.0) {
          auVar40 = vcmpss_avx(ZEXT416(_DAT_146159bfc),auVar38,2);
          fVar36 = (float)(auVar40._0_4_ & _DAT_145fc6f4c & (uint)(fVar36 * auVar38._0_4_));
          if (fVar36 <= _DAT_146159bd0) {
            puStack_58 = &uStack_78;
            pcStack_50 = FUN_1424f2ec0;
            uStack_68 = CONCAT44(auVar37._0_4_,fVar36);
            puStack_48 = &UNK_1403a85f0;
            uStack_78 = param_1;
            uStack_70 = uVar30;
            fStack_60 = fVar35;
            FUN_1402e5b80(4,&puStack_58);
          }
        }
      }
    }
    if (*(int *)(param_1 + 0x220) == 0) {
      uStack_88 = *(ulonglong *)(param_1 + 0xf0);
      lStack_80 = *(undefined8 *)(param_1 + 0xf8);
      uStack_98 = *(undefined8 *)(param_1 + 0x960);
      uStack_90 = *(undefined8 *)(param_1 + 0x968);
      FUN_1420fd0a0(*(undefined8 *)(param_1 + 0x1160),lVar24,&uStack_98,&uStack_88,
                    (*(byte *)(param_1 + 0x9c) & 4) >> 2,param_1);
    }
  }
  return;
}

