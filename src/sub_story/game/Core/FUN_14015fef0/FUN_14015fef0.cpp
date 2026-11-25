// Recovered from game_scarlett_master.exe (GTA VI, Xbox Series X, PE32+ x64)
// Address: 14015fef0  size: 51 bytes
// Name:    FUN_14015fef0
// Subsystem: core
//
// Referenced strings (0 in this body, 0 including direct callees):
// Callees: FUN_1412fbe70, FUN_14015ff30
//
// Generated decompilation. Formatting follows MiscRef/GTAVSRC conventions;
// identifiers are recovered, not original. See ../../../README.md.

#include "gta6decomp/rage_types.h"


void FUN_14015fef0(longlong param_1)

{
  FUN_14015ff30();
  FUN_1412fbe70(param_1);
  if (*(longlong *)(param_1 + 8) != 0) {
    func_0x000144d9c130();
  }
  *(undefined8 *)(param_1 + 8) = 0;
  return;
}

