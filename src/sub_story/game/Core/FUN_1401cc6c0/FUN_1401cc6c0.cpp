// Recovered from game_scarlett_master.exe (GTA VI, Xbox Series X, PE32+ x64)
// Address: 1401cc6c0  size: 112 bytes
// Name:    FUN_1401cc6c0
// Subsystem: core
//
// Referenced strings (0 in this body, 0 including direct callees):
// Callees: FUN_1453359e0, FUN_145086440
//
// Generated decompilation. Formatting follows MiscRef/GTAVSRC conventions;
// identifiers are recovered, not original. See ../../../README.md.

#include "gta6decomp/rage_types.h"


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined4 FUN_1401cc6c0(longlong param_1,longlong param_2)

{
  longlong lVar1;
  longlong lVar2;
  longlong *plVar3;
  undefined4 uVar4;
  undefined1 auStack_1c [4];
  
  lVar1 = FUN_145086440(*(undefined4 *)(param_2 + 8),auStack_1c,0x1d);
  uVar4 = _DAT_145fc6f48;
  if (lVar1 != 0) {
    lVar2 = FUN_1453359e0(param_1);
    plVar3 = (longlong *)(param_1 + 0x4f0 + (ulonglong)*(byte *)(param_1 + 0x64d) * 0x10);
    if (lVar2 != 0) {
      plVar3 = (longlong *)(lVar2 + 0xd0);
    }
    uVar4 = *(undefined4 *)(param_2 + 0xc + (ulonglong)(*plVar3 != lVar1) * 4);
  }
  return uVar4;
}

