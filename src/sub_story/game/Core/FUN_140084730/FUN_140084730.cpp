// Recovered from game_scarlett_master.exe (GTA VI, Xbox Series X, PE32+ x64)
// Address: 140084730  size: 96 bytes
// Name:    FUN_140084730
// Subsystem: core
//
// Referenced strings (0 in this body, 0 including direct callees):
// Callees: 
//
// Generated decompilation. Formatting follows MiscRef/GTAVSRC conventions;
// identifiers are recovered, not original. See ../../../README.md.

#include "gta6decomp/rage_types.h"


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_140084730(undefined8 *param_1)

{
  undefined1 auVar1 [16];
  undefined8 uVar2;
  float fVar3;
  undefined8 uVar7;
  undefined8 uVar8;
  undefined8 uVar9;
  undefined8 uVar10;
  longlong lVar11;
  undefined1 auVar12 [16];
  float fVar4;
  float fVar5;
  float fVar6;
  
  lVar11 = func_0x000145073c10();
  auVar1 = *(undefined1 (*) [16])(lVar11 + 0x1b0);
  uVar2 = *(undefined8 *)(lVar11 + 0x1a0);
  auVar12 = vpunpckhwd_avx(auVar1,auVar1);
  auVar12 = vpsrad_avx(auVar12,0x10);
  auVar12 = vcvtdq2ps_avx(auVar12);
  auVar12 = vshufpd_avx(auVar12,auVar12,3);
  fVar3 = auVar12._0_4_ * _DAT_146159c90;
  fVar4 = auVar12._4_4_ * _UNK_146159c94;
  fVar5 = auVar12._8_4_ * _UNK_146159c98;
  fVar6 = auVar12._12_4_ * _UNK_146159c9c;
  uVar7 = *(undefined8 *)(lVar11 + 0x180);
  uVar8 = *(undefined8 *)(lVar11 + 0x188);
  uVar9 = *(undefined8 *)(lVar11 + 400);
  uVar10 = *(undefined8 *)(lVar11 + 0x198);
  param_1[5] = *(undefined8 *)(lVar11 + 0x1a8);
  param_1[4] = uVar2;
  *param_1 = uVar7;
  param_1[1] = uVar8;
  param_1[2] = uVar9;
  param_1[3] = uVar10;
  *(float *)(param_1 + 6) = fVar3 + auVar1._0_4_;
  *(float *)((longlong)param_1 + 0x34) = fVar4 + auVar1._4_4_;
  *(float *)(param_1 + 7) = fVar5 + auVar1._8_4_;
  *(float *)((longlong)param_1 + 0x3c) = fVar6 + auVar1._12_4_;
  return;
}

