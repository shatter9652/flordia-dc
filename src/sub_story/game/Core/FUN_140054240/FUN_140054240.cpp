// Recovered from game_scarlett_master.exe (GTA VI, Xbox Series X, PE32+ x64)
// Address: 140054240  size: 54 bytes
// Name:    FUN_140054240
// Subsystem: core
//
// Referenced strings (0 in this body, 0 including direct callees):
// Callees: FUN_144e7a630
//
// Generated decompilation. Formatting follows MiscRef/GTAVSRC conventions;
// identifiers are recovered, not original. See ../../../README.md.

#include "gta6decomp/rage_types.h"


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

float FUN_140054240(void)

{
  byte bVar1;
  longlong lVar2;
  float fVar3;
  
  lVar2 = FUN_144e7a630();
  if (lVar2 == 0) {
    fVar3 = 0.0;
  }
  else {
    bVar1 = func_0x000144e7aff0(4,*(undefined8 *)(lVar2 + 8));
    fVar3 = (float)bVar1 * _DAT_146159ef4;
  }
  return fVar3;
}

