// Recovered from game_scarlett_master.exe (GTA VI, Xbox Series X, PE32+ x64)
// Address: 1400ba750  size: 82 bytes
// Name:    FUN_1400ba750
// Subsystem: core
//
// Referenced strings (0 in this body, 0 including direct callees):
// Callees: FUN_1400b8490
//
// Generated decompilation. Formatting follows MiscRef/GTAVSRC conventions;
// identifiers are recovered, not original. See ../../../README.md.

#include "gta6decomp/rage_types.h"


undefined8 *
FUN_1400ba750(undefined8 *param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  FUN_1400b8490(param_1,param_2,param_4,3);
  *param_1 = &UNK_14646ee70;
  param_1[0x3c] = param_3;
  param_1[0x3e] = param_1 + 0x3f;
  param_1[0x3d] = 0x80;
  *(byte *)(param_1 + 0x83f) = *(byte *)(param_1 + 0x83f) & 0xfe;
  return param_1;
}

