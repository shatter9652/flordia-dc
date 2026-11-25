// Recovered from game_scarlett_master.exe (GTA VI, Xbox Series X, PE32+ x64)
// Address: 140128350  size: 97 bytes
// Name:    FUN_140128350
// Subsystem: core
//
// Referenced strings (0 in this body, 0 including direct callees):
// Callees: FUN_1453ffbd0
//
// Generated decompilation. Formatting follows MiscRef/GTAVSRC conventions;
// identifiers are recovered, not original. See ../../../README.md.

#include "gta6decomp/rage_types.h"


undefined8 *
FUN_140128350(undefined8 *param_1,undefined4 param_2,undefined4 param_3,undefined4 param_4)

{
  FUN_1453ffbd0();
  *(undefined4 *)(param_1 + 2) = 0x29e;
  *param_1 = &UNK_146249eb0;
  *(undefined4 *)(param_1 + 0x14) = param_2;
  *(undefined4 *)((longlong)param_1 + 0xa4) = param_3;
  *(undefined4 *)(param_1 + 0x15) = param_4;
  return param_1;
}

