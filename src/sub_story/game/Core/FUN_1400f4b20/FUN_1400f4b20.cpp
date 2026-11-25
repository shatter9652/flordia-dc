// Recovered from game_scarlett_master.exe (GTA VI, Xbox Series X, PE32+ x64)
// Address: 1400f4b20  size: 40 bytes
// Name:    FUN_1400f4b20
// Subsystem: core
//
// Referenced strings (0 in this body, 0 including direct callees):
// Callees: FUN_144f28a50
//
// Generated decompilation. Formatting follows MiscRef/GTAVSRC conventions;
// identifiers are recovered, not original. See ../../../README.md.

#include "gta6decomp/rage_types.h"


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

float FUN_1400f4b20(void)

{
  float fVar1;
  float fVar2;
  
  fVar2 = _DAT_14a95de68;
  fVar1 = (float)FUN_144f28a50();
  return fVar1 * fVar2;
}

