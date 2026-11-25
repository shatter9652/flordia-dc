// Recovered from game_scarlett_master.exe (GTA VI, Xbox Series X, PE32+ x64)
// Address: 14011f880  size: 89 bytes
// Name:    FUN_14011f880
// Subsystem: core
//
// Referenced strings (0 in this body, 0 including direct callees):
// Callees: 
//
// Generated decompilation. Formatting follows MiscRef/GTAVSRC conventions;
// identifiers are recovered, not original. See ../../../README.md.

#include "gta6decomp/rage_types.h"


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

bool FUN_14011f880(longlong param_1)

{
  bool bVar1;
  longlong lStack_18;
  
  bVar1 = true;
  if ((*(char *)(param_1 + 0xd8) == '\x01') && ((*(byte *)(param_1 + 0xd9) & 1) != 0)) {
    QueryPerformanceCounter(&lStack_18);
    bVar1 = _DAT_14615a6b4 <= (float)(lStack_18 - *(longlong *)(param_1 + 0xa8)) * _DAT_149e4f5c0;
  }
  return bVar1;
}

