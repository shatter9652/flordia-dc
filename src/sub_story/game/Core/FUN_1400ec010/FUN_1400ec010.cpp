// Recovered from game_scarlett_master.exe (GTA VI, Xbox Series X, PE32+ x64)
// Address: 1400ec010  size: 279 bytes
// Name:    FUN_1400ec010
// Subsystem: core
//
// Referenced strings (0 in this body, 0 including direct callees):
// Callees: 
//
// Generated decompilation. Formatting follows MiscRef/GTAVSRC conventions;
// identifiers are recovered, not original. See ../../../README.md.

#include "gta6decomp/rage_types.h"


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1400ec010(uint param_1,longlong param_2,float *param_3,longlong param_4,longlong param_5)

{
  float *pfVar1;
  longlong lVar2;
  byte *pbVar3;
  float fVar4;
  float fVar5;
  float fVar6;
  longlong lVar7;
  ulonglong uVar8;
  longlong lVar9;
  ulonglong uVar10;
  ushort uVar11;
  uint uVar12;
  undefined1 auVar13 [16];
  undefined1 auVar14 [16];
  undefined1 auVar15 [16];
  undefined1 auVar16 [16];
  undefined1 auVar17 [16];
  
  fVar6 = _DAT_14615a130;
  fVar4 = *param_3;
  uVar10 = 0;
  auVar13._0_12_ = ZEXT812(0);
  auVar13._12_4_ = 0;
  lVar9 = param_2;
  do {
    lVar7 = uVar10 * 0x20;
    fVar5 = *(float *)(param_5 + 0x1c + lVar7);
    if ((fVar5 != 0.0) || (NAN(fVar5))) {
      auVar14 = ZEXT816(0);
      uVar11 = *(ushort *)(param_2 + uVar10 * 0x5c);
      uVar12 = uVar11 & 0xf;
      if ((uVar11 & 0xf) != 0) {
        uVar8 = 0;
        auVar15 = auVar14;
        do {
          pbVar3 = (byte *)(lVar9 + 0x14 + uVar8);
          lVar2 = uVar8 * 2;
          uVar8 = uVar8 + 1;
          fVar5 = (float)*pbVar3 * fVar6;
          pfVar1 = (float *)(param_4 + (ulonglong)*(ushort *)(lVar9 + 4 + lVar2) * 0x10);
          auVar14._0_4_ = fVar5 * *pfVar1 + auVar15._0_4_;
          auVar14._4_4_ = fVar5 * pfVar1[1] + auVar15._4_4_;
          auVar14._8_4_ = fVar5 * pfVar1[2] + auVar15._8_4_;
          auVar14._12_4_ = fVar5 * pfVar1[3] + auVar15._12_4_;
          auVar15 = auVar14;
        } while (uVar12 != uVar8);
      }
      pfVar1 = (float *)(param_5 + 0x10 + lVar7);
      auVar15 = *(undefined1 (*) [16])(param_5 + lVar7);
      auVar17._0_4_ = auVar15._0_4_ * (-(*pfVar1 * fVar4) + auVar14._0_4_);
      auVar17._4_4_ = auVar15._4_4_ * (-(pfVar1[1] * fVar4) + auVar14._4_4_);
      auVar17._8_4_ = auVar15._8_4_ * (-(pfVar1[2] * fVar4) + auVar14._8_4_);
      auVar17._12_4_ = auVar15._12_4_ * (-(pfVar1[3] * fVar4) + auVar14._12_4_);
      auVar17 = vblendps_avx(auVar17,auVar13,8);
      auVar17 = vhaddps_avx(auVar17,auVar17);
      auVar17 = vhaddps_avx(auVar17,auVar17);
      auVar16 = auVar14;
      if (auVar17._0_4_ < 0.0) {
        auVar16._0_4_ = -(auVar17._0_4_ * auVar15._0_4_) + auVar14._0_4_;
        auVar16._4_4_ = -(auVar17._4_4_ * auVar15._4_4_) + auVar14._4_4_;
        auVar16._8_4_ = -(auVar17._8_4_ * auVar15._8_4_) + auVar14._8_4_;
        auVar16._12_4_ = -(auVar17._12_4_ * auVar15._12_4_) + auVar14._12_4_;
      }
      uVar11 = (ushort)uVar12;
      if (uVar11 != 0) {
        auVar14 = vsubps_avx(auVar16,auVar14);
        uVar8 = 0;
        do {
          lVar7 = uVar8 * 2;
          fVar5 = *(float *)(lVar9 + 0x20 + uVar8 * 4);
          uVar8 = uVar8 + 1;
          lVar7 = (ulonglong)*(ushort *)(lVar9 + 4 + lVar7) * 0x10;
          pfVar1 = (float *)(param_4 + lVar7);
          auVar15._0_4_ = auVar14._0_4_ * fVar5 + *pfVar1;
          auVar15._4_4_ = auVar14._4_4_ * fVar5 + pfVar1[1];
          auVar15._8_4_ = auVar14._8_4_ * fVar5 + pfVar1[2];
          auVar15._12_4_ = auVar14._12_4_ * fVar5 + pfVar1[3];
          *(undefined1 (*) [16])(param_4 + lVar7) = auVar15;
        } while (uVar11 != uVar8);
      }
    }
    uVar10 = uVar10 + 1;
    lVar9 = lVar9 + 0x5c;
  } while (uVar10 != param_1);
  return;
}

