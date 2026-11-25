// Recovered from game_scarlett_master.exe (GTA VI, Xbox Series X, PE32+ x64)
// Address: 1401887d0  size: 171 bytes
// Name:    FUN_1401887d0
// Subsystem: core
//
// Referenced strings (0 in this body, 0 including direct callees):
// Callees: FUN_145040440
//
// Generated decompilation. Formatting follows MiscRef/GTAVSRC conventions;
// identifiers are recovered, not original. See ../../../README.md.

#include "gta6decomp/rage_types.h"


void FUN_1401887d0(longlong param_1)

{
  longlong lVar1;
  char cVar2;
  undefined8 uVar3;
  longlong lVar4;
  undefined1 auStack_2c [4];
  
  *(byte *)(param_1 + 0x6c0) = *(byte *)(param_1 + 0x6c0) | 4;
  uVar3 = func_0x000144df8960(param_1 + 0x178);
  func_0x000144f83d90(uVar3);
  (**(code **)(**(longlong **)(param_1 + 0x690) + 0x48))();
  func_0x000141213130(auStack_2c);
  if (0 < *(int *)(param_1 + 0x184)) {
    lVar4 = 0;
    do {
      lVar1 = *(longlong *)(*(longlong *)(param_1 + 0x188) + lVar4 * 8);
      cVar2 = func_0x000140188880(*(undefined8 *)(lVar1 + 8));
      if (cVar2 != '\0') {
        func_0x0001400266a0(*(undefined8 *)(lVar1 + 8),auStack_2c);
      }
      lVar4 = lVar4 + 1;
    } while (lVar4 < *(int *)(param_1 + 0x184));
  }
  FUN_145040440(param_1 + 0x88);
  func_0x000145041b10(param_1 + 0x178);
  return;
}

