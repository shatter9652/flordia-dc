// Recovered from game_scarlett_master.exe (GTA VI, Xbox Series X, PE32+ x64)
// Address: 1401b1e00  size: 97 bytes
// Name:    FUN_1401b1e00
// Subsystem: core
//
// Referenced strings (0 in this body, 0 including direct callees):
// Callees: 
//
// Generated decompilation. Formatting follows MiscRef/GTAVSRC conventions;
// identifiers are recovered, not original. See ../../../README.md.

#include "gta6decomp/rage_types.h"


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

uint * FUN_1401b1e00(uint param_1)

{
  uint *puVar1;
  ulonglong uVar2;
  ulonglong uVar3;
  ulonglong uVar4;
  
  uVar2 = (ulonglong)_DAT_148efdb48;
  puVar1 = _DAT_148efdb40;
  uVar3 = uVar2;
  if (uVar2 != 0) {
    do {
      uVar4 = uVar3 >> 1;
      if ((puVar1 + uVar4 * 6 + 6)[-6] < param_1) {
        puVar1 = puVar1 + uVar4 * 6 + 6;
        uVar4 = ~uVar4 + uVar3;
      }
      uVar3 = uVar4;
    } while (0 < (longlong)uVar4);
    if ((puVar1 != _DAT_148efdb40 + uVar2 * 6) && (*puVar1 == param_1)) {
      return puVar1 + 2;
    }
  }
  return (uint *)0x0;
}

