// Recovered from game_scarlett_master.exe (GTA VI, Xbox Series X, PE32+ x64)
// Address: 140056a20  size: 373 bytes
// Name:    FUN_140056a20
// Subsystem: core
//
// Referenced strings (0 in this body, 0 including direct callees):
// Callees: FUN_140188430, FUN_14248c2a0
//
// Generated decompilation. Formatting follows MiscRef/GTAVSRC conventions;
// identifiers are recovered, not original. See ../../../README.md.

#include "gta6decomp/rage_types.h"


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_140056a20(longlong param_1,int param_2,int param_3,int param_4)

{
  code *pcVar1;
  int *piVar2;
  int iVar3;
  ulonglong uVar4;
  int iVar5;
  ulonglong uVar6;
  longlong *plVar7;
  bool bVar8;
  undefined1 auVar9 [16];
  
  plVar7 = *(longlong **)(param_1 + 0x127c8);
  if (plVar7 == (longlong *)0x0) {
    FUN_140188430(param_1 + 0x12780);
    plVar7 = *(longlong **)(param_1 + 0x127c8);
  }
  auVar9._8_8_ = *(undefined8 *)(param_1 + 0x20);
  auVar9._0_8_ = *(undefined8 *)(param_1 + 0x20);
  auVar9 = vpand_avx(auVar9,_DAT_14615c3a0);
  auVar9 = vpor_avx(auVar9,*(undefined1 (*) [16])(param_1 + 0x12520));
  uVar6 = auVar9._8_8_;
  *(undefined1 (*) [16])(param_1 + 0x12520) = auVar9;
  *(undefined8 *)(param_1 + 0x20) = 0;
  uVar4 = uVar6;
  if ((uVar6 & 0x30000000000) == 0) {
LAB_140056afa:
    if (uVar4 == 0) goto LAB_140056b07;
  }
  else {
    pcVar1 = *(code **)(param_1 + 0x122c0);
    if (pcVar1 != (code *)0x0) {
      piVar2 = *(int **)(param_1 + 0x12198);
      iVar5 = *piVar2;
      do {
        LOCK();
        iVar3 = *piVar2;
        if (iVar5 == iVar3) {
          *piVar2 = iVar5 + 0x4000000;
          iVar3 = iVar5;
        }
        UNLOCK();
        bVar8 = iVar5 != iVar3;
        iVar5 = iVar3;
      } while (bVar8);
      (*pcVar1)(param_1,uVar6,*(undefined8 *)(param_1 + 0x122c8));
      iVar5 = *piVar2;
      do {
        LOCK();
        iVar3 = *piVar2;
        if (iVar5 == iVar3) {
          *piVar2 = iVar5 + -0x4000000;
          iVar3 = iVar5;
        }
        UNLOCK();
        bVar8 = iVar5 != iVar3;
        iVar5 = iVar3;
      } while (bVar8);
      uVar4 = *(ulonglong *)(param_1 + 0x12528);
      goto LAB_140056afa;
    }
  }
  FUN_14248c2a0(param_1);
LAB_140056b07:
  if ((uVar6 & 0x700000f0ff) != 0) {
    *(ulonglong *)(param_1 + 0x12520) = *(ulonglong *)(param_1 + 0x12520) | 0x700000f0ff;
  }
  piVar2 = (int *)plVar7[3];
  if (piVar2 < (int *)plVar7[5]) {
    iVar5 = 0x4002c400;
    if (*(char *)((longlong)plVar7 + 0x143) == '\0' && (char)plVar7[0x28] == '\0') {
      iVar5 = (*(byte *)((longlong)plVar7 + 0x141) & 1) * 4 + 0x4002e800;
    }
    *piVar2 = iVar5;
    piVar2[1] = param_2;
    piVar2[2] = param_3;
    piVar2[3] = param_4;
    plVar7[3] = (longlong)(piVar2 + 4);
    *(undefined1 *)(plVar7 + 0x28) = 0;
    return;
  }
                    /* WARNING: Could not recover jumptable at 0x000140056b3f. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*plVar7 + 0x70))(plVar7,param_2,param_3,param_4);
  return;
}

