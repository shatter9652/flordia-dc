// Recovered from game_scarlett_master.exe (GTA VI, Xbox Series X, PE32+ x64)
// Address: 14002c8b0  size: 66 bytes
// Name:    FUN_14002c8b0
// Subsystem: core
//
// Referenced strings (0 in this body, 0 including direct callees):
// Callees: FUN_14002c900
//
// Generated decompilation. Formatting follows MiscRef/GTAVSRC conventions;
// identifiers are recovered, not original. See ../../../README.md.

#include "gta6decomp/rage_types.h"


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

ulonglong FUN_14002c8b0(void)

{
  byte bVar1;
  undefined8 unaff_RBX;
  undefined7 uVar3;
  ulonglong uVar2;
  ulonglong uVar4;
  
  uVar3 = (undefined7)((ulonglong)unaff_RBX >> 8);
  if (_DAT_1499aa7d8 == 0) {
    uVar2 = CONCAT71(uVar3,1);
  }
  else {
    uVar2 = CONCAT71(uVar3,1);
    uVar4 = 0;
    do {
      bVar1 = FUN_14002c900(*(undefined8 *)(_DAT_1499aa7d0 + uVar4 * 8));
      uVar2 = CONCAT71((int7)(uVar2 >> 8),(byte)uVar2 & bVar1);
      uVar4 = uVar4 + 1;
    } while (uVar4 < _DAT_1499aa7d8);
  }
  return uVar2 & 0xffffffff;
}

