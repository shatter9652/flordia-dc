// Recovered from game_scarlett_master.exe (GTA VI, Xbox Series X, PE32+ x64)
// Address: 140084cc0  size: 165 bytes
// Name:    FUN_140084cc0
// Subsystem: core
//
// Referenced strings (0 in this body, 0 including direct callees):
// Callees: FUN_144ff6bf0, FUN_140a914d0, FUN_144efb600
//
// Generated decompilation. Formatting follows MiscRef/GTAVSRC conventions;
// identifiers are recovered, not original. See ../../../README.md.

#include "gta6decomp/rage_types.h"


void FUN_140084cc0(undefined8 param_1,undefined8 param_2)

{
  undefined *puStack_d8;
  undefined4 uStack_d0;
  undefined1 uStack_cc;
  undefined1 auStack_88 [16];
  undefined8 uStack_78;
  undefined1 uStack_70;
  undefined1 auStack_6f [8];
  undefined1 auStack_67 [59];
  undefined1 uStack_2c;
  undefined2 uStack_2a;
  
  puStack_d8 = &UNK_1466c8688;
  uStack_d0 = 0;
  uStack_cc = 0;
  FUN_144ff6bf0();
  FUN_144efb600(&puStack_d8,0);
  auStack_88._0_12_ = ZEXT812(0);
  auStack_88._12_4_ = 0;
  puStack_d8 = &UNK_1466c8690;
  uStack_70 = 0;
  uStack_78 = param_1;
  func_0x000144f00f10(auStack_6f);
  func_0x000144f00f10(auStack_67);
  uStack_2c = 0;
  uStack_2a = 0;
  FUN_140a914d0(&puStack_d8,param_2,1);
  return;
}

