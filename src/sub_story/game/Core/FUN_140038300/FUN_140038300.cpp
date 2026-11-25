// Recovered from game_scarlett_master.exe (GTA VI, Xbox Series X, PE32+ x64)
// Address: 140038300  size: 127 bytes
// Name:    FUN_140038300
// Subsystem: core
//
// Referenced strings (0 in this body, 0 including direct callees):
// Callees: FUN_144db65b0, FUN_1455b2600
//
// Generated decompilation. Formatting follows MiscRef/GTAVSRC conventions;
// identifiers are recovered, not original. See ../../../README.md.

#include "gta6decomp/rage_types.h"


undefined8 FUN_140038300(longlong param_1,undefined8 param_2,undefined4 param_3)

{
  undefined2 uVar1;
  longlong lVar2;
  short sVar3;
  int iVar4;
  undefined8 uVar5;
  
  lVar2 = *(longlong *)(param_1 + 8);
  uVar5 = *(undefined8 *)(param_1 + 0x20);
  uVar1 = *(undefined2 *)(lVar2 + 0x20);
  sVar3 = func_0x0001428cd240(uVar5,uVar1,param_2);
  if (sVar3 != -1) {
    iVar4 = FUN_144db65b0(param_1,param_3,sVar3);
    if (iVar4 != -1) {
      uVar5 = FUN_1455b2600(*(undefined8 *)(param_1 + 0x30),*(undefined8 *)(param_1 + 0x40),uVar5,
                            uVar1,*(undefined2 *)(lVar2 + 0x22),sVar3,iVar4);
      return uVar5;
    }
  }
  return 0;
}

