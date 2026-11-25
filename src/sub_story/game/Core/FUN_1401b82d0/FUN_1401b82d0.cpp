// Recovered from game_scarlett_master.exe (GTA VI, Xbox Series X, PE32+ x64)
// Address: 1401b82d0  size: 130 bytes
// Name:    FUN_1401b82d0
// Subsystem: core
//
// Referenced strings (0 in this body, 0 including direct callees):
// Callees: FUN_1401b8360, FUN_145078050, FUN_144e96700, FUN_144fac3c0
//
// Generated decompilation. Formatting follows MiscRef/GTAVSRC conventions;
// identifiers are recovered, not original. See ../../../README.md.

#include "gta6decomp/rage_types.h"


longlong FUN_1401b82d0(longlong param_1,undefined8 param_2,undefined4 param_3,undefined8 param_4)

{
  longlong lVar1;
  undefined8 uVar2;
  
  if (*(int *)(param_1 + 0x1c) == 0) {
    lVar1 = FUN_144e96700(0x149aafbe8);
    if (lVar1 == 0) {
      uVar2 = func_0x000144fc99c0(0,0);
      lVar1 = FUN_144fac3c0(uVar2,0x30,0x10);
    }
    FUN_1401b8360(lVar1,param_2,param_3,param_4);
    FUN_145078050(param_1,lVar1);
  }
  else {
    lVar1 = 0;
  }
  return lVar1;
}

