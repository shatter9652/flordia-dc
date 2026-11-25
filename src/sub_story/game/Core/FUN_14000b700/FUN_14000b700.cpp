// Recovered from game_scarlett_master.exe (GTA VI, Xbox Series X, PE32+ x64)
// Address: 14000b700  size: 71 bytes
// Name:    FUN_14000b700
// Subsystem: core
//
// Referenced strings (0 in this body, 0 including direct callees):
// Callees: FUN_144defb90
//
// Generated decompilation. Formatting follows MiscRef/GTAVSRC conventions;
// identifiers are recovered, not original. See ../../../README.md.

#include "gta6decomp/rage_types.h"


void FUN_14000b700(undefined8 param_1,longlong param_2)

{
  undefined8 uStack_48;
  undefined8 uStack_40;
  undefined8 uStack_38;
  undefined8 uStack_30;
  undefined8 uStack_28;
  undefined8 uStack_20;
  
  uStack_38 = *(undefined8 *)(param_2 + 0x70);
  uStack_30 = *(undefined8 *)(param_2 + 0x78);
  func_0x000144dc3790(&uStack_38,&uStack_28);
  uStack_48 = uStack_28;
  uStack_40 = uStack_20;
  FUN_144defb90(param_1,&uStack_48,2);
  return;
}

