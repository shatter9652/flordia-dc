// Recovered from game_scarlett_master.exe (GTA VI, Xbox Series X, PE32+ x64)
// Address: 140027d80  size: 114 bytes
// Name:    FUN_140027d80
// Subsystem: core
//
// Referenced strings (0 in this body, 0 including direct callees):
// Callees: FUN_140027e80
//
// Generated decompilation. Formatting follows MiscRef/GTAVSRC conventions;
// identifiers are recovered, not original. See ../../../README.md.

#include "gta6decomp/rage_types.h"


void FUN_140027d80(undefined8 param_1,undefined4 param_2,undefined8 param_3,undefined8 *param_4)

{
  undefined4 uStack_54;
  undefined8 uStack_50;
  undefined8 *puStack_48;
  undefined8 *puStack_40;
  code *pcStack_38;
  undefined *puStack_30;
  undefined *puStack_28;
  
  puStack_40 = &uStack_50;
  pcStack_38 = FUN_144388820;
  puStack_30 = &UNK_1408d04c0;
  puStack_28 = &SUB_140004380;
  uStack_50 = param_3;
  puStack_48 = param_4;
  func_0x0001401a1510(*param_4,*(undefined4 *)(param_4 + 1),&uStack_54);
  FUN_140027e80(param_1,param_2,uStack_54,&puStack_40);
  return;
}

