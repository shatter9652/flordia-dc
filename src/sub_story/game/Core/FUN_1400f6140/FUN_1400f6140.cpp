// Recovered from game_scarlett_master.exe (GTA VI, Xbox Series X, PE32+ x64)
// Address: 1400f6140  size: 78 bytes
// Name:    FUN_1400f6140
// Subsystem: core
//
// Referenced strings (0 in this body, 0 including direct callees):
// Callees: 
//
// Generated decompilation. Formatting follows MiscRef/GTAVSRC conventions;
// identifiers are recovered, not original. See ../../../README.md.

#include "gta6decomp/rage_types.h"


void FUN_1400f6140(longlong param_1,undefined8 param_2,float param_3,float param_4)

{
  func_0x0001400f6190(param_1,param_2,0);
  *(float *)(param_1 + 0x324) = (*(float *)(param_1 + 0xb0) - param_3) / param_4;
  return;
}

