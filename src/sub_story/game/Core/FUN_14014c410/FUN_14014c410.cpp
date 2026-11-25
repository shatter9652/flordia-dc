// Recovered from game_scarlett_master.exe (GTA VI, Xbox Series X, PE32+ x64)
// Address: 14014c410  size: 49 bytes
// Name:    FUN_14014c410
// Subsystem: core
//
// Referenced strings (0 in this body, 0 including direct callees):
// Callees: FUN_14014c450
//
// Generated decompilation. Formatting follows MiscRef/GTAVSRC conventions;
// identifiers are recovered, not original. See ../../../README.md.

#include "gta6decomp/rage_types.h"


void FUN_14014c410(longlong *param_1)

{
  (**(code **)(*param_1 + 0x58))();
  if (param_1[0xb] != 0) {
    if ((int)param_1[6] == 2) {
      *(undefined1 *)((longlong)param_1 + 0x45) = 1;
    }
    FUN_14014c450(param_1);
    *(undefined1 *)((longlong)param_1 + 0x44) = 1;
  }
  return;
}

