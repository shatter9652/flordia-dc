// Recovered from game_scarlett_master.exe (GTA VI, Xbox Series X, PE32+ x64)
// Address: 14016afe0  size: 928 bytes
// Name:    FUN_14016afe0
// Subsystem: core
//
// Referenced strings (0 in this body, 0 including direct callees):
// Callees: FUN_14016b380, FUN_144e40a00, FUN_1410ccec0, FUN_14016b3d0, FUN_145362690
//
// Generated decompilation. Formatting follows MiscRef/GTAVSRC conventions;
// identifiers are recovered, not original. See ../../../README.md.

#include "gta6decomp/rage_types.h"


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_14016afe0(longlong *param_1)

{
  int iVar1;
  longlong lVar2;
  longlong lVar3;
  longlong *plVar4;
  float fVar5;
  float fVar6;
  float fVar7;
  float fVar8;
  undefined1 auVar9 [16];
  char cVar10;
  uint uVar11;
  longlong lVar12;
  undefined8 uVar13;
  undefined1 auVar14 [16];
  float fVar15;
  undefined1 auVar16 [16];
  undefined1 auVar17 [16];
  undefined1 auVar18 [16];
  undefined1 auVar19 [64];
  undefined1 auVar20 [16];
  float fVar24;
  float fVar25;
  float fVar26;
  undefined1 auVar22 [16];
  undefined1 auVar23 [64];
  uint uStack_18c;
  float fStack_188;
  float fStack_184;
  float fStack_180;
  float fStack_17c;
  undefined8 uStack_178;
  undefined8 uStack_170;
  undefined8 uStack_168;
  undefined8 uStack_160;
  undefined8 uStack_158;
  undefined8 uStack_150;
  undefined1 auStack_148 [16];
  undefined1 auStack_138 [16];
  undefined1 auStack_128 [16];
  undefined8 uStack_118;
  undefined8 uStack_110;
  undefined1 auStack_108 [16];
  undefined1 auStack_f8 [16];
  float fStack_e8;
  float fStack_e4;
  undefined8 uStack_e0;
  undefined8 uStack_d8;
  int iStack_d0;
  undefined8 uStack_c8;
  undefined8 uStack_c0;
  undefined8 uStack_b8;
  undefined8 uStack_b0;
  undefined8 uStack_a8;
  undefined8 uStack_a0;
  undefined8 uStack_98;
  undefined8 uStack_90;
  undefined4 uStack_88;
  undefined4 uStack_84;
  undefined4 uStack_80;
  undefined4 uStack_7c;
  undefined1 auVar21 [64];
  
  lVar2 = *param_1;
  fVar15 = *(float *)(param_1 + 5);
  lVar3 = param_1[3];
  lVar12 = func_0x000144dd1230(*(undefined4 *)(lVar2 + 0x9c));
  if (lVar12 != 0) {
    if ((((*(float *)(lVar12 + 0x44) != _DAT_145fc6ed8) ||
         (NAN(*(float *)(lVar12 + 0x44)) || NAN(_DAT_145fc6ed8))) &&
        (plVar4 = *(longlong **)((ulonglong)*(byte *)(lVar2 + 0x30) * 8 + 0x14abbe7c0),
        uVar11 = (uint)((ulonglong)(lVar2 - *plVar4) / (ulonglong)*(uint *)(plVar4 + 1)),
        (*(uint *)(*(longlong *)((ulonglong)*(byte *)(lVar2 + 0x30) * 0x10 + 0x14ab75fb0) +
                  (ulonglong)((uVar11 & 0x3fffffff) >> 3) * 4) >> ((uVar11 & 7) << 2) & 1) != 0)) &&
       (((iVar1 = *(int *)(lVar3 + 0x10), iVar1 != 0 &&
         (*(float *)(lVar3 + 0x14) * *(float *)(lVar3 + 0x14) <= fVar15)) &&
        (fVar15 <= *(float *)(lVar3 + 0x18) * *(float *)(lVar3 + 0x18))))) {
      uStack_178 = *(undefined8 *)(lVar2 + 0x40);
      uStack_170 = *(undefined8 *)(lVar2 + 0x48);
      uStack_168 = *(undefined8 *)(lVar2 + 0x50);
      uStack_160 = *(undefined8 *)(lVar2 + 0x58);
      uStack_158 = *(undefined8 *)(lVar2 + 0x60);
      uStack_150 = *(undefined8 *)(lVar2 + 0x68);
      auVar22 = *(undefined1 (*) [16])(lVar2 + 0x70);
      auVar16 = vpunpckhwd_avx(auVar22,auVar22);
      auVar16 = vpsrad_avx(auVar16,0x10);
      auVar16 = vcvtdq2ps_avx(auVar16);
      auVar16 = vshufpd_avx(auVar16,auVar16,3);
      auStack_148._0_4_ = auVar16._0_4_ * _DAT_146159c90 + auVar22._0_4_;
      auStack_148._4_4_ = auVar16._4_4_ * _UNK_146159c94 + auVar22._4_4_;
      auStack_148._8_4_ = auVar16._8_4_ * _UNK_146159c98 + auVar22._8_4_;
      auStack_148._12_4_ = auVar16._12_4_ * _UNK_146159c9c + auVar22._12_4_;
      auVar19 = ZEXT1664(auStack_148);
      auStack_f8 = auStack_148;
      FUN_14016b380(&fStack_188);
      lVar12 = func_0x000144e63d10(*(undefined4 *)(lVar2 + 0x9c));
      if (lVar12 != 0) {
        fVar15 = _DAT_1492e1a70;
        fVar24 = _DAT_1492e1a70;
        fVar25 = _DAT_1492e1a70;
        fVar26 = _DAT_1492e1a70;
        FUN_144e40a00(lVar12,&fStack_e8);
        auVar22._0_4_ = -(fStack_188 * fVar15) + fStack_e8;
        auVar22._4_4_ = -(fStack_184 * fVar24) + fStack_e4;
        auVar22._8_4_ = -(fStack_180 * fVar25) + (float)uStack_e0;
        auVar22._12_4_ = -(fStack_17c * fVar26) + uStack_e0._4_4_;
        auVar20._0_12_ = ZEXT812(0);
        auVar20._12_4_ = 0;
        auVar21 = ZEXT1664(auVar20);
        auVar22 = vblendps_avx(auVar22,auVar20,4);
        auVar16._0_4_ = auVar22._0_4_ * auVar22._0_4_;
        auVar16._4_4_ = auVar22._4_4_ * auVar22._4_4_;
        auVar16._8_4_ = auVar22._8_4_ * auVar22._8_4_;
        auVar16._12_4_ = auVar22._12_4_ * auVar22._12_4_;
        auVar22 = vblendps_avx(auVar16,auVar20,8);
        auVar22 = vhaddps_avx(auVar22,auVar22);
        auVar16 = vhaddps_avx(auVar22,auVar22);
        auVar22 = vrsqrtss_avx(auVar16,auVar16);
        fVar15 = auVar22._0_4_;
        auVar22 = vcmpss_avx(ZEXT416(_DAT_146159bfc),auVar16,2);
        if (*(float *)(lVar3 + 0x1c) <=
            (float)(auVar22._0_4_ &
                   (uint)(((fVar15 * fVar15 * auVar16._0_4_ * _DAT_145fc6f08 + _DAT_145fc6edc) *
                           fVar15 + fVar15) * auVar16._0_4_))) {
          auVar9._8_8_ = uStack_160;
          auVar9._0_8_ = uStack_168;
          auVar22 = vblendps_avx(auVar20,auVar9,0xb);
          auVar23 = ZEXT1664(auVar22);
          auStack_108 = auVar19._0_16_;
          cVar10 = FUN_145362690(auStack_108,&uStack_18c);
          if (cVar10 != '\0') {
            fVar15 = auVar23._0_4_;
            auVar17._0_4_ = fVar15 * fVar15;
            fVar25 = auVar23._4_4_;
            auVar17._4_4_ = fVar25 * fVar25;
            fVar5 = auVar23._8_4_;
            auVar17._8_4_ = fVar5 * fVar5;
            fVar7 = auVar23._12_4_;
            auVar17._12_4_ = fVar7 * fVar7;
            auVar22 = vblendps_avx(auVar17,auVar21._0_16_,8);
            auVar22 = vhaddps_avx(auVar22,auVar22);
            auVar22 = vhaddps_avx(auVar22,auVar22);
            auVar16 = vrsqrtps_avx(auVar22);
            fVar24 = auVar16._0_4_;
            fVar26 = auVar16._4_4_;
            fVar6 = auVar16._8_4_;
            fVar8 = auVar16._12_4_;
            auVar14._0_4_ =
                 fVar15 * ((_DAT_145fc6f08 * fVar24 * fVar24 * auVar22._0_4_ - _DAT_145fc6f08) *
                           fVar24 + fVar24);
            auVar14._4_4_ =
                 fVar25 * ((_DAT_145fc6f08 * fVar26 * fVar26 * auVar22._4_4_ - _DAT_145fc6f08) *
                           fVar26 + fVar26);
            auVar14._8_4_ =
                 fVar5 * ((_DAT_145fc6f08 * fVar6 * fVar6 * auVar22._8_4_ - _DAT_145fc6f08) * fVar6
                         + fVar6);
            auVar14._12_4_ =
                 fVar7 * ((_DAT_145fc6f08 * fVar8 * fVar8 * auVar22._12_4_ - _DAT_145fc6f08) * fVar8
                         + fVar8);
            auVar18._4_4_ = _DAT_145fc6f14;
            auVar18._0_4_ = _DAT_145fc6f14;
            auVar18._8_4_ = _DAT_145fc6f14;
            auVar18._12_4_ = _DAT_145fc6f14;
            auVar22 = vcmpps_avx(auVar18,auVar22,1);
            auStack_138 = vblendvps_avx(ZEXT416((uint)_DAT_145fc6ed8),auVar14,auVar22);
            auStack_128 = vinsertps_avx(auVar19._0_16_,ZEXT416(uStack_18c),0x20);
            uStack_118 = _DAT_14614f7f0;
            uStack_110 = _UNK_14614f7f8;
            FUN_1410ccec0(&uStack_178);
            plVar4 = *(longlong **)((ulonglong)*(byte *)(lVar2 + 0x30) * 8 + 0x14abbe7c0);
            uVar11 = (uint)((ulonglong)(lVar2 - *plVar4) / (ulonglong)*(uint *)(plVar4 + 1)) &
                     0x1ffff;
            fStack_e8 = (float)((*(byte *)(lVar2 + 0x30) & 0x1f) << 0x11 | uVar11 |
                               (*(uint *)(plVar4[5] + (ulonglong)uVar11 * 4) & 0x7fe0000) << 5);
            fStack_e4 = 0.0;
            uStack_e0 = 0;
            uStack_d8 = 2;
            uStack_c8 = uStack_178;
            uStack_c0 = uStack_170;
            uStack_b8 = uStack_168;
            uStack_b0 = uStack_160;
            uStack_a8 = uStack_158;
            uStack_a0 = uStack_150;
            uStack_98 = auStack_148._0_8_;
            uStack_90 = auStack_148._8_8_;
            iStack_d0 = iVar1;
            uVar13 = func_0x000144e8f130();
            uStack_88 = (undefined4)uVar13;
            uStack_84 = func_0x000144e8f130(uVar13,*(undefined4 *)(lVar3 + 0x24),
                                            *(undefined4 *)(lVar3 + 0x28));
            uStack_80 = func_0x000144e8f130(uVar13,*(undefined4 *)(lVar3 + 0x2c),
                                            *(undefined4 *)(lVar3 + 0x30));
            uStack_7c = func_0x000144e8f130(*(undefined4 *)((longlong)param_1 + 0x2c),
                                            *(undefined4 *)(lVar3 + 8),*(undefined4 *)(lVar3 + 0xc))
            ;
            FUN_14016b3d0(&fStack_e8);
          }
        }
      }
    }
  }
  return;
}

