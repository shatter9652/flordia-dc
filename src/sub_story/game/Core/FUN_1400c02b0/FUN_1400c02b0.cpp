// Recovered from game_scarlett_master.exe (GTA VI, Xbox Series X, PE32+ x64)
// Address: 1400c02b0  size: 44 bytes
// Name:    FUN_1400c02b0
// Subsystem: core
//
// Referenced strings (0 in this body, 0 including direct callees):
// Callees: 
//
// Generated decompilation. Formatting follows MiscRef/GTAVSRC conventions;
// identifiers are recovered, not original. See ../../../README.md.

#include "gta6decomp/rage_types.h"


byte FUN_1400c02b0(void)

{
  byte bVar1;
  longlong lVar2;
  
  lVar2 = func_0x000144ef6280();
  if (lVar2 == 0) {
    bVar1 = 0;
  }
  else if ((*(byte *)(lVar2 + 0x1e) & 0x20) == 0) {
    bVar1 = (*(byte *)(lVar2 + 0xaa) & 0x20) >> 5;
  }
  else {
    bVar1 = 1;
  }
  return bVar1;
}

