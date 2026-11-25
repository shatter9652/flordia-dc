// Recovered from game_scarlett_master.exe (GTA VI, Xbox Series X, PE32+ x64)
// Address: 14012f060  size: 43 bytes
// Name:    FUN_14012f060
// Subsystem: core
//
// Referenced strings (0 in this body, 0 including direct callees):
// Callees: 
//
// Generated decompilation. Formatting follows MiscRef/GTAVSRC conventions;
// identifiers are recovered, not original. See ../../../README.md.

#include "gta6decomp/rage_types.h"


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined8 FUN_14012f060(void)

{
  uint uVar1;
  undefined8 uVar2;
  
  uVar1 = func_0x000144fded00();
  if (uVar1 == 0xffffffff) {
    uVar2 = 0;
  }
  else {
    uVar2 = *(undefined8 *)(*(longlong *)(_DAT_14763b048 + 0x140) + (ulonglong)uVar1 * 8);
  }
  return uVar2;
}

