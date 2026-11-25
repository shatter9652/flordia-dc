// Recovered from game_scarlett_master.exe (GTA VI, Xbox Series X, PE32+ x64)
// Address: 140038eb0  size: 1354 bytes
// Name:    FUN_140038eb0
// Subsystem: core
//
// Referenced strings (0 in this body, 0 including direct callees):
// Callees: FUN_1400062d0, FUN_140006180
//
// Generated decompilation. Formatting follows MiscRef/GTAVSRC conventions;
// identifiers are recovered, not original. See ../../../README.md.

#include "gta6decomp/rage_types.h"


/* WARNING: Removing unreachable block (ram,0x000140038fdf) */
/* WARNING: Removing unreachable block (ram,0x000140038fec) */
/* WARNING: Removing unreachable block (ram,0x00014003900a) */
/* WARNING: Removing unreachable block (ram,0x000140038fd4) */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_140038eb0(undefined1 (*param_1) [16],longlong param_2)

{
  longlong lVar1;
  uint *puVar2;
  int *piVar3;
  ushort uVar4;
  undefined8 uVar5;
  char cVar6;
  char cVar7;
  uint uVar8;
  longlong lVar9;
  ulonglong uVar10;
  ulonglong uVar11;
  byte bVar12;
  byte bVar13;
  short sVar14;
  uint uVar15;
  ulonglong uVar16;
  ulonglong uVar17;
  int iVar18;
  uint uVar19;
  ulonglong *puVar20;
  ushort uVar21;
  ulonglong uVar22;
  longlong unaff_GS_OFFSET;
  bool bVar23;
  bool bVar24;
  undefined1 auVar25 [16];
  ulonglong uStack_50;
  undefined1 (*pauStack_48) [16];
  
  if (*(char *)(*(longlong *)(*(longlong *)(unaff_GS_OFFSET + 0x58) + (ulonglong)__tls_index * 8) +
               8) == '\0') {
    func_0x0001455db994();
  }
  if (param_2 == 0) goto LAB_1400392d2;
  cVar6 = *(char *)(**(longlong **)(unaff_GS_OFFSET + 0x58) + 0x138b);
  lVar9 = func_0x0001450ed6c0(*(undefined4 *)(param_2 + 0x9c));
  pauStack_48 = param_1;
  if ((lVar9 == 0) || (cVar6 == '\0')) {
    if (lVar9 == 0) goto LAB_1400392d2;
LAB_140038f84:
    bVar23 = false;
  }
  else {
    uVar22 = (ulonglong)*(ushort *)(lVar9 + 0x158);
    uVar10 = uVar22 & 0xff;
    if ((uVar10 != 0xff) &&
       ((*(ulonglong *)(**(longlong **)(unaff_GS_OFFSET + 0x58) + 0x1398 + (uVar10 >> 6) * 8) >>
         (uVar22 & 0x3f) & 1) != 0)) goto LAB_140038f84;
    uVar15 = (uint)*(ushort *)(lVar9 + 0x158);
    iVar18 = (uVar15 & 0xffffff00) + 0x100 + (int)uVar10;
    while( true ) {
      LOCK();
      uVar21 = *(ushort *)(lVar9 + 0x158);
      bVar23 = (ushort)uVar15 == uVar21;
      if (bVar23) {
        *(ushort *)(lVar9 + 0x158) = (ushort)iVar18;
      }
      else {
        uVar15 = (uint)uVar21;
      }
      UNLOCK();
      if (bVar23) break;
      uVar22 = (ulonglong)uVar15;
      iVar18 = uVar15 + 0x100;
    }
    if ((ushort)uVar22 < 0x100) {
      do {
        do {
          uVar21 = (ushort)(_DAT_14a9b3da8 >> 0x20);
        } while (uVar21 == 0x40);
        uVar10 = (ulonglong)((int)_DAT_14a9b3da8 + 1) |
                 (_DAT_14a9b3da8 >> 0x30) << 0x20 |
                 (ulonglong)*(ushort *)((_DAT_14a9b3da8 >> 0x30) * 2 + 0x14a9b3d20) << 0x30;
        LOCK();
        UNLOCK();
        bVar13 = (byte)(_DAT_14a9b3da8 >> 0x20);
        uVar21 = uVar21 & 0xff;
        _DAT_14a9b3da8 = uVar10;
      } while (0x3f < uVar21);
      uVar15 = (uint)uVar22 | 0x100;
      LOCK();
      uVar4 = *(ushort *)(lVar9 + 0x158);
      bVar23 = (ushort)uVar15 == uVar4;
      if (bVar23) {
        *(ushort *)(lVar9 + 0x158) = uVar21 | 0x100;
      }
      else {
        uVar15 = (uint)uVar4;
      }
      UNLOCK();
      while (!bVar23) {
        LOCK();
        uVar4 = *(ushort *)(lVar9 + 0x158);
        bVar23 = (ushort)uVar15 == uVar4;
        if (bVar23) {
          *(ushort *)(lVar9 + 0x158) = (ushort)uVar15 & 0xff00 | uVar21;
        }
        else {
          uVar15 = (uint)uVar4;
        }
        UNLOCK();
      }
    }
    else {
      bVar13 = (byte)uVar22;
      while (bVar13 == 0xff) {
        bVar13 = (byte)*(undefined2 *)(lVar9 + 0x158);
      }
    }
    uVar10 = (ulonglong)bVar13;
    puVar2 = (uint *)(uVar10 * 0x18 + 0x14a9b3708);
    puVar20 = (ulonglong *)(uVar10 * 0x18 + 0x14a9b3710);
    uVar15 = *puVar2;
LAB_14003909d:
    do {
      uVar8 = uVar15;
      if ((uVar8 & 0x1ff0000) != 0) {
        LOCK();
        uVar15 = *puVar2;
        bVar23 = uVar8 == uVar15;
        if (bVar23) {
          *puVar2 = uVar8 + 0x100;
          uVar15 = uVar8;
        }
        UNLOCK();
        if (bVar23) {
          uVar19 = (uint)(*puVar20 >> 7) & 0xffffff;
          uVar22 = *puVar20;
          if ((*puVar20 >> 7 & 0xffffff) != 0) {
            do {
              if ((longlong)uVar22 < 0x100000000) {
                uVar16 = *puVar20;
              }
              else {
                LOCK();
                uVar16 = *puVar20;
                if (uVar22 == uVar16) {
                  *puVar20 = uVar22 - 0x100000000;
                  uVar16 = uVar22;
                }
                UNLOCK();
                uVar15 = uVar8;
                if (uVar22 == uVar16) goto LAB_14003909d;
              }
              uVar19 = uVar19 - 1;
              uVar22 = uVar16;
            } while (uVar19 != 0);
          }
          uStack_50 = *puVar20;
          do {
            while (0xffffffff < (longlong)uStack_50) {
              LOCK();
              uVar22 = *puVar20;
              if (uStack_50 == uVar22) {
                *puVar20 = uStack_50 - 0x100000000;
                uVar22 = uStack_50;
              }
              UNLOCK();
              bVar23 = uStack_50 == uVar22;
              uVar15 = uVar8;
              uStack_50 = uVar22;
              if (bVar23) goto LAB_14003909d;
            }
            cVar6 = FUN_140006180(puVar20,1,&uStack_50);
            uVar15 = uVar8;
          } while (cVar6 == '\0');
        }
        goto LAB_14003909d;
      }
      LOCK();
      uVar15 = *puVar2;
      bVar23 = uVar8 == uVar15;
      if (bVar23) {
        *puVar2 = uVar8 + 1;
        uVar15 = uVar8;
      }
      UNLOCK();
    } while (!bVar23);
    puVar20 = (ulonglong *)
              (**(longlong **)(unaff_GS_OFFSET + 0x58) + 0x1398 + (ulonglong)(bVar13 >> 6) * 8);
    *puVar20 = *puVar20 | 1L << (uVar10 & 0x3f);
    bVar23 = true;
  }
  cVar6 = *(char *)(lVar9 + 0x14c);
  if (cVar6 == '\x01') {
    uVar5 = *(undefined8 *)(lVar9 + 0x78);
    *(undefined8 *)*pauStack_48 = *(undefined8 *)(lVar9 + 0x70);
    *(undefined8 *)(*pauStack_48 + 8) = uVar5;
  }
  if (bVar23) {
    bVar12 = (byte)*(undefined2 *)(lVar9 + 0x158);
    bVar13 = bVar12 & 0x3f;
    puVar20 = (ulonglong *)
              (**(longlong **)(unaff_GS_OFFSET + 0x58) + 0x1398 + (ulonglong)(bVar12 >> 6) * 8);
    *puVar20 = *puVar20 & (-2L << bVar13 | 0xfffffffffffffffeU >> 0x40 - bVar13);
    uVar10 = (ulonglong)(byte)*(undefined2 *)(lVar9 + 0x158);
    LOCK();
    piVar3 = (int *)(uVar10 * 0x18 + 0x14a9b3708);
    iVar18 = *piVar3;
    *piVar3 = *piVar3 + -1;
    UNLOCK();
    uVar15 = iVar18 - 1;
    if ((char)uVar15 == '\0') {
      lVar1 = uVar10 * 0x18;
      puVar2 = (uint *)(lVar1 + 0x14a9b3708);
      if ((uVar15 & 0xff0000) == 0) {
        if ((uVar15 & 0xff00) != 0) {
          uVar15 = *puVar2;
          do {
            LOCK();
            uVar8 = *puVar2;
            bVar23 = uVar15 == uVar8;
            if (bVar23) {
              *puVar2 = uVar15 & 0xffff00ff;
              uVar8 = uVar15;
            }
            uVar15 = uVar8;
            UNLOCK();
          } while (!bVar23);
          uVar15 = uVar15 >> 8 & 0xff;
          if (uVar15 != 0) {
            puVar20 = (ulonglong *)(lVar1 + 0x14a9b3710);
            uStack_50 = *(ulonglong *)(lVar1 + 0x14a9b3710);
            do {
              while (-1 < (longlong)uStack_50) {
                LOCK();
                uVar22 = *puVar20;
                if (uStack_50 == uVar22) {
                  *puVar20 = uStack_50 + ((ulonglong)uVar15 << 0x20);
                  uVar22 = uStack_50;
                }
                UNLOCK();
                bVar23 = uStack_50 == uVar22;
                uStack_50 = uVar22;
                if (bVar23) goto LAB_1400391e8;
              }
              cVar7 = FUN_1400062d0(puVar20,uVar15);
            } while (cVar7 == '\0');
          }
        }
      }
      else {
        puVar20 = (ulonglong *)(lVar1 + 0x14a9b3718);
        do {
          if ((uVar15 & 0xff0000) == 0) break;
          LOCK();
          uVar8 = *puVar2;
          bVar23 = uVar15 == uVar8;
          if (bVar23) {
            *puVar2 = uVar15 - 0x10000;
            uVar8 = uVar15;
          }
          UNLOCK();
          if (bVar23) {
            uStack_50 = *puVar20;
            do {
              while (-1 < (longlong)uStack_50) {
                LOCK();
                uVar22 = *puVar20;
                if (uStack_50 == uVar22) {
                  *puVar20 = uStack_50 + 0x100000000;
                  uVar22 = uStack_50;
                }
                UNLOCK();
                bVar24 = uStack_50 == uVar22;
                uVar8 = uVar15;
                uStack_50 = uVar22;
                if (bVar24) goto LAB_140039366;
              }
              cVar7 = FUN_1400062d0(puVar20,1);
              uVar8 = uVar15;
            } while (cVar7 == '\0');
          }
LAB_140039366:
          uVar15 = uVar8;
        } while (!bVar23);
      }
    }
LAB_1400391e8:
    uVar4 = *(ushort *)(lVar9 + 0x158);
    sVar14 = *(byte *)(lVar9 + 0x159) - 1;
    bVar13 = (byte)sVar14;
    LOCK();
    uVar21 = *(ushort *)(lVar9 + 0x158);
    bVar23 = uVar4 == uVar21;
    if (bVar23) {
      *(ushort *)(lVar9 + 0x158) =
           (ushort)(byte)(-(bVar13 == 0) | *(byte *)(lVar9 + 0x158)) | sVar14 * 0x100;
      uVar21 = uVar4;
    }
    uVar15 = (uint)uVar21;
    UNLOCK();
    while (!bVar23) {
      uVar21 = (ushort)uVar15 & 0xff;
      bVar13 = (char)(uVar15 >> 8) - 1;
      if (bVar13 == 0) {
        uVar21 = 0xff;
      }
      LOCK();
      uVar4 = *(ushort *)(lVar9 + 0x158);
      bVar23 = (ushort)uVar15 == uVar4;
      if (bVar23) {
        *(ushort *)(lVar9 + 0x158) = uVar21 | (ushort)bVar13 << 8;
      }
      else {
        uVar15 = (uint)uVar4;
      }
      UNLOCK();
    }
    if (bVar13 == 0) {
      uVar17 = _DAT_14a9b3da8 >> 0x20 & 0xffff;
      uVar22 = _DAT_14a9b3da8 >> 0x30;
      uVar16 = _DAT_14a9b3da8 & 0xffffffff;
      do {
        *(short *)(uVar10 * 2 + 0x14a9b3d20) = (short)uVar17;
        uVar11 = uVar16 & 0xffffffff;
        uVar16 = (uVar17 & 0xffff) << 0x20 | uVar22 << 0x30 | uVar11;
        LOCK();
        bVar23 = uVar16 != _DAT_14a9b3da8;
        uVar22 = uVar17 << 0x30 | uVar10 << 0x20 | uVar11;
        if (bVar23) {
          uVar16 = _DAT_14a9b3da8;
          uVar22 = _DAT_14a9b3da8;
        }
        _DAT_14a9b3da8 = uVar22;
        UNLOCK();
        uVar17 = uVar16 >> 0x20;
        uVar22 = uVar16 >> 0x30;
      } while (bVar23);
    }
  }
  param_1 = pauStack_48;
  if (cVar6 == '\x01') {
    return;
  }
LAB_1400392d2:
  auVar25._0_12_ = ZEXT812(0);
  auVar25._12_4_ = 0;
  *param_1 = auVar25;
  return;
}

