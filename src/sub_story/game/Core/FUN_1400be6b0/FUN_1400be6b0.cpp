// Recovered from game_scarlett_master.exe (GTA VI, Xbox Series X, PE32+ x64)
// Address: 1400be6b0  size: 48 bytes
// Name:    FUN_1400be6b0
// Subsystem: core
//
// Referenced strings (0 in this body, 0 including direct callees):
// Callees: FUN_14523e460
//
// Generated decompilation. Formatting follows MiscRef/GTAVSRC conventions;
// identifiers are recovered, not original. See ../../../README.md.

#include "gta6decomp/rage_types.h"


undefined8 FUN_1400be6b0(longlong param_1,undefined8 param_2)

{
  undefined8 uVar1;
  undefined1 uStack_1;
  
  if (param_1 == 0) {
    uVar1 = 0;
  }
  else {
    uVar1 = FUN_14523e460(param_1 + 0x80 + (ulonglong)*(uint *)(param_1 + 0x78) * 0x30,param_2,
                          &uStack_1);
  }
  return uVar1;
}

