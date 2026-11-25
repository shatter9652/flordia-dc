// Recovered from game_scarlett_master.exe (GTA VI, Xbox Series X, PE32+ x64)
// Address: 140083360  size: 98 bytes
// Name:    FUN_140083360
// Subsystem: core
//
// Referenced strings (0 in this body, 0 including direct callees):
// Callees: 
//
// Generated decompilation. Formatting follows MiscRef/GTAVSRC conventions;
// identifiers are recovered, not original. See ../../../README.md.

#include "gta6decomp/rage_types.h"


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined8 FUN_140083360(uint param_1)

{
  uint *puVar1;
  ulonglong uVar2;
  ulonglong uVar3;
  ulonglong uVar4;
  
  uVar2 = (ulonglong)_DAT_14ab76988;
  puVar1 = _DAT_14ab76980;
  if (uVar2 != 0) {
    do {
      uVar4 = uVar2 >> 1;
      uVar3 = ~uVar4 + uVar2;
      uVar2 = uVar4;
      if ((puVar1 + uVar4 * 4 + 4)[-4] < param_1) {
        puVar1 = puVar1 + uVar4 * 4 + 4;
        uVar2 = uVar3;
      }
    } while (0 < (longlong)uVar2);
    if ((puVar1 != _DAT_14ab76980 + (ulonglong)_DAT_14ab76988 * 4) && (*puVar1 == param_1)) {
      return *(undefined8 *)(puVar1 + 2);
    }
  }
  return 0;
}

