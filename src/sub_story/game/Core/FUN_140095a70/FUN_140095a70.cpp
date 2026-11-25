// Recovered from game_scarlett_master.exe (GTA VI, Xbox Series X, PE32+ x64)
// Address: 140095a70  size: 40 bytes
// Name:    FUN_140095a70
// Subsystem: core
//
// Referenced strings (0 in this body, 0 including direct callees):
// Callees: FUN_140095aa0
//
// Generated decompilation. Formatting follows MiscRef/GTAVSRC conventions;
// identifiers are recovered, not original. See ../../../README.md.

#include "gta6decomp/rage_types.h"


void FUN_140095a70(longlong param_1,undefined8 param_2,char param_3)

{
  undefined4 uStack_c;
  
  if (param_3 == '\0') {
    func_0x000144deca10(&uStack_c,*(undefined4 *)(param_1 + 0x5c));
    FUN_140095aa0(uStack_c);
  }
  return;
}

