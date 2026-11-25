// Recovered from game_scarlett_master.exe (GTA VI, Xbox Series X, PE32+ x64)
// Address: 140037750  size: 63 bytes
// Name:    FUN_140037750
// Subsystem: core
//
// Referenced strings (0 in this body, 0 including direct callees):
// Callees: FUN_1402eaeb0
//
// Generated decompilation. Formatting follows MiscRef/GTAVSRC conventions;
// identifiers are recovered, not original. See ../../../README.md.

#include "gta6decomp/rage_types.h"


void FUN_140037750(longlong param_1)

{
  longlong lStack_18;
  undefined4 uStack_10;
  
  if ((*(uint *)(param_1 + 0x18) & 0x1fffffff) == 0) {
    uStack_10 = 3;
    lStack_18 = param_1;
    FUN_1402eaeb0(param_1 + 0x18,&lStack_18,*(undefined1 *)(param_1 + 0x28),0,0);
    *(undefined1 *)(param_1 + 0x29) = 2;
  }
  return;
}

