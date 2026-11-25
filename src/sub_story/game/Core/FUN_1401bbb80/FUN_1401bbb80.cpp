// Recovered from game_scarlett_master.exe (GTA VI, Xbox Series X, PE32+ x64)
// Address: 1401bbb80  size: 117 bytes
// Name:    FUN_1401bbb80
// Subsystem: core
//
// Referenced strings (0 in this body, 0 including direct callees):
// Callees: FUN_1401bbc00, FUN_14438e9d0
//
// Generated decompilation. Formatting follows MiscRef/GTAVSRC conventions;
// identifiers are recovered, not original. See ../../../README.md.

#include "gta6decomp/rage_types.h"


void FUN_1401bbb80(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined4 param_4,
                  char param_5)

{
  undefined8 uStack_40;
  undefined8 *puStack_38;
  undefined *puStack_30;
  undefined *puStack_28;
  undefined *puStack_20;
  
  if (param_5 != '\0') {
    param_2 = FUN_14438e9d0(param_1,param_3,param_2);
  }
  puStack_38 = &uStack_40;
  puStack_30 = &UNK_14438ea40;
  puStack_28 = &UNK_1401167b0;
  puStack_20 = &SUB_140004380;
  uStack_40 = param_1;
  FUN_1401bbc00(param_2,param_3,param_4);
  return;
}

