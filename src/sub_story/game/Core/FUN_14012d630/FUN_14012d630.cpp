// Recovered from game_scarlett_master.exe (GTA VI, Xbox Series X, PE32+ x64)
// Address: 14012d630  size: 44 bytes
// Name:    FUN_14012d630
// Subsystem: core
//
// Referenced strings (0 in this body, 0 including direct callees):
// Callees: FUN_14012eb70
//
// Generated decompilation. Formatting follows MiscRef/GTAVSRC conventions;
// identifiers are recovered, not original. See ../../../README.md.

#include "gta6decomp/rage_types.h"


bool FUN_14012d630(int *param_1)

{
  longlong lVar1;
  bool bVar2;
  
  if (*(longlong *)(param_1 + 6) == 0) {
    bVar2 = false;
    if ((*param_1 != 0) && ((*(byte *)(param_1 + 10) & 1) == 0)) {
      lVar1 = FUN_14012eb70();
      bVar2 = lVar1 != 0;
    }
  }
  else {
    bVar2 = true;
  }
  return bVar2;
}

