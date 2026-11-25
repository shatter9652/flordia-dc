// Recovered from game_scarlett_master.exe (GTA VI, Xbox Series X, PE32+ x64)
// Address: 140017a60  size: 182 bytes
// Name:    FUN_140017a60
// Subsystem: core
//
// Referenced strings (0 in this body, 0 including direct callees):
// Callees: FUN_144e32cc0, FUN_144e330e0
//
// Generated decompilation. Formatting follows MiscRef/GTAVSRC conventions;
// identifiers are recovered, not original. See ../../../README.md.

#include "gta6decomp/rage_types.h"


void FUN_140017a60(undefined8 param_1,longlong param_2)

{
  undefined8 uStack_e8;
  undefined1 *puStack_e0;
  undefined8 uStack_d8;
  undefined1 *puStack_d0;
  undefined1 auStack_c8 [32];
  undefined1 auStack_a8 [32];
  undefined8 uStack_88;
  undefined1 auStack_78 [80];
  
  puStack_d0 = auStack_78;
  uStack_d8 = 0x11;
  func_0x000144e32a20(param_1,&uStack_d8);
  puStack_e0 = auStack_c8;
  uStack_e8 = 7;
  FUN_144e330e0(param_1,&uStack_e8);
  auStack_a8 = ZEXT1232(ZEXT812(0));
  uStack_88 = 0xffffffff00000000;
  func_0x000144e329e0(param_1,auStack_a8,puStack_d0,uStack_d8._4_4_,puStack_e0,uStack_e8._4_4_);
  FUN_144e32cc0(*(undefined4 *)(param_2 + 4),*(undefined8 *)(param_2 + 8),auStack_a8);
  return;
}

