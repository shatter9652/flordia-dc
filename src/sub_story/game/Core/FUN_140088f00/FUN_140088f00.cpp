// Recovered from game_scarlett_master.exe (GTA VI, Xbox Series X, PE32+ x64)
// Address: 140088f00  size: 34 bytes
// Name:    FUN_140088f00
// Subsystem: core
//
// Referenced strings (0 in this body, 0 including direct callees):
// Callees: 
//
// Generated decompilation. Formatting follows MiscRef/GTAVSRC conventions;
// identifiers are recovered, not original. See ../../../README.md.

#include "gta6decomp/rage_types.h"


bool FUN_140088f00(longlong param_1)

{
  char cVar1;
  bool bVar2;
  
  cVar1 = func_0x000140299090();
  if (cVar1 == '\0') {
    bVar2 = false;
  }
  else {
    bVar2 = *(char *)(param_1 + 4) == '!';
  }
  return bVar2;
}

