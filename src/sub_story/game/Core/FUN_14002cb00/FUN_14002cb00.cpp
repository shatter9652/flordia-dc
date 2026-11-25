// Recovered from game_scarlett_master.exe (GTA VI, Xbox Series X, PE32+ x64)
// Address: 14002cb00  size: 107 bytes
// Name:    FUN_14002cb00
// Subsystem: core
//
// Referenced strings (0 in this body, 0 including direct callees):
// Callees: FUN_144e35030
//
// Generated decompilation. Formatting follows MiscRef/GTAVSRC conventions;
// identifiers are recovered, not original. See ../../../README.md.

#include "gta6decomp/rage_types.h"


void FUN_14002cb00(longlong param_1,undefined4 *param_2,int param_3)

{
  undefined4 uVar1;
  longlong *plVar2;
  longlong lVar3;
  undefined4 *puVar4;
  
  plVar2 = (longlong *)func_0x000144f485a0();
  if ((plVar2 == (longlong *)0x0) || (*(int *)(*plVar2 + 0x1d4) <= param_3)) {
    lVar3 = *(longlong *)(*(longlong *)(*(longlong *)(param_1 + 0x1a8) + 0x18) + 0x18);
    uVar1 = 0;
    if ((int)(uint)*(ushort *)(lVar3 + 0x6c) <= param_3) goto LAB_14002cb61;
    puVar4 = (undefined4 *)(*(longlong *)(lVar3 + 0x28) + 0x1c + (longlong)param_3 * 0x50);
  }
  else {
    lVar3 = FUN_144e35030(*plVar2,param_3);
    puVar4 = (undefined4 *)(lVar3 + 0x1c);
  }
  uVar1 = *puVar4;
LAB_14002cb61:
  *param_2 = uVar1;
  return;
}

