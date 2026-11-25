// Recovered from game_scarlett_master.exe (GTA VI, Xbox Series X, PE32+ x64)
// Address: 140162dd0  size: 69 bytes
// Name:    FUN_140162dd0
// Subsystem: core
//
// Referenced strings (0 in this body, 0 including direct callees):
// Callees: FUN_141307e40
//
// Generated decompilation. Formatting follows MiscRef/GTAVSRC conventions;
// identifiers are recovered, not original. See ../../../README.md.

#include "gta6decomp/rage_types.h"


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_140162dd0(longlong param_1)

{
  longlong lVar1;
  ulonglong uVar2;
  
  if (*(char *)(param_1 + 0x66) == '\x01') {
    uVar2 = *(ulonglong *)(param_1 + 8) & 0xfffffffffffffff0;
    lVar1 = func_0x0001453df200(*(undefined1 *)(uVar2 + 0x30));
    if ((lVar1 != 0) && (_DAT_1492549e0 != 0)) {
      FUN_141307e40(_DAT_1492549e0,uVar2);
    }
    *(undefined1 *)(param_1 + 0x66) = 0;
  }
  return;
}

