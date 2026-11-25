// Recovered from game_scarlett_master.exe (GTA VI, Xbox Series X, PE32+ x64)
// Address: 1400825f0  size: 1248 bytes
// Name:    FUN_1400825f0
// Subsystem: core
//
// Referenced strings (0 in this body, 0 including direct callees):
// Callees: FUN_144ef62d0, FUN_1400062d0, FUN_140006180
//
// Generated decompilation. Formatting follows MiscRef/GTAVSRC conventions;
// identifiers are recovered, not original. See ../../../README.md.

#include "gta6decomp/rage_types.h"


/* WARNING: Removing unreachable block (ram,0x000144ef62e9) */
/* WARNING: Removing unreachable block (ram,0x000140082715) */
/* WARNING: Removing unreachable block (ram,0x000140082722) */
/* WARNING: Removing unreachable block (ram,0x000140082740) */
/* WARNING: Removing unreachable block (ram,0x00014008270a) */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

bool FUN_1400825f0(longlong param_1)

{
  uint *puVar1;
  int *piVar2;
  ulonglong *puVar3;
  ushort uVar4;
  char cVar5;
  undefined1 uVar6;
  uint uVar7;
  longlong lVar8;
  ulonglong uVar9;
  ulonglong uVar10;
  longlong lVar11;
  longlong lVar12;
  byte bVar13;
  byte bVar14;
  short sVar15;
  uint uVar16;
  ulonglong uVar17;
  ulonglong uVar18;
  int iVar19;
  uint uVar20;
  longlong *plVar21;
  ushort uVar22;
  ulonglong uVar23;
  longlong unaff_GS_OFFSET;
  bool bVar24;
  bool bVar25;
  longlong lStack_48;
  
  if (*(char *)(*(longlong *)(*(longlong *)(unaff_GS_OFFSET + 0x58) + (ulonglong)__tls_index * 8) +
               8) == '\0') {
    func_0x0001455db994();
  }
  cVar5 = *(char *)(**(longlong **)(unaff_GS_OFFSET + 0x58) + 0x138b);
  lVar8 = func_0x000144e59150(*(undefined4 *)(param_1 + 0x9c));
  if ((lVar8 != 0) && (cVar5 != '\0')) {
    uVar23 = (ulonglong)*(ushort *)(lVar8 + 0x2c);
    uVar9 = uVar23 & 0xff;
    if ((uVar9 == 0xff) ||
       ((*(ulonglong *)(**(longlong **)(unaff_GS_OFFSET + 0x58) + 0x1398 + (uVar9 >> 6) * 8) >>
         (uVar23 & 0x3f) & 1) == 0)) {
      uVar16 = (uint)*(ushort *)(lVar8 + 0x2c);
      iVar19 = (uVar16 & 0xffffff00) + 0x100 + (int)uVar9;
      while( true ) {
        LOCK();
        uVar22 = *(ushort *)(lVar8 + 0x2c);
        bVar24 = (ushort)uVar16 == uVar22;
        if (bVar24) {
          *(ushort *)(lVar8 + 0x2c) = (ushort)iVar19;
        }
        else {
          uVar16 = (uint)uVar22;
        }
        UNLOCK();
        if (bVar24) break;
        uVar23 = (ulonglong)uVar16;
        iVar19 = uVar16 + 0x100;
      }
      if ((ushort)uVar23 < 0x100) {
        do {
          do {
            uVar22 = (ushort)(_DAT_14a9b3da8 >> 0x20);
          } while (uVar22 == 0x40);
          uVar9 = (ulonglong)((int)_DAT_14a9b3da8 + 1) |
                  (_DAT_14a9b3da8 >> 0x30) << 0x20 |
                  (ulonglong)*(ushort *)((_DAT_14a9b3da8 >> 0x30) * 2 + 0x14a9b3d20) << 0x30;
          LOCK();
          UNLOCK();
          bVar14 = (byte)(_DAT_14a9b3da8 >> 0x20);
          uVar22 = uVar22 & 0xff;
          _DAT_14a9b3da8 = uVar9;
        } while (0x3f < uVar22);
        uVar16 = (uint)uVar23 | 0x100;
        LOCK();
        uVar4 = *(ushort *)(lVar8 + 0x2c);
        bVar24 = (ushort)uVar16 == uVar4;
        if (bVar24) {
          *(ushort *)(lVar8 + 0x2c) = uVar22 | 0x100;
        }
        else {
          uVar16 = (uint)uVar4;
        }
        UNLOCK();
        while (!bVar24) {
          LOCK();
          uVar4 = *(ushort *)(lVar8 + 0x2c);
          bVar24 = (ushort)uVar16 == uVar4;
          if (bVar24) {
            *(ushort *)(lVar8 + 0x2c) = (ushort)uVar16 & 0xff00 | uVar22;
          }
          else {
            uVar16 = (uint)uVar4;
          }
          UNLOCK();
        }
      }
      else {
        bVar14 = (byte)uVar23;
        while (bVar14 == 0xff) {
          bVar14 = (byte)*(undefined2 *)(lVar8 + 0x2c);
        }
      }
      uVar9 = (ulonglong)bVar14;
      puVar1 = (uint *)(uVar9 * 0x18 + 0x14a9b3708);
      puVar3 = (ulonglong *)(uVar9 * 0x18 + 0x14a9b3710);
      uVar16 = *puVar1;
LAB_1400827ca:
      do {
        uVar7 = uVar16;
        if ((uVar7 & 0x1ff0000) != 0) {
          LOCK();
          uVar16 = *puVar1;
          bVar24 = uVar7 == uVar16;
          if (bVar24) {
            *puVar1 = uVar7 + 0x100;
            uVar16 = uVar7;
          }
          UNLOCK();
          if (bVar24) {
            uVar20 = (uint)(*puVar3 >> 7) & 0xffffff;
            uVar23 = *puVar3;
            if ((*puVar3 >> 7 & 0xffffff) != 0) {
              do {
                if ((longlong)uVar23 < 0x100000000) {
                  uVar17 = *puVar3;
                }
                else {
                  LOCK();
                  uVar17 = *puVar3;
                  if (uVar23 == uVar17) {
                    *puVar3 = uVar23 - 0x100000000;
                    uVar17 = uVar23;
                  }
                  UNLOCK();
                  uVar16 = uVar7;
                  if (uVar23 == uVar17) goto LAB_1400827ca;
                }
                uVar20 = uVar20 - 1;
                uVar23 = uVar17;
              } while (uVar20 != 0);
            }
            uVar23 = *puVar3;
            do {
              while ((longlong)uVar23 < 0x100000000) {
                cVar5 = FUN_140006180(puVar3);
                uVar16 = uVar7;
                if (cVar5 != '\0') goto LAB_1400827ca;
              }
              LOCK();
              uVar17 = *puVar3;
              if (uVar23 == uVar17) {
                *puVar3 = uVar23 - 0x100000000;
                uVar17 = uVar23;
              }
              UNLOCK();
              bVar24 = uVar23 != uVar17;
              uVar16 = uVar7;
              uVar23 = uVar17;
            } while (bVar24);
          }
          goto LAB_1400827ca;
        }
        LOCK();
        uVar16 = *puVar1;
        bVar24 = uVar7 == uVar16;
        if (bVar24) {
          *puVar1 = uVar7 + 1;
          uVar16 = uVar7;
        }
        UNLOCK();
      } while (!bVar24);
      lVar12 = **(longlong **)(unaff_GS_OFFSET + 0x58);
      puVar3 = (ulonglong *)(lVar12 + 0x1398 + (ulonglong)(bVar14 >> 6) * 8);
      *puVar3 = *puVar3 | 1L << (uVar9 & 0x3f);
      uVar6 = FUN_144ef62d0(lVar8,0);
      bVar13 = (byte)*(undefined2 *)(lVar8 + 0x2c);
      bVar14 = bVar13 & 0x3f;
      puVar3 = (ulonglong *)(lVar12 + 0x1398 + (ulonglong)(bVar13 >> 6) * 8);
      *puVar3 = *puVar3 & (-2L << bVar14 | 0xfffffffffffffffeU >> 0x40 - bVar14);
      uVar9 = (ulonglong)(byte)*(undefined2 *)(lVar8 + 0x2c);
      LOCK();
      piVar2 = (int *)(uVar9 * 0x18 + 0x14a9b3708);
      iVar19 = *piVar2;
      *piVar2 = *piVar2 + -1;
      UNLOCK();
      uVar16 = iVar19 - 1;
      if ((char)uVar16 == '\0') {
        lVar12 = uVar9 * 0x18;
        puVar1 = (uint *)(lVar12 + 0x14a9b3708);
        if ((uVar16 & 0xff0000) == 0) {
          if ((uVar16 & 0xff00) != 0) {
            uVar16 = *puVar1;
            do {
              LOCK();
              uVar7 = *puVar1;
              bVar24 = uVar16 == uVar7;
              if (bVar24) {
                *puVar1 = uVar16 & 0xffff00ff;
                uVar7 = uVar16;
              }
              uVar16 = uVar7;
              UNLOCK();
            } while (!bVar24);
            uVar16 = uVar16 >> 8 & 0xff;
            if (uVar16 != 0) {
              plVar21 = (longlong *)(lVar12 + 0x14a9b3710);
              lStack_48 = *(longlong *)(lVar12 + 0x14a9b3710);
              do {
                while (lStack_48 < 0) {
                  cVar5 = FUN_1400062d0(plVar21,uVar16);
                  if (cVar5 != '\0') goto LAB_1400828e5;
                }
                LOCK();
                lVar12 = *plVar21;
                if (lStack_48 == lVar12) {
                  *plVar21 = lStack_48 + ((ulonglong)uVar16 << 0x20);
                  lVar12 = lStack_48;
                }
                UNLOCK();
                bVar24 = lStack_48 != lVar12;
                lStack_48 = lVar12;
              } while (bVar24);
            }
          }
        }
        else {
          plVar21 = (longlong *)(lVar12 + 0x14a9b3718);
          do {
            if ((uVar16 & 0xff0000) == 0) break;
            LOCK();
            uVar7 = *puVar1;
            bVar24 = uVar16 == uVar7;
            if (bVar24) {
              *puVar1 = uVar16 - 0x10000;
              uVar7 = uVar16;
            }
            UNLOCK();
            if (bVar24) {
              lVar12 = *plVar21;
              do {
                while (lVar12 < 0) {
                  cVar5 = FUN_1400062d0(plVar21,1);
                  uVar7 = uVar16;
                  if (cVar5 != '\0') goto LAB_140082a3c;
                }
                LOCK();
                lVar11 = *plVar21;
                if (lVar12 == lVar11) {
                  *plVar21 = lVar12 + 0x100000000;
                  lVar11 = lVar12;
                }
                UNLOCK();
                bVar25 = lVar12 != lVar11;
                uVar7 = uVar16;
                lVar12 = lVar11;
              } while (bVar25);
            }
LAB_140082a3c:
            uVar16 = uVar7;
          } while (!bVar24);
        }
      }
LAB_1400828e5:
      uVar4 = *(ushort *)(lVar8 + 0x2c);
      sVar15 = *(byte *)(lVar8 + 0x2d) - 1;
      bVar14 = (byte)sVar15;
      LOCK();
      uVar22 = *(ushort *)(lVar8 + 0x2c);
      bVar24 = uVar4 == uVar22;
      if (bVar24) {
        *(ushort *)(lVar8 + 0x2c) =
             (ushort)(byte)(-(bVar14 == 0) | *(byte *)(lVar8 + 0x2c)) | sVar15 * 0x100;
        uVar22 = uVar4;
      }
      uVar16 = (uint)uVar22;
      UNLOCK();
      while (!bVar24) {
        uVar22 = (ushort)uVar16 & 0xff;
        bVar14 = (char)(uVar16 >> 8) - 1;
        if (bVar14 == 0) {
          uVar22 = 0xff;
        }
        LOCK();
        uVar4 = *(ushort *)(lVar8 + 0x2c);
        bVar24 = (ushort)uVar16 == uVar4;
        if (bVar24) {
          *(ushort *)(lVar8 + 0x2c) = uVar22 | (ushort)bVar14 << 8;
        }
        else {
          uVar16 = (uint)uVar4;
        }
        UNLOCK();
      }
      if (bVar14 == 0) {
        uVar18 = _DAT_14a9b3da8 >> 0x20 & 0xffff;
        uVar23 = _DAT_14a9b3da8 >> 0x30;
        uVar17 = _DAT_14a9b3da8 & 0xffffffff;
        do {
          *(short *)(uVar9 * 2 + 0x14a9b3d20) = (short)uVar18;
          uVar10 = uVar17 & 0xffffffff;
          uVar17 = (uVar18 & 0xffff) << 0x20 | uVar23 << 0x30 | uVar10;
          LOCK();
          bVar24 = uVar17 != _DAT_14a9b3da8;
          uVar23 = uVar18 << 0x30 | uVar9 << 0x20 | uVar10;
          if (bVar24) {
            uVar17 = _DAT_14a9b3da8;
            uVar23 = _DAT_14a9b3da8;
          }
          _DAT_14a9b3da8 = uVar23;
          UNLOCK();
          uVar18 = uVar17 >> 0x20;
          uVar23 = uVar17 >> 0x30;
        } while (bVar24);
      }
      return (bool)uVar6;
    }
  }
  return (*(byte *)(lVar8 + 0x3c) & 1) != 0;
}

