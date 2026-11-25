// Recovered from game_scarlett_master.exe (GTA VI, Xbox Series X, PE32+ x64)
// Address: 140021a80  size: 87 bytes
// Name:    FUN_140021a80
// Subsystem: core
//
// Referenced strings (0 in this body, 0 including direct callees):
// Callees: FUN_144db6f00
//
// Generated decompilation. Formatting follows MiscRef/GTAVSRC conventions;
// identifiers are recovered, not original. See ../../../README.md.

#include "gta6decomp/rage_types.h"


void FUN_140021a80(longlong param_1,undefined8 *param_2,undefined8 *param_3)

{
  undefined8 uStack_38;
  undefined8 uStack_30;
  
  FUN_144db6f00(*(undefined8 *)(param_1 + 0x20),&uStack_38,*(undefined4 *)(param_1 + 0x50));
  *param_3 = uStack_38;
  param_3[1] = uStack_30;
  FUN_144db6f00(*(undefined8 *)(param_1 + 0x20),&uStack_38,*(undefined4 *)(param_1 + 0x4c));
  *param_2 = uStack_38;
  param_2[1] = uStack_30;
  return;
}

