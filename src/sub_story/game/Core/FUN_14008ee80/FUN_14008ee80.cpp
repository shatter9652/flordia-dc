// Recovered from game_scarlett_master.exe (GTA VI, Xbox Series X, PE32+ x64)
// Address: 14008ee80  size: 90 bytes
// Name:    FUN_14008ee80
// Subsystem: core
//
// Referenced strings (0 in this body, 0 including direct callees):
// Callees: FUN_144dda0f0, FUN_14008ee80
//
// Generated decompilation. Formatting follows MiscRef/GTAVSRC conventions;
// identifiers are recovered, not original. See ../../../README.md.

#include "gta6decomp/rage_types.h"


void FUN_14008ee80(longlong param_1,undefined8 param_2,char param_3)

{
  ushort uVar1;
  longlong lVar2;
  longlong lVar3;
  
  FUN_144dda0f0();
  if (((*(byte *)(param_1 + 4) & 10) == 0 && param_3 == '\x01') &&
     (uVar1 = *(ushort *)(param_1 + 0x28), uVar1 != 0)) {
    lVar2 = *(longlong *)(param_1 + 0x20);
    lVar3 = 0;
    do {
      FUN_14008ee80(*(undefined8 *)(lVar2 + lVar3),param_2,1);
      lVar3 = lVar3 + 8;
    } while ((ulonglong)uVar1 * 8 != lVar3);
  }
  return;
}

