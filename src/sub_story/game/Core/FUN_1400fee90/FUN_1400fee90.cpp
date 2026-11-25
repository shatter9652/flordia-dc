// Recovered from game_scarlett_master.exe (GTA VI, Xbox Series X, PE32+ x64)
// Address: 1400fee90  size: 39 bytes
// Name:    FUN_1400fee90
// Subsystem: core
//
// Referenced strings (0 in this body, 0 including direct callees):
// Callees: 
//
// Generated decompilation. Formatting follows MiscRef/GTAVSRC conventions;
// identifiers are recovered, not original. See ../../../README.md.

#include "gta6decomp/rage_types.h"


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

int FUN_1400fee90(void)

{
  uint uVar1;
  uint uVar2;
  int iVar3;
  int iVar4;
  
  iVar4 = func_0x000144058bf0();
  uVar1 = 0;
  for (uVar2 = _DAT_14ab56370; (uVar2 & 1) == 0; uVar2 = uVar2 >> 1 | 0x80000000) {
    uVar1 = uVar1 + 1;
  }
  iVar3 = 0;
  if (-1 < iVar4) {
    iVar3 = iVar4 + 1 << (uVar1 & 0x1f);
  }
  return iVar3;
}

