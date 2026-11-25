// Recovered from game_scarlett_master.exe (GTA VI, Xbox Series X, PE32+ x64)
// Address: 14001a530  size: 952 bytes
// Name:    FUN_14001a530
// Subsystem: core
//
// Referenced strings (0 in this body, 0 including direct callees):
// Callees: 
//
// Generated decompilation. Formatting follows MiscRef/GTAVSRC conventions;
// identifiers are recovered, not original. See ../../../README.md.

#include "gta6decomp/rage_types.h"


void FUN_14001a530(uint *param_1,uint *param_2,uint *param_3,longlong param_4)

{
  float fVar1;
  float fVar2;
  float fVar3;
  uint uVar4;
  bool bVar5;
  ulonglong uVar6;
  uint *puVar7;
  uint uVar8;
  ulonglong uVar9;
  longlong lVar10;
  longlong lVar11;
  longlong lVar12;
  ulonglong uVar13;
  longlong lVar14;
  ulonglong uVar15;
  longlong lVar16;
  ulonglong uVar17;
  longlong lVar18;
  longlong lVar19;
  longlong lVar20;
  longlong lVar21;
  
  if (param_1 != param_2) {
    uVar6 = (longlong)param_2 - (longlong)param_1;
    lVar14 = (longlong)uVar6 >> 2;
    if (0 < (longlong)uVar6 >> 3) {
      lVar11 = param_4 + 0x10;
      lVar12 = lVar14 + -1 >> 1;
      lVar21 = (longlong)uVar6 >> 3;
      do {
        lVar18 = lVar21 + -1;
        uVar8 = param_1[lVar21 + -1];
        lVar19 = lVar18;
        lVar16 = lVar18;
        if (lVar21 <= lVar12) {
          do {
            fVar1 = *(float *)(param_4 + 0x5c + (ulonglong)param_1[lVar16 * 2 + 2] * 0x70);
            fVar2 = *(float *)(param_4 + 0x5c + (ulonglong)param_1[lVar16 * 2 + 1] * 0x70);
            if ((fVar1 != fVar2) || (NAN(fVar1) || NAN(fVar2))) {
              bVar5 = fVar2 < fVar1;
            }
            else {
              bVar5 = *(int *)((ulonglong)param_1[lVar16 * 2 + 2] * 0x70 + lVar11 + 0x60) <
                      *(int *)((ulonglong)param_1[lVar16 * 2 + 1] * 0x70 + lVar11 + 0x60);
            }
            if (bVar5) {
              lVar19 = lVar16 * 2 + 1;
            }
            else {
              lVar19 = lVar16 * 2 + 2;
            }
            param_1[lVar16] = param_1[lVar19];
            lVar16 = lVar19;
          } while (lVar19 < lVar12);
        }
        if (((uVar6 & 4) == 0) && (lVar19 == lVar12)) {
          param_1[lVar12] = param_1[lVar14 + -1];
          lVar19 = lVar14 + -1;
        }
        if (lVar21 <= lVar19) {
          lVar16 = (ulonglong)uVar8 * 0x70;
          fVar1 = *(float *)(param_4 + 0x5c + lVar16);
          do {
            lVar20 = lVar19 + -1 >> 1;
            lVar10 = (ulonglong)param_1[lVar20] * 0x70;
            fVar2 = *(float *)(param_4 + 0x5c + lVar10);
            if ((fVar2 != fVar1) || (NAN(fVar2) || NAN(fVar1))) {
              if (fVar2 <= fVar1) break;
            }
            else if (*(int *)(lVar11 + lVar16 + 0x60) <= *(int *)(lVar10 + lVar11 + 0x60)) break;
            param_1[lVar19] = param_1[lVar20];
            lVar19 = lVar20;
          } while (lVar21 <= lVar20);
        }
        param_1[lVar19] = uVar8;
        bVar5 = 1 < lVar21;
        lVar21 = lVar18;
      } while (bVar5);
    }
    if (param_2 < param_3) {
      uVar8 = *param_1;
      lVar11 = param_4 + 0x10;
      uVar13 = (longlong)(lVar14 - 1U) >> 1;
      puVar7 = param_2;
      do {
        uVar4 = *puVar7;
        lVar12 = (ulonglong)uVar4 * 0x70;
        lVar21 = lVar11 + lVar12;
        fVar1 = *(float *)(param_4 + 0x5c + lVar12);
        fVar2 = *(float *)(param_4 + 0x5c + (ulonglong)uVar8 * 0x70);
        if ((fVar1 != fVar2) || (NAN(fVar1) || NAN(fVar2))) {
          if (fVar2 < fVar1) goto LAB_14001a6d3;
        }
        else if (*(int *)(lVar21 + 0x60) < *(int *)((ulonglong)uVar8 * 0x70 + lVar11 + 0x60)) {
LAB_14001a6d3:
          *puVar7 = uVar8;
          if ((longlong)uVar13 < 1) {
            uVar15 = 0;
          }
          else {
            uVar17 = 0;
            do {
              fVar2 = *(float *)(param_4 + 0x5c + (ulonglong)param_1[uVar17 * 2 + 2] * 0x70);
              fVar3 = *(float *)(param_4 + 0x5c + (ulonglong)param_1[uVar17 * 2 + 1] * 0x70);
              if ((fVar2 != fVar3) || (NAN(fVar2) || NAN(fVar3))) {
                bVar5 = fVar3 < fVar2;
              }
              else {
                bVar5 = *(int *)((ulonglong)param_1[uVar17 * 2 + 2] * 0x70 + lVar11 + 0x60) <
                        *(int *)((ulonglong)param_1[uVar17 * 2 + 1] * 0x70 + lVar11 + 0x60);
              }
              if (bVar5) {
                uVar15 = uVar17 * 2 + 1;
              }
              else {
                uVar15 = uVar17 * 2 + 2;
              }
              param_1[uVar17] = param_1[uVar15];
              uVar17 = uVar15;
            } while ((longlong)uVar15 < (longlong)uVar13);
          }
          if (((uVar6 & 4) == 0) && (uVar15 == uVar13)) {
            param_1[uVar13] = param_1[lVar14 + -1];
            uVar15 = lVar14 - 1U;
          }
          if (0 < (longlong)uVar15) {
            do {
              uVar17 = uVar15 - 1;
              uVar9 = uVar17 >> 1;
              lVar12 = (ulonglong)param_1[uVar9] * 0x70;
              fVar2 = *(float *)(param_4 + 0x5c + lVar12);
              if ((fVar2 != fVar1) || (NAN(fVar2) || NAN(fVar1))) {
                if (fVar2 <= fVar1) goto LAB_14001a7a6;
              }
              else if (*(int *)(lVar21 + 0x60) <= *(int *)(lVar12 + lVar11 + 0x60))
              goto LAB_14001a7a6;
              param_1[uVar15] = param_1[uVar9];
              uVar15 = uVar9;
            } while (1 < uVar17);
            uVar15 = 0;
          }
LAB_14001a7a6:
          param_1[uVar15] = uVar4;
          uVar8 = *param_1;
        }
        puVar7 = puVar7 + 1;
      } while (puVar7 < param_3);
    }
    if (4 < (longlong)uVar6) {
      lVar14 = param_4 + 0x10;
      do {
        uVar8 = param_2[-1];
        param_2[-1] = *param_1;
        param_2 = param_2 + -1;
        uVar15 = (longlong)param_2 - (longlong)param_1;
        uVar6 = ((longlong)uVar15 >> 2) - 1;
        uVar13 = (longlong)uVar6 >> 1;
        if ((longlong)uVar13 < 1) {
          uVar17 = 0;
        }
        else {
          uVar9 = 0;
          do {
            fVar1 = *(float *)(param_4 + 0x5c + (ulonglong)param_1[uVar9 * 2 + 2] * 0x70);
            fVar2 = *(float *)(param_4 + 0x5c + (ulonglong)param_1[uVar9 * 2 + 1] * 0x70);
            if ((fVar1 != fVar2) || (NAN(fVar1) || NAN(fVar2))) {
              bVar5 = fVar2 < fVar1;
            }
            else {
              bVar5 = *(int *)((ulonglong)param_1[uVar9 * 2 + 2] * 0x70 + lVar14 + 0x60) <
                      *(int *)((ulonglong)param_1[uVar9 * 2 + 1] * 0x70 + lVar14 + 0x60);
            }
            if (bVar5) {
              uVar17 = uVar9 * 2 + 1;
            }
            else {
              uVar17 = uVar9 * 2 + 2;
            }
            param_1[uVar9] = param_1[uVar17];
            uVar9 = uVar17;
          } while ((longlong)uVar17 < (longlong)uVar13);
        }
        if (((uVar15 & 4) == 0) && (uVar17 == uVar13)) {
          param_1[uVar13] = param_1[((longlong)uVar15 >> 2) + -1];
          uVar17 = uVar6;
        }
        if (0 < (longlong)uVar17) {
          lVar11 = (ulonglong)uVar8 * 0x70;
          fVar1 = *(float *)(param_4 + 0x5c + lVar11);
          do {
            uVar6 = uVar17 - 1;
            uVar13 = uVar6 >> 1;
            lVar21 = (ulonglong)param_1[uVar13] * 0x70;
            fVar2 = *(float *)(param_4 + 0x5c + lVar21);
            if ((fVar2 != fVar1) || (NAN(fVar2) || NAN(fVar1))) {
              if (fVar2 <= fVar1) goto LAB_14001a8c9;
            }
            else if (*(int *)(lVar14 + lVar11 + 0x60) <= *(int *)(lVar21 + lVar14 + 0x60))
            goto LAB_14001a8c9;
            param_1[uVar17] = param_1[uVar13];
            uVar17 = uVar13;
          } while (1 < uVar6);
          uVar17 = 0;
        }
LAB_14001a8c9:
        param_1[uVar17] = uVar8;
      } while (4 < (longlong)uVar15);
    }
  }
  return;
}

