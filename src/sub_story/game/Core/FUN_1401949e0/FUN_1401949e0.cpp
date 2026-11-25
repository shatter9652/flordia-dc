// Recovered from game_scarlett_master.exe (GTA VI, Xbox Series X, PE32+ x64)
// Address: 1401949e0  size: 21 bytes
// Name:    FUN_1401949e0
// Subsystem: core
//
// Referenced strings (0 in this body, 0 including direct callees):
// Callees: 
//
// Generated decompilation. Formatting follows MiscRef/GTAVSRC conventions;
// identifiers are recovered, not original. See ../../../README.md.

#include "gta6decomp/rage_types.h"


uint FUN_1401949e0(void)

{
  uint uVar1;
  longlong lVar2;
  
  lVar2 = func_0x00014504c1b0();
  uVar1 = 3;
  if ((int)*(uint *)(lVar2 + 0x6c) < 3) {
    uVar1 = *(uint *)(lVar2 + 0x6c);
  }
  return ~((int)uVar1 >> 0x1f) & uVar1;
}

