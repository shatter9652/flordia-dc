// Recovered from game_scarlett_master.exe (GTA VI, Xbox Series X, PE32+ x64)
// Address: 1400bac80  size: 126 bytes
// Name:    FUN_1400bac80
// Subsystem: core
//
// Referenced strings (0 in this body, 0 including direct callees):
// Callees: FUN_1400bad00
//
// Generated decompilation. Formatting follows MiscRef/GTAVSRC conventions;
// identifiers are recovered, not original. See ../../../README.md.

#include "gta6decomp/rage_types.h"


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

longlong FUN_1400bac80(undefined8 param_1,undefined8 param_2)

{
  longlong lVar1;
  
  if (_DAT_148d7ab00 < _DAT_148d4aaec) {
    LOCK();
    UNLOCK();
    if (_DAT_148d7ab00 < _DAT_148d4aaec) {
      lVar1 = *(longlong *)(_DAT_148d4aaf0 + (ulonglong)_DAT_148d7ab00 * 8);
      _DAT_148d7ab00 = _DAT_148d7ab00 + 1;
    }
    else {
      _DAT_148d7ab00 = _DAT_148d7ab00 + 1;
      lVar1 = func_0x000144f97130(0x1b0);
    }
  }
  else {
    lVar1 = func_0x000144f97130(0x1b0);
  }
  if (lVar1 == 0) {
    lVar1 = 0;
  }
  else {
    FUN_1400bad00(lVar1,param_1,param_2);
  }
  return lVar1;
}

