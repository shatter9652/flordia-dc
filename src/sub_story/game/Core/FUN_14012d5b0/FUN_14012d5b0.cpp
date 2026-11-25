// Recovered from game_scarlett_master.exe (GTA VI, Xbox Series X, PE32+ x64)
// Address: 14012d5b0  size: 116 bytes
// Name:    FUN_14012d5b0
// Subsystem: core
//
// Referenced strings (0 in this body, 0 including direct callees):
// Callees: FUN_14012d660
//
// Generated decompilation. Formatting follows MiscRef/GTAVSRC conventions;
// identifiers are recovered, not original. See ../../../README.md.

#include "gta6decomp/rage_types.h"


void FUN_14012d5b0(longlong param_1,int *param_2)

{
  int iVar1;
  int aiStack_28 [2];
  
  if (param_2 != (int *)0x0) {
    iVar1 = *param_2;
    if (*(int **)(param_1 + 0x48) == (int *)0x0) {
      func_0x0001406f8830(aiStack_28);
    }
    else {
      aiStack_28[0] = **(int **)(param_1 + 0x48);
    }
    if (aiStack_28[0] == iVar1) {
      FUN_14012d660();
    }
    else if ((*(int **)(param_1 + 0x58) == (int *)0x0) || (**(int **)(param_1 + 0x58) != iVar1)) {
      FUN_14012d660();
      *(int **)(param_1 + 0x58) = param_2;
      *(longlong *)(param_2 + 8) = param_1;
      *(undefined1 *)(param_1 + 0x2d) = 0;
    }
  }
  return;
}

