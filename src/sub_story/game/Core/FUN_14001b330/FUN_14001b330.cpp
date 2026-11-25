// Recovered from game_scarlett_master.exe (GTA VI, Xbox Series X, PE32+ x64)
// Address: 14001b330  size: 114 bytes
// Name:    FUN_14001b330
// Subsystem: core
//
// Referenced strings (0 in this body, 0 including direct callees):
// Callees: FUN_14001b3b0, FUN_14001b5d0
//
// Generated decompilation. Formatting follows MiscRef/GTAVSRC conventions;
// identifiers are recovered, not original. See ../../../README.md.

#include "gta6decomp/rage_types.h"


void FUN_14001b330(undefined8 param_1,undefined8 *param_2)

{
  undefined1 auStack_118 [16];
  undefined8 uStack_108;
  undefined8 uStack_100;
  undefined1 auStack_f8 [32];
  undefined1 auStack_d8 [32];
  undefined1 auStack_b8 [160];
  
  func_0x000144e48580(auStack_d8);
  uStack_108 = *param_2;
  uStack_100 = param_2[1];
  FUN_14001b3b0(auStack_118,auStack_d8);
  func_0x000144f13810(auStack_b8);
  func_0x00014001b440(auStack_b8);
  FUN_14001b5d0(auStack_f8,param_1,auStack_b8,auStack_118);
  return;
}

