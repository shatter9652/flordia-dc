// Recovered from game_scarlett_master.exe (GTA VI, Xbox Series X, PE32+ x64)
// Address: 140155cc0  size: 37 bytes
// Name:    FUN_140155cc0
// Subsystem: core
//
// Referenced strings (0 in this body, 0 including direct callees):
// Callees: FUN_140155cf0
//
// Generated decompilation. Formatting follows MiscRef/GTAVSRC conventions;
// identifiers are recovered, not original. See ../../../README.md.

#include "gta6decomp/rage_types.h"


void FUN_140155cc0(longlong param_1)

{
  uint uVar1;
  longlong lVar2;
  undefined8 *puVar3;
  longlong lVar4;
  
  FUN_140155cf0(param_1 + 0x360);
  puVar3 = (undefined8 *)(param_1 + 0x30);
  *(undefined4 *)(param_1 + 0x2c4) = 0;
  if (*(longlong *)(param_1 + 0x2c8) != 0) {
    func_0x000144d9c130();
  }
  *(undefined4 *)(param_1 + 0x2c0) = 0;
  *(undefined8 *)(param_1 + 0x2c8) = 0;
  lVar4 = *(longlong *)(param_1 + 0x2b0);
  uVar1 = *(uint *)(param_1 + 0x2ac);
  if ((ulonglong)uVar1 != 0) {
    lVar2 = 0;
    do {
      *(undefined8 *)(lVar4 + 0x58 + lVar2) = 0x40;
      lVar2 = lVar2 + 0x160;
    } while ((ulonglong)uVar1 * 0x160 - lVar2 != 0);
  }
  *(undefined4 *)(param_1 + 0x2ac) = 0;
  if (lVar4 != 0) {
    func_0x000144d9c130();
  }
  *(undefined4 *)(param_1 + 0x2a8) = 0;
  *(undefined8 *)(param_1 + 0x2b0) = 0;
  lVar4 = *(longlong *)(param_1 + 0x2a0);
  uVar1 = *(uint *)(param_1 + 0x29c);
  if ((ulonglong)uVar1 != 0) {
    lVar2 = 0;
    do {
      *(undefined8 *)(lVar4 + 0x58 + lVar2) = 0x40;
      lVar2 = lVar2 + 0x160;
    } while ((ulonglong)uVar1 * 0x160 - lVar2 != 0);
  }
  *(undefined4 *)(param_1 + 0x29c) = 0;
  if (lVar4 != 0) {
    func_0x000144d9c130();
  }
  *(undefined4 *)(param_1 + 0x298) = 0;
  *(undefined8 *)(param_1 + 0x2a0) = 0;
  *(undefined4 *)(param_1 + 0x284) = 0;
  if (*(longlong *)(param_1 + 0x288) != 0) {
    func_0x000144d9c130();
  }
  *(undefined4 *)(param_1 + 0x280) = 0;
  *(undefined8 *)(param_1 + 0x288) = 0;
  lVar4 = *(longlong *)(param_1 + 0x278);
  if ((ulonglong)*(uint *)(param_1 + 0x274) != 0) {
    lVar2 = (ulonglong)*(uint *)(param_1 + 0x274) << 2;
    do {
      FUN_144e3af50(lVar4);
      lVar4 = lVar4 + 4;
      lVar2 = lVar2 + -4;
    } while (lVar2 != 0);
    lVar4 = *(longlong *)(param_1 + 0x278);
  }
  *(undefined4 *)(param_1 + 0x274) = 0;
  if (lVar4 != 0) {
    func_0x000144d9c130();
  }
  *(undefined4 *)(param_1 + 0x270) = 0;
  *(undefined8 *)(param_1 + 0x278) = 0;
  *(undefined4 *)(param_1 + 0x264) = 0;
  if (*(longlong *)(param_1 + 0x268) != 0) {
    func_0x000144d9c130();
  }
  *(undefined4 *)(param_1 + 0x260) = 0;
  *(undefined8 *)(param_1 + 0x268) = 0;
  FUN_14087d240(param_1 + 0x248);
  if (*(longlong *)(param_1 + 0x250) != 0) {
    func_0x000144d9c130();
  }
  *(undefined8 *)(param_1 + 0x250) = 0;
  FUN_14087d240(param_1 + 0x238);
  if (*(longlong *)(param_1 + 0x240) != 0) {
    func_0x000144d9c130();
  }
  *(undefined8 *)(param_1 + 0x240) = 0;
  *(undefined4 *)(param_1 + 0x22c) = 0;
  if (*(longlong *)(param_1 + 0x230) != 0) {
    func_0x000144d9c130();
  }
  lVar4 = 0x14;
  *(undefined4 *)(param_1 + 0x228) = 0;
  *(undefined8 *)(param_1 + 0x230) = 0;
  do {
    if (puVar3[lVar4] != 0) {
      func_0x000144d9c130();
    }
    puVar3[lVar4] = 0;
    lVar4 = lVar4 + 1;
  } while (lVar4 != 0x3f);
  *(undefined8 *)(param_1 + 200) = 0;
  *(undefined4 *)(param_1 + 0xbc) = 0;
  if (*(longlong *)(param_1 + 0xc0) != 0) {
    func_0x000144d9c130();
  }
  *(undefined4 *)(param_1 + 0xb8) = 0;
  *(undefined8 *)(param_1 + 0xc0) = 0;
  if (*(longlong *)(param_1 + 0x38) != 0) {
    func_0x000144d9c130();
  }
  *(undefined8 *)(param_1 + 0x38) = 0;
  if (*(longlong *)(param_1 + 0x40) != 0) {
    func_0x000144d9c130();
  }
  *(undefined8 *)(param_1 + 0x40) = 0;
  if (*(longlong *)(param_1 + 0x48) != 0) {
    func_0x000144d9c130();
  }
  *(undefined8 *)(param_1 + 0x48) = 0;
  if (*(longlong *)(param_1 + 0x50) != 0) {
    func_0x000144d9c130();
  }
  *(undefined8 *)(param_1 + 0x50) = 0;
  if (*(longlong *)(param_1 + 0x58) != 0) {
    func_0x000144d9c130();
  }
  *(undefined8 *)(param_1 + 0x58) = 0;
  if (*(longlong *)(param_1 + 0x60) != 0) {
    func_0x000144d9c130();
  }
  *(undefined8 *)(param_1 + 0x60) = 0;
  if (*(longlong *)(param_1 + 0x68) != 0) {
    func_0x000144d9c130();
  }
  *(undefined8 *)(param_1 + 0x68) = 0;
  if (*(longlong *)(param_1 + 0x70) != 0) {
    func_0x000144d9c130();
  }
  *(undefined8 *)(param_1 + 0x70) = 0;
  if (*(longlong *)(param_1 + 0x78) != 0) {
    func_0x000144d9c130();
  }
  *(undefined8 *)(param_1 + 0x78) = 0;
  if (*(longlong *)(param_1 + 0x80) != 0) {
    func_0x000144d9c130();
  }
  *(undefined8 *)(param_1 + 0x80) = 0;
  if (*(longlong *)(param_1 + 0x88) != 0) {
    func_0x000144d9c130();
  }
  *(undefined8 *)(param_1 + 0x88) = 0;
  if (*(longlong *)(param_1 + 0x90) != 0) {
    func_0x000144d9c130();
  }
  *(undefined8 *)(param_1 + 0x90) = 0;
  if (*(longlong *)(param_1 + 0x98) != 0) {
    func_0x000144d9c130();
  }
  *(undefined8 *)(param_1 + 0x98) = 0;
  if (*(longlong *)(param_1 + 0xa0) != 0) {
    func_0x000144d9c130();
  }
  *(undefined8 *)(param_1 + 0xa0) = 0;
  if (*(longlong *)(param_1 + 0xa8) != 0) {
    func_0x000144d9c130();
  }
  *(undefined8 *)(param_1 + 0xa8) = 0;
  if (*(longlong *)(param_1 + 0xb0) != 0) {
    func_0x000144d9c130();
  }
  *(undefined8 *)(param_1 + 0xb0) = 0;
  *puVar3 = 0;
  return;
}

