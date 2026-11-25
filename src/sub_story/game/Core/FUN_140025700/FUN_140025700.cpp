// Recovered from game_scarlett_master.exe (GTA VI, Xbox Series X, PE32+ x64)
// Address: 140025700  size: 273 bytes
// Name:    FUN_140025700
// Subsystem: core
//
// Referenced strings (0 in this body, 0 including direct callees):
// Callees: FUN_144e1c1a0, FUN_144dfdb00
//
// Generated decompilation. Formatting follows MiscRef/GTAVSRC conventions;
// identifiers are recovered, not original. See ../../../README.md.

#include "gta6decomp/rage_types.h"


void FUN_140025700(undefined8 param_1,undefined8 *param_2,undefined8 *param_3,undefined8 *param_4,
                  undefined8 *param_5,undefined8 *param_6,undefined8 *param_7,undefined8 param_8,
                  undefined1 param_9)

{
  undefined1 auStack_d8 [16];
  undefined8 uStack_c8;
  undefined8 uStack_c0;
  undefined8 uStack_b8;
  undefined8 uStack_b0;
  undefined8 uStack_a8;
  undefined8 uStack_a0;
  undefined8 uStack_98;
  undefined8 uStack_90;
  undefined8 uStack_88;
  undefined8 uStack_80;
  undefined1 auStack_78 [16];
  undefined8 uStack_68;
  undefined8 uStack_60;
  undefined8 uStack_58;
  undefined8 uStack_50;
  undefined1 auStack_48 [24];
  
  uStack_58 = *param_7;
  uStack_50 = param_7[1];
  uStack_68 = *param_5;
  uStack_60 = param_5[1];
  FUN_144dfdb00(auStack_78,auStack_48,&uStack_68,&uStack_58,param_8,param_9);
  uStack_c8 = *param_6;
  uStack_c0 = param_6[1];
  uStack_b8 = *param_4;
  uStack_b0 = param_4[1];
  uStack_a8 = *param_3;
  uStack_a0 = param_3[1];
  uStack_88 = *param_2;
  uStack_80 = param_2[1];
  uStack_98 = param_2[2];
  uStack_90 = param_2[3];
  auStack_d8 = ZEXT816(0) << 0x20;
  FUN_144e1c1a0(param_1,&uStack_88,&uStack_98,&uStack_a8,&uStack_b8,&uStack_c8,auStack_78,auStack_d8
               );
  return;
}

