// Recovered from game_scarlett_master.exe (GTA VI, Xbox Series X, PE32+ x64)
// Address: 1400f0730  size: 129 bytes
// Name:    FUN_1400f0730
// Subsystem: core
//
// Referenced strings (0 in this body, 0 including direct callees):
// Callees: FUN_1400f07c0, FUN_1400f0650
//
// Generated decompilation. Formatting follows MiscRef/GTAVSRC conventions;
// identifiers are recovered, not original. See ../../../README.md.

#include "gta6decomp/rage_types.h"


longlong * FUN_1400f0730(undefined8 *param_1,int param_2)

{
  longlong *plVar1;
  longlong lVar2;
  undefined8 uVar3;
  
  plVar1 = (longlong *)(*(code *)*param_1)(param_1[3],0x30);
  if (plVar1 != (longlong *)0x0) {
    lVar2 = FUN_1400f07c0(param_1,param_2);
    *plVar1 = lVar2;
    uVar3 = param_1[3];
    if (lVar2 != 0) {
      lVar2 = (*(code *)*param_1)(uVar3,param_2 * 8);
      plVar1[1] = lVar2;
      if (lVar2 != 0) {
        *(undefined4 *)(plVar1 + 3) = 0;
        *(int *)((longlong)plVar1 + 0x1c) = param_2;
        *(undefined4 *)(plVar1 + 4) = 0;
        plVar1[5] = (longlong)&UNK_14257ee50;
        return plVar1;
      }
      FUN_1400f0650(param_1,*plVar1);
      uVar3 = param_1[3];
    }
    (*(code *)param_1[2])(uVar3,plVar1);
  }
  return (longlong *)0x0;
}

