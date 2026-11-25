// Recovered from game_scarlett_master.exe (GTA VI, Xbox Series X, PE32+ x64)
// Address: 1401858f0  size: 37 bytes
// Name:    FUN_1401858f0
// Subsystem: core
//
// Referenced strings (0 in this body, 0 including direct callees):
// Callees: FUN_144e73670
//
// Generated decompilation. Formatting follows MiscRef/GTAVSRC conventions;
// identifiers are recovered, not original. See ../../../README.md.

#include "gta6decomp/rage_types.h"


bool FUN_1401858f0(longlong param_1)

{
  longlong lVar1;
  bool bVar2;
  
  bVar2 = true;
  if (*(longlong *)(param_1 + 0x48) != 0) {
    lVar1 = FUN_144e73670();
    bVar2 = lVar1 == *(longlong *)(param_1 + 0x48);
  }
  return bVar2;
}

