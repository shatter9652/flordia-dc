// Recovered from game_scarlett_master.exe (GTA VI, Xbox Series X, PE32+ x64)
// Address: 14012d550  size: 87 bytes
// Name:    FUN_14012d550
// Subsystem: core
//
// Referenced strings (0 in this body, 0 including direct callees):
// Callees: FUN_144fde950, FUN_144fdeb30
//
// Generated decompilation. Formatting follows MiscRef/GTAVSRC conventions;
// identifiers are recovered, not original. See ../../../README.md.

#include "gta6decomp/rage_types.h"


void FUN_14012d550(longlong param_1,ushort param_2)

{
  longlong lVar1;
  longlong lVar2;
  
  if (param_2 != 0) {
    lVar2 = 0;
    do {
      lVar1 = *(longlong *)(param_1 + 0xb0 + lVar2);
      if (*(longlong *)(lVar1 + 0x18) != 0) {
        FUN_144fde950(lVar1);
        FUN_144fdeb30(*(undefined4 *)(lVar1 + 0x6c),*(undefined8 *)(lVar1 + 0x70));
      }
      lVar2 = lVar2 + 0xb8;
    } while ((ulonglong)param_2 * 0xb8 - lVar2 != 0);
  }
  return;
}

