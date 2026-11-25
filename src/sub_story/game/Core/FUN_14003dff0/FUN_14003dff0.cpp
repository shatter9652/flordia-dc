// Recovered from game_scarlett_master.exe (GTA VI, Xbox Series X, PE32+ x64)
// Address: 14003dff0  size: 90 bytes
// Name:    FUN_14003dff0
// Subsystem: core
//
// Referenced strings (0 in this body, 0 including direct callees):
// Callees: FUN_1400ff260
//
// Generated decompilation. Formatting follows MiscRef/GTAVSRC conventions;
// identifiers are recovered, not original. See ../../../README.md.

#include "gta6decomp/rage_types.h"


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined8 FUN_14003dff0(undefined8 param_1,undefined8 param_2,longlong *param_3)

{
  char cVar1;
  longlong lVar2;
  
  *param_3 = 0;
  cVar1 = func_0x00014003e050();
  if (cVar1 != '\0') {
    lVar2 = FUN_1400ff260(*(undefined8 *)(_DAT_14ab7f650 + 0x238),
                          *(undefined2 *)(_DAT_14ab7f650 + 0x240),0);
    *param_3 = lVar2;
    if (lVar2 != 0) {
      return 1;
    }
  }
  return 0;
}

