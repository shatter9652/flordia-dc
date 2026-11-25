// Recovered from game_scarlett_master.exe (GTA VI, Xbox Series X, PE32+ x64)
// Address: 1401b0c90  size: 104 bytes
// Name:    FUN_1401b0c90
// Subsystem: core
//
// Referenced strings (0 in this body, 0 including direct callees):
// Callees: FUN_145161000
//
// Generated decompilation. Formatting follows MiscRef/GTAVSRC conventions;
// identifiers are recovered, not original. See ../../../README.md.

#include "gta6decomp/rage_types.h"


bool FUN_1401b0c90(void)

{
  uint uVar1;
  uint uVar2;
  longlong lVar3;
  
  lVar3 = FUN_145161000();
  if (lVar3 != 0) {
    uVar1 = *(uint *)(*(longlong *)(lVar3 + 0x10) + 0x350);
    if (((-1 < (short)uVar1) &&
        (uVar2 = *(uint *)(*(longlong *)(lVar3 + 0x10) + 0x34c), (uVar2 >> 0x1d & 1) == 0)) &&
       ((*(short *)(lVar3 + 0x118) == 0 ||
        (((**(longlong **)(lVar3 + 0x110) == 0 ||
          ((*(uint *)(*(longlong *)(**(longlong **)(lVar3 + 0x110) + 0x10) + 0x1c) & 0xfffffffe) !=
           2)) || ((uVar1 & 0x20) != 0)))))) {
      return (uVar2 >> 0xc & 1) == 0;
    }
  }
  return false;
}

