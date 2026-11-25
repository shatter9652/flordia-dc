// Recovered from game_scarlett_master.exe (GTA VI, Xbox Series X, PE32+ x64)
// Address: 140141730  size: 115 bytes
// Name:    FUN_140141730
// Subsystem: core
//
// Referenced strings (0 in this body, 0 including direct callees):
// Callees: FUN_141bdf350, FUN_141a3aaa0
//
// Generated decompilation. Formatting follows MiscRef/GTAVSRC conventions;
// identifiers are recovered, not original. See ../../../README.md.

#include "gta6decomp/rage_types.h"


void FUN_140141730(longlong param_1)

{
  uint uVar1;
  int iVar2;
  longlong lVar3;
  longlong lVar4;
  ulonglong uVar5;
  longlong lVar6;
  
  uVar1 = *(uint *)(param_1 + 0x2c);
  if ((ulonglong)uVar1 != 0) {
    uVar5 = 0;
    do {
      *(undefined8 *)(*(longlong *)(param_1 + 0x30) + uVar5 * 8) = 0;
      uVar5 = uVar5 + 1;
    } while (uVar1 != uVar5);
  }
  *(undefined1 *)(param_1 + 0x47a) = 0;
  FUN_141a3aaa0(param_1);
  FUN_141bdf350(param_1);
  func_0x000145f40580(*(undefined8 *)(param_1 + 0x440),0,(ulonglong)*(uint *)(param_1 + 0x43c) << 3)
  ;
  lVar3 = *(longlong *)(param_1 + 0x468);
  if (lVar3 == 0) {
    return;
  }
  FUN_1456a8360();
  lVar4 = func_0x000144f97130(0x18);
  if (lVar4 != 0) {
    func_0x000145943d90(lVar4);
  }
  *(longlong *)(lVar3 + 8) = lVar4;
  uVar1 = *(uint *)(lVar3 + 0x24);
  if ((ulonglong)uVar1 != 0) {
    lVar4 = *(longlong *)(lVar3 + 0x28);
    lVar6 = 0;
    do {
      func_0x000141534710(*(undefined8 *)(lVar4 + 8 + lVar6));
      lVar6 = lVar6 + 0x10;
    } while ((ulonglong)uVar1 << 4 != lVar6);
  }
  *(undefined4 *)(lVar3 + 0x24) = 0;
  iVar2 = *(int *)(lVar3 + 0x14);
  if (0 < (longlong)iVar2) {
    lVar4 = *(longlong *)(lVar3 + 0x18);
    lVar6 = 0;
    do {
      *(undefined8 *)(lVar4 + 8 + lVar6) = 0xffffffff;
      *(undefined1 *)(lVar4 + 0x10 + lVar6) = 0xff;
      lVar6 = lVar6 + 0x14;
    } while ((longlong)iVar2 * 0x14 != lVar6);
  }
  *(undefined8 *)(lVar3 + 0x30) = 0xffffffffffffffff;
  return;
}

