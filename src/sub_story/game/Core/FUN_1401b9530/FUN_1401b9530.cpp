// Recovered from game_scarlett_master.exe (GTA VI, Xbox Series X, PE32+ x64)
// Address: 1401b9530  size: 32 bytes
// Name:    FUN_1401b9530
// Subsystem: core
//
// Referenced strings (0 in this body, 0 including direct callees):
// Callees: FUN_140092790
//
// Generated decompilation. Formatting follows MiscRef/GTAVSRC conventions;
// identifiers are recovered, not original. See ../../../README.md.

#include "gta6decomp/rage_types.h"


undefined8 FUN_1401b9530(undefined8 param_1)

{
  char cVar1;
  undefined8 uVar2;
  undefined8 uStack_10;
  
  uVar2 = FUN_140092790(param_1,0xff0792f0,0x53a83bf);
  func_0x000140092750(&uStack_10,uVar2);
  cVar1 = FUN_140092760(uStack_10);
  if (cVar1 == '\0') {
    uVar2 = 0xffffffff;
  }
  else {
    uVar2 = func_0x0001401b97a0(0);
  }
  return uVar2;
}

