// Recovered from game_scarlett_master.exe (GTA VI, Xbox Series X, PE32+ x64)
// Address: 1401c0050  size: 45 bytes
// Name:    FUN_1401c0050
// Subsystem: core
//
// Referenced strings (0 in this body, 0 including direct callees):
// Callees: 
//
// Generated decompilation. Formatting follows MiscRef/GTAVSRC conventions;
// identifiers are recovered, not original. See ../../../README.md.

#include "gta6decomp/rage_types.h"


byte FUN_1401c0050(void)

{
  byte bVar1;
  longlong lVar2;
  
  lVar2 = func_0x000144e4f2e0();
  if (lVar2 == 0) {
    bVar1 = 0;
  }
  else {
    bVar1 = *(longlong *)(lVar2 + 0xb0) != 0 & *(byte *)(lVar2 + 0x121) >> 4;
  }
  return bVar1;
}

