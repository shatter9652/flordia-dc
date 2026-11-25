// Recovered from game_scarlett_master.exe (GTA VI, Xbox Series X, PE32+ x64)
// Address: 1401503f0  size: 257 bytes
// Name:    FUN_1401503f0
// Subsystem: core
//
// Referenced strings (0 in this body, 0 including direct callees):
// Callees: FUN_14052a4a0, FUN_14052a580, FUN_14052a970, FUN_140150500
//
// Generated decompilation. Formatting follows MiscRef/GTAVSRC conventions;
// identifiers are recovered, not original. See ../../../README.md.

#include "gta6decomp/rage_types.h"


void FUN_1401503f0(longlong param_1)

{
  uint uVar1;
  uint uVar2;
  longlong *plVar3;
  longlong lVar4;
  undefined8 auStack_c50 [65];
  undefined8 auStack_a48 [65];
  undefined8 auStack_840 [129];
  undefined8 auStack_438 [129];
  
  auStack_438[0] = 0x100;
  auStack_840[0] = 0x100;
  auStack_a48[0] = 0x100;
  auStack_c50[0] = 0x100;
  FUN_14052a970(param_1,0,auStack_438,auStack_840,auStack_a48,auStack_c50);
  uVar1 = **(uint **)(param_1 + 0x10);
  plVar3 = *(longlong **)((ulonglong)(uVar1 >> 0x11 & 0x1f) * 8 + 0x14abbe7c0);
  uVar2 = *(uint *)(plVar3[5] + (ulonglong)(uVar1 & 0x1ffff) * 4);
  lVar4 = 0;
  if (uVar1 >> 0x16 == (uVar2 >> 0x11 & 0x3ff) &&
      (uVar2 & *(uint *)(plVar3 + 6)) == *(uint *)(plVar3 + 6)) {
    lVar4 = (ulonglong)((uVar1 & 0x1ffff) * (int)plVar3[1]) + *plVar3;
  }
  FUN_14052a4a0(lVar4,auStack_c50,*(undefined8 *)(param_1 + 0x78));
  FUN_140150500(lVar4,auStack_840,*(undefined8 *)(param_1 + 0x78));
  FUN_14052a580(lVar4,auStack_438,*(undefined8 *)(param_1 + 0x78),1);
  FUN_14052a4a0(lVar4,auStack_a48,*(undefined8 *)(param_1 + 0x78));
  return;
}

