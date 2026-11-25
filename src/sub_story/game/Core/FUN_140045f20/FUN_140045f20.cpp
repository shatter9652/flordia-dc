// Recovered from game_scarlett_master.exe (GTA VI, Xbox Series X, PE32+ x64)
// Address: 140045f20  size: 66 bytes
// Name:    FUN_140045f20
// Subsystem: core
//
// Referenced strings (0 in this body, 0 including direct callees):
// Callees: FUN_1412cc840
//
// Generated decompilation. Formatting follows MiscRef/GTAVSRC conventions;
// identifiers are recovered, not original. See ../../../README.md.

#include "gta6decomp/rage_types.h"


bool FUN_140045f20(longlong *param_1)

{
  longlong lVar1;
  
  lVar1 = func_0x000144e5b020();
  if (lVar1 != 0) {
    param_1[1] = 0x2000;
    lVar1 = FUN_1412cc840(0x2000);
    *param_1 = lVar1;
    func_0x000145f40580(lVar1,0,param_1[1]);
  }
  return *param_1 != 0;
}

