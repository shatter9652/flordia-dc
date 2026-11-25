// Recovered from game_scarlett_master.exe (GTA VI, Xbox Series X, PE32+ x64)
// Address: 1400bf7a0  size: 38 bytes
// Name:    FUN_1400bf7a0
// Subsystem: core
//
// Referenced strings (0 in this body, 0 including direct callees):
// Callees: FUN_1452afcd0
//
// Generated decompilation. Formatting follows MiscRef/GTAVSRC conventions;
// identifiers are recovered, not original. See ../../../README.md.

#include "gta6decomp/rage_types.h"


void FUN_1400bf7a0(longlong param_1,undefined2 param_2,undefined4 param_3,undefined4 param_4)

{
  undefined2 auStack_c [2];
  undefined4 uStack_8;
  undefined4 uStack_4;
  
  auStack_c[0] = param_2;
  uStack_8 = param_3;
  uStack_4 = param_4;
  FUN_1452afcd0(param_1 + 8,auStack_c);
  return;
}

