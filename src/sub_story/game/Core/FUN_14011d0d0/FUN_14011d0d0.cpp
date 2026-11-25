// Recovered from game_scarlett_master.exe (GTA VI, Xbox Series X, PE32+ x64)
// Address: 14011d0d0  size: 1099 bytes
// Name:    FUN_14011d0d0
// Subsystem: core
//
// Referenced strings (0 in this body, 0 including direct callees):
// Callees: FUN_140047dc0, FUN_144f4f860, FUN_145025fb0, FUN_1400746e0
//
// Generated decompilation. Formatting follows MiscRef/GTAVSRC conventions;
// identifiers are recovered, not original. See ../../../README.md.

#include "gta6decomp/rage_types.h"


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

int FUN_14011d0d0(undefined1 (*param_1) [16],longlong *param_2,undefined4 param_3,char param_4,
                 char param_5)

{
  undefined1 auVar1 [16];
  float fVar2;
  longlong lVar3;
  longlong lVar4;
  int iVar5;
  longlong *plVar6;
  float fVar7;
  float fVar8;
  float fVar9;
  float fVar10;
  float fVar11;
  float fVar12;
  float fVar13;
  float fVar15;
  float fVar16;
  float fVar17;
  float fVar18;
  undefined1 auVar14 [16];
  float fVar19;
  float fVar20;
  float fVar21;
  float fVar22;
  float fVar23;
  float fVar24;
  float fVar25;
  float fVar26;
  float fVar27;
  float fVar28;
  undefined1 auVar29 [16];
  float fVar32;
  float fVar33;
  float fVar34;
  undefined1 auVar30 [16];
  undefined1 auVar31 [16];
  float fStack_c8;
  float fStack_c4;
  float fStack_c0;
  float fStack_b8;
  float fStack_b4;
  float fStack_b0;
  float fStack_a8;
  float fStack_a4;
  float fStack_a0;
  float fStack_98;
  float fStack_94;
  float fStack_90;
  int aiStack_7c [19];
  
  if (((0x1cU >> (*(uint *)(param_2 + 6) & 0x1f) & 1) == 0) ||
     (lVar3 = (**(code **)(*param_2 + 0xa8))(param_2), lVar3 == 0)) {
    lVar3 = (**(code **)(*param_2 + 0x290))(param_2);
    if (lVar3 == 0) {
      if (param_4 == '\0') {
        fVar2 = *(float *)(param_2 + 8);
        fVar32 = *(float *)((longlong)param_2 + 0x44);
        fVar33 = *(float *)(param_2 + 9);
        fVar34 = *(float *)((longlong)param_2 + 0x4c);
        auVar1 = *(undefined1 (*) [16])(param_2 + 0xe);
        fVar7 = *(float *)(param_2 + 10);
        fVar8 = *(float *)((longlong)param_2 + 0x54);
        fVar9 = *(float *)(param_2 + 0xb);
        fVar10 = *(float *)((longlong)param_2 + 0x5c);
        fVar12 = *(float *)(param_2 + 0xc);
        fVar15 = *(float *)((longlong)param_2 + 100);
        fVar17 = *(float *)(param_2 + 0xd);
        fVar19 = *(float *)((longlong)param_2 + 0x6c);
        auVar30 = vpunpckhwd_avx(auVar1,auVar1);
        auVar30 = vpsrad_avx(auVar30,0x10);
        auVar30 = vcvtdq2ps_avx(auVar30);
        auVar30 = vshufpd_avx(auVar30,auVar30,3);
        fVar21 = auVar30._0_4_ * _DAT_146159c90 + auVar1._0_4_;
        fVar23 = auVar30._4_4_ * _UNK_146159c94 + auVar1._4_4_;
        fVar25 = auVar30._8_4_ * _UNK_146159c98 + auVar1._8_4_;
        fVar27 = auVar30._12_4_ * _UNK_146159c9c + auVar1._12_4_;
      }
      else {
        auVar1 = *(undefined1 (*) [16])(param_2 + 10);
        auVar30 = *(undefined1 (*) [16])(param_2 + 0xc);
        auVar31 = *(undefined1 (*) [16])(param_2 + 0xe);
        auVar14 = vshufps_avx(auVar30,auVar1,0x33);
        auVar14 = vshufps_avx(auVar1,auVar14,0x8f);
        fVar2 = auVar14._0_4_ + _DAT_145fc6ed8;
        fVar32 = auVar14._4_4_ + _DAT_145fc6ed8;
        fVar33 = auVar14._8_4_ + _DAT_145fc6ed8;
        fVar34 = auVar14._12_4_ + _DAT_145fc6ed8;
        auVar14 = vpunpckhwd_avx(auVar31,auVar31);
        auVar14 = vpsrad_avx(auVar14,0x10);
        auVar14 = vcvtdq2ps_avx(auVar14);
        fVar7 = fVar2 * auVar1._0_4_;
        fVar8 = fVar32 * auVar1._4_4_;
        fVar9 = fVar33 * auVar1._8_4_;
        fVar10 = fVar34 * auVar1._12_4_;
        fVar12 = fVar2 * auVar30._0_4_;
        fVar15 = fVar32 * auVar30._4_4_;
        fVar17 = fVar33 * auVar30._8_4_;
        fVar19 = fVar34 * auVar30._12_4_;
        auVar1 = vshufpd_avx(auVar14,auVar14,3);
        fVar21 = auVar1._0_4_ * _DAT_146159c90 + auVar31._0_4_;
        fVar23 = auVar1._4_4_ * _UNK_146159c94 + auVar31._4_4_;
        fVar25 = auVar1._8_4_ * _UNK_146159c98 + auVar31._8_4_;
        fVar27 = auVar1._12_4_ * _UNK_146159c9c + auVar31._12_4_;
        fVar2 = fVar2 * *(float *)(param_2 + 8);
        fVar32 = fVar32 * *(float *)((longlong)param_2 + 0x44);
        fVar33 = fVar33 * *(float *)(param_2 + 9);
        fVar34 = fVar34 * *(float *)((longlong)param_2 + 0x4c);
      }
      iVar5 = -1;
      *(float *)*param_1 = fVar2;
      *(float *)(*param_1 + 4) = fVar32;
      *(float *)(*param_1 + 8) = fVar33;
      *(float *)(*param_1 + 0xc) = fVar34;
      *(float *)param_1[1] = fVar7;
      *(float *)(param_1[1] + 4) = fVar8;
      *(float *)(param_1[1] + 8) = fVar9;
      *(float *)(param_1[1] + 0xc) = fVar10;
      *(float *)param_1[2] = fVar12;
      *(float *)(param_1[2] + 4) = fVar15;
      *(float *)(param_1[2] + 8) = fVar17;
      *(float *)(param_1[2] + 0xc) = fVar19;
      *(float *)param_1[3] = fVar21;
      *(float *)(param_1[3] + 4) = fVar23;
      *(float *)(param_1[3] + 8) = fVar25;
      *(float *)(param_1[3] + 0xc) = fVar27;
    }
    else {
      aiStack_7c[0] = 0;
      FUN_140047dc0(lVar3,param_3,aiStack_7c);
      iVar5 = aiStack_7c[0];
      FUN_144f4f860(*(undefined8 *)(lVar3 + 0x28),*(undefined8 *)(lVar3 + 0x38),aiStack_7c[0],
                    &fStack_c8);
      if (param_4 == '\0') {
        fVar2 = *(float *)(param_2 + 0xc);
        fVar32 = *(float *)((longlong)param_2 + 100);
        fVar33 = *(float *)(param_2 + 0xd);
        fVar34 = *(float *)((longlong)param_2 + 0x6c);
        auVar1 = *(undefined1 (*) [16])(param_2 + 0xe);
        fVar12 = *(float *)(param_2 + 8);
        fVar15 = *(float *)((longlong)param_2 + 0x44);
        fVar17 = *(float *)(param_2 + 9);
        fVar19 = *(float *)((longlong)param_2 + 0x4c);
        fVar7 = *(float *)(param_2 + 10);
        fVar8 = *(float *)((longlong)param_2 + 0x54);
        fVar9 = *(float *)(param_2 + 0xb);
        fVar10 = *(float *)((longlong)param_2 + 0x5c);
        auVar30 = vpunpckhwd_avx(auVar1,auVar1);
        auVar30 = vpsrad_avx(auVar30,0x10);
        auVar30 = vcvtdq2ps_avx(auVar30);
        auVar30 = vshufpd_avx(auVar30,auVar30,3);
        fVar21 = auVar30._0_4_ * _DAT_146159c90 + auVar1._0_4_;
        fVar23 = auVar30._4_4_ * _UNK_146159c94 + auVar1._4_4_;
        fVar25 = auVar30._8_4_ * _UNK_146159c98 + auVar1._8_4_;
        fVar27 = auVar30._12_4_ * _UNK_146159c9c + auVar1._12_4_;
      }
      else {
        auVar1 = *(undefined1 (*) [16])(param_2 + 10);
        auVar30 = *(undefined1 (*) [16])(param_2 + 0xc);
        auVar31 = *(undefined1 (*) [16])(param_2 + 0xe);
        auVar14 = vshufps_avx(auVar30,auVar1,0x33);
        auVar14 = vshufps_avx(auVar1,auVar14,0x8f);
        fVar2 = auVar14._0_4_ + _DAT_145fc6ed8;
        fVar32 = auVar14._4_4_ + _DAT_145fc6ed8;
        fVar33 = auVar14._8_4_ + _DAT_145fc6ed8;
        fVar34 = auVar14._12_4_ + _DAT_145fc6ed8;
        auVar14 = vpunpckhwd_avx(auVar31,auVar31);
        auVar14 = vpsrad_avx(auVar14,0x10);
        auVar14 = vcvtdq2ps_avx(auVar14);
        auVar14 = vshufpd_avx(auVar14,auVar14,3);
        fVar21 = auVar14._0_4_ * _DAT_146159c90 + auVar31._0_4_;
        fVar23 = auVar14._4_4_ * _UNK_146159c94 + auVar31._4_4_;
        fVar25 = auVar14._8_4_ * _UNK_146159c98 + auVar31._8_4_;
        fVar27 = auVar14._12_4_ * _UNK_146159c9c + auVar31._12_4_;
        fVar12 = fVar2 * *(float *)(param_2 + 8);
        fVar15 = fVar32 * *(float *)((longlong)param_2 + 0x44);
        fVar17 = fVar33 * *(float *)(param_2 + 9);
        fVar19 = fVar34 * *(float *)((longlong)param_2 + 0x4c);
        fVar7 = fVar2 * auVar1._0_4_;
        fVar8 = fVar32 * auVar1._4_4_;
        fVar9 = fVar33 * auVar1._8_4_;
        fVar10 = fVar34 * auVar1._12_4_;
        fVar2 = fVar2 * auVar30._0_4_;
        fVar32 = fVar32 * auVar30._4_4_;
        fVar33 = fVar33 * auVar30._8_4_;
        fVar34 = fVar34 * auVar30._12_4_;
      }
      *(float *)*param_1 = fVar2 * fStack_c0 + fVar7 * fStack_c4 + fStack_c8 * fVar12;
      *(float *)(*param_1 + 4) = fVar32 * fStack_c0 + fVar8 * fStack_c4 + fStack_c8 * fVar15;
      *(float *)(*param_1 + 8) = fVar33 * fStack_c0 + fVar9 * fStack_c4 + fStack_c8 * fVar17;
      *(float *)(*param_1 + 0xc) = fVar34 * fStack_c0 + fVar10 * fStack_c4 + fStack_c8 * fVar19;
      *(float *)param_1[1] = fVar2 * fStack_b0 + fVar7 * fStack_b4 + fStack_b8 * fVar12;
      *(float *)(param_1[1] + 4) = fVar32 * fStack_b0 + fVar8 * fStack_b4 + fStack_b8 * fVar15;
      *(float *)(param_1[1] + 8) = fVar33 * fStack_b0 + fVar9 * fStack_b4 + fStack_b8 * fVar17;
      *(float *)(param_1[1] + 0xc) = fVar34 * fStack_b0 + fVar10 * fStack_b4 + fStack_b8 * fVar19;
      *(float *)param_1[2] = fVar2 * fStack_a0 + fVar7 * fStack_a4 + fStack_a8 * fVar12;
      *(float *)(param_1[2] + 4) = fVar32 * fStack_a0 + fVar8 * fStack_a4 + fStack_a8 * fVar15;
      *(float *)(param_1[2] + 8) = fVar33 * fStack_a0 + fVar9 * fStack_a4 + fStack_a8 * fVar17;
      *(float *)(param_1[2] + 0xc) = fVar34 * fStack_a0 + fVar10 * fStack_a4 + fStack_a8 * fVar19;
      *(float *)param_1[3] = fVar2 * fStack_90 + fVar7 * fStack_94 + fVar12 * fStack_98 + fVar21;
      *(float *)(param_1[3] + 4) =
           fVar32 * fStack_90 + fVar8 * fStack_94 + fVar15 * fStack_98 + fVar23;
      *(float *)(param_1[3] + 8) =
           fVar33 * fStack_90 + fVar9 * fStack_94 + fVar17 * fStack_98 + fVar25;
      *(float *)(param_1[3] + 0xc) =
           fVar34 * fStack_90 + fVar10 * fStack_94 + fVar19 * fStack_98 + fVar27;
    }
    return iVar5;
  }
  fStack_c8 = 0.0;
  FUN_1400746e0(lVar3,param_3);
  fVar2 = fStack_c8;
  if ((param_5 != '\0') && ((char)param_2[6] != '\x03')) {
    fVar2 = (float)((int)fStack_c8 - *(int *)(lVar3 + 0x1d0));
    if ((int)fStack_c8 < *(int *)(lVar3 + 0x1d0)) {
      plVar6 = (longlong *)(*(longlong *)(lVar3 + 0x18) + 0x30);
      fVar2 = fStack_c8;
    }
    else {
      plVar6 = (longlong *)(lVar3 + 0x1a0);
    }
    lVar3 = *plVar6;
    auVar29._0_12_ = ZEXT812(0);
    auVar29._12_4_ = 0;
    lVar4 = (longlong)(int)fVar2 * 0x40;
    auVar1 = *(undefined1 (*) [16])(lVar3 + 0x10 + lVar4);
    auVar30 = *(undefined1 (*) [16])(lVar3 + 0x20 + lVar4);
    auVar31 = vunpcklps_avx(*(undefined1 (*) [16])(lVar3 + lVar4),auVar30);
    auVar14 = vunpcklps_avx(auVar1,auVar29);
    auVar30 = vunpckhps_avx(*(undefined1 (*) [16])(lVar3 + lVar4),auVar30);
    auVar1 = vunpckhps_avx(auVar1,auVar29);
    fVar2 = *(float *)(lVar3 + 0x34 + lVar4);
    auVar30 = vunpcklps_avx(auVar30,auVar1);
    auVar29 = vunpcklps_avx(auVar31,auVar14);
    auVar1 = vunpckhps_avx(auVar31,auVar14);
    fVar32 = *(float *)(lVar3 + 0x30 + lVar4);
    fVar33 = *(float *)(lVar3 + 0x38 + lVar4);
    *param_1 = auVar29;
    param_1[1] = auVar1;
    param_1[2] = auVar30;
    fVar13 = auVar29._0_4_;
    fVar16 = auVar29._4_4_;
    fVar18 = auVar29._8_4_;
    fVar20 = auVar29._12_4_;
    fVar23 = auVar1._0_4_;
    fVar25 = auVar1._4_4_;
    fVar27 = auVar1._8_4_;
    fVar11 = auVar1._12_4_;
    fVar15 = auVar30._0_4_;
    fVar22 = -(fVar15 * fVar33) - (fVar23 * fVar2 + fVar13 * fVar32);
    fVar17 = auVar30._4_4_;
    fVar24 = -(fVar17 * fVar33) - (fVar25 * fVar2 + fVar16 * fVar32);
    fVar19 = auVar30._8_4_;
    fVar26 = -(fVar19 * fVar33) - (fVar27 * fVar2 + fVar18 * fVar32);
    fVar21 = auVar30._12_4_;
    fVar28 = -(fVar21 * fVar33) - (fVar11 * fVar2 + fVar20 * fVar32);
    *(float *)param_1[3] = fVar22;
    *(float *)(param_1[3] + 4) = fVar24;
    *(float *)(param_1[3] + 8) = fVar26;
    *(float *)(param_1[3] + 0xc) = fVar28;
    auVar1 = *(undefined1 (*) [16])(param_2 + 0xe);
    fVar2 = *(float *)((longlong)param_2 + 0x44);
    fVar32 = *(float *)(param_2 + 9);
    fVar33 = *(float *)(param_2 + 0xb);
    fVar34 = *(float *)(param_2 + 0xd);
    auVar30 = vpunpckhwd_avx(auVar1,auVar1);
    auVar30 = vpsrad_avx(auVar30,0x10);
    auVar30 = vcvtdq2ps_avx(auVar30);
    auVar30 = vshufpd_avx(auVar30,auVar30,3);
    auVar31._0_4_ = auVar30._0_4_ * _DAT_146159c90 + auVar1._0_4_;
    auVar31._4_4_ = auVar30._4_4_ * _UNK_146159c94 + auVar1._4_4_;
    auVar31._8_4_ = auVar30._8_4_ * _UNK_146159c98 + auVar1._8_4_;
    auVar31._12_4_ = auVar30._12_4_ * _UNK_146159c9c + auVar1._12_4_;
    fVar7 = *(float *)(param_2 + 8);
    fVar8 = *(float *)(param_2 + 10);
    fVar9 = *(float *)((longlong)param_2 + 0x54);
    fVar10 = *(float *)(param_2 + 0xc);
    fVar12 = *(float *)((longlong)param_2 + 100);
    *(float *)*param_1 = fVar15 * fVar32 + fVar23 * fVar2 + fVar7 * fVar13;
    *(float *)(*param_1 + 4) = fVar17 * fVar32 + fVar25 * fVar2 + fVar7 * fVar16;
    *(float *)(*param_1 + 8) = fVar19 * fVar32 + fVar27 * fVar2 + fVar7 * fVar18;
    *(float *)(*param_1 + 0xc) = fVar21 * fVar32 + fVar11 * fVar2 + fVar7 * fVar20;
    *(float *)param_1[1] = fVar15 * fVar33 + fVar23 * fVar9 + fVar8 * fVar13;
    *(float *)(param_1[1] + 4) = fVar17 * fVar33 + fVar25 * fVar9 + fVar8 * fVar16;
    *(float *)(param_1[1] + 8) = fVar19 * fVar33 + fVar27 * fVar9 + fVar8 * fVar18;
    *(float *)(param_1[1] + 0xc) = fVar21 * fVar33 + fVar11 * fVar9 + fVar8 * fVar20;
    auVar1 = vshufps_avx(auVar31,auVar31,0x55);
    auVar30 = vshufps_avx(auVar31,auVar31,0xaa);
    *(float *)param_1[2] = fVar15 * fVar34 + fVar23 * fVar12 + fVar10 * fVar13;
    *(float *)(param_1[2] + 4) = fVar17 * fVar34 + fVar25 * fVar12 + fVar10 * fVar16;
    *(float *)(param_1[2] + 8) = fVar19 * fVar34 + fVar27 * fVar12 + fVar10 * fVar18;
    *(float *)(param_1[2] + 0xc) = fVar21 * fVar34 + fVar11 * fVar12 + fVar10 * fVar20;
    *(float *)param_1[3] =
         fVar15 * auVar30._0_4_ + fVar23 * auVar1._0_4_ + fVar13 * auVar31._0_4_ + fVar22;
    *(float *)(param_1[3] + 4) =
         fVar17 * auVar30._4_4_ + fVar25 * auVar1._4_4_ + fVar16 * auVar31._0_4_ + fVar24;
    *(float *)(param_1[3] + 8) =
         fVar19 * auVar30._8_4_ + fVar27 * auVar1._8_4_ + fVar18 * auVar31._0_4_ + fVar26;
    *(float *)(param_1[3] + 0xc) =
         fVar21 * auVar30._12_4_ + fVar11 * auVar1._12_4_ + fVar20 * auVar31._0_4_ + fVar28;
    return (int)fStack_c8;
  }
  FUN_145025fb0(param_2,lVar3,fStack_c8,param_1,0,1);
  return (int)fVar2;
}

