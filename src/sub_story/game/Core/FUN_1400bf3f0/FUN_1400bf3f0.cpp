// Recovered from game_scarlett_master.exe (GTA VI, Xbox Series X, PE32+ x64)
// Address: 1400bf3f0  size: 139 bytes
// Name:    FUN_1400bf3f0
// Subsystem: core
//
// Referenced strings (0 in this body, 0 including direct callees):
// Callees: 
//
// Generated decompilation. Formatting follows MiscRef/GTAVSRC conventions;
// identifiers are recovered, not original. See ../../../README.md.

#include "gta6decomp/rage_types.h"


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

bool FUN_1400bf3f0(void)

{
  char cVar1;
  
  cVar1 = func_0x00014522f190(_DAT_14a1e8a70);
  if (cVar1 != '\0') {
    if (((5 < _DAT_147f56210) || ((DAT_14a1519f1 == '\x01' && (5 < _DAT_14a152238)))) &&
       (5 < _DAT_14a210db8)) {
      if (_DAT_147f5666c == 0) {
        _DAT_147f5666c = _DAT_14abbef40;
      }
      _DAT_147f56668 = _DAT_14abbef40;
      return 0x9c4 < (uint)(_DAT_14abbef40 - _DAT_147f5666c);
    }
    if ((uint)(_DAT_14abbef40 - _DAT_147f56668) < 0x1389) {
      return true;
    }
  }
  _DAT_147f5666c = 0;
  return false;
}

