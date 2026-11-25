// Recovered from game_scarlett_master.exe (GTA VI, Xbox Series X, PE32+ x64)
// Address: 1400cf4b0  size: 1212 bytes
// Name:    FUN_1400cf4b0
// Subsystem: core
//
// Referenced strings (0 in this body, 0 including direct callees):
// Callees: FUN_144eb1320, FUN_144e71070, FUN_1402a2b00, FUN_140bb07b0, FUN_14030c4a0, FUN_1400df830
//
// Generated decompilation. Formatting follows MiscRef/GTAVSRC conventions;
// identifiers are recovered, not original. See ../../../README.md.

#include "gta6decomp/rage_types.h"


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1400cf4b0(longlong param_1,longlong param_2)

{
  undefined4 uVar1;
  longlong lVar2;
  bool bVar3;
  char cVar4;
  longlong lVar5;
  longlong lVar6;
  ulonglong uVar7;
  int iVar8;
  undefined1 auVar9 [16];
  undefined1 auVar10 [16];
  float fVar11;
  float fVar14;
  float fVar15;
  undefined1 auVar12 [16];
  float fVar16;
  undefined1 auVar13 [16];
  undefined1 auVar17 [16];
  undefined1 auVar18 [16];
  undefined1 auVar19 [16];
  float fVar20;
  float fVar23;
  float fVar24;
  float fVar25;
  undefined1 auVar21 [16];
  undefined4 uStack_134;
  undefined1 auStack_130 [8];
  undefined1 auStack_128 [16];
  undefined1 auStack_118 [16];
  undefined8 uStack_f8;
  undefined8 uStack_f0;
  undefined1 auStack_e8 [16];
  undefined1 auStack_d8 [16];
  undefined8 uStack_c8;
  undefined8 uStack_c0;
  undefined8 uStack_b8;
  undefined8 uStack_b0;
  undefined8 uStack_a8;
  undefined8 uStack_a0;
  undefined8 uStack_98;
  undefined8 uStack_90;
  undefined1 auStack_88 [16];
  undefined1 auStack_78 [16];
  undefined1 auVar22 [64];
  
  lVar6 = *(longlong *)(*(longlong *)(param_2 + 0x3b30) + 0x10);
  uVar7 = (ulonglong)*(byte *)(lVar6 + 0xc0 + (ulonglong)DAT_14abc3b60);
  if ((uVar7 != 0xff) && (lVar6 = *(longlong *)(lVar6 + 0x10 + uVar7 * 8), lVar6 != 0)) {
    uVar1 = *(undefined4 *)(*(longlong *)(param_1 + 0x2f8) + 0x9c);
    lVar5 = func_0x0001450f21c0(uVar1);
    if (lVar5 == 0) {
      bVar3 = false;
    }
    else {
      cVar4 = func_0x000144ead4e0(*(undefined8 *)(lVar5 + 8),*(undefined8 *)(lVar5 + 0x28));
      if (cVar4 == '\0') {
        bVar3 = 0x30000000 < *(int *)(lVar5 + 0x4ac) * 0x10000000;
      }
      else {
        bVar3 = true;
      }
    }
    cVar4 = FUN_144eb1320(uVar1);
    if (cVar4 == '\0') {
      cVar4 = FUN_144e71070(uVar1);
      if (!bVar3 && cVar4 == '\0') {
        func_0x0001400cf970(&uStack_134,0);
        lVar5 = FUN_14030c4a0(*(undefined8 *)(lVar6 + 0x20),uStack_134);
        fVar20 = 0.0;
        fVar23 = 0.0;
        fVar24 = 0.0;
        fVar25 = 0.0;
        iVar8 = 0;
        if ((lVar5 != 0) &&
           (lVar2 = *(longlong *)(param_1 + 0x188), iVar8 = 0, (*(byte *)(lVar2 + 0x1a4) & 2) != 0))
        {
          func_0x000144e3ba40(*(undefined8 *)(lVar5 + 8),auStack_130);
          FUN_1402a2b00(param_2 + 0x10,auStack_d8,*(undefined4 *)(param_1 + 0x170));
          auVar21 = *(undefined1 (*) [16])(lVar2 + 0xb0);
          uStack_98 = *(undefined8 *)(lVar2 + 0xc0);
          uStack_90 = *(undefined8 *)(lVar2 + 200);
          auVar17 = vpunpckhwd_avx(auVar21,auVar21);
          auVar17 = vpsrad_avx(auVar17,0x10);
          auVar17 = vcvtdq2ps_avx(auVar17);
          auVar17 = vshufpd_avx(auVar17,auVar17,3);
          auStack_e8._0_4_ = auVar17._0_4_ * _DAT_146159c90 + auVar21._0_4_;
          auStack_e8._4_4_ = auVar17._4_4_ * _UNK_146159c94 + auVar21._4_4_;
          auStack_e8._8_4_ = auVar17._8_4_ * _UNK_146159c98 + auVar21._8_4_;
          auStack_e8._12_4_ = auVar17._12_4_ * _UNK_146159c9c + auVar21._12_4_;
          uStack_a8 = _DAT_14614f7f0;
          uStack_a0 = _UNK_14614f7f8;
          FUN_140bb07b0(auStack_128,auStack_e8,&uStack_98,auStack_d8,&uStack_a8);
          uStack_f8 = *(undefined8 *)(lVar2 + 0xc0);
          uStack_f0 = *(undefined8 *)(lVar2 + 200);
          FUN_1400df830(auStack_130);
          fVar20 = *(float *)(lVar2 + 0xc0);
          fVar23 = *(float *)(lVar2 + 0xc4);
          fVar24 = *(float *)(lVar2 + 200);
          fVar25 = *(float *)(lVar2 + 0xcc);
          iVar8 = 1;
        }
        func_0x0001400cf970(&uStack_134,1);
        lVar5 = FUN_14030c4a0(*(undefined8 *)(lVar6 + 0x20),uStack_134);
        if ((lVar5 != 0) &&
           (lVar2 = *(longlong *)(param_1 + 0x188), (*(byte *)(lVar2 + 0x354) & 2) != 0)) {
          func_0x000144e3ba40(*(undefined8 *)(lVar5 + 8),auStack_130);
          FUN_1402a2b00(param_2 + 0x10,auStack_d8,*(undefined4 *)(param_1 + 0x174));
          auVar21 = *(undefined1 (*) [16])(lVar2 + 0x260);
          uStack_b8 = *(undefined8 *)(lVar2 + 0x270);
          uStack_b0 = *(undefined8 *)(lVar2 + 0x278);
          auVar17 = vpunpckhwd_avx(auVar21,auVar21);
          auVar17 = vpsrad_avx(auVar17,0x10);
          auVar17 = vcvtdq2ps_avx(auVar17);
          auVar17 = vshufpd_avx(auVar17,auVar17,3);
          auStack_e8._0_4_ = auVar17._0_4_ * _DAT_146159c90 + auVar21._0_4_;
          auStack_e8._4_4_ = auVar17._4_4_ * _UNK_146159c94 + auVar21._4_4_;
          auStack_e8._8_4_ = auVar17._8_4_ * _UNK_146159c98 + auVar21._8_4_;
          auStack_e8._12_4_ = auVar17._12_4_ * _UNK_146159c9c + auVar21._12_4_;
          uStack_c8 = _DAT_14614f7f0;
          uStack_c0 = _UNK_14614f7f8;
          FUN_140bb07b0(auStack_128,auStack_e8,&uStack_b8,auStack_d8,&uStack_c8);
          uStack_f8 = *(undefined8 *)(lVar2 + 0x270);
          uStack_f0 = *(undefined8 *)(lVar2 + 0x278);
          FUN_1400df830(auStack_130);
          fVar20 = fVar20 + *(float *)(lVar2 + 0x270);
          fVar23 = fVar23 + *(float *)(lVar2 + 0x274);
          fVar24 = fVar24 + *(float *)(lVar2 + 0x278);
          fVar25 = fVar25 + *(float *)(lVar2 + 0x27c);
          iVar8 = iVar8 + 1;
        }
        lVar6 = FUN_14030c4a0(*(undefined8 *)(lVar6 + 0x20),0xecdd5687);
        if (iVar8 != 0 && lVar6 != 0) {
          auVar17._0_4_ = (float)iVar8;
          auVar17._4_4_ = auVar17._0_4_;
          auVar17._8_4_ = auVar17._0_4_;
          auVar17._12_4_ = auVar17._0_4_;
          auVar21 = vrcpps_avx(auVar17);
          fVar11 = auVar21._0_4_;
          fVar14 = auVar21._4_4_;
          fVar15 = auVar21._8_4_;
          fVar16 = auVar21._12_4_;
          auVar21._0_4_ = (-((fVar11 * auVar17._0_4_ - _DAT_145fc6ed8) * fVar11) + fVar11) * fVar20;
          auVar21._4_4_ = (-((fVar14 * auVar17._0_4_ - _DAT_145fc6ed8) * fVar14) + fVar14) * fVar23;
          auVar21._8_4_ = (-((fVar15 * auVar17._0_4_ - _DAT_145fc6ed8) * fVar15) + fVar15) * fVar24;
          auVar21._12_4_ = (-((fVar16 * auVar17._0_4_ - _DAT_145fc6ed8) * fVar16) + fVar16) * fVar25
          ;
          if (iVar8 == 2) {
            auVar17 = *(undefined1 (*) [16])(*(longlong *)(param_1 + 0x188) + 0xb0);
            auVar12 = *(undefined1 (*) [16])(*(longlong *)(param_1 + 0x188) + 0x260);
            auVar9 = vsubps_avx(auVar17,auVar12);
            auStack_118 = vpsubw_avx(auVar17,auVar12);
            auVar17 = vblendps_avx(auVar9,auStack_118,8);
            auVar12 = vpunpckhwd_avx(auVar17,auVar17);
            auVar12 = vpsrad_avx(auVar12,0x10);
            auVar13 = ZEXT816(0) << 0x20;
            auVar12 = vcvtdq2ps_avx(auVar12);
            auVar12 = vshufpd_avx(auVar12,auVar12,3);
            fVar11 = auVar12._0_4_ * _DAT_146159c90 + auVar17._0_4_;
            fVar14 = auVar12._4_4_ * _UNK_146159c94 + auVar17._4_4_;
            fVar15 = auVar12._8_4_ * _UNK_146159c98 + auVar17._8_4_;
            fVar16 = auVar12._12_4_ * _UNK_146159c9c + auVar17._12_4_;
            auVar12._0_4_ = fVar11 * fVar11;
            auVar12._4_4_ = fVar14 * fVar14;
            auVar12._8_4_ = fVar15 * fVar15;
            auVar12._12_4_ = fVar16 * fVar16;
            auVar17 = vblendps_avx(auVar12,auVar13,8);
            auVar17 = vhaddps_avx(auVar17,auVar17);
            auVar12 = vhaddps_avx(auVar17,auVar17);
            auVar17 = vrsqrtps_avx(auVar12);
            fVar20 = auVar17._0_4_;
            fVar23 = auVar17._4_4_;
            fVar24 = auVar17._8_4_;
            fVar25 = auVar17._12_4_;
            auVar17 = vcmpps_avx(auVar13,auVar12,1);
            auVar9._0_4_ = auVar17._0_4_ &
                           (uint)(((_DAT_145fc6f08 * fVar20 * fVar20 * auVar12._0_4_ -
                                   _DAT_145fc6f08) * fVar20 + fVar20) * fVar11);
            auVar9._4_4_ = auVar17._4_4_ &
                           (uint)(((_DAT_145fc6f08 * fVar23 * fVar23 * auVar12._4_4_ -
                                   _DAT_145fc6f08) * fVar23 + fVar23) * fVar14);
            auVar9._8_4_ = auVar17._8_4_ &
                           (uint)(((_DAT_145fc6f08 * fVar24 * fVar24 * auVar12._8_4_ -
                                   _DAT_145fc6f08) * fVar24 + fVar24) * fVar15);
            auVar9._12_4_ =
                 auVar17._12_4_ &
                 (uint)(((_DAT_145fc6f08 * fVar25 * fVar25 * auVar12._12_4_ - _DAT_145fc6f08) *
                         fVar25 + fVar25) * fVar16);
            auVar17 = vshufps_avx(auVar9,auVar9,0xc9);
            auVar12 = vshufps_avx(auVar9,auVar9,0xd2);
            auVar18._0_4_ = auVar12._0_4_ * _DAT_14615bd00 + auVar17._0_4_ * _DAT_145fc6ed8;
            auVar18._4_4_ = auVar12._4_4_ * _UNK_14615bd04 + auVar17._4_4_ * 0.0;
            auVar18._8_4_ = auVar12._8_4_ * _UNK_14615bd08 + auVar17._8_4_ * 0.0;
            auVar18._12_4_ = auVar12._12_4_ * _UNK_14615bd0c + auVar17._12_4_ * 0.0;
            auVar9 = vshufps_avx(auVar18,auVar18,0xc9);
            auVar10 = vshufps_avx(auVar18,auVar18,0xd2);
            fVar11 = -(auVar17._0_4_ * auVar10._0_4_) + auVar9._0_4_ * auVar12._0_4_;
            fVar14 = -(auVar17._4_4_ * auVar10._4_4_) + auVar9._4_4_ * auVar12._4_4_;
            fVar15 = -(auVar17._8_4_ * auVar10._8_4_) + auVar9._8_4_ * auVar12._8_4_;
            fVar16 = -(auVar17._12_4_ * auVar10._12_4_) + auVar9._12_4_ * auVar12._12_4_;
            auVar10._0_4_ = fVar11 * fVar11;
            auVar10._4_4_ = fVar14 * fVar14;
            auVar10._8_4_ = fVar15 * fVar15;
            auVar10._12_4_ = fVar16 * fVar16;
            auVar17 = vblendps_avx(auVar10,auVar13,8);
            auVar17 = vhaddps_avx(auVar17,auVar17);
            auVar17 = vhaddps_avx(auVar17,auVar17);
            auVar12 = vrsqrtps_avx(auVar17);
            fVar20 = auVar12._0_4_;
            fVar23 = auVar12._4_4_;
            fVar24 = auVar12._8_4_;
            fVar25 = auVar12._12_4_;
            auVar13._0_4_ =
                 fVar11 * ((_DAT_145fc6f08 * fVar20 * fVar20 * auVar17._0_4_ - _DAT_145fc6f08) *
                           fVar20 + fVar20);
            auVar13._4_4_ =
                 fVar14 * ((_DAT_145fc6f08 * fVar23 * fVar23 * auVar17._4_4_ - _DAT_145fc6f08) *
                           fVar23 + fVar23);
            auVar13._8_4_ =
                 fVar15 * ((_DAT_145fc6f08 * fVar24 * fVar24 * auVar17._8_4_ - _DAT_145fc6f08) *
                           fVar24 + fVar24);
            auVar13._12_4_ =
                 fVar16 * ((_DAT_145fc6f08 * fVar25 * fVar25 * auVar17._12_4_ - _DAT_145fc6f08) *
                           fVar25 + fVar25);
            auVar19._4_4_ = _DAT_145fc6f00;
            auVar19._0_4_ = _DAT_145fc6f00;
            auVar19._8_4_ = _DAT_145fc6f00;
            auVar19._12_4_ = _DAT_145fc6f00;
            auVar17 = vcmpps_avx(auVar19,auVar17,1);
            auVar17 = vblendvps_avx(ZEXT416((uint)_DAT_145fc6ed8),auVar13,auVar17);
            auVar12 = vcmpps_avx(auVar21,auVar17,1);
            auVar12 = vshufps_avx(auVar12,auVar12,0xaa);
            auVar21 = vblendvps_avx(auVar21,auVar17,auVar12);
          }
          auVar22 = ZEXT1664(auVar21);
          func_0x000144e3ba40(*(undefined8 *)(lVar6 + 8),auStack_128);
          auStack_88._4_4_ = _DAT_145fc6f50;
          auStack_88._0_4_ = _DAT_145fc6f50;
          auStack_88._8_4_ = _DAT_145fc6f50;
          auStack_88._12_4_ = _DAT_145fc6f50;
          auStack_78 = auVar22._0_16_;
          FUN_1400df830(auStack_128);
        }
      }
    }
  }
  return;
}

