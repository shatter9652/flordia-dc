// Recovered from game_scarlett_master.exe (GTA VI, Xbox Series X, PE32+ x64)
// Address: 140139670  size: 102 bytes
// Name:    FUN_140139670
// Subsystem: core
//
// Referenced strings (0 in this body, 0 including direct callees):
// Callees: FUN_1409519a0
//
// Generated decompilation. Formatting follows MiscRef/GTAVSRC conventions;
// identifiers are recovered, not original. See ../../../README.md.

#include "gta6decomp/rage_types.h"


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

ulonglong FUN_140139670(longlong param_1,char param_2)

{
  longlong lVar1;
  undefined8 uVar2;
  undefined8 unaff_RBX;
  ulonglong uVar3;
  undefined7 uVar4;
  
  lVar1 = func_0x000144da31b0(param_1 + 0x210);
  uVar4 = (undefined7)((ulonglong)unaff_RBX >> 8);
  uVar3 = CONCAT71(uVar4,1);
  if (lVar1 != 0) {
    if ((param_2 == '\0') && (_DAT_14aa31a7c <= *(int *)(param_1 + 0x25c) + 3000U)) {
      uVar3 = 0;
    }
    else {
      uVar2 = func_0x000144da31b0(param_1 + 0x210);
      uVar3 = CONCAT71(uVar4,1);
      FUN_1409519a0(uVar2,1,0x7585d45d);
    }
  }
  return uVar3 & 0xffffffff;
}

