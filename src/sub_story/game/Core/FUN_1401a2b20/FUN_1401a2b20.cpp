// Recovered from game_scarlett_master.exe (GTA VI, Xbox Series X, PE32+ x64)
// Address: 1401a2b20  size: 114 bytes
// Name:    FUN_1401a2b20
// Subsystem: core
//
// Referenced strings (0 in this body, 0 including direct callees):
// Callees: FUN_1450dab90, FUN_1450dab30, FUN_1450daad0
//
// Generated decompilation. Formatting follows MiscRef/GTAVSRC conventions;
// identifiers are recovered, not original. See ../../../README.md.

#include "gta6decomp/rage_types.h"


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1401a2b20(undefined4 *param_1)

{
  uint uVar1;
  uint uVar2;
  undefined4 uVar3;
  undefined1 auVar4 [64];
  undefined1 auVar5 [64];
  
  uVar2 = _DAT_14aa48908;
  uVar1 = _DAT_14aa488f4;
  auVar4 = ZEXT464(_DAT_14aa488f4);
  auVar5 = ZEXT464(_DAT_14aa48908);
  param_1[1] = 0;
  uVar3 = FUN_1450daad0(uVar2,uVar1);
  *param_1 = uVar3;
  uVar3 = FUN_1450dab30(auVar5._0_8_,auVar4._0_8_);
  param_1[2] = uVar3;
  uVar3 = FUN_1450dab90(auVar5._0_8_,auVar4._0_8_);
  param_1[3] = uVar3;
  return;
}

