// Recovered from game_scarlett_master.exe (GTA VI, Xbox Series X, PE32+ x64)
// Address: 14012eb00  size: 100 bytes
// Name:    FUN_14012eb00
// Subsystem: core
//
// Referenced strings (0 in this body, 0 including direct callees):
// Callees: FUN_144fc0880
//
// Generated decompilation. Formatting follows MiscRef/GTAVSRC conventions;
// identifiers are recovered, not original. See ../../../README.md.

#include "gta6decomp/rage_types.h"


longlong FUN_14012eb00(undefined8 param_1,undefined4 param_2)

{
  longlong lVar1;
  longlong lVar2;
  
  lVar1 = func_0x000144fdec40();
  if (lVar1 == 0) {
    lVar1 = func_0x00014012d970(param_2);
    if (lVar1 != 0) {
      if (*(longlong *)(lVar1 + 0x40) != 0) {
        return *(longlong *)(*(longlong *)(lVar1 + 0x40) + 0xb0);
      }
      return 0;
    }
  }
  else {
    lVar2 = FUN_144fc0880(lVar1);
    if (lVar2 != 0) {
      return lVar2;
    }
    lVar1 = func_0x000144dd7540(*(undefined4 *)(lVar1 + 0x9c));
    if ((lVar1 != 0) && (*(longlong *)(lVar1 + 0x898) != 0)) {
      return *(longlong *)(lVar1 + 0x898);
    }
  }
  return 0;
}

