// Recovered from game_scarlett_master.exe (GTA VI, Xbox Series X, PE32+ x64)
// Address: 1400039c0  size: 72 bytes
// Name:    FUN_1400039c0
// Subsystem: core
//
// Referenced strings (0 in this body, 0 including direct callees):
// Callees: 
//
// Generated decompilation. Formatting follows MiscRef/GTAVSRC conventions;
// identifiers are recovered, not original. See ../../../README.md.

#include "gta6decomp/rage_types.h"


void FUN_1400039c0(longlong param_1)

{
  longlong lVar1;
  longlong lVar2;
  
  *(undefined4 *)(param_1 + 0x20) = 3;
  if ((ulonglong)*(uint *)(param_1 + 0x14) != 0) {
    lVar1 = *(longlong *)(param_1 + 0x18);
    lVar2 = (ulonglong)*(uint *)(param_1 + 0x14) << 4;
    do {
      func_0x000140003c00(lVar1);
      lVar1 = lVar1 + 0x10;
      lVar2 = lVar2 + -0x10;
    } while (lVar2 != 0);
  }
  *(undefined4 *)(param_1 + 0x14) = 0;
  *(undefined4 *)(param_1 + 4) = 0;
  return;
}

