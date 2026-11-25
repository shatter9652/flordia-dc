// Recovered from game_scarlett_master.exe (GTA VI, Xbox Series X, PE32+ x64)
// Address: 14012eab0  size: 77 bytes
// Name:    FUN_14012eab0
// Subsystem: core
//
// Referenced strings (0 in this body, 0 including direct callees):
// Callees: FUN_1413b1110
//
// Generated decompilation. Formatting follows MiscRef/GTAVSRC conventions;
// identifiers are recovered, not original. See ../../../README.md.

#include "gta6decomp/rage_types.h"


void FUN_14012eab0(longlong param_1)

{
  ushort uVar1;
  int iVar2;
  longlong lVar3;
  longlong lVar4;
  ulonglong uVar5;
  undefined1 auStack_40 [8];
  byte bStack_38;
  int aiStack_34 [3];
  
  if (*(int *)(param_1 + 0xf0) != 6) {
    aiStack_34[1] = 0x4012eac9;
    aiStack_34[2] = 1;
    FUN_1413b1110(param_1);
  }
  lVar3 = *(longlong *)(param_1 + 0x20);
  aiStack_34[1] = 0x4012eada;
  aiStack_34[2] = 1;
  lVar4 = func_0x0001401503e0(*(undefined8 *)(*(longlong *)(lVar3 + 0x28) + 0x48));
  if ((lVar4 != 0) && (iVar2 = *(int *)(lVar4 + 0x28), iVar2 != 0)) {
    lVar3 = *(longlong *)(lVar3 + 0x50);
    *(int *)(lVar3 + 0x14) = iVar2;
    if ((*(longlong *)(lVar3 + 0x180) != 0) &&
       (lVar4 = *(longlong *)(*(longlong *)(lVar3 + 0x180) + 0x38), lVar4 != 0)) {
      FUN_142855760(lVar4);
      func_0x0001412e8ba0(lVar4,aiStack_34);
      if ((aiStack_34[0] != 0) && (func_0x0001412e8ba0(lVar4,auStack_40), (bStack_38 & 0xe) == 2)) {
        FUN_142855800(lVar4);
      }
    }
    uVar1 = *(ushort *)(lVar3 + 0x138);
    if ((ulonglong)uVar1 != 0) {
      uVar5 = 0;
      do {
        FUN_1428556b0(*(undefined8 *)(*(longlong *)(lVar3 + 0x130) + uVar5 * 8),iVar2,0);
        uVar5 = uVar5 + 1;
      } while (uVar1 != uVar5);
    }
    return;
  }
  return;
}

