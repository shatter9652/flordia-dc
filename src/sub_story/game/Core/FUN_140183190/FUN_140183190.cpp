// Recovered from game_scarlett_master.exe (GTA VI, Xbox Series X, PE32+ x64)
// Address: 140183190  size: 421 bytes
// Name:    FUN_140183190
// Subsystem: core
//
// Referenced strings (0 in this body, 0 including direct callees):
// Callees: FUN_14503e140, FUN_140182870
//
// Generated decompilation. Formatting follows MiscRef/GTAVSRC conventions;
// identifiers are recovered, not original. See ../../../README.md.

#include "gta6decomp/rage_types.h"


void FUN_140183190(longlong *param_1,undefined8 param_2,longlong *param_3,longlong param_4,
                  longlong param_5,ushort param_6)

{
  longlong *plVar1;
  char cVar2;
  longlong lVar3;
  ushort uVar4;
  
  plVar1 = (longlong *)param_1[6];
  if ((plVar1 != param_3) || ((param_4 == 0) != ((longlong *)param_3[8] == param_1))) {
    if ((plVar1 != (longlong *)0x0) &&
       ((FUN_140182870(param_1,param_2), plVar1[4] != 0 &&
        (cVar2 = (**(code **)(*plVar1 + 0x58))(plVar1), cVar2 != '\0')))) {
      func_0x00014503d720(plVar1[4],plVar1,0x1000000);
    }
    if (param_4 != 0) {
      param_1[2] = *(longlong *)(*(longlong *)(param_4 + 0x18) + 0x10);
      lVar3 = *(longlong *)(param_4 + 0x18);
      param_1[3] = lVar3;
      *(longlong **)(lVar3 + 0x10) = param_1;
      *(longlong **)(param_4 + 0x18) = param_1;
    }
    if (param_5 != 0) {
      if ((*(byte *)(param_5 + 10) & 0x20) != 0) {
        plVar1 = (longlong *)param_3[8];
        if (plVar1 != param_1 && plVar1 != (longlong *)0x0) {
          FUN_140182870(plVar1,param_2);
        }
        param_3[8] = (longlong)param_1;
        *(byte *)((longlong)param_3 + 0x4a) = *(byte *)((longlong)param_3 + 0x4a) | 0x10;
        *(byte *)((longlong)param_1 + 0x4a) = *(byte *)((longlong)param_1 + 0x4a) | 0x20;
        (**(code **)(*param_1 + 0x28))(param_1,param_2,0x40);
      }
      uVar4 = *(ushort *)((longlong)param_3 + 0x4a) & 0x80;
      lVar3 = FUN_14503e140(param_5 + 0x40,2);
      if (lVar3 != 0) {
        uVar4 = 0x80;
      }
      (**(code **)(*param_1 + 0x30))(param_1,param_2,uVar4);
      (**(code **)(*param_1 + 0x38))(param_1,param_2,*(ushort *)((longlong)param_3 + 0x4a) & 0xc);
    }
    param_1[6] = (longlong)param_3;
  }
  *(ushort *)(param_1 + 9) = param_6;
  param_1[4] = param_3[4];
                    /* WARNING: Could not recover jumptable at 0x000140183281. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*param_1 + 0x10))(param_1,param_2,param_5,param_6 + 1);
  return;
}

