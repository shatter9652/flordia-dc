// Recovered from game_scarlett_master.exe (GTA VI, Xbox Series X, PE32+ x64)
// Address: 1401bc0a0  size: 86 bytes
// Name:    FUN_1401bc0a0
// Subsystem: core
//
// Referenced strings (0 in this body, 0 including direct callees):
// Callees: FUN_14507ad00
//
// Generated decompilation. Formatting follows MiscRef/GTAVSRC conventions;
// identifiers are recovered, not original. See ../../../README.md.

#include "gta6decomp/rage_types.h"


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined4 * FUN_1401bc0a0(undefined8 param_1,undefined8 param_2,longlong param_3,longlong param_4)

{
  undefined4 *puVar1;
  
  puVar1 = (undefined4 *)
           (**(code **)(*_DAT_14abcc310 + 0x70))
                     (_DAT_14abcc310,param_1,(param_3 + param_4) * 0x10 | 4,0);
  if (puVar1 != (undefined4 *)0x0) {
    *puVar1 = 1;
    FUN_14507ad00(puVar1 + 1,param_2,param_3);
  }
  return puVar1;
}

