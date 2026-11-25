// Recovered from game_scarlett_master.exe (GTA VI, Xbox Series X, PE32+ x64)
// Address: 14006d200  size: 72 bytes
// Name:    FUN_14006d200
// Subsystem: core
//
// Referenced strings (0 in this body, 0 including direct callees):
// Callees: FUN_14006d310
//
// Generated decompilation. Formatting follows MiscRef/GTAVSRC conventions;
// identifiers are recovered, not original. See ../../../README.md.

#include "gta6decomp/rage_types.h"


undefined4 * FUN_14006d200(undefined4 *param_1,longlong param_2,undefined8 param_3)

{
  longlong lVar1;
  undefined8 uVar2;
  
  lVar1 = FUN_14006d310(*(ulonglong *)(param_2 + 8) & 0xfffffffffffffff0,param_3);
  if (lVar1 == 0) {
    uVar2 = 0;
  }
  else {
    uVar2 = (**(code **)(**(longlong **)(lVar1 + 8) + 0x10))();
  }
  *param_1 = 0;
  func_0x000144ec2e30(param_1,uVar2);
  return param_1;
}

