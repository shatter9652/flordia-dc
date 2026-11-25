// Recovered from game_scarlett_master.exe (GTA VI, Xbox Series X, PE32+ x64)
// Address: 1401035c0  size: 49 bytes
// Name:    FUN_1401035c0
// Subsystem: core
//
// Referenced strings (0 in this body, 0 including direct callees):
// Callees: FUN_141046ed0
//
// Generated decompilation. Formatting follows MiscRef/GTAVSRC conventions;
// identifiers are recovered, not original. See ../../../README.md.

#include "gta6decomp/rage_types.h"


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

byte FUN_1401035c0(int param_1,int param_2)

{
  byte bVar1;
  
  bVar1 = 1;
  if ((((param_1 != -0x5ededf00) && (param_1 != param_2)) && (param_2 != -0x5ededf00)) &&
     (param_2 != 0)) {
    bVar1 = FUN_141046ed0(_DAT_14a922bd8);
    bVar1 = bVar1 ^ 1;
  }
  return bVar1;
}

