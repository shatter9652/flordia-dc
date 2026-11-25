// Recovered from game_scarlett_master.exe (GTA VI, Xbox Series X, PE32+ x64)
// Address: 140087ae0  size: 48 bytes
// Name:    FUN_140087ae0
// Subsystem: core
//
// Referenced strings (0 in this body, 0 including direct callees):
// Callees: FUN_144efd4c0
//
// Generated decompilation. Formatting follows MiscRef/GTAVSRC conventions;
// identifiers are recovered, not original. See ../../../README.md.

#include "gta6decomp/rage_types.h"


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

bool FUN_140087ae0(uint param_1,char param_2)

{
  char cVar1;
  
  cVar1 = FUN_144efd4c0(1);
  return (cVar1 == '\x01' && param_2 == '\0') && (_DAT_14abbef44 & 0x3f) == param_1;
}

