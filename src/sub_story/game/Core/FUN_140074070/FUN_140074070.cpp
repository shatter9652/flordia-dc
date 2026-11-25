// Recovered from game_scarlett_master.exe (GTA VI, Xbox Series X, PE32+ x64)
// Address: 140074070  size: 1436 bytes
// Name:    FUN_140074070
// Subsystem: core
//
// Referenced strings (0 in this body, 0 including direct callees):
// Callees: FUN_140006180, FUN_1400062d0
//
// Generated decompilation. Formatting follows MiscRef/GTAVSRC conventions;
// identifiers are recovered, not original. See ../../../README.md.

#include "gta6decomp/rage_types.h"


/* WARNING: Removing unreachable block (ram,0x0001400741a1) */
/* WARNING: Removing unreachable block (ram,0x0001400741ae) */
/* WARNING: Removing unreachable block (ram,0x0001400741cc) */
/* WARNING: Removing unreachable block (ram,0x000140074196) */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

ulonglong FUN_140074070(longlong param_1,uint param_2)

{
  int *piVar1;
  uint *puVar2;
  ulonglong *puVar3;
  ushort uVar4;
  char cVar5;
  longlong lVar6;
  ulonglong uVar7;
  longlong *plVar8;
  ulonglong uVar9;
  longlong lVar10;
  byte bVar11;
  short sVar12;
  int iVar13;
  ulonglong uVar14;
  ulonglong uVar15;
  ulonglong uVar16;
  uint uVar17;
  byte bVar18;
  ushort uVar19;
  longlong lVar20;
  uint uVar21;
  int iVar22;
  ulonglong uVar23;
  uint uVar24;
  longlong unaff_GS_OFFSET;
  bool bVar25;
  bool bVar26;
  longlong lStack_60;
  
  if (*(char *)(*(longlong *)(*(longlong *)(unaff_GS_OFFSET + 0x58) + (ulonglong)__tls_index * 8) +
               8) == '\0') {
    func_0x0001455db994();
  }
  bVar18 = *(byte *)(**(longlong **)(unaff_GS_OFFSET + 0x58) + 0x138b);
  lVar6 = func_0x0001450e1520(*(undefined4 *)(param_1 + 0x9c));
  bVar18 = lVar6 != 0 & bVar18;
  if (bVar18 == 1) {
    uVar14 = (ulonglong)*(ushort *)(lVar6 + 0x1ca);
    uVar7 = uVar14 & 0xff;
    if ((uVar7 == 0xff) ||
       ((*(ulonglong *)(**(longlong **)(unaff_GS_OFFSET + 0x58) + 0x1398 + (uVar7 >> 6) * 8) >>
         (uVar14 & 0x3f) & 1) == 0)) {
      uVar24 = (uint)*(ushort *)(lVar6 + 0x1ca);
      iVar13 = (uVar24 & 0xffffff00) + 0x100 + (int)uVar7;
      while( true ) {
        LOCK();
        uVar19 = *(ushort *)(lVar6 + 0x1ca);
        bVar25 = (ushort)uVar24 == uVar19;
        if (bVar25) {
          *(ushort *)(lVar6 + 0x1ca) = (ushort)iVar13;
        }
        else {
          uVar24 = (uint)uVar19;
        }
        UNLOCK();
        if (bVar25) break;
        uVar14 = (ulonglong)uVar24;
        iVar13 = uVar24 + 0x100;
      }
      if ((ushort)uVar14 < 0x100) {
        do {
          do {
            uVar19 = (ushort)(_DAT_14a9b3da8 >> 0x20);
          } while (uVar19 == 0x40);
          uVar7 = (ulonglong)((int)_DAT_14a9b3da8 + 1) |
                  (_DAT_14a9b3da8 >> 0x30) << 0x20 |
                  (ulonglong)*(ushort *)((_DAT_14a9b3da8 >> 0x30) * 2 + 0x14a9b3d20) << 0x30;
          LOCK();
          UNLOCK();
          bVar11 = (byte)(_DAT_14a9b3da8 >> 0x20);
          uVar19 = uVar19 & 0xff;
          _DAT_14a9b3da8 = uVar7;
        } while (0x3f < uVar19);
        uVar24 = (uint)uVar14 | 0x100;
        LOCK();
        uVar4 = *(ushort *)(lVar6 + 0x1ca);
        bVar25 = (ushort)uVar24 == uVar4;
        if (bVar25) {
          *(ushort *)(lVar6 + 0x1ca) = uVar19 | 0x100;
        }
        else {
          uVar24 = (uint)uVar4;
        }
        UNLOCK();
        while (!bVar25) {
          LOCK();
          uVar4 = *(ushort *)(lVar6 + 0x1ca);
          bVar25 = (ushort)uVar24 == uVar4;
          if (bVar25) {
            *(ushort *)(lVar6 + 0x1ca) = (ushort)uVar24 & 0xff00 | uVar19;
          }
          else {
            uVar24 = (uint)uVar4;
          }
          UNLOCK();
        }
      }
      else {
        bVar11 = (byte)uVar14;
        while (bVar11 == 0xff) {
          bVar11 = (byte)*(undefined2 *)(lVar6 + 0x1ca);
        }
      }
      uVar7 = (ulonglong)bVar11;
      puVar2 = (uint *)(uVar7 * 0x18 + 0x14a9b3708);
      puVar3 = (ulonglong *)(uVar7 * 0x18 + 0x14a9b3710);
      uVar24 = *puVar2;
LAB_14007425f:
      do {
        uVar21 = uVar24;
        if ((uVar21 & 0x1ff0000) != 0) {
          LOCK();
          uVar24 = *puVar2;
          bVar25 = uVar21 == uVar24;
          if (bVar25) {
            *puVar2 = uVar21 + 0x100;
            uVar24 = uVar21;
          }
          UNLOCK();
          if (bVar25) {
            uVar17 = (uint)(*puVar3 >> 7) & 0xffffff;
            uVar14 = *puVar3;
            if ((*puVar3 >> 7 & 0xffffff) != 0) {
              do {
                if ((longlong)uVar14 < 0x100000000) {
                  uVar23 = *puVar3;
                }
                else {
                  LOCK();
                  uVar23 = *puVar3;
                  if (uVar14 == uVar23) {
                    *puVar3 = uVar14 - 0x100000000;
                    uVar23 = uVar14;
                  }
                  UNLOCK();
                  uVar24 = uVar21;
                  if (uVar14 == uVar23) goto LAB_14007425f;
                }
                uVar17 = uVar17 - 1;
                uVar14 = uVar23;
              } while (uVar17 != 0);
            }
            uVar14 = *puVar3;
            do {
              while ((longlong)uVar14 < 0x100000000) {
                cVar5 = FUN_140006180(puVar3,1);
                uVar24 = uVar21;
                if (cVar5 != '\0') goto LAB_14007425f;
              }
              LOCK();
              uVar23 = *puVar3;
              if (uVar14 == uVar23) {
                *puVar3 = uVar14 - 0x100000000;
                uVar23 = uVar14;
              }
              UNLOCK();
              bVar25 = uVar14 != uVar23;
              uVar24 = uVar21;
              uVar14 = uVar23;
            } while (bVar25);
          }
          goto LAB_14007425f;
        }
        LOCK();
        uVar24 = *puVar2;
        bVar25 = uVar21 == uVar24;
        if (bVar25) {
          *puVar2 = uVar21 + 1;
          uVar24 = uVar21;
        }
        UNLOCK();
      } while (!bVar25);
      puVar3 = (ulonglong *)
               (**(longlong **)(unaff_GS_OFFSET + 0x58) + 0x1398 + (ulonglong)(bVar11 >> 6) * 8);
      *puVar3 = *puVar3 | 1L << (uVar7 & 0x3f);
      goto LAB_140074331;
    }
    bVar18 = 0;
LAB_14007433a:
    if ((0x60fUL >> ((ulonglong)param_2 & 0x3f) & 1) == 0) {
      plVar8 = (longlong *)0x14ab6c948;
    }
    else {
      plVar8 = (longlong *)
               (lVar6 + 0x88 + (longlong)*(int *)(&UNK_14670ec90 + (ulonglong)param_2 * 4) * 0x28);
    }
    if (*plVar8 == 0) {
      uVar7 = 0;
    }
    else {
      uVar7 = *(ulonglong *)(*plVar8 + 0x20);
    }
    if (bVar18 != 0) {
      bVar11 = (byte)*(undefined2 *)(lVar6 + 0x1ca);
      bVar18 = bVar11 & 0x3f;
      puVar3 = (ulonglong *)
               (**(longlong **)(unaff_GS_OFFSET + 0x58) + 0x1398 + (ulonglong)(bVar11 >> 6) * 8);
      *puVar3 = *puVar3 & (-2L << bVar18 | 0xfffffffffffffffeU >> 0x40 - bVar18);
      uVar14 = (ulonglong)(byte)*(undefined2 *)(lVar6 + 0x1ca);
      LOCK();
      piVar1 = (int *)(uVar14 * 0x18 + 0x14a9b3708);
      iVar13 = *piVar1;
      *piVar1 = *piVar1 + -1;
      UNLOCK();
      uVar24 = iVar13 - 1;
      if ((char)uVar24 == '\0') {
        lVar10 = uVar14 * 0x18;
        puVar2 = (uint *)(lVar10 + 0x14a9b3708);
        if ((uVar24 & 0xff0000) == 0) {
          if ((uVar24 & 0xff00) != 0) {
            uVar24 = *puVar2;
            do {
              LOCK();
              uVar21 = *puVar2;
              bVar25 = uVar24 == uVar21;
              if (bVar25) {
                *puVar2 = uVar24 & 0xffff00ff;
                uVar21 = uVar24;
              }
              uVar24 = uVar21;
              UNLOCK();
            } while (!bVar25);
            uVar24 = uVar24 >> 8 & 0xff;
            if (uVar24 != 0) {
              plVar8 = (longlong *)(lVar10 + 0x14a9b3710);
              lStack_60 = *(longlong *)(lVar10 + 0x14a9b3710);
              do {
                while (lStack_60 < 0) {
                  cVar5 = FUN_1400062d0(plVar8,uVar24);
                  if (cVar5 != '\0') goto LAB_1400743e2;
                }
                LOCK();
                lVar10 = *plVar8;
                if (lStack_60 == lVar10) {
                  *plVar8 = lStack_60 + ((ulonglong)uVar24 << 0x20);
                  lVar10 = lStack_60;
                }
                UNLOCK();
                bVar25 = lStack_60 != lVar10;
                lStack_60 = lVar10;
              } while (bVar25);
            }
          }
        }
        else {
          plVar8 = (longlong *)(lVar10 + 0x14a9b3718);
          do {
            if ((uVar24 & 0xff0000) == 0) break;
            LOCK();
            uVar21 = *puVar2;
            bVar25 = uVar24 == uVar21;
            if (bVar25) {
              *puVar2 = uVar24 - 0x10000;
              uVar21 = uVar24;
            }
            UNLOCK();
            if (bVar25) {
              lVar10 = *plVar8;
              do {
                while (lVar10 < 0) {
                  cVar5 = FUN_1400062d0(plVar8,1);
                  uVar21 = uVar24;
                  if (cVar5 != '\0') goto LAB_140074576;
                }
                LOCK();
                lVar20 = *plVar8;
                if (lVar10 == lVar20) {
                  *plVar8 = lVar10 + 0x100000000;
                  lVar20 = lVar10;
                }
                UNLOCK();
                bVar26 = lVar10 != lVar20;
                uVar21 = uVar24;
                lVar10 = lVar20;
              } while (bVar26);
            }
LAB_140074576:
            uVar24 = uVar21;
          } while (!bVar25);
        }
      }
LAB_1400743e2:
      uVar4 = *(ushort *)(lVar6 + 0x1ca);
      sVar12 = *(byte *)(lVar6 + 0x1cb) - 1;
      bVar18 = (byte)sVar12;
      LOCK();
      uVar19 = *(ushort *)(lVar6 + 0x1ca);
      bVar25 = uVar4 == uVar19;
      if (bVar25) {
        *(ushort *)(lVar6 + 0x1ca) =
             (ushort)(byte)(-(bVar18 == 0) | *(byte *)(lVar6 + 0x1ca)) | sVar12 * 0x100;
        uVar19 = uVar4;
      }
      uVar24 = (uint)uVar19;
      UNLOCK();
      while (!bVar25) {
        uVar19 = (ushort)uVar24 & 0xff;
        bVar18 = (char)(uVar24 >> 8) - 1;
        if (bVar18 == 0) {
          uVar19 = 0xff;
        }
        LOCK();
        uVar4 = *(ushort *)(lVar6 + 0x1ca);
        bVar25 = (ushort)uVar24 == uVar4;
        if (bVar25) {
          *(ushort *)(lVar6 + 0x1ca) = uVar19 | (ushort)bVar18 << 8;
        }
        else {
          uVar24 = (uint)uVar4;
        }
        UNLOCK();
      }
      if (bVar18 == 0) {
        uVar16 = _DAT_14a9b3da8 >> 0x20 & 0xffff;
        uVar23 = _DAT_14a9b3da8 >> 0x30;
        uVar15 = _DAT_14a9b3da8 & 0xffffffff;
        do {
          *(short *)(uVar14 * 2 + 0x14a9b3d20) = (short)uVar16;
          uVar9 = uVar15 & 0xffffffff;
          uVar15 = (uVar16 & 0xffff) << 0x20 | uVar23 << 0x30 | uVar9;
          LOCK();
          bVar25 = uVar15 != _DAT_14a9b3da8;
          uVar23 = uVar16 << 0x30 | uVar14 << 0x20 | uVar9;
          if (bVar25) {
            uVar15 = _DAT_14a9b3da8;
            uVar23 = _DAT_14a9b3da8;
          }
          _DAT_14a9b3da8 = uVar23;
          UNLOCK();
          uVar16 = uVar15 >> 0x20;
          uVar23 = uVar15 >> 0x30;
        } while (bVar25);
      }
    }
    if (uVar7 != 0) {
      return uVar7;
    }
  }
  else {
LAB_140074331:
    if (lVar6 != 0) goto LAB_14007433a;
  }
  uVar24 = func_0x000144ef66b0(*(undefined8 *)(param_1 + 0x20));
  lVar6 = _DAT_14ab83ec0;
  if (uVar24 == 0) {
    return 0;
  }
  if (_DAT_14a922fc0 == 0) {
    return 0;
  }
  if ((*(char *)(_DAT_14a922fc0 + 0x20) == '\x01') && (*(char *)(_DAT_14a922fc0 + 0x21) != '\x01'))
  {
    uVar7 = (ulonglong)*(uint *)(_DAT_14a922fc0 + 0x14);
    lVar10 = *(longlong *)(_DAT_14a922fc0 + 0x18);
    iVar13 = *(uint *)(_DAT_14a922fc0 + 0x14) - 1;
    if (-1 < iVar13) {
      iVar22 = 0;
      do {
        uVar21 = (uint)(iVar22 + iVar13) >> 1;
        uVar23 = (ulonglong)*(uint *)(lVar10 + (ulonglong)uVar21 * 4);
        uVar14 = _DAT_14ab83ec0 + uVar23;
        if (uVar23 != 0) {
          uVar23 = uVar14;
        }
        if (*(uint *)(uVar23 + 0x20) == uVar24) goto LAB_140081851;
        if (*(uint *)(uVar23 + 0x20) < uVar24) {
          iVar22 = uVar21 + 1;
        }
        else {
          iVar13 = uVar21 - 1;
        }
      } while (iVar22 <= iVar13);
    }
  }
  else {
    uVar7 = (ulonglong)*(uint *)(_DAT_14a922fc0 + 0x14);
    if (uVar7 == 0) {
      return 0;
    }
    lVar10 = *(longlong *)(_DAT_14a922fc0 + 0x18);
    lVar20 = 0;
    do {
      uVar23 = (ulonglong)*(uint *)(lVar10 + lVar20);
      uVar14 = _DAT_14ab83ec0 + uVar23;
      if (uVar23 != 0) {
        uVar23 = uVar14;
      }
      if (*(uint *)(uVar23 + 0x20) == uVar24) goto LAB_140081851;
      lVar20 = lVar20 + 4;
    } while (uVar7 << 2 != lVar20);
  }
LAB_140081856:
  if ((int)uVar7 != 0) {
    lVar20 = 0;
    do {
      uVar14 = lVar6 + (ulonglong)*(uint *)(lVar10 + lVar20);
      if ((ulonglong)*(uint *)(lVar10 + lVar20) == 0) {
        uVar14 = 0;
      }
      cVar5 = FUN_1432c1c40(*(undefined4 *)(*(longlong *)(uVar14 + 0x10) + 0x18),
                            *(undefined8 *)(uVar14 + 0x28),uVar24);
      if (cVar5 != '\0') {
        return uVar14;
      }
      lVar20 = lVar20 + 4;
    } while (uVar7 << 2 != lVar20);
  }
  return 0;
LAB_140081851:
  if (uVar14 != 0) {
    return uVar14;
  }
  goto LAB_140081856;
}

