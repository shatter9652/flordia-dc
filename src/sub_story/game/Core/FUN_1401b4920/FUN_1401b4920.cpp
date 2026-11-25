// Recovered from game_scarlett_master.exe (GTA VI, Xbox Series X, PE32+ x64)
// Address: 1401b4920  size: 87 bytes
// Name:    FUN_1401b4920
// Subsystem: core
//
// Referenced strings (0 in this body, 0 including direct callees):
// Callees: FUN_1401b4a40, FUN_144e96700, FUN_144fac3c0
//
// Generated decompilation. Formatting follows MiscRef/GTAVSRC conventions;
// identifiers are recovered, not original. See ../../../README.md.

#include "gta6decomp/rage_types.h"


longlong FUN_1401b4920(undefined8 param_1)

{
  longlong lVar1;
  undefined8 uVar2;
  
  lVar1 = FUN_144e96700(0x149aafa58);
  if (lVar1 == 0) {
    uVar2 = func_0x000144fc99c0(0,0);
    lVar1 = FUN_144fac3c0(uVar2,0x60,0x10);
    if (lVar1 == 0) {
      return 0;
    }
  }
  FUN_1401b4a40(lVar1,param_1);
  return lVar1;
}

