// Recovered from game_scarlett_master.exe (GTA VI, Xbox Series X, PE32+ x64)
// Address: 14016e200  size: 78 bytes
// Name:    FUN_14016e200
// Subsystem: core
//
// Referenced strings (0 in this body, 0 including direct callees):
// Callees: FUN_145028490, FUN_14437efe0
//
// Generated decompilation. Formatting follows MiscRef/GTAVSRC conventions;
// identifiers are recovered, not original. See ../../../README.md.

#include "gta6decomp/rage_types.h"


void FUN_14016e200(longlong *param_1,undefined4 param_2)

{
  longlong lVar1;
  undefined8 uVar2;
  char cVar3;
  
  cVar3 = FUN_145028490(*param_1);
  if (cVar3 != '\0') {
    lVar1 = *param_1;
    uVar2 = func_0x0001452a14f0(*(undefined8 *)(lVar1 + 400));
    FUN_14437efe0(lVar1,uVar2,0x22130266,0x96aa5c3f,param_2,0);
  }
  return;
}

