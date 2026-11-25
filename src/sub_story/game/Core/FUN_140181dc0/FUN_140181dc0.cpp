// Recovered from game_scarlett_master.exe (GTA VI, Xbox Series X, PE32+ x64)
// Address: 140181dc0  size: 283 bytes
// Name:    FUN_140181dc0
// Subsystem: core
//
// Referenced strings (0 in this body, 0 including direct callees):
// Callees: FUN_14503e0d0, FUN_14503e140
//
// Generated decompilation. Formatting follows MiscRef/GTAVSRC conventions;
// identifiers are recovered, not original. See ../../../README.md.

#include "gta6decomp/rage_types.h"


void FUN_140181dc0(longlong *param_1,undefined8 param_2,longlong param_3,uint param_4)

{
  int iVar1;
  longlong lVar2;
  longlong lVar3;
  longlong *plVar4;
  longlong *plVar5;
  longlong *plVar6;
  longlong *plVar7;
  
  if (*(longlong *)(param_3 + 0x28) != 0) {
    lVar2 = FUN_14503e0d0();
    plVar7 = (longlong *)(lVar2 + 0x40);
    if (((longlong *)*param_1 != (longlong *)0x0) || (*plVar7 != 0)) {
      lVar2 = 0;
      plVar6 = (longlong *)*param_1;
      do {
        plVar5 = param_1;
        if ((plVar6 == (longlong *)0x0) ||
           (iVar1 = (**(code **)(*plVar6 + 8))(plVar6), iVar1 != *(int *)(&UNK_146630dd0 + lVar2)))
        {
          plVar4 = plVar6;
          if (((*(uint *)(&UNK_146630dd4 + lVar2) & param_4) != 0) &&
             ((lVar3 = FUN_14503e140(plVar7,*(undefined4 *)(&UNK_146630dd0 + lVar2)), lVar3 != 0 &&
              (lVar3 = (**(code **)(&UNK_146630dd8 + lVar2))(param_2,param_3,lVar3,plVar6),
              lVar3 != 0)))) {
            *param_1 = lVar3;
            plVar5 = (longlong *)(lVar3 + 8);
          }
        }
        else {
          plVar4 = (longlong *)plVar6[1];
          plVar5 = plVar6 + 1;
          if ((*(uint *)(&UNK_146630dd4 + lVar2) & param_4) != 0) {
            lVar3 = FUN_14503e140(plVar7,iVar1);
            if (lVar3 == 0) {
              (**(code **)*plVar6)(plVar6,1);
              *param_1 = (longlong)plVar4;
              plVar5 = param_1;
            }
            else {
              (*(code *)((undefined8 *)*plVar6)[3])(plVar6,param_2,lVar3);
            }
          }
        }
        lVar2 = lVar2 + 0x10;
        param_1 = plVar5;
        plVar6 = plVar4;
      } while (lVar2 != 0x60);
    }
  }
  return;
}

