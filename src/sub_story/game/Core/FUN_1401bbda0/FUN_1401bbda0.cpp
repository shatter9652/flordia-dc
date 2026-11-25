// Recovered from game_scarlett_master.exe (GTA VI, Xbox Series X, PE32+ x64)
// Address: 1401bbda0  size: 78 bytes
// Name:    FUN_1401bbda0
// Subsystem: core
//
// Referenced strings (0 in this body, 0 including direct callees):
// Callees: 
//
// Generated decompilation. Formatting follows MiscRef/GTAVSRC conventions;
// identifiers are recovered, not original. See ../../../README.md.

#include "gta6decomp/rage_types.h"


void FUN_1401bbda0(longlong *param_1,undefined4 param_2,longlong *param_3)

{
  longlong lVar1;
  
  lVar1 = *param_3;
  *param_1 = lVar1;
  if (lVar1 != 0) {
    LOCK();
    *(int *)(lVar1 + 0x10) = *(int *)(lVar1 + 0x10) + 1;
    UNLOCK();
  }
  *(int *)(param_1 + 1) = (int)param_3[1];
  param_1[2] = (longlong)&UNK_146681330;
  func_0x000145f40560(param_1 + 4,param_3 + 4,0x84);
  *(undefined4 *)(param_1 + 1) = param_2;
  return;
}

