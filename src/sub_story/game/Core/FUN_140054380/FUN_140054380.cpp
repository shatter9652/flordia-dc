// Recovered from game_scarlett_master.exe (GTA VI, Xbox Series X, PE32+ x64)
// Address: 140054380  size: 475 bytes
// Name:    FUN_140054380
// Subsystem: core
//
// Referenced strings (0 in this body, 0 including direct callees):
// Callees: FUN_144e7a630
//
// Generated decompilation. Formatting follows MiscRef/GTAVSRC conventions;
// identifiers are recovered, not original. See ../../../README.md.

#include "gta6decomp/rage_types.h"


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_140054380(undefined1 (*param_1) [32],undefined4 param_2)

{
  undefined1 auVar1 [16];
  undefined1 auVar2 [32];
  uint uVar3;
  undefined4 uVar4;
  undefined4 uVar5;
  undefined4 uVar6;
  undefined4 uVar7;
  undefined4 uVar8;
  undefined4 uVar9;
  undefined4 uVar10;
  longlong lVar11;
  float fVar12;
  float fVar13;
  float fVar14;
  float fVar15;
  float fVar16;
  float fVar17;
  float fVar18;
  
  param_1[1] = ZEXT1232(ZEXT812(0));
  *param_1 = ZEXT1232(ZEXT812(0));
  lVar11 = FUN_144e7a630(param_2);
  if (lVar11 != 0) {
    lVar11 = lVar11 + 0x10;
    uVar3 = func_0x000144e7b000(0,lVar11);
    uVar4 = func_0x000144e7b000(1,lVar11);
    uVar5 = func_0x000144e7b000(2,lVar11);
    uVar6 = func_0x000144e7b000(3,lVar11);
    uVar7 = func_0x000144e7b000(4,lVar11);
    uVar8 = func_0x000144e7b000(5,lVar11);
    uVar9 = func_0x000144e7b000(6,lVar11);
    uVar10 = func_0x000144e7b000(7,lVar11);
    auVar1 = vpinsrb_avx(ZEXT416(uVar3),uVar4,1);
    auVar1 = vpinsrb_avx(auVar1,uVar5,2);
    auVar1 = vpinsrb_avx(auVar1,uVar6,3);
    auVar1 = vpinsrb_avx(auVar1,uVar7,4);
    auVar1 = vpinsrb_avx(auVar1,uVar8,5);
    auVar1 = vpinsrb_avx(auVar1,uVar9,6);
    auVar1 = vpinsrb_avx(auVar1,uVar10,7);
    auVar2 = vpmovzxbd_avx2(auVar1);
    auVar2 = vcvtdq2ps_avx(auVar2);
    fVar12 = auVar2._4_4_ * _DAT_146159ef4;
    fVar13 = auVar2._8_4_ * _DAT_146159ef4;
    fVar14 = auVar2._12_4_ * _DAT_146159ef4;
    fVar15 = auVar2._16_4_ * _DAT_146159ef4;
    fVar16 = auVar2._20_4_ * _DAT_146159ef4;
    fVar17 = auVar2._24_4_ * _DAT_146159ef4;
    fVar18 = auVar2._28_4_ * _DAT_146159ef4;
    *(float *)*param_1 = auVar2._0_4_ * _DAT_146159ef4;
    *(float *)(*param_1 + 4) = fVar12;
    *(float *)(*param_1 + 8) = fVar13;
    *(float *)(*param_1 + 0xc) = fVar14;
    *(float *)(*param_1 + 0x10) = fVar15;
    *(float *)(*param_1 + 0x14) = fVar16;
    *(float *)(*param_1 + 0x18) = fVar17;
    *(float *)(*param_1 + 0x1c) = fVar18;
    uVar3 = func_0x000144e7b000(8,lVar11);
    uVar4 = func_0x000144e7b000(9,lVar11);
    uVar5 = func_0x000144e7b000(10,lVar11);
    uVar6 = func_0x000144e7b000(0xb,lVar11);
    uVar7 = func_0x000144e7b000(0xc,lVar11);
    uVar8 = func_0x000144e7b000(0xd,lVar11);
    uVar9 = func_0x000144e7b000(0xe,lVar11);
    uVar10 = func_0x000144e7b000(0xf,lVar11);
    auVar1 = vpinsrb_avx(ZEXT416(uVar3),uVar4,1);
    auVar1 = vpinsrb_avx(auVar1,uVar5,2);
    auVar1 = vpinsrb_avx(auVar1,uVar6,3);
    auVar1 = vpinsrb_avx(auVar1,uVar7,4);
    auVar1 = vpinsrb_avx(auVar1,uVar8,5);
    auVar1 = vpinsrb_avx(auVar1,uVar9,6);
    auVar1 = vpinsrb_avx(auVar1,uVar10,7);
    auVar2 = vpmovzxbd_avx2(auVar1);
    auVar2 = vcvtdq2ps_avx(auVar2);
    fVar12 = auVar2._4_4_ * _DAT_146159ef4;
    fVar13 = auVar2._8_4_ * _DAT_146159ef4;
    fVar14 = auVar2._12_4_ * _DAT_146159ef4;
    fVar15 = auVar2._16_4_ * _DAT_146159ef4;
    fVar16 = auVar2._20_4_ * _DAT_146159ef4;
    fVar17 = auVar2._24_4_ * _DAT_146159ef4;
    fVar18 = auVar2._28_4_ * _DAT_146159ef4;
    *(float *)param_1[1] = auVar2._0_4_ * _DAT_146159ef4;
    *(float *)(param_1[1] + 4) = fVar12;
    *(float *)(param_1[1] + 8) = fVar13;
    *(float *)(param_1[1] + 0xc) = fVar14;
    *(float *)(param_1[1] + 0x10) = fVar15;
    *(float *)(param_1[1] + 0x14) = fVar16;
    *(float *)(param_1[1] + 0x18) = fVar17;
    *(float *)(param_1[1] + 0x1c) = fVar18;
  }
  return;
}

