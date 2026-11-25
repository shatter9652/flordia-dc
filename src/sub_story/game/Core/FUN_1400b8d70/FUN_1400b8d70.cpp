// Recovered from game_scarlett_master.exe (GTA VI, Xbox Series X, PE32+ x64)
// Address: 1400b8d70  size: 137 bytes
// Name:    FUN_1400b8d70
// Subsystem: core
//
// Referenced strings (0 in this body, 0 including direct callees):
// Callees: FUN_1400b8e80
//
// Generated decompilation. Formatting follows MiscRef/GTAVSRC conventions;
// identifiers are recovered, not original. See ../../../README.md.

#include "gta6decomp/rage_types.h"


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

longlong FUN_1400b8d70(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  longlong lVar1;
  
  if (_DAT_148d7ab14 < _DAT_148d4fb3c) {
    LOCK();
    UNLOCK();
    if (_DAT_148d7ab14 < _DAT_148d4fb3c) {
      lVar1 = *(longlong *)(_DAT_148d4fb40 + (ulonglong)_DAT_148d7ab14 * 8);
      _DAT_148d7ab14 = _DAT_148d7ab14 + 1;
    }
    else {
      _DAT_148d7ab14 = _DAT_148d7ab14 + 1;
      lVar1 = func_0x000144f97130(400);
    }
  }
  else {
    lVar1 = func_0x000144f97130(400);
  }
  if (lVar1 == 0) {
    lVar1 = 0;
  }
  else {
    FUN_1400b8e80(lVar1,param_1,param_2,param_3);
  }
  return lVar1;
}

