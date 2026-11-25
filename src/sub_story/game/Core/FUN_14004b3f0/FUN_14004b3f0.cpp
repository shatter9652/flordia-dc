// Recovered from game_scarlett_master.exe (GTA VI, Xbox Series X, PE32+ x64)
// Address: 14004b3f0  size: 63 bytes
// Name:    FUN_14004b3f0
// Subsystem: core
//
// Referenced strings (0 in this body, 0 including direct callees):
// Callees: 
//
// Generated decompilation. Formatting follows MiscRef/GTAVSRC conventions;
// identifiers are recovered, not original. See ../../../README.md.

#include "gta6decomp/rage_types.h"


void FUN_14004b3f0(longlong param_1,ulonglong param_2,undefined4 param_3)

{
  longlong lVar1;
  
  if (param_1 != 0) {
    lVar1 = func_0x000144ec34b0(*(undefined4 *)(param_1 + 0x9c));
    if (lVar1 != 0) {
      LOCK();
      *(undefined4 *)(lVar1 + 0x48 + (param_2 & 0xffffffff) * 4) = param_3;
      UNLOCK();
      return;
    }
  }
  return;
}

