// Recovered from game_scarlett_master.exe (GTA VI, Xbox Series X, PE32+ x64)
// Address: 1401b84f0  size: 162 bytes
// Name:    FUN_1401b84f0
// Subsystem: core
//
// Referenced strings (0 in this body, 0 including direct callees):
// Callees: FUN_1401b8900, FUN_145078050, FUN_144e96700, FUN_144fac3c0
//
// Generated decompilation. Formatting follows MiscRef/GTAVSRC conventions;
// identifiers are recovered, not original. See ../../../README.md.

#include "gta6decomp/rage_types.h"


longlong FUN_1401b84f0(longlong param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                      undefined1 param_5,undefined8 param_6)

{
  longlong lVar1;
  undefined8 uVar2;
  
  if (*(int *)(param_1 + 0x1c) == 0) {
    lVar1 = FUN_144e96700(0x149aafc00);
    if (lVar1 == 0) {
      uVar2 = func_0x000144fc99c0(0,0);
      lVar1 = FUN_144fac3c0(uVar2,0x48,0x10);
    }
    FUN_1401b8900(lVar1,param_2,param_3,param_4,param_5,param_6);
    FUN_145078050(param_1,lVar1);
  }
  else {
    lVar1 = 0;
  }
  return lVar1;
}

