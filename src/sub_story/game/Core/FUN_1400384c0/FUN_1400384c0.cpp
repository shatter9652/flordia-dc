// Recovered from game_scarlett_master.exe (GTA VI, Xbox Series X, PE32+ x64)
// Address: 1400384c0  size: 87 bytes
// Name:    FUN_1400384c0
// Subsystem: core
//
// Referenced strings (0 in this body, 0 including direct callees):
// Callees: 
//
// Generated decompilation. Formatting follows MiscRef/GTAVSRC conventions;
// identifiers are recovered, not original. See ../../../README.md.

#include "gta6decomp/rage_types.h"


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1400384c0(longlong param_1)

{
  ulonglong uVar1;
  longlong lVar2;
  
  func_0x000144e8abd0(param_1 + 0x40);
  if (*(char *)(param_1 + 0x14) != '\0') {
    lVar2 = 0;
    uVar1 = 0;
    do {
      func_0x000144e8abd0(*(longlong *)(param_1 + 0x80) + lVar2);
      uVar1 = uVar1 + 1;
      lVar2 = lVar2 + 0x40;
    } while (uVar1 < *(byte *)(param_1 + 0x14));
  }
  *(undefined4 *)(param_1 + 0x1c + (ulonglong)*_DAT_14a943ab0 * 4) = *(undefined4 *)(param_1 + 0x18)
  ;
  return;
}

