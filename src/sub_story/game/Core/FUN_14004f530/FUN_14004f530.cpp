// Recovered from game_scarlett_master.exe (GTA VI, Xbox Series X, PE32+ x64)
// Address: 14004f530  size: 84 bytes
// Name:    FUN_14004f530
// Subsystem: core
//
// Referenced strings (0 in this body, 0 including direct callees):
// Callees: FUN_144eadd50
//
// Generated decompilation. Formatting follows MiscRef/GTAVSRC conventions;
// identifiers are recovered, not original. See ../../../README.md.

#include "gta6decomp/rage_types.h"


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_14004f530(longlong param_1)

{
  undefined1 auStack_18 [16];
  
  auStack_18._4_4_ = _DAT_145fc6f70;
  auStack_18._0_4_ = _DAT_145fc6f70;
  auStack_18._8_4_ = _DAT_145fc6f70;
  auStack_18._12_4_ = _DAT_145fc6f70;
  FUN_144eadd50(param_1 + 0xe0,auStack_18,0,0);
  *(undefined1 *)(param_1 + 0x110) = 0;
  *(undefined2 *)(param_1 + 0x168) = 0;
  *(undefined8 *)(param_1 + 0x160) = 0;
  *(undefined1 *)(param_1 + 0x16a) = 1;
  return;
}

