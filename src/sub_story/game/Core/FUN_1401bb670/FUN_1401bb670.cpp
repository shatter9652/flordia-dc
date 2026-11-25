// Recovered from game_scarlett_master.exe (GTA VI, Xbox Series X, PE32+ x64)
// Address: 1401bb670  size: 91 bytes
// Name:    FUN_1401bb670
// Subsystem: core
//
// Referenced strings (0 in this body, 0 including direct callees):
// Callees: FUN_1401b9f00, FUN_1401b9530
//
// Generated decompilation. Formatting follows MiscRef/GTAVSRC conventions;
// identifiers are recovered, not original. See ../../../README.md.

#include "gta6decomp/rage_types.h"


uint FUN_1401bb670(undefined8 param_1)

{
  char cVar1;
  uint uVar2;
  uint uVar3;
  uint uStack_14;
  
  uStack_14 = 0xffffffff;
  cVar1 = func_0x000145077f30();
  if (cVar1 == '\0') {
    cVar1 = func_0x0001401b46f0(param_1);
    uVar2 = 0xffffffff;
    if (cVar1 != '\0') {
      uVar2 = FUN_1401b9530(param_1);
      uVar3 = 0xffffffff;
      if ((1 < uVar2 - 0x18) && (uVar2 != 0xffffffff)) {
        uVar3 = uVar2 % 3;
      }
      return uVar3;
    }
  }
  else {
    FUN_1401b9f00(param_1,&uStack_14);
    uVar2 = uStack_14;
  }
  return uVar2;
}

