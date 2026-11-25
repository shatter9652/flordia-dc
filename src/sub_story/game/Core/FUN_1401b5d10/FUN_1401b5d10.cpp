// Recovered from game_scarlett_master.exe (GTA VI, Xbox Series X, PE32+ x64)
// Address: 1401b5d10  size: 94 bytes
// Name:    FUN_1401b5d10
// Subsystem: core
//
// Referenced strings (0 in this body, 0 including direct callees):
// Callees: FUN_1401b5d90, FUN_140092790, FUN_140014c20
//
// Generated decompilation. Formatting follows MiscRef/GTAVSRC conventions;
// identifiers are recovered, not original. See ../../../README.md.

#include "gta6decomp/rage_types.h"


undefined8 FUN_1401b5d10(undefined8 param_1)

{
  char cVar1;
  undefined8 uVar2;
  undefined4 uStack_1c;
  undefined8 uStack_18;
  
  uVar2 = FUN_140092790(param_1,0xffb140e0,0x53a83bf);
  func_0x000140092750(&uStack_18,uVar2);
  cVar1 = FUN_1401b5d90(uStack_18);
  if (cVar1 == '\0') {
    uVar2 = 2;
  }
  else {
    FUN_140014c20(uStack_18,&uStack_1c,0);
    uVar2 = func_0x0001401b5d70(uStack_1c);
  }
  return uVar2;
}

