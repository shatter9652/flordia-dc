// Recovered from game_scarlett_master.exe (GTA VI, Xbox Series X, PE32+ x64)
// Address: 140176800  size: 38 bytes
// Name:    FUN_140176800
// Subsystem: core
//
// Referenced strings (0 in this body, 0 including direct callees):
// Callees: FUN_145086440
//
// Generated decompilation. Formatting follows MiscRef/GTAVSRC conventions;
// identifiers are recovered, not original. See ../../../README.md.

#include "gta6decomp/rage_types.h"


undefined8 FUN_140176800(longlong param_1)

{
  undefined8 uVar1;
  undefined1 auStack_4 [4];
  
  if (param_1 == 0) {
    uVar1 = 0;
  }
  else {
    uVar1 = FUN_145086440(*(undefined4 *)(param_1 + 0x30),auStack_4,0x121);
  }
  return uVar1;
}

