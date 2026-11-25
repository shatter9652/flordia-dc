// Recovered from game_scarlett_master.exe (GTA VI, Xbox Series X, PE32+ x64)
// Address: 14006e6b0  size: 142 bytes
// Name:    FUN_14006e6b0
// Subsystem: core
//
// Referenced strings (0 in this body, 0 including direct callees):
// Callees: 
//
// Generated decompilation. Formatting follows MiscRef/GTAVSRC conventions;
// identifiers are recovered, not original. See ../../../README.md.

#include "gta6decomp/rage_types.h"


int * FUN_14006e6b0(longlong param_1,int param_2)

{
  int *piVar1;
  int *piVar2;
  longlong lVar3;
  
  if ((longlong)*(int *)(param_1 + 0xd0) != 0) {
    lVar3 = (longlong)*(int *)(param_1 + 0xd0) << 3;
    piVar1 = (int *)(param_1 + 0x10);
    do {
      if (*piVar1 == param_2) {
        return piVar1;
      }
      piVar1 = piVar1 + 2;
      lVar3 = lVar3 + -8;
    } while (lVar3 != 0);
  }
  if ((((*(int *)(param_1 + 0x398) == -1) || (lVar3 = func_0x00014006e770(), lVar3 == 0)) ||
      (piVar1 = (int *)func_0x00014006e740(*(undefined2 *)(lVar3 + 0xa2),param_2),
      piVar1 == (int *)0x0)) &&
     (((*(longlong *)(param_1 + 0x388) == 0 ||
       (piVar1 = (int *)func_0x000144863340(*(longlong *)(param_1 + 0x388),param_2),
       piVar1 == (int *)0x0)) &&
      (piVar2 = (int *)func_0x00014006e7c0(param_2), piVar1 = (int *)(param_1 + 0x10),
      piVar2 != (int *)0x0)))) {
    piVar1 = piVar2;
  }
  return piVar1;
}

