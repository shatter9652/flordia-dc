// Recovered from game_scarlett_master.exe (GTA VI, Xbox Series X, PE32+ x64)
// Address: 140138a70  size: 53 bytes
// Name:    FUN_140138a70
// Subsystem: core
//
// Referenced strings (0 in this body, 0 including direct callees):
// Callees: FUN_144ff3740
//
// Generated decompilation. Formatting follows MiscRef/GTAVSRC conventions;
// identifiers are recovered, not original. See ../../../README.md.

#include "gta6decomp/rage_types.h"


undefined8 * FUN_140138a70(undefined8 *param_1)

{
  FUN_144ff3740();
  *(undefined1 *)(param_1 + 5) = 0;
  *param_1 = &UNK_146679a60;
  param_1[6] = 5;
  *(undefined2 *)(param_1 + 0x16) = 0;
  return param_1;
}

