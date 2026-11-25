// Recovered from game_scarlett_master.exe (GTA VI, Xbox Series X, PE32+ x64)
// Address: 14014ea20  size: 107 bytes
// Name:    FUN_14014ea20
// Subsystem: core
//
// Referenced strings (0 in this body, 0 including direct callees):
// Callees: FUN_144f013e0, FUN_1405e48c0
//
// Generated decompilation. Formatting follows MiscRef/GTAVSRC conventions;
// identifiers are recovered, not original. See ../../../README.md.

#include "gta6decomp/rage_types.h"


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_14014ea20(longlong param_1,undefined8 param_2,longlong param_3)

{
  char cVar1;
  longlong lVar2;
  undefined8 uStack_28;
  byte bStack_20;
  
  lVar2 = FUN_144f013e0(*(undefined4 *)(param_3 + 0x9c));
  if (lVar2 != 0) {
    cVar1 = func_0x000140132800(*(undefined8 *)(lVar2 + 0x58));
    if (cVar1 != '\0') {
      bStack_20 = 1;
      goto LAB_14014ea50;
    }
  }
  bStack_20 = 3;
LAB_14014ea50:
  bStack_20 = *(byte *)(param_1 + 0x71) >> 1 & 0x10 | bStack_20;
  uStack_28 = _DAT_146172db0;
  FUN_1405e48c0(param_2,param_3,&uStack_28,1);
  return;
}

