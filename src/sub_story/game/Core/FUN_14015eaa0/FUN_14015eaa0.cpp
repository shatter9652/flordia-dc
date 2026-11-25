// Recovered from game_scarlett_master.exe (GTA VI, Xbox Series X, PE32+ x64)
// Address: 14015eaa0  size: 784 bytes
// Name:    FUN_14015eaa0
// Subsystem: core
//
// Referenced strings (0 in this body, 0 including direct callees):
// Callees: 
//
// Generated decompilation. Formatting follows MiscRef/GTAVSRC conventions;
// identifiers are recovered, not original. See ../../../README.md.

#include "gta6decomp/rage_types.h"


void FUN_14015eaa0(longlong param_1)

{
  code *pcVar1;
  uint uVar2;
  longlong lVar3;
  undefined8 *puVar4;
  ulonglong uVar5;
  longlong lVar6;
  
  uVar2 = *(uint *)(param_1 + 0xc4);
  if (uVar2 != 0) {
    uVar5 = 0;
    do {
      puVar4 = *(undefined8 **)(*(longlong *)(param_1 + 200) + uVar5 * 8);
      if (puVar4 != (undefined8 *)0x0) {
        (**(code **)*puVar4)(puVar4,1);
        uVar2 = *(uint *)(param_1 + 0xc4);
      }
      uVar5 = uVar5 + 1;
    } while (uVar5 < uVar2);
  }
  *(undefined **)(param_1 + 0x198) = &UNK_146535f90;
  puVar4 = *(undefined8 **)(param_1 + 0x1d0);
  if ((ulonglong)*(uint *)(param_1 + 0x1cc) != 0) {
    lVar3 = (ulonglong)*(uint *)(param_1 + 0x1cc) * 0x108;
    do {
      (**(code **)*puVar4)(puVar4,0);
      puVar4 = puVar4 + 0x21;
      lVar3 = lVar3 + -0x108;
    } while (lVar3 != 0);
    puVar4 = *(undefined8 **)(param_1 + 0x1d0);
  }
  *(undefined4 *)(param_1 + 0x1cc) = 0;
  if (puVar4 != (undefined8 *)0x0) {
    func_0x000144d9c130(puVar4);
  }
  *(undefined4 *)(param_1 + 0x1c8) = 0;
  *(undefined8 *)(param_1 + 0x1d0) = 0;
  *(undefined4 *)(param_1 + 0x134) = 0;
  if (*(longlong *)(param_1 + 0x138) != 0) {
    func_0x000144d9c130();
  }
  *(undefined4 *)(param_1 + 0x130) = 0;
  *(undefined8 *)(param_1 + 0x138) = 0;
  *(undefined4 *)(param_1 + 0x124) = 0;
  if (*(longlong *)(param_1 + 0x128) != 0) {
    func_0x000144d9c130();
  }
  *(undefined4 *)(param_1 + 0x120) = 0;
  *(undefined8 *)(param_1 + 0x128) = 0;
  *(undefined4 *)(param_1 + 0x10c) = 0;
  if (*(longlong *)(param_1 + 0x110) != 0) {
    func_0x000144d9c130();
  }
  *(undefined4 *)(param_1 + 0x108) = 0;
  *(undefined8 *)(param_1 + 0x110) = 0;
  lVar3 = *(longlong *)(param_1 + 0xf8);
  if (lVar3 != 0) {
    do {
      if (*(longlong *)(param_1 + 0xe8) != 0) {
        func_0x000143bf2ac0((longlong *)(param_1 + 0xe8));
        lVar3 = *(longlong *)(param_1 + 0xf8);
      }
    } while (lVar3 != 0);
  }
  lVar3 = *(longlong *)(param_1 + 0xe0);
  if (lVar3 != 0) {
    do {
      if (*(longlong *)(param_1 + 0xd0) != 0) {
        func_0x000143bf2a10((longlong *)(param_1 + 0xd0));
        lVar3 = *(longlong *)(param_1 + 0xe0);
      }
    } while (lVar3 != 0);
  }
  *(undefined4 *)(param_1 + 0xc4) = 0;
  if (*(longlong *)(param_1 + 200) != 0) {
    func_0x000144d9c130();
  }
  *(undefined4 *)(param_1 + 0xc0) = 0;
  *(undefined8 *)(param_1 + 200) = 0;
  if (*(code **)(param_1 + 0xb0) != (code *)0x0) {
    (**(code **)(param_1 + 0xb0))(param_1 + 0x50);
  }
  *(undefined4 *)(param_1 + 0x44) = 0;
  if (*(longlong *)(param_1 + 0x48) != 0) {
    func_0x000144d9c130();
  }
  *(undefined4 *)(param_1 + 0x40) = 0;
  *(undefined8 *)(param_1 + 0x48) = 0;
  *(undefined4 *)(param_1 + 0x34) = 0;
  if (*(longlong *)(param_1 + 0x38) != 0) {
    func_0x000144d9c130();
  }
  *(undefined4 *)(param_1 + 0x30) = 0;
  *(undefined8 *)(param_1 + 0x38) = 0;
  *(undefined4 *)(param_1 + 0x24) = 0;
  if (*(longlong *)(param_1 + 0x28) != 0) {
    func_0x000144d9c130();
  }
  *(undefined4 *)(param_1 + 0x20) = 0;
  *(undefined8 *)(param_1 + 0x28) = 0;
  lVar3 = *(longlong *)(param_1 + 0x18);
  uVar2 = *(uint *)(param_1 + 0x14);
  if ((ulonglong)uVar2 != 0) {
    lVar6 = 0;
    do {
      pcVar1 = *(code **)(lVar3 + 0x60 + lVar6);
      if (pcVar1 != (code *)0x0) {
        (*pcVar1)(lVar3 + 0xf + lVar6 & 0xfffffffffffffff0);
      }
      lVar6 = lVar6 + 0x68;
    } while ((ulonglong)uVar2 * 0x68 - lVar6 != 0);
    lVar3 = *(longlong *)(param_1 + 0x18);
  }
  *(undefined4 *)(param_1 + 0x14) = 0;
  if (lVar3 != 0) {
    func_0x000144d9c130(lVar3);
  }
  *(undefined4 *)(param_1 + 0x10) = 0;
  *(undefined8 *)(param_1 + 0x18) = 0;
  return;
}

