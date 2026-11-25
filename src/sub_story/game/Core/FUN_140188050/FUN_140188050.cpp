// Recovered from game_scarlett_master.exe (GTA VI, Xbox Series X, PE32+ x64)
// Address: 140188050  size: 31 bytes
// Name:    FUN_140188050
// Subsystem: core
//
// Referenced strings (0 in this body, 0 including direct callees):
// Callees: 
//
// Generated decompilation. Formatting follows MiscRef/GTAVSRC conventions;
// identifiers are recovered, not original. See ../../../README.md.

#include "gta6decomp/rage_types.h"


int FUN_140188050(void)

{
  int iVar1;
  longlong *plVar2;
  
  plVar2 = (longlong *)func_0x000144fb5500();
  if (*plVar2 == 0) {
    iVar1 = 0;
  }
  else {
    iVar1 = *(int *)(*plVar2 + 0x10) + -1;
  }
  return iVar1;
}

