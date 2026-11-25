// Recovered from game_scarlett_master.exe (GTA VI, Xbox Series X, PE32+ x64)
// Address: 1401a51b0  size: 32 bytes
// Name:    FUN_1401a51b0
// Subsystem: core
//
// Referenced strings (0 in this body, 0 including direct callees):
// Callees: FUN_144e6cf90
//
// Generated decompilation. Formatting follows MiscRef/GTAVSRC conventions;
// identifiers are recovered, not original. See ../../../README.md.

#include "gta6decomp/rage_types.h"


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined8 FUN_1401a51b0(void)

{
  longlong lVar1;
  uint uVar2;
  
  lVar1 = _DAT_1476b2718;
  uVar2 = FUN_144e6cf90(_DAT_1476b2718);
  return *(undefined8 *)(lVar1 + (ulonglong)uVar2 * 8);
}

