// Recovered from game_scarlett_master.exe (GTA VI, Xbox Series X, PE32+ x64)
// Address: 140184550  size: 78 bytes
// Name:    FUN_140184550
// Subsystem: core
//
// Referenced strings (0 in this body, 0 including direct callees):
// Callees: 
//
// Generated decompilation. Formatting follows MiscRef/GTAVSRC conventions;
// identifiers are recovered, not original. See ../../../README.md.

#include "gta6decomp/rage_types.h"


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined8 * FUN_140184550(undefined8 *param_1,int param_2,undefined8 param_3)

{
  longlong lVar1;
  undefined *puVar2;
  
  if (param_2 == 0xc) {
    puVar2 = &DAT_149e301d0;
    *param_1 = &DAT_149e301d0;
    param_1[1] = param_3;
    lVar1 = _DAT_149e301d0;
  }
  else {
    puVar2 = &DAT_149e301e0;
    param_3 = 0;
    *param_1 = &DAT_149e301e0;
    param_1[1] = 0;
    lVar1 = _DAT_149e301e0;
  }
  (**(code **)(lVar1 + 8))(puVar2,param_3);
  return param_1;
}

