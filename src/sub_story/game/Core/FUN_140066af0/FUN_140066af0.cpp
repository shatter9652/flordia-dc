// Recovered from game_scarlett_master.exe (GTA VI, Xbox Series X, PE32+ x64)
// Address: 140066af0  size: 71 bytes
// Name:    FUN_140066af0
// Subsystem: core
//
// Referenced strings (0 in this body, 0 including direct callees):
// Callees: FUN_1400676e0, FUN_145304b50
//
// Generated decompilation. Formatting follows MiscRef/GTAVSRC conventions;
// identifiers are recovered, not original. See ../../../README.md.

#include "gta6decomp/rage_types.h"


byte FUN_140066af0(longlong param_1)

{
  byte bVar1;
  byte bVar2;
  
  bVar1 = FUN_145304b50(param_1,param_1 + 0x68);
  if (*(longlong **)(param_1 + 0xe0) != (longlong *)0x0) {
    bVar2 = (**(code **)(**(longlong **)(param_1 + 0xe0) + 0x130))();
    bVar1 = bVar1 | bVar2;
  }
  if (*(longlong *)(param_1 + 0xf8) != 0) {
    bVar2 = FUN_1400676e0();
    bVar1 = bVar1 | bVar2;
  }
  return bVar1;
}

