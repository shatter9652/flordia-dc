// Recovered from game_scarlett_master.exe (GTA VI, Xbox Series X, PE32+ x64)
// Address: 1401a14c0  size: 78 bytes
// Name:    FUN_1401a14c0
// Subsystem: core
//
// Referenced strings (0 in this body, 0 including direct callees):
// Callees: 
//
// Generated decompilation. Formatting follows MiscRef/GTAVSRC conventions;
// identifiers are recovered, not original. See ../../../README.md.

#include "gta6decomp/rage_types.h"


void FUN_1401a14c0(longlong param_1)

{
  longlong lVar1;
  longlong lVar2;
  
  if (0 < *(int *)(param_1 + 0x510)) {
    lVar1 = param_1 + 0x10;
    lVar2 = 0;
    do {
      func_0x0001401a1490(lVar1);
      lVar2 = lVar2 + 1;
      lVar1 = lVar1 + 0xa0;
    } while (lVar2 < *(int *)(param_1 + 0x510));
  }
  *(undefined4 *)(param_1 + 0x510) = 0;
  return;
}

