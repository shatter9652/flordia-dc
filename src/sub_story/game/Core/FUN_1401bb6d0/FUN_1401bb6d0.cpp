// Recovered from game_scarlett_master.exe (GTA VI, Xbox Series X, PE32+ x64)
// Address: 1401bb6d0  size: 120 bytes
// Name:    FUN_1401bb6d0
// Subsystem: core
//
// Referenced strings (0 in this body, 0 including direct callees):
// Callees: FUN_1401bb7b0, FUN_1401bb880, FUN_1401bb750, FUN_14436be90, FUN_14436c1a0
//
// Generated decompilation. Formatting follows MiscRef/GTAVSRC conventions;
// identifiers are recovered, not original. See ../../../README.md.

#include "gta6decomp/rage_types.h"


void FUN_1401bb6d0(undefined8 param_1,undefined4 *param_2,undefined4 param_3)

{
  char cVar1;
  undefined4 uVar2;
  undefined4 uStack_28;
  undefined4 uStack_24;
  
  if ((char)param_3 == '\0') {
    FUN_1401bb750(param_1,&uStack_28);
    *param_2 = uStack_28;
    uVar2 = FUN_1401bb880(param_1);
  }
  else {
    FUN_14436be90(param_1,&uStack_24);
    *param_2 = uStack_24;
    uVar2 = FUN_14436c1a0(param_1);
  }
  param_2[1] = uVar2;
  cVar1 = func_0x000145078490(uVar2);
  if (cVar1 != '\0') {
    uVar2 = FUN_1401bb7b0(param_1,param_3);
    param_2[2] = uVar2;
  }
  return;
}

