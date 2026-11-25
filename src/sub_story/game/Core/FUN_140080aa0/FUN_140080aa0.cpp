// Recovered from game_scarlett_master.exe (GTA VI, Xbox Series X, PE32+ x64)
// Address: 140080aa0  size: 52 bytes
// Name:    FUN_140080aa0
// Subsystem: core
//
// Referenced strings (0 in this body, 0 including direct callees):
// Callees: FUN_144dd7510
//
// Generated decompilation. Formatting follows MiscRef/GTAVSRC conventions;
// identifiers are recovered, not original. See ../../../README.md.

#include "gta6decomp/rage_types.h"


bool FUN_140080aa0(longlong param_1)

{
  longlong lVar1;
  bool bVar2;
  
  if ((*(char *)(param_1 + 0x310) == '\x01') && ((*(byte *)(param_1 + 0x311) & 1) != 0)) {
    bVar2 = false;
  }
  else {
    lVar1 = FUN_144dd7510(*(undefined4 *)(*(longlong *)(param_1 + 0x30) + 0x9c));
    bVar2 = lVar1 == 0;
  }
  return bVar2;
}

