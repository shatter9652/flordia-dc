// Recovered from game_scarlett_master.exe (GTA VI, Xbox Series X, PE32+ x64)
// Address: 141be8da0  size: 299 bytes
// Name:    diagErrorCodes::LoadLanguageFile
// Subsystem: core
// Class:   diagErrorCodes
//
// Evidence:
//   GTAVSRC: diagErrorCodes::LoadLanguageFile  (rage/base/src/diag/diagerrorcodes.cpp)
//   literal: american.txt
//
// Referenced strings (0 in this body, 0 including direct callees):
// Callees: FUN_144fb5bf0
//
// Generated decompilation. Formatting follows MiscRef/GTAVSRC conventions;
// identifiers are recovered, not original. See ../../../README.md.

#include "gta6decomp/rage_types.h"
#include "gta6decomp/diagErrorCodes.h"


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined1 (*) [32] diagErrorCodes__LoadLanguageFile(undefined1 (*param_1) [32])

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined1 auVar4 [16];
  undefined1 auVar5 [64];
  
  *param_1 = ZEXT1232(ZEXT812(0));
  uVar2 = FUN_144fb5bf0(&UNK_146780bf1,0xffffffff);
  *(undefined8 *)param_1[1] = uVar2;
  uVar2 = FUN_144fb5bf0(&UNK_14677f884,0xffffffff);
  *(undefined8 *)(param_1[1] + 8) = uVar2;
  uVar2 = FUN_144fb5bf0(&UNK_1467798c5,0xffffffff);
  *(undefined8 *)(param_1[1] + 0x10) = uVar2;
  uVar2 = FUN_144fb5bf0(&UNK_14677f805,0xffffffff);
  *(undefined8 *)(param_1[1] + 0x18) = uVar2;
  uVar2 = FUN_144fb5bf0(&UNK_146786b6a,0xffffffff);
  *(undefined8 *)param_1[2] = uVar2;
  uVar2 = FUN_144fb5bf0(&UNK_146786b6a,0xffffffff);
  *(undefined8 *)(param_1[2] + 8) = uVar2;
  uVar2 = FUN_144fb5bf0(&UNK_146786b6a,0xffffffff);
  auVar4._0_12_ = ZEXT812(0);
  auVar4._12_4_ = 0;
  auVar5 = ZEXT1664(auVar4);
  *(undefined8 *)(param_1[2] + 0x10) = uVar2;
  *(undefined8 *)(param_1[3] + 8) = 0;
  *(undefined1 (*) [16])(param_1[2] + 0x18) = auVar4;
  uVar3 = FUN_144fb5bf0(&UNK_14677f517,0xffffffff);
  uVar1 = _UNK_146159ee8;
  uVar2 = _DAT_146159ee0;
  *(undefined8 *)(param_1[3] + 0x10) = uVar3;
  *(undefined1 (*) [16])(param_1[3] + 0x18) = auVar5._0_16_;
  *(undefined1 (*) [16])(param_1[4] + 4) = auVar5._0_16_;
  *(undefined8 *)(param_1[4] + 0x14) = uVar2;
  *(undefined8 *)(param_1[4] + 0x1c) = uVar1;
  *(undefined8 *)(param_1[5] + 4) = 0x101010000000100;
  *(undefined4 *)(param_1[5] + 0xc) = 0x100;
  param_1[5][0x10] = 0;
  *(undefined8 *)(param_1[2] + 0x18) = 0xc37db3d16bd1b480;
  return param_1;
}

