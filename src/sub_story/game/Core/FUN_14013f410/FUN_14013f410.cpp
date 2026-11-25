// Recovered from game_scarlett_master.exe (GTA VI, Xbox Series X, PE32+ x64)
// Address: 14013f410  size: 61 bytes
// Name:    FUN_14013f410
// Subsystem: core
//
// Referenced strings (0 in this body, 0 including direct callees):
// Callees: FUN_145237f20
//
// Generated decompilation. Formatting follows MiscRef/GTAVSRC conventions;
// identifiers are recovered, not original. See ../../../README.md.

#include "gta6decomp/rage_types.h"


void FUN_14013f410(longlong param_1)

{
  longlong lVar1;
  
  if (((*(byte *)(param_1 + 0x211) & 0x10) != 0) &&
     (lVar1 = *(longlong *)((*(ulonglong *)(param_1 + 8) & 0xfffffffffffffff0) + 0x28), lVar1 != 0))
  {
    FUN_145237f20(lVar1,*(undefined4 *)(param_1 + 0x204));
    *(byte *)(param_1 + 0x211) = *(byte *)(param_1 + 0x211) & 0xef;
  }
  return;
}

