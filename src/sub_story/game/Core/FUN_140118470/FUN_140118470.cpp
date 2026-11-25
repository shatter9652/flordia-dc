// Recovered from game_scarlett_master.exe (GTA VI, Xbox Series X, PE32+ x64)
// Address: 140118470  size: 81 bytes
// Name:    FUN_140118470
// Subsystem: core
//
// Referenced strings (0 in this body, 0 including direct callees):
// Callees: FUN_140264850
//
// Generated decompilation. Formatting follows MiscRef/GTAVSRC conventions;
// identifiers are recovered, not original. See ../../../README.md.

#include "gta6decomp/rage_types.h"


undefined8 FUN_140118470(longlong param_1,undefined8 param_2,longlong param_3)

{
  int iVar1;
  longlong lVar2;
  
  lVar2 = *(longlong *)(param_1 + 0x28);
  if (lVar2 == 0) {
    lVar2 = FUN_140264850(param_3);
  }
  iVar1 = *(int *)(param_1 + 0x430);
  *(int *)(param_1 + 0x430) = iVar1 + 1;
  *(longlong *)(param_1 + 0x30 + (longlong)iVar1 * 8) = lVar2;
  func_0x000145f40560(lVar2,param_2,*(undefined4 *)(param_3 + 0x70));
  return 1;
}

