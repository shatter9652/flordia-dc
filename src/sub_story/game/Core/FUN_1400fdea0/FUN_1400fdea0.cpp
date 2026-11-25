// Recovered from game_scarlett_master.exe (GTA VI, Xbox Series X, PE32+ x64)
// Address: 1400fdea0  size: 48 bytes
// Name:    FUN_1400fdea0
// Subsystem: core
//
// Referenced strings (0 in this body, 0 including direct callees):
// Callees: 
//
// Generated decompilation. Formatting follows MiscRef/GTAVSRC conventions;
// identifiers are recovered, not original. See ../../../README.md.

#include "gta6decomp/rage_types.h"


void FUN_1400fdea0(longlong param_1)

{
  *(undefined1 *)(*(longlong *)(param_1 + 0x1a0) + 0x18) = 0;
  (**(code **)(*(longlong *)(param_1 + 0x1c0) + 8))();
                    /* WARNING: Could not recover jumptable at 0x0001400fdecc. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*(longlong *)(param_1 + 0x1c0) + 0x10))(param_1);
  return;
}

