// Recovered from game_scarlett_master.exe (GTA VI, Xbox Series X, PE32+ x64)
// Address: 1400b8610  size: 76 bytes
// Name:    FUN_1400b8610
// Subsystem: core
//
// Referenced strings (0 in this body, 0 including direct callees):
// Callees: 
//
// Generated decompilation. Formatting follows MiscRef/GTAVSRC conventions;
// identifiers are recovered, not original. See ../../../README.md.

#include "gta6decomp/rage_types.h"


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined8 * FUN_1400b8610(undefined8 *param_1,undefined8 param_2)

{
  undefined8 uVar1;
  undefined8 uVar2;
  
  func_0x000144f429c0(param_1,0x13,param_2,0);
  uVar2 = _DAT_14616bf00;
  uVar1 = _DAT_14615a918;
  *param_1 = &UNK_146500a50;
  param_1[4] = uVar1;
  param_1[5] = uVar1;
  param_1[6] = uVar2;
  *(undefined4 *)(param_1 + 7) = 0x42c80000;
  return param_1;
}

