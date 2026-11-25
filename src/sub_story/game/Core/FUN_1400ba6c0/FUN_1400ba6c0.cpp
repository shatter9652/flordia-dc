// Recovered from game_scarlett_master.exe (GTA VI, Xbox Series X, PE32+ x64)
// Address: 1400ba6c0  size: 137 bytes
// Name:    FUN_1400ba6c0
// Subsystem: core
//
// Referenced strings (0 in this body, 0 including direct callees):
// Callees: FUN_1400ba750
//
// Generated decompilation. Formatting follows MiscRef/GTAVSRC conventions;
// identifiers are recovered, not original. See ../../../README.md.

#include "gta6decomp/rage_types.h"


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

longlong FUN_1400ba6c0(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  longlong lVar1;
  
  if (_DAT_148d7ab10 < _DAT_148d4eb2c) {
    LOCK();
    UNLOCK();
    if (_DAT_148d7ab10 < _DAT_148d4eb2c) {
      lVar1 = *(longlong *)(_DAT_148d4eb30 + (ulonglong)_DAT_148d7ab10 * 8);
      _DAT_148d7ab10 = _DAT_148d7ab10 + 1;
    }
    else {
      _DAT_148d7ab10 = _DAT_148d7ab10 + 1;
      lVar1 = func_0x000144f97130(0x4200);
    }
  }
  else {
    lVar1 = func_0x000144f97130(0x4200);
  }
  if (lVar1 == 0) {
    lVar1 = 0;
  }
  else {
    FUN_1400ba750(lVar1,param_1,param_2,param_3);
  }
  return lVar1;
}

