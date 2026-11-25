// Recovered from game_scarlett_master.exe (GTA VI, Xbox Series X, PE32+ x64)
// Address: 140096330  size: 50 bytes
// Name:    FUN_140096330
// Subsystem: core
//
// Referenced strings (0 in this body, 0 including direct callees):
// Callees: 
//
// Generated decompilation. Formatting follows MiscRef/GTAVSRC conventions;
// identifiers are recovered, not original. See ../../../README.md.

#include "gta6decomp/rage_types.h"


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined4 FUN_140096330(void)

{
  longlong lVar1;
  undefined4 uVar2;
  
  lVar1 = func_0x000144eb34d0();
  uVar2 = _DAT_145fc6ed8;
  if (lVar1 != 0) {
    uVar2 = *(undefined4 *)(&UNK_14617a8a8 + (ulonglong)((*(byte *)(lVar1 + 0x10) & 2) == 0) * 4);
  }
  return uVar2;
}

