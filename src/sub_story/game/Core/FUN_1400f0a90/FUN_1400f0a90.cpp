// Recovered from game_scarlett_master.exe (GTA VI, Xbox Series X, PE32+ x64)
// Address: 1400f0a90  size: 255 bytes
// Name:    FUN_1400f0a90
// Subsystem: core
//
// Referenced strings (0 in this body, 0 including direct callees):
// Callees: 
//
// Generated decompilation. Formatting follows MiscRef/GTAVSRC conventions;
// identifiers are recovered, not original. See ../../../README.md.

#include "gta6decomp/rage_types.h"


void FUN_1400f0a90(longlong *param_1,uint param_2)

{
  double dVar1;
  double dVar2;
  int iVar3;
  int iVar4;
  longlong lVar5;
  longlong lVar6;
  longlong lVar7;
  longlong lVar8;
  longlong lVar9;
  uint uVar10;
  longlong lVar11;
  uint uVar12;
  longlong lVar13;
  
  lVar5 = *param_1;
  lVar6 = param_1[1];
  lVar9 = param_1[2];
  iVar3 = *(int *)(lVar5 + (longlong)(int)param_2 * 4);
  lVar13 = (longlong)iVar3 * 0x10;
  do {
    uVar12 = param_2 * 2;
    if ((int)uVar12 < (int)lVar9) {
      uVar10 = uVar12 | 1;
      lVar7 = *(longlong *)(lVar6 + (longlong)*(int *)(lVar5 + (longlong)(int)uVar10 * 4) * 0x10);
      lVar11 = (longlong)(int)uVar12;
      dVar1 = *(double *)(lVar7 + 0x30);
      lVar8 = *(longlong *)(lVar6 + (longlong)*(int *)(lVar5 + lVar11 * 4) * 0x10);
      dVar2 = *(double *)(lVar8 + 0x30);
      if (dVar2 <= dVar1) {
        if (((dVar1 != dVar2) || (NAN(dVar1) || NAN(dVar2))) ||
           (*(double *)(lVar8 + 0x38) < *(double *)(lVar7 + 0x38))) goto LAB_1400f0abf;
      }
      lVar11 = (longlong)(int)uVar10;
      uVar12 = uVar10;
    }
    else {
      lVar11 = (longlong)(int)uVar12;
    }
LAB_1400f0abf:
    if ((int)lVar9 < (int)uVar12) {
LAB_1400f0ae6:
      *(int *)(lVar5 + (longlong)(int)param_2 * 4) = iVar3;
      *(uint *)(lVar6 + 8 + lVar13) = param_2;
      return;
    }
    iVar4 = *(int *)(lVar5 + lVar11 * 4);
    lVar7 = *(longlong *)(lVar6 + lVar13);
    dVar1 = *(double *)(lVar7 + 0x30);
    lVar11 = (longlong)iVar4 * 0x10;
    lVar8 = *(longlong *)(lVar6 + lVar11);
    dVar2 = *(double *)(lVar8 + 0x30);
    if (dVar1 < dVar2) goto LAB_1400f0ae6;
    if (((dVar1 == dVar2) && (!NAN(dVar1) && !NAN(dVar2))) &&
       (*(double *)(lVar7 + 0x38) <= *(double *)(lVar8 + 0x38))) goto LAB_1400f0ae6;
    *(int *)(lVar5 + (longlong)(int)param_2 * 4) = iVar4;
    *(uint *)(lVar11 + lVar6 + 8) = param_2;
    param_2 = uVar12;
  } while( true );
}

