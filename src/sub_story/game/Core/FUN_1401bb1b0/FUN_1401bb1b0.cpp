// Recovered from game_scarlett_master.exe (GTA VI, Xbox Series X, PE32+ x64)
// Address: 1401bb1b0  size: 73 bytes
// Name:    FUN_1401bb1b0
// Subsystem: core
//
// Referenced strings (0 in this body, 0 including direct callees):
// Callees: FUN_145079030
//
// Generated decompilation. Formatting follows MiscRef/GTAVSRC conventions;
// identifiers are recovered, not original. See ../../../README.md.

#include "gta6decomp/rage_types.h"


void FUN_1401bb1b0(undefined8 param_1,undefined8 param_2)

{
  longlong lVar1;
  
  lVar1 = func_0x000140019d80(param_1,0xec8b244);
  if (lVar1 == 0) {
    lVar1 = func_0x000140019d80(param_1,0x7c0d38f6);
  }
  FUN_145079030(param_2,lVar1);
  return;
}

