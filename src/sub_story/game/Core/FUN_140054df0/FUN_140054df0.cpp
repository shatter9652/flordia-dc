// Recovered from game_scarlett_master.exe (GTA VI, Xbox Series X, PE32+ x64)
// Address: 140054df0  size: 305 bytes
// Name:    FUN_140054df0
// Subsystem: core
//
// Referenced strings (0 in this body, 0 including direct callees):
// Callees: FUN_1400063f0, FUN_144f2a440, FUN_1400065c0, FUN_1454f50f0
//
// Generated decompilation. Formatting follows MiscRef/GTAVSRC conventions;
// identifiers are recovered, not original. See ../../../README.md.

#include "gta6decomp/rage_types.h"


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined4 *
FUN_140054df0(undefined4 *param_1,int param_2,undefined8 param_3,undefined4 param_4,int param_5)

{
  longlong lVar1;
  char cVar2;
  longlong unaff_GS_OFFSET;
  
  *param_1 = param_4;
  *(undefined2 *)(param_1 + 1) = 0;
  if (param_2 == 0) {
    cVar2 = FUN_1454f50f0(0x1478f6940);
    if (cVar2 == '\0') {
      if (param_5 != 1) {
        return param_1;
      }
      do {
        func_0x00014092eca0(1);
        cVar2 = FUN_1454f50f0(0x1478f6940);
      } while (cVar2 == '\0');
    }
  }
  else if (param_5 == 1) {
    while( true ) {
      while (cVar2 = FUN_1454f50f0(0x1478f6940), cVar2 == '\0') {
        func_0x00014092eca0(1);
      }
      FUN_1400065c0();
      cVar2 = FUN_144f2a440(param_2,param_3);
      if (cVar2 != '\0') break;
      func_0x000144d9dab0(0x1478f6940);
    }
  }
  else {
    cVar2 = FUN_1454f50f0(0x1478f6940);
    if (cVar2 == '\0') {
      return param_1;
    }
    FUN_1400065c0();
    cVar2 = FUN_144f2a440(param_2,param_3);
    if (cVar2 == '\0') {
      func_0x000144d9dab0(0x1478f6940);
      return param_1;
    }
  }
  if (*(char *)(**(longlong **)(unaff_GS_OFFSET + 0x58) + 0x1440) == '\x01') {
    _DAT_1478f6960 = *(undefined8 *)(**(longlong **)(unaff_GS_OFFSET + 0x58) + 0x1438);
  }
  else {
    lVar1 = **(longlong **)(unaff_GS_OFFSET + 0x58);
    *(undefined1 *)(lVar1 + 0x1440) = 1;
    _DAT_1478f6960 = FUN_1400063f0();
    *(undefined8 *)(lVar1 + 0x1438) = _DAT_1478f6960;
  }
  *(undefined1 *)(param_1 + 1) = 1;
  *(bool *)((longlong)param_1 + 5) = param_2 != 0;
  return param_1;
}

