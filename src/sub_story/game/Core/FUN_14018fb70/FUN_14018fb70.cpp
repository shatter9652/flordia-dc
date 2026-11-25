// Recovered from game_scarlett_master.exe (GTA VI, Xbox Series X, PE32+ x64)
// Address: 14018fb70  size: 126 bytes
// Name:    FUN_14018fb70
// Subsystem: core
//
// Referenced strings (0 in this body, 0 including direct callees):
// Callees: FUN_1452c84d0, FUN_142b7cd50
//
// Generated decompilation. Formatting follows MiscRef/GTAVSRC conventions;
// identifiers are recovered, not original. See ../../../README.md.

#include "gta6decomp/rage_types.h"


void FUN_14018fb70(longlong param_1,undefined8 param_2,undefined8 param_3,undefined4 param_4)

{
  undefined4 uStack_5c;
  undefined8 uStack_58;
  undefined4 *puStack_50;
  undefined8 uStack_48;
  undefined8 *puStack_40;
  undefined4 **ppuStack_38;
  undefined *puStack_30;
  undefined *puStack_28;
  undefined *puStack_20;
  
  puStack_50 = &uStack_5c;
  puStack_40 = &uStack_58;
  ppuStack_38 = &puStack_50;
  uStack_58 = 0;
  puStack_30 = &UNK_142b7cd80;
  puStack_28 = &UNK_141b7b630;
  puStack_20 = &SUB_140004380;
  uStack_5c = param_4;
  uStack_48 = param_3;
  FUN_142b7cd50(param_3);
  FUN_1452c84d0(*(undefined8 *)(param_1 + 0x10),*(undefined8 *)(param_1 + 0x18),param_2,uStack_58);
  return;
}

