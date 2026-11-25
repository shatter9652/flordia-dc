// Recovered from game_scarlett_master.exe (GTA VI, Xbox Series X, PE32+ x64)
// Address: 14012e220  size: 45 bytes
// Name:    FUN_14012e220
// Subsystem: core
//
// Referenced strings (0 in this body, 0 including direct callees):
// Callees: FUN_1424da360
//
// Generated decompilation. Formatting follows MiscRef/GTAVSRC conventions;
// identifiers are recovered, not original. See ../../../README.md.

#include "gta6decomp/rage_types.h"


undefined8 FUN_14012e220(longlong param_1)

{
  undefined8 uVar1;
  float fVar2;
  
  if (*(int *)(param_1 + 8) == 0) {
    uVar1 = 0;
  }
  else {
    fVar2 = (float)FUN_1424da360();
    uVar1 = CONCAT71((int7)((ulonglong)*(longlong *)(param_1 + 0x10) >> 8),
                     fVar2 < *(float *)(*(longlong *)(param_1 + 0x10) + 0x40));
  }
  return uVar1;
}

