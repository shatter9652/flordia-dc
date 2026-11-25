// Recovered from game_scarlett_master.exe (GTA VI, Xbox Series X, PE32+ x64)
// Address: 1400b2a10  size: 69 bytes
// Name:    FUN_1400b2a10
// Subsystem: core
//
// Referenced strings (0 in this body, 0 including direct callees):
// Callees: 
//
// Generated decompilation. Formatting follows MiscRef/GTAVSRC conventions;
// identifiers are recovered, not original. See ../../../README.md.

#include "gta6decomp/rage_types.h"


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1400b2a10(longlong param_1)

{
  longlong lVar1;
  
  lVar1 = func_0x000144da6540(*(undefined4 *)(*(longlong *)(param_1 + 8) + 0x9c));
  if (*(char *)(*(longlong *)(lVar1 + 0x10b8) + 0xe35) == '\x01') {
    *(undefined4 *)(param_1 + 0x1710) = _DAT_14a943768;
    *(undefined4 *)(param_1 + 0x16d8) = 0;
  }
  return;
}

