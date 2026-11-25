// Recovered from game_scarlett_master.exe (GTA VI, Xbox Series X, PE32+ x64)
// Address: 14007c6a0  size: 102 bytes
// Name:    FUN_14007c6a0
// Subsystem: core
//
// Referenced strings (0 in this body, 0 including direct callees):
// Callees: 
//
// Generated decompilation. Formatting follows MiscRef/GTAVSRC conventions;
// identifiers are recovered, not original. See ../../../README.md.

#include "gta6decomp/rage_types.h"


void FUN_14007c6a0(longlong param_1,undefined4 param_2)

{
  uint uVar1;
  longlong lVar2;
  longlong lVar3;
  longlong lVar4;
  
  uVar1 = *(uint *)(param_1 + 0xc4);
  if ((ulonglong)uVar1 != 0) {
    lVar2 = *(longlong *)(param_1 + 200);
    lVar4 = 0;
    do {
      lVar3 = *(longlong *)(lVar2 + lVar4);
      if (lVar3 != 0) {
        func_0x00014007cd70(lVar3,param_2,*(undefined1 *)(param_1 + 0x1e));
      }
      lVar4 = lVar4 + 8;
    } while ((ulonglong)uVar1 << 3 != lVar4);
  }
  *(byte *)(param_1 + 0x1a8) = *(byte *)(param_1 + 0x1a8) & 0xfb | (char)param_2 << 2;
  return;
}

