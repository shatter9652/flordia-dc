// Recovered from game_scarlett_master.exe (GTA VI, Xbox Series X, PE32+ x64)
// Address: 14012b690  size: 47 bytes
// Name:    FUN_14012b690
// Subsystem: core
//
// Referenced strings (0 in this body, 0 including direct callees):
// Callees: 
//
// Generated decompilation. Formatting follows MiscRef/GTAVSRC conventions;
// identifiers are recovered, not original. See ../../../README.md.

#include "gta6decomp/rage_types.h"


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

bool FUN_14012b690(ulonglong param_1)

{
  char cVar1;
  bool bVar2;
  
  cVar1 = func_0x00014012b850();
  if (cVar1 == '\0') {
    bVar2 = false;
  }
  else {
    bVar2 = (param_1 & 0xffff) != *(ulonglong *)(_DAT_14a9b33c0 + 0x2a0);
  }
  return bVar2;
}

