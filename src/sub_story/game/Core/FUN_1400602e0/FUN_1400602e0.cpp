// Recovered from game_scarlett_master.exe (GTA VI, Xbox Series X, PE32+ x64)
// Address: 1400602e0  size: 70 bytes
// Name:    FUN_1400602e0
// Subsystem: core
//
// Referenced strings (0 in this body, 0 including direct callees):
// Callees: FUN_1402e7220
//
// Generated decompilation. Formatting follows MiscRef/GTAVSRC conventions;
// identifiers are recovered, not original. See ../../../README.md.

#include "gta6decomp/rage_types.h"


void FUN_1400602e0(longlong param_1)

{
  char cVar1;
  longlong lVar2;
  
  cVar1 = func_0x000144e3ee00(*(undefined4 *)(param_1 + 0x29c));
  if (cVar1 != '\0') {
    lVar2 = FUN_1402e7220(*(undefined4 *)(param_1 + 0x29c),*(undefined8 *)(param_1 + 0x2a0));
    if (lVar2 != 0) {
      *(longlong *)(*(longlong *)(param_1 + 8) + 0x1a0) = lVar2;
      return;
    }
  }
  return;
}

