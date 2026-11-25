// Recovered from game_scarlett_master.exe (GTA VI, Xbox Series X, PE32+ x64)
// Address: 140070340  size: 40 bytes
// Name:    FUN_140070340
// Subsystem: core
//
// Referenced strings (0 in this body, 0 including direct callees):
// Callees: 
//
// Generated decompilation. Formatting follows MiscRef/GTAVSRC conventions;
// identifiers are recovered, not original. See ../../../README.md.

#include "gta6decomp/rage_types.h"


undefined2 FUN_140070340(longlong param_1)

{
  undefined2 uVar1;
  longlong lVar2;
  
  lVar2 = func_0x000144e371c0(*(undefined4 *)(*(longlong *)(param_1 + 8) + 0x9c));
  if (lVar2 == 0) {
    uVar1 = 1;
  }
  else {
    uVar1 = *(undefined2 *)(lVar2 + 0x60);
  }
  return uVar1;
}

