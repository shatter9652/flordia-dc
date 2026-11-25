// Recovered from game_scarlett_master.exe (GTA VI, Xbox Series X, PE32+ x64)
// Address: 140173aa0  size: 143 bytes
// Name:    FUN_140173aa0
// Subsystem: core
//
// Referenced strings (0 in this body, 0 including direct callees):
// Callees: FUN_144349640, FUN_141c17100
//
// Generated decompilation. Formatting follows MiscRef/GTAVSRC conventions;
// identifiers are recovered, not original. See ../../../README.md.

#include "gta6decomp/rage_types.h"


longlong FUN_140173aa0(longlong param_1,undefined8 param_2,undefined8 *param_3,undefined4 param_4,
                      undefined8 *param_5)

{
  longlong lVar1;
  undefined8 uVar2;
  
  lVar1 = func_0x000144f97130(0x70);
  if (lVar1 == 0) {
    lVar1 = 0;
  }
  else {
    FUN_144349640(lVar1);
  }
  FUN_141c17100(param_1,3,lVar1,param_2);
  lVar1 = *(longlong *)(param_1 + 0x20);
  uVar2 = (**(code **)(*(longlong *)*param_3 + 0x18))();
  *(undefined8 *)(lVar1 + 0x50) = uVar2;
  *(undefined4 *)(lVar1 + 0x48) = param_4;
  uVar2 = (**(code **)(*(longlong *)*param_5 + 8))();
  *(undefined8 *)(lVar1 + 0x58) = uVar2;
  return param_1;
}

