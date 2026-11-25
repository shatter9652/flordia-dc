// Recovered from game_scarlett_master.exe (GTA VI, Xbox Series X, PE32+ x64)
// Address: 140008b80  size: 78 bytes
// Name:    FUN_140008b80
// Subsystem: core
//
// Referenced strings (0 in this body, 0 including direct callees):
// Callees: FUN_144e52300
//
// Generated decompilation. Formatting follows MiscRef/GTAVSRC conventions;
// identifiers are recovered, not original. See ../../../README.md.

#include "gta6decomp/rage_types.h"


void FUN_140008b80(undefined8 param_1,longlong param_2,longlong param_3,char param_4)

{
  byte bVar1;
  
  bVar1 = FUN_144e52300();
  if (((*(byte *)(param_3 + 0xa3) & 4) == 0) &&
     ((~bVar1 & (*(uint *)(param_2 + 0x80) >> 0x17 & 1) == 0) != 0 || param_4 != '\0')) {
    *(uint *)(param_2 + 0x7c) = *(uint *)(param_2 + 0x7c) & 0xfffffe3f;
    *(uint *)(param_2 + 0x80) = *(uint *)(param_2 + 0x80) & 0xffdffff7;
  }
  return;
}

