// Recovered from game_scarlett_master.exe (GTA VI, Xbox Series X, PE32+ x64)
// Address: 1401b4090  size: 62 bytes
// Name:    FUN_1401b4090
// Subsystem: core
//
// Referenced strings (0 in this body, 0 including direct callees):
// Callees: 
//
// Generated decompilation. Formatting follows MiscRef/GTAVSRC conventions;
// identifiers are recovered, not original. See ../../../README.md.

#include "gta6decomp/rage_types.h"


undefined8 *
FUN_1401b4090(undefined8 *param_1,undefined8 param_2,undefined4 param_3,undefined4 *param_4)

{
  func_0x0001401b40d0();
  *param_1 = &UNK_1465e60e0;
  *(undefined4 *)(param_1 + 2) = param_3;
  func_0x000144df8490((longlong)param_1 + 0x14,*param_4);
  *(undefined2 *)(param_1 + 3) = 0;
  return param_1;
}

