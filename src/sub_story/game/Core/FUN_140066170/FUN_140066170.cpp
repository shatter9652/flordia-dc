// Recovered from game_scarlett_master.exe (GTA VI, Xbox Series X, PE32+ x64)
// Address: 140066170  size: 111 bytes
// Name:    FUN_140066170
// Subsystem: core
//
// Referenced strings (0 in this body, 0 including direct callees):
// Callees: FUN_1417cafc0, FUN_141c17f00, FUN_140644920, FUN_140644b10
//
// Generated decompilation. Formatting follows MiscRef/GTAVSRC conventions;
// identifiers are recovered, not original. See ../../../README.md.

#include "gta6decomp/rage_types.h"


undefined8 * FUN_140066170(undefined8 *param_1,undefined8 param_2,undefined4 param_3)

{
  undefined1 auStack_28 [8];
  
  FUN_1417cafc0();
  *param_1 = &UNK_14655efe0;
  *(undefined4 *)(param_1 + 0x6f) = param_3;
  param_1[0x71] = 0;
  FUN_140644b10(auStack_28,param_3);
  param_1[0x67] = FUN_143ef4050;
  FUN_141c17f00(param_1,param_2);
  FUN_140644920(auStack_28);
  return param_1;
}

