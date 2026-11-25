// Recovered from game_scarlett_master.exe (GTA VI, Xbox Series X, PE32+ x64)
// Address: 140007f90  size: 2132 bytes
// Name:    FUN_140007f90
// Subsystem: core
//
// Referenced strings (0 in this body, 0 including direct callees):
// Callees: FUN_144dda020, FUN_144d9e400, FUN_140004b40, FUN_144d9fbe0
//
// Generated decompilation. Formatting follows MiscRef/GTAVSRC conventions;
// identifiers are recovered, not original. See ../../../README.md.

#include "gta6decomp/rage_types.h"


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_140007f90(char param_1,undefined1 (*param_2) [16],undefined1 (*param_3) [32],char param_4)

{
  ulonglong uVar1;
  undefined8 uVar2;
  uint uVar3;
  int iVar4;
  float *pfVar5;
  longlong lVar6;
  char cVar7;
  uint uVar8;
  longlong lVar9;
  ulonglong uVar10;
  ulonglong uVar11;
  uint uVar12;
  uint uVar13;
  longlong lVar14;
  bool bVar15;
  undefined1 auVar16 [16];
  undefined1 auVar17 [16];
  undefined1 auVar18 [16];
  undefined1 auVar19 [16];
  undefined8 uVar20;
  undefined1 auVar21 [16];
  undefined1 auVar22 [16];
  float fVar23;
  float fVar28;
  undefined1 auVar24 [16];
  float fVar26;
  float fVar27;
  undefined1 in_ZMM2 [64];
  undefined1 auVar25 [64];
  float fVar29;
  float fVar30;
  float fVar31;
  float fVar32;
  undefined1 auVar33 [16];
  float fVar34;
  undefined1 auVar35 [16];
  undefined1 auVar36 [64];
  undefined1 auVar37 [16];
  undefined1 auVar38 [64];
  undefined1 auVar39 [64];
  undefined8 uStack_a8;
  undefined8 uStack_a0;
  undefined8 uStack_98;
  undefined8 uStack_90;
  undefined8 uStack_50;
  
  FUN_140004b40(0x14764e860);
  auVar35._4_4_ = _DAT_145fc6f4c;
  auVar35._0_4_ = _DAT_145fc6f4c;
  auVar35._8_4_ = _DAT_145fc6f4c;
  auVar35._12_4_ = _DAT_145fc6f4c;
  auVar37._4_4_ = _DAT_145fc6f70;
  auVar37._0_4_ = _DAT_145fc6f70;
  auVar37._8_4_ = _DAT_145fc6f70;
  auVar37._12_4_ = _DAT_145fc6f70;
  param_3[1] = ZEXT1232(ZEXT812(0));
  *param_3 = ZEXT1232(ZEXT812(0));
  uVar3 = _DAT_149ab3c74;
  auVar21 = vpand_avx(auVar35,*param_2);
  auVar16 = vcmpps_avx(auVar21,auVar37,0x11);
  auVar21 = vpcmpeqd_avx(auVar21,auVar21);
  auVar16 = auVar21 & ~auVar16;
  if ((((SUB161(auVar16 >> 0x1f,0) & 1) != 0 || (SUB161(auVar16 >> 0x3f,0) & 1) != 0) ||
      (SUB161(auVar16 >> 0x5f,0) & 1) != 0) || auVar16[0xf] < '\0') goto LAB_140008324;
  auVar16 = vpand_avx(auVar35,param_2[1]);
  auVar16 = vcmpps_avx(auVar16,auVar37,0x11);
  auVar21 = auVar21 & ~auVar16;
  if ((((SUB161(auVar21 >> 0x1f,0) & 1) != 0 || (SUB161(auVar21 >> 0x3f,0) & 1) != 0) ||
      (SUB161(auVar21 >> 0x5f,0) & 1) != 0) || auVar21[0xf] < '\0') goto LAB_140008324;
  uVar10 = (ulonglong)_DAT_149ab3c74;
  if (DAT_149aea534 == '\x01' && param_4 == '\0') {
    *(undefined8 *)*param_3 = 0x3f8000003f800000;
    if ((0x803UL >> (uVar10 & 0x3f) & 1) == 0) {
      *(undefined8 *)(*param_3 + 8) = 0x3f8000003f800000;
    }
    if ((0x867UL >> (uVar10 & 0x3f) & 1) == 0) {
      *(undefined4 *)(*param_3 + 0x10) = 0x3f800000;
    }
    auVar25 = ZEXT1664(in_ZMM2._0_16_);
    auVar36 = ZEXT1664(auVar35);
    auVar38 = ZEXT1664(auVar37);
    cVar7 = func_0x0001443b1090(uVar10);
    auVar37 = auVar38._0_16_;
    auVar35 = auVar36._0_16_;
    if (0xfffffffffffffff5 < uVar10 - 0xb && cVar7 == '\0') {
      *(undefined4 *)(*param_3 + (ulonglong)(uVar3 == 0xc ^ 5) * 4) = 0x3f800000;
    }
    if ((0x9efUL >> (uVar10 & 0x3f) & 1) == 0) {
      *(undefined4 *)(*param_3 + (ulonglong)(uVar3 != 0xc) * 4 + 0x14) = 0x3f800000;
    }
    if ((0x9efUL >> (uVar10 & 0x3f) & 1) == 0) {
      *(undefined4 *)(*param_3 + (ulonglong)(uVar3 == 0xc ^ 7) * 4) = 0x3f800000;
    }
    if (uVar3 == 0xc) {
      *(undefined4 *)(*param_3 + 0x1c) = 0x3f800000;
    }
    if ((0x81fUL >> (uVar10 & 0x3f) & 1) == 0) {
      *(undefined4 *)(*param_3 + (ulonglong)(uVar3 == 0xc ^ 9) * 4) = 0x3f800000;
    }
    if ((0x81fUL >> (uVar10 & 0x3f) & 1) == 0) {
      *(undefined4 *)(param_3[1] + (ulonglong)(uVar3 != 0xc) * 4 + 4) = 0x3f800000;
    }
    if ((0xabfUL >> (uVar10 & 0x3f) & 1) == 0) {
      *(undefined4 *)(*param_3 + (ulonglong)(uVar3 == 0xc ^ 0xb) * 4) = 0x3f800000;
    }
    if ((0xabfUL >> (uVar10 & 0x3f) & 1) == 0) {
      *(undefined4 *)(param_3[1] + (ulonglong)(uVar3 != 0xc) * 4 + 0xc) = 0x3f800000;
    }
    fVar34 = _DAT_145fc6ed8;
    if (uVar3 == 0xc) {
      *(float *)(param_3[1] + 0x10) = _DAT_145fc6ed8;
      *(float *)(param_3[1] + 0x14) = fVar34;
      *(float *)(param_3[1] + 0x18) = fVar34;
      *(float *)(param_3[1] + 0x1c) = fVar34;
    }
    auVar19._0_4_ = (float)*(uint *)(&UNK_1465f44d0 + uVar10 * 4);
    auVar19._4_12_ = auVar25._4_12_;
    auVar16 = vrsqrtss_avx(auVar19,auVar19);
    fVar34 = auVar16._0_4_;
    fVar34 = fVar34 * _DAT_145fc6f08 * (fVar34 * auVar19._0_4_ * fVar34 + _DAT_145fc6f04);
    auVar16._0_4_ = fVar34 * *(float *)*param_3;
    auVar16._4_4_ = fVar34 * *(float *)(*param_3 + 4);
    auVar16._8_4_ = fVar34 * *(float *)(*param_3 + 8);
    auVar16._12_4_ = fVar34 * *(float *)(*param_3 + 0xc);
    *(undefined1 (*) [16])*param_3 = auVar16;
    fVar23 = fVar34 * *(float *)(*param_3 + 0x10);
    fVar26 = fVar34 * *(float *)(*param_3 + 0x14);
    fVar27 = fVar34 * *(float *)(*param_3 + 0x18);
    fVar28 = fVar34 * *(float *)(*param_3 + 0x1c);
    *(float *)(*param_3 + 0x10) = fVar23;
    *(float *)(*param_3 + 0x14) = fVar26;
    *(float *)(*param_3 + 0x18) = fVar27;
    *(float *)(*param_3 + 0x1c) = fVar28;
    fVar29 = fVar34 * *(float *)param_3[1];
    fVar30 = fVar34 * *(float *)(param_3[1] + 4);
    fVar31 = fVar34 * *(float *)(param_3[1] + 8);
    fVar32 = fVar34 * *(float *)(param_3[1] + 0xc);
    *(float *)param_3[1] = fVar29;
    *(float *)(param_3[1] + 4) = fVar30;
    *(float *)(param_3[1] + 8) = fVar31;
    *(float *)(param_3[1] + 0xc) = fVar32;
    auVar21._0_4_ = fVar34 * *(float *)(param_3[1] + 0x10);
    auVar21._4_4_ = fVar34 * *(float *)(param_3[1] + 0x14);
    auVar21._8_4_ = fVar34 * *(float *)(param_3[1] + 0x18);
    auVar21._12_4_ = fVar34 * *(float *)(param_3[1] + 0x1c);
    *(undefined1 (*) [16])(param_3[1] + 0x10) = auVar21;
    goto LAB_1400082ee;
  }
  lVar14 = 0x14764e880;
  if (param_4 != '\0') {
    lVar14 = 0x14764fb08;
  }
  if (*(int *)(lVar14 + 100) == 0) {
    auVar21 = ZEXT816(0) << 0x20;
    fVar29 = 0.0;
    fVar30 = 0.0;
    fVar31 = 0.0;
    fVar32 = 0.0;
    fVar23 = 0.0;
    fVar26 = 0.0;
    fVar27 = 0.0;
    fVar28 = 0.0;
    auVar16 = SUB6416(ZEXT864(0),0) << 0x20;
    goto LAB_1400082ee;
  }
  auVar25 = ZEXT1664(auVar35);
  auVar36 = ZEXT1664(auVar37);
  func_0x000145f40580(*(undefined8 *)(lVar14 + 0x18),0,(ulonglong)*(uint *)(lVar14 + 0x14) << 2);
  if (param_1 == '\0') {
    fVar34 = *(float *)(param_2[1] + 0xc);
    uStack_98 = *(undefined8 *)param_2[1];
    uStack_90 = *(undefined8 *)(param_2[1] + 8);
    FUN_144dda020(&uStack_98,fVar34,lVar14);
    uStack_a8 = *(undefined8 *)*param_2;
    uStack_a0 = *(undefined8 *)(*param_2 + 8);
    FUN_144dda020(&uStack_a8,_DAT_145fc6ed8 - fVar34,lVar14);
  }
  else if ((param_4 == '\0') && ((uVar3 == 10 & DAT_14764fb88) == 1)) {
    FUN_144d9e400(param_2,lVar14,0);
  }
  else if (_DAT_14764e964 != 0) {
    FUN_144d9e400(param_2,0x14764e900,1);
    FUN_144d9fbe0(lVar14);
  }
  auVar37 = auVar36._0_16_;
  auVar35 = auVar25._0_16_;
  pfVar5 = *(float **)(lVar14 + 0x18);
  uVar12 = 0;
  if (param_4 == '\0') {
    uVar12 = uVar3;
  }
  if (uVar12 < 2) {
code_r0x0001400082a4:
    auVar24._4_4_ = _DAT_145fc6ed8;
    auVar24._0_4_ = _DAT_145fc6ed8;
    auVar24._8_4_ = _DAT_145fc6ed8;
    auVar24._12_4_ = _DAT_145fc6ed8;
    fVar34 = (pfVar5[5] + pfVar5[4]) * _DAT_14615a6b8;
    auVar17._0_4_ = fVar34 + *pfVar5;
    auVar17._4_4_ = fVar34 + pfVar5[1];
    auVar17._8_4_ = fVar34 + pfVar5[2];
    auVar17._12_4_ = fVar34 + pfVar5[3];
    auVar16 = vmaxps_avx(auVar17,ZEXT816(0));
    auVar16 = vminps_avx(auVar16,auVar24);
    *(undefined1 (*) [16])*param_3 = auVar16;
    goto LAB_1400082db;
  }
  uVar3 = *(uint *)(lVar14 + 0x14);
  switch(uVar12) {
  case 5:
  case 6:
    if (uVar3 < (~((int)(*(int *)(&UNK_1465f44d0 + (ulonglong)uVar12 * 4) - 1U) >> 0x1f) &
                *(int *)(&UNK_1465f44d0 + (ulonglong)uVar12 * 4) - 1U)) break;
    fVar31 = pfVar5[4];
    fVar34 = pfVar5[5];
    fVar32 = pfVar5[6];
    fVar26 = pfVar5[7];
    fVar23 = pfVar5[8] * _DAT_146159ca4;
    fVar27 = pfVar5[1];
    fVar28 = pfVar5[2];
    fVar29 = pfVar5[3];
    uVar20 = *(undefined8 *)(pfVar5 + 6);
    *(float *)*param_3 = fVar23 + *pfVar5;
    *(float *)(*param_3 + 4) = fVar23 + fVar27;
    *(float *)(*param_3 + 8) = fVar23 + fVar28;
    *(float *)(*param_3 + 0xc) = fVar23 + fVar29;
    if (uVar12 == 5) {
code_r0x0001400087bf:
      fVar31 = (float)uVar20 + fVar31;
      fVar34 = (float)((ulonglong)uVar20 >> 0x20) + fVar34;
code_r0x0001400087c3:
      fVar32 = 0.0;
      fVar26 = 0.0;
    }
code_r0x0001400087da:
    *(float *)(param_3[1] + 4) = fVar31;
    *(float *)(param_3[1] + 8) = fVar34;
    *(float *)(param_3[1] + 0xc) = fVar32;
    *(float *)(param_3[1] + 0x10) = fVar26;
    goto LAB_1400082db;
  case 7:
  case 8:
    if ((~((int)(*(int *)(&UNK_1465f44d0 + (ulonglong)uVar12 * 4) - 1U) >> 0x1f) &
        *(int *)(&UNK_1465f44d0 + (ulonglong)uVar12 * 4) - 1U) <= uVar3) {
      auVar16 = *(undefined1 (*) [16])(pfVar5 + 6);
      fVar34 = pfVar5[10];
      fVar23 = pfVar5[0xb] * _UNK_14615bacc;
      auVar21 = vshufps_avx(ZEXT416((uint)fVar23),
                            ZEXT416((uint)((fVar23 + pfVar5[5]) * _DAT_145fc6edc + fVar23)),0);
      fVar26 = *pfVar5;
      fVar27 = pfVar5[1];
      fVar28 = pfVar5[2];
      fVar29 = pfVar5[3];
      *(float *)(*param_3 + 0x10) = fVar23 + pfVar5[4];
      *(float *)*param_3 = auVar21._0_4_ + fVar26;
      *(float *)(*param_3 + 4) = auVar21._4_4_ + fVar27;
      *(float *)(*param_3 + 8) = auVar21._8_4_ + fVar28;
      *(float *)(*param_3 + 0xc) = auVar21._12_4_ + fVar29;
      if (uVar12 == 7) {
        fVar34 = fVar34 * _DAT_145fc6edc;
        auVar21 = vshufpd_avx(auVar16,auVar16,1);
        fVar31 = auVar21._0_4_ + auVar16._0_4_ + fVar34;
        fVar34 = auVar21._4_4_ + auVar16._4_4_ + fVar34;
        goto code_r0x0001400087c3;
      }
      fVar26 = fVar34 * _DAT_146159ca4;
      fVar31 = fVar26 + auVar16._0_4_;
      fVar34 = fVar26 + auVar16._4_4_;
      fVar32 = fVar26 + auVar16._8_4_;
      fVar26 = fVar26 + auVar16._12_4_;
      goto code_r0x0001400087da;
    }
    break;
  case 9:
  case 10:
    if ((~((int)(*(int *)(&UNK_1465f44d0 + (ulonglong)uVar12 * 4) - 1U) >> 0x1f) &
        *(int *)(&UNK_1465f44d0 + (ulonglong)uVar12 * 4) - 1U) <= uVar3) {
      fVar31 = pfVar5[7];
      fVar34 = pfVar5[8];
      fVar32 = pfVar5[9];
      fVar26 = pfVar5[10];
      fVar23 = pfVar5[0xb] * _UNK_14615c480;
      fVar27 = *pfVar5;
      fVar28 = pfVar5[1];
      fVar29 = pfVar5[2];
      fVar30 = pfVar5[3];
      auVar33._0_4_ = fVar23 + (float)*(undefined8 *)(pfVar5 + 5);
      auVar33._4_4_ = fVar23 + (float)((ulonglong)*(undefined8 *)(pfVar5 + 5) >> 0x20);
      auVar33._8_4_ = fVar23 + 0.0;
      auVar33._12_4_ = fVar23 + 0.0;
      uVar20 = *(undefined8 *)(pfVar5 + 9);
      *(float *)(*param_3 + 0x10) = fVar23 + pfVar5[4];
      *(float *)*param_3 = fVar23 + fVar27;
      *(float *)(*param_3 + 4) = fVar23 + fVar28;
      *(float *)(*param_3 + 8) = fVar23 + fVar29;
      *(float *)(*param_3 + 0xc) = fVar23 + fVar30;
      uVar2 = vmovlps_avx(auVar33);
      *(undefined8 *)(*param_3 + 0x18) = uVar2;
      if (uVar12 == 9) goto code_r0x0001400087bf;
      goto code_r0x0001400087da;
    }
    break;
  case 0xb:
    goto code_r0x0001400082a4;
  case 0xc:
    auVar22 = ZEXT816(0);
    auVar19 = ZEXT416((uint)_DAT_145fc6ed8);
    auVar21 = vminss_avx(auVar19,ZEXT416((uint)*pfVar5));
    auVar16 = vcmpss_avx(ZEXT416((uint)*pfVar5),auVar22,1);
    *(uint *)*param_3 = ~auVar16._0_4_ & auVar21._0_4_;
    auVar21 = vminss_avx(auVar19,ZEXT416((uint)pfVar5[1]));
    auVar16 = vcmpss_avx(ZEXT416((uint)pfVar5[1]),auVar22,1);
    *(uint *)(*param_3 + 4) = ~auVar16._0_4_ & auVar21._0_4_;
    auVar21 = vminss_avx(auVar19,ZEXT416((uint)pfVar5[2]));
    auVar16 = vcmpss_avx(ZEXT416((uint)pfVar5[2]),auVar22,1);
    *(uint *)(*param_3 + 8) = ~auVar16._0_4_ & auVar21._0_4_;
    auVar21 = vminss_avx(auVar19,ZEXT416((uint)pfVar5[3]));
    auVar16 = vcmpss_avx(ZEXT416((uint)pfVar5[3]),auVar22,1);
    *(uint *)(*param_3 + 0xc) = ~auVar16._0_4_ & auVar21._0_4_;
    auVar21 = vminss_avx(auVar19,ZEXT416((uint)pfVar5[4]));
    auVar16 = vcmpss_avx(ZEXT416((uint)pfVar5[4]),auVar22,1);
    *(uint *)(*param_3 + 0x10) = ~auVar16._0_4_ & auVar21._0_4_;
    auVar21 = vminss_avx(auVar19,ZEXT416((uint)pfVar5[5]));
    auVar16 = vcmpss_avx(ZEXT416((uint)pfVar5[5]),auVar22,1);
    *(uint *)(*param_3 + 0x14) = ~auVar16._0_4_ & auVar21._0_4_;
    auVar21 = vminss_avx(auVar19,ZEXT416((uint)pfVar5[6]));
    auVar16 = vcmpss_avx(ZEXT416((uint)pfVar5[6]),auVar22,1);
    *(uint *)(*param_3 + 0x18) = ~auVar16._0_4_ & auVar21._0_4_;
    auVar21 = vminss_avx(auVar19,ZEXT416((uint)pfVar5[7]));
    auVar16 = vcmpss_avx(ZEXT416((uint)pfVar5[7]),auVar22,1);
    *(uint *)(*param_3 + 0x1c) = ~auVar16._0_4_ & auVar21._0_4_;
    auVar21 = vminss_avx(auVar19,ZEXT416((uint)pfVar5[8]));
    auVar16 = vcmpss_avx(ZEXT416((uint)pfVar5[8]),auVar22,1);
    *(uint *)param_3[1] = ~auVar16._0_4_ & auVar21._0_4_;
    auVar21 = vminss_avx(auVar19,ZEXT416((uint)pfVar5[9]));
    auVar16 = vcmpss_avx(ZEXT416((uint)pfVar5[9]),auVar22,1);
    *(uint *)(param_3[1] + 4) = ~auVar16._0_4_ & auVar21._0_4_;
    auVar21 = vminss_avx(auVar19,ZEXT416((uint)pfVar5[10]));
    auVar16 = vcmpss_avx(ZEXT416((uint)pfVar5[10]),auVar22,1);
    *(uint *)(param_3[1] + 8) = ~auVar16._0_4_ & auVar21._0_4_;
    auVar21 = vminss_avx(auVar19,ZEXT416((uint)pfVar5[0xb]));
    auVar16 = vcmpss_avx(ZEXT416((uint)pfVar5[0xb]),auVar22,1);
    *(uint *)(param_3[1] + 0xc) = ~auVar16._0_4_ & auVar21._0_4_;
    auVar21 = vminss_avx(auVar19,ZEXT416((uint)pfVar5[0xc]));
    auVar16 = vcmpss_avx(ZEXT416((uint)pfVar5[0xc]),auVar22,1);
    *(uint *)(param_3[1] + 0x10) = ~auVar16._0_4_ & auVar21._0_4_;
    auVar21 = vminss_avx(auVar19,ZEXT416((uint)pfVar5[0xd]));
    auVar16 = vcmpss_avx(ZEXT416((uint)pfVar5[0xd]),auVar22,1);
    *(uint *)(param_3[1] + 0x14) = ~auVar16._0_4_ & auVar21._0_4_;
    auVar21 = vminss_avx(auVar19,ZEXT416((uint)pfVar5[0xe]));
    auVar16 = vcmpss_avx(ZEXT416((uint)pfVar5[0xe]),auVar22,1);
    *(uint *)(param_3[1] + 0x18) = ~auVar16._0_4_ & auVar21._0_4_;
    auVar21 = vminss_avx(auVar19,ZEXT416((uint)pfVar5[0xf]));
    auVar16 = vcmpss_avx(ZEXT416((uint)pfVar5[0xf]),auVar22,1);
    *(uint *)(param_3[1] + 0x1c) = ~auVar16._0_4_ & auVar21._0_4_;
    goto LAB_1400082db;
  default:
    iVar4 = *(int *)(&UNK_1465f44d0 + (ulonglong)uVar12 * 4);
    cVar7 = func_0x000144daf0a0(uVar12);
    auVar37 = auVar36._0_16_;
    auVar35 = auVar25._0_16_;
    if (cVar7 != '\0') {
      uVar13 = iVar4 - 1;
      uVar8 = ~((int)uVar13 >> 0x1f) & uVar13;
      if (uVar3 - uVar8 == 2) {
        if (0 < (int)uVar13) {
          auVar38 = ZEXT464((uint)_DAT_145fc6ed8);
          fVar34 = (pfVar5[uVar3 - 2] + pfVar5[uVar3 - 1]) / (float)(int)uVar8;
          auVar19 = ZEXT416((uint)_DAT_145fc6ed8);
          auVar21 = vminss_avx(auVar19,ZEXT416((uint)(fVar34 + *pfVar5)));
          auVar16 = vcmpss_avx(ZEXT416((uint)(fVar34 + *pfVar5)),ZEXT416(0) << 0x20,1);
          *(uint *)*param_3 = ~auVar16._0_4_ & auVar21._0_4_;
          if (uVar13 != 1) {
            auVar21 = vminss_avx(auVar19,ZEXT416((uint)(fVar34 + pfVar5[1])));
            auVar16 = vcmpss_avx(ZEXT416((uint)(fVar34 + pfVar5[1])),ZEXT416(0) << 0x20,1);
            *(uint *)(*param_3 + 4) = ~auVar16._0_4_ & auVar21._0_4_;
            if (uVar13 != 2) {
              auVar21 = vminss_avx(auVar19,ZEXT416((uint)(fVar34 + pfVar5[2])));
              auVar16 = vcmpss_avx(ZEXT416((uint)(fVar34 + pfVar5[2])),ZEXT416(0) << 0x20,1);
              *(uint *)(*param_3 + 8) = ~auVar16._0_4_ & auVar21._0_4_;
              if (uVar13 != 3) {
                auVar21 = vminss_avx(auVar19,ZEXT416((uint)(fVar34 + pfVar5[3])));
                auVar16 = vcmpss_avx(ZEXT416((uint)(fVar34 + pfVar5[3])),ZEXT416(0) << 0x20,1);
                *(uint *)(*param_3 + 0xc) = ~auVar16._0_4_ & auVar21._0_4_;
                if (uVar13 != 4) {
                  auVar22._0_12_ = ZEXT812(0);
                  auVar22._12_4_ = 0;
                  auVar39 = ZEXT1664(auVar22);
                  auVar21 = vminss_avx(auVar19,ZEXT416((uint)(fVar34 + pfVar5[4])));
                  auVar16 = vcmpss_avx(ZEXT416((uint)(fVar34 + pfVar5[4])),auVar22,1);
                  *(uint *)(*param_3 + 0x10) = ~auVar16._0_4_ & auVar21._0_4_;
                  if (uVar13 != 5) {
                    cVar7 = func_0x0001443b1090(uVar12);
                    auVar37 = auVar36._0_16_;
                    auVar35 = auVar25._0_16_;
                    uVar10 = 5;
                    do {
                      uVar1 = uVar10 + 1;
                      uVar11 = uVar10;
                      if (cVar7 != '\0') {
                        uVar11 = uVar1;
                      }
                      auVar21 = vminss_avx(auVar38._0_16_,ZEXT416((uint)(fVar34 + pfVar5[uVar10])));
                      auVar16 = vcmpss_avx(ZEXT416((uint)(fVar34 + pfVar5[uVar10])),auVar39._0_16_,1
                                          );
                      *(uint *)(*param_3 + (uVar11 & 0xffffffff) * 4) =
                           ~auVar16._0_4_ & auVar21._0_4_;
                      uVar10 = uVar1;
                    } while (uVar8 != uVar1);
                  }
                }
              }
            }
          }
        }
        goto LAB_1400082db;
      }
    }
  }
  param_3[1] = ZEXT1232(ZEXT812(0));
  *param_3 = ZEXT1232(ZEXT812(0));
LAB_1400082db:
  auVar16 = *(undefined1 (*) [16])*param_3;
  fVar23 = *(float *)(*param_3 + 0x10);
  fVar26 = *(float *)(*param_3 + 0x14);
  fVar27 = *(float *)(*param_3 + 0x18);
  fVar28 = *(float *)(*param_3 + 0x1c);
  fVar29 = *(float *)param_3[1];
  fVar30 = *(float *)(param_3[1] + 4);
  fVar31 = *(float *)(param_3[1] + 8);
  fVar32 = *(float *)(param_3[1] + 0xc);
  auVar21 = *(undefined1 (*) [16])(param_3[1] + 0x10);
LAB_1400082ee:
  auVar19 = vpcmpeqd_avx(auVar21,auVar21);
  auVar18._0_4_ = (uint)(auVar21._0_4_ * fVar29 * fVar23 * auVar16._0_4_ * 0.0) & auVar35._0_4_;
  auVar18._4_4_ = (uint)(auVar21._4_4_ * fVar30 * fVar26 * auVar16._4_4_ * 0.0) & auVar35._4_4_;
  auVar18._8_4_ = (uint)(auVar21._8_4_ * fVar31 * fVar27 * auVar16._8_4_ * 0.0) & auVar35._8_4_;
  auVar18._12_4_ = (uint)(auVar21._12_4_ * fVar32 * fVar28 * auVar16._12_4_ * 0.0) & auVar35._12_4_;
  auVar16 = vcmpps_avx(auVar18,auVar37,0x11);
  auVar19 = auVar19 & ~auVar16;
  if ((((SUB161(auVar19 >> 0x1f,0) & 1) != 0 || (SUB161(auVar19 >> 0x3f,0) & 1) != 0) ||
      (SUB161(auVar19 >> 0x5f,0) & 1) != 0) || auVar19[0xf] < '\0') {
    param_3[1] = ZEXT832(0) << 0x20;
    *param_3 = ZEXT832(0) << 0x20;
  }
LAB_140008324:
  iRam000000014764e870 = iRam000000014764e870 + -1;
  uVar10 = uRam000000014764e860;
  if (iRam000000014764e870 == 0) {
    do {
      uVar11 = uVar10;
      LOCK();
      uVar10 = uVar11;
      uVar1 = (ulonglong)((int)uVar11 - 1) | 0xffffffff00000000;
      if (uVar11 != uRam000000014764e860) {
        uVar10 = uRam000000014764e860;
        uVar1 = uRam000000014764e860;
      }
      uRam000000014764e860 = uVar1;
      UNLOCK();
    } while (uVar11 != uVar10);
    if ((uVar11 & 0xfffffffe) != 0) {
      iRam000000014764e870 = 0;
      lVar14 = lRam000000014764e868;
      do {
        while (lVar14 < 0) {
          uStack_50 = 0x140019c89;
          cVar7 = FUN_1400062d0(0x14764e868,1,&stack0xffffffffffffffe0);
          if (cVar7 != '\0') {
            return;
          }
        }
        LOCK();
        lVar9 = lVar14;
        lVar6 = lVar14 + 0x100000000;
        if (lVar14 != lRam000000014764e868) {
          lVar9 = lRam000000014764e868;
          lVar6 = lRam000000014764e868;
        }
        lRam000000014764e868 = lVar6;
        UNLOCK();
        bVar15 = lVar14 != lVar9;
        lVar14 = lVar9;
      } while (bVar15);
      return;
    }
  }
  return;
}

