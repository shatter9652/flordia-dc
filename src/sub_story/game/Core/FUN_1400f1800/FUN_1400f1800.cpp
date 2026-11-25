// Recovered from game_scarlett_master.exe (GTA VI, Xbox Series X, PE32+ x64)
// Address: 1400f1800  size: 56 bytes
// Name:    FUN_1400f1800
// Subsystem: core
//
// Referenced strings (0 in this body, 0 including direct callees):
// Callees: FUN_144f93d60
//
// Generated decompilation. Formatting follows MiscRef/GTAVSRC conventions;
// identifiers are recovered, not original. See ../../../README.md.

#include "gta6decomp/rage_types.h"


void FUN_1400f1800(undefined8 param_1,undefined4 *param_2)

{
  longlong lVar1;
  undefined4 uVar2;
  
  lVar1 = func_0x00014511b7d0();
  uVar2 = 0;
  if (lVar1 != 0) {
    lVar1 = FUN_144f93d60(*(undefined4 *)(lVar1 + 0x24),*(undefined8 *)(lVar1 + 0x28),0x78);
    uVar2 = 0;
    if (lVar1 != 0) {
      uVar2 = *(undefined4 *)(lVar1 + 8);
    }
  }
  *param_2 = uVar2;
  return;
}

