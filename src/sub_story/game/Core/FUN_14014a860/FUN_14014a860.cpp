// Recovered from game_scarlett_master.exe (GTA VI, Xbox Series X, PE32+ x64)
// Address: 14014a860  size: 115 bytes
// Name:    FUN_14014a860
// Subsystem: core
//
// Referenced strings (0 in this body, 0 including direct callees):
// Callees: FUN_14500e4a0
//
// Generated decompilation. Formatting follows MiscRef/GTAVSRC conventions;
// identifiers are recovered, not original. See ../../../README.md.

#include "gta6decomp/rage_types.h"


undefined4 FUN_14014a860(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  undefined4 uVar1;
  char cStack_4d;
  undefined4 uStack_4c;
  undefined8 uStack_48;
  undefined8 *puStack_40;
  char *pcStack_38;
  undefined4 *puStack_30;
  undefined8 **ppuStack_28;
  undefined *puStack_20;
  undefined *puStack_18;
  undefined *puStack_10;
  
  puStack_40 = &uStack_48;
  puStack_30 = &uStack_4c;
  pcStack_38 = &cStack_4d;
  ppuStack_28 = &puStack_40;
  uStack_4c = 0;
  cStack_4d = '\0';
  puStack_20 = &UNK_143d3ff20;
  puStack_18 = &UNK_141b7b630;
  puStack_10 = &SUB_140004380;
  uStack_48 = param_3;
  FUN_14500e4a0();
  uVar1 = 0xffffffff;
  if (cStack_4d != '\0') {
    uVar1 = uStack_4c;
  }
  return uVar1;
}

