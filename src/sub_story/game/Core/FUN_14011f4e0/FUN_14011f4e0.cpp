// Recovered from game_scarlett_master.exe (GTA VI, Xbox Series X, PE32+ x64)
// Address: 14011f4e0  size: 24 bytes
// Name:    FUN_14011f4e0
// Subsystem: core
//
// Referenced strings (0 in this body, 0 including direct callees):
// Callees: 
//
// Generated decompilation. Formatting follows MiscRef/GTAVSRC conventions;
// identifiers are recovered, not original. See ../../../README.md.

#include "gta6decomp/rage_types.h"


undefined4 FUN_14011f4e0(longlong *param_1)

{
  byte bVar1;
  undefined4 uVar2;
  
  bVar1 = (**(code **)(*param_1 + 0x250))();
  uVar2 = 0;
  if (bVar1 < 5) {
    uVar2 = *(undefined4 *)(&UNK_1465ec464 + (ulonglong)bVar1 * 4);
  }
  return uVar2;
}

