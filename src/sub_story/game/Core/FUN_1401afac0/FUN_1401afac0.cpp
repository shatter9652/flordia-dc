// Recovered from game_scarlett_master.exe (GTA VI, Xbox Series X, PE32+ x64)
// Address: 1401afac0  size: 257 bytes
// Name:    FUN_1401afac0
// Subsystem: core
//
// Referenced strings (0 in this body, 0 including direct callees):
// Callees: FUN_145246580, FUN_144f9fed0, FUN_140040480
//
// Generated decompilation. Formatting follows MiscRef/GTAVSRC conventions;
// identifiers are recovered, not original. See ../../../README.md.

#include "gta6decomp/rage_types.h"


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined4 FUN_1401afac0(longlong param_1,char param_2)

{
  char cVar1;
  longlong lVar2;
  
  if (param_2 != '\0') {
    lVar2 = FUN_140040480(_DAT_14a9b3e18,0x78a66d2a);
    if (((lVar2 != 0) && (cVar1 = FUN_144f9fed0(lVar2), cVar1 != '\0')) &&
       (cVar1 = FUN_145246580(), cVar1 != '\0')) {
      return 0;
    }
    lVar2 = FUN_140040480(_DAT_14a9b3e18,0xd1c15681);
    if (((lVar2 != 0) && (cVar1 = FUN_144f9fed0(lVar2), cVar1 != '\0')) &&
       (cVar1 = FUN_145246580(), cVar1 != '\0')) {
      return 0;
    }
  }
  return *(undefined4 *)(param_1 + 0x114);
}

