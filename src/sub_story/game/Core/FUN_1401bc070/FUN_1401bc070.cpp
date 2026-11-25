// Recovered from game_scarlett_master.exe (GTA VI, Xbox Series X, PE32+ x64)
// Address: 1401bc070  size: 35 bytes
// Name:    FUN_1401bc070
// Subsystem: core
//
// Referenced strings (0 in this body, 0 including direct callees):
// Callees: 
//
// Generated decompilation. Formatting follows MiscRef/GTAVSRC conventions;
// identifiers are recovered, not original. See ../../../README.md.

#include "gta6decomp/rage_types.h"


void FUN_1401bc070(longlong param_1,undefined4 param_2)

{
  char cVar1;
  
  cVar1 = func_0x00014507a120(param_2);
  *(char *)(param_1 + 0xbc) = cVar1 + (cVar1 == '\0');
  return;
}

