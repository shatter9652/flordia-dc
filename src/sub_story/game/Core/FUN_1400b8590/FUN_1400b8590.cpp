// Recovered from game_scarlett_master.exe (GTA VI, Xbox Series X, PE32+ x64)
// Address: 1400b8590  size: 72 bytes
// Name:    FUN_1400b8590
// Subsystem: core
//
// Referenced strings (0 in this body, 0 including direct callees):
// Callees: FUN_1400b86d0, FUN_1400b85e0
//
// Generated decompilation. Formatting follows MiscRef/GTAVSRC conventions;
// identifiers are recovered, not original. See ../../../README.md.

#include "gta6decomp/rage_types.h"


undefined8 * FUN_1400b8590(undefined8 *param_1)

{
  FUN_1400b85e0();
  *param_1 = &UNK_1466236a0;
  param_1[3] = 0;
  FUN_1400b86d0(param_1 + 4);
  *(undefined1 (*) [32])(param_1 + 0x12) = ZEXT1232(ZEXT812(0));
  *(undefined1 (*) [32])(param_1 + 0x14) = ZEXT1232(ZEXT812(0));
  return param_1;
}

