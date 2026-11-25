// Recovered from game_scarlett_master.exe (GTA VI, Xbox Series X, PE32+ x64)
// Address: 14004dc80  size: 119 bytes
// Name:    FUN_14004dc80
// Subsystem: core
//
// Referenced strings (0 in this body, 0 including direct callees):
// Callees: FUN_144e510e0, FUN_144ea5460
//
// Generated decompilation. Formatting follows MiscRef/GTAVSRC conventions;
// identifiers are recovered, not original. See ../../../README.md.

#include "gta6decomp/rage_types.h"


void FUN_14004dc80(longlong param_1)

{
  longlong lVar1;
  
  lVar1 = *(longlong *)(param_1 + 0x1648);
  if (lVar1 != 0) {
    FUN_144e510e0(lVar1 + 0xf8);
    FUN_144ea5460(lVar1 + 0xee);
    FUN_144ea5460(lVar1 + 0xea);
    FUN_144e510e0(lVar1 + 0x50);
    FUN_144e510e0(lVar1 + 0x28);
    FUN_144e510e0(lVar1);
    func_0x000144d9c130(lVar1,0x130);
    *(undefined8 *)(param_1 + 0x1648) = 0;
  }
  return;
}

