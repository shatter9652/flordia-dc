// Recovered from game_scarlett_master.exe (GTA VI, Xbox Series X, PE32+ x64)
// Address: 1400fe1d0  size: 222 bytes
// Name:    FUN_1400fe1d0
// Subsystem: core
//
// Referenced strings (0 in this body, 0 including direct callees):
// Callees: FUN_1400fe1a0, FUN_1400fe120, FUN_1400fe170
//
// Generated decompilation. Formatting follows MiscRef/GTAVSRC conventions;
// identifiers are recovered, not original. See ../../../README.md.

#include "gta6decomp/rage_types.h"


void FUN_1400fe1d0(longlong *param_1)

{
  longlong *plVar1;
  undefined4 uVar2;
  longlong *plVar3;
  char *pcVar4;
  undefined8 *puVar5;
  undefined4 *puVar6;
  char cVar7;
  int iVar8;
  int iVar9;
  longlong lVar10;
  
  FUN_1400fe170(param_1,0xda);
  FUN_1400fe1a0(param_1,*(int *)((longlong)param_1 + 0x134) * 2 + 6);
  FUN_1400fe120(param_1,*(undefined4 *)((longlong)param_1 + 0x134));
  if (0 < *(int *)((longlong)param_1 + 0x134)) {
    lVar10 = 0;
    do {
      puVar6 = (undefined4 *)param_1[lVar10 + 0x27];
      FUN_1400fe120(param_1,*puVar6);
      iVar9 = puVar6[5];
      iVar8 = puVar6[6];
      if (*(char *)((longlong)param_1 + 0x124) != '\0') {
        if (*(int *)((longlong)param_1 + 0x18c) == 0) {
          if (*(int *)((longlong)param_1 + 0x194) == 0) {
            iVar8 = 0;
          }
          else {
            iVar8 = 0;
            if (*(char *)((longlong)param_1 + 0x101) == '\0') {
              iVar9 = iVar8;
            }
          }
        }
        else {
          iVar9 = 0;
        }
      }
      FUN_1400fe120(param_1,iVar9 * 0x10 + iVar8);
      lVar10 = lVar10 + 1;
    } while (lVar10 < *(int *)((longlong)param_1 + 0x134));
  }
  FUN_1400fe120(param_1,*(undefined4 *)((longlong)param_1 + 0x18c));
  FUN_1400fe120(param_1,(int)param_1[0x32]);
  uVar2 = *(undefined4 *)((longlong)param_1 + 0x194);
  lVar10 = param_1[0x33];
  plVar3 = (longlong *)param_1[5];
  pcVar4 = (char *)*plVar3;
  *plVar3 = (longlong)(pcVar4 + 1);
  *pcVar4 = (char)uVar2 * '\x10' + (char)(int)lVar10;
  plVar1 = plVar3 + 1;
  *plVar1 = *plVar1 + -1;
  if ((*plVar1 == 0) && (cVar7 = (*(code *)plVar3[3])(), cVar7 == '\0')) {
    puVar5 = (undefined8 *)*param_1;
    *(undefined4 *)(puVar5 + 5) = 0x18;
                    /* WARNING: Could not recover jumptable at 0x0001400fe15e. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)*puVar5)(param_1);
    return;
  }
  return;
}

