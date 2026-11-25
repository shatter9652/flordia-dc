// Recovered from game_scarlett_master.exe (GTA VI, Xbox Series X, PE32+ x64)
// Address: 14015f550  size: 116 bytes
// Name:    FUN_14015f550
// Subsystem: core
//
// Referenced strings (0 in this body, 0 including direct callees):
// Callees: 
//
// Generated decompilation. Formatting follows MiscRef/GTAVSRC conventions;
// identifiers are recovered, not original. See ../../../README.md.

#include "gta6decomp/rage_types.h"


void FUN_14015f550(longlong param_1)

{
  uint uVar1;
  longlong lVar2;
  longlong lVar3;
  longlong lVar4;
  
  uVar1 = *(uint *)(param_1 + 0xfc);
  if ((ulonglong)uVar1 != 0) {
    lVar2 = *(longlong *)(param_1 + 0x100);
    lVar4 = 0;
    do {
      lVar3 = *(longlong *)(lVar2 + lVar4);
      if (lVar3 != 0) {
        *(undefined8 *)(lVar3 + 0x1608) = 0x7b;
        func_0x0001404b6840(lVar3);
        func_0x000144d9c130(lVar3,0x1830);
      }
      lVar4 = lVar4 + 8;
    } while ((ulonglong)uVar1 << 3 != lVar4);
  }
  *(undefined4 *)(param_1 + 0xfc) = 0;
  return;
}

