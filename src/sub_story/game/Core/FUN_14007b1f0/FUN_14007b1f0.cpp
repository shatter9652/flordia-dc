// Recovered from game_scarlett_master.exe (GTA VI, Xbox Series X, PE32+ x64)
// Address: 14007b1f0  size: 45 bytes
// Name:    FUN_14007b1f0
// Subsystem: core
//
// Referenced strings (0 in this body, 0 including direct callees):
// Callees: FUN_14007b220
//
// Generated decompilation. Formatting follows MiscRef/GTAVSRC conventions;
// identifiers are recovered, not original. See ../../../README.md.

#include "gta6decomp/rage_types.h"


short * FUN_14007b1f0(short *param_1,undefined4 param_2,undefined8 param_3,undefined8 param_4)

{
  short *in_RAX;
  undefined8 unaff_RSI;
  
  if (*param_1 != (short)param_2) {
    FUN_14007b220();
    FUN_144ddb110(param_1,param_2,param_3,param_4,unaff_RSI);
    return param_1;
  }
  return in_RAX;
}

