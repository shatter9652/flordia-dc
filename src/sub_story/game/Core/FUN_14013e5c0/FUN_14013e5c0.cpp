// Recovered from game_scarlett_master.exe (GTA VI, Xbox Series X, PE32+ x64)
// Address: 14013e5c0  size: 70 bytes
// Name:    FUN_14013e5c0
// Subsystem: core
//
// Referenced strings (0 in this body, 0 including direct callees):
// Callees: FUN_1451a3410, FUN_14013e670
//
// Generated decompilation. Formatting follows MiscRef/GTAVSRC conventions;
// identifiers are recovered, not original. See ../../../README.md.

#include "gta6decomp/rage_types.h"


undefined8 * FUN_14013e5c0(undefined8 *param_1,undefined8 param_2,longlong param_3)

{
  FUN_1451a3410();
  *param_1 = &UNK_14633baa0;
  param_1[3] = 0;
  *(undefined4 *)(param_1 + 4) = 0;
  FUN_14013e670(param_1,*(undefined1 *)(param_3 + 0x14),0,*(undefined4 *)(param_3 + 0x10));
  return param_1;
}

