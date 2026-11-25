// Recovered from game_scarlett_master.exe (GTA VI, Xbox Series X, PE32+ x64)
// Address: 140048390  size: 97 bytes
// Name:    FUN_140048390
// Subsystem: core
//
// Referenced strings (0 in this body, 0 including direct callees):
// Callees: 
//
// Generated decompilation. Formatting follows MiscRef/GTAVSRC conventions;
// identifiers are recovered, not original. See ../../../README.md.

#include "gta6decomp/rage_types.h"


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_140048390(longlong param_1)

{
  undefined4 uStack_48;
  undefined4 uStack_44;
  undefined8 uStack_40;
  undefined1 auStack_38 [16];
  undefined1 auStack_28 [16];
  undefined1 auStack_18 [16];
  
  auStack_18 = (undefined1  [16])0x0;
  auStack_38._12_4_ = 0;
  auStack_38._0_12_ = ZEXT812(0);
  auStack_28 = (undefined1  [16])0x0;
  uStack_48 = 5;
  uStack_44 = *(undefined4 *)(param_1 + 0x5b58);
  uStack_40 = 0x400000000;
  func_0x000145f40140(_DAT_149ae8960,&uStack_48,0);
  func_0x000144eaa940(*(undefined4 *)(param_1 + 0x5b58),2);
  return;
}

