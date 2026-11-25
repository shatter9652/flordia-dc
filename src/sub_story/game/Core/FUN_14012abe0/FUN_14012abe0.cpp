// Recovered from game_scarlett_master.exe (GTA VI, Xbox Series X, PE32+ x64)
// Address: 14012abe0  size: 49 bytes
// Name:    FUN_14012abe0
// Subsystem: core
//
// Referenced strings (0 in this body, 0 including direct callees):
// Callees: 
//
// Generated decompilation. Formatting follows MiscRef/GTAVSRC conventions;
// identifiers are recovered, not original. See ../../../README.md.

#include "gta6decomp/rage_types.h"


bool FUN_14012abe0(longlong param_1)

{
  char cVar1;
  longlong lVar2;
  bool bVar3;
  
  func_0x000144ec8b40();
  cVar1 = func_0x00014012ac20();
  if (cVar1 == '\0') {
    bVar3 = false;
  }
  else {
    lVar2 = func_0x000144de7c70(*(undefined4 *)(param_1 + 0xfc0));
    bVar3 = lVar2 == 0;
  }
  return bVar3;
}

