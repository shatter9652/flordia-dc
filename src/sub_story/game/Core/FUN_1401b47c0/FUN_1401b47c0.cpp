// Recovered from game_scarlett_master.exe (GTA VI, Xbox Series X, PE32+ x64)
// Address: 1401b47c0  size: 206 bytes
// Name:    FUN_1401b47c0
// Subsystem: core
//
// Referenced strings (0 in this body, 0 including direct callees):
// Callees: FUN_1401b4b60, FUN_145077f80, FUN_1401bac30
//
// Generated decompilation. Formatting follows MiscRef/GTAVSRC conventions;
// identifiers are recovered, not original. See ../../../README.md.

#include "gta6decomp/rage_types.h"


void FUN_1401b47c0(undefined8 param_1,longlong *param_2,undefined8 *param_3)

{
  undefined8 uVar1;
  int iStack_40;
  int iStack_3c;
  
  FUN_145077f80(*(undefined8 *)(*param_2 + 0x20),&iStack_3c);
  if (1 < iStack_3c + 1U) {
    FUN_1401b4b60(*(undefined8 *)(*param_2 + 0x20),&iStack_40);
    if (iStack_40 != 3) {
                    /* WARNING: Could not recover jumptable at 0x0001401b4869. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      (*(code *)(&UNK_146766eb4 + *(int *)(&UNK_146766eb4 + (ulonglong)(iStack_40 + 1) * 4)))();
      return;
    }
    uVar1 = func_0x0001401b5870();
    uVar1 = FUN_1401bac30(param_1,iStack_3c,*(undefined8 *)(param_2[3] + 0x18),*param_3,uVar1,2);
    *param_3 = uVar1;
  }
  return;
}

