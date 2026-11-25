// Recovered from game_scarlett_master.exe (GTA VI, Xbox Series X, PE32+ x64)
// Address: 14017f2a0  size: 217 bytes
// Name:    FUN_14017f2a0
// Subsystem: core
//
// Referenced strings (0 in this body, 0 including direct callees):
// Callees: FUN_14017f470, FUN_14017f380
//
// Generated decompilation. Formatting follows MiscRef/GTAVSRC conventions;
// identifiers are recovered, not original. See ../../../README.md.

#include "gta6decomp/rage_types.h"


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_14017f2a0(longlong *param_1,longlong param_2,undefined8 param_3,undefined4 param_4,
                  undefined4 param_5,undefined4 param_6,undefined4 param_7,undefined4 param_8)

{
  longlong *plVar1;
  ulonglong uVar2;
  longlong lVar3;
  longlong lVar4;
  longlong lVar5;
  longlong lVar6;
  longlong lVar7;
  longlong lVar8;
  longlong lVar9;
  undefined1 auVar10 [16];
  undefined1 auVar11 [16];
  
  *(undefined4 *)((longlong)param_1 + 0x7c) = param_6;
  *(undefined4 *)(param_1 + 0x10) = param_7;
  *(undefined4 *)(param_1 + 0xf) = param_8;
  FUN_14017f380(param_7,*(undefined8 *)(param_2 + 0x1090));
  auVar10._4_4_ = _DAT_145fc6f50;
  auVar10._0_4_ = _DAT_145fc6f50;
  auVar10._8_4_ = _DAT_145fc6f50;
  auVar10._12_4_ = _DAT_145fc6f50;
  auVar11._4_4_ = _DAT_145fc6f54;
  auVar11._0_4_ = _DAT_145fc6f54;
  auVar11._8_4_ = _DAT_145fc6f54;
  auVar11._12_4_ = _DAT_145fc6f54;
  *(undefined4 *)(param_1 + 0xd) = param_4;
  *(undefined4 *)((longlong)param_1 + 0x6c) = param_5;
  *(undefined4 *)(param_1 + 0xe) = 1;
  *(undefined4 *)(param_1 + 0x4d) = 0;
  param_1[0xc] = 0;
  *(byte *)((longlong)param_1 + 0x74) = *(byte *)((longlong)param_1 + 0x74) | 2;
  *(undefined1 (*) [16])(param_1 + 0x48) = auVar10;
  *(undefined1 (*) [16])(param_1 + 0x4a) = auVar11;
  FUN_14017f470(param_1);
  (**(code **)(*param_1 + 0x58))(param_1,param_2,param_3);
  lVar3 = param_1[0x40];
  lVar4 = param_1[0x41];
  lVar5 = param_1[0x42];
  lVar6 = param_1[0x43];
  lVar7 = param_1[0x45];
  lVar8 = param_1[0x46];
  lVar9 = param_1[0x47];
  uVar2 = (ulonglong)*_DAT_14a943ab0;
  plVar1 = param_1 + uVar2 * 0x10 + 0x54;
  *plVar1 = param_1[0x44];
  plVar1[1] = lVar7;
  plVar1[2] = lVar8;
  plVar1[3] = lVar9;
  plVar1 = param_1 + uVar2 * 0x10 + 0x50;
  *plVar1 = lVar3;
  plVar1[1] = lVar4;
  plVar1[2] = lVar5;
  plVar1[3] = lVar6;
  lVar3 = param_1[0x49];
  param_1[uVar2 * 0x10 + 0x58] = param_1[0x48];
  (param_1 + uVar2 * 0x10 + 0x58)[1] = lVar3;
  lVar3 = param_1[0x4b];
  param_1[uVar2 * 0x10 + 0x5a] = param_1[0x4a];
  (param_1 + uVar2 * 0x10 + 0x5a)[1] = lVar3;
  *(undefined4 *)((longlong)param_1 + uVar2 * 0x80 + 0x2ef) =
       *(undefined4 *)((longlong)param_1 + 0x26f);
  lVar3 = param_1[0x4d];
  param_1[uVar2 * 0x10 + 0x5c] = param_1[0x4c];
  (param_1 + uVar2 * 0x10 + 0x5c)[1] = lVar3;
  return;
}

