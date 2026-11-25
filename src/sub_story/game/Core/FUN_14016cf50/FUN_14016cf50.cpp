// Recovered from game_scarlett_master.exe (GTA VI, Xbox Series X, PE32+ x64)
// Address: 14016cf50  size: 207 bytes
// Name:    FUN_14016cf50
// Subsystem: core
//
// Referenced strings (0 in this body, 0 including direct callees):
// Callees: 
//
// Generated decompilation. Formatting follows MiscRef/GTAVSRC conventions;
// identifiers are recovered, not original. See ../../../README.md.

#include "gta6decomp/rage_types.h"


void FUN_14016cf50(undefined8 param_1,undefined4 param_2,longlong param_3,
                  code *UNRECOVERED_JUMPTABLE_00,longlong *param_5,undefined4 param_6,
                  undefined4 param_7)

{
  longlong lVar1;
  longlong lVar2;
  
  lVar1 = func_0x000140e07b30(param_1,param_6);
  if (lVar1 == 0) {
    lVar2 = func_0x0001440ab950(param_1,param_7);
    param_3 = *param_5;
    lVar1 = 0;
    if (*(longlong *)(lVar2 + 0x18) != 1) {
      lVar1 = *(longlong *)(lVar2 + 0x18) + 0x18 + lVar2;
    }
    UNRECOVERED_JUMPTABLE_00 = (code *)param_5[1];
  }
  else {
    lVar2 = 0;
    if (*(longlong *)(lVar1 + 0x18) != 1) {
      lVar2 = *(longlong *)(lVar1 + 0x18) + 0x18 + lVar1;
    }
    lVar1 = func_0x000144d9e2e0(lVar2,param_2);
    if (lVar1 == 0) {
      param_3 = *param_5;
      UNRECOVERED_JUMPTABLE_00 = (code *)param_5[1];
      lVar1 = lVar2;
    }
  }
  if (param_3 == 0) {
                    /* WARNING: Could not recover jumptable at 0x00014016d01c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*UNRECOVERED_JUMPTABLE_00)(lVar1);
    return;
  }
                    /* WARNING: Could not recover jumptable at 0x00014016d002. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*UNRECOVERED_JUMPTABLE_00)(param_3,lVar1);
  return;
}

