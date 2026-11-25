// Recovered from game_scarlett_master.exe (GTA VI, Xbox Series X, PE32+ x64)
// Address: 1400ff6f0  size: 50 bytes
// Name:    FUN_1400ff6f0
// Subsystem: core
//
// Referenced strings (0 in this body, 0 including direct callees):
// Callees: FUN_1401017a0
//
// Generated decompilation. Formatting follows MiscRef/GTAVSRC conventions;
// identifiers are recovered, not original. See ../../../README.md.

#include "gta6decomp/rage_types.h"


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

byte FUN_1400ff6f0(longlong param_1)

{
  char cVar1;
  
  if ((_DAT_14ab56e38 != 0) && (cVar1 = FUN_1401017a0(), cVar1 != '\0')) {
    return 1;
  }
  return (*(byte *)(param_1 + 0xdc) & 0x10) >> 4;
}

