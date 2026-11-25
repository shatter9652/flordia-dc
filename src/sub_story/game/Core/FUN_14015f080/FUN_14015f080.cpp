// Recovered from game_scarlett_master.exe (GTA VI, Xbox Series X, PE32+ x64)
// Address: 14015f080  size: 84 bytes
// Name:    FUN_14015f080
// Subsystem: core
//
// Referenced strings (0 in this body, 0 including direct callees):
// Callees: FUN_140f17fb0, FUN_140c99be0, FUN_14015f1a0
//
// Generated decompilation. Formatting follows MiscRef/GTAVSRC conventions;
// identifiers are recovered, not original. See ../../../README.md.

#include "gta6decomp/rage_types.h"


void FUN_14015f080(longlong param_1)

{
  FUN_14015f1a0();
  FUN_140c99be0(param_1 + 0x10);
  if (*(longlong *)(param_1 + 0x18) != 0) {
    func_0x000144d9c130();
  }
  *(undefined8 *)(param_1 + 0x18) = 0;
  FUN_140f17fb0(param_1);
  if (*(longlong *)(param_1 + 8) != 0) {
    func_0x000144d9c130();
  }
  *(undefined8 *)(param_1 + 8) = 0;
  return;
}

