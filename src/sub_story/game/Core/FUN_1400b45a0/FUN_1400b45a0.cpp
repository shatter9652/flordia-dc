// Recovered from game_scarlett_master.exe (GTA VI, Xbox Series X, PE32+ x64)
// Address: 1400b45a0  size: 126 bytes
// Name:    FUN_1400b45a0
// Subsystem: core
//
// Referenced strings (0 in this body, 0 including direct callees):
// Callees: FUN_1400b5f60
//
// Generated decompilation. Formatting follows MiscRef/GTAVSRC conventions;
// identifiers are recovered, not original. See ../../../README.md.

#include "gta6decomp/rage_types.h"


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

longlong FUN_1400b45a0(undefined8 param_1,undefined8 param_2)

{
  longlong lVar1;
  
  if (_DAT_148d7ab2c < _DAT_148d55b9c) {
    LOCK();
    UNLOCK();
    if (_DAT_148d7ab2c < _DAT_148d55b9c) {
      lVar1 = *(longlong *)(_DAT_148d55ba0 + (ulonglong)_DAT_148d7ab2c * 8);
      _DAT_148d7ab2c = _DAT_148d7ab2c + 1;
    }
    else {
      _DAT_148d7ab2c = _DAT_148d7ab2c + 1;
      lVar1 = func_0x000144f97130(0x340);
    }
  }
  else {
    lVar1 = func_0x000144f97130(0x340);
  }
  if (lVar1 == 0) {
    lVar1 = 0;
  }
  else {
    FUN_1400b5f60(lVar1,param_1,param_2);
  }
  return lVar1;
}

