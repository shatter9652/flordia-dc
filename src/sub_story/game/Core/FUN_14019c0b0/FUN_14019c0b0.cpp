// Recovered from game_scarlett_master.exe (GTA VI, Xbox Series X, PE32+ x64)
// Address: 14019c0b0  size: 53 bytes
// Name:    FUN_14019c0b0
// Subsystem: core
//
// Referenced strings (0 in this body, 0 including direct callees):
// Callees: FUN_144e967d0
//
// Generated decompilation. Formatting follows MiscRef/GTAVSRC conventions;
// identifiers are recovered, not original. See ../../../README.md.

#include "gta6decomp/rage_types.h"


void FUN_14019c0b0(uint param_1,longlong param_2)

{
  longlong lVar1;
  
  if (param_1 != 0) {
    lVar1 = (ulonglong)param_1 * 0x130;
    do {
      FUN_144e967d0(param_2);
      param_2 = param_2 + 0x130;
      lVar1 = lVar1 + -0x130;
    } while (lVar1 != 0);
  }
  return;
}

