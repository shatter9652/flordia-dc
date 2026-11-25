// Recovered from game_scarlett_master.exe (GTA VI, Xbox Series X, PE32+ x64)
// Address: 14007cd90  size: 58 bytes
// Name:    FUN_14007cd90
// Subsystem: core
//
// Referenced strings (0 in this body, 0 including direct callees):
// Callees: 
//
// Generated decompilation. Formatting follows MiscRef/GTAVSRC conventions;
// identifiers are recovered, not original. See ../../../README.md.

#include "gta6decomp/rage_types.h"


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

longlong FUN_14007cd90(void)

{
  longlong lVar1;
  
  if ((*(longlong *)(_DAT_149aea528 + 0x20) != 0) &&
     (lVar1 = func_0x0001401377e0(_DAT_149aea528,0x148), lVar1 != 0)) {
    func_0x00014007cdd0(lVar1);
    return lVar1;
  }
  return 0;
}

