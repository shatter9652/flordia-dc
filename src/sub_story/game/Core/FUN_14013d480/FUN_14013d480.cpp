// Recovered from game_scarlett_master.exe (GTA VI, Xbox Series X, PE32+ x64)
// Address: 14013d480  size: 68 bytes
// Name:    FUN_14013d480
// Subsystem: core
//
// Referenced strings (0 in this body, 0 including direct callees):
// Callees: 
//
// Generated decompilation. Formatting follows MiscRef/GTAVSRC conventions;
// identifiers are recovered, not original. See ../../../README.md.

#include "gta6decomp/rage_types.h"


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_14013d480(undefined8 param_1)

{
  byte *pbVar1;
  uint uVar2;
  longlong lVar3;
  
  lVar3 = func_0x000144f124c0(param_1,3);
  if ((lVar3 != 0) && (*(char *)(_DAT_14ab7ef10 + 0x27c) == '\x01')) {
    uVar2 = *(uint *)(lVar3 + 0x10);
    FUN_144ff7cd0();
    pbVar1 = (byte *)(lVar3 + (ulonglong)uVar2 * 0x30 + 0x43);
    *pbVar1 = *pbVar1 | 0x20;
    return;
  }
  return;
}

