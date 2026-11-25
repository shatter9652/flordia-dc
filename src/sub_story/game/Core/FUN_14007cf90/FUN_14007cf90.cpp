// Recovered from game_scarlett_master.exe (GTA VI, Xbox Series X, PE32+ x64)
// Address: 14007cf90  size: 150 bytes
// Name:    FUN_14007cf90
// Subsystem: core
//
// Referenced strings (0 in this body, 0 including direct callees):
// Callees: FUN_140040760, FUN_1420cfaa0
//
// Generated decompilation. Formatting follows MiscRef/GTAVSRC conventions;
// identifiers are recovered, not original. See ../../../README.md.

#include "gta6decomp/rage_types.h"


void FUN_14007cf90(longlong *param_1,longlong param_2)

{
  longlong *plVar1;
  longlong lVar2;
  char cVar3;
  
  if (*(int *)(param_2 + 4) != 0x578) {
    return;
  }
  if ((param_1[4] == 0) || (cVar3 = FUN_140040760(param_1[4]), cVar3 == '\0')) {
    lVar2 = *(longlong *)(param_2 + 0x10);
    if ((lVar2 != 0) && (*(uint *)(lVar2 + 0x18) == (uint)*(byte *)((longlong)param_1 + 0x11))) {
      FUN_1420cfaa0(param_1,lVar2,*(undefined4 *)(param_2 + 0x18));
    }
  }
  else {
    plVar1 = (longlong *)param_1[4];
    if (*(longlong *)(param_2 + 0x10) == 0) {
      (**(code **)(*plVar1 + 0x38))();
    }
    else {
      cVar3 = (**(code **)(*plVar1 + 0x30))
                        (plVar1,*(longlong *)(param_2 + 0x10),*(undefined4 *)(param_2 + 0x18));
      if (cVar3 == '\0') {
        (**(code **)(*param_1 + 0x10))(param_1);
      }
    }
  }
  if (*(longlong **)(param_2 + 0x10) == (longlong *)0x0) {
    return;
  }
                    /* WARNING: Could not recover jumptable at 0x00014007d01a. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(**(longlong **)(param_2 + 0x10) + 0x10))();
  return;
}

