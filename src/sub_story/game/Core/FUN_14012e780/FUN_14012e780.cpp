// Recovered from game_scarlett_master.exe (GTA VI, Xbox Series X, PE32+ x64)
// Address: 14012e780  size: 110 bytes
// Name:    FUN_14012e780
// Subsystem: core
//
// Referenced strings (0 in this body, 0 including direct callees):
// Callees: FUN_144f92060
//
// Generated decompilation. Formatting follows MiscRef/GTAVSRC conventions;
// identifiers are recovered, not original. See ../../../README.md.

#include "gta6decomp/rage_types.h"


void FUN_14012e780(longlong param_1,longlong param_2)

{
  longlong lVar1;
  undefined8 uStack_28;
  undefined8 uStack_20;
  
  if (param_2 == 0) {
    *(undefined1 *)(param_1 + 0x2e) = 0;
    *(undefined1 *)(param_1 + 0x40) = 0;
  }
  else {
    *(undefined1 *)(param_1 + 0x2e) = 1;
    FUN_144f92060(param_2,&uStack_28);
    *(undefined8 *)(param_1 + 0x30) = uStack_28;
    *(undefined8 *)(param_1 + 0x38) = uStack_20;
    lVar1 = func_0x000145309310(*(undefined4 *)(param_1 + 0x10),*(undefined8 *)(param_1 + 0x48));
    if ((lVar1 == 0) || (*(char *)(*(longlong *)(lVar1 + 8) + 0x4c) != '\x01')) {
      *(byte *)(param_1 + 0x40) = *(byte *)(param_2 + 0x50) >> 7;
    }
    else {
      *(undefined1 *)(param_1 + 0x40) = 0;
    }
  }
  return;
}

