// Recovered from game_scarlett_master.exe (GTA VI, Xbox Series X, PE32+ x64)
// Address: 1401a21f0  size: 60 bytes
// Name:    FUN_1401a21f0
// Subsystem: core
//
// Referenced strings (0 in this body, 0 including direct callees):
// Callees: FUN_1401a2230
//
// Generated decompilation. Formatting follows MiscRef/GTAVSRC conventions;
// identifiers are recovered, not original. See ../../../README.md.

#include "gta6decomp/rage_types.h"


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

bool FUN_1401a21f0(void)

{
  char cVar1;
  longlong lVar2;
  
  cVar1 = FUN_1401a2230();
  if (((cVar1 != '\0') && (_DAT_14ab56e38 != 0)) &&
     (lVar2 = func_0x000144eda700(*(undefined4 *)(_DAT_14ab56e38 + 0x9c)), lVar2 != 0)) {
    return *(char *)(lVar2 + 0xf864) == '\0';
  }
  return false;
}

