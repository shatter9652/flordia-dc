// Recovered from game_scarlett_master.exe (GTA VI, Xbox Series X, PE32+ x64)
// Address: 140120140  size: 96 bytes
// Name:    FUN_140120140
// Subsystem: core
//
// Referenced strings (0 in this body, 0 including direct callees):
// Callees: FUN_14554d7d0
//
// Generated decompilation. Formatting follows MiscRef/GTAVSRC conventions;
// identifiers are recovered, not original. See ../../../README.md.

#include "gta6decomp/rage_types.h"


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined8 FUN_140120140(void)

{
  longlong lVar1;
  uint uVar2;
  uint uVar3;
  ulonglong uVar4;
  undefined8 uVar5;
  ulonglong uVar6;
  
  uVar3 = _DAT_14a94392c;
  uVar2 = _DAT_14a943928;
  uVar4 = (ulonglong)_DAT_14a94392c;
  uVar6 = (ulonglong)_DAT_14a943928;
  FUN_14554d7d0();
  if (((uVar2 < *(uint *)((ulonglong)DAT_1475ddbf0 * 4 + 0x1475ddc08)) &&
      (lVar1 = *(longlong *)((ulonglong)DAT_1475ddbf0 * 8 + 0x1475ddbf8 + uVar6 * 8), lVar1 != 0))
     && (uVar3 < *(uint *)(lVar1 + 0x154))) {
    uVar4 = CONCAT71((int7)((ulonglong)lVar1 >> 8),*(undefined1 *)(lVar1 + 0x268 + uVar4 * 0x140)) &
            0xffffffffffffff04;
    uVar5 = CONCAT71((int7)(uVar4 >> 8),(byte)uVar4 >> 2);
  }
  else {
    uVar5 = 0;
  }
  return uVar5;
}

