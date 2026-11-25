// Recovered from game_scarlett_master.exe (GTA VI, Xbox Series X, PE32+ x64)
// Address: 1400053d0  size: 56 bytes
// Name:    FUN_1400053d0
// Subsystem: core
//
// Referenced strings (0 in this body, 0 including direct callees):
// Callees: 
//
// Generated decompilation. Formatting follows MiscRef/GTAVSRC conventions;
// identifiers are recovered, not original. See ../../../README.md.

#include "gta6decomp/rage_types.h"


void FUN_1400053d0(longlong param_1)

{
  if (*(longlong *)(param_1 + 0x4b8) != 0) {
    func_0x0001450fa760();
    func_0x000140005410(*(undefined8 *)(param_1 + 0x4b8));
  }
  *(undefined8 *)(param_1 + 0x4b8) = 0;
  return;
}

