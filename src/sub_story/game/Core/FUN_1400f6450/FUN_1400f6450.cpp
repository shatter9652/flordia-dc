// Recovered from game_scarlett_master.exe (GTA VI, Xbox Series X, PE32+ x64)
// Address: 1400f6450  size: 138 bytes
// Name:    FUN_1400f6450
// Subsystem: core
//
// Referenced strings (0 in this body, 0 including direct callees):
// Callees: FUN_144f89200, FUN_14520bce0
//
// Generated decompilation. Formatting follows MiscRef/GTAVSRC conventions;
// identifiers are recovered, not original. See ../../../README.md.

#include "gta6decomp/rage_types.h"


void FUN_1400f6450(undefined8 *param_1)

{
  undefined4 uStack_68;
  undefined1 auStack_64 [12];
  undefined4 uStack_58;
  undefined4 uStack_54;
  undefined8 uStack_50;
  undefined8 uStack_48;
  undefined4 uStack_40;
  undefined4 uStack_3c;
  undefined1 auStack_38 [16];
  undefined8 uStack_28;
  undefined8 uStack_20;
  
  auStack_64._8_4_ = 0;
  auStack_64._0_8_ = SUB128(ZEXT812(0),4);
  uStack_58 = 0;
  uStack_50 = 0;
  uStack_48 = 0;
  uStack_3c = 0;
  uStack_68 = 0x3f800000;
  uStack_54 = 0x3f800000;
  uStack_40 = 0x3f800000;
  if (DAT_14aa576f0 == '\x01') {
    FUN_14520bce0(&uStack_68);
  }
  auStack_38._0_12_ = ZEXT812(0);
  auStack_38._12_4_ = 0;
  uStack_28 = *param_1;
  uStack_20 = param_1[1];
  FUN_144f89200(0x14aa57530);
  return;
}

