// Recovered from game_scarlett_master.exe (GTA VI, Xbox Series X, PE32+ x64)
// Address: 1400fded0  size: 178 bytes
// Name:    FUN_1400fded0
// Subsystem: core
//
// Referenced strings (0 in this body, 0 including direct callees):
// Callees: FUN_144d8a460, FUN_1400fdf90
//
// Generated decompilation. Formatting follows MiscRef/GTAVSRC conventions;
// identifiers are recovered, not original. See ../../../README.md.

#include "gta6decomp/rage_types.h"


void FUN_1400fded0(longlong *param_1)

{
  longlong *plVar1;
  undefined4 uVar2;
  longlong lVar3;
  longlong *plVar4;
  char *pcVar5;
  undefined8 *puVar6;
  undefined4 *puVar7;
  char cVar8;
  int iVar9;
  int iVar10;
  longlong lVar11;
  longlong lVar12;
  undefined8 uVar13;
  
  lVar12 = param_1[0x38];
  if ((*(char *)((longlong)param_1 + 0x101) == '\0') && (0 < *(int *)((longlong)param_1 + 0x134))) {
    lVar11 = 0;
    do {
      lVar3 = param_1[lVar11 + 0x27];
      if (*(char *)((longlong)param_1 + 0x124) == '\0') {
        FUN_1400fdf90(param_1,*(undefined4 *)(lVar3 + 0x14),0);
LAB_1400fdf17:
        uVar2 = *(undefined4 *)(lVar3 + 0x18);
        uVar13 = 1;
LAB_1400fdf21:
        FUN_1400fdf90(param_1,uVar2,uVar13);
      }
      else {
        if (*(int *)((longlong)param_1 + 0x18c) != 0) goto LAB_1400fdf17;
        if (*(int *)((longlong)param_1 + 0x194) == 0) {
          uVar2 = *(undefined4 *)(lVar3 + 0x14);
          uVar13 = 0;
          goto LAB_1400fdf21;
        }
      }
      lVar11 = lVar11 + 1;
    } while (lVar11 < *(int *)((longlong)param_1 + 0x134));
  }
  if (*(int *)((longlong)param_1 + 0x10c) != *(int *)(lVar12 + 0x38)) {
    FUN_144d8a460(param_1);
    *(undefined4 *)(lVar12 + 0x38) = *(undefined4 *)((longlong)param_1 + 0x10c);
  }
  FUN_1400fe170(param_1,0xda);
  FUN_1400fe1a0(param_1,*(int *)((longlong)param_1 + 0x134) * 2 + 6);
  FUN_1400fe120(param_1,*(undefined4 *)((longlong)param_1 + 0x134));
  if (0 < *(int *)((longlong)param_1 + 0x134)) {
    lVar12 = 0;
    do {
      puVar7 = (undefined4 *)param_1[lVar12 + 0x27];
      FUN_1400fe120(param_1,*puVar7);
      iVar10 = puVar7[5];
      iVar9 = puVar7[6];
      if (*(char *)((longlong)param_1 + 0x124) != '\0') {
        if (*(int *)((longlong)param_1 + 0x18c) == 0) {
          if (*(int *)((longlong)param_1 + 0x194) == 0) {
            iVar9 = 0;
          }
          else {
            iVar9 = 0;
            if (*(char *)((longlong)param_1 + 0x101) == '\0') {
              iVar10 = iVar9;
            }
          }
        }
        else {
          iVar10 = 0;
        }
      }
      FUN_1400fe120(param_1,iVar10 * 0x10 + iVar9);
      lVar12 = lVar12 + 1;
    } while (lVar12 < *(int *)((longlong)param_1 + 0x134));
  }
  FUN_1400fe120(param_1,*(undefined4 *)((longlong)param_1 + 0x18c));
  FUN_1400fe120(param_1,(int)param_1[0x32]);
  uVar2 = *(undefined4 *)((longlong)param_1 + 0x194);
  lVar12 = param_1[0x33];
  plVar4 = (longlong *)param_1[5];
  pcVar5 = (char *)*plVar4;
  *plVar4 = (longlong)(pcVar5 + 1);
  *pcVar5 = (char)uVar2 * '\x10' + (char)(int)lVar12;
  plVar1 = plVar4 + 1;
  *plVar1 = *plVar1 + -1;
  if ((*plVar1 == 0) && (cVar8 = (*(code *)plVar4[3])(), cVar8 == '\0')) {
    puVar6 = (undefined8 *)*param_1;
    *(undefined4 *)(puVar6 + 5) = 0x18;
                    /* WARNING: Could not recover jumptable at 0x0001400fe15e. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)*puVar6)(param_1);
    return;
  }
  return;
}

