// Recovered from game_scarlett_master.exe (GTA VI, Xbox Series X, PE32+ x64)
// Address: 1400c7b00  size: 57 bytes
// Name:    FUN_1400c7b00
// Subsystem: core
//
// Referenced strings (0 in this body, 0 including direct callees):
// Callees: FUN_1400c7b00
//
// Generated decompilation. Formatting follows MiscRef/GTAVSRC conventions;
// identifiers are recovered, not original. See ../../../README.md.

#include "gta6decomp/rage_types.h"


void FUN_1400c7b00(longlong *param_1)

{
  longlong lVar1;
  
  if (param_1 != (longlong *)0x0) {
    (**(code **)(*param_1 + 0x78))();
    if (0 < (int)param_1[0xd]) {
      lVar1 = 0;
      do {
        FUN_1400c7b00(param_1[lVar1 + 4]);
        lVar1 = lVar1 + 1;
      } while (lVar1 < (int)param_1[0xd]);
    }
  }
  return;
}

