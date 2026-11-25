// Recovered from game_scarlett_master.exe (GTA VI, Xbox Series X, PE32+ x64)
// Address: 140134d70  size: 41 bytes
// Name:    FUN_140134d70
// Subsystem: core
//
// Referenced strings (0 in this body, 0 including direct callees):
// Callees: FUN_144e6cf90
//
// Generated decompilation. Formatting follows MiscRef/GTAVSRC conventions;
// identifiers are recovered, not original. See ../../../README.md.

#include "gta6decomp/rage_types.h"


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined8 FUN_140134d70(void)

{
  longlong lVar1;
  uint uVar2;
  undefined8 uVar3;
  
  lVar1 = _DAT_1488cd840;
  if (_DAT_1488cd840 == 0) {
    uVar3 = 0;
  }
  else {
    uVar2 = FUN_144e6cf90(_DAT_1488cd840);
    uVar3 = *(undefined8 *)(lVar1 + (ulonglong)uVar2 * 8);
  }
  return uVar3;
}

