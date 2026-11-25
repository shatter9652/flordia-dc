// Recovered from game_scarlett_master.exe (GTA VI, Xbox Series X, PE32+ x64)
// Address: 1401737a0  size: 172 bytes
// Name:    FUN_1401737a0
// Subsystem: core
//
// Referenced strings (0 in this body, 0 including direct callees):
// Callees: FUN_141c17100, FUN_141c7ead0, FUN_1443496f0
//
// Generated decompilation. Formatting follows MiscRef/GTAVSRC conventions;
// identifiers are recovered, not original. See ../../../README.md.

#include "gta6decomp/rage_types.h"


longlong FUN_1401737a0(longlong param_1,undefined8 param_2,undefined8 *param_3,undefined4 param_4,
                      undefined8 *param_5,longlong param_6)

{
  longlong lVar1;
  undefined8 uVar2;
  
  lVar1 = func_0x000144f97130(0x68);
  if (lVar1 == 0) {
    lVar1 = 0;
  }
  else {
    FUN_1443496f0(lVar1);
  }
  FUN_141c17100(param_1,1,lVar1,param_2);
  lVar1 = *(longlong *)(param_1 + 0x20);
  uVar2 = (**(code **)(*(longlong *)*param_3 + 0x10))();
  *(undefined8 *)(lVar1 + 0x50) = uVar2;
  *(undefined4 *)(lVar1 + 0x48) = param_4;
  uVar2 = (**(code **)(*(longlong *)*param_5 + 8))();
  *(undefined8 *)(lVar1 + 0x58) = uVar2;
  if (param_6 != 0) {
    FUN_141c7ead0(*(undefined8 *)(param_1 + 0x20),param_6);
  }
  return param_1;
}

