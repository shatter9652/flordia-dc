// Recovered from game_scarlett_master.exe (GTA VI, Xbox Series X, PE32+ x64)
// Address: 14013e170  size: 24 bytes
// Name:    FUN_14013e170
// Subsystem: core
//
// Referenced strings (0 in this body, 0 including direct callees):
// Callees: FUN_144dc1e60
//
// Generated decompilation. Formatting follows MiscRef/GTAVSRC conventions;
// identifiers are recovered, not original. See ../../../README.md.

#include "gta6decomp/rage_types.h"


char FUN_14013e170(void)

{
  int *piVar1;
  
  piVar1 = (int *)FUN_144dc1e60();
  return (*piVar1 == 0 && piVar1[1] == 0) + '\x01';
}

