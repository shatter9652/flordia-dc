// Recovered from game_scarlett_master.exe (GTA VI, Xbox Series X, PE32+ x64)
// Address: 14014e4d0  size: 83 bytes
// Name:    FUN_14014e4d0
// Subsystem: core
//
// Referenced strings (0 in this body, 0 including direct callees):
// Callees: FUN_14014ea20
//
// Generated decompilation. Formatting follows MiscRef/GTAVSRC conventions;
// identifiers are recovered, not original. See ../../../README.md.

#include "gta6decomp/rage_types.h"


void FUN_14014e4d0(longlong *param_1)

{
  char cVar1;
  byte bVar2;
  
  bVar2 = *(byte *)((longlong)param_1 + 0x72);
  if ((bVar2 & 4) == 0) {
    *(byte *)((longlong)param_1 + 0x72) = bVar2 | 4;
    if (param_1[7] != 0) {
      if (*param_1 == param_1[7]) {
        bVar2 = bVar2 | 0xc;
      }
      else {
        cVar1 = FUN_14014ea20();
        bVar2 = *(byte *)((longlong)param_1 + 0x72) & 0xf7 | cVar1 << 3;
      }
      *(byte *)((longlong)param_1 + 0x72) = bVar2;
    }
  }
  return;
}

