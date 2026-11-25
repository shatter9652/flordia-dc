// Recovered from game_scarlett_master.exe (GTA VI, Xbox Series X, PE32+ x64)
// Address: 14000a9c0  size: 94 bytes
// Name:    FUN_14000a9c0
// Subsystem: core
//
// Referenced strings (0 in this body, 0 including direct callees):
// Callees: FUN_144dc4620
//
// Generated decompilation. Formatting follows MiscRef/GTAVSRC conventions;
// identifiers are recovered, not original. See ../../../README.md.

#include "gta6decomp/rage_types.h"


void FUN_14000a9c0(longlong param_1)

{
  longlong lVar1;
  longlong lVar2;
  uint uVar3;
  
  uVar3 = *(uint *)(param_1 + 0x38);
  lVar1 = func_0x000144dd0bd0(uVar3);
  if (lVar1 != 0) {
    lVar2 = func_0x000144dc4490(*(undefined4 *)(*(longlong *)(param_1 + 8) + 0x9c));
    if (lVar2 != 0) {
      FUN_144dc4620(lVar2 + 0x3c04,*(undefined4 *)(lVar1 + 0x9c));
      uVar3 = *(uint *)(param_1 + 0x38);
    }
  }
  *(uint *)(param_1 + 0x38) = uVar3 | 0x1ffff;
  *(byte *)(param_1 + 0x75) = *(byte *)(param_1 + 0x75) & 0xdf;
  return;
}

