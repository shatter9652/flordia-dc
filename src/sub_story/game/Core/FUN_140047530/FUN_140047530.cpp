// Recovered from game_scarlett_master.exe (GTA VI, Xbox Series X, PE32+ x64)
// Address: 140047530  size: 269 bytes
// Name:    FUN_140047530
// Subsystem: core
//
// Referenced strings (0 in this body, 0 including direct callees):
// Callees: 
//
// Generated decompilation. Formatting follows MiscRef/GTAVSRC conventions;
// identifiers are recovered, not original. See ../../../README.md.

#include "gta6decomp/rage_types.h"


void FUN_140047530(undefined1 (*param_1) [16],longlong param_2)

{
  undefined4 uVar1;
  undefined1 auVar2 [16];
  undefined1 auVar3 [16];
  undefined1 auVar4 [16];
  undefined1 auVar5 [16];
  undefined1 auVar6 [16];
  undefined1 auVar7 [16];
  undefined1 auVar8 [16];
  undefined1 auVar9 [16];
  undefined1 auVar10 [16];
  undefined1 auVar11 [16];
  undefined1 auVar12 [16];
  undefined1 auVar13 [32];
  undefined1 auVar14 [32];
  undefined1 auVar15 [32];
  
  auVar2 = *(undefined1 (*) [16])(param_2 + 0x5c0);
  auVar3 = *(undefined1 (*) [16])(param_2 + 0x5d0);
  auVar4 = *(undefined1 (*) [16])(param_2 + 0x5e0);
  auVar5 = *(undefined1 (*) [16])(param_2 + 0x5f0);
  auVar6 = *(undefined1 (*) [16])(param_2 + 0x630);
  auVar7 = *(undefined1 (*) [16])(param_2 + 0x600);
  auVar8 = *(undefined1 (*) [16])(param_2 + 0x610);
  auVar9 = *(undefined1 (*) [16])(param_2 + 0x620);
  auVar10 = vmovlhps_avx(auVar5,auVar4);
  auVar12 = vunpcklps_avx(auVar2,auVar3);
  auVar11 = vunpckhps_avx(auVar2,auVar3);
  auVar10 = vshufps_avx(auVar12,auVar10,0x24);
  uVar1 = *(undefined4 *)(param_2 + 0x5f8);
  auVar14._4_4_ = uVar1;
  auVar14._0_4_ = uVar1;
  auVar14._8_4_ = uVar1;
  auVar14._12_4_ = uVar1;
  auVar14._16_4_ = uVar1;
  auVar14._20_4_ = uVar1;
  auVar14._24_4_ = uVar1;
  auVar14._28_4_ = uVar1;
  *param_1 = auVar10;
  auVar10 = vinsertps_avx(auVar3,auVar2,0x4c);
  auVar2 = vshufps_avx(auVar3,auVar2,0x33);
  auVar13._16_16_ = auVar11;
  auVar13._0_16_ = auVar10;
  auVar3 = vunpcklps_avx(auVar4,auVar5);
  auVar2 = vshufps_avx(auVar2,auVar4,0xf2);
  auVar15._16_16_ = auVar4;
  auVar15._0_16_ = auVar3;
  auVar2 = vblendps_avx(auVar2,auVar5,8);
  auVar13 = vblendps_avx(auVar13,auVar15,0xcc);
  auVar13 = vblendps_avx(auVar13,auVar14,0x80);
  *(undefined1 (*) [32])(param_1 + 1) = auVar13;
  param_1[3] = auVar2;
  auVar2 = vblendps_avx(auVar6,auVar7,2);
  *(int *)param_1[4] = auVar7._0_4_;
  *(int *)(param_1[4] + 4) = auVar8._0_4_;
  *(int *)(param_1[4] + 8) = auVar9._0_4_;
  auVar2 = vshufps_avx(auVar2,auVar8,0xd4);
  auVar2 = vinsertps_avx(auVar2,auVar9,0x70);
  *(undefined1 (*) [16])(param_1[4] + 0xc) = auVar2;
  uVar1 = vextractps_avx(auVar6,1);
  *(undefined4 *)(param_1[5] + 0xc) = uVar1;
  return;
}

