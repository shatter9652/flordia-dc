// Recovered from game_scarlett_master.exe (GTA VI, Xbox Series X, PE32+ x64)
// Address: 140113ea0  size: 110 bytes
// Name:    FUN_140113ea0
// Subsystem: core
//
// Referenced strings (0 in this body, 0 including direct callees):
// Callees: FUN_140113f50, FUN_140113f10, FUN_144f93d60
//
// Generated decompilation. Formatting follows MiscRef/GTAVSRC conventions;
// identifiers are recovered, not original. See ../../../README.md.

#include "gta6decomp/rage_types.h"


undefined4 FUN_140113ea0(longlong param_1)

{
  longlong lVar1;
  undefined4 uVar2;
  undefined4 uStack_24;
  
  lVar1 = func_0x00014511b7d0(*(undefined4 *)(param_1 + 0x128));
  uVar2 = 0;
  if (lVar1 != 0) {
    lVar1 = FUN_144f93d60(*(undefined4 *)(lVar1 + 0x24),*(undefined8 *)(lVar1 + 0x28),0x78);
    uVar2 = 0;
    if (lVar1 != 0) {
      FUN_140113f10(*(undefined8 *)(param_1 + 8),&uStack_24);
      lVar1 = FUN_140113f50(lVar1,*(undefined4 *)(param_1 + 0x158),uStack_24);
      if (lVar1 != 0) {
        uVar2 = *(undefined4 *)(lVar1 + 0x1c);
      }
    }
  }
  return uVar2;
}

