// Recovered from game_scarlett_master.exe (GTA VI, Xbox Series X, PE32+ x64)
// Address: 14001b7d0  size: 107 bytes
// Name:    FUN_14001b7d0
// Subsystem: core
//
// Referenced strings (0 in this body, 0 including direct callees):
// Callees: FUN_14001b3b0
//
// Generated decompilation. Formatting follows MiscRef/GTAVSRC conventions;
// identifiers are recovered, not original. See ../../../README.md.

#include "gta6decomp/rage_types.h"


void FUN_14001b7d0(undefined8 param_1,undefined8 *param_2)

{
  undefined1 auStack_58 [16];
  undefined8 uStack_48;
  undefined8 uStack_40;
  undefined1 auStack_38 [32];
  
  func_0x000144e48580(auStack_38);
  uStack_48 = *param_2;
  uStack_40 = param_2[1];
  FUN_14001b3b0(auStack_58,auStack_38);
  func_0x00014001b840(param_1);
  return;
}

