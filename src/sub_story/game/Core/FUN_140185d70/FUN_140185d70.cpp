// Recovered from game_scarlett_master.exe (GTA VI, Xbox Series X, PE32+ x64)
// Address: 140185d70  size: 47 bytes
// Name:    FUN_140185d70
// Subsystem: core
//
// Referenced strings (0 in this body, 0 including direct callees):
// Callees: 
//
// Generated decompilation. Formatting follows MiscRef/GTAVSRC conventions;
// identifiers are recovered, not original. See ../../../README.md.

#include "gta6decomp/rage_types.h"


undefined8 * FUN_140185d70(longlong *param_1,undefined8 *param_2)

{
  undefined8 uStack_18;
  
  (**(code **)(*param_1 + 0x28))(param_1,&uStack_18);
  *param_2 = 0;
  param_2[1] = uStack_18;
  return param_2;
}

