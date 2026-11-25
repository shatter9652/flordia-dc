// Recovered from game_scarlett_master.exe (GTA VI, Xbox Series X, PE32+ x64)
// Address: 140026760  size: 35 bytes
// Name:    FUN_140026760
// Subsystem: core
//
// Referenced strings (0 in this body, 0 including direct callees):
// Callees: 
//
// Generated decompilation. Formatting follows MiscRef/GTAVSRC conventions;
// identifiers are recovered, not original. See ../../../README.md.

#include "gta6decomp/rage_types.h"


void FUN_140026760(longlong param_1)

{
  byte bVar1;
  
  bVar1 = (**(code **)(**(longlong **)(param_1 + 0x18) + 0x78))();
  *(byte *)(param_1 + 0x20) = *(byte *)(param_1 + 0x20) & 0xfe | bVar1;
  return;
}

