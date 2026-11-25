// Recovered from game_scarlett_master.exe (GTA VI, Xbox Series X, PE32+ x64)
// Address: 1401bb880  size: 32 bytes
// Name:    FUN_1401bb880
// Subsystem: core
//
// Referenced strings (0 in this body, 0 including direct callees):
// Callees: FUN_140092790
//
// Generated decompilation. Formatting follows MiscRef/GTAVSRC conventions;
// identifiers are recovered, not original. See ../../../README.md.

#include "gta6decomp/rage_types.h"


undefined8 FUN_1401bb880(undefined8 param_1)

{
  char cVar1;
  undefined8 uVar2;
  undefined4 uStack_c;
  undefined8 uStack_8;
  
  uVar2 = FUN_140092790(param_1,0x32711796,0x53a83bf);
  func_0x000140092750(&uStack_8,uVar2);
  uStack_c = 0;
  cVar1 = FUN_140092760(uStack_8,&uStack_c);
  if (cVar1 == '\0') {
    uVar2 = 0xffffffff;
  }
  else {
    uVar2 = func_0x000140092860(uStack_c);
  }
  return uVar2;
}

