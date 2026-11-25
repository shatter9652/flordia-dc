// Recovered from game_scarlett_master.exe (GTA VI, Xbox Series X, PE32+ x64)
// Address: 140082c90  size: 1384 bytes
// Name:    FUN_140082c90
// Subsystem: core
//
// Referenced strings (0 in this body, 0 including direct callees):
// Callees: FUN_1400062d0, FUN_140006180, FUN_1453aaed0
//
// Generated decompilation. Formatting follows MiscRef/GTAVSRC conventions;
// identifiers are recovered, not original. See ../../../README.md.

#include "gta6decomp/rage_types.h"


/* WARNING: Removing unreachable block (ram,0x000140082dc5) */
/* WARNING: Removing unreachable block (ram,0x000140082dd2) */
/* WARNING: Removing unreachable block (ram,0x000140082df0) */
/* WARNING: Removing unreachable block (ram,0x000140082dba) */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined4 FUN_140082c90(longlong param_1,undefined4 param_2,longlong param_3)

{
  longlong lVar1;
  int *piVar2;
  uint *puVar3;
  ushort uVar4;
  char cVar5;
  undefined4 uVar6;
  uint uVar7;
  longlong lVar8;
  ulonglong uVar9;
  ulonglong uVar10;
  byte bVar11;
  short sVar12;
  ulonglong uVar13;
  ulonglong uVar14;
  int iVar15;
  uint uVar16;
  ulonglong *puVar17;
  byte bVar18;
  undefined8 unaff_RBP;
  ushort uVar19;
  ulonglong uVar20;
  uint uVar21;
  longlong unaff_GS_OFFSET;
  bool bVar22;
  bool bVar23;
  ulonglong uStack_58;
  uint uStack_50;
  undefined4 uStack_4c;
  longlong lStack_48;
  
  if (*(char *)(*(longlong *)(*(longlong *)(unaff_GS_OFFSET + 0x58) + (ulonglong)__tls_index * 8) +
               8) == '\0') {
    func_0x0001455db994();
  }
  bVar18 = *(byte *)(**(longlong **)(unaff_GS_OFFSET + 0x58) + 0x138b);
  lVar8 = func_0x000144f3aef0(*(undefined4 *)(param_1 + 0x9c));
  bVar18 = lVar8 != 0 & bVar18;
  uVar20 = CONCAT71((int7)((ulonglong)unaff_RBP >> 8),bVar18);
  if (bVar18 == 1) {
    uVar13 = (ulonglong)*(ushort *)(lVar8 + 0xab4);
    uVar9 = uVar13 & 0xff;
    if ((uVar9 != 0xff) &&
       ((*(ulonglong *)(**(longlong **)(unaff_GS_OFFSET + 0x58) + 0x1398 + (uVar9 >> 6) * 8) >>
         (uVar13 & 0x3f) & 1) != 0)) {
      cVar5 = '\0';
      goto LAB_140082f5d;
    }
    uVar21 = (uint)*(ushort *)(lVar8 + 0xab4);
    iVar15 = (uVar21 & 0xffffff00) + 0x100 + (int)uVar9;
    while( true ) {
      LOCK();
      uVar19 = *(ushort *)(lVar8 + 0xab4);
      bVar22 = (ushort)uVar21 == uVar19;
      if (bVar22) {
        *(ushort *)(lVar8 + 0xab4) = (ushort)iVar15;
      }
      else {
        uVar21 = (uint)uVar19;
      }
      UNLOCK();
      if (bVar22) break;
      uVar13 = (ulonglong)uVar21;
      iVar15 = uVar21 + 0x100;
    }
    uStack_50 = (uint)uVar20;
    if ((ushort)uVar13 < 0x100) {
      do {
        do {
          uVar19 = (ushort)(_DAT_14a9b3da8 >> 0x20);
        } while (uVar19 == 0x40);
        uVar20 = (ulonglong)((int)_DAT_14a9b3da8 + 1) |
                 (_DAT_14a9b3da8 >> 0x30) << 0x20 |
                 (ulonglong)*(ushort *)((_DAT_14a9b3da8 >> 0x30) * 2 + 0x14a9b3d20) << 0x30;
        LOCK();
        UNLOCK();
        bVar18 = (byte)(_DAT_14a9b3da8 >> 0x20);
        uVar19 = uVar19 & 0xff;
        _DAT_14a9b3da8 = uVar20;
      } while (0x3f < uVar19);
      uVar21 = (uint)uVar13 | 0x100;
      LOCK();
      uVar4 = *(ushort *)(lVar8 + 0xab4);
      bVar22 = (ushort)uVar21 == uVar4;
      if (bVar22) {
        *(ushort *)(lVar8 + 0xab4) = uVar19 | 0x100;
      }
      else {
        uVar21 = (uint)uVar4;
      }
      UNLOCK();
      while (!bVar22) {
        LOCK();
        uVar4 = *(ushort *)(lVar8 + 0xab4);
        bVar22 = (ushort)uVar21 == uVar4;
        if (bVar22) {
          *(ushort *)(lVar8 + 0xab4) = (ushort)uVar21 & 0xff00 | uVar19;
        }
        else {
          uVar21 = (uint)uVar4;
        }
        UNLOCK();
      }
    }
    else {
      bVar18 = (byte)uVar13;
      while (bVar18 == 0xff) {
        bVar18 = (byte)*(undefined2 *)(lVar8 + 0xab4);
      }
    }
    uVar9 = (ulonglong)bVar18;
    puVar3 = (uint *)(uVar9 * 0x18 + 0x14a9b3708);
    puVar17 = (ulonglong *)(uVar9 * 0x18 + 0x14a9b3710);
    uVar21 = *puVar3;
    uStack_4c = param_2;
    lStack_48 = param_3;
LAB_140082e83:
    do {
      uVar7 = uVar21;
      if ((uVar7 & 0x1ff0000) != 0) {
        LOCK();
        uVar21 = *puVar3;
        bVar22 = uVar7 == uVar21;
        if (bVar22) {
          *puVar3 = uVar7 + 0x100;
          uVar21 = uVar7;
        }
        UNLOCK();
        if (bVar22) {
          uVar16 = (uint)(*puVar17 >> 7) & 0xffffff;
          uVar20 = *puVar17;
          if ((*puVar17 >> 7 & 0xffffff) != 0) {
            do {
              if ((longlong)uVar20 < 0x100000000) {
                uVar13 = *puVar17;
              }
              else {
                LOCK();
                uVar13 = *puVar17;
                if (uVar20 == uVar13) {
                  *puVar17 = uVar20 - 0x100000000;
                  uVar13 = uVar20;
                }
                UNLOCK();
                uVar21 = uVar7;
                if (uVar20 == uVar13) goto LAB_140082e83;
              }
              uVar16 = uVar16 - 1;
              uVar20 = uVar13;
            } while (uVar16 != 0);
          }
          uVar20 = *puVar17;
          do {
            while (uStack_58 = uVar20, 0xffffffff < (longlong)uStack_58) {
              LOCK();
              uVar20 = *puVar17;
              if (uStack_58 == uVar20) {
                *puVar17 = uStack_58 - 0x100000000;
                uVar20 = uStack_58;
              }
              UNLOCK();
              uVar21 = uVar7;
              if (uStack_58 == uVar20) goto LAB_140082e83;
            }
            cVar5 = FUN_140006180(puVar17,1,&uStack_58);
            uVar21 = uVar7;
            uVar20 = uStack_58;
          } while (cVar5 == '\0');
        }
        goto LAB_140082e83;
      }
      LOCK();
      uVar21 = *puVar3;
      bVar22 = uVar7 == uVar21;
      if (bVar22) {
        *puVar3 = uVar7 + 1;
        uVar21 = uVar7;
      }
      UNLOCK();
    } while (!bVar22);
    uVar20 = (ulonglong)uStack_50;
    puVar17 = (ulonglong *)
              (**(longlong **)(unaff_GS_OFFSET + 0x58) + 0x1398 + (ulonglong)(bVar18 >> 6) * 8);
    *puVar17 = *puVar17 | 1L << (uVar9 & 0x3f);
    param_3 = lStack_48;
    param_2 = uStack_4c;
  }
  cVar5 = (char)uVar20;
  if (lVar8 == 0) {
    return 0;
  }
LAB_140082f5d:
  FUN_1453aaed0(&uStack_58,*(undefined4 *)(param_3 + 0x9c));
  uVar6 = func_0x0001453aaea0(*(undefined8 *)(lVar8 + 0x4a8),*(undefined2 *)(lVar8 + 0x4b0),param_2,
                              uStack_58 & 0xff);
  if (cVar5 != '\0') {
    bVar11 = (byte)*(undefined2 *)(lVar8 + 0xab4);
    bVar18 = bVar11 & 0x3f;
    puVar17 = (ulonglong *)
              (**(longlong **)(unaff_GS_OFFSET + 0x58) + 0x1398 + (ulonglong)(bVar11 >> 6) * 8);
    *puVar17 = *puVar17 & (-2L << bVar18 | 0xfffffffffffffffeU >> 0x40 - bVar18);
    uVar20 = (ulonglong)(byte)*(undefined2 *)(lVar8 + 0xab4);
    LOCK();
    piVar2 = (int *)(uVar20 * 0x18 + 0x14a9b3708);
    iVar15 = *piVar2;
    *piVar2 = *piVar2 + -1;
    UNLOCK();
    uVar21 = iVar15 - 1;
    if ((char)uVar21 == '\0') {
      lVar1 = uVar20 * 0x18;
      puVar3 = (uint *)(lVar1 + 0x14a9b3708);
      if ((uVar21 & 0xff0000) == 0) {
        if ((uVar21 & 0xff00) != 0) {
          uVar21 = *puVar3;
          do {
            LOCK();
            uVar7 = *puVar3;
            bVar22 = uVar21 == uVar7;
            if (bVar22) {
              *puVar3 = uVar21 & 0xffff00ff;
              uVar7 = uVar21;
            }
            uVar21 = uVar7;
            UNLOCK();
          } while (!bVar22);
          uVar21 = uVar21 >> 8 & 0xff;
          if (uVar21 != 0) {
            puVar17 = (ulonglong *)(lVar1 + 0x14a9b3710);
            uStack_58 = *(ulonglong *)(lVar1 + 0x14a9b3710);
            do {
              while (-1 < (longlong)uStack_58) {
                LOCK();
                uVar9 = *puVar17;
                if (uStack_58 == uVar9) {
                  *puVar17 = uStack_58 + ((ulonglong)uVar21 << 0x20);
                  uVar9 = uStack_58;
                }
                UNLOCK();
                bVar22 = uStack_58 == uVar9;
                uStack_58 = uVar9;
                if (bVar22) goto LAB_140082ff3;
              }
              cVar5 = FUN_1400062d0(puVar17,uVar21);
            } while (cVar5 == '\0');
          }
        }
      }
      else {
        puVar17 = (ulonglong *)(lVar1 + 0x14a9b3718);
        do {
          if ((uVar21 & 0xff0000) == 0) break;
          LOCK();
          uVar7 = *puVar3;
          bVar22 = uVar21 == uVar7;
          if (bVar22) {
            *puVar3 = uVar21 - 0x10000;
            uVar7 = uVar21;
          }
          UNLOCK();
          if (bVar22) {
            uStack_58 = *puVar17;
            do {
              while (-1 < (longlong)uStack_58) {
                LOCK();
                uVar9 = *puVar17;
                if (uStack_58 == uVar9) {
                  *puVar17 = uStack_58 + 0x100000000;
                  uVar9 = uStack_58;
                }
                UNLOCK();
                bVar23 = uStack_58 == uVar9;
                uVar7 = uVar21;
                uStack_58 = uVar9;
                if (bVar23) goto LAB_140083164;
              }
              cVar5 = FUN_1400062d0(puVar17,1);
              uVar7 = uVar21;
            } while (cVar5 == '\0');
          }
LAB_140083164:
          uVar21 = uVar7;
        } while (!bVar22);
      }
    }
LAB_140082ff3:
    uVar4 = *(ushort *)(lVar8 + 0xab4);
    sVar12 = *(byte *)(lVar8 + 0xab5) - 1;
    bVar18 = (byte)sVar12;
    LOCK();
    uVar19 = *(ushort *)(lVar8 + 0xab4);
    bVar22 = uVar4 == uVar19;
    if (bVar22) {
      *(ushort *)(lVar8 + 0xab4) =
           (ushort)(byte)(-(bVar18 == 0) | *(byte *)(lVar8 + 0xab4)) | sVar12 * 0x100;
      uVar19 = uVar4;
    }
    uVar21 = (uint)uVar19;
    UNLOCK();
    while (!bVar22) {
      uVar19 = (ushort)uVar21 & 0xff;
      bVar18 = (char)(uVar21 >> 8) - 1;
      if (bVar18 == 0) {
        uVar19 = 0xff;
      }
      LOCK();
      uVar4 = *(ushort *)(lVar8 + 0xab4);
      bVar22 = (ushort)uVar21 == uVar4;
      if (bVar22) {
        *(ushort *)(lVar8 + 0xab4) = uVar19 | (ushort)bVar18 << 8;
      }
      else {
        uVar21 = (uint)uVar4;
      }
      UNLOCK();
    }
    if (bVar18 == 0) {
      uVar14 = _DAT_14a9b3da8 >> 0x20 & 0xffff;
      uVar9 = _DAT_14a9b3da8 >> 0x30;
      uVar13 = _DAT_14a9b3da8 & 0xffffffff;
      do {
        *(short *)(uVar20 * 2 + 0x14a9b3d20) = (short)uVar14;
        uVar10 = uVar13 & 0xffffffff;
        uVar13 = (uVar14 & 0xffff) << 0x20 | uVar9 << 0x30 | uVar10;
        LOCK();
        bVar22 = uVar13 != _DAT_14a9b3da8;
        uVar9 = uVar14 << 0x30 | uVar20 << 0x20 | uVar10;
        if (bVar22) {
          uVar13 = _DAT_14a9b3da8;
          uVar9 = _DAT_14a9b3da8;
        }
        _DAT_14a9b3da8 = uVar9;
        UNLOCK();
        uVar14 = uVar13 >> 0x20;
        uVar9 = uVar13 >> 0x30;
      } while (bVar22);
    }
  }
  return uVar6;
}

