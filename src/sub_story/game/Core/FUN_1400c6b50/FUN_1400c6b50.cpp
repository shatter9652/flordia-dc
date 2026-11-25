// Recovered from game_scarlett_master.exe (GTA VI, Xbox Series X, PE32+ x64)
// Address: 1400c6b50  size: 83 bytes
// Name:    FUN_1400c6b50
// Subsystem: core
//
// Referenced strings (0 in this body, 0 including direct callees):
// Callees: FUN_144e66b80
//
// Generated decompilation. Formatting follows MiscRef/GTAVSRC conventions;
// identifiers are recovered, not original. See ../../../README.md.

#include "gta6decomp/rage_types.h"


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined8 FUN_1400c6b50(ulonglong param_1)

{
  char cVar1;
  longlong *plVar2;
  
  cVar1 = FUN_144e66b80(param_1,0);
  if (((cVar1 != '\0') &&
      (plVar2 = (longlong *)
                func_0x000144f1ba00(*(undefined4 *)(_DAT_14ab83d78 + 0xc),
                                    *(undefined8 *)(_DAT_14ab83d78 + 0x10),param_1 & 0xffffffff),
      plVar2 != (longlong *)0x0)) &&
     (cVar1 = (**(code **)(*plVar2 + 8))(plVar2,0xfb9ad9d7), cVar1 != '\0')) {
    return 1;
  }
  return 0;
}

