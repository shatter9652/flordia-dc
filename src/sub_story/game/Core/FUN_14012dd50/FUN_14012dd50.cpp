// Recovered from game_scarlett_master.exe (GTA VI, Xbox Series X, PE32+ x64)
// Address: 14012dd50  size: 79 bytes
// Name:    FUN_14012dd50
// Subsystem: core
//
// Referenced strings (0 in this body, 0 including direct callees):
// Callees: FUN_14012dda0
//
// Generated decompilation. Formatting follows MiscRef/GTAVSRC conventions;
// identifiers are recovered, not original. See ../../../README.md.

#include "gta6decomp/rage_types.h"


void FUN_14012dd50(undefined8 param_1,int param_2,undefined4 param_3,undefined8 param_4)

{
  bool bVar1;
  byte bVar2;
  int iVar3;
  
  if (param_2 < 4) {
    iVar3 = 3;
    do {
      bVar2 = FUN_14012dda0(param_1,iVar3 + 1,param_3,param_4);
      bVar1 = iVar3 <= param_2;
      iVar3 = iVar3 + -1;
    } while ((bVar1 | bVar2) != 1);
  }
  return;
}

