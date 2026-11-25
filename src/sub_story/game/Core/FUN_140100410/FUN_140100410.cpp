// Recovered from game_scarlett_master.exe (GTA VI, Xbox Series X, PE32+ x64)
// Address: 140100410  size: 208 bytes
// Name:    FUN_140100410
// Subsystem: core
//
// Referenced strings (0 in this body, 0 including direct callees):
// Callees: FUN_140a35080
//
// Generated decompilation. Formatting follows MiscRef/GTAVSRC conventions;
// identifiers are recovered, not original. See ../../../README.md.

#include "gta6decomp/rage_types.h"


void FUN_140100410(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                  undefined8 param_5,undefined8 param_6)

{
  undefined1 auVar1 [16];
  undefined2 uStack_138;
  undefined1 uStack_136;
  undefined1 auStack_130 [32];
  undefined1 auStack_110 [32];
  undefined2 uStack_f0;
  undefined1 auStack_e8 [32];
  undefined4 uStack_c8;
  undefined8 uStack_c0;
  undefined1 auStack_b8 [32];
  undefined1 auStack_98 [32];
  undefined1 auStack_78 [32];
  undefined1 auStack_58 [32];
  undefined2 uStack_38;
  
  auVar1._0_12_ = ZEXT812(0);
  auVar1._12_4_ = 0;
  uStack_138 = 0;
  uStack_136 = 1;
  auStack_130 = ZEXT1632(auVar1);
  uStack_f0 = 0;
  auStack_e8 = ZEXT1632(auVar1);
  uStack_c8 = 0;
  auStack_58 = ZEXT1632(auVar1);
  uStack_38 = 0;
  auStack_110 = auStack_130;
  auStack_b8 = auStack_e8;
  auStack_98 = auStack_e8;
  auStack_78 = auStack_e8;
  func_0x000144ed0120(&uStack_138,0,param_2);
  func_0x000144ed0120(&uStack_138,1,param_3);
  func_0x000144ed0120(&uStack_138,2,param_5);
  uStack_c0 = param_6;
  FUN_140a35080(param_1,&uStack_138,param_4);
  return;
}

