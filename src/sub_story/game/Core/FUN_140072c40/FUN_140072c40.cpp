// Recovered from game_scarlett_master.exe (GTA VI, Xbox Series X, PE32+ x64)
// Address: 140072c40  size: 75 bytes
// Name:    FUN_140072c40
// Subsystem: core
//
// Referenced strings (0 in this body, 0 including direct callees):
// Callees: 
//
// Generated decompilation. Formatting follows MiscRef/GTAVSRC conventions;
// identifiers are recovered, not original. See ../../../README.md.

#include "gta6decomp/rage_types.h"


/* WARNING: Possible PIC construction at 0x000140072c58: Changing call to branch */
/* WARNING: Removing unreachable block (ram,0x000140072c5d) */
/* WARNING: Removing unreachable block (ram,0x000140072c6f) */
/* WARNING: Removing unreachable block (ram,0x000140072c61) */

bool FUN_140072c40(longlong param_1,float param_2)

{
  if (*(char *)(param_1 + 0x40) != '\0') {
    return true;
  }
  return *(float *)(param_1 + 0x30) < param_2;
}

