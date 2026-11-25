// Recovered from game_scarlett_master.exe (GTA VI, Xbox Series X, PE32+ x64)
// Address: 140078c40  size: 704 bytes
// Name:    FUN_140078c40
// Subsystem: core
//
// Referenced strings (0 in this body, 0 including direct callees):
// Callees: 
//
// Generated decompilation. Formatting follows MiscRef/GTAVSRC conventions;
// identifiers are recovered, not original. See ../../../README.md.

#include "gta6decomp/rage_types.h"


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_140078c40(longlong param_1,uint param_2,float param_3,ushort *param_4,ushort *param_5)

{
  float fVar1;
  longlong lVar2;
  bool bVar3;
  float fVar4;
  ushort uVar5;
  ushort uVar6;
  int iVar7;
  uint uVar8;
  ushort uVar9;
  uint uVar10;
  int iVar11;
  short sVar12;
  ushort uVar13;
  ushort uVar14;
  float *pfVar15;
  ushort uVar16;
  int iVar17;
  int iVar18;
  int iVar19;
  longlong lVar20;
  ulonglong uVar21;
  
  uVar6 = *(ushort *)(param_1 + 0x104);
  uVar13 = *(ushort *)(param_1 + 0x102);
  iVar19 = *(int *)(*(longlong *)(param_1 + 0xd0) + 4);
  uVar14 = (ushort)(int)((float)uVar6 / (param_3 + _DAT_145fc6ed8));
  if (uVar14 < uVar6) {
    uVar6 = uVar14;
  }
  lVar2 = *(longlong *)(*(longlong *)(param_1 + 0xd0) + 8);
  if (uVar14 < uVar13) {
    uVar6 = uVar13;
  }
  fVar1 = *(float *)(lVar2 + 4 + (ulonglong)param_2 * 0x14);
  if (*(float *)(lVar2 + 4 + (ulonglong)(iVar19 - 1) * 0x14) <= *(float *)(lVar2 + 4)) {
    sVar12 = *(short *)(param_1 + 0xda);
    uVar10 = param_2 - 1;
    uVar14 = 0;
    if (((0 < (int)uVar10) && (uVar14 = 0, uVar6 != 0)) &&
       (uVar8 = (uint)sVar12, (int)uVar8 <= (int)uVar10)) {
      uVar21 = 1;
      if (1 < (int)uVar8) {
        uVar21 = (ulonglong)uVar8;
      }
      lVar20 = (ulonglong)uVar10 + 1;
      pfVar15 = (float *)(lVar2 + 4 + (ulonglong)uVar10 * 0x14);
      uVar14 = 0;
      do {
        if (fVar1 + *(float *)(param_1 + 0xec) <= *pfVar15) break;
        uVar14 = uVar14 + 1;
        lVar20 = lVar20 + -1;
        pfVar15 = pfVar15 + -5;
      } while ((longlong)uVar21 < lVar20);
    }
    iVar11 = param_2 + 1;
    iVar17 = 0;
    if ((iVar11 < iVar19) && (uVar14 < uVar6)) {
      fVar1 = fVar1 - *(float *)(param_1 + 0xec);
      iVar7 = ~param_2 + iVar19;
      if (*(short *)(param_1 + 0xd8) == -1) {
        iVar19 = 0;
        do {
          iVar17 = iVar19;
          if (*(float *)(lVar2 + 4 + (ulonglong)(uint)(iVar11 + iVar19) * 0x14) <= fVar1) break;
          iVar19 = iVar19 + 1;
          iVar17 = iVar7;
        } while (iVar7 != iVar19);
      }
      else {
        iVar18 = 0;
        do {
          iVar17 = iVar18;
          if (((int)*(short *)(param_1 + 0xd8) < iVar11 + iVar18) ||
             (*(float *)(lVar2 + 4 + (ulonglong)(uint)(iVar11 + iVar18) * 0x14) <= fVar1)) break;
          iVar18 = iVar18 + 1;
          iVar17 = iVar7;
        } while ((iVar11 - iVar19) + iVar18 != 0);
      }
    }
  }
  else {
    uVar10 = param_2 + 1;
    iVar17 = 0;
    if (((int)uVar10 < iVar19) && (iVar17 = 0, uVar6 != 0)) {
      fVar4 = fVar1 + *(float *)(param_1 + 0xec);
      if (*(short *)(param_1 + 0xd8) == -1) {
        iVar11 = param_2 + 2;
        iVar17 = 0;
        do {
          if ((fVar4 <= *(float *)(lVar2 + 4 + (ulonglong)(iVar11 - 1) * 0x14)) ||
             (iVar17 = iVar17 + 1, iVar19 <= iVar11)) break;
          iVar11 = iVar11 + 1;
        } while ((ushort)iVar17 < uVar6);
      }
      else {
        iVar17 = 0;
        while (((int)uVar10 <= (int)*(short *)(param_1 + 0xd8) &&
               (*(float *)(lVar2 + 4 + (ulonglong)uVar10 * 0x14) < fVar4))) {
          iVar17 = iVar17 + 1;
          uVar10 = uVar10 + 1;
          if ((iVar19 <= (int)uVar10) || (uVar6 <= (ushort)iVar17)) break;
        }
      }
    }
    sVar12 = *(short *)(param_1 + 0xda);
    param_2 = param_2 - 1;
    uVar14 = 0;
    if (((0 < (int)param_2) && (uVar6 != 0)) && ((int)sVar12 <= (int)param_2)) {
      pfVar15 = (float *)(lVar2 + 4 + (ulonglong)param_2 * 0x14);
      uVar14 = 0;
      uVar21 = (ulonglong)param_2;
      do {
        if (((*pfVar15 <= fVar1 - *(float *)(param_1 + 0xec)) ||
            (uVar14 = uVar14 + 1, (longlong)uVar21 < 2)) || (uVar6 <= uVar14)) break;
        pfVar15 = pfVar15 + -5;
        bVar3 = (longlong)sVar12 < (longlong)uVar21;
        uVar21 = uVar21 - 1;
      } while (bVar3);
    }
  }
  uVar16 = (ushort)iVar17;
  uVar9 = uVar14;
  if ((sVar12 < 0) || (*(short *)(param_1 + 0xd8) < 0)) {
    uVar5 = uVar6;
    if (uVar16 < uVar6) {
      uVar5 = uVar16;
    }
    if (uVar13 <= uVar16) {
      uVar13 = uVar5;
    }
    *param_5 = uVar13;
    if (uVar6 <= uVar14) {
      uVar9 = uVar6;
    }
    if (uVar14 < *(ushort *)(param_1 + 0x102)) {
      uVar9 = *(ushort *)(param_1 + 0x102);
    }
  }
  else {
    *param_5 = uVar16;
  }
  *param_4 = uVar9;
  return;
}

