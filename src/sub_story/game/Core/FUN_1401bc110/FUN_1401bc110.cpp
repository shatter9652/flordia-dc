// Recovered from game_scarlett_master.exe (GTA VI, Xbox Series X, PE32+ x64)
// Address: 1401bc110  size: 1574 bytes
// Name:    FUN_1401bc110
// Subsystem: core
//
// Referenced strings (0 in this body, 0 including direct callees):
// Callees: FUN_1401bc110, FUN_1425947e0, FUN_1425946a0
//
// Generated decompilation. Formatting follows MiscRef/GTAVSRC conventions;
// identifiers are recovered, not original. See ../../../README.md.

#include "gta6decomp/rage_types.h"


void FUN_1401bc110(longlong *param_1,longlong *param_2,ulonglong param_3)

{
  longlong *plVar1;
  byte bVar2;
  longlong lVar3;
  longlong lVar4;
  byte bVar5;
  longlong *plVar6;
  longlong *plVar7;
  longlong lVar8;
  ulonglong uVar9;
  longlong *plVar10;
  longlong *plVar11;
  ulonglong uVar12;
  longlong *plVar13;
  ulonglong uVar14;
  bool bVar15;
  bool bVar16;
  float fVar17;
  longlong lStack_70;
  longlong *plStack_68;
  ulonglong uStack_60;
  
  uVar14 = (longlong)param_2 - (longlong)param_1;
  uVar12 = param_3;
  uVar9 = uStack_60;
joined_r0x0001401bc139:
  uStack_60 = uVar12;
  if ((longlong)uVar14 < 0x101) {
    plVar10 = param_1;
    uStack_60 = uVar9;
    if (param_1 != param_2) {
      while (plVar7 = plVar10 + 1, plVar7 != param_2) {
        lVar8 = *param_1;
        lVar3 = plVar10[1];
        bVar5 = *(byte *)(lVar8 + 0xb) & 0x1f;
        bVar2 = *(byte *)(lVar3 + 0xb) & 0x1f;
        bVar15 = bVar2 < bVar5;
        bVar16 = false;
        if (bVar2 == bVar5) {
          lVar4 = func_0x00014507b460(lVar3);
          fVar17 = *(float *)(lVar4 + 0x90);
          lVar8 = func_0x00014507b460(lVar8);
          bVar16 = *(float *)(lVar8 + 0x90) == fVar17;
          bVar15 = *(float *)(lVar8 + 0x90) < fVar17;
        }
        plVar6 = plVar7;
        if (bVar15 || bVar16) {
          do {
            lVar8 = plVar6[-1];
            bVar2 = *(byte *)(lVar3 + 0xb) & 0x1f;
            bVar5 = *(byte *)(lVar8 + 0xb) & 0x1f;
            if (bVar2 == bVar5) {
              lVar4 = func_0x00014507b460(lVar3);
              fVar17 = *(float *)(lVar4 + 0x90);
              lVar8 = func_0x00014507b460(lVar8);
              if (*(float *)(lVar8 + 0x90) <= fVar17) goto LAB_1401bc633;
              lVar8 = plVar6[-1];
            }
            else if (bVar2 <= bVar5) goto LAB_1401bc633;
            *plVar6 = lVar8;
            plVar6 = plVar6 + -1;
          } while( true );
        }
        func_0x00014503ae80(param_1,plVar7,plVar10 + 2);
        plVar6 = param_1;
LAB_1401bc633:
        *plVar6 = lVar3;
        plVar10 = plVar7;
      }
    }
  }
  else {
    if (0 < (longlong)uStack_60) {
      plVar7 = param_1 + (uVar14 >> 4);
      plVar10 = param_2 + -1;
      lVar8 = (longlong)plVar10 - (longlong)param_1 >> 3;
      plVar6 = param_1;
      plStack_68 = param_2;
      if (0x28 < lVar8) {
        uVar14 = lVar8 + 1;
        uVar9 = uVar14 & 0xfffffffffffffff8;
        uVar14 = uVar14 >> 3;
        FUN_1425947e0(param_1,(longlong *)((longlong)param_1 + uVar9),param_1 + uVar14 * 2);
        FUN_1425947e0((longlong)plVar7 - uVar9,plVar7,(longlong)plVar7 + uVar9);
        FUN_1425947e0(plVar10 + uVar14 * -2,(longlong *)((longlong)plVar10 - uVar9),plVar10);
        plVar6 = (longlong *)((longlong)param_1 + uVar9);
        plVar10 = (longlong *)((longlong)plVar10 - uVar9);
      }
      FUN_1425947e0(plVar6,plVar7,plVar10);
      plVar10 = plVar7;
      do {
        lVar8 = plVar10[-1];
        lVar3 = *plVar10;
        bVar2 = *(byte *)(lVar8 + 0xb) & 0x1f;
        bVar5 = *(byte *)(lVar3 + 0xb) & 0x1f;
        if (bVar2 == bVar5) {
          lVar8 = func_0x00014507b460(lVar8);
          fVar17 = *(float *)(lVar8 + 0x90);
          lVar8 = func_0x00014507b460(lVar3);
          if (fVar17 < *(float *)(lVar8 + 0x90)) goto LAB_1401bc291;
          lVar8 = plVar10[-1];
          lVar3 = *plVar10;
          bVar5 = *(byte *)(lVar3 + 0xb) & 0x1f;
          bVar2 = *(byte *)(lVar8 + 0xb) & 0x1f;
        }
        else if (bVar5 < bVar2) goto LAB_1401bc291;
        bVar15 = bVar5 < bVar2;
        bVar16 = false;
        if (bVar5 == bVar2) {
          lVar3 = func_0x00014507b460(lVar3);
          fVar17 = *(float *)(lVar3 + 0x90);
          lVar8 = func_0x00014507b460(lVar8);
          bVar16 = *(float *)(lVar8 + 0x90) == fVar17;
          bVar15 = *(float *)(lVar8 + 0x90) < fVar17;
        }
        if ((!bVar15 && !bVar16) || (plVar10 = plVar10 + -1, plVar10 <= param_1))
        goto LAB_1401bc291;
      } while( true );
    }
    uVar12 = uVar14 >> 4;
    uStack_60 = uVar9;
    do {
      uVar9 = uVar12 - 1;
      lStack_70 = param_1[uVar9];
      FUN_1425946a0(param_1,uVar9,uVar14 >> 3,&lStack_70);
      bVar16 = 1 < uVar12;
      uVar12 = uVar9;
    } while (bVar16);
    lVar8 = (longlong)param_2 - (longlong)param_1;
    if (8 < lVar8) {
      do {
        param_2 = param_2 + -1;
        lStack_70 = *param_2;
        lVar8 = lVar8 + -8;
        *param_2 = *param_1;
        FUN_1425946a0(param_1,0,lVar8 >> 3,&lStack_70);
      } while (8 < lVar8);
    }
  }
  return;
  while( true ) {
    lVar3 = *plVar10;
    lVar8 = *plVar7;
    bVar2 = *(byte *)(lVar8 + 0xb) & 0x1f;
    bVar5 = *(byte *)(lVar3 + 0xb) & 0x1f;
    if (bVar2 == bVar5) {
      lVar8 = func_0x00014507b460(lVar8);
      fVar17 = *(float *)(lVar8 + 0x90);
      lVar8 = func_0x00014507b460(lVar3);
      if (fVar17 < *(float *)(lVar8 + 0x90)) break;
      lVar8 = *plVar7;
      lVar3 = *plVar10;
      bVar5 = *(byte *)(lVar3 + 0xb) & 0x1f;
      bVar2 = *(byte *)(lVar8 + 0xb) & 0x1f;
    }
    else if (bVar5 < bVar2) break;
    bVar15 = bVar5 < bVar2;
    bVar16 = false;
    if (bVar5 == bVar2) {
      lVar3 = func_0x00014507b460(lVar3);
      fVar17 = *(float *)(lVar3 + 0x90);
      lVar8 = func_0x00014507b460(lVar8);
      bVar16 = *(float *)(lVar8 + 0x90) == fVar17;
      bVar15 = *(float *)(lVar8 + 0x90) < fVar17;
    }
    if (!bVar15 && !bVar16) break;
LAB_1401bc291:
    plVar7 = plVar7 + 1;
    plVar13 = plVar7;
    plVar6 = plVar10;
    if (param_2 <= plVar7) break;
  }
LAB_1401bc33b:
  plVar11 = plVar10;
  if (plVar13 < param_2) {
    lVar3 = *plVar13;
    lVar8 = *plVar6;
    bVar2 = *(byte *)(lVar8 + 0xb) & 0x1f;
    bVar5 = *(byte *)(lVar3 + 0xb) & 0x1f;
    if (bVar2 == bVar5) {
      lVar8 = func_0x00014507b460();
      fVar17 = *(float *)(lVar8 + 0x90);
      lVar8 = func_0x00014507b460(lVar3);
      if (*(float *)(lVar8 + 0x90) <= fVar17) {
        lVar8 = *plVar6;
        lVar3 = *plVar13;
        bVar5 = *(byte *)(lVar3 + 0xb) & 0x1f;
        bVar2 = *(byte *)(lVar8 + 0xb) & 0x1f;
LAB_1401bc39b:
        bVar15 = bVar5 < bVar2;
        bVar16 = false;
        if (bVar5 == bVar2) {
          lVar3 = func_0x00014507b460(lVar3);
          fVar17 = *(float *)(lVar3 + 0x90);
          lVar8 = func_0x00014507b460(lVar8);
          bVar16 = *(float *)(lVar8 + 0x90) == fVar17;
          bVar15 = *(float *)(lVar8 + 0x90) < fVar17;
        }
        if (!bVar15 && !bVar16) goto joined_r0x0001401bc3ee;
        if (plVar13 != plVar7) {
          lVar8 = *plVar7;
          *plVar7 = *plVar13;
          *plVar13 = lVar8;
        }
        plVar7 = plVar7 + 1;
      }
    }
    else if (bVar2 <= bVar5) goto LAB_1401bc39b;
    plVar13 = plVar13 + 1;
    goto LAB_1401bc33b;
  }
joined_r0x0001401bc3ee:
  while (plVar10 = plVar11, param_1 < plVar10) {
    lVar3 = *plVar6;
    plVar11 = plVar10 + -1;
    lVar8 = plVar10[-1];
    bVar5 = *(byte *)(lVar3 + 0xb) & 0x1f;
    bVar2 = *(byte *)(lVar8 + 0xb) & 0x1f;
    if (bVar2 != bVar5) goto LAB_1401bc451;
    lVar8 = func_0x00014507b460();
    fVar17 = *(float *)(lVar8 + 0x90);
    lVar8 = func_0x00014507b460(lVar3);
    if (*(float *)(lVar8 + 0x90) <= fVar17) {
      lVar8 = *plVar11;
      lVar3 = *plVar6;
      bVar5 = *(byte *)(lVar3 + 0xb) & 0x1f;
      bVar2 = *(byte *)(lVar8 + 0xb) & 0x1f;
      goto LAB_1401bc458;
    }
  }
LAB_1401bc4b8:
  if ((plVar13 != param_2) || (plVar10 != param_1)) {
    if (plVar10 == param_1) {
      lVar8 = *plVar6;
      if (plVar7 != plVar13) {
        *plVar6 = *plVar7;
        *plVar7 = lVar8;
        lVar8 = *plVar6;
      }
      plVar7 = plVar7 + 1;
      *plVar6 = *plVar13;
      *plVar13 = lVar8;
      plVar13 = plVar13 + 1;
      plVar6 = plVar6 + 1;
    }
    else {
      plVar11 = plVar10 + -1;
      if (plVar13 == param_2) {
        plVar1 = plVar6 + -1;
        lVar8 = plVar6[-1];
        if (plVar10 != plVar6) {
          lVar8 = *plVar11;
          *plVar11 = plVar6[-1];
          *plVar1 = lVar8;
        }
        *plVar1 = plVar7[-1];
        plVar7[-1] = lVar8;
        plVar7 = plVar7 + -1;
        plVar10 = plVar11;
        plVar6 = plVar1;
      }
      else {
        lVar8 = *plVar13;
        *plVar13 = *plVar11;
        *plVar11 = lVar8;
        plVar10 = plVar11;
        plVar13 = plVar13 + 1;
      }
    }
    goto LAB_1401bc33b;
  }
  uVar12 = (uStack_60 >> 2) + (uStack_60 >> 1);
  if ((longlong)plVar6 - (longlong)param_1 < (longlong)plStack_68 - (longlong)plVar7) {
    FUN_1401bc110(param_1,plVar6,uVar12);
    param_1 = plVar7;
    plVar6 = param_2;
  }
  else {
    FUN_1401bc110(plVar7,param_2,uVar12);
  }
  uVar14 = (longlong)plVar6 - (longlong)param_1;
  param_2 = plVar6;
  uVar9 = uStack_60;
  goto joined_r0x0001401bc139;
LAB_1401bc451:
  if (bVar2 <= bVar5) {
LAB_1401bc458:
    bVar15 = bVar5 < bVar2;
    bVar16 = false;
    if (bVar5 == bVar2) {
      lVar3 = func_0x00014507b460(lVar3);
      fVar17 = *(float *)(lVar3 + 0x90);
      lVar8 = func_0x00014507b460(lVar8);
      bVar16 = *(float *)(lVar8 + 0x90) == fVar17;
      bVar15 = *(float *)(lVar8 + 0x90) < fVar17;
    }
    if (!bVar15 && !bVar16) goto LAB_1401bc4b8;
    plVar1 = plVar6 + -1;
    bVar16 = plVar10 != plVar6;
    plVar6 = plVar1;
    if (bVar16) {
      lVar8 = *plVar1;
      *plVar1 = *plVar11;
      *plVar11 = lVar8;
    }
  }
  goto joined_r0x0001401bc3ee;
}

