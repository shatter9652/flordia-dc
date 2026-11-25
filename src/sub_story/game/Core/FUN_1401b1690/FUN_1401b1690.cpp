// Recovered from game_scarlett_master.exe (GTA VI, Xbox Series X, PE32+ x64)
// Address: 1401b1690  size: 179 bytes
// Name:    FUN_1401b1690
// Subsystem: core
//
// Referenced strings (0 in this body, 0 including direct callees):
// Callees: FUN_1450cb0e0, FUN_1450caf90, FUN_1402e5b80
//
// Generated decompilation. Formatting follows MiscRef/GTAVSRC conventions;
// identifiers are recovered, not original. See ../../../README.md.

#include "gta6decomp/rage_types.h"


void FUN_1401b1690(longlong param_1,undefined1 param_2,undefined8 param_3)

{
  longlong lStack_58;
  longlong lStack_50;
  undefined1 uStack_48;
  undefined8 uStack_40;
  longlong *plStack_38;
  code *pcStack_30;
  code *pcStack_28;
  code *pcStack_20;
  
  lStack_58 = param_1;
  if (param_1 == 0) {
    lStack_50 = 0;
  }
  else {
    FUN_1450caf90(param_1,&lStack_58);
    lStack_50 = lStack_58;
    if (lStack_58 != 0) {
      FUN_1450caf90(lStack_58,&lStack_50);
    }
  }
  plStack_38 = &lStack_50;
  pcStack_30 = FUN_14369abe0;
  pcStack_28 = FUN_14369ac30;
  pcStack_20 = FUN_142ad7320;
  uStack_48 = param_2;
  uStack_40 = param_3;
  FUN_1402e5b80(4);
  if (lStack_50 != 0) {
    FUN_1450cb0e0(lStack_50,&lStack_50);
  }
  if (lStack_58 != 0) {
    FUN_1450cb0e0(lStack_58,&lStack_58);
  }
  return;
}

