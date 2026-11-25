// Recovered from game_scarlett_master.exe (GTA VI, Xbox Series X, PE32+ x64)
// Address: 1400705e0  size: 58 bytes
// Name:    FUN_1400705e0
// Subsystem: core
//
// Referenced strings (0 in this body, 0 including direct callees):
// Callees: 
//
// Generated decompilation. Formatting follows MiscRef/GTAVSRC conventions;
// identifiers are recovered, not original. See ../../../README.md.

#include "gta6decomp/rage_types.h"


void FUN_1400705e0(ulonglong param_1,longlong param_2)

{
  longlong lVar1;
  
  if (((((param_1 & 1) != 0) && (*(int *)(param_2 + 0x20) == 0)) && (*(int *)(param_2 + 0x24) != 0))
     && (*(longlong *)(param_2 + 8) != 0)) {
    lVar1 = func_0x000144e371c0(*(undefined4 *)(*(longlong *)(param_2 + 8) + 0x9c));
    if (lVar1 != 0) {
      LOCK();
      *(undefined1 *)(lVar1 + 0x62) = 1;
      UNLOCK();
    }
  }
  return;
}

