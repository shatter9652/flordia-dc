// Recovered from game_scarlett_master.exe (GTA VI, Xbox Series X, PE32+ x64)
// Address: 1400f0530  size: 68 bytes
// Name:    FUN_1400f0530
// Subsystem: core
//
// Referenced strings (0 in this body, 0 including direct callees):
// Callees: FUN_144f7c980
//
// Generated decompilation. Formatting follows MiscRef/GTAVSRC conventions;
// identifiers are recovered, not original. See ../../../README.md.

#include "gta6decomp/rage_types.h"


void FUN_1400f0530(longlong param_1,longlong param_2)

{
  FUN_144f7c980(*(undefined8 *)(param_2 + 0xf8));
  FUN_144f7c980(*(undefined8 *)(param_2 + 0x100));
  FUN_144f7c980(*(undefined8 *)(param_2 + 0x108));
                    /* WARNING: Could not recover jumptable at 0x0001400f0571. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(param_1 + 0x10))(*(undefined8 *)(param_1 + 0x18),param_2);
  return;
}

