// Recovered from game_scarlett_master.exe (GTA VI, Xbox Series X, PE32+ x64)
// Address: 1401639e0  size: 230 bytes
// Name:    FUN_1401639e0
// Subsystem: core
//
// Referenced strings (0 in this body, 0 including direct callees):
// Callees: FUN_140163ad0
//
// Generated decompilation. Formatting follows MiscRef/GTAVSRC conventions;
// identifiers are recovered, not original. See ../../../README.md.

#include "gta6decomp/rage_types.h"


void FUN_1401639e0(longlong param_1)

{
  uint uVar1;
  longlong lVar2;
  longlong lVar3;
  
  *(undefined4 *)(param_1 + 0xc) = 0;
  *(undefined4 *)(param_1 + 0x1c) = 0;
  FUN_140163ad0(param_1 + 0x38);
  *(undefined2 *)(param_1 + 0x80) = 0xffff;
  *(undefined4 *)(param_1 + 0x7c) = 0xffffffff;
  *(undefined1 *)(param_1 + 0x82) = 0;
  *(undefined1 *)(param_1 + 0x84) = 0;
  *(undefined4 *)(param_1 + 0x2c) = 0;
  uVar1 = *(uint *)(param_1 + 0x4c);
  if ((ulonglong)uVar1 != 0) {
    lVar2 = *(longlong *)(param_1 + 0x50);
    lVar3 = 0;
    do {
      if (*(longlong *)(lVar2 + lVar3) != 0) {
        func_0x000144d9c130();
      }
      lVar3 = lVar3 + 8;
    } while ((ulonglong)uVar1 << 3 != lVar3);
  }
  *(undefined4 *)(param_1 + 0x4c) = 0;
  uVar1 = *(uint *)(param_1 + 0x6c);
  if ((ulonglong)uVar1 != 0) {
    lVar2 = *(longlong *)(param_1 + 0x70);
    lVar3 = 0;
    do {
      if (*(longlong *)(lVar2 + lVar3) != 0) {
        func_0x000144d9c130();
      }
      lVar3 = lVar3 + 8;
    } while ((ulonglong)uVar1 << 3 != lVar3);
  }
  *(undefined4 *)(param_1 + 0x6c) = 0;
  uVar1 = *(uint *)(param_1 + 0x5c);
  if ((ulonglong)uVar1 != 0) {
    lVar2 = *(longlong *)(param_1 + 0x60);
    lVar3 = 0;
    do {
      if (*(longlong *)(lVar2 + lVar3) != 0) {
        func_0x000144d9c130();
      }
      lVar3 = lVar3 + 8;
    } while ((ulonglong)uVar1 << 3 != lVar3);
  }
  *(undefined4 *)(param_1 + 0x5c) = 0;
  *(undefined2 *)(param_1 + 0x86) = 0;
  return;
}

