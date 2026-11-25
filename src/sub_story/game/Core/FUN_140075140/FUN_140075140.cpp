// Recovered from game_scarlett_master.exe (GTA VI, Xbox Series X, PE32+ x64)
// Address: 140075140  size: 98 bytes
// Name:    FUN_140075140
// Subsystem: core
//
// Referenced strings (0 in this body, 0 including direct callees):
// Callees: FUN_1455deb88, FUN_1455db8cc, FUN_1455db934
//
// Generated decompilation. Formatting follows MiscRef/GTAVSRC conventions;
// identifiers are recovered, not original. See ../../../README.md.

#include "gta6decomp/rage_types.h"


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined1 FUN_140075140(void)

{
  int iVar1;
  longlong unaff_GS_OFFSET;
  
  if (*(int *)(*(longlong *)(*(longlong *)(unaff_GS_OFFSET + 0x58) + (ulonglong)__tls_index * 8) + 4
              ) < _DAT_1471b63b4) {
    FUN_1455db8cc(&DAT_1471b63b4);
    if (_DAT_1471b63b4 == -1) {
      iVar1 = FUN_1455deb88();
      DAT_1471b63b0 = iVar1 == 6;
      FUN_1455db934(&DAT_1471b63b4);
    }
  }
  return DAT_1471b63b0;
}

