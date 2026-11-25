// Recovered from game_scarlett_master.exe (GTA VI, Xbox Series X, PE32+ x64)
// Address: 14007d7c0  size: 137 bytes
// Name:    FUN_14007d7c0
// Subsystem: core
//
// Referenced strings (0 in this body, 0 including direct callees):
// Callees: FUN_144eef480
//
// Generated decompilation. Formatting follows MiscRef/GTAVSRC conventions;
// identifiers are recovered, not original. See ../../../README.md.

#include "gta6decomp/rage_types.h"


undefined8 * FUN_14007d7c0(undefined8 *param_1)

{
  FUN_144eef480(param_1,1);
  *param_1 = &UNK_1465f4ad0;
  param_1[8] = 2;
  param_1[0x22] = param_1 + 0x23;
  param_1[0x21] = 0xc;
  param_1[0x30] = param_1 + 0x31;
  param_1[0x2f] = 0xc;
  *(undefined4 *)(param_1 + 0x3d) = 0;
  *(undefined1 *)((longlong)param_1 + 0x1fc) = 0;
  *(undefined8 *)((longlong)param_1 + 0x1ec) = 0;
  *(undefined8 *)((longlong)param_1 + 500) = 0xffffffffffff;
  return param_1;
}

