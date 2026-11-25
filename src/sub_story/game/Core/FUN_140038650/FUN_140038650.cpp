// Recovered from game_scarlett_master.exe (GTA VI, Xbox Series X, PE32+ x64)
// Address: 140038650  size: 711 bytes
// Name:    FUN_140038650
// Subsystem: core
//
// Referenced strings (0 in this body, 0 including direct callees):
// Callees: FUN_1450f6d40
//
// Generated decompilation. Formatting follows MiscRef/GTAVSRC conventions;
// identifiers are recovered, not original. See ../../../README.md.

#include "gta6decomp/rage_types.h"


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_140038650(longlong param_1,undefined1 (*param_2) [16],ulonglong param_3,float *param_4,
                  undefined4 param_5)

{
  float *pfVar1;
  float *pfVar2;
  float *pfVar3;
  float *pfVar4;
  undefined4 uVar5;
  longlong lVar6;
  longlong lVar7;
  char cVar8;
  ushort uVar9;
  longlong lVar10;
  float fVar11;
  undefined1 auVar12 [16];
  undefined1 auVar13 [16];
  undefined1 auVar14 [16];
  undefined1 auVar15 [16];
  undefined1 auVar16 [16];
  float fVar19;
  float fVar20;
  undefined1 auVar17 [16];
  float fVar21;
  undefined1 auVar18 [16];
  undefined1 auVar22 [16];
  undefined1 auVar23 [16];
  undefined1 auVar24 [16];
  undefined1 auVar26 [16];
  undefined1 auVar27 [64];
  undefined1 auStack_c8 [16];
  undefined1 auStack_b8 [16];
  undefined1 auStack_a8 [16];
  undefined1 auStack_98 [16];
  undefined1 auVar25 [64];
  
  auVar13._0_12_ = ZEXT812(0);
  auVar13._12_4_ = 0.0;
  auVar27 = ZEXT1664(auVar13);
  if ((short)(param_3 >> 0x20) != -2 && *(char *)(param_1 + 0x156) == '\x02') {
    uVar5 = *(undefined4 *)(param_1 + 0x14);
    auVar22._4_4_ = uVar5;
    auVar22._0_4_ = uVar5;
    auVar22._8_4_ = uVar5;
    auVar22._12_4_ = uVar5;
    auVar25 = ZEXT1664(auVar22);
    auVar22 = vcmpps_avx(auVar22,auVar13,4);
    if ((((SUB161(auVar22 >> 0x1f,0) & 1) != 0 || (SUB161(auVar22 >> 0x3f,0) & 1) != 0) ||
        (SUB161(auVar22 >> 0x5f,0) & 1) != 0) || auVar22[0xf] < '\0') {
      lVar6 = *(longlong *)(*(longlong *)(param_1 + 8) + 0x20);
      cVar8 = func_0x000144ead3a0(*(undefined1 *)(lVar6 + 0x10));
      auVar13 = auVar27._0_16_;
      if (cVar8 != '\0') {
        uVar9 = func_0x0001403dc2f0(param_1,param_3 >> 0x20);
        auVar13 = auVar27._0_16_;
        if ((uVar9 != 0xffff) && (*(longlong *)(lVar6 + 0x78) != *(longlong *)(lVar6 + 0x80))) {
          FUN_1450f6d40(auStack_c8,param_1,param_5);
          lVar7 = *(longlong *)(lVar6 + 0x78);
          lVar6 = *(longlong *)(lVar6 + 0x80);
          lVar10 = (ulonglong)uVar9 * 0x40;
          auVar13 = vpunpckhwd_avx(auStack_98,auStack_98);
          auVar12 = vpunpckldq_avx(auStack_c8,auStack_a8);
          auVar22 = vpunpckhdq_avx(auStack_c8,auStack_a8);
          auVar13 = vpsrad_avx(auVar13,0x10);
          auVar13 = vcvtdq2ps_avx(auVar13);
          auVar15 = vshufpd_avx(auVar13,auVar13,3);
          auVar13 = vpunpckhdq_avx(auStack_b8,(undefined1  [16])0x0);
          auVar16 = vpunpckldq_avx(auStack_b8,(undefined1  [16])0x0);
          auVar17 = vpunpckldq_avx(auVar22,auVar13);
          auVar18 = vpunpckldq_avx(auVar12,auVar16);
          auVar22 = vpunpckhdq_avx(auVar12,auVar16);
          auVar14._0_4_ = (-(auVar15._0_4_ * _DAT_146159c90) - auStack_98._0_4_) + *param_4;
          auVar14._4_4_ = (-(auVar15._4_4_ * _UNK_146159c94) - auStack_98._4_4_) + param_4[1];
          auVar14._8_4_ = (-(auVar15._8_4_ * _UNK_146159c98) - auStack_98._8_4_) + param_4[2];
          auVar14._12_4_ = (-(auVar15._12_4_ * _UNK_146159c9c) - auStack_98._12_4_) + param_4[3];
          auVar12 = vshufps_avx(auVar14,auVar14,0x55);
          auVar16 = vshufps_avx(auVar14,auVar14,0xaa);
          auVar13 = *(undefined1 (*) [16])(lVar7 + 0x10 + lVar10);
          auVar15._0_4_ =
               auVar17._0_4_ * auVar16._0_4_ +
               auVar22._0_4_ * auVar12._0_4_ + auVar18._0_4_ * auVar14._0_4_;
          auVar15._4_4_ =
               auVar17._4_4_ * auVar16._4_4_ +
               auVar22._4_4_ * auVar12._4_4_ + auVar18._4_4_ * auVar14._0_4_;
          auVar15._8_4_ =
               auVar17._8_4_ * auVar16._8_4_ +
               auVar22._8_4_ * auVar12._8_4_ + auVar18._8_4_ * auVar14._0_4_;
          auVar15._12_4_ =
               auVar17._12_4_ * auVar16._12_4_ +
               auVar22._12_4_ * auVar12._12_4_ + auVar18._12_4_ * auVar14._0_4_;
          auVar18 = vsubps_avx(auVar15,*(undefined1 (*) [16])(lVar7 + 0x30 + lVar10));
          auVar22 = *(undefined1 (*) [16])(lVar7 + 0x20 + lVar10);
          auVar12 = vpunpckldq_avx(auVar13,(undefined1  [16])0x0);
          auVar13 = vpunpckhdq_avx(auVar13,(undefined1  [16])0x0);
          auVar16 = vpunpckldq_avx(*(undefined1 (*) [16])(lVar7 + lVar10),auVar22);
          auVar22 = vpunpckhdq_avx(*(undefined1 (*) [16])(lVar7 + lVar10),auVar22);
          auVar22 = vpunpckldq_avx(auVar22,auVar13);
          auVar17 = vpunpckldq_avx(auVar16,auVar12);
          auVar13 = vpunpckhdq_avx(auVar16,auVar12);
          fVar11 = auVar18._0_4_;
          auVar12 = vshufps_avx(auVar18,auVar18,0x55);
          auVar16 = vshufps_avx(auVar18,auVar18,0xaa);
          auVar26._0_4_ =
               auVar22._0_4_ * auVar16._0_4_ +
               auVar13._0_4_ * auVar12._0_4_ + fVar11 * auVar17._0_4_;
          auVar26._4_4_ =
               auVar22._4_4_ * auVar16._4_4_ +
               auVar13._4_4_ * auVar12._4_4_ + fVar11 * auVar17._4_4_;
          auVar26._8_4_ =
               auVar22._8_4_ * auVar16._8_4_ +
               auVar13._8_4_ * auVar12._8_4_ + fVar11 * auVar17._8_4_;
          auVar26._12_4_ =
               auVar22._12_4_ * auVar16._12_4_ +
               auVar13._12_4_ * auVar12._12_4_ + fVar11 * auVar17._12_4_;
          pfVar1 = (float *)(lVar6 + lVar10);
          pfVar2 = (float *)(lVar6 + 0x30 + lVar10);
          auVar13 = vshufps_avx(auVar26,auVar26,0x55);
          auVar22 = vshufps_avx(auVar26,auVar26,0xaa);
          pfVar3 = (float *)(lVar6 + 0x10 + lVar10);
          pfVar4 = (float *)(lVar6 + 0x20 + lVar10);
          auVar16._0_4_ =
               ((-(auVar22._0_4_ * *pfVar4) -
                (auVar13._0_4_ * *pfVar3 + *pfVar1 * auVar26._0_4_ + *pfVar2)) + auVar15._0_4_) *
               auVar25._0_4_;
          auVar16._4_4_ =
               ((-(auVar22._4_4_ * pfVar4[1]) -
                (auVar13._4_4_ * pfVar3[1] + pfVar1[1] * auVar26._0_4_ + pfVar2[1])) + auVar15._4_4_
               ) * auVar25._4_4_;
          auVar16._8_4_ =
               ((-(auVar22._8_4_ * pfVar4[2]) -
                (auVar13._8_4_ * pfVar3[2] + pfVar1[2] * auVar26._0_4_ + pfVar2[2])) + auVar15._8_4_
               ) * auVar25._8_4_;
          auVar16._12_4_ =
               ((-(auVar22._12_4_ * pfVar4[3]) -
                (auVar13._12_4_ * pfVar3[3] + pfVar1[3] * auVar26._0_4_ + pfVar2[3])) +
               auVar15._12_4_) * auVar25._12_4_;
          auVar17._0_4_ = auVar16._0_4_ * auVar16._0_4_;
          auVar17._4_4_ = auVar16._4_4_ * auVar16._4_4_;
          auVar17._8_4_ = auVar16._8_4_ * auVar16._8_4_;
          auVar17._12_4_ = auVar16._12_4_ * auVar16._12_4_;
          auVar13 = vblendps_avx(auVar17,(undefined1  [16])0x0,8);
          auVar13 = vhaddps_avx(auVar13,auVar13);
          auVar22 = vhaddps_avx(auVar13,auVar13);
          auVar13 = vrsqrtps_avx(auVar22);
          fVar11 = auVar13._0_4_;
          fVar19 = auVar13._4_4_;
          fVar20 = auVar13._8_4_;
          fVar21 = auVar13._12_4_;
          auVar23._4_4_ = _DAT_146159bfc;
          auVar23._0_4_ = _DAT_146159bfc;
          auVar23._8_4_ = _DAT_146159bfc;
          auVar23._12_4_ = _DAT_146159bfc;
          auVar13 = vcmpps_avx(auVar23,auVar22,2);
          auVar12._0_4_ =
               (float)(auVar13._0_4_ &
                      (uint)(((fVar11 * fVar11 * auVar22._0_4_ * _DAT_145fc6f08 - _DAT_145fc6f08) *
                              fVar11 + fVar11) * auVar22._0_4_));
          auVar12._4_4_ =
               (float)(auVar13._4_4_ &
                      (uint)(((fVar19 * fVar19 * auVar22._4_4_ * _DAT_145fc6f08 - _DAT_145fc6f08) *
                              fVar19 + fVar19) * auVar22._4_4_));
          auVar12._8_4_ =
               (float)(auVar13._8_4_ &
                      (uint)(((fVar20 * fVar20 * auVar22._8_4_ * _DAT_145fc6f08 - _DAT_145fc6f08) *
                              fVar20 + fVar20) * auVar22._8_4_));
          auVar12._12_4_ =
               (float)(auVar13._12_4_ &
                      (uint)(((fVar21 * fVar21 * auVar22._12_4_ * _DAT_145fc6f08 - _DAT_145fc6f08) *
                              fVar21 + fVar21) * auVar22._12_4_));
          auVar13 = vrcpps_avx(auVar12);
          fVar11 = auVar13._0_4_;
          fVar19 = auVar13._4_4_;
          fVar20 = auVar13._8_4_;
          fVar21 = auVar13._12_4_;
          auVar18._4_4_ = _DAT_14615b35c;
          auVar18._0_4_ = _DAT_14615b35c;
          auVar18._8_4_ = _DAT_14615b35c;
          auVar18._12_4_ = _DAT_14615b35c;
          auVar13 = vcmpps_avx(auVar18,auVar12,1);
          auVar24._0_4_ =
               auVar16._0_4_ * _DAT_14615b35c *
               (-((auVar12._0_4_ * fVar11 - _DAT_145fc6ed8) * fVar11) + fVar11);
          auVar24._4_4_ =
               auVar16._4_4_ * _DAT_14615b35c *
               (-((auVar12._4_4_ * fVar19 - _DAT_145fc6ed8) * fVar19) + fVar19);
          auVar24._8_4_ =
               auVar16._8_4_ * _DAT_14615b35c *
               (-((auVar12._8_4_ * fVar20 - _DAT_145fc6ed8) * fVar20) + fVar20);
          auVar24._12_4_ =
               auVar16._12_4_ * _DAT_14615b35c *
               (-((auVar12._12_4_ * fVar21 - _DAT_145fc6ed8) * fVar21) + fVar21);
          auVar13 = vblendvps_avx(auVar16,auVar24,auVar13);
          fVar11 = auVar13._0_4_;
          auVar22 = vshufps_avx(auVar13,auVar13,0x55);
          auVar12 = vshufps_avx(auVar13,auVar13,0xaa);
          auVar13._0_4_ =
               auStack_a8._0_4_ * auVar12._0_4_ +
               auStack_b8._0_4_ * auVar22._0_4_ + fVar11 * auStack_c8._0_4_;
          auVar13._4_4_ =
               auStack_a8._4_4_ * auVar12._4_4_ +
               auStack_b8._4_4_ * auVar22._4_4_ + fVar11 * auStack_c8._4_4_;
          auVar13._8_4_ =
               auStack_a8._8_4_ * auVar12._8_4_ +
               auStack_b8._8_4_ * auVar22._8_4_ + fVar11 * auStack_c8._8_4_;
          auVar13._12_4_ =
               auStack_a8._12_4_ * auVar12._12_4_ +
               auStack_b8._12_4_ * auVar22._12_4_ + fVar11 * auStack_c8._12_4_;
        }
      }
    }
  }
  *param_2 = auVar13;
  return;
}

