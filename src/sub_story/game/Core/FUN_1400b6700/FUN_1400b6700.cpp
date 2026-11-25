// Recovered from game_scarlett_master.exe (GTA VI, Xbox Series X, PE32+ x64)
// Address: 1400b6700  size: 126 bytes
// Name:    FUN_1400b6700
// Subsystem: core
//
// Referenced strings (0 in this body, 0 including direct callees):
// Callees: FUN_1400b70d0
//
// Generated decompilation. Formatting follows MiscRef/GTAVSRC conventions;
// identifiers are recovered, not original. See ../../../README.md.

#include "gta6decomp/rage_types.h"


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

longlong FUN_1400b6700(undefined8 param_1,undefined8 param_2)

{
  longlong lVar1;
  
  if (_DAT_148d7ab20 < _DAT_148d52b6c) {
    LOCK();
    UNLOCK();
    if (_DAT_148d7ab20 < _DAT_148d52b6c) {
      lVar1 = *(longlong *)(_DAT_148d52b70 + (ulonglong)_DAT_148d7ab20 * 8);
      _DAT_148d7ab20 = _DAT_148d7ab20 + 1;
    }
    else {
      _DAT_148d7ab20 = _DAT_148d7ab20 + 1;
      lVar1 = func_0x000144f97130(0x170);
    }
  }
  else {
    lVar1 = func_0x000144f97130(0x170);
  }
  if (lVar1 == 0) {
    lVar1 = 0;
  }
  else {
    FUN_1400b70d0(lVar1,param_1,param_2);
  }
  return lVar1;
}

