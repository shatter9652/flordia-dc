// Recovered from game_scarlett_master.exe (GTA VI, Xbox Series X, PE32+ x64)
// Address: 140065f80  size: 45 bytes
// Name:    FUN_140065f80
// Subsystem: core
//
// Referenced strings (0 in this body, 0 including direct callees):
// Callees: FUN_144ed1510
//
// Generated decompilation. Formatting follows MiscRef/GTAVSRC conventions;
// identifiers are recovered, not original. See ../../../README.md.

#include "gta6decomp/rage_types.h"


void FUN_140065f80(undefined8 param_1,undefined8 param_2,undefined4 *param_3)

{
  longlong lVar1;
  undefined1 auStack_18 [16];
  
  lVar1 = FUN_144ed1510(*param_3);
  if ((lVar1 != 0) && (*(longlong *)(lVar1 + 0x88) != 0)) {
    FUN_144daa2b0(auStack_18);
    if (*(int *)(lVar1 + 0x380) == 0) {
      func_0x000144ead270(lVar1);
    }
    return;
  }
  return;
}

