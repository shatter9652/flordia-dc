// Recovered from game_scarlett_master.exe (GTA VI, Xbox Series X, PE32+ x64)
// Address: 1401af9d0  size: 63 bytes
// Name:    FUN_1401af9d0
// Subsystem: core
//
// Referenced strings (0 in this body, 0 including direct callees):
// Callees: FUN_144fa45a0, FUN_144fa4c80
//
// Generated decompilation. Formatting follows MiscRef/GTAVSRC conventions;
// identifiers are recovered, not original. See ../../../README.md.

#include "gta6decomp/rage_types.h"


undefined8 FUN_1401af9d0(longlong param_1)

{
  char cVar1;
  longlong lVar2;
  undefined8 uVar3;
  
  if ((*(longlong *)(param_1 + 0xa28) == 0) ||
     ((*(byte *)(*(longlong *)(param_1 + 0xa28) + 0x94) & 0x20) == 0)) {
    lVar2 = FUN_144fa45a0();
    if (lVar2 != 0) {
      cVar1 = FUN_144fa4c80(lVar2,0xc);
      if (cVar1 != '\0') goto LAB_1401afa0b;
    }
    uVar3 = 0;
  }
  else {
LAB_1401afa0b:
    uVar3 = 1;
  }
  return uVar3;
}

