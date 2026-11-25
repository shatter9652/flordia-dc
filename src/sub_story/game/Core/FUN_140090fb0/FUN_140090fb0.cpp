// Recovered from game_scarlett_master.exe (GTA VI, Xbox Series X, PE32+ x64)
// Address: 140090fb0  size: 43 bytes
// Name:    FUN_140090fb0
// Subsystem: core
//
// Referenced strings (0 in this body, 0 including direct callees):
// Callees: FUN_144f61a90
//
// Generated decompilation. Formatting follows MiscRef/GTAVSRC conventions;
// identifiers are recovered, not original. See ../../../README.md.

#include "gta6decomp/rage_types.h"


undefined8 FUN_140090fb0(longlong param_1)

{
  char cVar1;
  undefined4 uVar2;
  undefined8 uVar3;
  
  if ((*(byte *)(param_1 + 0x5d) & 1) == 0) {
LAB_140090fba:
    uVar3 = 0;
  }
  else {
    uVar2 = FUN_144f61a90();
    if ((short)uVar2 != -1) {
      cVar1 = func_0x000140091010(uVar2);
      if (cVar1 != '\0') goto LAB_140090fba;
    }
    uVar3 = 1;
  }
  return uVar3;
}

