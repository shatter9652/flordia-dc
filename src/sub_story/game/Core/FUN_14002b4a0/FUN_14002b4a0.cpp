// Recovered from game_scarlett_master.exe (GTA VI, Xbox Series X, PE32+ x64)
// Address: 14002b4a0  size: 250 bytes
// Name:    FUN_14002b4a0
// Subsystem: core
//
// Referenced strings (0 in this body, 0 including direct callees):
// Callees: FUN_14002ba70
//
// Generated decompilation. Formatting follows MiscRef/GTAVSRC conventions;
// identifiers are recovered, not original. See ../../../README.md.

#include "gta6decomp/rage_types.h"


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_14002b4a0(undefined8 param_1,float *param_2)

{
  undefined1 auVar1 [16];
  float fVar2;
  float fVar3;
  float fVar4;
  float fVar5;
  float fVar6;
  float fVar7;
  float fVar8;
  float fVar9;
  float fStack_bc;
  undefined1 auStack_b8 [16];
  float fStack_a8;
  float fStack_a4;
  float fStack_a0;
  float fStack_9c;
  undefined1 auStack_98 [16];
  undefined1 auStack_88 [16];
  undefined1 auStack_78 [16];
  undefined1 auStack_68 [24];
  undefined1 auStack_50 [8];
  uint uStack_48;
  float fStack_40;
  
  fVar2 = *param_2;
  fVar3 = param_2[1];
  fVar4 = param_2[2];
  fVar5 = param_2[3];
  func_0x000144e0acd0(auStack_50);
  func_0x00014002b5a0(auStack_50);
  fVar6 = fVar2 * _DAT_14615a2c4;
  fVar7 = fVar3 * _DAT_14615a2c4;
  fVar8 = fVar4 * _DAT_14615a2c4;
  fVar9 = fVar5 * _DAT_14615a2c4;
  auStack_78 = vinsertps_avx(ZEXT416(uStack_48),ZEXT416((uint)(fStack_40 + fStack_40)),0x1d);
  auVar1._0_4_ = (uint)fStack_40 ^ _DAT_145fc6f10;
  auVar1._4_4_ = _DAT_145fc6f10;
  auVar1._8_4_ = _DAT_145fc6f10;
  auVar1._12_4_ = _DAT_145fc6f10;
  auStack_98._0_4_ = (uint)fVar2 ^ _DAT_145fc6f10;
  auStack_98._4_4_ = (uint)fVar3 ^ _DAT_145fc6f10;
  auStack_98._8_4_ = (uint)fVar4 ^ _DAT_145fc6f10;
  auStack_98._12_4_ = (uint)fVar5 ^ _DAT_145fc6f10;
  auStack_88 = vinsertps_avx(ZEXT416(uStack_48),auVar1,0x1d);
  fStack_a8 = fVar6;
  fStack_a4 = fVar7;
  fStack_a0 = fVar8;
  fStack_9c = fVar9;
  FUN_14002ba70(&fStack_a8,auStack_98,auStack_88,auStack_78,uStack_48,&fStack_bc,auStack_68);
  auStack_b8._0_4_ = -(fVar2 * fStack_bc) + fVar6;
  auStack_b8._4_4_ = -(fVar3 * fStack_bc) + fVar7;
  auStack_b8._8_4_ = -(fVar4 * fStack_bc) + fVar8;
  auStack_b8._12_4_ = -(fVar5 * fStack_bc) + fVar9;
  func_0x00014002b5c0(param_1,auStack_50);
  return;
}

