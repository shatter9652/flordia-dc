// Recovered from game_scarlett_master.exe (GTA VI, Xbox Series X, PE32+ x64)
// Address: 14018eed0  size: 58 bytes
// Name:    FUN_14018eed0
// Subsystem: core
//
// Referenced strings (0 in this body, 0 including direct callees):
// Callees: FUN_1452715f0
//
// Generated decompilation. Formatting follows MiscRef/GTAVSRC conventions;
// identifiers are recovered, not original. See ../../../README.md.

#include "gta6decomp/rage_types.h"


void FUN_14018eed0(longlong *param_1)

{
  if ((-1 < *(int *)((longlong)param_1 + 0x14)) && (*(char *)((longlong)param_1 + 0x1d) != '\0')) {
    FUN_1452715f0(*(undefined4 *)(*param_1 + 0x7d4),*(int *)((longlong)param_1 + 0x14),0x10f3d95c,0)
    ;
    *(undefined1 *)((longlong)param_1 + 0x1d) = 0;
  }
  return;
}

