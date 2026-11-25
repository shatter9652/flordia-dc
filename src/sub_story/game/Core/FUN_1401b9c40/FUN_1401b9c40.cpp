// Recovered from game_scarlett_master.exe (GTA VI, Xbox Series X, PE32+ x64)
// Address: 1401b9c40  size: 151 bytes
// Name:    FUN_1401b9c40
// Subsystem: core
//
// Referenced strings (0 in this body, 0 including direct callees):
// Callees: FUN_1401b9ce0, FUN_145078170, FUN_1401b9d30, FUN_144e96700, FUN_1401b9da0, FUN_144fac3c0
//
// Generated decompilation. Formatting follows MiscRef/GTAVSRC conventions;
// identifiers are recovered, not original. See ../../../README.md.

#include "gta6decomp/rage_types.h"


longlong FUN_1401b9c40(undefined8 *param_1,undefined4 param_2)

{
  char cVar1;
  longlong lVar2;
  undefined8 uVar3;
  
  lVar2 = FUN_1401b9d30(*(undefined4 *)((longlong)param_1 + 0xd4),param_1[0x1b],param_2);
  if (lVar2 == 0) {
    uVar3 = FUN_1401b9ce0(*param_1,*(undefined4 *)((longlong)param_1 + 0x1c));
    cVar1 = func_0x000140092d10(uVar3,param_2);
    if (cVar1 == '\0') {
      lVar2 = 0;
    }
    else {
      lVar2 = FUN_144e96700(0x149aafbb0);
      if (lVar2 == 0) {
        uVar3 = func_0x000144fc99c0(0,0);
        lVar2 = FUN_144fac3c0(uVar3,0x38,0x10);
      }
      FUN_1401b9da0(lVar2,param_2);
      FUN_145078170(param_1,7,lVar2);
    }
  }
  return lVar2;
}

