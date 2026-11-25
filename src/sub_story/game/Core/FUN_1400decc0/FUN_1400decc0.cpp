// Recovered from game_scarlett_master.exe (GTA VI, Xbox Series X, PE32+ x64)
// Address: 1400decc0  size: 41 bytes
// Name:    FUN_1400decc0
// Subsystem: core
//
// Referenced strings (0 in this body, 0 including direct callees):
// Callees: FUN_1400decf0, FUN_144f62bf0
//
// Generated decompilation. Formatting follows MiscRef/GTAVSRC conventions;
// identifiers are recovered, not original. See ../../../README.md.

#include "gta6decomp/rage_types.h"


bool FUN_1400decc0(longlong param_1)

{
  char cVar1;
  int iVar2;
  bool bVar3;
  
  cVar1 = FUN_1400decf0();
  if (cVar1 == '\0') {
    bVar3 = false;
  }
  else {
    iVar2 = FUN_144f62bf0(*(undefined8 *)(param_1 + 0x10));
    bVar3 = iVar2 == 0;
  }
  return bVar3;
}

