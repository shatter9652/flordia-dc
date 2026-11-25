// Recovered from game_scarlett_master.exe (GTA VI, Xbox Series X, PE32+ x64)
// Address: 14012f6f0  size: 50 bytes
// Name:    FUN_14012f6f0
// Subsystem: core
//
// Referenced strings (0 in this body, 0 including direct callees):
// Callees: FUN_14012f730
//
// Generated decompilation. Formatting follows MiscRef/GTAVSRC conventions;
// identifiers are recovered, not original. See ../../../README.md.

#include "gta6decomp/rage_types.h"


undefined8 FUN_14012f6f0(longlong param_1)

{
  int iVar1;
  
  if (*(longlong *)(param_1 + 0x18) != 0) {
    iVar1 = FUN_14012f730(*(longlong *)(param_1 + 0x18),0);
    if (-1 < iVar1) {
      return 1;
    }
    if (0 < *(int *)(*(longlong *)(param_1 + 0x18) + 0x44)) {
      return 1;
    }
  }
  return 0;
}

