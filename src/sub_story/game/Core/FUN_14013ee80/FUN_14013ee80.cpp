// Recovered from game_scarlett_master.exe (GTA VI, Xbox Series X, PE32+ x64)
// Address: 14013ee80  size: 47 bytes
// Name:    FUN_14013ee80
// Subsystem: core
//
// Referenced strings (0 in this body, 0 including direct callees):
// Callees: FUN_144fff2b0
//
// Generated decompilation. Formatting follows MiscRef/GTAVSRC conventions;
// identifiers are recovered, not original. See ../../../README.md.

#include "gta6decomp/rage_types.h"


longlong FUN_14013ee80(longlong param_1)

{
  uint uVar1;
  longlong lVar2;
  
  uVar1 = FUN_144fff2b0();
  lVar2 = 0;
  if (uVar1 < 0x100) {
    lVar2 = param_1 + 0x10 + (ulonglong)uVar1 * 0x160;
  }
  return lVar2;
}

