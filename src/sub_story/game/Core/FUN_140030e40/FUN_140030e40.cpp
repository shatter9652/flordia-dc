// Recovered from game_scarlett_master.exe (GTA VI, Xbox Series X, PE32+ x64)
// Address: 140030e40  size: 72 bytes
// Name:    FUN_140030e40
// Subsystem: core
//
// Referenced strings (0 in this body, 0 including direct callees):
// Callees: FUN_140030e90
//
// Generated decompilation. Formatting follows MiscRef/GTAVSRC conventions;
// identifiers are recovered, not original. See ../../../README.md.

#include "gta6decomp/rage_types.h"


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined1 (*) [16] FUN_140030e40(undefined1 (*param_1) [16])

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined1 auVar3 [16];
  
  uVar2 = _UNK_145fc6ee8;
  uVar1 = _DAT_145fc6ee0;
  auVar3._0_12_ = ZEXT812(0);
  auVar3._12_4_ = 0;
  *param_1 = auVar3;
  *(undefined8 *)param_1[1] = 0x3f00000000000000;
  param_1[1][8] = 2;
  *(undefined8 *)param_1[2] = uVar1;
  *(undefined8 *)(param_1[2] + 8) = uVar2;
  *(undefined4 *)param_1[3] = 0x1ffff;
  param_1[3][4] = 0;
  FUN_140030e90();
  return param_1;
}

