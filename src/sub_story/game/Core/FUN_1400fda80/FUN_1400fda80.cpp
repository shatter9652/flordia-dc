// Recovered from game_scarlett_master.exe (GTA VI, Xbox Series X, PE32+ x64)
// Address: 1400fda80  size: 416 bytes
// Name:    FUN_1400fda80
// Subsystem: core
//
// Referenced strings (0 in this body, 0 including direct callees):
// Callees: FUN_14497d680
//
// Generated decompilation. Formatting follows MiscRef/GTAVSRC conventions;
// identifiers are recovered, not original. See ../../../README.md.

#include "gta6decomp/rage_types.h"


void FUN_1400fda80(longlong param_1,longlong param_2,uint *param_3,uint param_4,longlong param_5,
                  uint *param_6,uint param_7)

{
  uint uVar1;
  int iVar2;
  int iVar3;
  int iVar4;
  longlong lVar5;
  uint uVar6;
  longlong lVar7;
  int *piVar8;
  
  uVar1 = *param_3;
  if (uVar1 < param_4) {
    lVar5 = *(longlong *)(param_1 + 0x1b0);
    do {
      if (param_7 <= *param_6) {
        return;
      }
      uVar6 = *(int *)(param_1 + 300) - *(int *)(lVar5 + 100);
      if (param_4 - uVar1 <= uVar6) {
        uVar6 = param_4 - uVar1;
      }
      (**(code **)(*(longlong *)(param_1 + 0x1c8) + 8))
                (param_1,param_2 + (ulonglong)uVar1 * 8,lVar5 + 0x10,*(int *)(lVar5 + 100),uVar6);
      *param_3 = *param_3 + uVar6;
      iVar4 = *(int *)(lVar5 + 100) + uVar6;
      *(int *)(lVar5 + 100) = iVar4;
      iVar2 = *(int *)(lVar5 + 0x60) - uVar6;
      *(int *)(lVar5 + 0x60) = iVar2;
      iVar3 = *(int *)(param_1 + 300);
      if ((iVar2 == 0) && (iVar4 < iVar3)) {
        if (0 < *(int *)(param_1 + 0x4c)) {
          lVar7 = 0;
          do {
            FUN_14497d680(*(undefined8 *)(lVar5 + 0x10 + lVar7 * 8),*(undefined4 *)(param_1 + 0x30),
                          *(undefined4 *)(lVar5 + 100),*(undefined4 *)(param_1 + 300));
            lVar7 = lVar7 + 1;
          } while (lVar7 < *(int *)(param_1 + 0x4c));
          iVar3 = *(int *)(param_1 + 300);
        }
        *(int *)(lVar5 + 100) = iVar3;
LAB_1400fdb26:
        (**(code **)(*(longlong *)(param_1 + 0x1d0) + 8))(param_1,lVar5 + 0x10,0,param_5,*param_6);
        *(undefined4 *)(lVar5 + 100) = 0;
        *param_6 = *param_6 + 1;
        iVar2 = *(int *)(lVar5 + 0x60);
      }
      else if (iVar4 == iVar3) goto LAB_1400fdb26;
      if ((iVar2 == 0) && (*param_6 < param_7)) {
        if (0 < *(int *)(param_1 + 0x4c)) {
          lVar5 = 0;
          piVar8 = (int *)(*(longlong *)(param_1 + 0x58) + 0x1c);
          do {
            FUN_14497d680(*(undefined8 *)(param_5 + lVar5 * 8),*piVar8 << 3,piVar8[-4] * *param_6,
                          piVar8[-4] * param_7);
            lVar5 = lVar5 + 1;
            piVar8 = piVar8 + 0x18;
          } while (lVar5 < *(int *)(param_1 + 0x4c));
        }
        *param_6 = param_7;
        return;
      }
      uVar1 = *param_3;
    } while (uVar1 < param_4);
  }
  return;
}

