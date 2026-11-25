// Recovered from game_scarlett_master.exe (GTA VI, Xbox Series X, PE32+ x64)
// Address: 14001b5d0  size: 226 bytes
// Name:    FUN_14001b5d0
// Subsystem: core
//
// Referenced strings (0 in this body, 0 including direct callees):
// Callees: FUN_14001b6c0, FUN_144e1bd20
//
// Generated decompilation. Formatting follows MiscRef/GTAVSRC conventions;
// identifiers are recovered, not original. See ../../../README.md.

#include "gta6decomp/rage_types.h"


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_14001b5d0(undefined8 *param_1,undefined8 param_2,longlong param_3,undefined8 *param_4)

{
  undefined8 *puVar1;
  int iVar2;
  longlong lVar3;
  undefined8 uStack_88;
  undefined8 uStack_80;
  undefined8 uStack_78;
  undefined8 uStack_70;
  undefined8 uStack_68;
  undefined8 uStack_60;
  undefined8 uStack_58;
  undefined8 uStack_50;
  undefined1 auStack_48 [16];
  undefined8 uStack_38;
  undefined8 uStack_30;
  
  uStack_38 = *param_4;
  uStack_30 = param_4[1];
  iVar2 = FUN_144e1bd20(uStack_38,param_3);
  lVar3 = (longlong)(iVar2 * 3);
  auStack_48 = ZEXT416(_DAT_145fc6ed8);
  puVar1 = (undefined8 *)(param_3 + 0x10 + (longlong)*(int *)(&UNK_1465e5bd8 + lVar3 * 4) * 0x10);
  uStack_78 = *puVar1;
  uStack_70 = puVar1[1];
  uStack_88 = *param_1;
  uStack_80 = param_1[1];
  puVar1 = (undefined8 *)(param_3 + 0x10 + (longlong)*(int *)(&UNK_1465e5bd4 + lVar3 * 4) * 0x10);
  uStack_68 = *puVar1;
  uStack_60 = puVar1[1];
  puVar1 = (undefined8 *)(param_3 + 0x10 + (longlong)*(int *)(&UNK_1465e5bd0 + lVar3 * 4) * 0x10);
  uStack_58 = *puVar1;
  uStack_50 = puVar1[1];
  FUN_14001b6c0(auStack_48,&uStack_58,&uStack_68,&uStack_78,&uStack_88);
  func_0x000144eb7270(param_2,iVar2);
  return;
}

