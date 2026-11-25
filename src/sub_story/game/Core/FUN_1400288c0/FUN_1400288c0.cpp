// Recovered from game_scarlett_master.exe (GTA VI, Xbox Series X, PE32+ x64)
// Address: 1400288c0  size: 59 bytes
// Name:    FUN_1400288c0
// Subsystem: core
//
// Referenced strings (0 in this body, 0 including direct callees):
// Callees: FUN_140028900
//
// Generated decompilation. Formatting follows MiscRef/GTAVSRC conventions;
// identifiers are recovered, not original. See ../../../README.md.

#include "gta6decomp/rage_types.h"


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined8 FUN_1400288c0(undefined8 param_1,undefined8 param_2,undefined8 *param_3)

{
  undefined8 uStack_28;
  undefined8 uStack_20;
  undefined1 auStack_18 [16];
  
  auStack_18 = ZEXT416(_DAT_145fc6ed8);
  uStack_28 = *param_3;
  uStack_20 = param_3[1];
  FUN_140028900(param_2,&uStack_28,auStack_18);
  return param_2;
}

