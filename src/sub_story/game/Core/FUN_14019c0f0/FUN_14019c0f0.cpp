// Recovered from game_scarlett_master.exe (GTA VI, Xbox Series X, PE32+ x64)
// Address: 14019c0f0  size: 101 bytes
// Name:    FUN_14019c0f0
// Subsystem: core
//
// Referenced strings (0 in this body, 0 including direct callees):
// Callees: FUN_144dec770
//
// Generated decompilation. Formatting follows MiscRef/GTAVSRC conventions;
// identifiers are recovered, not original. See ../../../README.md.

#include "gta6decomp/rage_types.h"


void FUN_14019c0f0(longlong param_1)

{
  uint uVar1;
  longlong lVar2;
  undefined4 auStack_28 [4];
  undefined4 auStack_18 [2];
  
  uVar1 = *(uint *)(param_1 + 4);
  if (2 < uVar1) {
    FUN_144dec770(*(longlong *)(param_1 + 8) + 0xa0);
    if (uVar1 != 3) {
      FUN_144dec770(*(longlong *)(param_1 + 8) + 0xf0);
      if (4 < uVar1) {
        FUN_144dec770(*(longlong *)(param_1 + 8) + 0x140);
        if (uVar1 != 5) {
          lVar2 = *(longlong *)(param_1 + 8);
          FUN_144dec7b0(lVar2 + 400,lVar2 + 0x1b0);
          FUN_144deca20(auStack_18,auStack_28,lVar2 + 400);
          *(undefined4 *)(lVar2 + 0x1d8) = auStack_18[0];
          *(undefined4 *)(lVar2 + 0x1dc) = auStack_28[0];
          return;
        }
      }
    }
  }
  return;
}

