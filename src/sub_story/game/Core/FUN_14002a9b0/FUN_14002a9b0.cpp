// Recovered from game_scarlett_master.exe (GTA VI, Xbox Series X, PE32+ x64)
// Address: 14002a9b0  size: 122 bytes
// Name:    FUN_14002a9b0
// Subsystem: core
//
// Referenced strings (0 in this body, 0 including direct callees):
// Callees: FUN_144db6f00, FUN_14002aae0
//
// Generated decompilation. Formatting follows MiscRef/GTAVSRC conventions;
// identifiers are recovered, not original. See ../../../README.md.

#include "gta6decomp/rage_types.h"


void FUN_14002a9b0(undefined8 param_1,undefined8 param_2,undefined4 param_3,undefined4 param_4,
                  undefined8 *param_5,undefined4 param_6)

{
  undefined1 auStack_58 [16];
  undefined8 uStack_48;
  undefined8 uStack_40;
  
  FUN_144db6f00(param_2,auStack_58,param_4);
  uStack_48 = *param_5;
  uStack_40 = param_5[1];
  FUN_14002aae0(param_1,param_2,param_3,auStack_58,&uStack_48,param_6);
  return;
}

