// Recovered from game_scarlett_master.exe (GTA VI, Xbox Series X, PE32+ x64)
// Address: 1400c0340  size: 42 bytes
// Name:    FUN_1400c0340
// Subsystem: core
//
// Referenced strings (0 in this body, 0 including direct callees):
// Callees: 
//
// Generated decompilation. Formatting follows MiscRef/GTAVSRC conventions;
// identifiers are recovered, not original. See ../../../README.md.

#include "gta6decomp/rage_types.h"


void FUN_1400c0340(undefined4 *param_1,undefined4 param_2)

{
  undefined4 uVar1;
  longlong lVar2;
  
  lVar2 = func_0x000144db7b80(param_2);
  if (lVar2 == 0) {
    uVar1 = 0;
  }
  else {
    uVar1 = *(undefined4 *)(*(longlong *)(lVar2 + 0x20) + 0x218);
  }
  *param_1 = uVar1;
  return;
}

