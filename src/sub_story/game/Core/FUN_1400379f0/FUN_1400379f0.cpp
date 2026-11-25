// Recovered from game_scarlett_master.exe (GTA VI, Xbox Series X, PE32+ x64)
// Address: 1400379f0  size: 80 bytes
// Name:    FUN_1400379f0
// Subsystem: core
//
// Referenced strings (0 in this body, 0 including direct callees):
// Callees: 
//
// Generated decompilation. Formatting follows MiscRef/GTAVSRC conventions;
// identifiers are recovered, not original. See ../../../README.md.

#include "gta6decomp/rage_types.h"


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined8 FUN_1400379f0(void)

{
  char cVar1;
  uint uVar2;
  
  uVar2 = _DAT_14875b634;
  if (((DAT_14abbe2e0 == '\0') &&
      (cVar1 = func_0x000144f7b6a0(), uVar2 = _DAT_14875b634, cVar1 == '\0')) &&
     (DAT_14abbe2e1 != '\x01')) {
    uVar2 = _DAT_14875b630 == 0 ^ _DAT_14875b634;
  }
  return *(undefined8 *)(*(longlong *)((ulonglong)uVar2 * 8 + 0x14875b610) + 0x28);
}

