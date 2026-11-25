// Recovered from game_scarlett_master.exe (GTA VI, Xbox Series X, PE32+ x64)
// Address: 140107d60  size: 51 bytes
// Name:    FUN_140107d60
// Subsystem: core
//
// Referenced strings (0 in this body, 0 including direct callees):
// Callees: 
//
// Generated decompilation. Formatting follows MiscRef/GTAVSRC conventions;
// identifiers are recovered, not original. See ../../../README.md.

#include "gta6decomp/rage_types.h"


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_140107d60(longlong param_1)

{
  if ((*(longlong *)(param_1 + 0x198) != 0) && (_DAT_1475287d8 != (code *)0x0)) {
    (*_DAT_1475287d8)();
    *(undefined8 *)(param_1 + 0x198) = 0;
  }
  return;
}

