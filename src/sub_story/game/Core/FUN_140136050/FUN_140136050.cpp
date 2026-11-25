// Recovered from game_scarlett_master.exe (GTA VI, Xbox Series X, PE32+ x64)
// Address: 140136050  size: 109 bytes
// Name:    FUN_140136050
// Subsystem: core
//
// Referenced strings (0 in this body, 0 including direct callees):
// Callees: FUN_144de6230, FUN_144dd11b0
//
// Generated decompilation. Formatting follows MiscRef/GTAVSRC conventions;
// identifiers are recovered, not original. See ../../../README.md.

#include "gta6decomp/rage_types.h"


undefined8 FUN_140136050(longlong param_1)

{
  undefined4 uVar1;
  char cVar2;
  longlong lVar3;
  
  if (param_1 != 0) {
    if (*(char *)(param_1 + 0x30) == '\x03') {
      lVar3 = func_0x000144fab120(*(undefined4 *)(param_1 + 0x9c));
      if ((lVar3 != 0) && (cVar2 = func_0x00014042a700(*(undefined8 *)(lVar3 + 8)), cVar2 != '\0'))
      {
        return 1;
      }
    }
    else if (*(char *)(param_1 + 0x30) == '\x04') {
      uVar1 = *(undefined4 *)(param_1 + 0x9c);
      cVar2 = FUN_144dd11b0(uVar1);
      if (((cVar2 != '\0') && (lVar3 = FUN_144de6230(uVar1), lVar3 != 0)) &&
         (*(char *)(lVar3 + 0x30) == '\x03')) {
        return 1;
      }
    }
  }
  return 0;
}

