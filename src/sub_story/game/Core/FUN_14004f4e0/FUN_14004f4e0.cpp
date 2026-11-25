// Recovered from game_scarlett_master.exe (GTA VI, Xbox Series X, PE32+ x64)
// Address: 14004f4e0  size: 45 bytes
// Name:    FUN_14004f4e0
// Subsystem: core
//
// Referenced strings (0 in this body, 0 including direct callees):
// Callees: FUN_14004f590
//
// Generated decompilation. Formatting follows MiscRef/GTAVSRC conventions;
// identifiers are recovered, not original. See ../../../README.md.

#include "gta6decomp/rage_types.h"


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined8 * FUN_14004f4e0(undefined8 *param_1,undefined4 param_2)

{
  undefined8 *puVar1;
  
  puVar1 = (undefined8 *)FUN_14004f590(param_2);
  if (puVar1 != (undefined8 *)0x0) {
    puVar1 = (undefined8 *)*puVar1;
    *param_1 = puVar1;
    return puVar1;
  }
  *param_1 = _DAT_146159bc0;
  return param_1;
}

