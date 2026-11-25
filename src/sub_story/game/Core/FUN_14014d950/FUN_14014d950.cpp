// Recovered from game_scarlett_master.exe (GTA VI, Xbox Series X, PE32+ x64)
// Address: 14014d950  size: 61 bytes
// Name:    FUN_14014d950
// Subsystem: core
//
// Referenced strings (0 in this body, 0 including direct callees):
// Callees: FUN_14014e780
//
// Generated decompilation. Formatting follows MiscRef/GTAVSRC conventions;
// identifiers are recovered, not original. See ../../../README.md.

#include "gta6decomp/rage_types.h"


void FUN_14014d950(longlong param_1)

{
  char cVar1;
  byte bVar2;
  
  bVar2 = *(byte *)(param_1 + 0x70);
  if ((bVar2 & 0x40) == 0) {
    *(byte *)(param_1 + 0x70) = bVar2 | 0x40;
    if (*(longlong *)(param_1 + 0x10) == 0) {
      bVar2 = bVar2 & 0x7f | 0x40;
    }
    else {
      cVar1 = FUN_14014e780();
      bVar2 = *(byte *)(param_1 + 0x70) & 0x7f | cVar1 << 7;
    }
    *(byte *)(param_1 + 0x70) = bVar2;
  }
  return;
}

