// Recovered from game_scarlett_master.exe (GTA VI, Xbox Series X, PE32+ x64)
// Address: 140186600  size: 56 bytes
// Name:    FUN_140186600
// Subsystem: core
//
// Referenced strings (0 in this body, 0 including direct callees):
// Callees: 
//
// Generated decompilation. Formatting follows MiscRef/GTAVSRC conventions;
// identifiers are recovered, not original. See ../../../README.md.

#include "gta6decomp/rage_types.h"


undefined8 * FUN_140186600(undefined8 *param_1,char param_2)

{
  longlong *plVar1;
  
  plVar1 = (longlong *)0x149e30358;
  if (param_2 != '\0') {
    plVar1 = (longlong *)0x149e30368;
  }
  *param_1 = plVar1;
  param_1[1] = 0;
  (**(code **)(*plVar1 + 8))(plVar1,0);
  return param_1;
}

