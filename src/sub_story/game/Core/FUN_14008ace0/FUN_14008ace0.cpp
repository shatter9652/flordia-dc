// Recovered from game_scarlett_master.exe (GTA VI, Xbox Series X, PE32+ x64)
// Address: 14008ace0  size: 756 bytes
// Name:    FUN_14008ace0
// Subsystem: core
//
// Referenced strings (0 in this body, 0 including direct callees):
// Callees: FUN_145647140
//
// Generated decompilation. Formatting follows MiscRef/GTAVSRC conventions;
// identifiers are recovered, not original. See ../../../README.md.

#include "gta6decomp/rage_types.h"


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

uint FUN_14008ace0(longlong param_1,uint param_2,ushort *param_3,int param_4)

{
  ushort *puVar1;
  float fVar2;
  float fVar3;
  float fVar4;
  float fVar5;
  longlong lVar6;
  ulonglong uVar7;
  ulonglong uVar8;
  ushort *puVar9;
  uint uVar10;
  undefined4 uVar11;
  undefined1 auVar12 [16];
  undefined1 auVar13 [16];
  undefined1 auVar14 [16];
  undefined1 auVar15 [16];
  undefined1 auVar16 [16];
  undefined1 auVar17 [16];
  float fVar18;
  float fVar22;
  float fVar23;
  undefined1 auVar19 [16];
  undefined1 auVar20 [16];
  undefined1 auVar21 [16];
  float fVar24;
  undefined1 auVar25 [16];
  undefined1 auVar26 [16];
  float fVar27;
  undefined1 auVar28 [16];
  undefined1 auVar29 [16];
  undefined1 auStackX_10 [24];
  undefined8 uStack_28;
  
  uStack_28 = 0x14008acee;
  lVar6 = FUN_145647140();
  lVar6 = -lVar6;
  uVar10 = *(uint *)(param_1 + 0x1b4);
  if ((ulonglong)uVar10 != 0) {
    *(undefined8 *)((longlong)&uStack_28 + lVar6) = 0x14008ad1d;
    func_0x000145f40560(auStackX_10 + lVar6,param_1 + 0x1c0,(ulonglong)uVar10 << 4);
  }
  uVar10 = param_4 + 1U & 0x80000001;
  puVar9 = param_3 + 8;
  if (uVar10 == 1) {
    puVar9 = param_3 + 0x24;
  }
  if ((((uint)*puVar9 < (param_2 & 0xffff)) ||
      (*(char *)((longlong)param_3 + (ulonglong)(uVar10 == 1) + 10) == '\x01')) &&
     (uVar8 = (ulonglong)((uint)*puVar9 * 0x50), (*(uint *)(param_1 + 0x1028c + uVar8) & 3) != 1)) {
    puVar9 = param_3 + 8;
    if (param_4 == 1) {
      puVar9 = param_3 + 0x24;
    }
    if (((uint)*puVar9 < (param_2 & 0xffff)) ||
       (*(char *)((longlong)param_3 + (ulonglong)(param_4 == 1) + 10) == '\x01')) {
      uVar7 = (ulonglong)((uint)*puVar9 * 0x50);
      if ((*(uint *)(param_1 + 0x1028c + uVar7) & 0x10003) == 0x10001) {
        auVar19._0_12_ = ZEXT812(0);
        auVar19._12_4_ = 0;
        puVar9 = (ushort *)(param_1 + 0x10280 + uVar7);
        auVar25 = vsubps_avx(*(undefined1 (*) [16])
                              (auStackX_10 + (ulonglong)((param_3[2] & 0x3fff) << 4) + lVar6),
                             *(undefined1 (*) [16])
                              (auStackX_10 + (ulonglong)((*param_3 & 0x3fff) << 4) + lVar6));
        auVar15 = vcmpps_avx(auVar25,auVar19,0);
        uVar11 = vmovmskps_avx(auVar15);
        auVar12._4_4_ = (float)_DAT_145fc6f70;
        auVar12._0_4_ = (float)_DAT_145fc6f70;
        auVar12._8_4_ = (float)_DAT_145fc6f70;
        auVar12._12_4_ = (float)_DAT_145fc6f70;
        auVar15 = auVar12;
        if ((~(byte)uVar11 & 7) != 0) {
          auVar28._0_4_ = auVar25._0_4_ & _DAT_145fc6f4c;
          auVar28._4_4_ = auVar25._4_4_ & _DAT_145fc6f4c;
          auVar28._8_4_ = auVar25._8_4_ & _DAT_145fc6f4c;
          auVar28._12_4_ = auVar25._12_4_ & _DAT_145fc6f4c;
          auVar15._4_4_ = (float)_DAT_145fc6f70;
          auVar15._0_4_ = (float)_DAT_145fc6f70;
          auVar15._8_4_ = (float)_DAT_145fc6f70;
          auVar15._12_4_ = (float)_DAT_145fc6f70;
          auVar28 = vcmpps_avx(auVar28,auVar15,0x11);
          uVar11 = vmovmskps_avx(auVar28);
          if ((~(byte)uVar11 & 7) == 0) {
            auVar15 = vmovshdup_avx(auVar25);
            auVar16._0_4_ = auVar25._0_4_ ^ _DAT_145fc6f10;
            auVar16._4_4_ = auVar25._4_4_ ^ _DAT_145fc6f10;
            auVar16._8_4_ = auVar25._8_4_ ^ _DAT_145fc6f10;
            auVar16._12_4_ = auVar25._12_4_ ^ _DAT_145fc6f10;
            auVar15 = vunpcklps_avx(auVar15,auVar16);
            auVar15 = vinsertps_avx(auVar15,auVar25,0x74);
            fVar18 = auVar15._0_4_;
            auVar25._0_4_ = fVar18 * fVar18;
            fVar22 = auVar15._4_4_;
            auVar25._4_4_ = fVar22 * fVar22;
            fVar23 = auVar15._8_4_;
            auVar25._8_4_ = fVar23 * fVar23;
            fVar24 = auVar15._12_4_;
            auVar25._12_4_ = fVar24 * fVar24;
            auVar15 = vblendps_avx(auVar25,ZEXT816(0) << 0x20,8);
            auVar15 = vhaddps_avx(auVar15,auVar15);
            auVar15 = vhaddps_avx(auVar15,auVar15);
            auVar25 = vrsqrtps_avx(auVar15);
            auVar15._0_4_ = auVar25._0_4_ * fVar18;
            auVar15._4_4_ = auVar25._4_4_ * fVar22;
            auVar15._8_4_ = auVar25._8_4_ * fVar23;
            auVar15._12_4_ = auVar25._12_4_ * fVar24;
          }
        }
        puVar1 = (ushort *)(param_1 + 0x10280 + uVar8);
        auVar28 = vsubps_avx(*(undefined1 (*) [16])
                              (auStackX_10 + (ulonglong)((puVar9[2] & 0x3fff) << 4) + lVar6),
                             *(undefined1 (*) [16])
                              (auStackX_10 + (ulonglong)((*puVar9 & 0x3fff) << 4) + lVar6));
        auVar25 = vcmpps_avx(auVar28,auVar19,0);
        uVar11 = vmovmskps_avx(auVar25);
        if ((~(byte)uVar11 & 7) != 0) {
          auVar20._0_4_ = auVar28._0_4_ & _DAT_145fc6f4c;
          auVar20._4_4_ = auVar28._4_4_ & _DAT_145fc6f4c;
          auVar20._8_4_ = auVar28._8_4_ & _DAT_145fc6f4c;
          auVar20._12_4_ = auVar28._12_4_ & _DAT_145fc6f4c;
          auVar25 = vcmpps_avx(auVar20,auVar12,0x11);
          uVar11 = vmovmskps_avx(auVar25);
          if ((~(byte)uVar11 & 7) == 0) {
            auVar25 = vmovshdup_avx(auVar28);
            auVar13._0_4_ = auVar28._0_4_ ^ _DAT_145fc6f10;
            auVar13._4_4_ = auVar28._4_4_ ^ _DAT_145fc6f10;
            auVar13._8_4_ = auVar28._8_4_ ^ _DAT_145fc6f10;
            auVar13._12_4_ = auVar28._12_4_ ^ _DAT_145fc6f10;
            auVar25 = vunpcklps_avx(auVar25,auVar13);
            auVar25 = vinsertps_avx(auVar25,auVar28,0x74);
            fVar18 = auVar25._0_4_;
            auVar21._0_4_ = fVar18 * fVar18;
            fVar22 = auVar25._4_4_;
            auVar21._4_4_ = fVar22 * fVar22;
            fVar23 = auVar25._8_4_;
            auVar21._8_4_ = fVar23 * fVar23;
            fVar24 = auVar25._12_4_;
            auVar21._12_4_ = fVar24 * fVar24;
            auVar25 = vblendps_avx(auVar21,ZEXT816(0) << 0x20,8);
            auVar25 = vhaddps_avx(auVar25,auVar25);
            auVar25 = vhaddps_avx(auVar25,auVar25);
            auVar25 = vrsqrtps_avx(auVar25);
            auVar12._0_4_ = auVar25._0_4_ * fVar18;
            auVar12._4_4_ = auVar25._4_4_ * fVar22;
            auVar12._8_4_ = auVar25._8_4_ * fVar23;
            auVar12._12_4_ = auVar25._12_4_ * fVar24;
          }
        }
        auVar29._0_12_ = ZEXT812(0);
        auVar29._12_4_ = 0;
        auVar25 = vsubps_avx(*(undefined1 (*) [16])
                              (auStackX_10 + (ulonglong)((puVar1[2] & 0x3fff) << 4) + lVar6),
                             *(undefined1 (*) [16])
                              (auStackX_10 + (ulonglong)((*puVar1 & 0x3fff) << 4) + lVar6));
        fVar18 = auVar25._0_4_;
        auVar26._0_4_ = fVar18 * fVar18;
        fVar23 = auVar25._4_4_;
        auVar26._4_4_ = fVar23 * fVar23;
        fVar2 = auVar25._8_4_;
        auVar26._8_4_ = fVar2 * fVar2;
        fVar4 = auVar25._12_4_;
        auVar26._12_4_ = fVar4 * fVar4;
        auVar25 = vblendps_avx(auVar26,auVar29,8);
        auVar25 = vhaddps_avx(auVar25,auVar25);
        auVar25 = vhaddps_avx(auVar25,auVar25);
        auVar19 = vrsqrtps_avx(auVar25);
        fVar22 = auVar19._0_4_;
        fVar24 = auVar19._4_4_;
        fVar3 = auVar19._8_4_;
        fVar5 = auVar19._12_4_;
        fVar27 = (float)param_4 * _DAT_146159bd4 + _DAT_145fc6f48;
        fVar18 = fVar18 * fVar27 *
                 ((fVar22 * fVar22 * auVar25._0_4_ * _DAT_145fc6f08 - _DAT_145fc6f08) * fVar22 +
                 fVar22);
        fVar22 = fVar23 * fVar27 *
                 ((fVar24 * fVar24 * auVar25._4_4_ * _DAT_145fc6f08 - _DAT_145fc6f08) * fVar24 +
                 fVar24);
        fVar23 = fVar2 * fVar27 *
                 ((fVar3 * fVar3 * auVar25._8_4_ * _DAT_145fc6f08 - _DAT_145fc6f08) * fVar3 + fVar3)
        ;
        fVar24 = fVar4 * fVar27 *
                 ((fVar5 * fVar5 * auVar25._12_4_ * _DAT_145fc6f08 - _DAT_145fc6f08) * fVar5 + fVar5
                 );
        auVar17._0_4_ = fVar18 * auVar15._0_4_;
        auVar17._4_4_ = fVar22 * auVar15._4_4_;
        auVar17._8_4_ = fVar23 * auVar15._8_4_;
        auVar17._12_4_ = fVar24 * auVar15._12_4_;
        auVar14._0_4_ = fVar18 * auVar12._0_4_;
        auVar14._4_4_ = fVar22 * auVar12._4_4_;
        auVar14._8_4_ = fVar23 * auVar12._8_4_;
        auVar14._12_4_ = fVar24 * auVar12._12_4_;
        auVar25 = vhaddps_avx(auVar17,auVar17);
        auVar15 = vhaddps_avx(auVar14,auVar14);
        auVar15 = vcmpps_avx(ZEXT416(0) << 0x20,auVar15,1);
        auVar25 = vcmpps_avx(auVar25,ZEXT416(0) << 0x20,1);
        uVar10 = auVar25._0_4_ & auVar15._0_4_;
        goto LAB_14008afb2;
      }
    }
  }
  uVar10 = 0;
LAB_14008afb2:
  return uVar10 & 0xffffff01;
}

