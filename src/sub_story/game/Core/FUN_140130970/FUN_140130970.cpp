// Recovered from game_scarlett_master.exe (GTA VI, Xbox Series X, PE32+ x64)
// Address: 140130970  size: 297 bytes
// Name:    FUN_140130970
// Subsystem: core
//
// Referenced strings (0 in this body, 0 including direct callees):
// Callees: 
//
// Generated decompilation. Formatting follows MiscRef/GTAVSRC conventions;
// identifiers are recovered, not original. See ../../../README.md.

#include "gta6decomp/rage_types.h"


void FUN_140130970(longlong param_1)

{
  uint uVar1;
  undefined8 uVar2;
  longlong lVar3;
  longlong lVar4;
  longlong lVar5;
  
  lVar4 = *(longlong *)(param_1 + 0x10);
  if ((lVar4 != 0) && (lVar3 = *(longlong *)(param_1 + 0x18), lVar3 != 0)) {
    if (((0 < *(int *)(lVar4 + 100)) || (0 < *(int *)(lVar4 + 0x54))) &&
       (lVar3 = func_0x000144fdec40(*(undefined8 *)(lVar3 + 0x30),*(undefined4 *)(lVar3 + 0x38)),
       lVar3 != 0)) {
      uVar2 = func_0x0001424d7fb0(lVar3);
      lVar4 = *(longlong *)(param_1 + 0x10);
      uVar1 = *(uint *)(lVar4 + 0x54);
      if ((ulonglong)uVar1 != 0) {
        lVar4 = *(longlong *)(lVar4 + 0x58);
        lVar3 = 0;
        do {
          func_0x000142d9e230(uVar2,*(undefined4 *)(lVar4 + lVar3));
          lVar3 = lVar3 + 4;
        } while ((ulonglong)uVar1 << 2 != lVar3);
        lVar4 = *(longlong *)(param_1 + 0x10);
      }
      uVar1 = *(uint *)(lVar4 + 100);
      if ((ulonglong)uVar1 != 0) {
        lVar4 = *(longlong *)(lVar4 + 0x68);
        lVar3 = 0;
        do {
          func_0x000142d9e290(uVar2,*(undefined4 *)(lVar4 + lVar3));
          lVar3 = lVar3 + 4;
        } while ((ulonglong)uVar1 << 2 != lVar3);
        lVar4 = *(longlong *)(param_1 + 0x10);
      }
    }
    uVar1 = *(uint *)(lVar4 + 0x84);
    if (((0 < (int)uVar1) &&
        (lVar3 = func_0x000144fdec40(*(undefined8 *)(*(longlong *)(param_1 + 0x18) + 0x30),
                                     *(undefined4 *)(*(longlong *)(param_1 + 0x18) + 0x38)),
        lVar3 != 0)) && (lVar3 = func_0x0001424d9310(*(undefined4 *)(lVar3 + 0x9c)), lVar3 != 0)) {
      lVar4 = *(longlong *)(lVar4 + 0x88);
      lVar5 = 0;
      do {
        func_0x000142d9e250(lVar3,*(undefined4 *)(lVar4 + lVar5));
        lVar5 = lVar5 + 4;
      } while ((ulonglong)uVar1 << 2 != lVar5);
    }
  }
  return;
}

