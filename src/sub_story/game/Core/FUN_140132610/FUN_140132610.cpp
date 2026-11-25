// Recovered from game_scarlett_master.exe (GTA VI, Xbox Series X, PE32+ x64)
// Address: 140132610  size: 52 bytes
// Name:    FUN_140132610
// Subsystem: core
//
// Referenced strings (0 in this body, 0 including direct callees):
// Callees: FUN_140132650
//
// Generated decompilation. Formatting follows MiscRef/GTAVSRC conventions;
// identifiers are recovered, not original. See ../../../README.md.

#include "gta6decomp/rage_types.h"


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined8 FUN_140132610(int param_1)

{
  longlong lVar1;
  ulonglong uVar2;
  
  if ((param_1 != 0) &&
     (lVar1 = FUN_140132650(*(undefined4 *)(_DAT_14abb6910 + 8),
                            *(undefined8 *)(_DAT_14abb6910 + 0x10),param_1), lVar1 != 0)) {
    uVar2 = CONCAT71((int7)((ulonglong)lVar1 >> 8),*(undefined1 *)(lVar1 + 2)) & 0xffffffffffffff40;
    return CONCAT71((int7)(uVar2 >> 8),(byte)uVar2 >> 6);
  }
  return 0;
}

