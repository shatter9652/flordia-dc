// Recovered from game_scarlett_master.exe (GTA VI, Xbox Series X, PE32+ x64)
// Address: 14016b9c0  size: 423 bytes
// Name:    FUN_14016b9c0
// Subsystem: core
//
// Referenced strings (0 in this body, 0 including direct callees):
// Callees: FUN_1450267e0, FUN_14016bb80
//
// Generated decompilation. Formatting follows MiscRef/GTAVSRC conventions;
// identifiers are recovered, not original. See ../../../README.md.

#include "gta6decomp/rage_types.h"


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_14016b9c0(longlong param_1)

{
  uint uVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  longlong lVar5;
  ulonglong uVar6;
  longlong lVar7;
  
  uVar1 = *(uint *)(param_1 + 0xc4);
  if ((ulonglong)uVar1 != 0) {
    lVar5 = *(longlong *)(param_1 + 200);
    lVar7 = 0;
    do {
      func_0x00014016bb70(*(undefined8 *)(lVar5 + lVar7));
      lVar7 = lVar7 + 8;
    } while ((ulonglong)uVar1 << 3 != lVar7);
  }
  lVar5 = *(longlong *)(param_1 + 0xb8);
  if ((ulonglong)*(uint *)(param_1 + 0xb4) != 0) {
    lVar7 = (ulonglong)*(uint *)(param_1 + 0xb4) * 0x90;
    lVar5 = lVar5 + 0x50;
    do {
      FUN_1450267e0(lVar5);
      *(undefined4 *)(lVar5 + -0x2c) = 0;
      if (*(longlong *)(lVar5 + -0x28) != 0) {
        func_0x000144d9c130();
      }
      *(undefined8 *)(lVar5 + -0x28) = 0;
      lVar7 = lVar7 + -0x90;
      *(undefined1 (*) [32])(lVar5 + -0x50) = ZEXT1232(ZEXT812(0));
      *(undefined4 *)(lVar5 + -0x30) = 0;
      lVar5 = lVar5 + 0x90;
    } while (lVar7 != 0);
    lVar5 = *(longlong *)(param_1 + 0xb8);
  }
  *(undefined4 *)(param_1 + 0xb4) = 0;
  if (lVar5 != 0) {
    func_0x000144d9c130(lVar5);
  }
  *(undefined8 *)(param_1 + 0xb8) = 0;
  *(undefined4 *)(param_1 + 0xb0) = 0;
  FUN_14016bb80(param_1 + 0x28);
  uVar1 = *(uint *)(param_1 + 0xc4);
  if (uVar1 != 0) {
    uVar6 = 0;
    uVar2 = _DAT_149aea528;
    uVar4 = _DAT_149aea528;
    do {
      lVar5 = *(longlong *)(*(longlong *)(param_1 + 200) + uVar6 * 8);
      uVar3 = uVar2;
      if (lVar5 != 0) {
        *(undefined4 *)(lVar5 + 0x13c) = 0;
        uVar3 = uVar4;
        if (*(longlong *)(lVar5 + 0x140) != 0) {
          func_0x000144d9c130(*(longlong *)(lVar5 + 0x140));
          uVar3 = _DAT_149aea528;
        }
        *(undefined4 *)(lVar5 + 0x138) = 0;
        *(undefined8 *)(lVar5 + 0x140) = 0;
        func_0x000144ea5b80(uVar2);
        uVar1 = *(uint *)(param_1 + 0xc4);
        uVar4 = uVar3;
      }
      uVar6 = uVar6 + 1;
      uVar2 = uVar3;
    } while (uVar6 < uVar1);
  }
  *(undefined4 *)(param_1 + 0xc4) = 0;
  if (*(longlong *)(param_1 + 200) != 0) {
    func_0x000144d9c130();
  }
  *(undefined8 *)(param_1 + 200) = 0;
  *(undefined4 *)(param_1 + 0xc0) = 0;
  *(byte *)(param_1 + 0x1a7) = *(byte *)(param_1 + 0x1a7) & 0xbf;
  return;
}

