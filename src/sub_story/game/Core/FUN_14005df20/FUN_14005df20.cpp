// Recovered from game_scarlett_master.exe (GTA VI, Xbox Series X, PE32+ x64)
// Address: 14005df20  size: 1533 bytes
// Name:    FUN_14005df20
// Subsystem: core
//
// Referenced strings (0 in this body, 0 including direct callees):
// Callees: FUN_144e9c050, FUN_144e9cad0, FUN_14005f8f0
//
// Generated decompilation. Formatting follows MiscRef/GTAVSRC conventions;
// identifiers are recovered, not original. See ../../../README.md.

#include "gta6decomp/rage_types.h"


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

longlong FUN_14005df20(longlong param_1,ulonglong *param_2,float param_3,float *param_4,
                      undefined8 param_5,char param_6,undefined4 param_7,undefined4 param_8,
                      undefined8 param_9,undefined1 (*param_10) [16],undefined8 param_11,
                      undefined8 param_12,undefined8 param_13)

{
  ushort uVar1;
  longlong lVar2;
  longlong lVar3;
  longlong lVar4;
  float *pfVar5;
  undefined1 auVar6 [16];
  float fVar7;
  ulonglong uVar8;
  uint uVar9;
  uint uVar10;
  uint uVar11;
  longlong lVar12;
  float fVar13;
  undefined1 auVar14 [16];
  undefined1 auVar15 [16];
  undefined1 auVar16 [16];
  undefined1 auVar17 [16];
  undefined1 auVar18 [16];
  undefined1 auVar19 [16];
  undefined1 auVar20 [16];
  undefined1 auVar21 [16];
  undefined1 auVar22 [16];
  undefined1 auVar23 [16];
  undefined1 auVar25 [64];
  undefined8 uStack_628;
  short sStack_620;
  short sStack_61e;
  ulonglong uStack_618;
  ulonglong uStack_610;
  undefined1 auStack_608 [16];
  undefined1 auStack_5f8 [16];
  undefined1 auStack_5e8 [16];
  undefined8 uStack_5d8;
  float fStack_5d0;
  undefined4 uStack_5cc;
  undefined8 uStack_5c8;
  float fStack_5c0;
  undefined4 uStack_5bc;
  ulonglong uStack_5b8;
  ulonglong uStack_5b0;
  undefined1 auStack_5a8 [16];
  undefined8 uStack_498;
  undefined4 uStack_78;
  float fStack_74;
  undefined8 uStack_70;
  undefined1 auStack_68 [16];
  undefined1 uStack_58;
  undefined8 uStack_50;
  undefined1 auVar24 [64];
  
  auStack_5e8._12_4_ = 0;
  auStack_5e8._0_12_ = ZEXT812(0);
  uStack_498 = 0x41;
  auVar21._4_4_ = param_3;
  auVar21._0_4_ = param_3;
  auVar21._8_4_ = param_3;
  auVar21._12_4_ = param_3;
  auStack_5a8 = (undefined1  [16])0x0;
  vmovlps_avx(ZEXT416(_DAT_145fc6f50));
  uStack_58 = 0;
  auVar18._8_8_ = 0;
  auVar18._0_8_ = *param_2;
  auVar18 = vshufps_avx(auVar18,auVar18,0x50);
  fVar7 = *(float *)(param_2 + 1) - param_3;
  fVar13 = *(float *)(param_2 + 1) + param_3;
  auVar21 = vsubps_avx(auVar18,auVar21);
  auVar19._0_4_ = auVar18._0_4_ + param_3;
  auVar19._4_4_ = auVar18._4_4_ + param_3;
  auVar19._8_4_ = auVar18._8_4_ + param_3;
  auVar19._12_4_ = auVar18._12_4_ + param_3;
  auVar14 = vmaxss_avx(ZEXT416((uint)(fVar7 + _DAT_145fc6f48)),ZEXT416(_DAT_14615e500));
  auVar18 = vblendps_avx(auVar21,auVar19,10);
  auVar21 = vshufps_avx(auVar21,auVar21,0x28);
  auVar6 = vinsertps_avx(auVar21,ZEXT416((uint)fVar7),0x20);
  auVar21 = vshufps_avx(auVar19,auVar19,0x6d);
  auVar20._8_8_ = _DAT_14615e508;
  auVar20._0_8_ = _DAT_14615e508;
  auVar21 = vinsertps_avx(auVar21,ZEXT416((uint)fVar13),0x20);
  uStack_5bc = auVar21._12_4_;
  auVar16._0_4_ = auVar18._0_4_ + _DAT_14615e460;
  auVar16._4_4_ = auVar18._4_4_ + _UNK_14615e464;
  auVar16._8_4_ = auVar18._8_4_ + _UNK_14615e468;
  auVar16._12_4_ = auVar18._12_4_ + _UNK_14615e46c;
  auVar19 = vminss_avx(ZEXT416((uint)(fVar13 + _DAT_145fc6ed8)),ZEXT416(_DAT_14615b954));
  auVar18 = vcmpps_avx(auVar20,auVar16,1);
  auVar21 = vcmpps_avx(auVar16,auVar20,1);
  auVar18 = vblendps_avx(auVar18,auVar21,10);
  auVar18 = vblendvps_avx(auVar20,auVar16,auVar18);
  auVar21 = vshufps_avx(auVar18,auVar18,0xe8);
  auVar16 = vshufps_avx(auVar18,auVar18,0xed);
  uStack_5d8 = vmovlps_avx(auVar21);
  uStack_5cc = auVar6._12_4_;
  fStack_5d0 = auVar14._0_4_;
  uStack_5c8 = vmovlps_avx(auVar16);
  fStack_5c0 = auVar19._0_4_;
  if (param_10 != (undefined1 (*) [16])0x0) {
    auStack_5e8 = *param_10;
  }
  auVar16 = vroundss_avx(auVar14,auVar14,10);
  auVar21 = vroundps_avx(auVar18,10);
  auVar19 = vroundss_avx(auVar19,auVar19,10);
  auVar22._0_4_ = (int)auVar21._0_4_;
  auVar22._4_4_ = (int)auVar21._4_4_;
  auVar22._8_4_ = (int)auVar21._8_4_;
  auVar22._12_4_ = (int)auVar21._12_4_;
  auVar21 = vcvtdq2ps_avx(auVar22);
  auVar6 = vpackssdw_avx(auVar22,auVar22);
  sStack_620 = (short)(int)auVar16._0_4_;
  uStack_628 = auVar6._0_8_;
  sStack_61e = (short)(int)auVar19._0_4_;
  if (auVar18._0_4_ < auVar21._0_4_) {
    uStack_628 = CONCAT62(auVar6._2_6_,(short)auVar22._0_4_ + -1);
  }
  auVar21 = vshufpd_avx(auVar18,auVar18,1);
  if (auVar21._0_4_ < (float)(int)auVar6._4_2_) {
    uStack_628._0_6_ = CONCAT24(auVar6._4_2_ + -1,(undefined4)uStack_628);
  }
  if (auVar14._0_4_ < (float)(int)sStack_620) {
    sStack_620 = sStack_620 + -1;
  }
  auVar21 = vmovshdup_avx(auVar18);
  if ((float)(int)auVar6._2_2_ < auVar21._0_4_) {
    uStack_628._0_4_ = CONCAT22(auVar6._2_2_ + 1,(undefined2)uStack_628);
  }
  auVar18 = vshufps_avx(auVar18,auVar18,0xff);
  if ((float)(int)auVar6._6_2_ < auVar18._0_4_) {
    uStack_628 = CONCAT26(auVar6._6_2_ + 1,(undefined6)uStack_628);
  }
  if ((float)(int)sStack_61e < fStack_5c0) {
    sStack_61e = sStack_61e + 1;
  }
  uStack_5b8 = *param_2;
  uStack_5b0 = param_2[1];
  _uStack_78 = CONCAT44(param_3 * param_3,0x7f7fffff);
  uStack_70 = 0xffff0000ffff;
  auVar6._4_8_ = param_9;
  auVar6._0_4_ = param_8;
  auVar6._12_4_ = 0;
  auStack_68 = auVar6 << 0x20;
  uStack_50 = param_11;
  if (((*(byte *)(param_1 + 0x10) & 4) == 0) && (4 < *(int *)(param_1 + 200) + 6U)) {
    FUN_144e9c050(param_1,&uStack_628,*(undefined8 *)(param_1 + 0xa0),param_5,param_7,auStack_5e8,
                  param_12,param_13);
  }
  else {
    FUN_14005f8f0(param_1,&uStack_628,param_5,param_7,auStack_5e8,param_12,param_13);
  }
  if ((uint)uStack_70 == 0xffff) {
    lVar12 = 0;
  }
  else {
    lVar12 = (ulonglong)((uint)uStack_70 % 0x174) * 0x2c +
             *(longlong *)
              (*(longlong *)(*(longlong *)(param_1 + 0x98) + 0x10) +
              (ulonglong)((uint)uStack_70 / 0x174 << 4));
    if (param_6 == '\0') {
      uVar9 = *(uint *)(lVar12 + 4) >> 4 & 0xfffff;
      uVar10 = (auStack_68._0_4_ + 1) % (*(uint *)(lVar12 + 4) & 0xf);
      lVar2 = *(longlong *)(*(longlong *)(param_1 + 0x80) + 0x10);
      uVar1 = *(ushort *)
               (*(longlong *)(lVar2 + (ulonglong)((auStack_68._0_4_ + uVar9 >> 0xd) << 4)) +
               (ulonglong)(auStack_68._0_4_ + uVar9 & 0x1fff) * 2);
      if ((*(byte *)(param_1 + 0x10) & 1) == 0) {
        uVar9 = uVar9 + uVar10;
        auVar24 = ZEXT1664(*(undefined1 (*) [16])
                            (*(longlong *)(param_1 + 0x78) + (ulonglong)uVar1 * 0x10));
        auVar14 = *(undefined1 (*) [16])
                   (*(longlong *)(param_1 + 0x78) +
                   (ulonglong)
                   *(ushort *)
                    (*(longlong *)(lVar2 + (ulonglong)((uVar9 >> 0xd) << 4)) +
                    (ulonglong)(uVar9 & 0x1fff) * 2) * 0x10);
      }
      else {
        lVar3 = *(longlong *)(*(longlong *)(param_1 + 0x70) + 0x10);
        uVar11 = (uVar1 >> 1) / 0x555;
        lVar4 = *(longlong *)(lVar3 + (ulonglong)(uVar11 << 4));
        if (lVar4 == 0) {
          auVar23 = *(undefined1 (*) [16])(*(longlong *)(param_1 + 0x78) + (ulonglong)uVar1 * 0x10);
        }
        else {
          uVar8 = (ulonglong)((uint)uVar1 + uVar11 * -0xaaa);
          auVar18 = vpinsrw_avx(ZEXT416(*(uint *)(lVar4 + uVar8 * 6)),
                                (uint)*(ushort *)(lVar4 + 4 + uVar8 * 6),2);
          pfVar5 = *(float **)(param_1 + 0xe0);
          auVar18 = vpshufb_avx(auVar18,_DAT_14615d060);
          auVar18 = vcvtdq2ps_avx(auVar18);
          auVar23._0_4_ = auVar18._0_4_ * _DAT_14615ca94 * *(float *)(param_1 + 0x60) + *pfVar5;
          auVar23._4_4_ = auVar18._4_4_ * _DAT_14615ca94 * *(float *)(param_1 + 100) + pfVar5[1];
          auVar23._8_4_ = auVar18._8_4_ * _DAT_14615ca94 * *(float *)(param_1 + 0x68) + pfVar5[2];
          auVar23._12_4_ = auVar18._12_4_ * _DAT_14615ca94 * *(float *)(param_1 + 0x6c) + pfVar5[3];
        }
        auVar24 = ZEXT1664(auVar23);
        uVar9 = uVar9 + uVar10;
        uVar1 = *(ushort *)
                 (*(longlong *)(lVar2 + (ulonglong)((uVar9 >> 0xd) << 4)) +
                 (ulonglong)(uVar9 & 0x1fff) * 2);
        uVar9 = (uVar1 >> 1) / 0x555;
        lVar2 = *(longlong *)(lVar3 + (ulonglong)(uVar9 << 4));
        if (lVar2 == 0) {
          auVar14 = *(undefined1 (*) [16])(*(longlong *)(param_1 + 0x78) + (ulonglong)uVar1 * 0x10);
        }
        else {
          uVar8 = (ulonglong)((uint)uVar1 + uVar9 * -0xaaa);
          auVar18 = vpinsrw_avx(ZEXT416(*(uint *)(lVar2 + uVar8 * 6)),
                                (uint)*(ushort *)(lVar2 + 4 + uVar8 * 6),2);
          pfVar5 = *(float **)(param_1 + 0xe0);
          auVar18 = vpshufb_avx(auVar18,_DAT_14615d060);
          auVar18 = vcvtdq2ps_avx(auVar18);
          auVar14._0_4_ = auVar18._0_4_ * _DAT_14615ca94 * *(float *)(param_1 + 0x60) + *pfVar5;
          auVar14._4_4_ = auVar18._4_4_ * _DAT_14615ca94 * *(float *)(param_1 + 100) + pfVar5[1];
          auVar14._8_4_ = auVar18._8_4_ * _DAT_14615ca94 * *(float *)(param_1 + 0x68) + pfVar5[2];
          auVar14._12_4_ = auVar18._12_4_ * _DAT_14615ca94 * *(float *)(param_1 + 0x6c) + pfVar5[3];
        }
      }
      auStack_608 = auVar24._0_16_;
      auStack_5f8 = vsubps_avx(auVar14,auStack_608);
      auVar25 = ZEXT1664(auStack_5f8);
      auVar17._0_12_ = ZEXT812(0);
      auVar17._12_4_ = 0;
      auVar15._0_4_ = auStack_5f8._0_4_ * auStack_5f8._0_4_;
      auVar15._4_4_ = auStack_5f8._4_4_ * auStack_5f8._4_4_;
      auVar15._8_4_ = auStack_5f8._8_4_ * auStack_5f8._8_4_;
      auVar15._12_4_ = auStack_5f8._12_4_ * auStack_5f8._12_4_;
      auVar18 = vblendps_avx(auVar15,auVar17,8);
      auVar18 = vhaddps_avx(auVar18,auVar18);
      auVar18 = vhaddps_avx(auVar18,auVar18);
      if (auVar18._0_4_ <= _DAT_145fc6f00) {
        fVar13 = 0.0;
      }
      else {
        uStack_618 = *param_2;
        uStack_610 = param_2[1];
        fVar13 = (float)FUN_144e9cad0();
        auStack_5f8 = auVar25._0_16_;
        auStack_608 = auVar24._0_16_;
      }
      *param_4 = fVar13 * auStack_5f8._0_4_ + auStack_608._0_4_;
      param_4[1] = fVar13 * auStack_5f8._4_4_ + auStack_608._4_4_;
      param_4[2] = fVar13 * auStack_5f8._8_4_ + auStack_608._8_4_;
      param_4[3] = fVar13 * auStack_5f8._12_4_ + auStack_608._12_4_;
    }
    else {
      func_0x000144e9fea0(param_1,lVar12,param_4);
    }
  }
  return lVar12;
}

