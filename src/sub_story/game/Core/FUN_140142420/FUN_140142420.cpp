// Recovered from game_scarlett_master.exe (GTA VI, Xbox Series X, PE32+ x64)
// Address: 140142420  size: 66 bytes
// Name:    FUN_140142420
// Subsystem: core
//
// Referenced strings (0 in this body, 0 including direct callees):
// Callees: FUN_140144ce0
//
// Generated decompilation. Formatting follows MiscRef/GTAVSRC conventions;
// identifiers are recovered, not original. See ../../../README.md.

#include "gta6decomp/rage_types.h"


void FUN_140142420(longlong param_1)

{
  longlong lVar1;
  
  if (0 < *(int *)(param_1 + 0x45c)) {
    lVar1 = 0;
    do {
      FUN_140144ce0(*(undefined8 *)(*(longlong *)(param_1 + 0x460) + lVar1 * 8));
      lVar1 = lVar1 + 1;
    } while (lVar1 < *(int *)(param_1 + 0x45c));
  }
  return;
}

