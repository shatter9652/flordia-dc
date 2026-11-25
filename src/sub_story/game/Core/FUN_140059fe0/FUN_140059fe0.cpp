// Recovered from game_scarlett_master.exe (GTA VI, Xbox Series X, PE32+ x64)
// Address: 140059fe0  size: 48 bytes
// Name:    FUN_140059fe0
// Subsystem: core
//
// Referenced strings (0 in this body, 0 including direct callees):
// Callees: 
//
// Generated decompilation. Formatting follows MiscRef/GTAVSRC conventions;
// identifiers are recovered, not original. See ../../../README.md.

#include "gta6decomp/rage_types.h"


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_140059fe0(longlong param_1)

{
  undefined8 uVar1;
  
  if ((_DAT_1475287d0 != (code *)0x0) && (*(longlong *)(param_1 + 0x198) == 0)) {
    uVar1 = (*_DAT_1475287d0)(param_1);
    *(undefined8 *)(param_1 + 0x198) = uVar1;
  }
  return;
}

