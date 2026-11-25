// Recovered from game_scarlett_master.exe (GTA VI, Xbox Series X, PE32+ x64)
// Address: 1400946e0  size: 131 bytes
// Name:    FUN_1400946e0
// Subsystem: core
//
// Referenced strings (0 in this body, 0 including direct callees):
// Callees: FUN_144f26070
//
// Generated decompilation. Formatting follows MiscRef/GTAVSRC conventions;
// identifiers are recovered, not original. See ../../../README.md.

#include "gta6decomp/rage_types.h"


byte FUN_1400946e0(longlong param_1)

{
  ushort uVar1;
  longlong lVar2;
  longlong *plVar3;
  byte bVar4;
  byte bVar5;
  longlong lVar6;
  undefined1 auStack_40 [8];
  
  *(undefined4 *)(param_1 + 8) = 0;
  uVar1 = *(ushort *)(param_1 + 0x28);
  if (uVar1 == 0) {
    bVar5 = 0;
  }
  else {
    lVar2 = *(longlong *)(param_1 + 0x20);
    lVar6 = 0;
    bVar5 = 0;
    do {
      plVar3 = *(longlong **)(lVar2 + lVar6);
      bVar4 = (**(code **)(*plVar3 + 0x30))(plVar3);
      bVar5 = bVar5 | bVar4;
      (**(code **)(*plVar3 + 0x68))(plVar3,auStack_40);
      FUN_144f26070(param_1 + 8,auStack_40);
      lVar6 = lVar6 + 8;
    } while ((ulonglong)uVar1 * 8 != lVar6);
  }
  return bVar5 & 1;
}

