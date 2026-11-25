// Recovered from game_scarlett_master.exe (GTA VI, Xbox Series X, PE32+ x64)
// Address: 140047d90  size: 42 bytes
// Name:    FUN_140047d90
// Subsystem: core
//
// Referenced strings (0 in this body, 0 including direct callees):
// Callees: FUN_144e62960
//
// Generated decompilation. Formatting follows MiscRef/GTAVSRC conventions;
// identifiers are recovered, not original. See ../../../README.md.

#include "gta6decomp/rage_types.h"


int FUN_140047d90(undefined4 *param_1,undefined8 param_2)

{
  int iVar1;
  
  iVar1 = FUN_144e62960(*param_1,*(undefined8 *)(param_1 + 2),*(undefined8 *)(param_1 + 6),
                        *(undefined8 *)(param_1 + 4),param_2);
  return iVar1 * 0xc;
}

