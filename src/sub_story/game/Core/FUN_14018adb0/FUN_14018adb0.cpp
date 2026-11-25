// Recovered from game_scarlett_master.exe (GTA VI, Xbox Series X, PE32+ x64)
// Address: 14018adb0  size: 8325 bytes
// Name:    FUN_14018adb0
// Subsystem: core
//
// Referenced strings (0 in this body, 0 including direct callees):
// Callees: FUN_14241da30, FUN_14018adb0
//
// Generated decompilation. Formatting follows MiscRef/GTAVSRC conventions;
// identifiers are recovered, not original. See ../../../README.md.

#include "gta6decomp/rage_types.h"


void FUN_14018adb0(ushort *param_1,ushort *param_2,ulonglong param_3,longlong param_4)

{
  ushort *puVar1;
  float fVar2;
  ushort uVar3;
  uint uVar4;
  uint uVar5;
  uint uVar6;
  longlong *plVar7;
  char cVar8;
  ushort *puVar9;
  ushort *puVar10;
  ulonglong uVar11;
  ushort *puVar12;
  ushort *puVar13;
  ulonglong uVar14;
  ushort uVar15;
  ushort uVar16;
  ulonglong uVar17;
  longlong lVar18;
  ulonglong uVar19;
  ulonglong uVar20;
  int iVar21;
  ulonglong uVar22;
  int iVar23;
  longlong lVar24;
  ulonglong uVar25;
  longlong lVar26;
  ulonglong uVar27;
  bool bVar28;
  bool bVar29;
  float fVar30;
  longlong lStack_98;
  ushort *puStack_88;
  
  uVar11 = (longlong)param_2 - (longlong)param_1;
  do {
    if ((longlong)uVar11 < 0x41) {
      puVar9 = param_1;
      if (param_1 != param_2) {
        while (puVar10 = puVar9 + 1, puVar10 != param_2) {
          uVar16 = puVar9[1];
          lVar18 = *(longlong *)(param_4 + 8);
          uVar11 = (ulonglong)uVar16;
          cVar8 = FUN_14241da30(lVar18,uVar11,*param_1);
          if (cVar8 == '\0') {
            fVar30 = *(float *)(lVar18 + 4 + uVar11 * 8);
            puVar9 = puVar10;
            do {
              uVar15 = puVar9[-1];
              fVar2 = *(float *)(lVar18 + 4 + (ulonglong)uVar15 * 8);
              if ((fVar30 != fVar2) || (NAN(fVar30) || NAN(fVar2))) {
                if (fVar30 <= fVar2) goto LAB_14018c493;
              }
              else {
                uVar4 = *(uint *)(lVar18 + uVar11 * 8);
                uVar20 = (ulonglong)uVar4 & 0x1ffff;
                iVar21 = (int)uVar20;
                if ((uVar20 == 0x1ffff) ||
                   (plVar7 = *(longlong **)((ulonglong)(uVar4 >> 0x11 & 0x1f) * 8 + 0x14abbe7c0),
                   plVar7 == (longlong *)0x0)) {
                  lVar24 = 0;
                }
                else {
                  uVar5 = *(uint *)(plVar7[5] + uVar20 * 4);
                  lVar24 = (ulonglong)(uint)((int)plVar7[1] * iVar21) + *plVar7;
                  if (uVar4 >> 0x16 != (uVar5 >> 0x11 & 0x3ff) ||
                      (uVar5 & *(uint *)(plVar7 + 6)) != *(uint *)(plVar7 + 6)) {
                    lVar24 = 0;
                  }
                }
                uVar5 = *(uint *)(lVar18 + (ulonglong)uVar15 * 8);
                uVar22 = (ulonglong)uVar5 & 0x1ffff;
                iVar23 = (int)uVar22;
                if (uVar22 == 0x1ffff) {
                  lVar26 = 0;
                }
                else {
                  plVar7 = *(longlong **)((ulonglong)(uVar5 >> 0x11 & 0x1f) * 8 + 0x14abbe7c0);
                  if (plVar7 == (longlong *)0x0) {
                    lVar26 = 0;
                  }
                  else {
                    uVar6 = *(uint *)(plVar7[5] + uVar22 * 4);
                    lVar26 = (ulonglong)(uint)((int)plVar7[1] * iVar23) + *plVar7;
                    if (uVar5 >> 0x16 != (uVar6 >> 0x11 & 0x3ff) ||
                        (uVar6 & *(uint *)(plVar7 + 6)) != *(uint *)(plVar7 + 6)) {
                      lVar26 = 0;
                    }
                  }
                }
                if (lVar24 == lVar26) {
                  if (uVar16 <= uVar15) goto LAB_14018c493;
                }
                else {
                  if ((iVar21 == 0x1ffff) ||
                     (plVar7 = *(longlong **)((ulonglong)(uVar4 >> 0x11 & 0x1f) * 8 + 0x14abbe7c0),
                     plVar7 == (longlong *)0x0)) {
                    uVar20 = 0;
                  }
                  else {
                    uVar6 = *(uint *)(plVar7[5] + uVar20 * 4);
                    uVar20 = (ulonglong)(uint)((int)plVar7[1] * iVar21) + *plVar7;
                    if (uVar4 >> 0x16 != (uVar6 >> 0x11 & 0x3ff) ||
                        (uVar6 & *(uint *)(plVar7 + 6)) != *(uint *)(plVar7 + 6)) {
                      uVar20 = 0;
                    }
                  }
                  if ((iVar23 == 0x1ffff) ||
                     (plVar7 = *(longlong **)((ulonglong)(uVar5 >> 0x11 & 0x1f) * 8 + 0x14abbe7c0),
                     plVar7 == (longlong *)0x0)) {
                    uVar22 = 0;
                  }
                  else {
                    uVar4 = *(uint *)(plVar7[5] + uVar22 * 4);
                    uVar22 = (ulonglong)(uint)((int)plVar7[1] * iVar23) + *plVar7;
                    if (uVar5 >> 0x16 != (uVar4 >> 0x11 & 0x3ff) ||
                        (uVar4 & *(uint *)(plVar7 + 6)) != *(uint *)(plVar7 + 6)) {
                      uVar22 = 0;
                    }
                  }
                  if (uVar22 <= uVar20) goto LAB_14018c493;
                }
              }
              *puVar9 = uVar15;
              puVar9 = puVar9 + -1;
            } while( true );
          }
          func_0x00014503ae80(param_1,puVar10,puVar9 + 2);
          puVar9 = param_1;
LAB_14018c493:
          *puVar9 = uVar16;
          puVar9 = puVar10;
        }
      }
      return;
    }
    if ((longlong)param_3 < 1) {
      uVar20 = (uVar11 >> 1) - 1;
      uVar14 = uVar20 >> 1;
      uVar22 = uVar11 >> 2;
      do {
        uVar16 = param_1[uVar22 - 1];
        uVar27 = uVar22 - 1;
        uVar17 = uVar27;
        if ((longlong)uVar22 <= (longlong)uVar14) {
          lVar18 = *(longlong *)(param_4 + 8);
          uVar19 = uVar27;
          do {
            uVar15 = param_1[uVar19 * 2 + 1];
            uVar3 = param_1[uVar19 * 2 + 2];
            fVar30 = *(float *)(lVar18 + 4 + (ulonglong)uVar3 * 8);
            fVar2 = *(float *)(lVar18 + 4 + (ulonglong)uVar15 * 8);
            bVar29 = fVar30 == fVar2;
            bVar28 = fVar30 < fVar2;
            if ((!bVar29) || (NAN(fVar30) || NAN(fVar2))) {
LAB_14018c553:
              bVar29 = !bVar28 && !bVar29;
            }
            else {
              uVar4 = *(uint *)(lVar18 + (ulonglong)uVar3 * 8);
              uVar17 = (ulonglong)uVar4 & 0x1ffff;
              iVar21 = (int)uVar17;
              if ((uVar17 == 0x1ffff) ||
                 ((plVar7 = *(longlong **)((ulonglong)(uVar4 >> 0x11 & 0x1f) * 8 + 0x14abbe7c0),
                  plVar7 == (longlong *)0x0 ||
                  (uVar5 = *(uint *)(plVar7[5] + uVar17 * 4),
                  uVar4 >> 0x16 != (uVar5 >> 0x11 & 0x3ff) ||
                  (uVar5 & *(uint *)(plVar7 + 6)) != *(uint *)(plVar7 + 6))))) {
                lVar24 = 0;
              }
              else {
                lVar24 = (ulonglong)(uint)((int)plVar7[1] * iVar21) + *plVar7;
              }
              uVar5 = *(uint *)(lVar18 + (ulonglong)uVar15 * 8);
              uVar25 = (ulonglong)uVar5 & 0x1ffff;
              iVar23 = (int)uVar25;
              if ((uVar25 == 0x1ffff) ||
                 (plVar7 = *(longlong **)((ulonglong)(uVar5 >> 0x11 & 0x1f) * 8 + 0x14abbe7c0),
                 plVar7 == (longlong *)0x0)) {
                lVar26 = 0;
              }
              else {
                uVar6 = *(uint *)(plVar7[5] + uVar25 * 4);
                if (uVar5 >> 0x16 == (uVar6 >> 0x11 & 0x3ff) &&
                    (uVar6 & *(uint *)(plVar7 + 6)) == *(uint *)(plVar7 + 6)) {
                  lVar26 = (ulonglong)(uint)((int)plVar7[1] * iVar23) + *plVar7;
                }
                else {
                  lVar26 = 0;
                }
              }
              if (lVar24 == lVar26) {
                bVar28 = uVar3 < uVar15;
                bVar29 = uVar3 == uVar15;
                goto LAB_14018c553;
              }
              if (((iVar21 == 0x1ffff) ||
                  (plVar7 = *(longlong **)((ulonglong)(uVar4 >> 0x11 & 0x1f) * 8 + 0x14abbe7c0),
                  plVar7 == (longlong *)0x0)) ||
                 (uVar6 = *(uint *)(plVar7[5] + uVar17 * 4),
                 uVar4 >> 0x16 != (uVar6 >> 0x11 & 0x3ff) ||
                 (uVar6 & *(uint *)(plVar7 + 6)) != *(uint *)(plVar7 + 6))) {
                uVar17 = 0;
              }
              else {
                uVar17 = (ulonglong)(uint)((int)plVar7[1] * iVar21) + *plVar7;
              }
              if (((iVar23 == 0x1ffff) ||
                  (plVar7 = *(longlong **)((ulonglong)(uVar5 >> 0x11 & 0x1f) * 8 + 0x14abbe7c0),
                  plVar7 == (longlong *)0x0)) ||
                 (uVar4 = *(uint *)(plVar7[5] + uVar25 * 4),
                 uVar5 >> 0x16 != (uVar4 >> 0x11 & 0x3ff) ||
                 (uVar4 & *(uint *)(plVar7 + 6)) != *(uint *)(plVar7 + 6))) {
                uVar25 = 0;
              }
              else {
                uVar25 = (ulonglong)(uint)((int)plVar7[1] * iVar23) + *plVar7;
              }
              bVar29 = uVar17 < uVar25;
            }
            if (bVar29) {
              uVar17 = uVar19 * 2 + 1;
            }
            else {
              uVar17 = uVar19 * 2 + 2;
            }
            param_1[uVar19] = param_1[uVar17];
            uVar19 = uVar17;
          } while ((longlong)uVar17 < (longlong)uVar14);
        }
        if (((uVar11 & 2) == 0) && (uVar17 == uVar14)) {
          param_1[uVar14] = param_1[(uVar11 >> 1) - 1];
          uVar17 = uVar20;
        }
        if ((longlong)uVar22 <= (longlong)uVar17) {
          lVar18 = *(longlong *)(param_4 + 8);
          fVar30 = *(float *)(lVar18 + 4 + (ulonglong)uVar16 * 8);
          do {
            uVar15 = *(ushort *)((longlong)param_1 + (uVar17 - 1 & 0xfffffffffffffffe));
            fVar2 = *(float *)(lVar18 + 4 + (ulonglong)uVar15 * 8);
            bVar29 = fVar2 == fVar30;
            bVar28 = fVar2 < fVar30;
            if ((!bVar29) || (NAN(fVar2) || NAN(fVar30))) {
LAB_14018c771:
              if (bVar28 || bVar29) break;
            }
            else {
              uVar4 = *(uint *)(lVar18 + (ulonglong)uVar15 * 8);
              uVar19 = (ulonglong)uVar4 & 0x1ffff;
              iVar21 = (int)uVar19;
              if ((uVar19 == 0x1ffff) ||
                 (plVar7 = *(longlong **)((ulonglong)(uVar4 >> 0x11 & 0x1f) * 8 + 0x14abbe7c0),
                 plVar7 == (longlong *)0x0)) {
                lVar24 = 0;
              }
              else {
                uVar5 = *(uint *)(plVar7[5] + uVar19 * 4);
                lVar24 = (ulonglong)(uint)((int)plVar7[1] * iVar21) + *plVar7;
                if (uVar4 >> 0x16 != (uVar5 >> 0x11 & 0x3ff) ||
                    (uVar5 & *(uint *)(plVar7 + 6)) != *(uint *)(plVar7 + 6)) {
                  lVar24 = 0;
                }
              }
              uVar5 = *(uint *)(lVar18 + (ulonglong)uVar16 * 8);
              uVar25 = (ulonglong)uVar5 & 0x1ffff;
              iVar23 = (int)uVar25;
              if ((uVar25 == 0x1ffff) ||
                 (plVar7 = *(longlong **)((ulonglong)(uVar5 >> 0x11 & 0x1f) * 8 + 0x14abbe7c0),
                 plVar7 == (longlong *)0x0)) {
                lVar26 = 0;
              }
              else {
                uVar6 = *(uint *)(plVar7[5] + uVar25 * 4);
                lVar26 = (ulonglong)(uint)((int)plVar7[1] * iVar23) + *plVar7;
                if (uVar5 >> 0x16 != (uVar6 >> 0x11 & 0x3ff) ||
                    (uVar6 & *(uint *)(plVar7 + 6)) != *(uint *)(plVar7 + 6)) {
                  lVar26 = 0;
                }
              }
              if (lVar24 == lVar26) {
                bVar28 = uVar15 < uVar16;
                bVar29 = uVar15 == uVar16;
                goto LAB_14018c771;
              }
              if ((iVar21 == 0x1ffff) ||
                 (plVar7 = *(longlong **)((ulonglong)(uVar4 >> 0x11 & 0x1f) * 8 + 0x14abbe7c0),
                 plVar7 == (longlong *)0x0)) {
                uVar19 = 0;
              }
              else {
                uVar6 = *(uint *)(plVar7[5] + uVar19 * 4);
                uVar19 = (ulonglong)(uint)((int)plVar7[1] * iVar21) + *plVar7;
                if (uVar4 >> 0x16 != (uVar6 >> 0x11 & 0x3ff) ||
                    (uVar6 & *(uint *)(plVar7 + 6)) != *(uint *)(plVar7 + 6)) {
                  uVar19 = 0;
                }
              }
              if ((iVar23 == 0x1ffff) ||
                 (plVar7 = *(longlong **)((ulonglong)(uVar5 >> 0x11 & 0x1f) * 8 + 0x14abbe7c0),
                 plVar7 == (longlong *)0x0)) {
                uVar25 = 0;
              }
              else {
                uVar4 = *(uint *)(plVar7[5] + uVar25 * 4);
                uVar25 = (ulonglong)(uint)((int)plVar7[1] * iVar23) + *plVar7;
                if (uVar5 >> 0x16 != (uVar4 >> 0x11 & 0x3ff) ||
                    (uVar4 & *(uint *)(plVar7 + 6)) != *(uint *)(plVar7 + 6)) {
                  uVar25 = 0;
                }
              }
              if (uVar25 <= uVar19) break;
            }
            uVar19 = (longlong)(uVar17 - 1) >> 1;
            param_1[uVar17] = uVar15;
            uVar17 = uVar19;
          } while ((longlong)uVar22 <= (longlong)uVar19);
        }
        param_1[uVar17] = uVar16;
        bVar29 = 1 < (longlong)uVar22;
        uVar22 = uVar27;
      } while (bVar29);
      uVar11 = (longlong)param_2 - (longlong)param_1;
      do {
        if ((longlong)uVar11 < 3) {
          return;
        }
        uVar16 = param_2[-1];
        uVar11 = (longlong)(param_2 + -1) - (longlong)param_1;
        uVar20 = ((longlong)uVar11 >> 1) - 1;
        uVar22 = (longlong)uVar20 >> 1;
        param_2[-1] = *param_1;
        if ((longlong)uVar22 < 1) {
          uVar14 = 0;
        }
        else {
          lVar18 = *(longlong *)(param_4 + 8);
          uVar27 = 0;
          do {
            uVar15 = param_1[uVar27 * 2 + 1];
            uVar3 = param_1[uVar27 * 2 + 2];
            fVar30 = *(float *)(lVar18 + 4 + (ulonglong)uVar3 * 8);
            fVar2 = *(float *)(lVar18 + 4 + (ulonglong)uVar15 * 8);
            bVar29 = fVar30 == fVar2;
            bVar28 = fVar30 < fVar2;
            if ((!bVar29) || (NAN(fVar30) || NAN(fVar2))) {
LAB_14018c9d2:
              bVar29 = !bVar28 && !bVar29;
            }
            else {
              uVar4 = *(uint *)(lVar18 + (ulonglong)uVar3 * 8);
              uVar14 = (ulonglong)uVar4 & 0x1ffff;
              iVar21 = (int)uVar14;
              if ((uVar14 == 0x1ffff) ||
                 ((plVar7 = *(longlong **)((ulonglong)(uVar4 >> 0x11 & 0x1f) * 8 + 0x14abbe7c0),
                  plVar7 == (longlong *)0x0 ||
                  (uVar5 = *(uint *)(plVar7[5] + uVar14 * 4),
                  uVar4 >> 0x16 != (uVar5 >> 0x11 & 0x3ff) ||
                  (uVar5 & *(uint *)(plVar7 + 6)) != *(uint *)(plVar7 + 6))))) {
                lVar24 = 0;
              }
              else {
                lVar24 = (ulonglong)(uint)((int)plVar7[1] * iVar21) + *plVar7;
              }
              uVar5 = *(uint *)(lVar18 + (ulonglong)uVar15 * 8);
              uVar17 = (ulonglong)uVar5 & 0x1ffff;
              iVar23 = (int)uVar17;
              if (((uVar17 == 0x1ffff) ||
                  (plVar7 = *(longlong **)((ulonglong)(uVar5 >> 0x11 & 0x1f) * 8 + 0x14abbe7c0),
                  plVar7 == (longlong *)0x0)) ||
                 (uVar6 = *(uint *)(plVar7[5] + uVar17 * 4),
                 uVar5 >> 0x16 != (uVar6 >> 0x11 & 0x3ff) ||
                 (uVar6 & *(uint *)(plVar7 + 6)) != *(uint *)(plVar7 + 6))) {
                lVar26 = 0;
              }
              else {
                lVar26 = (ulonglong)(uint)((int)plVar7[1] * iVar23) + *plVar7;
              }
              if (lVar24 == lVar26) {
                bVar28 = uVar3 < uVar15;
                bVar29 = uVar3 == uVar15;
                goto LAB_14018c9d2;
              }
              if (((iVar21 == 0x1ffff) ||
                  (plVar7 = *(longlong **)((ulonglong)(uVar4 >> 0x11 & 0x1f) * 8 + 0x14abbe7c0),
                  plVar7 == (longlong *)0x0)) ||
                 (uVar6 = *(uint *)(plVar7[5] + uVar14 * 4),
                 uVar4 >> 0x16 != (uVar6 >> 0x11 & 0x3ff) ||
                 (uVar6 & *(uint *)(plVar7 + 6)) != *(uint *)(plVar7 + 6))) {
                uVar14 = 0;
              }
              else {
                uVar14 = (ulonglong)(uint)((int)plVar7[1] * iVar21) + *plVar7;
              }
              if (((iVar23 == 0x1ffff) ||
                  (plVar7 = *(longlong **)((ulonglong)(uVar5 >> 0x11 & 0x1f) * 8 + 0x14abbe7c0),
                  plVar7 == (longlong *)0x0)) ||
                 (uVar4 = *(uint *)(plVar7[5] + uVar17 * 4),
                 uVar5 >> 0x16 != (uVar4 >> 0x11 & 0x3ff) ||
                 (uVar4 & *(uint *)(plVar7 + 6)) != *(uint *)(plVar7 + 6))) {
                uVar17 = 0;
              }
              else {
                uVar17 = (ulonglong)(uint)((int)plVar7[1] * iVar23) + *plVar7;
              }
              bVar29 = uVar14 < uVar17;
            }
            if (bVar29) {
              uVar14 = uVar27 * 2 + 1;
            }
            else {
              uVar14 = uVar27 * 2 + 2;
            }
            param_1[uVar27] = param_1[uVar14];
            uVar27 = uVar14;
          } while ((longlong)uVar14 < (longlong)uVar22);
        }
        if (((uVar11 & 2) == 0) && (uVar14 == uVar22)) {
          param_1[uVar22] = param_1[((longlong)uVar11 >> 1) + -1];
          uVar14 = uVar20;
        }
        if (0 < (longlong)uVar14) {
          lVar18 = *(longlong *)(param_4 + 8);
          fVar30 = *(float *)(lVar18 + 4 + (ulonglong)uVar16 * 8);
          do {
            uVar20 = uVar14 - 1;
            uVar15 = *(ushort *)((longlong)param_1 + (uVar20 & 0xfffffffffffffffe));
            fVar2 = *(float *)(lVar18 + 4 + (ulonglong)uVar15 * 8);
            if ((fVar2 != fVar30) || (NAN(fVar2) || NAN(fVar30))) {
              if (fVar2 <= fVar30) goto LAB_14018ce0e;
            }
            else {
              uVar4 = *(uint *)(lVar18 + (ulonglong)uVar15 * 8);
              uVar22 = (ulonglong)uVar4 & 0x1ffff;
              iVar21 = (int)uVar22;
              if ((uVar22 == 0x1ffff) ||
                 (plVar7 = *(longlong **)((ulonglong)(uVar4 >> 0x11 & 0x1f) * 8 + 0x14abbe7c0),
                 plVar7 == (longlong *)0x0)) {
                lVar24 = 0;
              }
              else {
                uVar5 = *(uint *)(plVar7[5] + uVar22 * 4);
                lVar24 = (ulonglong)(uint)((int)plVar7[1] * iVar21) + *plVar7;
                if (uVar4 >> 0x16 != (uVar5 >> 0x11 & 0x3ff) ||
                    (uVar5 & *(uint *)(plVar7 + 6)) != *(uint *)(plVar7 + 6)) {
                  lVar24 = 0;
                }
              }
              uVar5 = *(uint *)(lVar18 + (ulonglong)uVar16 * 8);
              uVar27 = (ulonglong)uVar5 & 0x1ffff;
              iVar23 = (int)uVar27;
              if ((uVar27 == 0x1ffff) ||
                 (plVar7 = *(longlong **)((ulonglong)(uVar5 >> 0x11 & 0x1f) * 8 + 0x14abbe7c0),
                 plVar7 == (longlong *)0x0)) {
                lVar26 = 0;
              }
              else {
                uVar6 = *(uint *)(plVar7[5] + uVar27 * 4);
                lVar26 = (ulonglong)(uint)((int)plVar7[1] * iVar23) + *plVar7;
                if (uVar5 >> 0x16 != (uVar6 >> 0x11 & 0x3ff) ||
                    (uVar6 & *(uint *)(plVar7 + 6)) != *(uint *)(plVar7 + 6)) {
                  lVar26 = 0;
                }
              }
              if (lVar24 == lVar26) {
                if (uVar15 <= uVar16) goto LAB_14018ce0e;
              }
              else {
                if ((iVar21 == 0x1ffff) ||
                   (plVar7 = *(longlong **)((ulonglong)(uVar4 >> 0x11 & 0x1f) * 8 + 0x14abbe7c0),
                   plVar7 == (longlong *)0x0)) {
                  uVar22 = 0;
                }
                else {
                  uVar6 = *(uint *)(plVar7[5] + uVar22 * 4);
                  uVar22 = (ulonglong)(uint)((int)plVar7[1] * iVar21) + *plVar7;
                  if (uVar4 >> 0x16 != (uVar6 >> 0x11 & 0x3ff) ||
                      (uVar6 & *(uint *)(plVar7 + 6)) != *(uint *)(plVar7 + 6)) {
                    uVar22 = 0;
                  }
                }
                if ((iVar23 == 0x1ffff) ||
                   (plVar7 = *(longlong **)((ulonglong)(uVar5 >> 0x11 & 0x1f) * 8 + 0x14abbe7c0),
                   plVar7 == (longlong *)0x0)) {
                  uVar27 = 0;
                }
                else {
                  uVar4 = *(uint *)(plVar7[5] + uVar27 * 4);
                  uVar27 = (ulonglong)(uint)((int)plVar7[1] * iVar23) + *plVar7;
                  if (uVar5 >> 0x16 != (uVar4 >> 0x11 & 0x3ff) ||
                      (uVar4 & *(uint *)(plVar7 + 6)) != *(uint *)(plVar7 + 6)) {
                    uVar27 = 0;
                  }
                }
                if (uVar27 <= uVar22) goto LAB_14018ce0e;
              }
            }
            param_1[uVar14] = uVar15;
            uVar14 = uVar20 >> 1;
          } while (1 < uVar20);
          uVar14 = 0;
        }
LAB_14018ce0e:
        param_1[uVar14] = uVar16;
        param_2 = param_2 + -1;
      } while( true );
    }
    puVar9 = param_2 + -1;
    puVar10 = param_1 + (uVar11 >> 2);
    lVar18 = (longlong)puVar9 - (longlong)param_1 >> 1;
    if (lVar18 < 0x29) {
      uVar16 = *param_1;
      uVar15 = *puVar10;
      lStack_98 = *(longlong *)(param_4 + 8);
      cVar8 = FUN_14241da30(lStack_98,uVar15,uVar16);
      if (cVar8 != '\0') {
        *puVar10 = uVar16;
        *param_1 = uVar15;
        uVar15 = *puVar10;
      }
      uVar16 = *puVar9;
      cVar8 = FUN_14241da30(lStack_98,uVar16,uVar15);
      if (cVar8 != '\0') {
        *puVar9 = uVar15;
        *puVar10 = uVar16;
        uVar15 = *param_1;
        cVar8 = FUN_14241da30(lStack_98,uVar16,uVar15);
        if (cVar8 != '\0') {
          *puVar10 = uVar15;
          *param_1 = uVar16;
        }
      }
    }
    else {
      uVar16 = *param_1;
      uVar11 = lVar18 + 1U >> 3;
      uVar15 = param_1[uVar11];
      lStack_98 = *(longlong *)(param_4 + 8);
      cVar8 = FUN_14241da30(lStack_98,uVar15,uVar16);
      if (cVar8 != '\0') {
        param_1[uVar11] = uVar16;
        *param_1 = uVar15;
        uVar15 = param_1[uVar11];
      }
      uVar16 = param_1[uVar11 * 2];
      cVar8 = FUN_14241da30(lStack_98,uVar16,uVar15);
      if (cVar8 != '\0') {
        param_1[uVar11 * 2] = uVar15;
        param_1[uVar11] = uVar16;
        uVar15 = *param_1;
        cVar8 = FUN_14241da30(lStack_98,uVar16,uVar15);
        if (cVar8 != '\0') {
          param_1[uVar11] = uVar15;
          *param_1 = uVar16;
        }
      }
      uVar16 = *puVar10;
      uVar15 = puVar10[-uVar11];
      cVar8 = FUN_14241da30(lStack_98,uVar16,uVar15);
      if (cVar8 != '\0') {
        *puVar10 = uVar15;
        puVar10[-uVar11] = uVar16;
        uVar16 = *puVar10;
      }
      uVar15 = puVar10[uVar11];
      cVar8 = FUN_14241da30(lStack_98,uVar15,uVar16);
      if (cVar8 != '\0') {
        puVar10[uVar11] = uVar16;
        *puVar10 = uVar15;
        uVar16 = puVar10[-uVar11];
        cVar8 = FUN_14241da30(lStack_98,uVar15,uVar16);
        if (cVar8 != '\0') {
          *puVar10 = uVar16;
          puVar10[-uVar11] = uVar15;
        }
      }
      uVar16 = puVar9[-uVar11];
      uVar15 = puVar9[uVar11 * -2];
      cVar8 = FUN_14241da30(lStack_98,uVar16,uVar15);
      if (cVar8 != '\0') {
        puVar9[-uVar11] = uVar15;
        puVar9[uVar11 * -2] = uVar16;
        uVar16 = puVar9[-uVar11];
      }
      uVar15 = *puVar9;
      cVar8 = FUN_14241da30(lStack_98,uVar15,uVar16);
      if (cVar8 != '\0') {
        *puVar9 = uVar16;
        puVar9[-uVar11] = uVar15;
        uVar16 = puVar9[uVar11 * -2];
        cVar8 = FUN_14241da30(lStack_98,uVar15,uVar16);
        if (cVar8 != '\0') {
          puVar9[-uVar11] = uVar16;
          puVar9[uVar11 * -2] = uVar15;
        }
      }
      uVar16 = *puVar10;
      uVar15 = param_1[uVar11];
      cVar8 = FUN_14241da30(lStack_98,uVar16,uVar15);
      if (cVar8 != '\0') {
        *puVar10 = uVar15;
        param_1[uVar11] = uVar16;
        uVar16 = *puVar10;
      }
      uVar15 = puVar9[-uVar11];
      cVar8 = FUN_14241da30(lStack_98,uVar15,uVar16);
      if (cVar8 != '\0') {
        puVar9[-uVar11] = uVar16;
        *puVar10 = uVar15;
        uVar16 = param_1[uVar11];
        cVar8 = FUN_14241da30(lStack_98,uVar15,uVar16);
        if (cVar8 != '\0') {
          *puVar10 = uVar16;
          param_1[uVar11] = uVar15;
        }
      }
    }
    puVar9 = puVar10;
    uVar11 = (ulonglong)*puVar10;
    fVar30 = *(float *)(lStack_98 + 4 + (ulonglong)*puVar10 * 8);
    do {
      uVar16 = puVar9[-1];
      uVar20 = (ulonglong)uVar16;
      fVar2 = *(float *)(lStack_98 + 4 + uVar20 * 8);
      bVar29 = fVar2 == fVar30;
      bVar28 = fVar2 < fVar30;
      uVar15 = (ushort)uVar11;
      if ((!bVar29) || (NAN(fVar2) || NAN(fVar30))) {
LAB_14018b18d:
        if (!bVar28 && !bVar29) break;
      }
      else {
        uVar4 = *(uint *)(lStack_98 + uVar20 * 8);
        uVar22 = (ulonglong)uVar4 & 0x1ffff;
        iVar21 = (int)uVar22;
        if ((uVar22 == 0x1ffff) ||
           (plVar7 = *(longlong **)((ulonglong)(uVar4 >> 0x11 & 0x1f) * 8 + 0x14abbe7c0),
           plVar7 == (longlong *)0x0)) {
          lVar18 = 0;
        }
        else {
          uVar5 = *(uint *)(plVar7[5] + uVar22 * 4);
          lVar18 = (ulonglong)(uint)((int)plVar7[1] * iVar21) + *plVar7;
          if (uVar4 >> 0x16 != (uVar5 >> 0x11 & 0x3ff) ||
              (uVar5 & *(uint *)(plVar7 + 6)) != *(uint *)(plVar7 + 6)) {
            lVar18 = 0;
          }
        }
        uVar5 = *(uint *)(lStack_98 + uVar11 * 8);
        uVar14 = (ulonglong)uVar5 & 0x1ffff;
        iVar23 = (int)uVar14;
        if ((uVar14 == 0x1ffff) ||
           (plVar7 = *(longlong **)((ulonglong)(uVar5 >> 0x11 & 0x1f) * 8 + 0x14abbe7c0),
           plVar7 == (longlong *)0x0)) {
          lVar24 = 0;
        }
        else {
          uVar6 = *(uint *)(plVar7[5] + uVar14 * 4);
          lVar24 = (ulonglong)(uint)((int)plVar7[1] * iVar23) + *plVar7;
          if (uVar5 >> 0x16 != (uVar6 >> 0x11 & 0x3ff) ||
              (uVar6 & *(uint *)(plVar7 + 6)) != *(uint *)(plVar7 + 6)) {
            lVar24 = 0;
          }
        }
        if (lVar18 == lVar24) {
          bVar28 = uVar16 < uVar15;
          bVar29 = uVar16 == uVar15;
          goto LAB_14018b18d;
        }
        if ((iVar21 == 0x1ffff) ||
           (plVar7 = *(longlong **)((ulonglong)(uVar4 >> 0x11 & 0x1f) * 8 + 0x14abbe7c0),
           plVar7 == (longlong *)0x0)) {
          uVar22 = 0;
        }
        else {
          uVar6 = *(uint *)(plVar7[5] + uVar22 * 4);
          uVar22 = (ulonglong)(uint)((int)plVar7[1] * iVar21) + *plVar7;
          if (uVar4 >> 0x16 != (uVar6 >> 0x11 & 0x3ff) ||
              (uVar6 & *(uint *)(plVar7 + 6)) != *(uint *)(plVar7 + 6)) {
            uVar22 = 0;
          }
        }
        if ((iVar23 == 0x1ffff) ||
           (plVar7 = *(longlong **)((ulonglong)(uVar5 >> 0x11 & 0x1f) * 8 + 0x14abbe7c0),
           plVar7 == (longlong *)0x0)) {
          uVar14 = 0;
        }
        else {
          uVar4 = *(uint *)(plVar7[5] + uVar14 * 4);
          uVar14 = (ulonglong)(uint)((int)plVar7[1] * iVar23) + *plVar7;
          if (uVar5 >> 0x16 != (uVar4 >> 0x11 & 0x3ff) ||
              (uVar4 & *(uint *)(plVar7 + 6)) != *(uint *)(plVar7 + 6)) {
            uVar14 = 0;
          }
        }
        if (uVar22 < uVar14) break;
      }
      fVar30 = *(float *)(lStack_98 + 4 + uVar11 * 8);
      bVar29 = fVar30 == fVar2;
      bVar28 = fVar30 < fVar2;
      if ((!bVar29) || (NAN(fVar30) || NAN(fVar2))) {
LAB_14018b353:
        if (!bVar28 && !bVar29) break;
      }
      else {
        uVar4 = *(uint *)(lStack_98 + uVar11 * 8);
        uVar11 = (ulonglong)uVar4 & 0x1ffff;
        iVar21 = (int)uVar11;
        if ((uVar11 == 0x1ffff) ||
           (plVar7 = *(longlong **)((ulonglong)(uVar4 >> 0x11 & 0x1f) * 8 + 0x14abbe7c0),
           plVar7 == (longlong *)0x0)) {
          lVar18 = 0;
        }
        else {
          uVar5 = *(uint *)(plVar7[5] + uVar11 * 4);
          lVar18 = (ulonglong)(uint)((int)plVar7[1] * iVar21) + *plVar7;
          if (uVar4 >> 0x16 != (uVar5 >> 0x11 & 0x3ff) ||
              (uVar5 & *(uint *)(plVar7 + 6)) != *(uint *)(plVar7 + 6)) {
            lVar18 = 0;
          }
        }
        uVar5 = *(uint *)(lStack_98 + uVar20 * 8);
        uVar22 = (ulonglong)uVar5 & 0x1ffff;
        iVar23 = (int)uVar22;
        if ((uVar22 == 0x1ffff) ||
           (plVar7 = *(longlong **)((ulonglong)(uVar5 >> 0x11 & 0x1f) * 8 + 0x14abbe7c0),
           plVar7 == (longlong *)0x0)) {
          lVar24 = 0;
        }
        else {
          uVar6 = *(uint *)(plVar7[5] + uVar22 * 4);
          lVar24 = (ulonglong)(uint)((int)plVar7[1] * iVar23) + *plVar7;
          if (uVar5 >> 0x16 != (uVar6 >> 0x11 & 0x3ff) ||
              (uVar6 & *(uint *)(plVar7 + 6)) != *(uint *)(plVar7 + 6)) {
            lVar24 = 0;
          }
        }
        if (lVar18 == lVar24) {
          bVar28 = uVar15 < uVar16;
          bVar29 = uVar15 == uVar16;
          goto LAB_14018b353;
        }
        if ((iVar21 == 0x1ffff) ||
           (plVar7 = *(longlong **)((ulonglong)(uVar4 >> 0x11 & 0x1f) * 8 + 0x14abbe7c0),
           plVar7 == (longlong *)0x0)) {
          uVar11 = 0;
        }
        else {
          uVar6 = *(uint *)(plVar7[5] + uVar11 * 4);
          uVar11 = (ulonglong)(uint)((int)plVar7[1] * iVar21) + *plVar7;
          if (uVar4 >> 0x16 != (uVar6 >> 0x11 & 0x3ff) ||
              (uVar6 & *(uint *)(plVar7 + 6)) != *(uint *)(plVar7 + 6)) {
            uVar11 = 0;
          }
        }
        if ((iVar23 == 0x1ffff) ||
           (plVar7 = *(longlong **)((ulonglong)(uVar5 >> 0x11 & 0x1f) * 8 + 0x14abbe7c0),
           plVar7 == (longlong *)0x0)) {
          uVar22 = 0;
        }
        else {
          uVar4 = *(uint *)(plVar7[5] + uVar22 * 4);
          uVar22 = (ulonglong)(uint)((int)plVar7[1] * iVar23) + *plVar7;
          if (uVar5 >> 0x16 != (uVar4 >> 0x11 & 0x3ff) ||
              (uVar4 & *(uint *)(plVar7 + 6)) != *(uint *)(plVar7 + 6)) {
            uVar22 = 0;
          }
        }
        if (uVar11 < uVar22) break;
      }
      puVar9 = puVar9 + -1;
      uVar11 = uVar20;
      fVar30 = fVar2;
    } while (param_1 < puVar9);
    puVar10 = puVar10 + 1;
    puVar12 = puVar9;
    puStack_88 = puVar10;
    if (puVar10 < param_2) {
      uVar16 = *puVar9;
      fVar30 = *(float *)(lStack_98 + 4 + (ulonglong)uVar16 * 8);
      do {
        uVar15 = *puVar10;
        fVar2 = *(float *)(lStack_98 + 4 + (ulonglong)uVar15 * 8);
        puStack_88 = puVar10;
        if ((fVar2 != fVar30) || (NAN(fVar2) || NAN(fVar30))) {
          if (fVar2 != fVar30) break;
        }
        else {
          uVar4 = *(uint *)(lStack_98 + (ulonglong)uVar15 * 8);
          uVar11 = (ulonglong)uVar4 & 0x1ffff;
          iVar21 = (int)uVar11;
          if ((uVar11 == 0x1ffff) ||
             (plVar7 = *(longlong **)((ulonglong)(uVar4 >> 0x11 & 0x1f) * 8 + 0x14abbe7c0),
             plVar7 == (longlong *)0x0)) {
            lVar18 = 0;
          }
          else {
            uVar5 = *(uint *)(plVar7[5] + uVar11 * 4);
            lVar18 = (ulonglong)(uint)((int)plVar7[1] * iVar21) + *plVar7;
            if (uVar4 >> 0x16 != (uVar5 >> 0x11 & 0x3ff) ||
                (uVar5 & *(uint *)(plVar7 + 6)) != *(uint *)(plVar7 + 6)) {
              lVar18 = 0;
            }
          }
          uVar5 = *(uint *)(lStack_98 + (ulonglong)uVar16 * 8);
          uVar20 = (ulonglong)uVar5 & 0x1ffff;
          iVar23 = (int)uVar20;
          if ((uVar20 == 0x1ffff) ||
             (plVar7 = *(longlong **)((ulonglong)(uVar5 >> 0x11 & 0x1f) * 8 + 0x14abbe7c0),
             plVar7 == (longlong *)0x0)) {
            lVar24 = 0;
          }
          else {
            uVar6 = *(uint *)(plVar7[5] + uVar20 * 4);
            lVar24 = (ulonglong)(uint)((int)plVar7[1] * iVar23) + *plVar7;
            if (uVar5 >> 0x16 != (uVar6 >> 0x11 & 0x3ff) ||
                (uVar6 & *(uint *)(plVar7 + 6)) != *(uint *)(plVar7 + 6)) {
              lVar24 = 0;
            }
          }
          if (lVar18 == lVar24) {
            if (uVar16 < uVar15) break;
          }
          else {
            if ((iVar21 == 0x1ffff) ||
               (plVar7 = *(longlong **)((ulonglong)(uVar4 >> 0x11 & 0x1f) * 8 + 0x14abbe7c0),
               plVar7 == (longlong *)0x0)) {
              uVar22 = 0;
            }
            else {
              uVar6 = *(uint *)(plVar7[5] + uVar11 * 4);
              uVar22 = (ulonglong)(uint)((int)plVar7[1] * iVar21) + *plVar7;
              if (uVar4 >> 0x16 != (uVar6 >> 0x11 & 0x3ff) ||
                  (uVar6 & *(uint *)(plVar7 + 6)) != *(uint *)(plVar7 + 6)) {
                uVar22 = 0;
              }
            }
            if ((iVar23 == 0x1ffff) ||
               (plVar7 = *(longlong **)((ulonglong)(uVar5 >> 0x11 & 0x1f) * 8 + 0x14abbe7c0),
               plVar7 == (longlong *)0x0)) {
              uVar14 = 0;
            }
            else {
              uVar6 = *(uint *)(plVar7[5] + uVar20 * 4);
              uVar14 = (ulonglong)(uint)((int)plVar7[1] * iVar23) + *plVar7;
              if (uVar5 >> 0x16 != (uVar6 >> 0x11 & 0x3ff) ||
                  (uVar6 & *(uint *)(plVar7 + 6)) != *(uint *)(plVar7 + 6)) {
                uVar14 = 0;
              }
            }
            if (uVar22 < uVar14) break;
          }
          if ((iVar23 == 0x1ffff) ||
             (plVar7 = *(longlong **)((ulonglong)(uVar5 >> 0x11 & 0x1f) * 8 + 0x14abbe7c0),
             plVar7 == (longlong *)0x0)) {
            lVar18 = 0;
          }
          else {
            uVar6 = *(uint *)(plVar7[5] + uVar20 * 4);
            lVar18 = (ulonglong)(uint)((int)plVar7[1] * iVar23) + *plVar7;
            if (uVar5 >> 0x16 != (uVar6 >> 0x11 & 0x3ff) ||
                (uVar6 & *(uint *)(plVar7 + 6)) != *(uint *)(plVar7 + 6)) {
              lVar18 = 0;
            }
          }
          if ((iVar21 == 0x1ffff) ||
             (plVar7 = *(longlong **)((ulonglong)(uVar4 >> 0x11 & 0x1f) * 8 + 0x14abbe7c0),
             plVar7 == (longlong *)0x0)) {
            lVar24 = 0;
          }
          else {
            uVar6 = *(uint *)(plVar7[5] + uVar11 * 4);
            lVar24 = (ulonglong)(uint)((int)plVar7[1] * iVar21) + *plVar7;
            if (uVar4 >> 0x16 != (uVar6 >> 0x11 & 0x3ff) ||
                (uVar6 & *(uint *)(plVar7 + 6)) != *(uint *)(plVar7 + 6)) {
              lVar24 = 0;
            }
          }
          if (lVar18 == lVar24) {
            if (uVar15 < uVar16) break;
          }
          else {
            if ((iVar23 == 0x1ffff) ||
               (plVar7 = *(longlong **)((ulonglong)(uVar5 >> 0x11 & 0x1f) * 8 + 0x14abbe7c0),
               plVar7 == (longlong *)0x0)) {
              uVar20 = 0;
            }
            else {
              uVar6 = *(uint *)(plVar7[5] + uVar20 * 4);
              uVar20 = (ulonglong)(uint)((int)plVar7[1] * iVar23) + *plVar7;
              if (uVar5 >> 0x16 != (uVar6 >> 0x11 & 0x3ff) ||
                  (uVar6 & *(uint *)(plVar7 + 6)) != *(uint *)(plVar7 + 6)) {
                uVar20 = 0;
              }
            }
            if ((iVar21 == 0x1ffff) ||
               (plVar7 = *(longlong **)((ulonglong)(uVar4 >> 0x11 & 0x1f) * 8 + 0x14abbe7c0),
               plVar7 == (longlong *)0x0)) {
              uVar11 = 0;
            }
            else {
              uVar5 = *(uint *)(plVar7[5] + uVar11 * 4);
              uVar11 = (ulonglong)(uint)((int)plVar7[1] * iVar21) + *plVar7;
              if (uVar4 >> 0x16 != (uVar5 >> 0x11 & 0x3ff) ||
                  (uVar5 & *(uint *)(plVar7 + 6)) != *(uint *)(plVar7 + 6)) {
                uVar11 = 0;
              }
            }
            if (uVar20 < uVar11) break;
          }
        }
        puVar10 = puVar10 + 1;
        puStack_88 = puVar10;
      } while (puVar10 < param_2);
    }
LAB_14018b8e0:
    if (puVar10 < param_2) {
LAB_14018b8ee:
      uVar16 = *puVar10;
      uVar15 = *puVar9;
      fVar30 = *(float *)(lStack_98 + 4 + (ulonglong)uVar15 * 8);
      fVar2 = *(float *)(lStack_98 + 4 + (ulonglong)uVar16 * 8);
      if ((fVar30 != fVar2) || (NAN(fVar30) || NAN(fVar2))) {
        if (fVar2 < fVar30) goto LAB_14018bca6;
        if (fVar30 < fVar2) goto LAB_14018bcba;
      }
      else {
        uVar4 = *(uint *)(lStack_98 + (ulonglong)uVar15 * 8);
        uVar11 = (ulonglong)uVar4 & 0x1ffff;
        iVar21 = (int)uVar11;
        if ((uVar11 == 0x1ffff) ||
           (plVar7 = *(longlong **)((ulonglong)(uVar4 >> 0x11 & 0x1f) * 8 + 0x14abbe7c0),
           plVar7 == (longlong *)0x0)) {
          lVar18 = 0;
        }
        else {
          uVar5 = *(uint *)(plVar7[5] + uVar11 * 4);
          lVar18 = (ulonglong)(uint)((int)plVar7[1] * iVar21) + *plVar7;
          if (uVar4 >> 0x16 != (uVar5 >> 0x11 & 0x3ff) ||
              (uVar5 & *(uint *)(plVar7 + 6)) != *(uint *)(plVar7 + 6)) {
            lVar18 = 0;
          }
        }
        uVar5 = *(uint *)(lStack_98 + (ulonglong)uVar16 * 8);
        uVar20 = (ulonglong)uVar5 & 0x1ffff;
        iVar23 = (int)uVar20;
        if ((uVar20 == 0x1ffff) ||
           (plVar7 = *(longlong **)((ulonglong)(uVar5 >> 0x11 & 0x1f) * 8 + 0x14abbe7c0),
           plVar7 == (longlong *)0x0)) {
          lVar24 = 0;
        }
        else {
          uVar6 = *(uint *)(plVar7[5] + uVar20 * 4);
          lVar24 = (ulonglong)(uint)((int)plVar7[1] * iVar23) + *plVar7;
          if (uVar5 >> 0x16 != (uVar6 >> 0x11 & 0x3ff) ||
              (uVar6 & *(uint *)(plVar7 + 6)) != *(uint *)(plVar7 + 6)) {
            lVar24 = 0;
          }
        }
        if (lVar18 == lVar24) {
          if (uVar15 <= uVar16) goto LAB_14018bae0;
          goto LAB_14018bca6;
        }
        if ((iVar21 == 0x1ffff) ||
           (plVar7 = *(longlong **)((ulonglong)(uVar4 >> 0x11 & 0x1f) * 8 + 0x14abbe7c0),
           plVar7 == (longlong *)0x0)) {
          uVar22 = 0;
        }
        else {
          uVar6 = *(uint *)(plVar7[5] + uVar11 * 4);
          uVar22 = (ulonglong)(uint)((int)plVar7[1] * iVar21) + *plVar7;
          if (uVar4 >> 0x16 != (uVar6 >> 0x11 & 0x3ff) ||
              (uVar6 & *(uint *)(plVar7 + 6)) != *(uint *)(plVar7 + 6)) {
            uVar22 = 0;
          }
        }
        if ((iVar23 == 0x1ffff) ||
           (plVar7 = *(longlong **)((ulonglong)(uVar5 >> 0x11 & 0x1f) * 8 + 0x14abbe7c0),
           plVar7 == (longlong *)0x0)) {
          uVar14 = 0;
        }
        else {
          uVar6 = *(uint *)(plVar7[5] + uVar20 * 4);
          uVar14 = (ulonglong)(uint)((int)plVar7[1] * iVar23) + *plVar7;
          if (uVar5 >> 0x16 != (uVar6 >> 0x11 & 0x3ff) ||
              (uVar6 & *(uint *)(plVar7 + 6)) != *(uint *)(plVar7 + 6)) {
            uVar14 = 0;
          }
        }
        if (uVar22 < uVar14) goto LAB_14018bca6;
LAB_14018bae0:
        if ((iVar23 == 0x1ffff) ||
           (plVar7 = *(longlong **)((ulonglong)(uVar5 >> 0x11 & 0x1f) * 8 + 0x14abbe7c0),
           plVar7 == (longlong *)0x0)) {
          lVar18 = 0;
        }
        else {
          uVar6 = *(uint *)(plVar7[5] + uVar20 * 4);
          lVar18 = (ulonglong)(uint)((int)plVar7[1] * iVar23) + *plVar7;
          if (uVar5 >> 0x16 != (uVar6 >> 0x11 & 0x3ff) ||
              (uVar6 & *(uint *)(plVar7 + 6)) != *(uint *)(plVar7 + 6)) {
            lVar18 = 0;
          }
        }
        if ((iVar21 == 0x1ffff) ||
           (plVar7 = *(longlong **)((ulonglong)(uVar4 >> 0x11 & 0x1f) * 8 + 0x14abbe7c0),
           plVar7 == (longlong *)0x0)) {
          lVar24 = 0;
        }
        else {
          uVar6 = *(uint *)(plVar7[5] + uVar11 * 4);
          lVar24 = (ulonglong)(uint)((int)plVar7[1] * iVar21) + *plVar7;
          if (uVar4 >> 0x16 != (uVar6 >> 0x11 & 0x3ff) ||
              (uVar6 & *(uint *)(plVar7 + 6)) != *(uint *)(plVar7 + 6)) {
            lVar24 = 0;
          }
        }
        if (lVar18 == lVar24) {
          if (uVar16 <= uVar15) goto LAB_14018bc8f;
          goto LAB_14018bcba;
        }
        if ((iVar23 == 0x1ffff) ||
           (plVar7 = *(longlong **)((ulonglong)(uVar5 >> 0x11 & 0x1f) * 8 + 0x14abbe7c0),
           plVar7 == (longlong *)0x0)) {
          uVar20 = 0;
        }
        else {
          uVar6 = *(uint *)(plVar7[5] + uVar20 * 4);
          uVar20 = (ulonglong)(uint)((int)plVar7[1] * iVar23) + *plVar7;
          if (uVar5 >> 0x16 != (uVar6 >> 0x11 & 0x3ff) ||
              (uVar6 & *(uint *)(plVar7 + 6)) != *(uint *)(plVar7 + 6)) {
            uVar20 = 0;
          }
        }
        if (iVar21 == 0x1ffff) {
          uVar11 = 0;
        }
        else {
          plVar7 = *(longlong **)((ulonglong)(uVar4 >> 0x11 & 0x1f) * 8 + 0x14abbe7c0);
          if (plVar7 == (longlong *)0x0) {
            uVar11 = 0;
          }
          else {
            uVar5 = *(uint *)(plVar7[5] + uVar11 * 4);
            uVar11 = (ulonglong)(uint)((int)plVar7[1] * iVar21) + *plVar7;
            if (uVar4 >> 0x16 != (uVar5 >> 0x11 & 0x3ff) ||
                (uVar5 & *(uint *)(plVar7 + 6)) != *(uint *)(plVar7 + 6)) {
              uVar11 = 0;
            }
          }
        }
        if (uVar20 < uVar11) goto LAB_14018bcba;
      }
LAB_14018bc8f:
      if (puVar10 != puStack_88) {
        uVar15 = *puStack_88;
        *puStack_88 = uVar16;
        *puVar10 = uVar15;
      }
      puStack_88 = puStack_88 + 1;
LAB_14018bca6:
      puVar10 = puVar10 + 1;
      if (param_2 <= puVar10) goto LAB_14018bcba;
      goto LAB_14018b8ee;
    }
LAB_14018bcba:
    if (param_1 < puVar12) {
LAB_14018bcc8:
      uVar16 = *puVar9;
      puVar13 = puVar12 + -1;
      uVar15 = puVar12[-1];
      fVar30 = *(float *)(lStack_98 + 4 + (ulonglong)uVar16 * 8);
      fVar2 = *(float *)(lStack_98 + 4 + (ulonglong)uVar15 * 8);
      if ((fVar2 != fVar30) || (NAN(fVar2) || NAN(fVar30))) {
        if (fVar30 < fVar2) goto LAB_14018c0c8;
        if (fVar2 < fVar30) goto LAB_14018c0e1;
      }
      else {
        uVar4 = *(uint *)(lStack_98 + (ulonglong)uVar15 * 8);
        uVar11 = (ulonglong)uVar4 & 0x1ffff;
        iVar21 = (int)uVar11;
        if ((uVar11 == 0x1ffff) ||
           (plVar7 = *(longlong **)((ulonglong)(uVar4 >> 0x11 & 0x1f) * 8 + 0x14abbe7c0),
           plVar7 == (longlong *)0x0)) {
          lVar18 = 0;
        }
        else {
          uVar5 = *(uint *)(plVar7[5] + uVar11 * 4);
          lVar18 = (ulonglong)(uint)((int)plVar7[1] * iVar21) + *plVar7;
          if (uVar4 >> 0x16 != (uVar5 >> 0x11 & 0x3ff) ||
              (uVar5 & *(uint *)(plVar7 + 6)) != *(uint *)(plVar7 + 6)) {
            lVar18 = 0;
          }
        }
        uVar5 = *(uint *)(lStack_98 + (ulonglong)uVar16 * 8);
        uVar20 = (ulonglong)uVar5 & 0x1ffff;
        iVar23 = (int)uVar20;
        if (uVar20 == 0x1ffff) {
          lVar24 = 0;
        }
        else {
          plVar7 = *(longlong **)((ulonglong)(uVar5 >> 0x11 & 0x1f) * 8 + 0x14abbe7c0);
          if (plVar7 == (longlong *)0x0) {
            lVar24 = 0;
          }
          else {
            uVar6 = *(uint *)(plVar7[5] + uVar20 * 4);
            lVar24 = (ulonglong)(uint)((int)plVar7[1] * iVar23) + *plVar7;
            if (uVar5 >> 0x16 != (uVar6 >> 0x11 & 0x3ff) ||
                (uVar6 & *(uint *)(plVar7 + 6)) != *(uint *)(plVar7 + 6)) {
              lVar24 = 0;
            }
          }
        }
        if (lVar18 == lVar24) {
          if (uVar15 <= uVar16) goto LAB_14018be70;
          goto LAB_14018c0c8;
        }
        if ((iVar21 == 0x1ffff) ||
           (plVar7 = *(longlong **)((ulonglong)(uVar4 >> 0x11 & 0x1f) * 8 + 0x14abbe7c0),
           plVar7 == (longlong *)0x0)) {
          uVar22 = 0;
        }
        else {
          uVar6 = *(uint *)(plVar7[5] + uVar11 * 4);
          uVar22 = (ulonglong)(uint)((int)plVar7[1] * iVar21) + *plVar7;
          if (uVar4 >> 0x16 != (uVar6 >> 0x11 & 0x3ff) ||
              (uVar6 & *(uint *)(plVar7 + 6)) != *(uint *)(plVar7 + 6)) {
            uVar22 = 0;
          }
        }
        if (iVar23 == 0x1ffff) {
          uVar14 = 0;
        }
        else {
          plVar7 = *(longlong **)((ulonglong)(uVar5 >> 0x11 & 0x1f) * 8 + 0x14abbe7c0);
          if (plVar7 == (longlong *)0x0) {
            uVar14 = 0;
          }
          else {
            uVar6 = *(uint *)(plVar7[5] + uVar20 * 4);
            uVar14 = (ulonglong)(uint)((int)plVar7[1] * iVar23) + *plVar7;
            if (uVar5 >> 0x16 != (uVar6 >> 0x11 & 0x3ff) ||
                (uVar6 & *(uint *)(plVar7 + 6)) != *(uint *)(plVar7 + 6)) {
              uVar14 = 0;
            }
          }
        }
        if (uVar22 < uVar14) goto LAB_14018c0c8;
LAB_14018be70:
        if ((iVar23 == 0x1ffff) ||
           (plVar7 = *(longlong **)((ulonglong)(uVar5 >> 0x11 & 0x1f) * 8 + 0x14abbe7c0),
           plVar7 == (longlong *)0x0)) {
          lVar18 = 0;
        }
        else {
          uVar6 = *(uint *)(plVar7[5] + uVar20 * 4);
          lVar18 = (ulonglong)(uint)((int)plVar7[1] * iVar23) + *plVar7;
          if (uVar5 >> 0x16 != (uVar6 >> 0x11 & 0x3ff) ||
              (uVar6 & *(uint *)(plVar7 + 6)) != *(uint *)(plVar7 + 6)) {
            lVar18 = 0;
          }
        }
        if (iVar21 == 0x1ffff) {
          lVar24 = 0;
        }
        else {
          plVar7 = *(longlong **)((ulonglong)(uVar4 >> 0x11 & 0x1f) * 8 + 0x14abbe7c0);
          if (plVar7 == (longlong *)0x0) {
            lVar24 = 0;
          }
          else {
            uVar6 = *(uint *)(plVar7[5] + uVar11 * 4);
            lVar24 = (ulonglong)(uint)((int)plVar7[1] * iVar21) + *plVar7;
            if (uVar4 >> 0x16 != (uVar6 >> 0x11 & 0x3ff) ||
                (uVar6 & *(uint *)(plVar7 + 6)) != *(uint *)(plVar7 + 6)) {
              lVar24 = 0;
            }
          }
        }
        if (lVar18 != lVar24) {
          if ((iVar23 == 0x1ffff) ||
             (plVar7 = *(longlong **)((ulonglong)(uVar5 >> 0x11 & 0x1f) * 8 + 0x14abbe7c0),
             plVar7 == (longlong *)0x0)) {
            uVar20 = 0;
          }
          else {
            uVar6 = *(uint *)(plVar7[5] + uVar20 * 4);
            uVar20 = (ulonglong)(uint)((int)plVar7[1] * iVar23) + *plVar7;
            if (uVar5 >> 0x16 != (uVar6 >> 0x11 & 0x3ff) ||
                (uVar6 & *(uint *)(plVar7 + 6)) != *(uint *)(plVar7 + 6)) {
              uVar20 = 0;
            }
          }
          if (iVar21 == 0x1ffff) {
            uVar11 = 0;
          }
          else {
            plVar7 = *(longlong **)((ulonglong)(uVar4 >> 0x11 & 0x1f) * 8 + 0x14abbe7c0);
            if (plVar7 == (longlong *)0x0) {
              uVar11 = 0;
            }
            else {
              uVar5 = *(uint *)(plVar7[5] + uVar11 * 4);
              uVar11 = (ulonglong)(uint)((int)plVar7[1] * iVar21) + *plVar7;
              if (uVar4 >> 0x16 != (uVar5 >> 0x11 & 0x3ff) ||
                  (uVar5 & *(uint *)(plVar7 + 6)) != *(uint *)(plVar7 + 6)) {
                uVar11 = 0;
              }
            }
          }
          if (uVar11 <= uVar20) goto LAB_14018c0b2;
          goto LAB_14018c0e1;
        }
        if (uVar15 < uVar16) goto LAB_14018c0e1;
      }
LAB_14018c0b2:
      puVar1 = puVar9 + -1;
      bVar29 = puVar12 != puVar9;
      puVar9 = puVar1;
      if (bVar29) {
        uVar16 = *puVar1;
        *puVar1 = uVar15;
        *puVar13 = uVar16;
      }
LAB_14018c0c8:
      puVar12 = puVar13;
      if (puVar13 <= param_1) goto LAB_14018c0e1;
      goto LAB_14018bcc8;
    }
LAB_14018c0e1:
    if ((puVar10 != param_2) || (puVar12 != param_1)) {
      if (puVar12 == param_1) {
        uVar16 = *puVar9;
        if (puStack_88 != puVar10) {
          *puVar9 = *puStack_88;
          *puStack_88 = uVar16;
          uVar16 = *puVar9;
        }
        *puVar9 = *puVar10;
        puVar9 = puVar9 + 1;
        *puVar10 = uVar16;
        puVar10 = puVar10 + 1;
        puStack_88 = puStack_88 + 1;
      }
      else {
        puVar13 = puVar12 + -1;
        if (puVar10 == param_2) {
          puVar1 = puVar9 + -1;
          uVar16 = puVar9[-1];
          if (puVar12 != puVar9) {
            uVar16 = *puVar13;
            *puVar13 = puVar9[-1];
            *puVar1 = uVar16;
          }
          *puVar1 = puStack_88[-1];
          puStack_88[-1] = uVar16;
          puVar9 = puVar1;
          puVar12 = puVar13;
          puStack_88 = puStack_88 + -1;
        }
        else {
          uVar16 = *puVar10;
          *puVar10 = *puVar13;
          *puVar13 = uVar16;
          puVar10 = puVar10 + 1;
          puVar12 = puVar13;
        }
      }
      goto LAB_14018b8e0;
    }
    param_3 = (param_3 >> 2) + (param_3 >> 1);
    if ((longlong)puVar9 - (longlong)param_1 < (longlong)param_2 - (longlong)puStack_88) {
      FUN_14018adb0(param_1,puVar9,param_3,param_4);
      puVar9 = param_2;
      param_1 = puStack_88;
    }
    else {
      FUN_14018adb0(puStack_88,param_2,param_3,param_4);
    }
    uVar11 = (longlong)puVar9 - (longlong)param_1;
    param_2 = puVar9;
  } while( true );
}

