// Recovered from game_scarlett_master.exe (GTA VI, Xbox Series X, PE32+ x64)
// Address: 14014cf50  size: 93 bytes
// Name:    FUN_14014cf50
// Subsystem: core
//
// Referenced strings (0 in this body, 0 including direct callees):
// Callees: FUN_14501ae20
//
// Generated decompilation. Formatting follows MiscRef/GTAVSRC conventions;
// identifiers are recovered, not original. See ../../../README.md.

#include "gta6decomp/rage_types.h"


bool FUN_14014cf50(undefined8 param_1,undefined8 *param_2)

{
  code *pcStack_48;
  undefined4 uStack_40;
  undefined8 uStack_38;
  undefined8 uStack_30;
  undefined8 *puStack_28;
  
  func_0x00014014cfb0(&pcStack_48);
  pcStack_48 = FUN_14501b020;
  uStack_40 = *(undefined4 *)(param_2 + 2);
  uStack_38 = *param_2;
  uStack_30 = param_2[1];
  *(undefined4 *)(param_2 + 0xc) = 0x7f7fffff;
  puStack_28 = param_2;
  FUN_14501ae20(param_1,&pcStack_48);
  return *(short *)(param_2 + 7) != -1;
}

