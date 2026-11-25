// Recovered from game_scarlett_master.exe (GTA VI, Xbox Series X, PE32+ x64)
// Address: 1400230d0  size: 55 bytes
// Name:    FUN_1400230d0
// Subsystem: core
//
// Referenced strings (0 in this body, 0 including direct callees):
// Callees: FUN_144f91370
//
// Generated decompilation. Formatting follows MiscRef/GTAVSRC conventions;
// identifiers are recovered, not original. See ../../../README.md.

#include "gta6decomp/rage_types.h"


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

byte * FUN_1400230d0(undefined8 param_1,byte *param_2)

{
  longlong lVar1;
  int iVar2;
  
  lVar1 = FUN_144f91370(_DAT_149e482a0);
  iVar2 = 4;
  if (*(int *)(lVar1 + 4) < 4) {
    iVar2 = *(int *)(lVar1 + 4);
  }
  *param_2 = ~(byte)(iVar2 >> 0x1f) & (byte)iVar2;
  return param_2;
}

