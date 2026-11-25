// Recovered from game_scarlett_master.exe (GTA VI, Xbox Series X, PE32+ x64)
// Address: 1401a19d0  size: 51 bytes
// Name:    FUN_1401a19d0
// Subsystem: core
//
// Referenced strings (0 in this body, 0 including direct callees):
// Callees: FUN_1401a1a10
//
// Generated decompilation. Formatting follows MiscRef/GTAVSRC conventions;
// identifiers are recovered, not original. See ../../../README.md.

#include "gta6decomp/rage_types.h"


ulonglong FUN_1401a19d0(uint param_1,byte param_2)

{
  longlong lVar1;
  ulonglong uVar2;
  
  lVar1 = FUN_1401a1a10();
  if ((lVar1 == 0) || ((*(byte *)(lVar1 + 0x297) & 4) == 0)) {
    uVar2 = 0;
  }
  else {
    uVar2 = CONCAT71((int7)((ulonglong)lVar1 >> 8),(param_1 & 0x60) == 0 | param_2);
  }
  return uVar2 & 0xffffffffffffff01;
}

