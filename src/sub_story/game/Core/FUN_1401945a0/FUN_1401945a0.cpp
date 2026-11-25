// Recovered from game_scarlett_master.exe (GTA VI, Xbox Series X, PE32+ x64)
// Address: 1401945a0  size: 37 bytes
// Name:    FUN_1401945a0
// Subsystem: core
//
// Referenced strings (0 in this body, 0 including direct callees):
// Callees: 
//
// Generated decompilation. Formatting follows MiscRef/GTAVSRC conventions;
// identifiers are recovered, not original. See ../../../README.md.

#include "gta6decomp/rage_types.h"


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined4 FUN_1401945a0(void)

{
  longlong lVar1;
  undefined4 uVar2;
  
  lVar1 = func_0x000145350ce0();
  uVar2 = _DAT_145fc6edc;
  if (lVar1 != 0) {
    uVar2 = *(undefined4 *)(lVar1 + 0x170);
  }
  return uVar2;
}

