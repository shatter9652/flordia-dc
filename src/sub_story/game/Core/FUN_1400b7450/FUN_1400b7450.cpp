// Recovered from game_scarlett_master.exe (GTA VI, Xbox Series X, PE32+ x64)
// Address: 1400b7450  size: 57 bytes
// Name:    FUN_1400b7450
// Subsystem: core
//
// Referenced strings (0 in this body, 0 including direct callees):
// Callees: 
//
// Generated decompilation. Formatting follows MiscRef/GTAVSRC conventions;
// identifiers are recovered, not original. See ../../../README.md.

#include "gta6decomp/rage_types.h"


void FUN_1400b7450(longlong *param_1,undefined8 param_2,char param_3)

{
  func_0x0001400b7490();
  if ((param_3 != '\0') && ((*(byte *)(param_1 + 0x16) & 0x10) != 0)) {
                    /* WARNING: Could not recover jumptable at 0x0001400b747a. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (**(code **)(*param_1 + 0x2e0))(param_1);
    return;
  }
  return;
}

