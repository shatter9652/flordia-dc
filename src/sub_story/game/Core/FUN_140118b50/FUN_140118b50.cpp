// Recovered from game_scarlett_master.exe (GTA VI, Xbox Series X, PE32+ x64)
// Address: 140118b50  size: 40 bytes
// Name:    FUN_140118b50
// Subsystem: core
//
// Referenced strings (0 in this body, 0 including direct callees):
// Callees: FUN_144ec8b60
//
// Generated decompilation. Formatting follows MiscRef/GTAVSRC conventions;
// identifiers are recovered, not original. See ../../../README.md.

#include "gta6decomp/rage_types.h"


uint FUN_140118b50(undefined4 param_1)

{
  if (DAT_147455f30 == '\x01') {
    FUN_144ec8b60();
    return CONCAT31((int3)((uint)param_1 >> 8),DAT_147455f48) & 0xffffff01;
  }
  return 0;
}

