// Recovered from game_scarlett_master.exe (GTA VI, Xbox Series X, PE32+ x64)
// Address: 14014cc50  size: 53 bytes
// Name:    FUN_14014cc50
// Subsystem: core
//
// Referenced strings (0 in this body, 0 including direct callees):
// Callees: FUN_145206a40
//
// Generated decompilation. Formatting follows MiscRef/GTAVSRC conventions;
// identifiers are recovered, not original. See ../../../README.md.

#include "gta6decomp/rage_types.h"


bool FUN_14014cc50(undefined8 *param_1,undefined4 *param_2)

{
  undefined4 uStack_2c;
  undefined8 uStack_28;
  undefined8 uStack_20;
  
  uStack_28 = *param_1;
  uStack_20 = param_1[1];
  FUN_145206a40(&uStack_2c);
  *param_2 = uStack_2c;
  return (short)uStack_2c != -1;
}

