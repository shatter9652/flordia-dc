// Recovered from game_scarlett_master.exe (GTA VI, Xbox Series X, PE32+ x64)
// Address: 14019c390  size: 75 bytes
// Name:    FUN_14019c390
// Subsystem: core
//
// Referenced strings (0 in this body, 0 including direct callees):
// Callees: 
//
// Generated decompilation. Formatting follows MiscRef/GTAVSRC conventions;
// identifiers are recovered, not original. See ../../../README.md.

#include "gta6decomp/rage_types.h"


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

float FUN_14019c390(longlong *param_1)

{
  longlong lVar1;
  float *pfVar2;
  
  lVar1 = (**(code **)(*param_1 + 0x40))();
  if (lVar1 == 0) {
    lVar1 = (**(code **)(*param_1 + 0x28))(param_1);
    if (lVar1 == 0) {
      return _DAT_145fc6ed8;
    }
    pfVar2 = (float *)(lVar1 + 0x6c);
  }
  else {
    pfVar2 = (float *)(*(longlong *)(lVar1 + 8) + 0x1c);
  }
  return *pfVar2 + _DAT_145fc6ed8;
}

