// Recovered from game_scarlett_master.exe (GTA VI, Xbox Series X, PE32+ x64)
// Address: 140181070  size: 112 bytes
// Name:    FUN_140181070
// Subsystem: core
//
// Referenced strings (0 in this body, 0 including direct callees):
// Callees: FUN_1401810e0
//
// Generated decompilation. Formatting follows MiscRef/GTAVSRC conventions;
// identifiers are recovered, not original. See ../../../README.md.

#include "gta6decomp/rage_types.h"


void FUN_140181070(longlong param_1,undefined8 param_2,undefined8 param_3)

{
  longlong *plVar1;
  undefined1 auStack_28 [16];
  
  plVar1 = *(longlong **)(param_1 + 0x40);
  if (plVar1 == (longlong *)0x0) {
    plVar1 = *(longlong **)(param_1 + 0x38);
    if (plVar1 != (longlong *)0x0) {
      if (plVar1[1] != 0) {
        FUN_1401810e0(plVar1[1],param_3,0);
      }
                    /* WARNING: Could not recover jumptable at 0x000140181118. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      (**(code **)(*plVar1 + 0x20))(plVar1,param_3,0);
      return;
    }
  }
  else {
    auStack_28._0_12_ = ZEXT812(0);
    auStack_28._12_4_ = 0;
    (**(code **)(*plVar1 + 0x50))(plVar1,param_2,auStack_28,0);
    if (*(longlong *)(param_1 + 0x38) != 0) {
      FUN_1401810e0(*(longlong *)(param_1 + 0x38),param_3,auStack_28);
    }
  }
  return;
}

