// Recovered from game_scarlett_master.exe (GTA VI, Xbox Series X, PE32+ x64)
// Address: 140184e60  size: 72 bytes
// Name:    FUN_140184e60
// Subsystem: core
//
// Referenced strings (0 in this body, 0 including direct callees):
// Callees: FUN_14503e0d0, FUN_14503e140
//
// Generated decompilation. Formatting follows MiscRef/GTAVSRC conventions;
// identifiers are recovered, not original. See ../../../README.md.

#include "gta6decomp/rage_types.h"


void FUN_140184e60(longlong param_1,undefined8 param_2,ushort param_3)

{
  longlong lVar1;
  ushort uVar2;
  
  lVar1 = FUN_14503e0d0(*(undefined8 *)(param_1 + 0x28));
  lVar1 = FUN_14503e140(lVar1 + 0x40,2);
  uVar2 = param_3 | 0x80;
  if (lVar1 == 0) {
    uVar2 = param_3;
  }
  *(ushort *)(param_1 + 0x4a) = uVar2 | *(ushort *)(param_1 + 0x4a) & 0xff7f;
  return;
}

