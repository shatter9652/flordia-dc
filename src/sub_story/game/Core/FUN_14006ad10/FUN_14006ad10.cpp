// Recovered from game_scarlett_master.exe (GTA VI, Xbox Series X, PE32+ x64)
// Address: 14006ad10  size: 164 bytes
// Name:    FUN_14006ad10
// Subsystem: core
//
// Referenced strings (0 in this body, 0 including direct callees):
// Callees: 
//
// Generated decompilation. Formatting follows MiscRef/GTAVSRC conventions;
// identifiers are recovered, not original. See ../../../README.md.

#include "gta6decomp/rage_types.h"


void FUN_14006ad10(longlong *param_1,longlong *param_2)

{
  int iVar1;
  longlong *plVar2;
  longlong lVar3;
  int iVar4;
  undefined4 uVar5;
  longlong lVar6;
  int iVar7;
  
  plVar2 = (longlong *)*param_1;
  lVar3 = plVar2[1];
  iVar4 = (**(code **)(*plVar2 + 0xf0))(plVar2,(int)param_1[1]);
  lVar6 = 0;
  iVar7 = -1;
  if ((lVar3 != 0) && (iVar4 != 0)) {
    plVar2 = (longlong *)*param_1;
    lVar6 = param_1[1];
    iVar4 = func_0x000144e05fa0(plVar2[1]);
    if ((int)lVar6 != iVar4) {
      uVar5 = (**(code **)(*plVar2 + 0xf0))(plVar2,(int)lVar6);
      iVar4 = func_0x000144da5a50(lVar3,uVar5);
      if (iVar4 != -1) {
        iVar1 = *(int *)(lVar3 + 0x1d0);
        lVar6 = 0;
        do {
          if (iVar4 < iVar1) {
            lVar6 = *param_1;
            iVar7 = iVar4;
            break;
          }
          iVar4 = func_0x000144da5a50(lVar3,iVar4);
        } while (iVar4 != -1);
        goto LAB_14006ad9b;
      }
    }
    lVar6 = 0;
  }
LAB_14006ad9b:
  *param_2 = lVar6;
  *(int *)(param_2 + 1) = iVar7;
  return;
}

