// Recovered from game_scarlett_master.exe (GTA VI, Xbox Series X, PE32+ x64)
// Address: 1400bf940  size: 34 bytes
// Name:    FUN_1400bf940
// Subsystem: core
//
// Referenced strings (0 in this body, 0 including direct callees):
// Callees: FUN_145288d30
//
// Generated decompilation. Formatting follows MiscRef/GTAVSRC conventions;
// identifiers are recovered, not original. See ../../../README.md.

#include "gta6decomp/rage_types.h"


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined4 FUN_1400bf940(void)

{
  longlong lVar1;
  undefined4 uVar2;
  
  lVar1 = FUN_145288d30();
  uVar2 = _DAT_145fc6ed8;
  if (lVar1 != 0) {
    uVar2 = *(undefined4 *)(lVar1 + 0x58);
  }
  return uVar2;
}

