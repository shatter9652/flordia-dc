// Recovered from game_scarlett_master.exe (GTA VI, Xbox Series X, PE32+ x64)
// Address: 140143bb0  size: 1409 bytes
// Name:    FUN_140143bb0
// Subsystem: core
//
// Referenced strings (0 in this body, 0 including direct callees):
// Callees: 
//
// Generated decompilation. Formatting follows MiscRef/GTAVSRC conventions;
// identifiers are recovered, not original. See ../../../README.md.

#include "gta6decomp/rage_types.h"


void FUN_140143bb0(longlong param_1)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  int iVar4;
  byte bVar5;
  longlong lVar6;
  ulonglong uVar7;
  longlong lVar8;
  undefined8 *puVar9;
  ushort uVar10;
  longlong lVar11;
  int iVar12;
  uint uVar13;
  uint uVar14;
  uint uVar15;
  ulonglong uVar16;
  longlong lVar17;
  short *psVar18;
  longlong lVar19;
  undefined8 *puVar20;
  longlong lVar21;
  ushort uVar22;
  longlong lVar23;
  ulonglong uVar24;
  undefined8 uVar25;
  undefined8 uVar26;
  undefined8 uVar27;
  undefined8 uVar28;
  char cStack_489;
  uint uStack_47c;
  char acStack_444 [1028];
  
  lVar17 = (longlong)*(int *)(param_1 + 0x3c);
  uVar15 = 0;
  func_0x000145f40580(acStack_444,0,lVar17);
  if (0 < lVar17) {
    uVar13 = 0xffffffff;
    lVar23 = 0;
    do {
      lVar19 = *(longlong *)(param_1 + 0x10);
      iVar4 = uVar13 - 1;
      do {
        uVar14 = uVar15;
        iVar12 = iVar4;
        uVar15 = (uint)lVar17;
        if ((int)uVar14 < *(int *)(param_1 + 0xc)) {
          uVar15 = (uint)*(ushort *)(*(longlong *)(lVar19 + (ulonglong)uVar14 * 8) + 0xa0);
        }
        lVar21 = (longlong)(int)uVar15;
        iVar4 = iVar12 + 1;
        uVar15 = uVar14 + 1;
      } while (lVar21 <= lVar23);
      uVar13 = (lVar21 <= lVar23) + 1 + iVar12;
      lVar17 = *(longlong *)(*(longlong *)(param_1 + 0x40) + lVar23 * 8);
      lVar8 = *(longlong *)(lVar17 + 0x80);
      uVar24 = (ulonglong)*(uint *)(lVar17 + 0x88);
      lVar6 = func_0x000144f2e340(*(undefined8 *)(lVar8 + 0x20),uVar24);
      if ((*(byte *)(lVar17 + 0xd8) & 0x80) == 0) {
        lVar11 = 0;
        if (-1 < (int)uVar13) {
          lVar11 = *(longlong *)(lVar19 + (ulonglong)uVar13 * 8);
        }
      }
      else {
        lVar11 = 0;
      }
      uVar7 = (ulonglong)*(ushort *)(lVar6 + 0xf08);
      if (*(char *)(lVar17 + 0xe0) == '\0') {
        bVar5 = 0;
      }
      else {
        bVar5 = *(byte *)(lVar17 + 0xf6);
      }
      if (((uVar7 == 0) && (lVar11 == 0)) && ((bVar5 & 1) == 0)) {
        if ((*(char *)(lVar17 + 0xe0) == '\0') || ((*(byte *)(lVar17 + 0xf6) & 1) != 0)) {
          uVar22 = *(ushort *)(param_1 + 0x90);
          lVar19 = *(longlong *)(param_1 + 0x88);
          if (uVar22 == *(ushort *)(param_1 + 0x92)) {
            lVar8 = func_0x000144d9c140(8,(uint)uVar22 * 8 + 0x80);
            if (uVar22 != 0) {
              func_0x000145f40560(lVar8,lVar19,(ulonglong)uVar22 << 3);
            }
            if (lVar19 != 0) {
              func_0x000144d9c130(lVar19);
            }
            *(ushort *)(param_1 + 0x92) = uVar22 + 0x10;
            *(longlong *)(param_1 + 0x88) = lVar8;
            uVar22 = *(ushort *)(param_1 + 0x90);
            lVar19 = lVar8;
          }
          *(ushort *)(param_1 + 0x90) = uVar22 + 1;
          *(longlong *)(lVar19 + (ulonglong)uVar22 * 8) = lVar17;
        }
      }
      else {
        if (lVar11 == 0) {
          uStack_47c = 0;
        }
        else {
          uStack_47c = (uint)*(ushort *)(lVar11 + 0xa0);
        }
        if ((bVar5 & 1) != 0) {
          *(char *)(lVar17 + 0xc9) = *(char *)(lVar17 + 0xc9) + '\x01';
        }
        if (lVar8 != param_1) {
          uVar24 = 0xffffffff;
        }
        if (uVar7 != 0) {
          uVar16 = 0;
          lVar19 = *(longlong *)(*(longlong *)(param_1 + 0x20) + uVar24 * 8);
          psVar18 = *(short **)(lVar19 + 0xf18);
          do {
            lVar8 = func_0x000144f2e340(*(undefined8 *)(*(longlong *)(lVar17 + 0x80) + 0x20),
                                        *(undefined4 *)(lVar17 + 0x88));
            lVar8 = *(longlong *)(*(longlong *)(lVar8 + 0xf00) + uVar16 * 8);
            if (*(longlong *)(lVar8 + 0x80) == param_1) {
              if ((int)uStack_47c <= (int)*(uint *)(lVar8 + 0x88)) {
                acStack_444[*(uint *)(lVar8 + 0x88)] = '\x01';
                goto LAB_140143df5;
              }
            }
            else {
LAB_140143df5:
              *(char *)(lVar17 + 0xc9) = *(char *)(lVar17 + 0xc9) + '\x01';
              if (*(char *)(lVar8 + 0xf4) == '\0') {
                *(char *)(lVar17 + 0xca) = *(char *)(lVar17 + 0xca) + '\x01';
              }
              if ((psVar18 ==
                   (short *)((ulonglong)*(uint *)(lVar19 + 0xf14) * 4 +
                            *(longlong *)(lVar19 + 0xf18))) || (uVar16 != (uint)(int)*psVar18)) {
                cStack_489 = '\x01';
              }
              else {
                cStack_489 = (char)psVar18[1];
                psVar18 = psVar18 + 2;
              }
              uVar22 = *(ushort *)(lVar8 + 0x98);
              lVar6 = *(longlong *)(lVar8 + 0x90);
              if (uVar22 == *(ushort *)(lVar8 + 0x9a)) {
                lVar11 = func_0x000144d9c140(8,(uint)uVar22 * 8 + 0x20);
                if (uVar22 != 0) {
                  func_0x000145f40560(lVar11,lVar6,(ulonglong)uVar22 << 3);
                }
                if (lVar6 != 0) {
                  func_0x000144d9c130(lVar6);
                }
                *(ushort *)(lVar8 + 0x9a) = uVar22 + 4;
                *(longlong *)(lVar8 + 0x90) = lVar11;
                uVar22 = *(ushort *)(lVar8 + 0x98);
                lVar6 = lVar11;
              }
              *(ushort *)(lVar8 + 0x98) = uVar22 + 1;
              *(longlong *)(lVar6 + (ulonglong)uVar22 * 8) = lVar17;
              uVar15 = *(uint *)(lVar8 + 0xbc);
              if (uVar15 == *(uint *)(lVar8 + 0xb8)) {
                lVar6 = func_0x000144d9c140(1,uVar15 + 4);
                if (*(int *)(lVar8 + 0xbc) != 0) {
                  func_0x000145f40560(lVar6,*(undefined8 *)(lVar8 + 0xc0));
                }
                if (*(longlong *)(lVar8 + 0xc0) != 0) {
                  func_0x000144d9c130();
                }
                *(longlong *)(lVar8 + 0xc0) = lVar6;
                *(uint *)(lVar8 + 0xb8) = uVar15 + 4;
                uVar15 = *(uint *)(lVar8 + 0xbc);
              }
              else {
                lVar6 = *(longlong *)(lVar8 + 0xc0);
              }
              *(uint *)(lVar8 + 0xbc) = uVar15 + 1;
              *(char *)(lVar6 + (ulonglong)uVar15) = cStack_489;
              if (cStack_489 == '\0') {
                *(byte *)(lVar8 + 0xd8) = *(byte *)(lVar8 + 0xd8) | 2;
              }
            }
            uVar16 = uVar16 + 1;
          } while (uVar7 != uVar16);
        }
      }
      uVar15 = (lVar21 <= lVar23) + uVar14;
      lVar17 = (longlong)*(int *)(param_1 + 0x3c);
      lVar23 = lVar23 + 1;
    } while (lVar23 < lVar17);
  }
  if (0 < *(int *)(param_1 + 0xc)) {
    lVar17 = 0;
    uVar15 = 0;
    do {
      lVar23 = *(longlong *)(*(longlong *)(param_1 + 0x10) + lVar17 * 8);
      if (*(longlong *)(lVar23 + 0xa8) != 0) {
        func_0x000144d9c130();
      }
      *(undefined8 *)(lVar23 + 0xa8) = 0;
      *(undefined4 *)(lVar23 + 0xb0) = 0;
      uVar22 = *(ushort *)(lVar23 + 0xa0);
      if (uVar15 < uVar22) {
        uVar24 = (ulonglong)uVar15;
        puVar9 = (undefined8 *)0x0;
        puVar20 = (undefined8 *)0x0;
        do {
          if (((acStack_444[uVar24] == '\0') &&
              (lVar19 = *(longlong *)(*(longlong *)(param_1 + 0x40) + uVar24 * 8),
              *(char *)(lVar19 + 0xe0) != '\x03')) && ((*(byte *)(lVar19 + 0xd9) & 1) == 0)) {
            uVar10 = *(ushort *)(lVar23 + 0xb0);
            if (uVar10 == *(ushort *)(lVar23 + 0xb2)) {
              puVar9 = (undefined8 *)func_0x000144d9c140(2,uVar10 + 0x20 + (uint)uVar10);
              if (uVar10 == 0) {
LAB_140144073:
                if (puVar20 != (undefined8 *)0x0) goto LAB_14014409e;
              }
              else {
                if (uVar10 == 0x10) {
                  uVar25 = *puVar20;
                  uVar26 = puVar20[1];
                  uVar27 = puVar20[2];
                  uVar28 = puVar20[3];
                }
                else {
                  if (uVar10 != 0x20) {
                    func_0x000145f40560(puVar9,puVar20,(uint)uVar10 + (uint)uVar10);
                    goto LAB_140144073;
                  }
                  uVar25 = *puVar20;
                  uVar26 = puVar20[1];
                  uVar27 = puVar20[2];
                  uVar28 = puVar20[3];
                  uVar1 = puVar20[5];
                  uVar2 = puVar20[6];
                  uVar3 = puVar20[7];
                  puVar9[4] = puVar20[4];
                  puVar9[5] = uVar1;
                  puVar9[6] = uVar2;
                  puVar9[7] = uVar3;
                }
                *puVar9 = uVar25;
                puVar9[1] = uVar26;
                puVar9[2] = uVar27;
                puVar9[3] = uVar28;
LAB_14014409e:
                func_0x000144d9c130(puVar20);
              }
              *(ushort *)(lVar23 + 0xb2) = uVar10 + 0x10;
              *(undefined8 **)(lVar23 + 0xa8) = puVar9;
              uVar10 = *(ushort *)(lVar23 + 0xb0);
            }
            *(ushort *)(lVar23 + 0xb0) = uVar10 + 1;
            *(short *)((longlong)puVar9 + (ulonglong)uVar10 * 2) = (short)uVar24;
            puVar20 = puVar9;
          }
          uVar24 = uVar24 + 1;
        } while ((uint)uVar22 != uVar24);
      }
      lVar17 = lVar17 + 1;
      uVar15 = (uint)uVar22;
    } while (lVar17 < *(int *)(param_1 + 0xc));
  }
  return;
}

