// Recovered from game_scarlett_master.exe (GTA VI, Xbox Series X, PE32+ x64)
// Address: 14015bb30  size: 162 bytes
// Name:    FUN_14015bb30
// Subsystem: core
//
// Referenced strings (0 in this body, 0 including direct callees):
// Callees: FUN_14015bce0
//
// Generated decompilation. Formatting follows MiscRef/GTAVSRC conventions;
// identifiers are recovered, not original. See ../../../README.md.

#include "gta6decomp/rage_types.h"


void FUN_14015bb30(longlong param_1)

{
  uint uVar1;
  longlong lVar2;
  longlong lVar3;
  longlong lVar4;
  
  uVar1 = *(uint *)(param_1 + 0x74);
  if ((ulonglong)uVar1 != 0) {
    lVar2 = *(longlong *)(param_1 + 0x78);
    lVar4 = 0;
    do {
      lVar3 = *(longlong *)(lVar2 + lVar4);
      if (lVar3 != 0) {
        FUN_14015bce0(lVar3);
        func_0x000144d9c130(lVar3,0xa0);
      }
      lVar4 = lVar4 + 8;
    } while ((ulonglong)uVar1 << 3 != lVar4);
  }
  *(undefined4 *)(param_1 + 0x74) = 0;
  uVar1 = *(uint *)(param_1 + 0x14);
  if ((ulonglong)uVar1 != 0) {
    lVar2 = *(longlong *)(param_1 + 0x18);
    lVar4 = 0;
    do {
      lVar3 = *(longlong *)(lVar2 + lVar4);
      if (lVar3 != 0) {
        func_0x00014015bbe0(lVar3);
        func_0x000144d9c130(lVar3,0x60);
      }
      lVar4 = lVar4 + 8;
    } while ((ulonglong)uVar1 << 3 != lVar4);
  }
  *(undefined4 *)(param_1 + 0x14) = 0;
  return;
}

