// Recovered from game_scarlett_master.exe (GTA VI, Xbox Series X, PE32+ x64)
// Address: 1400f0c20  size: 54 bytes
// Name:    FUN_1400f0c20
// Subsystem: core
//
// Referenced strings (0 in this body, 0 including direct callees):
// Callees: FUN_144f7fa50
//
// Generated decompilation. Formatting follows MiscRef/GTAVSRC conventions;
// identifiers are recovered, not original. See ../../../README.md.

#include "gta6decomp/rage_types.h"


bool FUN_1400f0c20(undefined8 param_1,longlong *param_2,longlong param_3)

{
  int iVar1;
  
  iVar1 = FUN_144f7fa50(param_1,*param_2);
  if (iVar1 != 0) {
    *(undefined4 *)(param_2 + 4) = 0;
    *param_2 = param_3;
    *(longlong **)(param_3 + 0x30) = param_2;
  }
  return iVar1 != 0;
}

