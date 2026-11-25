// Recovered from game_scarlett_master.exe (GTA VI, Xbox Series X, PE32+ x64)
// Address: 1401b60d0  size: 151 bytes
// Name:    FUN_1401b60d0
// Subsystem: core
//
// Referenced strings (0 in this body, 0 including direct callees):
// Callees: FUN_145078050, FUN_14438aa90, FUN_144e589e0, FUN_140092cc0, FUN_1401b7720, FUN_1401b6330
//
// Generated decompilation. Formatting follows MiscRef/GTAVSRC conventions;
// identifiers are recovered, not original. See ../../../README.md.

#include "gta6decomp/rage_types.h"


undefined8 FUN_1401b60d0(longlong *param_1,undefined4 param_2,undefined8 *param_3)

{
  char cVar1;
  longlong lVar2;
  undefined8 uVar3;
  undefined8 uStack_28;
  undefined8 uStack_20;
  
  lVar2 = FUN_144e589e0(*(undefined4 *)((longlong)param_1 + 0x94),param_1[0x13],param_2);
  if (lVar2 == 0) {
    cVar1 = FUN_140092cc0(*(undefined8 *)(*(longlong *)(*param_1 + 8) + 0x18),param_2);
    if (cVar1 == '\0') {
      uVar3 = 0;
    }
    else {
      uVar3 = FUN_14438aa90(param_2);
      FUN_1401b7720(param_1,3,uVar3);
    }
  }
  else {
    uStack_28 = *param_3;
    uStack_20 = param_3[1];
    uVar3 = FUN_1401b6330(&uStack_28,lVar2);
    FUN_145078050(param_1,uVar3);
  }
  return uVar3;
}

