// Recovered from game_scarlett_master.exe (GTA VI, Xbox Series X, PE32+ x64)
// Address: 1401b6250  size: 110 bytes
// Name:    FUN_1401b6250
// Subsystem: core
//
// Referenced strings (0 in this body, 0 including direct callees):
// Callees: FUN_1401bb900, FUN_1401b62c0, FUN_145078050, FUN_1401b7720, FUN_1401b6330
//
// Generated decompilation. Formatting follows MiscRef/GTAVSRC conventions;
// identifiers are recovered, not original. See ../../../README.md.

#include "gta6decomp/rage_types.h"


undefined8 FUN_1401b6250(longlong param_1,undefined8 *param_2)

{
  longlong lVar1;
  undefined8 uVar2;
  undefined8 uStack_28;
  undefined8 uStack_20;
  
  lVar1 = FUN_1401b62c0(*(undefined4 *)(param_1 + 0x74),*(undefined8 *)(param_1 + 0x78));
  if (lVar1 == 0) {
    uVar2 = FUN_1401bb900();
    FUN_1401b7720(param_1,1,uVar2);
  }
  else {
    uStack_28 = *param_2;
    uStack_20 = param_2[1];
    uVar2 = FUN_1401b6330(&uStack_28,lVar1);
    FUN_145078050(param_1,uVar2);
  }
  return uVar2;
}

