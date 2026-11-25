// Recovered from game_scarlett_master.exe (GTA VI, Xbox Series X, PE32+ x64)
// Address: 1401b90c0  size: 157 bytes
// Name:    FUN_1401b90c0
// Subsystem: core
//
// Referenced strings (0 in this body, 0 including direct callees):
// Callees: FUN_145078000, FUN_145078050, FUN_1420cc0e0, FUN_140092d40, FUN_1401b8860, FUN_14438b470
//
// Generated decompilation. Formatting follows MiscRef/GTAVSRC conventions;
// identifiers are recovered, not original. See ../../../README.md.

#include "gta6decomp/rage_types.h"


undefined8 FUN_1401b90c0(longlong *param_1,undefined4 param_2,undefined8 *param_3)

{
  char cVar1;
  longlong lVar2;
  undefined8 uVar3;
  undefined8 uStack_28;
  undefined8 uStack_20;
  
  lVar2 = FUN_1420cc0e0(*(undefined4 *)((longlong)param_1 + 0xa4),param_1[0x15],param_2);
  if (lVar2 == 0) {
    cVar1 = FUN_140092d40(*(undefined8 *)(*(longlong *)(*param_1 + 8) + 0x18),8,param_2);
    if (cVar1 == '\0') {
      uVar3 = 0;
    }
    else {
      uStack_28 = *param_3;
      uStack_20 = param_3[1];
      uVar3 = FUN_14438b470(param_2);
      FUN_145078000(param_1,4,uVar3);
    }
  }
  else {
    uStack_28 = *param_3;
    uStack_20 = param_3[1];
    uVar3 = FUN_1401b8860(&uStack_28,lVar2);
    FUN_145078050(param_1,uVar3);
  }
  return uVar3;
}

