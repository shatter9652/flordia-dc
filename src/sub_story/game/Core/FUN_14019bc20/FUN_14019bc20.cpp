// Recovered from game_scarlett_master.exe (GTA VI, Xbox Series X, PE32+ x64)
// Address: 14019bc20  size: 67 bytes
// Name:    FUN_14019bc20
// Subsystem: core
//
// Referenced strings (0 in this body, 0 including direct callees):
// Callees: FUN_14019bc70, FUN_144eb3750
//
// Generated decompilation. Formatting follows MiscRef/GTAVSRC conventions;
// identifiers are recovered, not original. See ../../../README.md.

#include "gta6decomp/rage_types.h"


void FUN_14019bc20(longlong param_1)

{
  longlong lVar1;
  undefined8 uVar2;
  undefined4 uVar3;
  
  *(float *)(param_1 + 0x40) = *(float *)(param_1 + 0x44);
  if (*(float *)(param_1 + 0x44) <= 0.0) {
    lVar1 = *(longlong *)(param_1 + 8);
    uVar2 = FUN_144eb3750(*(undefined4 *)(lVar1 + 0x9c));
    uVar3 = FUN_14019bc70(uVar2,lVar1);
    *(undefined4 *)(param_1 + 0x40) = uVar3;
  }
  return;
}

