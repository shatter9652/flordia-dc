// Recovered from game_scarlett_master.exe (GTA VI, Xbox Series X, PE32+ x64)
// Address: 1400b90c0  size: 126 bytes
// Name:    FUN_1400b90c0
// Subsystem: core
//
// Referenced strings (0 in this body, 0 including direct callees):
// Callees: FUN_1400b9140
//
// Generated decompilation. Formatting follows MiscRef/GTAVSRC conventions;
// identifiers are recovered, not original. See ../../../README.md.

#include "gta6decomp/rage_types.h"


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

longlong FUN_1400b90c0(undefined8 param_1,undefined8 param_2)

{
  longlong lVar1;
  
  if (_DAT_148d7aafc < _DAT_148d49adc) {
    LOCK();
    UNLOCK();
    if (_DAT_148d7aafc < _DAT_148d49adc) {
      lVar1 = *(longlong *)(_DAT_148d49ae0 + (ulonglong)_DAT_148d7aafc * 8);
      _DAT_148d7aafc = _DAT_148d7aafc + 1;
    }
    else {
      _DAT_148d7aafc = _DAT_148d7aafc + 1;
      lVar1 = func_0x000144f97130(0x150);
    }
  }
  else {
    lVar1 = func_0x000144f97130(0x150);
  }
  if (lVar1 == 0) {
    lVar1 = 0;
  }
  else {
    FUN_1400b9140(lVar1,param_1,param_2);
  }
  return lVar1;
}

