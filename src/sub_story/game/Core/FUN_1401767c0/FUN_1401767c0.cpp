// Recovered from game_scarlett_master.exe (GTA VI, Xbox Series X, PE32+ x64)
// Address: 1401767c0  size: 55 bytes
// Name:    FUN_1401767c0
// Subsystem: core
//
// Referenced strings (0 in this body, 0 including direct callees):
// Callees: FUN_140176800
//
// Generated decompilation. Formatting follows MiscRef/GTAVSRC conventions;
// identifiers are recovered, not original. See ../../../README.md.

#include "gta6decomp/rage_types.h"


void FUN_1401767c0(longlong param_1,longlong *param_2)

{
  longlong lVar1;
  
  lVar1 = FUN_140176800(*(undefined8 *)(param_1 + 0x10));
  if (lVar1 != 0) {
    *param_2 = lVar1;
    *(undefined4 *)((longlong)param_2 + 0xc) = *(undefined4 *)(param_1 + 0x28);
    *(undefined4 *)(param_2 + 2) = 2;
    *(undefined1 *)((longlong)param_2 + 0x14) = 0;
  }
  return;
}

