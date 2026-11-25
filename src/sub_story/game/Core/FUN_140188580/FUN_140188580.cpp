// Recovered from game_scarlett_master.exe (GTA VI, Xbox Series X, PE32+ x64)
// Address: 140188580  size: 47 bytes
// Name:    FUN_140188580
// Subsystem: core
//
// Referenced strings (0 in this body, 0 including direct callees):
// Callees: 
//
// Generated decompilation. Formatting follows MiscRef/GTAVSRC conventions;
// identifiers are recovered, not original. See ../../../README.md.

#include "gta6decomp/rage_types.h"


/* WARNING: Possible PIC construction at 0x00014018858e: Changing call to branch */
/* WARNING: Removing unreachable block (ram,0x000140188593) */
/* WARNING: Removing unreachable block (ram,0x0001401885a7) */
/* WARNING: Removing unreachable block (ram,0x000140188597) */

bool FUN_140188580(longlong param_1)

{
  return *(int *)(param_1 + 0x60) == 3 && *(int *)(param_1 + 0x58) == 1;
}

