// Recovered from game_scarlett_master.exe (GTA VI, Xbox Series X, PE32+ x64)
// Address: 1400370a0  size: 85 bytes
// Name:    FUN_1400370a0
// Subsystem: core
//
// Referenced strings (0 in this body, 0 including direct callees):
// Callees: FUN_1452afef0, FUN_144e66b30, FUN_1416138f0, FUN_1433e5910
//
// Generated decompilation. Formatting follows MiscRef/GTAVSRC conventions;
// identifiers are recovered, not original. See ../../../README.md.

#include "gta6decomp/rage_types.h"


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined8 FUN_1400370a0(undefined8 param_1)

{
  undefined4 uVar1;
  undefined8 uVar2;
  int iStack_14;
  
  FUN_1433e5910(param_1,&iStack_14);
  if ((iStack_14 != 0) && (iStack_14 != 0xa7548a2)) {
    uVar1 = FUN_1416138f0(param_1);
    uVar1 = FUN_144e66b30(uVar1);
    uVar2 = FUN_1452afef0(_DAT_14a9ec8e0,uVar1,iStack_14);
    if ((int)uVar2 != -1) {
      return uVar2;
    }
  }
  return 0x3ff;
}

