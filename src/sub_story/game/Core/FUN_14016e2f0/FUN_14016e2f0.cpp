// Recovered from game_scarlett_master.exe (GTA VI, Xbox Series X, PE32+ x64)
// Address: 14016e2f0  size: 138 bytes
// Name:    FUN_14016e2f0
// Subsystem: core
//
// Referenced strings (0 in this body, 0 including direct callees):
// Callees: FUN_145028490, FUN_14437efe0, FUN_145242f60
//
// Generated decompilation. Formatting follows MiscRef/GTAVSRC conventions;
// identifiers are recovered, not original. See ../../../README.md.

#include "gta6decomp/rage_types.h"


void FUN_14016e2f0(longlong *param_1,undefined4 param_2)

{
  longlong lVar1;
  char cVar2;
  int iVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  undefined8 uVar6;
  undefined1 uVar7;
  
  cVar2 = FUN_145028490(*param_1);
  if (cVar2 != '\0') {
    uVar4 = func_0x000145028480(*(undefined8 *)(*param_1 + 400));
    iVar3 = FUN_145242f60(uVar4);
    lVar1 = *param_1;
    uVar4 = func_0x0001452a14f0(*(undefined8 *)(lVar1 + 400));
    if (iVar3 == 0) {
      uVar5 = 0xf9305c2d;
      uVar6 = 0x1124fa0e;
      uVar7 = 1;
    }
    else {
      uVar7 = 2;
      uVar5 = 0xf5d26b83;
      uVar6 = 0xd6e01025;
    }
    FUN_14437efe0(lVar1,uVar4,uVar5,uVar6,param_2,uVar7);
  }
  return;
}

