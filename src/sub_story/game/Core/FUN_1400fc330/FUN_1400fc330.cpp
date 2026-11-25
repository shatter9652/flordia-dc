// Recovered from game_scarlett_master.exe (GTA VI, Xbox Series X, PE32+ x64)
// Address: 1400fc330  size: 2740 bytes
// Name:    FUN_1400fc330
// Subsystem: core
//
// Referenced strings (0 in this body, 0 including direct callees):
// Callees: FUN_140006180, FUN_1400062d0
//
// Generated decompilation. Formatting follows MiscRef/GTAVSRC conventions;
// identifiers are recovered, not original. See ../../../README.md.

#include "gta6decomp/rage_types.h"


/* WARNING: Removing unreachable block (ram,0x0001400fc483) */
/* WARNING: Removing unreachable block (ram,0x0001400fc490) */
/* WARNING: Removing unreachable block (ram,0x0001400fc4ae) */
/* WARNING: Removing unreachable block (ram,0x0001400fc855) */
/* WARNING: Removing unreachable block (ram,0x0001400fc862) */
/* WARNING: Removing unreachable block (ram,0x0001400fc880) */
/* WARNING: Removing unreachable block (ram,0x0001400fc478) */
/* WARNING: Removing unreachable block (ram,0x0001400fc84a) */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1400fc330(undefined8 param_1,longlong param_2)

{
  uint *puVar1;
  int *piVar2;
  ushort uVar3;
  char cVar4;
  uint uVar5;
  longlong lVar6;
  ulonglong uVar7;
  ulonglong uVar8;
  byte bVar9;
  byte bVar10;
  short sVar11;
  uint uVar12;
  ulonglong uVar13;
  ulonglong uVar14;
  int iVar15;
  uint uVar16;
  undefined8 unaff_RBP;
  ushort uVar17;
  ulonglong uVar18;
  ulonglong uVar19;
  longlong lVar20;
  ulonglong *puVar21;
  longlong unaff_GS_OFFSET;
  bool bVar22;
  ulonglong uStack_58;
  ulonglong uStack_50;
  longlong lStack_48;
  
  if (*(char *)(param_2 + 0x30) != '\x03') {
    func_0x0001450a7200(param_1,*(undefined8 *)(param_2 + 0x38));
    goto LAB_1400fcb68;
  }
  if (*(char *)(*(longlong *)(*(longlong *)(unaff_GS_OFFSET + 0x58) + (ulonglong)__tls_index * 8) +
               8) == '\0') {
    func_0x0001455db994();
  }
  uVar19 = **(ulonglong **)(unaff_GS_OFFSET + 0x58);
  cVar4 = *(char *)(uVar19 + 0x138b);
  lVar6 = func_0x0001450f21c0(*(undefined4 *)(param_2 + 0x9c));
  lStack_48 = param_2;
  if ((lVar6 == 0) || (cVar4 == '\0')) {
    if (lVar6 != 0) goto LAB_1400fc41e;
  }
  else {
    uVar18 = (ulonglong)*(ushort *)(lVar6 + 0x58e);
    uVar7 = uVar18 & 0xff;
    if ((uVar7 == 0xff) ||
       ((*(ulonglong *)(**(longlong **)(unaff_GS_OFFSET + 0x58) + 0x1398 + (uVar7 >> 6) * 8) >>
         (uVar18 & 0x3f) & 1) == 0)) {
      uVar12 = (uint)*(ushort *)(lVar6 + 0x58e);
      iVar15 = (uVar12 & 0xffffff00) + 0x100 + (int)uVar7;
      while( true ) {
        LOCK();
        uVar17 = *(ushort *)(lVar6 + 0x58e);
        bVar22 = (ushort)uVar12 == uVar17;
        if (bVar22) {
          *(ushort *)(lVar6 + 0x58e) = (ushort)iVar15;
        }
        else {
          uVar12 = (uint)uVar17;
        }
        UNLOCK();
        if (bVar22) break;
        uVar18 = (ulonglong)uVar12;
        iVar15 = uVar12 + 0x100;
      }
      if ((ushort)uVar18 < 0x100) {
        do {
          do {
            uVar17 = (ushort)(_DAT_14a9b3da8 >> 0x20);
          } while (uVar17 == 0x40);
          uVar7 = (ulonglong)((int)_DAT_14a9b3da8 + 1) |
                  (_DAT_14a9b3da8 >> 0x30) << 0x20 |
                  (ulonglong)*(ushort *)((_DAT_14a9b3da8 >> 0x30) * 2 + 0x14a9b3d20) << 0x30;
          LOCK();
          UNLOCK();
          bVar10 = (byte)(_DAT_14a9b3da8 >> 0x20);
          uVar17 = uVar17 & 0xff;
          _DAT_14a9b3da8 = uVar7;
        } while (0x3f < uVar17);
        uVar12 = (uint)uVar18 | 0x100;
        LOCK();
        uVar3 = *(ushort *)(lVar6 + 0x58e);
        bVar22 = (ushort)uVar12 == uVar3;
        if (bVar22) {
          *(ushort *)(lVar6 + 0x58e) = uVar17 | 0x100;
        }
        else {
          uVar12 = (uint)uVar3;
        }
        UNLOCK();
        while (!bVar22) {
          LOCK();
          uVar3 = *(ushort *)(lVar6 + 0x58e);
          bVar22 = (ushort)uVar12 == uVar3;
          if (bVar22) {
            *(ushort *)(lVar6 + 0x58e) = (ushort)uVar12 & 0xff00 | uVar17;
          }
          else {
            uVar12 = (uint)uVar3;
          }
          UNLOCK();
        }
      }
      else {
        bVar10 = (byte)uVar18;
        while (bVar10 == 0xff) {
          bVar10 = (byte)*(undefined2 *)(lVar6 + 0x58e);
        }
      }
      uVar7 = (ulonglong)bVar10;
      unaff_RBP = 0;
      puVar1 = (uint *)(uVar7 * 0x18 + 0x14a9b3708);
      puVar21 = (ulonglong *)(uVar7 * 0x18 + 0x14a9b3710);
      uVar12 = *puVar1;
      uStack_50 = uVar19;
LAB_1400fc53d:
      do {
        uVar5 = uVar12;
        if ((uVar5 & 0x1ff0000) != 0) {
          LOCK();
          uVar12 = *puVar1;
          bVar22 = uVar5 == uVar12;
          if (bVar22) {
            *puVar1 = uVar5 + 0x100;
            uVar12 = uVar5;
          }
          UNLOCK();
          if (bVar22) {
            uVar16 = (uint)(*puVar21 >> 7) & 0xffffff;
            uVar19 = *puVar21;
            if ((*puVar21 >> 7 & 0xffffff) != 0) {
              do {
                if ((longlong)uVar19 < 0x100000000) {
                  uVar18 = *puVar21;
                }
                else {
                  LOCK();
                  uVar18 = *puVar21;
                  if (uVar19 == uVar18) {
                    *puVar21 = uVar19 - 0x100000000;
                    uVar18 = uVar19;
                  }
                  UNLOCK();
                  uVar12 = uVar5;
                  if (uVar19 == uVar18) goto LAB_1400fc53d;
                }
                uVar16 = uVar16 - 1;
                uVar19 = uVar18;
              } while (uVar16 != 0);
            }
            uVar19 = *puVar21;
            do {
              while (uStack_58 = uVar19, (longlong)uStack_58 < 0x100000000) {
                cVar4 = FUN_140006180(puVar21,1);
                uVar12 = uVar5;
                uVar19 = uStack_58;
                if (cVar4 != '\0') goto LAB_1400fc53d;
              }
              LOCK();
              uVar19 = *puVar21;
              if (uStack_58 == uVar19) {
                *puVar21 = uStack_58 - 0x100000000;
                uVar19 = uStack_58;
              }
              UNLOCK();
              uVar12 = uVar5;
            } while (uStack_58 != uVar19);
          }
          goto LAB_1400fc53d;
        }
        LOCK();
        uVar12 = *puVar1;
        bVar22 = uVar5 == uVar12;
        if (bVar22) {
          *puVar1 = uVar5 + 1;
          uVar12 = uVar5;
        }
        UNLOCK();
      } while (!bVar22);
      lVar20 = **(longlong **)(unaff_GS_OFFSET + 0x58);
      puVar21 = (ulonglong *)(lVar20 + 0x1398 + (ulonglong)(bVar10 >> 6) * 8);
      *puVar21 = *puVar21 | 1L << (uVar7 & 0x3f);
      func_0x0001450a7200(param_1,*(undefined8 *)(lVar6 + 0x28));
      bVar9 = (byte)*(undefined2 *)(lVar6 + 0x58e);
      bVar10 = bVar9 & 0x3f;
      puVar21 = (ulonglong *)(lVar20 + 0x1398 + (ulonglong)(bVar9 >> 6) * 8);
      *puVar21 = *puVar21 & (-2L << bVar10 | 0xfffffffffffffffeU >> 0x40 - bVar10);
      uVar7 = (ulonglong)(byte)*(undefined2 *)(lVar6 + 0x58e);
      LOCK();
      piVar2 = (int *)(uVar7 * 0x18 + 0x14a9b3708);
      iVar15 = *piVar2;
      *piVar2 = *piVar2 + -1;
      UNLOCK();
      uVar12 = iVar15 - 1;
      if ((char)uVar12 == '\0') {
        lVar20 = uVar7 * 0x18;
        puVar1 = (uint *)(lVar20 + 0x14a9b3708);
        if ((uVar12 & 0xff0000) == 0) {
          if ((uVar12 & 0xff00) != 0) {
            uVar12 = *puVar1;
            do {
              LOCK();
              uVar5 = *puVar1;
              bVar22 = uVar12 == uVar5;
              if (bVar22) {
                *puVar1 = uVar12 & 0xffff00ff;
                uVar5 = uVar12;
              }
              uVar12 = uVar5;
              UNLOCK();
            } while (!bVar22);
            uVar12 = uVar12 >> 8 & 0xff;
            if (uVar12 != 0) {
              puVar21 = (ulonglong *)(lVar20 + 0x14a9b3710);
              uVar19 = *(ulonglong *)(lVar20 + 0x14a9b3710);
              do {
                while (uStack_58 = uVar19, (longlong)uStack_58 < 0) {
                  cVar4 = FUN_1400062d0(puVar21,uVar12);
                  uVar19 = uStack_58;
                  if (cVar4 != '\0') goto LAB_1400fc662;
                }
                LOCK();
                uVar19 = *puVar21;
                if (uStack_58 == uVar19) {
                  *puVar21 = uStack_58 + ((ulonglong)uVar12 << 0x20);
                  uVar19 = uStack_58;
                }
                UNLOCK();
              } while (uStack_58 != uVar19);
            }
          }
        }
        else {
          puVar21 = (ulonglong *)(lVar20 + 0x14a9b3718);
          do {
            if ((uVar12 & 0xff0000) == 0) break;
            LOCK();
            uVar5 = *puVar1;
            bVar22 = uVar12 == uVar5;
            if (bVar22) {
              *puVar1 = uVar12 - 0x10000;
              uVar5 = uVar12;
            }
            UNLOCK();
            if (bVar22) {
              uVar19 = *puVar21;
              do {
                while (uStack_58 = uVar19, (longlong)uStack_58 < 0) {
                  cVar4 = FUN_1400062d0(puVar21,1);
                  uVar5 = uVar12;
                  uVar19 = uStack_58;
                  if (cVar4 != '\0') goto LAB_1400fcc36;
                }
                LOCK();
                uVar19 = *puVar21;
                if (uStack_58 == uVar19) {
                  *puVar21 = uStack_58 + 0x100000000;
                  uVar19 = uStack_58;
                }
                UNLOCK();
                uVar5 = uVar12;
              } while (uStack_58 != uVar19);
            }
LAB_1400fcc36:
            uVar12 = uVar5;
          } while (!bVar22);
        }
      }
LAB_1400fc662:
      uVar3 = *(ushort *)(lVar6 + 0x58e);
      sVar11 = *(byte *)(lVar6 + 0x58f) - 1;
      bVar10 = (byte)sVar11;
      LOCK();
      uVar17 = *(ushort *)(lVar6 + 0x58e);
      bVar22 = uVar3 == uVar17;
      if (bVar22) {
        *(ushort *)(lVar6 + 0x58e) =
             (ushort)(byte)(-(bVar10 == 0) | *(byte *)(lVar6 + 0x58e)) | sVar11 * 0x100;
        uVar17 = uVar3;
      }
      uVar12 = (uint)uVar17;
      UNLOCK();
      while (!bVar22) {
        uVar17 = (ushort)uVar12 & 0xff;
        bVar10 = (char)(uVar12 >> 8) - 1;
        if (bVar10 == 0) {
          uVar17 = 0xff;
        }
        LOCK();
        uVar3 = *(ushort *)(lVar6 + 0x58e);
        bVar22 = (ushort)uVar12 == uVar3;
        if (bVar22) {
          *(ushort *)(lVar6 + 0x58e) = uVar17 | (ushort)bVar10 << 8;
        }
        else {
          uVar12 = (uint)uVar3;
        }
        UNLOCK();
      }
      uVar19 = uStack_50;
      param_2 = lStack_48;
      if (bVar10 == 0) {
        uVar14 = _DAT_14a9b3da8 >> 0x20 & 0xffff;
        uVar18 = _DAT_14a9b3da8 >> 0x30;
        uVar13 = _DAT_14a9b3da8 & 0xffffffff;
        do {
          *(short *)(uVar7 * 2 + 0x14a9b3d20) = (short)uVar14;
          uVar8 = uVar13 & 0xffffffff;
          uVar13 = (uVar14 & 0xffff) << 0x20 | uVar18 << 0x30 | uVar8;
          LOCK();
          bVar22 = uVar13 != _DAT_14a9b3da8;
          uVar18 = uVar14 << 0x30 | uVar7 << 0x20 | uVar8;
          if (bVar22) {
            uVar13 = _DAT_14a9b3da8;
            uVar18 = _DAT_14a9b3da8;
          }
          _DAT_14a9b3da8 = uVar18;
          UNLOCK();
          uVar14 = uVar13 >> 0x20;
          uVar18 = uVar13 >> 0x30;
        } while (bVar22);
      }
    }
    else {
LAB_1400fc41e:
      func_0x0001450a7200(param_1,*(undefined8 *)(lVar6 + 0x28));
    }
  }
  if (*(char *)(*(longlong *)(*(longlong *)(unaff_GS_OFFSET + 0x58) + (ulonglong)__tls_index * 8) +
               8) == '\0') {
    func_0x0001455db994();
  }
  bVar10 = *(byte *)(uVar19 + 0x138b);
  lVar6 = func_0x000144e63d10(*(undefined4 *)(param_2 + 0x9c));
  bVar10 = lVar6 != 0 & bVar10;
  uVar19 = CONCAT71((int7)((ulonglong)unaff_RBP >> 8),bVar10);
  if (bVar10 == 1) {
    uVar18 = (ulonglong)*(ushort *)(lVar6 + 0x214);
    uVar7 = uVar18 & 0xff;
    if ((uVar7 == 0xff) ||
       ((*(ulonglong *)(**(longlong **)(unaff_GS_OFFSET + 0x58) + 0x1398 + (uVar7 >> 6) * 8) >>
         (uVar18 & 0x3f) & 1) == 0)) {
      uVar12 = (uint)*(ushort *)(lVar6 + 0x214);
      iVar15 = (uVar12 & 0xffffff00) + 0x100 + (int)uVar7;
      while( true ) {
        LOCK();
        uVar17 = *(ushort *)(lVar6 + 0x214);
        bVar22 = (ushort)uVar12 == uVar17;
        if (bVar22) {
          *(ushort *)(lVar6 + 0x214) = (ushort)iVar15;
        }
        else {
          uVar12 = (uint)uVar17;
        }
        UNLOCK();
        if (bVar22) break;
        uVar18 = (ulonglong)uVar12;
        iVar15 = uVar12 + 0x100;
      }
      uStack_50 = CONCAT44(uStack_50._4_4_,(int)uVar19);
      if ((ushort)uVar18 < 0x100) {
        do {
          do {
            uVar17 = (ushort)(_DAT_14a9b3da8 >> 0x20);
          } while (uVar17 == 0x40);
          uVar19 = (ulonglong)((int)_DAT_14a9b3da8 + 1) |
                   (_DAT_14a9b3da8 >> 0x30) << 0x20 |
                   (ulonglong)*(ushort *)((_DAT_14a9b3da8 >> 0x30) * 2 + 0x14a9b3d20) << 0x30;
          LOCK();
          UNLOCK();
          bVar10 = (byte)(_DAT_14a9b3da8 >> 0x20);
          uVar17 = uVar17 & 0xff;
          _DAT_14a9b3da8 = uVar19;
        } while (0x3f < uVar17);
        uVar12 = (uint)uVar18 | 0x100;
        LOCK();
        uVar3 = *(ushort *)(lVar6 + 0x214);
        bVar22 = (ushort)uVar12 == uVar3;
        if (bVar22) {
          *(ushort *)(lVar6 + 0x214) = uVar17 | 0x100;
        }
        else {
          uVar12 = (uint)uVar3;
        }
        UNLOCK();
        while (!bVar22) {
          LOCK();
          uVar3 = *(ushort *)(lVar6 + 0x214);
          bVar22 = (ushort)uVar12 == uVar3;
          if (bVar22) {
            *(ushort *)(lVar6 + 0x214) = (ushort)uVar12 & 0xff00 | uVar17;
          }
          else {
            uVar12 = (uint)uVar3;
          }
          UNLOCK();
        }
      }
      else {
        bVar10 = (byte)uVar18;
        while (bVar10 == 0xff) {
          bVar10 = (byte)*(undefined2 *)(lVar6 + 0x214);
        }
      }
      uVar7 = (ulonglong)bVar10;
      puVar1 = (uint *)(uVar7 * 0x18 + 0x14a9b3708);
      puVar21 = (ulonglong *)(uVar7 * 0x18 + 0x14a9b3710);
      uVar12 = *puVar1;
LAB_1400fc90f:
      do {
        uVar5 = uVar12;
        if ((uVar5 & 0x1ff0000) != 0) {
          LOCK();
          uVar12 = *puVar1;
          bVar22 = uVar5 == uVar12;
          if (bVar22) {
            *puVar1 = uVar5 + 0x100;
            uVar12 = uVar5;
          }
          UNLOCK();
          if (bVar22) {
            uVar16 = (uint)(*puVar21 >> 7) & 0xffffff;
            uVar19 = *puVar21;
            if ((*puVar21 >> 7 & 0xffffff) != 0) {
              do {
                if ((longlong)uVar19 < 0x100000000) {
                  uVar18 = *puVar21;
                }
                else {
                  LOCK();
                  uVar18 = *puVar21;
                  if (uVar19 == uVar18) {
                    *puVar21 = uVar19 - 0x100000000;
                    uVar18 = uVar19;
                  }
                  UNLOCK();
                  uVar12 = uVar5;
                  if (uVar19 == uVar18) goto LAB_1400fc90f;
                }
                uVar16 = uVar16 - 1;
                uVar19 = uVar18;
              } while (uVar16 != 0);
            }
            uVar19 = *puVar21;
            do {
              while (uStack_58 = uVar19, (longlong)uStack_58 < 0x100000000) {
                cVar4 = FUN_140006180(puVar21,1,&uStack_58);
                uVar12 = uVar5;
                uVar19 = uStack_58;
                if (cVar4 != '\0') goto LAB_1400fc90f;
              }
              LOCK();
              uVar19 = *puVar21;
              if (uStack_58 == uVar19) {
                *puVar21 = uStack_58 - 0x100000000;
                uVar19 = uStack_58;
              }
              UNLOCK();
              uVar12 = uVar5;
            } while (uStack_58 != uVar19);
          }
          goto LAB_1400fc90f;
        }
        LOCK();
        uVar12 = *puVar1;
        bVar22 = uVar5 == uVar12;
        if (bVar22) {
          *puVar1 = uVar5 + 1;
          uVar12 = uVar5;
        }
        UNLOCK();
      } while (!bVar22);
      uVar19 = uStack_50 & 0xffffffff;
      puVar21 = (ulonglong *)
                (**(longlong **)(unaff_GS_OFFSET + 0x58) + 0x1398 + (ulonglong)(bVar10 >> 6) * 8);
      *puVar21 = *puVar21 | 1L << (uVar7 & 0x3f);
      param_2 = lStack_48;
      goto LAB_1400fc9e0;
    }
    cVar4 = '\0';
  }
  else {
LAB_1400fc9e0:
    cVar4 = (char)uVar19;
    if (lVar6 == 0) goto LAB_1400fcb68;
  }
  func_0x0001450a7200(param_1,*(undefined8 *)(lVar6 + 0x860));
  iVar15 = *(int *)(lVar6 + 0xb48);
  if (0 < (longlong)iVar15) {
    lVar20 = 0;
    do {
      func_0x0001450a7200(param_1,*(undefined8 *)(lVar6 + 0xb40 + lVar20 * 8));
      lVar20 = lVar20 + 1;
    } while (iVar15 != lVar20);
  }
  if (cVar4 != '\0') {
    bVar9 = (byte)*(undefined2 *)(lVar6 + 0x214);
    bVar10 = bVar9 & 0x3f;
    puVar21 = (ulonglong *)
              (**(longlong **)(unaff_GS_OFFSET + 0x58) + 0x1398 + (ulonglong)(bVar9 >> 6) * 8);
    *puVar21 = *puVar21 & (-2L << bVar10 | 0xfffffffffffffffeU >> 0x40 - bVar10);
    uVar19 = (ulonglong)(byte)*(undefined2 *)(lVar6 + 0x214);
    LOCK();
    piVar2 = (int *)(uVar19 * 0x18 + 0x14a9b3708);
    iVar15 = *piVar2;
    *piVar2 = *piVar2 + -1;
    UNLOCK();
    uVar12 = iVar15 - 1;
    if ((char)uVar12 == '\0') {
      lVar20 = uVar19 * 0x18;
      puVar1 = (uint *)(lVar20 + 0x14a9b3708);
      if ((uVar12 & 0xff0000) == 0) {
        if ((uVar12 & 0xff00) != 0) {
          uVar12 = *puVar1;
          do {
            LOCK();
            uVar5 = *puVar1;
            bVar22 = uVar12 == uVar5;
            if (bVar22) {
              *puVar1 = uVar12 & 0xffff00ff;
              uVar5 = uVar12;
            }
            uVar12 = uVar5;
            UNLOCK();
          } while (!bVar22);
          uVar12 = uVar12 >> 8 & 0xff;
          if (uVar12 != 0) {
            puVar21 = (ulonglong *)(lVar20 + 0x14a9b3710);
            uVar7 = *(ulonglong *)(lVar20 + 0x14a9b3710);
            do {
              while (uStack_58 = uVar7, (longlong)uStack_58 < 0) {
                cVar4 = FUN_1400062d0(puVar21,uVar12);
                uVar7 = uStack_58;
                if (cVar4 != '\0') goto LAB_1400fca84;
              }
              LOCK();
              uVar7 = *puVar21;
              if (uStack_58 == uVar7) {
                *puVar21 = uStack_58 + ((ulonglong)uVar12 << 0x20);
                uVar7 = uStack_58;
              }
              UNLOCK();
            } while (uStack_58 != uVar7);
          }
        }
      }
      else {
        puVar21 = (ulonglong *)(lVar20 + 0x14a9b3718);
        do {
          if ((uVar12 & 0xff0000) == 0) break;
          LOCK();
          uVar5 = *puVar1;
          bVar22 = uVar12 == uVar5;
          if (bVar22) {
            *puVar1 = uVar12 - 0x10000;
            uVar5 = uVar12;
          }
          UNLOCK();
          if (bVar22) {
            uVar7 = *puVar21;
            do {
              while (uStack_58 = uVar7, (longlong)uStack_58 < 0) {
                cVar4 = FUN_1400062d0(puVar21,1);
                uVar5 = uVar12;
                uVar7 = uStack_58;
                if (cVar4 != '\0') goto LAB_1400fccc2;
              }
              LOCK();
              uVar7 = *puVar21;
              if (uStack_58 == uVar7) {
                *puVar21 = uStack_58 + 0x100000000;
                uVar7 = uStack_58;
              }
              UNLOCK();
              uVar5 = uVar12;
            } while (uStack_58 != uVar7);
          }
LAB_1400fccc2:
          uVar12 = uVar5;
        } while (!bVar22);
      }
    }
LAB_1400fca84:
    uVar3 = *(ushort *)(lVar6 + 0x214);
    sVar11 = *(byte *)(lVar6 + 0x215) - 1;
    bVar10 = (byte)sVar11;
    LOCK();
    uVar17 = *(ushort *)(lVar6 + 0x214);
    bVar22 = uVar3 == uVar17;
    if (bVar22) {
      *(ushort *)(lVar6 + 0x214) =
           (ushort)(byte)(-(bVar10 == 0) | *(byte *)(lVar6 + 0x214)) | sVar11 * 0x100;
      uVar17 = uVar3;
    }
    uVar12 = (uint)uVar17;
    UNLOCK();
    while (!bVar22) {
      uVar17 = (ushort)uVar12 & 0xff;
      bVar10 = (char)(uVar12 >> 8) - 1;
      if (bVar10 == 0) {
        uVar17 = 0xff;
      }
      LOCK();
      uVar3 = *(ushort *)(lVar6 + 0x214);
      bVar22 = (ushort)uVar12 == uVar3;
      if (bVar22) {
        *(ushort *)(lVar6 + 0x214) = uVar17 | (ushort)bVar10 << 8;
      }
      else {
        uVar12 = (uint)uVar3;
      }
      UNLOCK();
    }
    param_2 = lStack_48;
    if (bVar10 == 0) {
      uVar13 = _DAT_14a9b3da8 >> 0x20 & 0xffff;
      uVar7 = _DAT_14a9b3da8 >> 0x30;
      uVar18 = _DAT_14a9b3da8 & 0xffffffff;
      do {
        *(short *)(uVar19 * 2 + 0x14a9b3d20) = (short)uVar13;
        uVar14 = uVar18 & 0xffffffff;
        uVar18 = (uVar13 & 0xffff) << 0x20 | uVar7 << 0x30 | uVar14;
        LOCK();
        bVar22 = uVar18 != _DAT_14a9b3da8;
        uVar7 = uVar13 << 0x30 | uVar19 << 0x20 | uVar14;
        if (bVar22) {
          uVar18 = _DAT_14a9b3da8;
          uVar7 = _DAT_14a9b3da8;
        }
        _DAT_14a9b3da8 = uVar7;
        UNLOCK();
        uVar13 = uVar18 >> 0x20;
        uVar7 = uVar18 >> 0x30;
      } while (bVar22);
    }
  }
LAB_1400fcb68:
  lVar6 = func_0x000144e525d0(*(undefined4 *)(param_2 + 0x9c));
  if (((lVar6 != 0) && (*(char *)(lVar6 + 0x92) == '\x01')) &&
     (uVar12 = *(uint *)(lVar6 + 0x1c), (ulonglong)uVar12 != 0)) {
    lVar6 = *(longlong *)(lVar6 + 0x20);
    lVar20 = 0;
    do {
      func_0x0001450a7200(param_1,**(undefined8 **)(lVar6 + lVar20));
      lVar20 = lVar20 + 8;
    } while ((ulonglong)uVar12 << 3 != lVar20);
  }
  return;
}

