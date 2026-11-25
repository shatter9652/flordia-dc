// Recovered from game_scarlett_master.exe (GTA VI, Xbox Series X, PE32+ x64)
// Address: 14013e340  size: 296 bytes
// Name:    FUN_14013e340
// Subsystem: core
//
// Referenced strings (0 in this body, 0 including direct callees):
// Callees: FUN_142474a90, FUN_14248c6b0
//
// Generated decompilation. Formatting follows MiscRef/GTAVSRC conventions;
// identifiers are recovered, not original. See ../../../README.md.

#include "gta6decomp/rage_types.h"


void FUN_14013e340(longlong param_1,int param_2,int param_3,int param_4)

{
  code *pcVar1;
  int *piVar2;
  int iVar3;
  int iVar4;
  ulonglong uVar5;
  longlong *plVar6;
  bool bVar7;
  
  plVar6 = *(longlong **)(param_1 + 0x12348);
  if (plVar6 == (longlong *)0x0) {
    FUN_142474a90(param_1 + 0x12300);
    plVar6 = *(longlong **)(param_1 + 0x12348);
  }
  uVar5 = *(ulonglong *)(param_1 + 0x20);
  if ((uVar5 & 0x30000000000) == 0) {
LAB_14013e3df:
    if (uVar5 == 0) goto LAB_14013e3ec;
  }
  else {
    pcVar1 = *(code **)(param_1 + 0x122c0);
    if (pcVar1 != (code *)0x0) {
      piVar2 = *(int **)(param_1 + 0x12198);
      iVar4 = *piVar2;
      do {
        LOCK();
        iVar3 = *piVar2;
        if (iVar4 == iVar3) {
          *piVar2 = iVar4 + 0x4000000;
          iVar3 = iVar4;
        }
        UNLOCK();
        bVar7 = iVar4 != iVar3;
        iVar4 = iVar3;
      } while (bVar7);
      (*pcVar1)(param_1,uVar5,*(undefined8 *)(param_1 + 0x122c8));
      iVar4 = *piVar2;
      do {
        LOCK();
        iVar3 = *piVar2;
        if (iVar4 == iVar3) {
          *piVar2 = iVar4 + -0x4000000;
          iVar3 = iVar4;
        }
        UNLOCK();
        bVar7 = iVar4 != iVar3;
        iVar4 = iVar3;
      } while (bVar7);
      uVar5 = *(ulonglong *)(param_1 + 0x20);
      goto LAB_14013e3df;
    }
  }
  FUN_14248c6b0(param_1);
LAB_14013e3ec:
  piVar2 = (int *)plVar6[3];
  if (piVar2 < (int *)plVar6[5]) {
    iVar4 = 0x4002c400;
    if (*(char *)((longlong)plVar6 + 0x143) == '\0' && (char)plVar6[0x28] == '\0') {
      iVar4 = (*(byte *)((longlong)plVar6 + 0x141) & 1) * 4 + 0x4002e800;
    }
    *piVar2 = iVar4;
    piVar2[1] = param_2;
    piVar2[2] = param_3;
    piVar2[3] = param_4;
    plVar6[3] = (longlong)(piVar2 + 4);
    *(undefined1 *)(plVar6 + 0x28) = 0;
    return;
  }
                    /* WARNING: Could not recover jumptable at 0x00014013e415. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*plVar6 + 0x70))(plVar6,param_2,param_3,param_4);
  return;
}

