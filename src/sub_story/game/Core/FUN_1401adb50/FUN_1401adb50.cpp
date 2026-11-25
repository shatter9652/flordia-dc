// Recovered from game_scarlett_master.exe (GTA VI, Xbox Series X, PE32+ x64)
// Address: 1401adb50  size: 49 bytes
// Name:    FUN_1401adb50
// Subsystem: core
//
// Referenced strings (0 in this body, 0 including direct callees):
// Callees: FUN_145071380
//
// Generated decompilation. Formatting follows MiscRef/GTAVSRC conventions;
// identifiers are recovered, not original. See ../../../README.md.

#include "gta6decomp/rage_types.h"


void FUN_1401adb50(longlong param_1)

{
  longlong lVar1;
  
  if (-1 < *(int *)(param_1 + 0x154)) {
    lVar1 = FUN_145071380();
    if (lVar1 != 0) {
      func_0x0001401adb90(lVar1);
    }
    *(byte *)(param_1 + 0x148) = *(byte *)(param_1 + 0x148) | 0x80;
  }
  return;
}

