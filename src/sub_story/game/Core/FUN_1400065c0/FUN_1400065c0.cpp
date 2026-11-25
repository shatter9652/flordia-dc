// Recovered from game_scarlett_master.exe (GTA VI, Xbox Series X, PE32+ x64)
// Address: 1400065c0  size: 64 bytes
// Name:    FUN_1400065c0
// Subsystem: core
//
// Referenced strings (0 in this body, 0 including direct callees):
// Callees: FUN_1428c8c90
//
// Generated decompilation. Formatting follows MiscRef/GTAVSRC conventions;
// identifiers are recovered, not original. See ../../../README.md.

#include "gta6decomp/rage_types.h"


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined8 FUN_1400065c0(void)

{
  char cVar1;
  
  while( true ) {
    if (DAT_149c3e0be == 0xff) {
      return _DAT_149c3e0a0;
    }
    cVar1 = (**(code **)(**(longlong **)
                           (*(longlong *)(_DAT_149c3e088 + (ulonglong)DAT_149c3e0be * 8) + 0x10) +
                        0x260))();
    if (cVar1 == '\0') break;
    FUN_1428c8c90();
  }
  return _DAT_149c3e0a0;
}

