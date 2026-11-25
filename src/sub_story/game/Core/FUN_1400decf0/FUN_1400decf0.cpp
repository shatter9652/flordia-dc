// Recovered from game_scarlett_master.exe (GTA VI, Xbox Series X, PE32+ x64)
// Address: 1400decf0  size: 42 bytes
// Name:    FUN_1400decf0
// Subsystem: core
//
// Referenced strings (0 in this body, 0 including direct callees):
// Callees: FUN_1400df470, FUN_144f62bf0
//
// Generated decompilation. Formatting follows MiscRef/GTAVSRC conventions;
// identifiers are recovered, not original. See ../../../README.md.

#include "gta6decomp/rage_types.h"


bool FUN_1400decf0(longlong param_1)

{
  char cVar1;
  bool bVar2;
  int iVar3;
  
  cVar1 = FUN_1400df470();
  if (cVar1 == '\0') {
    bVar2 = false;
  }
  else {
    iVar3 = FUN_144f62bf0(*(undefined8 *)(param_1 + 0x10));
    bVar2 = iVar3 < 2;
  }
  return bVar2;
}

