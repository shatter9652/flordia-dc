// Recovered from game_scarlett_master.exe (GTA VI, Xbox Series X, PE32+ x64)
// Address: 1400c0280  size: 44 bytes
// Name:    FUN_1400c0280
// Subsystem: core
//
// Referenced strings (0 in this body, 0 including direct callees):
// Callees: FUN_1400c02b0
//
// Generated decompilation. Formatting follows MiscRef/GTAVSRC conventions;
// identifiers are recovered, not original. See ../../../README.md.

#include "gta6decomp/rage_types.h"


byte FUN_1400c0280(longlong param_1)

{
  int iVar1;
  char cVar2;
  longlong lVar3;
  
  cVar2 = FUN_1400c02b0(*(undefined4 *)(param_1 + 0x9c));
  if (cVar2 != '\0') {
    return 1;
  }
  lVar3 = func_0x000144db7b80(*(undefined4 *)(param_1 + 0x9c));
  if ((lVar3 != 0) && (iVar1 = *(int *)(*(longlong *)(lVar3 + 0x20) + 0xa8), 1 < iVar1 - 5U)) {
    if ((iVar1 == 3) && (cVar2 = FUN_1400c02e0(param_1), cVar2 != '\0')) {
      return 1;
    }
    return (*(byte *)(lVar3 + 0x14) & 4) >> 2;
  }
  return 0;
}

