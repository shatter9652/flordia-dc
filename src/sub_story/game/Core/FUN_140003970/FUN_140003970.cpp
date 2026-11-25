// Recovered from game_scarlett_master.exe (GTA VI, Xbox Series X, PE32+ x64)
// Address: 140003970  size: 69 bytes
// Name:    FUN_140003970
// Subsystem: core
//
// Referenced strings (0 in this body, 0 including direct callees):
// Callees: 
//
// Generated decompilation. Formatting follows MiscRef/GTAVSRC conventions;
// identifiers are recovered, not original. See ../../../README.md.

#include "gta6decomp/rage_types.h"


void FUN_140003970(longlong param_1)

{
  longlong lVar1;
  longlong lVar2;
  
  *(undefined4 *)(param_1 + 0x20) = 3;
  if ((ulonglong)*(uint *)(param_1 + 0x14) != 0) {
    lVar2 = *(longlong *)(param_1 + 0x18);
    lVar1 = (ulonglong)*(uint *)(param_1 + 0x14) << 4;
    do {
      func_0x000144d9c180(lVar2);
      lVar2 = lVar2 + 0x10;
      lVar1 = lVar1 + -0x10;
    } while (lVar1 != 0);
  }
  *(undefined4 *)(param_1 + 0x14) = 0;
  *(undefined4 *)(param_1 + 4) = 0;
  return;
}

