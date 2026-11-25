// Recovered from game_scarlett_master.exe (GTA VI, Xbox Series X, PE32+ x64)
// Address: 140142310  size: 50 bytes
// Name:    FUN_140142310
// Subsystem: core
//
// Referenced strings (0 in this body, 0 including direct callees):
// Callees: FUN_145009460
//
// Generated decompilation. Formatting follows MiscRef/GTAVSRC conventions;
// identifiers are recovered, not original. See ../../../README.md.

#include "gta6decomp/rage_types.h"


void FUN_140142310(longlong param_1)

{
  int iVar1;
  
  if (0 < *(int *)(param_1 + 0x3c)) {
    iVar1 = 0;
    do {
      FUN_145009460(*(undefined8 *)(param_1 + 0x40),*(undefined8 *)(param_1 + 200),iVar1);
      iVar1 = iVar1 + 1;
    } while (iVar1 < *(int *)(param_1 + 0x3c));
  }
  return;
}

