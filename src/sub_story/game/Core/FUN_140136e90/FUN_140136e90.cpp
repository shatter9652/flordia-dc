// Recovered from game_scarlett_master.exe (GTA VI, Xbox Series X, PE32+ x64)
// Address: 140136e90  size: 300 bytes
// Name:    FUN_140136e90
// Subsystem: core
//
// Referenced strings (0 in this body, 0 including direct callees):
// Callees: FUN_140136fc0, FUN_145440e10
//
// Generated decompilation. Formatting follows MiscRef/GTAVSRC conventions;
// identifiers are recovered, not original. See ../../../README.md.

#include "gta6decomp/rage_types.h"


void FUN_140136e90(longlong param_1)

{
  longlong lVar1;
  uint uVar2;
  longlong lVar3;
  longlong lVar4;
  
  func_0x000144fefc30(param_1 + 0xdc);
  func_0x000144fefc30(param_1 + 0xd8);
  FUN_140136fc0(param_1 + 0xb0);
  lVar3 = *(longlong *)(param_1 + 0xa8);
  uVar2 = *(uint *)(param_1 + 0xa4);
  if ((ulonglong)uVar2 != 0) {
    lVar4 = 0;
    do {
      func_0x000144fefc30(lVar3 + 0x134 + lVar4);
      FUN_145440e10(lVar3 + 0x130 + lVar4);
      FUN_145440e10(lVar3 + 300 + lVar4);
      FUN_145440e10(lVar3 + 0x128 + lVar4);
      FUN_145440e10(lVar3 + 0x124 + lVar4);
      lVar1 = lVar3 + 0x120 + lVar4;
      FUN_145440e10(lVar1);
      *(undefined4 *)(lVar1 + -0xc) = 0;
      if (*(longlong *)(lVar1 + -8) != 0) {
        func_0x000144d9c130();
      }
      *(undefined4 *)(lVar3 + 0x110 + lVar4) = 0;
      *(undefined8 *)(lVar3 + 0x118 + lVar4) = 0;
      lVar4 = lVar4 + 0x140;
    } while ((ulonglong)uVar2 * 0x140 != lVar4);
    lVar3 = *(longlong *)(param_1 + 0xa8);
  }
  *(undefined4 *)(param_1 + 0xa4) = 0;
  if (lVar3 != 0) {
    func_0x000144d9c130(lVar3);
  }
  *(undefined4 *)(param_1 + 0xa0) = 0;
  *(undefined8 *)(param_1 + 0xa8) = 0;
  return;
}

