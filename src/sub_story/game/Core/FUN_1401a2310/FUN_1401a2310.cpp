// Recovered from game_scarlett_master.exe (GTA VI, Xbox Series X, PE32+ x64)
// Address: 1401a2310  size: 67 bytes
// Name:    FUN_1401a2310
// Subsystem: core
//
// Referenced strings (0 in this body, 0 including direct callees):
// Callees: 
//
// Generated decompilation. Formatting follows MiscRef/GTAVSRC conventions;
// identifiers are recovered, not original. See ../../../README.md.

#include "gta6decomp/rage_types.h"


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

longlong FUN_1401a2310(void)

{
  longlong lVar1;
  
  lVar1 = func_0x000144eda700();
  if ((lVar1 == 0) || (lVar1 = *(longlong *)(lVar1 + 0x10868), lVar1 == 0)) {
    lVar1 = func_0x000144eda700(*(undefined4 *)(_DAT_14ab56e38 + 0x9c));
    if (lVar1 == 0) {
      lVar1 = 0;
    }
    else {
      lVar1 = *(longlong *)(lVar1 + 0x10868);
    }
  }
  return lVar1;
}

