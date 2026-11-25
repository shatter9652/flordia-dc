// Recovered from game_scarlett_master.exe (GTA VI, Xbox Series X, PE32+ x64)
// Address: 140071c60  size: 31 bytes
// Name:    FUN_140071c60
// Subsystem: core
//
// Referenced strings (0 in this body, 0 including direct callees):
// Callees: 
//
// Generated decompilation. Formatting follows MiscRef/GTAVSRC conventions;
// identifiers are recovered, not original. See ../../../README.md.

#include "gta6decomp/rage_types.h"


byte FUN_140071c60(void)

{
  uint uVar1;
  longlong lVar2;
  byte bVar3;
  longlong lVar4;
  byte bVar5;
  longlong lVar6;
  
  lVar4 = func_0x000144e761d0();
  uVar1 = *(uint *)(lVar4 + 0x27c);
  lVar4 = *(longlong *)(lVar4 + 0x280);
  if (uVar1 == 0) {
    bVar5 = 0;
  }
  else {
    lVar6 = 0;
    bVar5 = 0;
    do {
      lVar2 = *(longlong *)(lVar4 + lVar6);
      bVar3 = FUN_144ed3980(*(undefined4 *)(lVar2 + 0xc),*(undefined8 *)(lVar2 + 0x10));
      bVar5 = bVar5 | bVar3;
      lVar6 = lVar6 + 8;
    } while ((ulonglong)uVar1 << 3 != lVar6);
  }
  return bVar5 & 1;
}

