// Recovered from game_scarlett_master.exe (GTA VI, Xbox Series X, PE32+ x64)
// Address: 140005c50  size: 222 bytes
// Name:    FUN_140005c50
// Subsystem: core
//
// Referenced strings (0 in this body, 0 including direct callees):
// Callees: FUN_14113fef0
//
// Generated decompilation. Formatting follows MiscRef/GTAVSRC conventions;
// identifiers are recovered, not original. See ../../../README.md.

#include "gta6decomp/rage_types.h"


void FUN_140005c50(undefined4 param_1,undefined1 *param_2,undefined8 *param_3,undefined8 *param_4)

{
  undefined8 uStack_c0;
  undefined *apuStack_b8 [8];
  undefined4 uStack_78;
  undefined1 uStack_74;
  undefined8 uStack_70;
  undefined8 uStack_68;
  undefined1 auStack_60 [16];
  undefined1 auStack_50 [16];
  undefined1 auStack_40 [16];
  undefined1 uStack_30;
  undefined1 uStack_2f;
  undefined1 uStack_2e;
  
  uStack_c0 = 0;
  FUN_14113fef0(apuStack_b8);
  apuStack_b8[0] = &UNK_1462042c0;
  if (param_2 == (undefined1 *)0x0) {
    uStack_74 = 0;
  }
  else {
    uStack_74 = *param_2;
  }
  if (param_3 == (undefined8 *)0x0) {
    uStack_70 = 0;
  }
  else {
    uStack_70 = *param_3;
  }
  if (param_4 == (undefined8 *)0x0) {
    uStack_68 = 0;
  }
  else {
    uStack_68 = *param_4;
  }
  uStack_30 = param_2 != (undefined1 *)0x0;
  uStack_2f = param_3 != (undefined8 *)0x0;
  uStack_2e = param_4 != (undefined8 *)0x0;
  auStack_60._12_4_ = 0;
  auStack_60._0_12_ = ZEXT812(0);
  auStack_50._12_4_ = 0;
  auStack_50._0_12_ = ZEXT812(0);
  auStack_40 = (undefined1  [16])0x0;
  uStack_78 = param_1;
  func_0x000144dac8f0(auStack_60,&uStack_c0,0x30);
  apuStack_b8[0] = &UNK_1462043a0;
  func_0x000140bb9650(apuStack_b8);
  return;
}

