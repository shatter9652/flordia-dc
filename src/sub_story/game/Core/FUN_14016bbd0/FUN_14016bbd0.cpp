// Recovered from game_scarlett_master.exe (GTA VI, Xbox Series X, PE32+ x64)
// Address: 14016bbd0  size: 451 bytes
// Name:    FUN_14016bbd0
// Subsystem: core
//
// Referenced strings (0 in this body, 0 including direct callees):
// Callees: FUN_1450267e0
//
// Generated decompilation. Formatting follows MiscRef/GTAVSRC conventions;
// identifiers are recovered, not original. See ../../../README.md.

#include "gta6decomp/rage_types.h"


void FUN_14016bbd0(longlong param_1)

{
  uint uVar1;
  ulonglong uVar2;
  longlong lVar3;
  longlong lVar4;
  
  uVar1 = *(uint *)(param_1 + 0xc4);
  if (uVar1 != 0) {
    uVar2 = 0;
    do {
      lVar4 = *(longlong *)(*(longlong *)(param_1 + 200) + uVar2 * 8);
      if (lVar4 != 0) {
        *(undefined4 *)(lVar4 + 0x13c) = 0;
        if (*(longlong *)(lVar4 + 0x140) != 0) {
          func_0x000144d9c130();
        }
        func_0x000144d9c130(lVar4,0x148);
        uVar1 = *(uint *)(param_1 + 0xc4);
      }
      uVar2 = uVar2 + 1;
    } while (uVar2 < uVar1);
  }
  *(undefined4 *)(param_1 + 0xd4) = 0;
  if (*(longlong *)(param_1 + 0xd8) != 0) {
    func_0x000144d9c130();
  }
  *(undefined4 *)(param_1 + 0xd0) = 0;
  *(undefined8 *)(param_1 + 0xd8) = 0;
  *(undefined4 *)(param_1 + 0xc4) = 0;
  if (*(longlong *)(param_1 + 200) != 0) {
    func_0x000144d9c130();
  }
  *(undefined4 *)(param_1 + 0xc0) = 0;
  *(undefined8 *)(param_1 + 200) = 0;
  lVar4 = *(longlong *)(param_1 + 0xb8);
  if ((ulonglong)*(uint *)(param_1 + 0xb4) != 0) {
    lVar3 = (ulonglong)*(uint *)(param_1 + 0xb4) * 0x90;
    lVar4 = lVar4 + 0x50;
    do {
      FUN_1450267e0(lVar4);
      *(undefined4 *)(lVar4 + -0x2c) = 0;
      if (*(longlong *)(lVar4 + -0x28) != 0) {
        func_0x000144d9c130();
      }
      *(undefined8 *)(lVar4 + -0x28) = 0;
      lVar3 = lVar3 + -0x90;
      *(undefined1 (*) [32])(lVar4 + -0x50) = ZEXT1232(ZEXT812(0));
      *(undefined4 *)(lVar4 + -0x30) = 0;
      lVar4 = lVar4 + 0x90;
    } while (lVar3 != 0);
    lVar4 = *(longlong *)(param_1 + 0xb8);
  }
  *(undefined4 *)(param_1 + 0xb4) = 0;
  if (lVar4 != 0) {
    func_0x000144d9c130(lVar4);
  }
  *(undefined4 *)(param_1 + 0xb0) = 0;
  *(undefined8 *)(param_1 + 0xb8) = 0;
  FUN_1450267e0(param_1 + 0x78);
  *(undefined4 *)(param_1 + 0x4c) = 0;
  if (*(longlong *)(param_1 + 0x50) != 0) {
    func_0x000144d9c130();
  }
  *(undefined8 *)(param_1 + 0x50) = 0;
  *(undefined4 *)(param_1 + 0x48) = 0;
  *(undefined1 (*) [32])(param_1 + 0x28) = ZEXT1232(ZEXT812(0));
  return;
}

