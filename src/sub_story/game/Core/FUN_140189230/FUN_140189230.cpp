// Recovered from game_scarlett_master.exe (GTA VI, Xbox Series X, PE32+ x64)
// Address: 140189230  size: 76 bytes
// Name:    FUN_140189230
// Subsystem: core
//
// Referenced strings (0 in this body, 0 including direct callees):
// Callees: FUN_144ed5300, FUN_145042910
//
// Generated decompilation. Formatting follows MiscRef/GTAVSRC conventions;
// identifiers are recovered, not original. See ../../../README.md.

#include "gta6decomp/rage_types.h"


void FUN_140189230(uint param_1,longlong param_2)

{
  longlong lVar1;
  int iVar2;
  longlong lVar3;
  
  if (param_1 != 0) {
    lVar3 = 0;
    do {
      lVar1 = *(longlong *)(param_2 + lVar3);
      iVar2 = FUN_145042910(lVar1);
      if ((0 < iVar2) || (0 < *(int *)(lVar1 + 0x58))) {
        FUN_144ed5300(lVar1);
      }
      lVar3 = lVar3 + 8;
    } while ((ulonglong)param_1 << 3 != lVar3);
  }
  return;
}

