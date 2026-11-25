// Recovered from game_scarlett_master.exe (GTA VI, Xbox Series X, PE32+ x64)
// Address: 1400ec6e0  size: 84 bytes
// Name:    FUN_1400ec6e0
// Subsystem: core
//
// Referenced strings (0 in this body, 0 including direct callees):
// Callees: FUN_1400ed720
//
// Generated decompilation. Formatting follows MiscRef/GTAVSRC conventions;
// identifiers are recovered, not original. See ../../../README.md.

#include "gta6decomp/rage_types.h"


void FUN_1400ec6e0(longlong *param_1,undefined8 param_2,undefined4 param_3,undefined8 param_4)

{
  longlong lVar1;
  longlong lVar2;
  undefined4 uVar3;
  longlong *plVar4;
  
  lVar1 = param_1[5];
  plVar4 = (longlong *)param_1[1];
  if ((longlong *)param_1[1] == (longlong *)0x0) {
    plVar4 = param_1 + 2;
  }
  if ((short)param_1[3] != 0) {
    plVar4 = param_1 + 2;
  }
  lVar2 = *plVar4;
  uVar3 = (**(code **)(*param_1 + 0x20))();
  FUN_1400ed720(uVar3,lVar2,param_3,param_4,lVar1);
  return;
}

