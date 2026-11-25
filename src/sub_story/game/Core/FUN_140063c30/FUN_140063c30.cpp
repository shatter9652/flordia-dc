// Recovered from game_scarlett_master.exe (GTA VI, Xbox Series X, PE32+ x64)
// Address: 140063c30  size: 59 bytes
// Name:    FUN_140063c30
// Subsystem: core
//
// Referenced strings (0 in this body, 0 including direct callees):
// Callees: FUN_144db8060
//
// Generated decompilation. Formatting follows MiscRef/GTAVSRC conventions;
// identifiers are recovered, not original. See ../../../README.md.

#include "gta6decomp/rage_types.h"


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

bool FUN_140063c30(void)

{
  char cVar1;
  bool bVar2;
  
  cVar1 = FUN_144db8060();
  bVar2 = false;
  if ((cVar1 == '\0') && (_DAT_14ab46204 < _DAT_146159fa0)) {
    bVar2 = _DAT_14ab46208 < _DAT_146159f8c;
  }
  return bVar2;
}

