// Recovered from game_scarlett_master.exe (GTA VI, Xbox Series X, PE32+ x64)
// Address: 14018e3d0  size: 63 bytes
// Name:    FUN_14018e3d0
// Subsystem: core
//
// Referenced strings (0 in this body, 0 including direct callees):
// Callees: FUN_1451ab760
//
// Generated decompilation. Formatting follows MiscRef/GTAVSRC conventions;
// identifiers are recovered, not original. See ../../../README.md.

#include "gta6decomp/rage_types.h"


void FUN_14018e3d0(longlong param_1)

{
  int iVar1;
  
  if ((*(int *)(param_1 + 0x80) == 0) && (*(longlong *)(param_1 + 0x78) != 0)) {
    iVar1 = FUN_1451ab760(*(undefined8 *)(*(longlong *)(param_1 + 0x78) + 0x10),
                          *(undefined4 *)(param_1 + 0x6c));
    if (iVar1 == 0) {
      *(undefined4 *)(param_1 + 0x80) = 1;
    }
  }
  return;
}

