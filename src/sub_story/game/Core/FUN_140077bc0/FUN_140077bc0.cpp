// Recovered from game_scarlett_master.exe (GTA VI, Xbox Series X, PE32+ x64)
// Address: 140077bc0  size: 76 bytes
// Name:    FUN_140077bc0
// Subsystem: core
//
// Referenced strings (0 in this body, 0 including direct callees):
// Callees: 
//
// Generated decompilation. Formatting follows MiscRef/GTAVSRC conventions;
// identifiers are recovered, not original. See ../../../README.md.

#include "gta6decomp/rage_types.h"


void FUN_140077bc0(longlong param_1)

{
  undefined4 *puVar1;
  longlong lVar2;
  
  if ((ulonglong)*(uint *)(param_1 + 0x6c) != 0) {
    lVar2 = (ulonglong)*(uint *)(param_1 + 0x6c) * 4 + *(longlong *)(param_1 + 0x70);
    do {
      puVar1 = (undefined4 *)(lVar2 + -4);
      lVar2 = lVar2 + -4;
      func_0x0001400771a0(*puVar1);
    } while (lVar2 != *(longlong *)(param_1 + 0x70));
  }
  *(undefined4 *)(param_1 + 0x6c) = 0;
  if (*(uint *)(param_1 + 8) < 3) {
    *(undefined1 *)(param_1 + 0x79) = 1;
  }
  return;
}

