// Recovered from game_scarlett_master.exe (GTA VI, Xbox Series X, PE32+ x64)
// Address: 140192b90  size: 49 bytes
// Name:    FUN_140192b90
// Subsystem: core
//
// Referenced strings (0 in this body, 0 including direct callees):
// Callees: 
//
// Generated decompilation. Formatting follows MiscRef/GTAVSRC conventions;
// identifiers are recovered, not original. See ../../../README.md.

#include "gta6decomp/rage_types.h"


undefined8 * FUN_140192b90(longlong param_1,undefined8 *param_2)

{
  if (*(longlong *)(param_1 + 0x690) == 0) {
    func_0x000144533420(0,param_2);
  }
  else {
    *param_2 = *(undefined8 *)(*(longlong *)(param_1 + 0x690) + 0x5c);
  }
  return param_2;
}

