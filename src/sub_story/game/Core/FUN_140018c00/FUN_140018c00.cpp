// Recovered from game_scarlett_master.exe (GTA VI, Xbox Series X, PE32+ x64)
// Address: 140018c00  size: 26 bytes
// Name:    FUN_140018c00
// Subsystem: core
//
// Referenced strings (0 in this body, 0 including direct callees):
// Callees: FUN_140018c60
//
// Generated decompilation. Formatting follows MiscRef/GTAVSRC conventions;
// identifiers are recovered, not original. See ../../../README.md.

#include "gta6decomp/rage_types.h"


void FUN_140018c00(longlong param_1)

{
  FUN_140018c60();
  *(undefined8 *)(param_1 + 0x210) = 0;
  FUN_144de7f60();
  if (*(longlong *)(param_1 + 8) != 0) {
    func_0x000144ea36f0();
    *(undefined8 *)(param_1 + 8) = 0;
  }
  return;
}

