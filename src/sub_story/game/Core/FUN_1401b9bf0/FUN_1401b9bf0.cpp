// Recovered from game_scarlett_master.exe (GTA VI, Xbox Series X, PE32+ x64)
// Address: 1401b9bf0  size: 73 bytes
// Name:    FUN_1401b9bf0
// Subsystem: core
//
// Referenced strings (0 in this body, 0 including direct callees):
// Callees: FUN_145079030
//
// Generated decompilation. Formatting follows MiscRef/GTAVSRC conventions;
// identifiers are recovered, not original. See ../../../README.md.

#include "gta6decomp/rage_types.h"


void FUN_1401b9bf0(undefined8 param_1,undefined8 param_2)

{
  longlong lVar1;
  
  lVar1 = func_0x000140019d80(param_1,0xc4202659);
  if (lVar1 == 0) {
    lVar1 = func_0x000140019d80(param_1,0xf5d26b83);
  }
  FUN_145079030(param_2,lVar1);
  return;
}

