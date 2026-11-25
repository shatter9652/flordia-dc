// Recovered from game_scarlett_master.exe (GTA VI, Xbox Series X, PE32+ x64)
// Address: 140107ca0  size: 69 bytes
// Name:    FUN_140107ca0
// Subsystem: core
//
// Referenced strings (0 in this body, 0 including direct callees):
// Callees: FUN_144faf4b0
//
// Generated decompilation. Formatting follows MiscRef/GTAVSRC conventions;
// identifiers are recovered, not original. See ../../../README.md.

#include "gta6decomp/rage_types.h"


void FUN_140107ca0(longlong param_1,undefined8 *param_2)

{
  if (param_2[4] != 0) {
    FUN_144faf4b0(param_2[4] + 0x140);
  }
  func_0x000140107cf0(param_1 + 0x230,param_2 + 5,1);
  if (param_2 != (undefined8 *)0x0) {
                    /* WARNING: Could not recover jumptable at 0x000140107d13. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (**(code **)*param_2)(param_2,1);
    return;
  }
  return;
}

