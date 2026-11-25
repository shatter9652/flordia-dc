// Recovered from game_scarlett_master.exe (GTA VI, Xbox Series X, PE32+ x64)
// Address: 14019bcc0  size: 77 bytes
// Name:    FUN_14019bcc0
// Subsystem: core
//
// Referenced strings (0 in this body, 0 including direct callees):
// Callees: FUN_140d55d90, FUN_144e523e0
//
// Generated decompilation. Formatting follows MiscRef/GTAVSRC conventions;
// identifiers are recovered, not original. See ../../../README.md.

#include "gta6decomp/rage_types.h"


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_14019bcc0(undefined8 param_1)

{
  undefined1 auStack_18 [8];
  
  _DAT_146df5b88 = (_DAT_146df5b88 & 0xffffffff) * 0x5cdcfaa7 + (_DAT_146df5b88 >> 0x20);
  FUN_144e523e0(auStack_18,(uint)_DAT_146df5b88 & 0x7fff);
  FUN_140d55d90(param_1,auStack_18);
  return;
}

