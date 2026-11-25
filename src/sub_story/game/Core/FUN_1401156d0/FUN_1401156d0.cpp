// Recovered from game_scarlett_master.exe (GTA VI, Xbox Series X, PE32+ x64)
// Address: 1401156d0  size: 65 bytes
// Name:    FUN_1401156d0
// Subsystem: core
//
// Referenced strings (0 in this body, 0 including direct callees):
// Callees: FUN_14135a200, FUN_1451d2260
//
// Generated decompilation. Formatting follows MiscRef/GTAVSRC conventions;
// identifiers are recovered, not original. See ../../../README.md.

#include "gta6decomp/rage_types.h"


void FUN_1401156d0(undefined8 param_1,undefined8 param_2,undefined4 *param_3,undefined4 *param_4)

{
  int iVar1;
  undefined4 uVar2;
  
  iVar1 = FUN_1451d2260(param_2,param_4,4);
  uVar2 = 0xffffffff;
  if (3 < iVar1) {
    uVar2 = FUN_14135a200(param_1,*param_4);
  }
  *param_3 = uVar2;
  return;
}

