// Recovered from game_scarlett_master.exe (GTA VI, Xbox Series X, PE32+ x64)
// Address: 1401b40f0  size: 126 bytes
// Name:    FUN_1401b40f0
// Subsystem: core
//
// Referenced strings (0 in this body, 0 including direct callees):
// Callees: FUN_144393070, FUN_1401b78a0, FUN_1450778c0
//
// Generated decompilation. Formatting follows MiscRef/GTAVSRC conventions;
// identifiers are recovered, not original. See ../../../README.md.

#include "gta6decomp/rage_types.h"


undefined8 FUN_1401b40f0(undefined8 param_1,longlong *param_2)

{
  int iVar1;
  longlong lVar2;
  undefined8 uVar3;
  undefined8 uStack_30;
  undefined4 uStack_28;
  
  lVar2 = FUN_1450778c0(param_2);
  if (lVar2 == 0) {
    uVar3 = 0;
  }
  else {
    uVar3 = *(undefined8 *)(*param_2 + 0x20);
    iVar1 = func_0x000144debc60(uVar3);
    if (iVar1 < 2) {
      uVar3 = FUN_1401b78a0(param_1,param_2,lVar2,uVar3,uVar3);
    }
    else {
      uStack_28 = (undefined4)param_2[1];
      uStack_30 = uVar3;
      uVar3 = FUN_144393070(param_1,param_2,lVar2,uVar3,&uStack_30);
    }
  }
  return uVar3;
}

