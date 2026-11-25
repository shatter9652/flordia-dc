// Recovered from game_scarlett_master.exe (GTA VI, Xbox Series X, PE32+ x64)
// Address: 140103770  size: 91 bytes
// Name:    FUN_140103770
// Subsystem: core
//
// Referenced strings (0 in this body, 0 including direct callees):
// Callees: FUN_1411b37f0
//
// Generated decompilation. Formatting follows MiscRef/GTAVSRC conventions;
// identifiers are recovered, not original. See ../../../README.md.

#include "gta6decomp/rage_types.h"


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined8 FUN_140103770(longlong param_1,undefined8 param_2)

{
  longlong lVar1;
  longlong lVar2;
  longlong unaff_GS_OFFSET;
  
  if (*(code **)(param_1 + 0x38) == (code *)0x0) {
    param_2 = 0;
  }
  else {
    (**(code **)(param_1 + 0x38))();
    lVar1 = *(longlong *)(**(longlong **)(unaff_GS_OFFSET + 0x58) + 0x1258);
    lVar2 = _DAT_14abcd240 + 0x68;
    if (lVar1 != 0) {
      lVar2 = lVar1;
    }
    if ((*(byte *)(lVar2 + 0x11) & 0x20) != 0) {
      FUN_1411b37f0(param_1,param_2);
    }
  }
  return param_2;
}

