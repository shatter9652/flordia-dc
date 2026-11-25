// Recovered from game_scarlett_master.exe (GTA VI, Xbox Series X, PE32+ x64)
// Address: 140114b70  size: 328 bytes
// Name:    FUN_140114b70
// Subsystem: core
//
// Referenced strings (0 in this body, 0 including direct callees):
// Callees: FUN_140114d20, FUN_140114ce0, FUN_1450af360, FUN_140114d70
//
// Generated decompilation. Formatting follows MiscRef/GTAVSRC conventions;
// identifiers are recovered, not original. See ../../../README.md.

#include "gta6decomp/rage_types.h"


void FUN_140114b70(longlong *param_1,longlong param_2,undefined8 param_3,undefined4 *param_4,
                  char param_5)

{
  longlong *plVar1;
  longlong lVar2;
  char cVar3;
  undefined4 uVar4;
  longlong lVar5;
  undefined1 auStack_50 [4];
  undefined1 auStack_4c [12];
  undefined4 uStack_40;
  
  if ((char)param_1[0x16] == '\0') {
    *(undefined1 *)(param_1 + 0x16) = 1;
    *(undefined4 *)(param_1 + 0x15) = 0x1e;
    lVar5 = func_0x000144fdf400(*(undefined4 *)(param_2 + 0x9c));
    if (lVar5 != 0) {
      lVar2 = param_1[2];
      cVar3 = FUN_140114ce0(lVar5,(int)lVar2);
      if (cVar3 != '\0') {
        cVar3 = FUN_1450af360(lVar5,(int)lVar2);
        if (cVar3 != '\0') {
          auStack_4c = ZEXT812(0);
          uStack_40 = 0;
          FUN_140114d70(lVar5 + 0x6860,param_2,param_1,param_3,auStack_50);
          param_1[0x14] = auStack_4c._4_8_;
          *param_4 = uStack_40;
          if (param_5 == '\0') {
            if ((longlong *)auStack_4c._4_8_ != (longlong *)0x0) {
              uVar4 = (**(code **)(*(longlong *)auStack_4c._4_8_ + 0x38))();
              *(undefined4 *)(param_1 + 0x15) = uVar4;
              plVar1 = (longlong *)param_1[0x14];
              lVar5 = plVar1[1];
              uVar4 = (**(code **)(*plVar1 + 0x58))(plVar1,param_2,param_1);
              *(undefined4 *)((longlong)param_1 + 0xac) = uVar4;
              if ((int)lVar5 != -1) {
                *(int *)((longlong)param_1 + 0x3c) = (int)lVar5;
              }
              FUN_140114d20(param_2,param_1[0x14] + 0xc);
            }
            cVar3 = func_0x0001403e33e0(*(undefined4 *)((longlong)param_1 + 0x3c));
            if (cVar3 == '\0') {
              cVar3 = func_0x000144da2930(*(undefined4 *)((longlong)param_1 + 0xb4));
              if (cVar3 != '\0') {
                uVar4 = (**(code **)(*param_1 + 0x170))(param_1);
                *(undefined4 *)((longlong)param_1 + 0x3c) = uVar4;
              }
            }
          }
        }
      }
    }
  }
  return;
}

