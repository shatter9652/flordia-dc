// Recovered from game_scarlett_master.exe (GTA VI, Xbox Series X, PE32+ x64)
// Address: 1400f8500  size: 150 bytes
// Name:    FUN_1400f8500
// Subsystem: core
//
// Referenced strings (0 in this body, 0 including direct callees):
// Callees: FUN_144f921e0, FUN_144f92180, FUN_140069300, FUN_1400f8800
//
// Generated decompilation. Formatting follows MiscRef/GTAVSRC conventions;
// identifiers are recovered, not original. See ../../../README.md.

#include "gta6decomp/rage_types.h"


void FUN_1400f8500(undefined8 param_1,longlong param_2,char param_3)

{
  longlong lVar1;
  longlong lVar2;
  
  lVar1 = FUN_144f92180(*(undefined1 *)(param_2 + 0x1c),*(undefined8 *)(param_2 + 0x20));
  if (lVar1 != 0) {
    lVar2 = func_0x0001400f85a0(*(undefined4 *)(lVar1 + 0x9c));
    if (lVar2 != 0) {
      FUN_144f921e0(lVar2,param_2);
      if (param_3 != '\0') {
        if ((((*(int *)(lVar2 + 0x24) == 0) && (*(int *)(lVar2 + 0x34) == 0)) &&
            (*(int *)(lVar2 + 0x44) == 0)) && (*(longlong *)(lVar2 + 0x58) == 0)) {
          FUN_1400f8800(param_1,lVar2);
        }
        else {
          FUN_140069300(param_1,lVar1,lVar2);
        }
      }
    }
    *(undefined8 *)(param_2 + 0x20) = 0;
  }
  return;
}

