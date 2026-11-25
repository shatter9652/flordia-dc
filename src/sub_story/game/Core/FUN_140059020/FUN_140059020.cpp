// Recovered from game_scarlett_master.exe (GTA VI, Xbox Series X, PE32+ x64)
// Address: 140059020  size: 2184 bytes
// Name:    FUN_140059020
// Subsystem: core
//
// Referenced strings (0 in this body, 0 including direct callees):
// Callees: FUN_140059020
//
// Generated decompilation. Formatting follows MiscRef/GTAVSRC conventions;
// identifiers are recovered, not original. See ../../../README.md.

#include "gta6decomp/rage_types.h"


void FUN_140059020(undefined2 *param_1,undefined2 *param_2,ulonglong param_3)

{
  undefined2 *puVar1;
  float *pfVar2;
  undefined4 uVar3;
  undefined2 uVar4;
  bool bVar5;
  undefined2 *puVar6;
  ulonglong uVar7;
  ulonglong uVar8;
  undefined2 *puVar9;
  ulonglong uVar10;
  ulonglong uVar11;
  undefined2 *puVar12;
  undefined2 *puVar13;
  ulonglong uVar14;
  undefined2 *puVar15;
  longlong lVar16;
  ulonglong uVar17;
  longlong lVar18;
  undefined2 *puVar19;
  ulonglong uVar20;
  float fVar21;
  float fVar22;
  float fVar23;
  
  uVar11 = (longlong)param_2 - (longlong)param_1;
  do {
    if ((longlong)uVar11 < 0x101) {
      if ((param_1 != param_2) && (param_1 + 4 != param_2)) {
        lVar18 = 8;
        puVar13 = param_1;
        puVar15 = param_1 + 4;
        do {
          fVar22 = *(float *)(puVar13 + 6);
          uVar3 = *(undefined4 *)(puVar13 + 4);
          lVar16 = lVar18;
          if (*(float *)(param_1 + 2) <= fVar22) {
            fVar21 = *(float *)(puVar15 + -2);
            puVar13 = puVar15;
            while (fVar22 < fVar21) {
              *puVar13 = puVar13[-4];
              *(float *)(puVar13 + 2) = fVar21;
              pfVar2 = (float *)(puVar13 + -6);
              puVar13 = puVar13 + -4;
              fVar21 = *pfVar2;
            }
            *puVar13 = (short)uVar3;
          }
          else {
            do {
              *(undefined2 *)((longlong)param_1 + lVar16) =
                   *(undefined2 *)((longlong)param_1 + lVar16 + -8);
              *(undefined4 *)((longlong)param_1 + lVar16 + 4) =
                   *(undefined4 *)((longlong)param_1 + lVar16 + -4);
              lVar16 = lVar16 + -8;
            } while (lVar16 != 0);
            *param_1 = (short)uVar3;
            puVar13 = param_1;
          }
          *(float *)(puVar13 + 2) = fVar22;
          puVar12 = puVar15 + 4;
          lVar18 = lVar18 + 8;
          puVar13 = puVar15;
          puVar15 = puVar12;
        } while (puVar12 != param_2);
      }
      return;
    }
    uVar8 = uVar11 >> 4;
    if ((longlong)param_3 < 1) {
      uVar7 = uVar11 >> 3;
      uVar17 = uVar7 - 1 >> 1;
      do {
        uVar10 = uVar8 - 1;
        fVar22 = *(float *)(param_1 + uVar8 * 4 + -2);
        uVar3 = *(undefined4 *)(param_1 + uVar8 * 4 + -4);
        uVar14 = uVar10;
        uVar20 = uVar10;
        if ((longlong)uVar8 <= (longlong)uVar17) {
          do {
            if (*(float *)(param_1 + uVar20 * 8 + 10) < *(float *)(param_1 + uVar20 * 8 + 6)) {
              uVar14 = uVar20 * 2 + 1;
            }
            else {
              uVar14 = uVar20 * 2 + 2;
            }
            param_1[uVar20 * 4] = param_1[uVar14 * 4];
            *(undefined4 *)(param_1 + uVar20 * 4 + 2) = *(undefined4 *)(param_1 + uVar14 * 4 + 2);
            uVar20 = uVar14;
          } while ((longlong)uVar14 < (longlong)uVar17);
        }
        if (((uVar11 & 8) == 0) && (uVar14 == uVar17)) {
          param_1[uVar17 * 4] = param_1[uVar7 * 4 + -4];
          *(undefined4 *)(param_1 + uVar17 * 4 + 2) = *(undefined4 *)(param_1 + uVar7 * 4 + -2);
          uVar14 = uVar7 - 1;
        }
        while ((longlong)uVar8 <= (longlong)uVar14) {
          uVar20 = (longlong)(uVar14 - 1) >> 1;
          fVar21 = *(float *)(param_1 + uVar20 * 4 + 2);
          if (fVar22 <= fVar21) break;
          param_1[uVar14 * 4] = param_1[uVar20 * 4];
          *(float *)(param_1 + uVar14 * 4 + 2) = fVar21;
          uVar14 = uVar20;
        }
        param_1[uVar14 * 4] = (short)uVar3;
        *(float *)(param_1 + uVar14 * 4 + 2) = fVar22;
        bVar5 = 1 < (longlong)uVar8;
        uVar8 = uVar10;
      } while (bVar5);
      uVar11 = (longlong)param_2 - (longlong)param_1;
      do {
        if ((longlong)uVar11 < 9) {
          return;
        }
        uVar3 = *(undefined4 *)(param_2 + -4);
        fVar22 = *(float *)(param_2 + -2);
        param_2[-4] = *param_1;
        *(undefined4 *)(param_2 + -2) = *(undefined4 *)(param_1 + 2);
        param_2 = param_2 + -4;
        uVar11 = (longlong)param_2 - (longlong)param_1;
        lVar18 = (longlong)uVar11 >> 3;
        uVar8 = (longlong)(lVar18 - 1U) >> 1;
        if ((longlong)uVar8 < 1) {
          uVar7 = 0;
        }
        else {
          uVar17 = 0;
          do {
            if (*(float *)(param_1 + uVar17 * 8 + 10) < *(float *)(param_1 + uVar17 * 8 + 6)) {
              uVar7 = uVar17 * 2 + 1;
            }
            else {
              uVar7 = uVar17 * 2 + 2;
            }
            param_1[uVar17 * 4] = param_1[uVar7 * 4];
            *(undefined4 *)(param_1 + uVar17 * 4 + 2) = *(undefined4 *)(param_1 + uVar7 * 4 + 2);
            uVar17 = uVar7;
          } while ((longlong)uVar7 < (longlong)uVar8);
        }
        if (((uVar11 & 8) == 0) && (uVar7 == uVar8)) {
          param_1[uVar8 * 4] = param_1[lVar18 * 4 + -4];
          *(undefined4 *)(param_1 + uVar8 * 4 + 2) = *(undefined4 *)(param_1 + lVar18 * 4 + -2);
          uVar7 = lVar18 - 1U;
        }
        if (0 < (longlong)uVar7) {
          do {
            uVar8 = uVar7 - 1;
            uVar17 = uVar8 >> 1;
            fVar21 = *(float *)(param_1 + uVar17 * 4 + 2);
            if (fVar22 <= fVar21) goto LAB_140059887;
            param_1[uVar7 * 4] = param_1[uVar17 * 4];
            *(float *)(param_1 + uVar7 * 4 + 2) = fVar21;
            uVar7 = uVar17;
          } while (1 < uVar8);
          uVar7 = 0;
        }
LAB_140059887:
        param_1[uVar7 * 4] = (short)uVar3;
        *(float *)(param_1 + uVar7 * 4 + 2) = fVar22;
      } while( true );
    }
    puVar13 = param_2 + -4;
    puVar15 = param_1 + uVar8 * 4;
    lVar18 = (longlong)puVar13 - (longlong)param_1 >> 3;
    if (lVar18 < 0x29) {
      fVar22 = *(float *)(puVar15 + 2);
      fVar23 = *(float *)(param_1 + 2);
      fVar21 = fVar22;
      if (fVar22 < fVar23) {
        uVar4 = *puVar15;
        *puVar15 = *param_1;
        *param_1 = uVar4;
        *(float *)(puVar15 + 2) = fVar23;
        *(float *)(param_1 + 2) = fVar22;
        fVar21 = *(float *)(puVar15 + 2);
        fVar23 = fVar22;
      }
      fVar22 = *(float *)(param_2 + -2);
      if (fVar22 < fVar21) {
        if (puVar13 != puVar15) {
          uVar4 = param_2[-4];
          param_2[-4] = *puVar15;
          *puVar15 = uVar4;
          *(float *)(param_2 + -2) = fVar21;
          *(float *)(puVar15 + 2) = fVar22;
          fVar23 = *(float *)(param_1 + 2);
          fVar21 = fVar22;
        }
        if (fVar21 < fVar23) {
          uVar4 = *puVar15;
          *puVar15 = *param_1;
          *param_1 = uVar4;
          *(float *)(puVar15 + 2) = fVar23;
          *(float *)(param_1 + 2) = fVar21;
        }
      }
    }
    else {
      uVar11 = lVar18 + 1;
      fVar22 = *(float *)(param_1 + 2);
      fVar21 = *(float *)((longlong)param_1 + (uVar11 & 0xfffffffffffffff8) + 4);
      uVar11 = uVar11 >> 3;
      if (fVar21 < fVar22) {
        uVar4 = param_1[uVar11 * 4];
        param_1[uVar11 * 4] = *param_1;
        *param_1 = uVar4;
        *(float *)(param_1 + uVar11 * 4 + 2) = fVar22;
        *(float *)(param_1 + 2) = fVar21;
        fVar21 = *(float *)(param_1 + uVar11 * 4 + 2);
      }
      fVar22 = *(float *)(param_1 + uVar11 * 8 + 2);
      if (fVar22 < fVar21) {
        uVar4 = param_1[uVar11 * 8];
        param_1[uVar11 * 8] = param_1[uVar11 * 4];
        param_1[uVar11 * 4] = uVar4;
        *(float *)(param_1 + uVar11 * 8 + 2) = fVar21;
        *(float *)(param_1 + uVar11 * 4 + 2) = fVar22;
        fVar21 = *(float *)(param_1 + 2);
        if (fVar22 < fVar21) {
          param_1[uVar11 * 4] = *param_1;
          *param_1 = uVar4;
          *(float *)(param_1 + uVar11 * 4 + 2) = fVar21;
          *(float *)(param_1 + 2) = fVar22;
        }
      }
      fVar22 = *(float *)(puVar15 + 2);
      fVar21 = *(float *)(puVar15 + uVar11 * -4 + 2);
      if (fVar22 < fVar21) {
        uVar4 = *puVar15;
        *puVar15 = puVar15[uVar11 * -4];
        puVar15[uVar11 * -4] = uVar4;
        *(float *)(puVar15 + 2) = fVar21;
        *(float *)(puVar15 + uVar11 * -4 + 2) = fVar22;
        fVar22 = *(float *)(puVar15 + 2);
      }
      fVar21 = *(float *)(puVar15 + uVar11 * 4 + 2);
      if (fVar21 < fVar22) {
        uVar4 = puVar15[uVar11 * 4];
        puVar15[uVar11 * 4] = *puVar15;
        *puVar15 = uVar4;
        *(float *)(puVar15 + uVar11 * 4 + 2) = fVar22;
        *(float *)(puVar15 + 2) = fVar21;
        fVar22 = *(float *)(puVar15 + uVar11 * -4 + 2);
        if (fVar21 < fVar22) {
          *puVar15 = puVar15[uVar11 * -4];
          puVar15[uVar11 * -4] = uVar4;
          *(float *)(puVar15 + 2) = fVar22;
          *(float *)(puVar15 + uVar11 * -4 + 2) = fVar21;
        }
      }
      puVar12 = puVar13 + uVar11 * -4;
      fVar22 = *(float *)(puVar12 + 2);
      fVar21 = *(float *)(param_2 + uVar11 * -8 + -2);
      if (fVar22 < fVar21) {
        uVar4 = *puVar12;
        *puVar12 = puVar13[uVar11 * -8];
        puVar13[uVar11 * -8] = uVar4;
        *(float *)(puVar12 + 2) = fVar21;
        *(float *)(param_2 + uVar11 * -8 + -2) = fVar22;
        fVar22 = *(float *)(puVar12 + 2);
      }
      fVar21 = *(float *)(param_2 + -2);
      if (fVar21 < fVar22) {
        uVar4 = param_2[-4];
        param_2[-4] = *puVar12;
        *puVar12 = uVar4;
        *(float *)(param_2 + -2) = fVar22;
        *(float *)(puVar12 + 2) = fVar21;
        fVar22 = *(float *)(param_2 + uVar11 * -8 + -2);
        if (fVar21 < fVar22) {
          *puVar12 = puVar13[uVar11 * -8];
          puVar13[uVar11 * -8] = uVar4;
          *(float *)(puVar12 + 2) = fVar22;
          *(float *)(param_2 + uVar11 * -8 + -2) = fVar21;
        }
      }
      fVar22 = *(float *)(param_1 + uVar8 * 4 + 2);
      fVar23 = *(float *)(param_1 + uVar11 * 4 + 2);
      fVar21 = fVar22;
      if ((uVar11 != uVar8) && (fVar22 < fVar23)) {
        uVar4 = *puVar15;
        *puVar15 = param_1[uVar11 * 4];
        param_1[uVar11 * 4] = uVar4;
        *(float *)(puVar15 + 2) = fVar23;
        *(float *)(param_1 + uVar11 * 4 + 2) = fVar22;
        fVar21 = *(float *)(puVar15 + 2);
        fVar23 = fVar22;
      }
      fVar22 = *(float *)(puVar12 + 2);
      if (fVar22 < fVar21) {
        if (puVar12 != puVar15) {
          uVar4 = *puVar12;
          *puVar12 = *puVar15;
          *puVar15 = uVar4;
          *(float *)(puVar12 + 2) = fVar21;
          *(float *)(puVar15 + 2) = fVar22;
          fVar23 = *(float *)(param_1 + uVar11 * 4 + 2);
          fVar21 = fVar22;
        }
        if ((uVar11 != uVar8) && (fVar21 < fVar23)) {
          uVar4 = *puVar15;
          *puVar15 = param_1[uVar11 * 4];
          param_1[uVar11 * 4] = uVar4;
          *(float *)(puVar15 + 2) = fVar23;
          *(float *)(param_1 + uVar11 * 4 + 2) = fVar21;
        }
      }
    }
    do {
      puVar13 = puVar15;
      if (puVar13 <= param_1) break;
      puVar15 = puVar13 + -4;
    } while (*(float *)(puVar13 + -2) == *(float *)(puVar13 + 2));
    puVar15 = param_1 + uVar8 * 4 + 4;
    do {
      puVar9 = puVar15;
      puVar6 = puVar9;
      puVar12 = puVar13;
      if (param_2 <= puVar9) break;
      puVar15 = puVar9 + 4;
    } while (*(float *)(puVar9 + 2) == *(float *)(puVar13 + 2));
LAB_1400593b7:
    puVar19 = puVar6;
    puVar15 = puVar13;
    if (puVar9 < param_2) {
      fVar22 = *(float *)(puVar9 + 2);
      if (fVar22 <= *(float *)(puVar13 + 2)) {
        if (fVar22 < *(float *)(puVar13 + 2)) goto joined_r0x000140059406;
        if (puVar9 != puVar19) {
          uVar4 = *puVar19;
          *puVar19 = *puVar9;
          *puVar9 = uVar4;
          uVar3 = *(undefined4 *)(puVar19 + 2);
          *(float *)(puVar19 + 2) = fVar22;
          *(undefined4 *)(puVar9 + 2) = uVar3;
        }
        puVar19 = puVar19 + 4;
      }
      puVar9 = puVar9 + 4;
      puVar6 = puVar19;
      goto LAB_1400593b7;
    }
joined_r0x000140059406:
    for (; param_1 < puVar12; puVar12 = puVar12 + -4) {
      fVar22 = *(float *)(puVar12 + -2);
      puVar13 = puVar15;
      if (*(float *)(puVar15 + 2) <= fVar22) {
        if (*(float *)(puVar15 + 2) < fVar22) break;
        puVar13 = puVar15 + -4;
        if (puVar12 != puVar15) {
          uVar4 = puVar15[-4];
          puVar15[-4] = puVar12[-4];
          puVar12[-4] = uVar4;
          uVar3 = *(undefined4 *)(puVar15 + -2);
          *(float *)(puVar15 + -2) = fVar22;
          *(undefined4 *)(puVar12 + -2) = uVar3;
        }
      }
      puVar15 = puVar13;
    }
    if ((puVar9 != param_2) || (puVar12 != param_1)) {
      if (puVar12 == param_1) {
        if ((puVar19 != puVar9) && (puVar15 != puVar19)) {
          uVar4 = *puVar15;
          *puVar15 = *puVar19;
          *puVar19 = uVar4;
          uVar3 = *(undefined4 *)(puVar15 + 2);
          *(undefined4 *)(puVar15 + 2) = *(undefined4 *)(puVar19 + 2);
          *(undefined4 *)(puVar19 + 2) = uVar3;
        }
        if (puVar15 != puVar9) {
          uVar4 = *puVar15;
          *puVar15 = *puVar9;
          *puVar9 = uVar4;
          uVar3 = *(undefined4 *)(puVar15 + 2);
          *(undefined4 *)(puVar15 + 2) = *(undefined4 *)(puVar9 + 2);
          *(undefined4 *)(puVar9 + 2) = uVar3;
        }
        puVar13 = puVar15 + 4;
        puVar9 = puVar9 + 4;
        puVar6 = puVar19 + 4;
      }
      else {
        puVar1 = puVar12 + -4;
        if (puVar9 == param_2) {
          if (puVar12 != puVar15) {
            uVar4 = puVar12[-4];
            puVar12[-4] = puVar15[-4];
            puVar15[-4] = uVar4;
            uVar3 = *(undefined4 *)(puVar12 + -2);
            *(undefined4 *)(puVar12 + -2) = *(undefined4 *)(puVar15 + -2);
            *(undefined4 *)(puVar15 + -2) = uVar3;
          }
          puVar13 = puVar15 + -4;
          puVar6 = puVar19 + -4;
          puVar12 = puVar1;
          if (puVar15 != puVar19) {
            uVar4 = puVar15[-4];
            puVar15[-4] = puVar19[-4];
            puVar19[-4] = uVar4;
            uVar3 = *(undefined4 *)(puVar15 + -2);
            *(undefined4 *)(puVar15 + -2) = *(undefined4 *)(puVar19 + -2);
            *(undefined4 *)(puVar19 + -2) = uVar3;
          }
        }
        else {
          if (puVar9 != puVar1) {
            uVar4 = *puVar9;
            *puVar9 = puVar12[-4];
            puVar12[-4] = uVar4;
            uVar3 = *(undefined4 *)(puVar9 + 2);
            *(undefined4 *)(puVar9 + 2) = *(undefined4 *)(puVar12 + -2);
            *(undefined4 *)(puVar12 + -2) = uVar3;
          }
          puVar9 = puVar9 + 4;
          puVar6 = puVar19;
          puVar13 = puVar15;
          puVar12 = puVar1;
        }
      }
      goto LAB_1400593b7;
    }
    param_3 = (param_3 >> 2) + (param_3 >> 1);
    if ((longlong)puVar15 - (longlong)param_1 < (longlong)param_2 - (longlong)puVar19) {
      FUN_140059020(param_1,puVar15,param_3);
      puVar15 = param_2;
      param_1 = puVar19;
    }
    else {
      FUN_140059020(puVar19,param_2,param_3);
    }
    uVar11 = (longlong)puVar15 - (longlong)param_1;
    param_2 = puVar15;
  } while( true );
}

