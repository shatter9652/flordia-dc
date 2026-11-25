// Recovered from game_scarlett_master.exe (GTA VI, Xbox Series X, PE32+ x64)
// Address: 14010e490  size: 64 bytes
// Name:    FUN_14010e490
// Subsystem: core
//
// Referenced strings (0 in this body, 0 including direct callees):
// Callees: FUN_1400746e0
//
// Generated decompilation. Formatting follows MiscRef/GTAVSRC conventions;
// identifiers are recovered, not original. See ../../../README.md.

#include "gta6decomp/rage_types.h"


undefined4 FUN_14010e490(longlong *param_1,undefined4 param_2)

{
  longlong lVar1;
  undefined4 uStack_14;
  
  uStack_14 = 0xffffffff;
  lVar1 = (**(code **)(*param_1 + 0xa8))();
  if (lVar1 == 0) {
    uStack_14 = 0xffffffff;
  }
  else {
    FUN_1400746e0(lVar1,param_2,&uStack_14);
  }
  return uStack_14;
}

