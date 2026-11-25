// Recovered from game_scarlett_master.exe (GTA VI, Xbox Series X, PE32+ x64)
// Address: 1400588d0  size: 44 bytes
// Name:    FUN_1400588d0
// Subsystem: core
//
// Referenced strings (0 in this body, 0 including direct callees):
// Callees: FUN_141fa7710
//
// Generated decompilation. Formatting follows MiscRef/GTAVSRC conventions;
// identifiers are recovered, not original. See ../../../README.md.

#include "gta6decomp/rage_types.h"


undefined8 FUN_1400588d0(longlong param_1)

{
  char cVar1;
  undefined8 uVar2;
  
  if ((*(byte *)(param_1 + 0x34) & 1) == 0) {
    if ((*(uint *)(param_1 + 0xb4) & 0x3e) == 0x2e) {
      cVar1 = FUN_141fa7710();
      if (cVar1 != '\0') goto LAB_1400588f1;
    }
    uVar2 = 0;
  }
  else {
LAB_1400588f1:
    uVar2 = 1;
  }
  return uVar2;
}

