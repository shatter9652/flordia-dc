// Recovered from game_scarlett_master.exe (GTA VI, Xbox Series X, PE32+ x64)
// Address: 1401012d0  size: 68 bytes
// Name:    FUN_1401012d0
// Subsystem: core
//
// Referenced strings (0 in this body, 0 including direct callees):
// Callees: 
//
// Generated decompilation. Formatting follows MiscRef/GTAVSRC conventions;
// identifiers are recovered, not original. See ../../../README.md.

#include "gta6decomp/rage_types.h"


undefined8 FUN_1401012d0(longlong param_1,longlong param_2)

{
  longlong lVar1;
  longlong lVar2;
  
  lVar1 = *(longlong *)(param_2 + 0x28);
  if ((lVar1 != 0) && (lVar2 = func_0x000144dd0bd0(*(undefined4 *)(param_1 + 0x58)), lVar1 == lVar2)
     ) {
    if (*(int *)(param_1 + 0x70) == 0x4c) {
      return 1;
    }
    if ((*(int *)(param_1 + 0x70) == 1) && (*(int *)(param_1 + 0x984) == 0)) {
      return 1;
    }
  }
  return 0;
}

