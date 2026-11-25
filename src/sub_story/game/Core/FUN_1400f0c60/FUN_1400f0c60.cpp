// Recovered from game_scarlett_master.exe (GTA VI, Xbox Series X, PE32+ x64)
// Address: 1400f0c60  size: 422 bytes
// Name:    FUN_1400f0c60
// Subsystem: core
//
// Referenced strings (0 in this body, 0 including direct callees):
// Callees: FUN_144f7fa50, FUN_144f7cf10, FUN_144f7d000, FUN_144e76a70, FUN_144f7d460
//
// Generated decompilation. Formatting follows MiscRef/GTAVSRC conventions;
// identifiers are recovered, not original. See ../../../README.md.

#include "gta6decomp/rage_types.h"


void FUN_1400f0c60(undefined8 *param_1,longlong *param_2,longlong param_3)

{
  int *piVar1;
  longlong lVar2;
  longlong lVar3;
  bool bVar4;
  int iVar5;
  longlong lVar6;
  longlong lVar7;
  longlong *plVar8;
  longlong lVar9;
  longlong lVar10;
  longlong *plVar11;
  longlong *plVar12;
  double dVar13;
  double dVar14;
  undefined8 in_stack_ffffffffffffff90;
  undefined4 uVar15;
  
  uVar15 = (undefined4)((ulonglong)in_stack_ffffffffffffff90 >> 0x20);
  lVar9 = *param_2;
  dVar13 = *(double *)(param_3 + 0x30);
  dVar14 = *(double *)(*(longlong *)(lVar9 + 0x20) + 0x30);
  if ((dVar14 == dVar13) && (!NAN(dVar14) && !NAN(dVar13))) {
    dVar14 = *(double *)(*(longlong *)(lVar9 + 0x20) + 0x38);
    if ((dVar14 == *(double *)(param_3 + 0x38)) &&
       (!NAN(dVar14) && !NAN(*(double *)(param_3 + 0x38)))) {
      iVar5 = FUN_144f7d460(*param_1,lVar9,*(undefined8 *)(param_3 + 0x10));
      if (iVar5 == 0) {
        *(undefined4 *)(param_1 + 1) = 1;
      }
      return;
    }
  }
  lVar6 = *(longlong *)(*(longlong *)(lVar9 + 8) + 0x20);
  dVar14 = *(double *)(lVar6 + 0x30);
  if ((((dVar14 != dVar13) || (NAN(dVar14) || NAN(dVar13))) ||
      (dVar13 = *(double *)(lVar6 + 0x38), dVar13 != *(double *)(param_3 + 0x38))) ||
     (NAN(dVar13) || NAN(*(double *)(param_3 + 0x38)))) {
    lVar6 = FUN_144e76a70(*param_1);
    if (lVar6 != 0) {
      if ((int)param_2[4] != 0) {
        iVar5 = FUN_144f7fa50(*param_1,*(undefined8 *)(lVar9 + 0x10));
        if (iVar5 == 0) goto LAB_1400f0dd8;
        *(undefined4 *)(param_2 + 4) = 0;
      }
      iVar5 = FUN_144f7d460(*param_1,*(undefined8 *)(param_3 + 0x10),lVar9);
      if (iVar5 != 0) {
        param_1[0x13] = param_3;
        lVar9 = *(longlong *)(param_3 + 0x10);
        do {
          if (*(longlong *)(lVar9 + 0x30) != 0) {
            plVar8 = (longlong *)FUN_144f7cd60(param_1,*(longlong *)(lVar9 + 0x30));
            if (plVar8 == (longlong *)0x0) {
              *(undefined4 *)(param_1 + 1) = 1;
              return;
            }
            lVar9 = *(longlong *)**(undefined8 **)(plVar8[1] + 0x10);
            lVar6 = FUN_144f7cde0(param_1,(longlong *)**(undefined8 **)(plVar8[1] + 0x10),0);
            if (*(int *)(param_1 + 1) != 0) {
              return;
            }
            if (*(longlong *)(lVar6 + 0x10) != lVar9) {
              FUN_144f7d000(param_1,plVar8,*(longlong *)(lVar6 + 0x10),lVar9);
              return;
            }
            lVar9 = *plVar8;
            lVar7 = *(longlong *)(lVar6 + 0x10);
            plVar11 = (longlong *)**(undefined8 **)(plVar8[1] + 0x10);
            lVar2 = *plVar11;
            if ((*(longlong *)(*(longlong *)(lVar9 + 8) + 0x20) !=
                 *(longlong *)(*(longlong *)(lVar2 + 8) + 0x20)) &&
               (FUN_144f7dbe0(param_1,plVar8), *(int *)(param_1 + 1) != 0)) {
              return;
            }
            lVar10 = param_1[0x13];
            bVar4 = true;
            dVar13 = *(double *)(*(longlong *)(lVar9 + 0x20) + 0x30);
            dVar14 = *(double *)(lVar10 + 0x30);
            if (((dVar13 == dVar14) && (!NAN(dVar13) && !NAN(dVar14))) &&
               ((dVar13 = *(double *)(*(longlong *)(lVar9 + 0x20) + 0x38),
                dVar13 == *(double *)(lVar10 + 0x38) &&
                (!NAN(dVar13) && !NAN(*(double *)(lVar10 + 0x38)))))) {
              iVar5 = FUN_144f7d460(*param_1,*(undefined8 *)(*(longlong *)(lVar7 + 8) + 0x18),lVar9)
              ;
              if ((iVar5 == 0) ||
                 (plVar8 = (longlong *)FUN_144f7cd60(param_1,plVar8), plVar8 == (longlong *)0x0))
              goto code_r0x000144f7e9f0;
              lVar7 = *(longlong *)**(undefined8 **)(plVar8[1] + 0x10);
              FUN_144f7cde0(param_1,(longlong *)**(undefined8 **)(plVar8[1] + 0x10),plVar11);
              if (*(int *)(param_1 + 1) != 0) {
                return;
              }
              lVar10 = param_1[0x13];
              bVar4 = false;
              dVar14 = *(double *)(lVar10 + 0x30);
            }
            lVar3 = *(longlong *)(lVar2 + 0x20);
            dVar13 = *(double *)(lVar3 + 0x30);
            if ((((dVar13 == dVar14) && (!NAN(dVar13) && !NAN(dVar14))) &&
                (*(double *)(lVar3 + 0x38) == *(double *)(lVar10 + 0x38))) &&
               (!NAN(*(double *)(lVar3 + 0x38)) && !NAN(*(double *)(lVar10 + 0x38)))) {
              iVar5 = FUN_144f7d460(*param_1,lVar6,*(undefined8 *)(*(longlong *)(lVar2 + 8) + 0x18))
              ;
              if (iVar5 != 0) {
                lVar6 = FUN_144f7cde0(param_1,plVar11,0);
                if (*(int *)(param_1 + 1) != 0) {
                  return;
                }
code_r0x000144f7e9cf:
                FUN_144f7d000(param_1,plVar8,*(undefined8 *)(lVar6 + 0x10),lVar7);
                return;
              }
              goto code_r0x000144f7e9f0;
            }
            if (!bVar4) goto code_r0x000144f7e9cf;
            dVar14 = *(double *)(*(longlong *)(lVar9 + 0x20) + 0x30);
            if (dVar13 < dVar14) {
code_r0x000144f7e898:
              lVar9 = *(longlong *)(*(longlong *)(lVar2 + 8) + 0x18);
            }
            else if (((dVar13 == dVar14) && (!NAN(dVar13) && !NAN(dVar14))) &&
                    (*(double *)(lVar3 + 0x38) <= *(double *)(*(longlong *)(lVar9 + 0x20) + 0x38)))
            goto code_r0x000144f7e898;
            lVar9 = FUN_144f7ee30(*param_1,*(undefined8 *)(*(longlong *)(lVar6 + 0x10) + 8),lVar9);
            if (lVar9 == 0) {
code_r0x000144f7e9f0:
              *(undefined4 *)(param_1 + 1) = 1;
              return;
            }
            FUN_144f7d000(param_1,plVar8,lVar9);
            if (*(int *)(param_1 + 1) != 0) {
              return;
            }
            *(undefined4 *)(*(longlong *)(*(longlong *)(lVar9 + 8) + 0x30) + 0x20) = 1;
            if (*(int *)(param_1 + 1) != 0) {
              return;
            }
            plVar11 = (longlong *)**(undefined8 **)(plVar8[1] + 0x10);
            goto code_r0x000144f7d628;
          }
          lVar9 = *(longlong *)(lVar9 + 0x10);
        } while (lVar9 != *(longlong *)(param_3 + 0x10));
        plVar8 = (longlong *)FUN_144f7e680(param_1[0x11]);
        if (plVar8 != (longlong *)0x0) {
          plVar8 = (longlong *)*plVar8;
          plVar11 = (longlong *)**(longlong **)(plVar8[1] + 0x10);
          if (plVar11 == (longlong *)0x0) {
            return;
          }
          lVar9 = *plVar8;
          lVar6 = *(longlong *)(*(longlong *)(lVar9 + 8) + 0x20);
          dVar13 = (double)func_0x000144f7d980(lVar6,param_3,*(undefined8 *)(lVar9 + 0x20));
          if ((dVar13 == 0.0) && (!NAN(dVar13))) {
            FUN_1400f0c60(param_1,plVar8,param_3);
            return;
          }
          dVar13 = *(double *)(lVar6 + 0x30);
          lVar7 = *(longlong *)(*(longlong *)(*plVar11 + 8) + 0x20);
          dVar14 = *(double *)(lVar7 + 0x30);
          plVar12 = plVar8;
          if ((dVar13 <= dVar14) &&
             (((dVar14 != dVar13 || (NAN(dVar14) || NAN(dVar13))) ||
              (*(double *)(lVar6 + 0x38) < *(double *)(lVar7 + 0x38))))) {
            plVar12 = plVar11;
          }
          if ((*(int *)((longlong)plVar8 + 0x14) == 0) && ((int)plVar12[4] == 0)) {
            FUN_144f7d000(param_1,plVar8,*(undefined8 *)(param_3 + 0x10),
                          *(undefined8 *)(param_3 + 0x10),0,CONCAT44(uVar15,1));
            return;
          }
          if (plVar12 == plVar8) {
            lVar9 = FUN_144f7ee30(*param_1,*(undefined8 *)(*(longlong *)(param_3 + 0x10) + 8),
                                  *(undefined8 *)(lVar9 + 0x18));
            if (lVar9 == 0) goto code_r0x000144f7e658;
          }
          else {
            lVar9 = FUN_144f7ee30(*param_1,*(undefined8 *)
                                            (*(longlong *)(*(longlong *)(*plVar11 + 8) + 0x10) + 8),
                                  *(undefined8 *)(param_3 + 0x10));
            if (lVar9 == 0) goto code_r0x000144f7e658;
            lVar9 = *(longlong *)(lVar9 + 8);
          }
          if ((int)plVar12[4] == 0) {
            lVar9 = FUN_144f7d260(param_1,plVar8);
            if (lVar9 != 0) {
              FUN_1400f0a60(*(undefined4 *)(param_1 + 0x10),lVar9);
code_r0x000144f7e620:
              FUN_144f7cca0(param_1,param_3);
              return;
            }
          }
          else {
            iVar5 = FUN_1400f0c20(*param_1,plVar12,lVar9);
            if (iVar5 != 0) goto code_r0x000144f7e620;
          }
        }
code_r0x000144f7e658:
        *(undefined4 *)(param_1 + 1) = 1;
        return;
      }
    }
  }
  else {
    lVar7 = func_0x00014257ed60(param_2);
    plVar8 = (longlong *)**(longlong **)(*(longlong *)(lVar7 + 8) + 0x10);
    lVar9 = *(longlong *)(*plVar8 + 8);
    lVar6 = *(longlong *)(lVar9 + 0x10);
    if ((int)plVar8[4] != 0) {
      FUN_144f7cf10(param_1);
      iVar5 = FUN_144f7fa50(*param_1,lVar9);
      if (iVar5 == 0) goto LAB_1400f0dd8;
      lVar9 = *(longlong *)(*(longlong *)(lVar6 + 8) + 0x18);
    }
    iVar5 = FUN_144f7d460(*param_1,*(undefined8 *)(param_3 + 0x10),lVar9);
    if (iVar5 != 0) {
      FUN_144f7d000(param_1,lVar7,*(undefined8 *)(lVar9 + 0x10),lVar6);
      return;
    }
  }
LAB_1400f0dd8:
  *(undefined4 *)(param_1 + 1) = 1;
  return;
code_r0x000144f7d628:
  iVar5 = *(int *)((longlong)plVar11 + 0x1c);
  plVar12 = plVar8;
  while (iVar5 != 0) {
    plVar8 = (longlong *)**(undefined8 **)(plVar11[1] + 0x10);
    if (plVar8 == (longlong *)0x0) goto code_r0x000144f7d800;
    plVar12 = plVar11;
    plVar11 = plVar8;
    iVar5 = *(int *)((longlong)plVar8 + 0x1c);
  }
  plVar8 = plVar12;
  if (*(int *)((longlong)plVar12 + 0x1c) == 0) {
    plVar8 = (longlong *)**(longlong **)(plVar12[1] + 8);
    if (plVar8 == (longlong *)0x0) {
      return;
    }
    plVar11 = plVar12;
    if (*(int *)((longlong)plVar8 + 0x1c) == 0) {
      return;
    }
  }
  *(undefined4 *)((longlong)plVar8 + 0x1c) = 0;
  lVar9 = *plVar8;
  lVar6 = *plVar11;
  if ((*(longlong *)(*(longlong *)(lVar9 + 8) + 0x20) !=
       *(longlong *)(*(longlong *)(lVar6 + 8) + 0x20)) &&
     (iVar5 = FUN_144f7d820(param_1,plVar8), iVar5 != 0)) {
    if ((int)plVar11[4] == 0) {
      if ((int)plVar8[4] != 0) {
        FUN_144f7cf10(param_1,plVar8);
        iVar5 = FUN_144f7fa50(*param_1,lVar9);
        if (iVar5 == 0) goto code_r0x000144f7d800;
        plVar8 = (longlong *)**(undefined8 **)(plVar11[1] + 8);
        lVar9 = *plVar8;
      }
    }
    else {
      FUN_144f7cf10(param_1,plVar11);
      iVar5 = FUN_144f7fa50(*param_1,lVar6);
      if (iVar5 == 0) goto code_r0x000144f7d800;
      plVar11 = (longlong *)**(undefined8 **)(plVar8[1] + 0x10);
      lVar6 = *plVar11;
    }
  }
  if (*(int *)(param_1 + 1) != 0) {
    return;
  }
  if (*(longlong *)(lVar9 + 0x20) != *(longlong *)(lVar6 + 0x20)) {
    lVar7 = *(longlong *)(*(longlong *)(lVar9 + 8) + 0x20);
    lVar2 = *(longlong *)(*(longlong *)(lVar6 + 8) + 0x20);
    if ((((lVar7 == lVar2) || ((int)plVar8[4] != 0)) || ((int)plVar11[4] != 0)) ||
       ((lVar7 != param_1[0x13] && (lVar2 != param_1[0x13])))) {
      FUN_144f7d9c0(param_1,plVar8);
    }
    else {
      iVar5 = FUN_144f7dbe0(param_1,plVar8);
      if (iVar5 != 0) {
        return;
      }
    }
  }
  if (*(int *)(param_1 + 1) != 0) {
    return;
  }
  iVar5 = 0;
  if (*(longlong *)(lVar9 + 0x20) == *(longlong *)(lVar6 + 0x20)) {
    lVar7 = *(longlong *)(lVar9 + 8);
    if (*(longlong *)(lVar7 + 0x20) == *(longlong *)(*(longlong *)(lVar6 + 8) + 0x20)) {
      *(int *)(lVar6 + 0x38) = *(int *)(lVar6 + 0x38) + *(int *)(lVar9 + 0x38);
      piVar1 = (int *)(*(longlong *)(lVar6 + 8) + 0x38);
      *piVar1 = *piVar1 + *(int *)(lVar7 + 0x38);
      FUN_144f7cf10(param_1,plVar8);
      iVar5 = FUN_144f7fa50(*param_1,lVar9);
      if (iVar5 == 0) {
code_r0x000144f7d800:
        *(undefined4 *)(param_1 + 1) = 1;
        return;
      }
      plVar8 = (longlong *)**(undefined8 **)(plVar11[1] + 8);
      iVar5 = *(int *)(param_1 + 1);
    }
  }
  if (iVar5 != 0) {
    return;
  }
  goto code_r0x000144f7d628;
}

