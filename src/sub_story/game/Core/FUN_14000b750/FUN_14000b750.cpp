// Recovered from game_scarlett_master.exe (GTA VI, Xbox Series X, PE32+ x64)
// Address: 14000b750  size: 179 bytes
// Name:    FUN_14000b750
// Subsystem: core
//
// Referenced strings (0 in this body, 0 including direct callees):
// Callees: FUN_14000b940, FUN_144dc3880
//
// Generated decompilation. Formatting follows MiscRef/GTAVSRC conventions;
// identifiers are recovered, not original. See ../../../README.md.

#include "gta6decomp/rage_types.h"


void FUN_14000b750(longlong param_1)

{
  uint uVar1;
  longlong lVar2;
  longlong lVar3;
  longlong lVar4;
  longlong lVar5;
  
  lVar2 = func_0x000144dc4490(*(undefined4 *)(*(longlong *)(param_1 + 8) + 0x9c));
  if (lVar2 != 0) {
    lVar4 = *(longlong *)(lVar2 + 0x3d10);
    if ((lVar4 == 0) || (*(int *)(lVar4 + 8) != 3)) {
      lVar4 = 0;
    }
    else {
      lVar4 = func_0x000140383930(*(undefined4 *)(lVar4 + 0x28));
    }
    uVar1 = *(uint *)(param_1 + 0xf4);
    if ((ulonglong)uVar1 != 0) {
      lVar5 = 0;
      do {
        lVar3 = func_0x000144dd0bd0(*(undefined4 *)(param_1 + 0x100 + lVar5));
        if (lVar3 != 0) {
          FUN_144dc3880(lVar2 + 0x20,*(undefined4 *)(lVar3 + 0x9c));
          if (lVar3 != lVar4) {
            FUN_14000b940(lVar2 + 0x20,*(undefined4 *)(lVar3 + 0x9c));
          }
        }
        lVar5 = lVar5 + 0x90;
      } while ((ulonglong)uVar1 * 0x90 != lVar5);
    }
  }
  return;
}

