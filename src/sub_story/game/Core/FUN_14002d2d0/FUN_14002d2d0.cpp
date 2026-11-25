// Recovered from game_scarlett_master.exe (GTA VI, Xbox Series X, PE32+ x64)
// Address: 14002d2d0  size: 178 bytes
// Name:    FUN_14002d2d0
// Subsystem: core
//
// Referenced strings (0 in this body, 0 including direct callees):
// Callees: FUN_14514eb50, FUN_144d9d7a0, FUN_144e8f840
//
// Generated decompilation. Formatting follows MiscRef/GTAVSRC conventions;
// identifiers are recovered, not original. See ../../../README.md.

#include "gta6decomp/rage_types.h"


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_14002d2d0(undefined8 param_1,uint param_2,uint param_3,undefined8 *param_4)

{
  char cVar1;
  undefined1 auVar2 [16];
  undefined8 uStack_98;
  undefined8 uStack_90;
  undefined8 uStack_88;
  undefined8 uStack_80;
  undefined8 uStack_70;
  undefined8 uStack_68;
  undefined8 uStack_60;
  undefined8 uStack_58;
  undefined8 uStack_50;
  undefined8 uStack_48;
  undefined8 uStack_40;
  undefined4 uStack_38;
  undefined1 auStack_28 [16];
  
  if (((~param_3 & 0x7ffe) != 0) && (cVar1 = FUN_144d9d7a0(param_2,param_2 >> 0x10), cVar1 != '\0'))
  {
    auVar2._4_4_ = _DAT_145fc6ed8;
    auVar2._0_4_ = _DAT_145fc6ed8;
    auVar2._8_4_ = _DAT_145fc6ed8;
    auVar2._12_4_ = _DAT_145fc6ed8;
    uStack_68 = 0x10001;
    uStack_70 = vmovlps_avx(auVar2);
    uStack_60 = 0;
    uStack_88 = *param_4;
    uStack_80 = param_4[1];
    FUN_14514eb50(param_1);
    return;
  }
  uStack_58 = _DAT_14615aee0;
  uStack_50 = _UNK_14615aee8;
  uStack_48 = _UNK_14615aef0;
  uStack_40 = _UNK_14615aef8;
  auStack_28._0_12_ = ZEXT812(0);
  auStack_28._12_4_ = 0;
  uStack_38 = 0x3f800000;
  uStack_98 = *param_4;
  uStack_90 = param_4[1];
  FUN_144e8f840(param_1,&uStack_98,7);
  return;
}

