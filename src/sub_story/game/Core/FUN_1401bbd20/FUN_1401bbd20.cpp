// Recovered from game_scarlett_master.exe (GTA VI, Xbox Series X, PE32+ x64)
// Address: 1401bbd20  size: 65 bytes
// Name:    FUN_1401bbd20
// Subsystem: core
//
// Referenced strings (0 in this body, 0 including direct callees):
// Callees: 
//
// Generated decompilation. Formatting follows MiscRef/GTAVSRC conventions;
// identifiers are recovered, not original. See ../../../README.md.

#include "gta6decomp/rage_types.h"


longlong * FUN_1401bbd20(longlong *param_1,longlong param_2,longlong param_3)

{
  *param_1 = param_2;
  if (param_2 != 0) {
    LOCK();
    *(int *)(param_2 + 0x10) = *(int *)(param_2 + 0x10) + 1;
    UNLOCK();
  }
  param_1[2] = (longlong)&UNK_146681330;
  func_0x000145f40560(param_1 + 4,param_3 + 0x10,0x84);
  return param_1;
}

