// Recovered from game_scarlett_master.exe (GTA VI, Xbox Series X, PE32+ x64)
// Address: 140037af0  size: 153 bytes
// Name:    FUN_140037af0
// Subsystem: core
//
// Referenced strings (0 in this body, 0 including direct callees):
// Callees: FUN_1455dcc0c, FUN_1455db934, FUN_1455db8cc
//
// Generated decompilation. Formatting follows MiscRef/GTAVSRC conventions;
// identifiers are recovered, not original. See ../../../README.md.

#include "gta6decomp/rage_types.h"


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined * FUN_140037af0(uint param_1)

{
  undefined *puVar1;
  longlong unaff_GS_OFFSET;
  
  if (_DAT_1498cc2c8 == 0 || (param_1 & 0x1fffffff) == 0) {
    puVar1 = &DAT_1498cc200;
    if (*(int *)(*(longlong *)(*(longlong *)(unaff_GS_OFFSET + 0x58) + (ulonglong)__tls_index * 8) +
                4) < _DAT_1498cc204) {
      FUN_1455db8cc(&DAT_1498cc204);
      if (_DAT_1498cc204 == -1) {
        _DAT_1498cc200 = 0;
        FUN_1455dcc0c(FUN_143e42e80);
        FUN_1455db934(&DAT_1498cc204);
      }
      puVar1 = &DAT_1498cc200;
    }
  }
  else {
    puVar1 = (undefined *)(_DAT_1498cc2c8 + 8 + (ulonglong)((param_1 & 0x1fffffff) - 1) * 0x10);
  }
  return puVar1;
}

