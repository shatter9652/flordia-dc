// Recovered from game_scarlett_master.exe (GTA VI, Xbox Series X, PE32+ x64)
// Address: 140116260  size: 73 bytes
// Name:    FUN_140116260
// Subsystem: core
//
// Referenced strings (0 in this body, 0 including direct callees):
// Callees: FUN_144fc2bb0
//
// Generated decompilation. Formatting follows MiscRef/GTAVSRC conventions;
// identifiers are recovered, not original. See ../../../README.md.

#include "gta6decomp/rage_types.h"


undefined8 FUN_140116260(undefined8 param_1,undefined8 param_2)

{
  longlong lVar1;
  
  lVar1 = func_0x000145310cd0();
  lVar1 = func_0x0001450e1520(*(undefined4 *)(lVar1 + 0x9c));
  if ((lVar1 != 0) &&
     (lVar1 = FUN_144fc2bb0(*(undefined4 *)(lVar1 + 0x17c),*(undefined8 *)(lVar1 + 0x180),param_2),
     lVar1 != 0)) {
    return *(undefined8 *)(*(longlong *)(lVar1 + 0x20) + 0x28);
  }
  return 0;
}

