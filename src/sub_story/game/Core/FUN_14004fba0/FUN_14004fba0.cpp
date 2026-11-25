// Recovered from game_scarlett_master.exe (GTA VI, Xbox Series X, PE32+ x64)
// Address: 14004fba0  size: 77 bytes
// Name:    FUN_14004fba0
// Subsystem: core
//
// Referenced strings (0 in this body, 0 including direct callees):
// Callees: FUN_1450cb0e0, FUN_1410eae90
//
// Generated decompilation. Formatting follows MiscRef/GTAVSRC conventions;
// identifiers are recovered, not original. See ../../../README.md.

#include "gta6decomp/rage_types.h"


void FUN_14004fba0(longlong param_1)

{
  FUN_1410eae90();
  if (*(longlong *)(param_1 + 0x20) != 0) {
    FUN_1450cb0e0(*(longlong *)(param_1 + 0x20),param_1 + 0x20);
  }
  *(undefined8 *)(param_1 + 0x20) = 0;
  if (*(longlong *)(param_1 + 8) != 0) {
    FUN_1450cb0e0(*(longlong *)(param_1 + 8),(undefined8 *)(param_1 + 8));
  }
  *(undefined8 *)(param_1 + 8) = 0;
  return;
}

