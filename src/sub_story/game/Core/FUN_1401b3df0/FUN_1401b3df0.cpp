// Recovered from game_scarlett_master.exe (GTA VI, Xbox Series X, PE32+ x64)
// Address: 1401b3df0  size: 61 bytes
// Name:    FUN_1401b3df0
// Subsystem: core
//
// Referenced strings (0 in this body, 0 including direct callees):
// Callees: 
//
// Generated decompilation. Formatting follows MiscRef/GTAVSRC conventions;
// identifiers are recovered, not original. See ../../../README.md.

#include "gta6decomp/rage_types.h"


longlong * FUN_1401b3df0(undefined8 param_1,longlong *param_2)

{
  longlong lVar1;
  
  lVar1 = func_0x000140019d80(param_1,0x4d880f9b);
  if (lVar1 == 0) {
    lVar1 = func_0x000140019d90(param_1,0x7d25bd69);
  }
  if (lVar1 == 0) {
    *param_2 = 0;
    *(undefined4 *)(param_2 + 2) = 1;
    *(undefined4 *)param_2 = 0;
    return param_2;
  }
  *(undefined4 *)(param_2 + 2) = 0;
  *param_2 = lVar1;
  return param_2;
}

