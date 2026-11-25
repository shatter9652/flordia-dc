// Recovered from game_scarlett_master.exe (GTA VI, Xbox Series X, PE32+ x64)
// Address: 14014c340  size: 89 bytes
// Name:    FUN_14014c340
// Subsystem: core
//
// Referenced strings (0 in this body, 0 including direct callees):
// Callees: FUN_14014c3a0
//
// Generated decompilation. Formatting follows MiscRef/GTAVSRC conventions;
// identifiers are recovered, not original. See ../../../README.md.

#include "gta6decomp/rage_types.h"


void FUN_14014c340(longlong param_1)

{
  if ((*(int *)(param_1 + 0x30) == 0) && (*(longlong *)(param_1 + 0x58) != 0)) {
    FUN_14014c3a0(param_1,*(undefined8 *)(*(longlong *)(param_1 + 0x48) + 0x18),param_1 + 0x68,0x19)
    ;
    FUN_14014c3a0(param_1,*(undefined8 *)(*(longlong *)(param_1 + 0x48) + 0x20),param_1 + 0x88,0x15)
    ;
    *(undefined4 *)(param_1 + 0x30) = 1;
  }
  return;
}

