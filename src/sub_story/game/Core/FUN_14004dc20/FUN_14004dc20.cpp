// Recovered from game_scarlett_master.exe (GTA VI, Xbox Series X, PE32+ x64)
// Address: 14004dc20  size: 87 bytes
// Name:    FUN_14004dc20
// Subsystem: core
//
// Referenced strings (0 in this body, 0 including direct callees):
// Callees: FUN_1443e2a10
//
// Generated decompilation. Formatting follows MiscRef/GTAVSRC conventions;
// identifiers are recovered, not original. See ../../../README.md.

#include "gta6decomp/rage_types.h"


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined8 FUN_14004dc20(longlong param_1,int param_2)

{
  undefined8 uVar1;
  longlong lVar2;
  
  if (*(char *)(param_1 + 0x101) == '\0') {
    lVar2 = (longlong)param_2;
    if (*(char *)(lVar2 + 0x45 + param_1) == '\x01') {
      uVar1 = *(undefined8 *)(param_1 + 0x20 + lVar2 * 8);
    }
    else {
      uVar1 = _DAT_14ab56e38;
      if (param_2 != 3) {
        if (param_2 == 4) {
          uVar1 = FUN_1443e2a10();
        }
        else {
          uVar1 = 0;
        }
      }
      *(undefined8 *)(param_1 + 0x20 + lVar2 * 8) = uVar1;
      *(undefined1 *)(param_1 + 0x45 + lVar2) = 1;
    }
  }
  else {
    uVar1 = 0;
  }
  return uVar1;
}

