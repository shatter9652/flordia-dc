// Recovered from game_scarlett_master.exe (GTA VI, Xbox Series X, PE32+ x64)
// Address: 140133fe0  size: 446 bytes
// Name:    FUN_140133fe0
// Subsystem: core
//
// Referenced strings (0 in this body, 0 including direct callees):
// Callees: FUN_1450f6d40, FUN_1455a2930
//
// Generated decompilation. Formatting follows MiscRef/GTAVSRC conventions;
// identifiers are recovered, not original. See ../../../README.md.

#include "gta6decomp/rage_types.h"


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_140133fe0(longlong param_1,float *param_2,ulonglong param_3,undefined4 param_4)

{
  undefined4 uVar1;
  longlong lVar2;
  char cVar3;
  ushort uVar4;
  float fVar5;
  float fVar8;
  float fVar9;
  undefined1 auVar6 [16];
  undefined1 auVar7 [16];
  float fVar10;
  undefined1 auVar11 [16];
  undefined1 auVar12 [16];
  undefined1 auVar13 [16];
  undefined1 auVar14 [16];
  undefined1 auVar15 [16];
  undefined1 auVar16 [16];
  undefined1 auVar17 [16];
  float fVar19;
  float fVar20;
  float fVar21;
  float fVar22;
  float fStack_b8;
  float fStack_b4;
  float fStack_b0;
  float fStack_ac;
  float fStack_a8;
  float fStack_a4;
  float fStack_a0;
  float fStack_9c;
  float fStack_98;
  float fStack_94;
  float fStack_90;
  float fStack_8c;
  undefined1 auVar18 [64];
  
  if ((short)(param_3 >> 0x20) != -2 && *(char *)(param_1 + 0x156) == '\x02') {
    uVar1 = *(undefined4 *)(param_1 + 0x14);
    auVar17._4_4_ = uVar1;
    auVar17._0_4_ = uVar1;
    auVar17._8_4_ = uVar1;
    auVar17._12_4_ = uVar1;
    auVar18 = ZEXT1664(auVar17);
    auVar6._0_12_ = ZEXT812(0);
    auVar6._12_4_ = 0;
    auVar6 = vcmpps_avx(auVar17,auVar6,4);
    if ((((SUB161(auVar6 >> 0x1f,0) & 1) != 0 || (SUB161(auVar6 >> 0x3f,0) & 1) != 0) ||
        (SUB161(auVar6 >> 0x5f,0) & 1) != 0) || auVar6[0xf] < '\0') {
      lVar2 = *(longlong *)(*(longlong *)(param_1 + 8) + 0x20);
      cVar3 = func_0x000144ead3a0(*(undefined1 *)(lVar2 + 0x10));
      if (cVar3 != '\0') {
        uVar4 = func_0x0001403dc2f0(param_1,param_3 >> 0x20);
        if (uVar4 != 0xffff) {
          FUN_1450f6d40(&fStack_b8,param_1,param_4);
          fVar19 = fStack_b8;
          fVar20 = fStack_b4;
          fVar21 = fStack_b0;
          fVar22 = fStack_ac;
          FUN_1455a2930(&fStack_b8,(ulonglong)uVar4 * 0x40 + *(longlong *)(lVar2 + 0x80),
                        *(longlong *)(lVar2 + 0x78) + (ulonglong)uVar4 * 0x40);
          auVar7._0_4_ = auVar18._0_4_ * fStack_b8;
          auVar7._4_4_ = auVar18._4_4_ * fStack_b4;
          auVar7._8_4_ = auVar18._8_4_ * fStack_b0;
          auVar7._12_4_ = auVar18._12_4_ * fStack_ac;
          auVar13._0_12_ = ZEXT812(0);
          auVar13._12_4_ = 0;
          auVar11._0_4_ = auVar7._0_4_ * auVar7._0_4_;
          auVar11._4_4_ = auVar7._4_4_ * auVar7._4_4_;
          auVar11._8_4_ = auVar7._8_4_ * auVar7._8_4_;
          auVar11._12_4_ = auVar7._12_4_ * auVar7._12_4_;
          auVar6 = vblendps_avx(auVar11,auVar13,8);
          auVar6 = vhaddps_avx(auVar6,auVar6);
          auVar17 = vhaddps_avx(auVar6,auVar6);
          auVar6 = vrsqrtps_avx(auVar17);
          fVar5 = auVar6._0_4_;
          fVar8 = auVar6._4_4_;
          fVar9 = auVar6._8_4_;
          fVar10 = auVar6._12_4_;
          auVar15._4_4_ = _DAT_146159bfc;
          auVar15._0_4_ = _DAT_146159bfc;
          auVar15._8_4_ = _DAT_146159bfc;
          auVar15._12_4_ = _DAT_146159bfc;
          auVar6 = vcmpps_avx(auVar15,auVar17,2);
          auVar12._0_4_ =
               (float)(auVar6._0_4_ &
                      (uint)(((fVar5 * fVar5 * auVar17._0_4_ * _DAT_145fc6f08 - _DAT_145fc6f08) *
                              fVar5 + fVar5) * auVar17._0_4_));
          auVar12._4_4_ =
               (float)(auVar6._4_4_ &
                      (uint)(((fVar8 * fVar8 * auVar17._4_4_ * _DAT_145fc6f08 - _DAT_145fc6f08) *
                              fVar8 + fVar8) * auVar17._4_4_));
          auVar12._8_4_ =
               (float)(auVar6._8_4_ &
                      (uint)(((fVar9 * fVar9 * auVar17._8_4_ * _DAT_145fc6f08 - _DAT_145fc6f08) *
                              fVar9 + fVar9) * auVar17._8_4_));
          auVar12._12_4_ =
               (float)(auVar6._12_4_ &
                      (uint)(((fVar10 * fVar10 * auVar17._12_4_ * _DAT_145fc6f08 - _DAT_145fc6f08) *
                              fVar10 + fVar10) * auVar17._12_4_));
          auVar6 = vrcpps_avx(auVar12);
          fVar5 = auVar6._0_4_;
          fVar8 = auVar6._4_4_;
          fVar9 = auVar6._8_4_;
          fVar10 = auVar6._12_4_;
          auVar14._4_4_ = _DAT_145fc6f84;
          auVar14._0_4_ = _DAT_145fc6f84;
          auVar14._8_4_ = _DAT_145fc6f84;
          auVar14._12_4_ = _DAT_145fc6f84;
          auVar6 = vcmpps_avx(auVar14,auVar12,1);
          auVar16._0_4_ =
               auVar7._0_4_ * _DAT_145fc6f84 *
               (-((auVar12._0_4_ * fVar5 - _DAT_145fc6ed8) * fVar5) + fVar5);
          auVar16._4_4_ =
               auVar7._4_4_ * _DAT_145fc6f84 *
               (-((auVar12._4_4_ * fVar8 - _DAT_145fc6ed8) * fVar8) + fVar8);
          auVar16._8_4_ =
               auVar7._8_4_ * _DAT_145fc6f84 *
               (-((auVar12._8_4_ * fVar9 - _DAT_145fc6ed8) * fVar9) + fVar9);
          auVar16._12_4_ =
               auVar7._12_4_ * _DAT_145fc6f84 *
               (-((auVar12._12_4_ * fVar10 - _DAT_145fc6ed8) * fVar10) + fVar10);
          auVar6 = vblendvps_avx(auVar7,auVar16,auVar6);
          fVar10 = auVar6._0_4_;
          auVar17 = vshufps_avx(auVar6,auVar6,0x55);
          auVar6 = vshufps_avx(auVar6,auVar6,0xaa);
          fVar5 = fStack_98 * auVar6._0_4_ + fStack_a8 * auVar17._0_4_ + fVar19 * fVar10;
          fVar8 = fStack_94 * auVar6._4_4_ + fStack_a4 * auVar17._4_4_ + fVar20 * fVar10;
          fVar9 = fStack_90 * auVar6._8_4_ + fStack_a0 * auVar17._8_4_ + fVar21 * fVar10;
          fVar10 = fStack_8c * auVar6._12_4_ + fStack_9c * auVar17._12_4_ + fVar22 * fVar10;
          goto LAB_14013416c;
        }
      }
    }
  }
  fVar5 = 0.0;
  fVar8 = 0.0;
  fVar9 = 0.0;
  fVar10 = 0.0;
LAB_14013416c:
  *param_2 = fVar5;
  param_2[1] = fVar8;
  param_2[2] = fVar9;
  param_2[3] = fVar10;
  return;
}

