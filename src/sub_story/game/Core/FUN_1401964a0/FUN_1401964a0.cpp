// Recovered from game_scarlett_master.exe (GTA VI, Xbox Series X, PE32+ x64)
// Address: 1401964a0  size: 57 bytes
// Name:    FUN_1401964a0
// Subsystem: core
//
// Referenced strings (0 in this body, 0 including direct callees):
// Callees: 
//
// Generated decompilation. Formatting follows MiscRef/GTAVSRC conventions;
// identifiers are recovered, not original. See ../../../README.md.

#include "gta6decomp/rage_types.h"


bool FUN_1401964a0(longlong *param_1)

{
  longlong lVar1;
  bool bVar2;
  
  lVar1 = (**(code **)(*param_1 + 0xa0))(param_1,0);
  if (lVar1 == 0) {
    lVar1 = (**(code **)(*param_1 + 0xa0))(param_1,1);
    bVar2 = lVar1 != 0;
  }
  else {
    bVar2 = true;
  }
  return bVar2;
}

