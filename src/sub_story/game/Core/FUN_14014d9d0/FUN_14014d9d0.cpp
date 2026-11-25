// Recovered from game_scarlett_master.exe (GTA VI, Xbox Series X, PE32+ x64)
// Address: 14014d9d0  size: 65 bytes
// Name:    FUN_14014d9d0
// Subsystem: core
//
// Referenced strings (0 in this body, 0 including direct callees):
// Callees: FUN_14501bab0
//
// Generated decompilation. Formatting follows MiscRef/GTAVSRC conventions;
// identifiers are recovered, not original. See ../../../README.md.

#include "gta6decomp/rage_types.h"


void FUN_14014d9d0(longlong param_1)

{
  char cVar1;
  byte bVar2;
  
  bVar2 = *(byte *)(param_1 + 0x70);
  if ((bVar2 & 1) == 0) {
    *(byte *)(param_1 + 0x70) = bVar2 | 1;
    if (*(longlong *)(param_1 + 0x10) == 0) {
      bVar2 = bVar2 & 0xfd | 1;
    }
    else {
      cVar1 = FUN_14501bab0(*(longlong *)(param_1 + 0x10),0,0);
      bVar2 = *(byte *)(param_1 + 0x70) & 0xfd | cVar1 * '\x02';
    }
    *(byte *)(param_1 + 0x70) = bVar2;
  }
  return;
}

