// Recovered from game_scarlett_master.exe (GTA VI, Xbox Series X, PE32+ x64)
// Address: 140182fa0  size: 51 bytes
// Name:    FUN_140182fa0
// Subsystem: core
//
// Referenced strings (0 in this body, 0 including direct callees):
// Callees: 
//
// Generated decompilation. Formatting follows MiscRef/GTAVSRC conventions;
// identifiers are recovered, not original. See ../../../README.md.

#include "gta6decomp/rage_types.h"


undefined8 * FUN_140182fa0(undefined8 *param_1,undefined8 param_2,char param_3)

{
  longlong *plVar1;
  
  plVar1 = (longlong *)0x149e30100;
  if (param_3 != '\0') {
    plVar1 = (longlong *)0x149e30110;
  }
  *param_1 = plVar1;
  param_1[1] = param_2;
  (**(code **)(*plVar1 + 8))();
  return param_1;
}

