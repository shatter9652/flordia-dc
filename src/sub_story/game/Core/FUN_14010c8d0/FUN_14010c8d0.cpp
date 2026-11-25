// Recovered from game_scarlett_master.exe (GTA VI, Xbox Series X, PE32+ x64)
// Address: 14010c8d0  size: 205 bytes
// Name:    FUN_14010c8d0
// Subsystem: core
//
// Referenced strings (0 in this body, 0 including direct callees):
// Callees: 
//
// Generated decompilation. Formatting follows MiscRef/GTAVSRC conventions;
// identifiers are recovered, not original. See ../../../README.md.

#include "gta6decomp/rage_types.h"


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_14010c8d0(float *param_1)

{
  float fVar1;
  float fVar2;
  float fVar3;
  float fVar4;
  int iVar5;
  longlong lVar6;
  float fVar7;
  undefined8 uVar8;
  float fVar10;
  float fVar11;
  undefined1 auVar9 [16];
  undefined8 uVar12;
  float fVar13;
  undefined1 auVar14 [16];
  undefined1 in_ZMM1 [64];
  undefined1 auVar15 [16];
  float fVar16;
  float fVar17;
  float fVar18;
  
  iVar5 = _DAT_14849c030;
  auVar9._0_4_ = in_ZMM1._0_4_ ^ _DAT_145fc6f10;
  auVar9._4_4_ = in_ZMM1._4_4_ ^ _DAT_145fc6f10;
  auVar9._8_4_ = in_ZMM1._8_4_ ^ _DAT_145fc6f10;
  auVar9._12_4_ = in_ZMM1._12_4_ ^ _DAT_145fc6f10;
  auVar9 = vmaxss_avx(auVar9,in_ZMM1._0_16_);
  uVar8 = _DAT_14615d080;
  uVar12 = _UNK_14615d088;
  if (auVar9._0_4_ <= _DAT_14615a608) {
    uVar8 = _DAT_14615bd00;
    uVar12 = _UNK_14615bd08;
  }
  *(undefined8 *)param_1 = uVar8;
  *(undefined8 *)(param_1 + 2) = uVar12;
  if (iVar5 != 0) {
    lVar6 = func_0x000144e3bfa0(_DAT_14a94d9f0);
    if (iVar5 == 1) {
      uVar8 = *(undefined8 *)(lVar6 + 0xc0);
      uVar12 = *(undefined8 *)(lVar6 + 200);
    }
    else {
      if (iVar5 != 2) {
        if (iVar5 != 3) {
          return;
        }
        auVar15._0_12_ = ZEXT812(0);
        auVar15._12_4_ = 0;
        fVar7 = *(float *)(lVar6 + 0xe0) + *(float *)(lVar6 + 0xc0);
        fVar10 = *(float *)(lVar6 + 0xe4) + *(float *)(lVar6 + 0xc4);
        fVar11 = *(float *)(lVar6 + 0xe8) + *(float *)(lVar6 + 200);
        fVar13 = *(float *)(lVar6 + 0xec) + *(float *)(lVar6 + 0xcc);
        auVar14._0_4_ = fVar7 * fVar7;
        auVar14._4_4_ = fVar10 * fVar10;
        auVar14._8_4_ = fVar11 * fVar11;
        auVar14._12_4_ = fVar13 * fVar13;
        auVar9 = vblendps_avx(auVar14,auVar15,8);
        auVar9 = vhaddps_avx(auVar9,auVar9);
        auVar9 = vhaddps_avx(auVar9,auVar9);
        auVar14 = vrsqrtps_avx(auVar9);
        fVar1 = auVar14._0_4_;
        fVar2 = auVar14._4_4_;
        fVar3 = auVar14._8_4_;
        fVar4 = auVar14._12_4_;
        fVar16 = fVar2 * fVar2 * auVar9._4_4_ * _DAT_145fc6f08 - _DAT_145fc6f08;
        fVar17 = fVar3 * fVar3 * auVar9._8_4_ * _DAT_145fc6f08 - _DAT_145fc6f08;
        fVar18 = fVar4 * fVar4 * auVar9._12_4_ * _DAT_145fc6f08 - _DAT_145fc6f08;
        *param_1 = ((fVar1 * fVar1 * auVar9._0_4_ * _DAT_145fc6f08 - _DAT_145fc6f08) * fVar1 + fVar1
                   ) * fVar7;
        param_1[1] = (fVar16 * fVar2 + fVar2) * fVar10;
        param_1[2] = (fVar17 * fVar3 + fVar3) * fVar11;
        param_1[3] = (fVar18 * fVar4 + fVar4) * fVar13;
        return;
      }
      uVar8 = *(undefined8 *)(lVar6 + 0xe0);
      uVar12 = *(undefined8 *)(lVar6 + 0xe8);
    }
    *(undefined8 *)param_1 = uVar8;
    *(undefined8 *)(param_1 + 2) = uVar12;
  }
  return;
}

