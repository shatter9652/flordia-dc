// Recovered from game_scarlett_master.exe (GTA VI, Xbox Series X, PE32+ x64)
// Address: 14014e480  size: 66 bytes
// Name:    FUN_14014e480
// Subsystem: core
//
// Referenced strings (0 in this body, 0 including direct callees):
// Callees: FUN_14501bb20
//
// Generated decompilation. Formatting follows MiscRef/GTAVSRC conventions;
// identifiers are recovered, not original. See ../../../README.md.

#include "gta6decomp/rage_types.h"


void FUN_14014e480(longlong param_1)

{
  char cVar1;
  byte bVar2;
  
  bVar2 = *(byte *)(param_1 + 0x70);
  if ((bVar2 & 0x10) == 0) {
    *(byte *)(param_1 + 0x70) = bVar2 | 0x10;
    if (*(longlong *)(param_1 + 0x10) == 0) {
      bVar2 = bVar2 & 0xdf | 0x10;
    }
    else {
      cVar1 = FUN_14501bb20(*(longlong *)(param_1 + 0x10),0,1);
      bVar2 = *(byte *)(param_1 + 0x70) & 0xdf | cVar1 << 5;
    }
    *(byte *)(param_1 + 0x70) = bVar2;
  }
  return;
}

