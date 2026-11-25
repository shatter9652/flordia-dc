// Recovered from game_scarlett_master.exe (GTA VI, Xbox Series X, PE32+ x64)
// Address: 14017f3b0  size: 54 bytes
// Name:    FUN_14017f3b0
// Subsystem: core
//
// Referenced strings (0 in this body, 0 including direct callees):
// Callees: FUN_145037a50
//
// Generated decompilation. Formatting follows MiscRef/GTAVSRC conventions;
// identifiers are recovered, not original. See ../../../README.md.

#include "gta6decomp/rage_types.h"


ulonglong FUN_14017f3b0(byte param_1,longlong param_2,longlong param_3)

{
  longlong in_RAX;
  undefined1 *puVar1;
  
  if ((param_1 & 1) == 0) {
    return 0;
  }
  if (param_3 == 0) {
    if (param_2 != 0) {
      puVar1 = (undefined1 *)(param_2 + 8);
      goto LAB_14017f3d6;
    }
    in_RAX = FUN_145037a50();
    param_3 = in_RAX;
  }
  puVar1 = (undefined1 *)(param_3 + 4);
LAB_14017f3d6:
  return CONCAT71((int7)((ulonglong)in_RAX >> 8),*puVar1) ^ 1;
}

