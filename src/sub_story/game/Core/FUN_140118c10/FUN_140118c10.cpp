// Recovered from game_scarlett_master.exe (GTA VI, Xbox Series X, PE32+ x64)
// Address: 140118c10  size: 83 bytes
// Name:    FUN_140118c10
// Subsystem: core
//
// Referenced strings (0 in this body, 0 including direct callees):
// Callees: FUN_144fc6880, FUN_140119ac0, FUN_140118c70
//
// Generated decompilation. Formatting follows MiscRef/GTAVSRC conventions;
// identifiers are recovered, not original. See ../../../README.md.

#include "gta6decomp/rage_types.h"


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_140118c10(longlong param_1)

{
  longlong lStack_28;
  undefined8 uStack_20;
  
  lStack_28 = _DAT_1461b5ae0;
  uStack_20 = _UNK_1461b5ae8;
  if (*(char *)(param_1 + 0x34) == '\x01') {
    FUN_140118c70(param_1,&lStack_28);
    if (lStack_28 != 0) {
      FUN_144fc6880(param_1);
    }
  }
  if (*(char *)(param_1 + 0x34) == '\x01') {
    FUN_140119ac0(&lStack_28);
  }
  return;
}

