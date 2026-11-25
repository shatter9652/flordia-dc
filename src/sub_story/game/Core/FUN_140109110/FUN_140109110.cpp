// Recovered from game_scarlett_master.exe (GTA VI, Xbox Series X, PE32+ x64)
// Address: 140109110  size: 42 bytes
// Name:    FUN_140109110
// Subsystem: core
//
// Referenced strings (0 in this body, 0 including direct callees):
// Callees: FUN_144fb0380
//
// Generated decompilation. Formatting follows MiscRef/GTAVSRC conventions;
// identifiers are recovered, not original. See ../../../README.md.

#include "gta6decomp/rage_types.h"


void FUN_140109110(longlong param_1)

{
  if (*(longlong *)(param_1 + 0x80) != 0) {
    FUN_144fb0380();
  }
  *(undefined8 *)(param_1 + 0x80) = 0;
  return;
}

