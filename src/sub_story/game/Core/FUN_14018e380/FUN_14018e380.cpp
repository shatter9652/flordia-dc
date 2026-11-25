// Recovered from game_scarlett_master.exe (GTA VI, Xbox Series X, PE32+ x64)
// Address: 14018e380  size: 67 bytes
// Name:    FUN_14018e380
// Subsystem: core
//
// Referenced strings (0 in this body, 0 including direct callees):
// Callees: FUN_144dd9c70
//
// Generated decompilation. Formatting follows MiscRef/GTAVSRC conventions;
// identifiers are recovered, not original. See ../../../README.md.

#include "gta6decomp/rage_types.h"


void FUN_14018e380(longlong *param_1,undefined4 param_2)

{
  undefined8 uVar1;
  longlong lVar2;
  
  if (param_1 != (longlong *)0x0) {
    uVar1 = (**(code **)(*param_1 + 0x160))();
    lVar2 = FUN_144dd9c70(uVar1,0xd0833e13);
    if (lVar2 != 0) {
      *(undefined4 *)(lVar2 + 0xb0) = param_2;
    }
  }
  return;
}

