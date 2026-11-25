// Recovered from game_scarlett_master.exe (GTA VI, Xbox Series X, PE32+ x64)
// Address: 14006bbb0  size: 62 bytes
// Name:    FUN_14006bbb0
// Subsystem: core
//
// Referenced strings (0 in this body, 0 including direct callees):
// Callees: FUN_14510c570
//
// Generated decompilation. Formatting follows MiscRef/GTAVSRC conventions;
// identifiers are recovered, not original. See ../../../README.md.

#include "gta6decomp/rage_types.h"


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined4 FUN_14006bbb0(void)

{
  char cVar1;
  undefined4 uVar2;
  
  if ((DAT_14ab75da9 & 0x40) == 0) {
    cVar1 = FUN_14510c570();
    uVar2 = _DAT_145fc6ed8;
    if (cVar1 == '\0') {
      uVar2 = 0;
    }
  }
  else {
    uVar2 = *(undefined4 *)((ulonglong)DAT_149e5352c * 4 + 0x149e53520);
  }
  return uVar2;
}

