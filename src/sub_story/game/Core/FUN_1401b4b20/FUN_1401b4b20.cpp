// Recovered from game_scarlett_master.exe (GTA VI, Xbox Series X, PE32+ x64)
// Address: 1401b4b20  size: 58 bytes
// Name:    FUN_1401b4b20
// Subsystem: core
//
// Referenced strings (0 in this body, 0 including direct callees):
// Callees: 
//
// Generated decompilation. Formatting follows MiscRef/GTAVSRC conventions;
// identifiers are recovered, not original. See ../../../README.md.

#include "gta6decomp/rage_types.h"


void FUN_1401b4b20(longlong param_1,char param_2)

{
  longlong lVar1;
  bool bVar2;
  
  if (param_2 == '\0') {
    bVar2 = false;
  }
  else {
    lVar1 = (**(code **)(**(longlong **)(param_1 + 0x20) + 0xd0))(*(longlong **)(param_1 + 0x20));
    bVar2 = lVar1 != 0;
  }
  *(byte *)(param_1 + 0x50) = *(byte *)(param_1 + 0x50) & 0xfe | bVar2;
  return;
}

