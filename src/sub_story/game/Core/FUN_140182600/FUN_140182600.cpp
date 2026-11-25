// Recovered from game_scarlett_master.exe (GTA VI, Xbox Series X, PE32+ x64)
// Address: 140182600  size: 613 bytes
// Name:    FUN_140182600
// Subsystem: core
//
// Referenced strings (0 in this body, 0 including direct callees):
// Callees: FUN_14503e0d0, FUN_140182870
//
// Generated decompilation. Formatting follows MiscRef/GTAVSRC conventions;
// identifiers are recovered, not original. See ../../../README.md.

#include "gta6decomp/rage_types.h"


/* WARNING: Possible PIC construction at 0x0001401826e2: Changing call to branch */
/* WARNING: Possible PIC construction at 0x00014018280a: Changing call to branch */
/* WARNING: Removing unreachable block (ram,0x00014018280f) */

void FUN_140182600(longlong *param_1,undefined8 param_2,ulonglong param_3)

{
  uint uVar1;
  ulonglong uVar2;
  bool bVar3;
  char cVar4;
  longlong lVar5;
  longlong *plVar6;
  longlong *plVar7;
  longlong lVar8;
  ushort uVar9;
  ulonglong *puVar10;
  longlong *plVar11;
  ulonglong uVar12;
  ulonglong uVar13;
  ushort uVar14;
  uint uVar15;
  
  if ((param_3 & 0x20) != 0) {
    lVar5 = param_1[6];
    lVar8 = FUN_14503e0d0(param_1[5]);
    if (lVar5 == 0) {
      uVar9 = 4;
LAB_140182842:
      uVar14 = *(ushort *)(lVar8 + 10) & 0xc;
      if ((*(ushort *)(lVar8 + 10) & 0xc) == 0) {
        uVar14 = uVar9;
      }
    }
    else {
      uVar14 = 0xc;
      uVar9 = *(ushort *)(lVar5 + 0x4a) & 0xc;
      if (uVar9 != 0xc) goto LAB_140182842;
    }
    (**(code **)(*param_1 + 0x38))(param_1,param_2,uVar14);
    param_3 = param_3 & 0xffffffff;
  }
  if ((param_3 & 0x300) == 0) {
    return;
  }
  lVar5 = FUN_14503e0d0(param_1[5]);
  uVar12 = *(ulonglong *)(lVar5 + 0x90);
  if (uVar12 == 0) {
    plVar11 = (longlong *)param_1[0xf];
LAB_140182770:
    bVar3 = false;
  }
  else {
    plVar11 = (longlong *)param_1[0xf];
    if ((uVar12 & 1) == 0) {
      uVar12 = 2 - (ulonglong)(*(longlong *)(lVar5 + 0x98) == 0);
    }
    else {
      uVar12 = *(ulonglong *)((uVar12 & 0xfffffffffffffffe) + 8);
      if (uVar12 == 0) goto LAB_140182770;
    }
    uVar13 = 0;
    bVar3 = false;
    do {
      uVar2 = *(ulonglong *)(lVar5 + 0x90);
      puVar10 = (ulonglong *)((uVar2 & 0xfffffffffffffffe) + 0x10);
      if ((uVar2 & 1) == 0) {
        puVar10 = (ulonglong *)(lVar5 + 0x90);
      }
      uVar2 = puVar10[uVar13];
      plVar6 = *(longlong **)(uVar2 + 0x28);
      if (plVar6 == plVar11) {
        plVar11 = (longlong *)plVar11[3];
      }
      else {
        if (plVar6 != (longlong *)0x0) {
          plVar7 = (longlong *)plVar6[6];
          if ((plVar7 == param_1) && (plVar6[2] != 0)) {
            do {
              plVar7 = (longlong *)plVar11[3];
              FUN_140182870(plVar11,param_2);
              plVar11 = plVar7;
            } while (param_1 + 0xc != plVar7 && plVar7 != plVar6);
            uVar13 = (ulonglong)((int)uVar13 - 1);
            bVar3 = true;
            goto LAB_140182705;
          }
          if (plVar7 != (longlong *)0x0) {
            FUN_140182870(plVar6,param_2);
            lVar8 = plVar7[4];
            if (lVar8 != 0) {
              uVar15 = 0x1000000;
              goto code_r0x00014503d720;
            }
          }
        }
        plVar6 = (longlong *)FUN_14503e0d0(uVar2);
        plVar7 = (longlong *)
                 (**(code **)(*plVar6 + 0x28))
                           (plVar6,param_2,param_1,plVar11[2],uVar2,(short)(int)param_1[9] + 1);
        if ((plVar7 != (longlong *)0x0) && (lVar8 = plVar7[4], lVar8 != 0)) {
          uVar15 = 3;
          goto code_r0x00014503d720;
        }
        bVar3 = true;
        if ((param_1 + 0xc != plVar11) && ((longlong *)plVar11[6] != param_1)) {
          uVar13 = 0xffffffff;
          plVar11 = (longlong *)param_1[0xf];
        }
      }
LAB_140182705:
      uVar13 = (ulonglong)((int)uVar13 + 1);
    } while (uVar13 < uVar12);
  }
  if (param_1 + 0xc == plVar11) {
    if (!bVar3) {
      return;
    }
  }
  else {
    do {
      plVar6 = (longlong *)plVar11[3];
      FUN_140182870(plVar11,param_2);
      plVar11 = plVar6;
    } while (param_1 + 0xc != plVar6);
  }
  cVar4 = (**(code **)(*param_1 + 0x58))(param_1);
  if (cVar4 == '\0') {
    return;
  }
  lVar8 = param_1[4];
  uVar15 = 0x1000000;
  plVar7 = param_1;
code_r0x00014503d720:
  uVar1 = *(uint *)((longlong)plVar7 + 0x4c);
  if (-1 < (int)uVar1) {
    uVar15 = uVar15 | 0x80000000;
    plVar7[10] = *(longlong *)(lVar8 + 0xb0);
    *(longlong **)(lVar8 + 0xb0) = plVar7;
  }
  *(uint *)((longlong)plVar7 + 0x4c) = uVar15 | uVar1;
  return;
}

