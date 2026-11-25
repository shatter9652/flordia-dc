// Recovered from game_scarlett_master.exe (GTA VI, Xbox Series X, PE32+ x64)
// Address: 14010e5b0  size: 53 bytes
// Name:    FUN_14010e5b0
// Subsystem: core
//
// Referenced strings (0 in this body, 0 including direct callees):
// Callees: FUN_142c88470
//
// Generated decompilation. Formatting follows MiscRef/GTAVSRC conventions;
// identifiers are recovered, not original. See ../../../README.md.

#include "gta6decomp/rage_types.h"


void FUN_14010e5b0(ulonglong param_1)

{
  longlong *plVar1;
  
  plVar1 = *(longlong **)((param_1 & 0xffffffff) * 8 + 0x149999c80);
  if (plVar1 != (longlong *)0x0) {
    (**(code **)(*plVar1 + 0x40))();
    FUN_142c88470((param_1 & 0xffffffff) * 8 + 0x149999c80);
    DAT_149999ff8 = DAT_149999ff8 + -1;
  }
  return;
}

