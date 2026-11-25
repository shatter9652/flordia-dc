// Recovered from game_scarlett_master.exe (GTA VI, Xbox Series X, PE32+ x64)
// Address: 140177b20  size: 62 bytes
// Name:    FUN_140177b20
// Subsystem: core
//
// Referenced strings (0 in this body, 0 including direct callees):
// Callees: 
//
// Generated decompilation. Formatting follows MiscRef/GTAVSRC conventions;
// identifiers are recovered, not original. See ../../../README.md.

#include "gta6decomp/rage_types.h"


bool FUN_140177b20(undefined4 param_1,undefined4 param_2,undefined4 param_3)

{
  char cVar1;
  longlong lVar2;
  bool bVar3;
  
  lVar2 = func_0x000144eb3780(param_3);
  cVar1 = func_0x000140272050(param_1,param_2);
  if (lVar2 == 0 || cVar1 != '\x01') {
    bVar3 = false;
  }
  else {
    bVar3 = *(char *)(lVar2 + 0x41) != '\0';
  }
  return bVar3;
}

