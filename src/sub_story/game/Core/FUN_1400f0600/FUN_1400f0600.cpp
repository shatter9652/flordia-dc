// Recovered from game_scarlett_master.exe (GTA VI, Xbox Series X, PE32+ x64)
// Address: 1400f0600  size: 80 bytes
// Name:    FUN_1400f0600
// Subsystem: core
//
// Referenced strings (0 in this body, 0 including direct callees):
// Callees: FUN_1400f0650
//
// Generated decompilation. Formatting follows MiscRef/GTAVSRC conventions;
// identifiers are recovered, not original. See ../../../README.md.

#include "gta6decomp/rage_types.h"


void FUN_1400f0600(longlong param_1,longlong *param_2)

{
  if (*param_2 != 0) {
    FUN_1400f0650(param_1);
  }
  if (param_2[2] != 0) {
    (**(code **)(param_1 + 0x10))(*(undefined8 *)(param_1 + 0x18));
  }
  if (param_2[1] != 0) {
    (**(code **)(param_1 + 0x10))(*(undefined8 *)(param_1 + 0x18));
  }
                    /* WARNING: Could not recover jumptable at 0x0001400f064d. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(param_1 + 0x10))(*(undefined8 *)(param_1 + 0x18),param_2);
  return;
}

