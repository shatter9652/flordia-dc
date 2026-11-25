// Recovered from game_scarlett_master.exe (GTA VI, Xbox Series X, PE32+ x64)
// Address: 1400ff7a0  size: 86 bytes
// Name:    FUN_1400ff7a0
// Subsystem: core
//
// Referenced strings (0 in this body, 0 including direct callees):
// Callees: FUN_144fa45a0, FUN_140d23260
//
// Generated decompilation. Formatting follows MiscRef/GTAVSRC conventions;
// identifiers are recovered, not original. See ../../../README.md.

#include "gta6decomp/rage_types.h"


undefined8 FUN_1400ff7a0(longlong param_1)

{
  char cVar1;
  longlong lVar2;
  longlong lVar3;
  
  cVar1 = func_0x0001400ff800(*(undefined4 *)(param_1 + 0x24));
  if ((((cVar1 != '\0') && (lVar2 = FUN_144fa45a0(param_1), lVar2 != 0)) &&
      (lVar3 = func_0x000144eb3780(*(undefined4 *)(lVar2 + 0x9c)), lVar3 != 0)) &&
     (((*(byte *)(lVar3 + 0x18) & 0x20) == 0 && (cVar1 = FUN_140d23260(lVar2,0), cVar1 != '\0')))) {
    return 1;
  }
  return 0;
}

