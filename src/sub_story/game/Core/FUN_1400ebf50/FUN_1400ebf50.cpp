// Recovered from game_scarlett_master.exe (GTA VI, Xbox Series X, PE32+ x64)
// Address: 1400ebf50  size: 186 bytes
// Name:    FUN_1400ebf50
// Subsystem: core
//
// Referenced strings (0 in this body, 0 including direct callees):
// Callees: FUN_1400ec130, FUN_1400ec320
//
// Generated decompilation. Formatting follows MiscRef/GTAVSRC conventions;
// identifiers are recovered, not original. See ../../../README.md.

#include "gta6decomp/rage_types.h"


void FUN_1400ebf50(longlong param_1,longlong param_2,int param_3)

{
  longlong *plVar1;
  longlong lVar2;
  uint uVar3;
  longlong lVar4;
  longlong *plVar5;
  int iVar6;
  longlong lVar7;
  longlong *plVar8;
  
  func_0x000145f40580(param_2,0,(longlong)param_3 << 2);
  if ((ulonglong)*(uint *)(param_1 + 0x104) != 0) {
    plVar8 = *(longlong **)(param_1 + 0x108);
    plVar1 = plVar8 + *(uint *)(param_1 + 0x104);
    do {
      lVar4 = *plVar8;
      if ((lVar4 != 0) && (uVar3 = *(uint *)(lVar4 + 0x6c), (ulonglong)uVar3 != 0)) {
        lVar7 = 0;
        lVar2 = param_2 + (longlong)*(int *)(lVar4 + 0x38) * 4;
        do {
          plVar5 = *(longlong **)(lVar4 + 0x70 + lVar7);
          iVar6 = (**(code **)(*plVar5 + 0x18))(plVar5);
          if (iVar6 == 6) {
            FUN_1400ec130(lVar2,plVar5);
          }
          else {
            iVar6 = (**(code **)(*plVar5 + 0x18))(plVar5);
            if (iVar6 == 7) {
              FUN_1400ec320(lVar2,plVar5);
            }
          }
          lVar7 = lVar7 + 8;
        } while ((ulonglong)uVar3 << 3 != lVar7);
      }
      plVar8 = plVar8 + 1;
    } while (plVar8 != plVar1);
  }
  return;
}

