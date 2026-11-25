// Recovered from game_scarlett_master.exe (GTA VI, Xbox Series X, PE32+ x64)
// Address: 140075420  size: 30 bytes
// Name:    FUN_140075420
// Subsystem: core
//
// Referenced strings (0 in this body, 0 including direct callees):
// Callees: FUN_140075140
//
// Generated decompilation. Formatting follows MiscRef/GTAVSRC conventions;
// identifiers are recovered, not original. See ../../../README.md.

#include "gta6decomp/rage_types.h"


undefined8 FUN_140075420(void)

{
  char cVar1;
  undefined8 uVar2;
  
  cVar1 = FUN_140075140();
  uVar2 = 0x4000000;
  if (cVar1 != '\0') {
    uVar2 = 0x2800000;
  }
  return uVar2;
}

