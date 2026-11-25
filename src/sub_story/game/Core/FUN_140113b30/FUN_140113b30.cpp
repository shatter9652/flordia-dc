// Recovered from game_scarlett_master.exe (GTA VI, Xbox Series X, PE32+ x64)
// Address: 140113b30  size: 27 bytes
// Name:    FUN_140113b30
// Subsystem: core
//
// Referenced strings (0 in this body, 0 including direct callees):
// Callees: 
//
// Generated decompilation. Formatting follows MiscRef/GTAVSRC conventions;
// identifiers are recovered, not original. See ../../../README.md.

#include "gta6decomp/rage_types.h"


longlong FUN_140113b30(void)

{
  longlong lVar1;
  
  lVar1 = func_0x000140113b50();
  if ((lVar1 == 0) || (*(char *)(lVar1 + 0x30) != '\x03')) {
    lVar1 = 0;
  }
  return lVar1;
}

