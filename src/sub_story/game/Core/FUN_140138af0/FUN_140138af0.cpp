// Recovered from game_scarlett_master.exe (GTA VI, Xbox Series X, PE32+ x64)
// Address: 140138af0  size: 50 bytes
// Name:    FUN_140138af0
// Subsystem: core
//
// Referenced strings (0 in this body, 0 including direct callees):
// Callees: FUN_144ff3740
//
// Generated decompilation. Formatting follows MiscRef/GTAVSRC conventions;
// identifiers are recovered, not original. See ../../../README.md.

#include "gta6decomp/rage_types.h"


undefined8 * FUN_140138af0(undefined8 *param_1)

{
  FUN_144ff3740();
  *(undefined1 *)(param_1 + 5) = 0;
  *param_1 = &UNK_1466799d0;
  param_1[6] = 2;
  *(undefined2 *)(param_1 + 0xd) = 0;
  return param_1;
}

