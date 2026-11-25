// Recovered from game_scarlett_master.exe (GTA VI, Xbox Series X, PE32+ x64)
// Address: 14012e8d0  size: 55 bytes
// Name:    FUN_14012e8d0
// Subsystem: core
//
// Referenced strings (0 in this body, 0 including direct callees):
// Callees: FUN_14032a3d0
//
// Generated decompilation. Formatting follows MiscRef/GTAVSRC conventions;
// identifiers are recovered, not original. See ../../../README.md.

#include "gta6decomp/rage_types.h"


void FUN_14012e8d0(longlong param_1,undefined4 param_2,undefined8 param_3,undefined4 param_4)

{
  longlong lVar1;
  undefined4 uVar2;
  
  lVar1 = *(longlong *)(param_1 + 0x18);
  uVar2 = func_0x00014032a160(param_2);
  FUN_14032a3d0(*(undefined4 *)(lVar1 + 0x74),*(undefined8 *)(lVar1 + 0x78),param_3,uVar2,param_4);
  return;
}

