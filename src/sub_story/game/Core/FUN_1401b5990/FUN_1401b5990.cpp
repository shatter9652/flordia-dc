// Recovered from game_scarlett_master.exe (GTA VI, Xbox Series X, PE32+ x64)
// Address: 1401b5990  size: 101 bytes
// Name:    FUN_1401b5990
// Subsystem: core
//
// Referenced strings (0 in this body, 0 including direct callees):
// Callees: FUN_144f21630, FUN_145077900, FUN_144f21750
//
// Generated decompilation. Formatting follows MiscRef/GTAVSRC conventions;
// identifiers are recovered, not original. See ../../../README.md.

#include "gta6decomp/rage_types.h"


undefined8 FUN_1401b5990(longlong param_1,undefined8 param_2,undefined4 *param_3)

{
  char cVar1;
  longlong lVar2;
  undefined8 uVar3;
  undefined1 uStack_21;
  
  lVar2 = FUN_144f21750(*(undefined8 *)(param_1 + 0x2a0),*param_3,param_3[1],param_2);
  if ((lVar2 != 0) &&
     (cVar1 = FUN_144f21630(param_3,*(undefined8 *)(param_1 + 0x2a0),param_2,&uStack_21),
     cVar1 != '\0')) {
    uVar3 = FUN_145077900(param_1,lVar2);
    return uVar3;
  }
  return 0;
}

