// Recovered from game_scarlett_master.exe (GTA VI, Xbox Series X, PE32+ x64)
// Address: 140070150  size: 60 bytes
// Name:    FUN_140070150
// Subsystem: core
//
// Referenced strings (0 in this body, 0 including direct callees):
// Callees: FUN_14006aed0
//
// Generated decompilation. Formatting follows MiscRef/GTAVSRC conventions;
// identifiers are recovered, not original. See ../../../README.md.

#include "gta6decomp/rage_types.h"


void FUN_140070150(longlong param_1)

{
  longlong lVar1;
  
  *(byte *)(param_1 + 8) = *(byte *)(param_1 + 8) & 0xdf;
  lVar1 = *(longlong *)(param_1 + 0x20);
  if (lVar1 != 0) {
    *(undefined8 *)(param_1 + 0x20) = 0;
    FUN_14006aed0(*(undefined8 *)(lVar1 + 0x80),lVar1,0,7,4);
  }
  return;
}

