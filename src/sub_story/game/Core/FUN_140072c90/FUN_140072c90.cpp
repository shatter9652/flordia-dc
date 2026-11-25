// Recovered from game_scarlett_master.exe (GTA VI, Xbox Series X, PE32+ x64)
// Address: 140072c90  size: 93 bytes
// Name:    FUN_140072c90
// Subsystem: core
//
// Referenced strings (0 in this body, 0 including direct callees):
// Callees: FUN_140073030
//
// Generated decompilation. Formatting follows MiscRef/GTAVSRC conventions;
// identifiers are recovered, not original. See ../../../README.md.

#include "gta6decomp/rage_types.h"


void FUN_140072c90(undefined8 param_1,undefined8 *param_2,undefined8 param_3)

{
  undefined8 uStack_48;
  undefined8 uStack_40;
  undefined1 auStack_38 [40];
  
  uStack_48 = *param_2;
  uStack_40 = param_2[1];
  func_0x000144dc3790(&uStack_48,auStack_38);
  FUN_140073030(param_1,auStack_38,param_3,0,0,0xffffffff);
  return;
}

