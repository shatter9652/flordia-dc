// Recovered from game_scarlett_master.exe (GTA VI, Xbox Series X, PE32+ x64)
// Address: 14008bad0  size: 969 bytes
// Name:    FUN_14008bad0
// Subsystem: core
//
// Referenced strings (0 in this body, 0 including direct callees):
// Callees: FUN_143a6ea30, FUN_14008bad0
//
// Generated decompilation. Formatting follows MiscRef/GTAVSRC conventions;
// identifiers are recovered, not original. See ../../../README.md.

#include "gta6decomp/rage_types.h"


void FUN_14008bad0(float *param_1,float *param_2,ulonglong param_3)

{
  ulonglong uVar1;
  float fVar2;
  undefined8 uVar3;
  bool bVar4;
  undefined8 uVar5;
  float *pfVar6;
  ulonglong uVar7;
  float *pfVar8;
  ulonglong uVar9;
  ulonglong uVar10;
  ulonglong uVar11;
  ulonglong uVar12;
  ulonglong uVar13;
  ulonglong uVar14;
  float fVar15;
  float *pfStack_68;
  float fStack_60;
  undefined4 uStack_5c;
  
  uVar7 = (longlong)param_2 - (longlong)param_1;
  if ((longlong)uVar7 < 0x201) {
LAB_14008baf8:
    pfVar8 = param_1;
    if (param_1 != param_2) {
      while (pfVar6 = pfVar8 + 4, pfVar6 != param_2) {
        fStack_60 = pfVar8[7];
        fVar15 = pfVar8[4];
        pfStack_68 = *(float **)(pfVar8 + 5);
        if (fVar15 < *param_1) {
          func_0x000140301860(*param_1,pfVar6,pfVar8 + 8);
          pfVar8 = param_1;
        }
        else {
          fVar2 = pfVar6[-4];
          pfVar8 = pfVar6;
          while (fVar15 < fVar2) {
            *(undefined8 *)pfVar8 = *(undefined8 *)(pfVar8 + -4);
            *(undefined8 *)(pfVar8 + 2) = *(undefined8 *)(pfVar8 + -2);
            fVar2 = pfVar8[-8];
            pfVar8 = pfVar8 + -4;
          }
        }
        *pfVar8 = fVar15;
        *(float **)(pfVar8 + 1) = pfStack_68;
        pfVar8[3] = fStack_60;
        pfVar8 = pfVar6;
      }
    }
  }
  else {
    if (0 < (longlong)param_3) {
      pfVar8 = param_2;
      do {
        FUN_143a6ea30(&pfStack_68,param_1,pfVar8);
        param_2 = pfStack_68;
        pfVar6 = (float *)CONCAT44(uStack_5c,fStack_60);
        param_3 = (param_3 >> 2) + (param_3 >> 1);
        if ((longlong)pfStack_68 - (longlong)param_1 < (longlong)pfVar8 - (longlong)pfVar6) {
          FUN_14008bad0(param_1,pfStack_68,param_3);
          param_1 = pfVar6;
          param_2 = pfVar8;
        }
        else {
          FUN_14008bad0(pfVar6,pfVar8,param_3);
        }
        uVar7 = (longlong)param_2 - (longlong)param_1;
        if ((longlong)uVar7 < 0x201) goto LAB_14008baf8;
        pfVar8 = param_2;
      } while (param_3 != 0);
    }
    uVar10 = (uVar7 >> 4) - 1;
    uVar12 = uVar10 >> 1;
    uVar13 = uVar7 >> 5;
    do {
      uVar9 = uVar13 - 1;
      fVar2 = param_1[uVar9 * 4 + 3];
      fVar15 = param_1[uVar9 * 4];
      uVar3 = *(undefined8 *)(param_1 + uVar9 * 4 + 1);
      uVar11 = uVar9;
      uVar14 = uVar9;
      if ((longlong)uVar13 <= (longlong)uVar12) {
        do {
          uVar11 = uVar14 * 2 + 1;
          uVar1 = uVar14 * 2 + 2;
          if (param_1[uVar11 * 4] <= param_1[uVar1 * 4]) {
            uVar11 = uVar1;
          }
          uVar5 = *(undefined8 *)(param_1 + uVar11 * 4 + 2);
          *(undefined8 *)(param_1 + uVar14 * 4) = *(undefined8 *)(param_1 + uVar11 * 4);
          *(undefined8 *)(param_1 + uVar14 * 4 + 2) = uVar5;
          uVar14 = uVar11;
        } while ((longlong)uVar11 < (longlong)uVar12);
      }
      if (((uVar7 & 0x10) == 0) && (uVar11 == uVar12)) {
        uVar5 = *(undefined8 *)(param_1 + uVar10 * 4 + 2);
        *(undefined8 *)(param_1 + uVar12 * 4) = *(undefined8 *)(param_1 + uVar10 * 4);
        *(undefined8 *)(param_1 + uVar12 * 4 + 2) = uVar5;
        uVar11 = uVar10;
      }
      while (((longlong)uVar13 <= (longlong)uVar11 &&
             (uVar14 = (longlong)(uVar11 - 1) >> 1, param_1[uVar14 * 4] < fVar15))) {
        uVar5 = *(undefined8 *)(param_1 + uVar14 * 4 + 2);
        *(undefined8 *)(param_1 + uVar11 * 4) = *(undefined8 *)(param_1 + uVar14 * 4);
        *(undefined8 *)(param_1 + uVar11 * 4 + 2) = uVar5;
        uVar11 = uVar14;
      }
      param_1[uVar11 * 4] = fVar15;
      *(undefined8 *)(param_1 + uVar11 * 4 + 1) = uVar3;
      param_1[uVar11 * 4 + 3] = fVar2;
      bVar4 = 1 < (longlong)uVar13;
      uVar13 = uVar9;
    } while (bVar4);
    uVar7 = (longlong)param_2 - (longlong)param_1;
    while (0x10 < (longlong)uVar7) {
      fVar2 = param_2[-1];
      fVar15 = param_2[-4];
      uVar3 = *(undefined8 *)(param_2 + -3);
      uVar5 = *(undefined8 *)(param_1 + 2);
      *(undefined8 *)(param_2 + -4) = *(undefined8 *)param_1;
      *(undefined8 *)(param_2 + -2) = uVar5;
      uVar7 = (longlong)(param_2 + -4) - (longlong)param_1;
      uVar13 = ((longlong)uVar7 >> 4) - 1;
      uVar10 = (longlong)uVar13 >> 1;
      if ((longlong)uVar10 < 1) {
        uVar12 = 0;
      }
      else {
        uVar11 = 0;
        do {
          uVar12 = uVar11 * 2 + 1;
          uVar14 = uVar11 * 2 + 2;
          if (param_1[uVar12 * 4] <= param_1[uVar14 * 4]) {
            uVar12 = uVar14;
          }
          uVar5 = *(undefined8 *)(param_1 + uVar12 * 4 + 2);
          *(undefined8 *)(param_1 + uVar11 * 4) = *(undefined8 *)(param_1 + uVar12 * 4);
          *(undefined8 *)(param_1 + uVar11 * 4 + 2) = uVar5;
          uVar11 = uVar12;
        } while ((longlong)uVar12 < (longlong)uVar10);
      }
      if (((uVar7 & 0x10) == 0) && (uVar12 == uVar10)) {
        uVar5 = *(undefined8 *)(param_1 + uVar13 * 4 + 2);
        *(undefined8 *)(param_1 + uVar10 * 4) = *(undefined8 *)(param_1 + uVar13 * 4);
        *(undefined8 *)(param_1 + uVar10 * 4 + 2) = uVar5;
        uVar12 = uVar13;
      }
      if (0 < (longlong)uVar12) {
        do {
          uVar13 = uVar12 - 1;
          uVar10 = uVar13 >> 1;
          if (fVar15 <= param_1[uVar10 * 4]) goto LAB_14008be63;
          uVar5 = *(undefined8 *)(param_1 + uVar10 * 4 + 2);
          *(undefined8 *)(param_1 + uVar12 * 4) = *(undefined8 *)(param_1 + uVar10 * 4);
          *(undefined8 *)(param_1 + uVar12 * 4 + 2) = uVar5;
          uVar12 = uVar10;
        } while (1 < uVar13);
        uVar12 = 0;
      }
LAB_14008be63:
      param_1[uVar12 * 4] = fVar15;
      *(undefined8 *)(param_1 + uVar12 * 4 + 1) = uVar3;
      param_1[uVar12 * 4 + 3] = fVar2;
      param_2 = param_2 + -4;
    }
  }
  return;
}

