// Recovered from game_scarlett_master.exe (GTA VI, Xbox Series X, PE32+ x64)
// Address: 1401125e0  size: 714 bytes
// Name:    FUN_1401125e0
// Subsystem: core
//
// Referenced strings (0 in this body, 0 including direct callees):
// Callees: FUN_1424f1b40, FUN_14555f6e0
//
// Generated decompilation. Formatting follows MiscRef/GTAVSRC conventions;
// identifiers are recovered, not original. See ../../../README.md.

#include "gta6decomp/rage_types.h"


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1401125e0(longlong param_1,undefined8 *param_2)

{
  longlong lVar1;
  float fVar2;
  float fVar3;
  float fVar4;
  float fVar5;
  float fVar6;
  float fVar7;
  float fVar8;
  float fVar9;
  byte bVar10;
  ulonglong uVar11;
  longlong lVar12;
  int iVar13;
  longlong lVar14;
  byte bVar15;
  byte bVar16;
  int iVar17;
  int iVar18;
  undefined1 auVar19 [16];
  undefined1 auVar20 [16];
  undefined1 auVar21 [16];
  undefined1 auVar22 [64];
  undefined1 auVar23 [64];
  undefined1 auVar24 [64];
  undefined1 auVar25 [64];
  undefined1 auVar26 [64];
  undefined1 in_ZMM11 [64];
  undefined1 auVar27 [64];
  undefined8 uStack_118;
  undefined8 uStack_110;
  undefined8 uStack_108;
  undefined8 uStack_100;
  undefined8 uStack_f8;
  undefined8 uStack_f0;
  undefined8 uStack_e8;
  undefined8 uStack_e0;
  undefined1 auStack_d8 [16];
  float fStack_c8;
  float fStack_c4;
  float fStack_c0;
  float fStack_bc;
  undefined1 auStack_b8 [96];
  undefined1 auStack_58 [16];
  
  auStack_58 = in_ZMM11._0_16_;
  if (param_2 == (undefined8 *)0x0) {
    uVar11 = *(ulonglong *)(param_1 + 8) & 0xfffffffffffffff0;
    lVar12 = *(longlong *)(uVar11 + 0x38);
    if (lVar12 == 0) {
      uStack_118 = *(undefined8 *)(uVar11 + 0x40);
      uStack_110 = *(undefined8 *)(uVar11 + 0x48);
      uStack_108 = *(undefined8 *)(uVar11 + 0x50);
      uStack_100 = *(undefined8 *)(uVar11 + 0x58);
      uStack_f8 = *(undefined8 *)(uVar11 + 0x60);
      uStack_f0 = *(undefined8 *)(uVar11 + 0x68);
      auVar19 = *(undefined1 (*) [16])(uVar11 + 0x70);
    }
    else {
      uStack_118 = *(undefined8 *)(lVar12 + 0x50);
      uStack_110 = *(undefined8 *)(lVar12 + 0x58);
      uStack_108 = *(undefined8 *)(lVar12 + 0x60);
      uStack_100 = *(undefined8 *)(lVar12 + 0x68);
      uStack_f8 = *(undefined8 *)(lVar12 + 0x70);
      uStack_f0 = *(undefined8 *)(lVar12 + 0x78);
      auVar19 = *(undefined1 (*) [16])(lVar12 + 0x80);
    }
    auVar20 = vpunpckhwd_avx(auVar19,auVar19);
    auVar20 = vpsrad_avx(auVar20,0x10);
    auVar20 = vcvtdq2ps_avx(auVar20);
    auVar20 = vshufpd_avx(auVar20,auVar20,3);
    uStack_e8 = CONCAT44(auVar20._4_4_ * _UNK_146159c94 + auVar19._4_4_,
                         auVar20._0_4_ * _DAT_146159c90 + auVar19._0_4_);
    uStack_e0 = CONCAT44(auVar20._12_4_ * _UNK_146159c9c + auVar19._12_4_,
                         auVar20._8_4_ * _UNK_146159c98 + auVar19._8_4_);
  }
  else {
    uStack_118 = *param_2;
    uStack_110 = param_2[1];
    uStack_108 = param_2[2];
    uStack_100 = param_2[3];
    uStack_f8 = param_2[4];
    uStack_f0 = param_2[5];
    uStack_e8 = param_2[6];
    uStack_e0 = param_2[7];
  }
  if (0 < *(int *)(param_1 + 100)) {
    auVar23 = ZEXT1664(CONCAT412(_DAT_145fc6f08,
                                 CONCAT48(_DAT_145fc6f08,CONCAT44(_DAT_145fc6f08,_DAT_145fc6f08))));
    auVar24 = ZEXT1664(CONCAT412(_DAT_145fc6f14,
                                 CONCAT48(_DAT_145fc6f14,CONCAT44(_DAT_145fc6f14,_DAT_145fc6f14))));
    auVar25 = ZEXT1664(_DAT_14614f7f0);
    auVar26 = ZEXT464(_DAT_14615af00);
    iVar17 = *(int *)(param_1 + 0x94);
    iVar13 = 0;
    auVar22 = ZEXT1264(ZEXT812(0));
    do {
      auVar22 = ZEXT1664(auVar22._0_16_);
      auVar23 = ZEXT1664(auVar23._0_16_);
      auVar24 = ZEXT1664(auVar24._0_16_);
      auVar25 = ZEXT1664(auVar25._0_16_);
      auVar26 = ZEXT1664(auVar26._0_16_);
      lVar12 = func_0x000144f2e340(*(undefined8 *)(param_1 + 0x68),iVar13);
      if (0 < iVar17) {
        lVar14 = 0;
        auVar27 = ZEXT1264(ZEXT812(0));
        bVar15 = 0;
        bVar16 = 0;
        iVar18 = 0;
        do {
          lVar1 = *(longlong *)(*(longlong *)(param_1 + 0x98) + lVar14 * 8);
          if (*(longlong *)(lVar1 + 0x1180) == lVar12) {
            bVar10 = FUN_1424f1b40(lVar1,auStack_b8,&fStack_c8);
            bVar16 = bVar16 | bVar10;
            auVar27 = ZEXT1664(CONCAT412(auVar27._12_4_ + fStack_bc,
                                         CONCAT48(auVar27._8_4_ + fStack_c0,
                                                  CONCAT44(auVar27._4_4_ + fStack_c4,
                                                           auVar27._0_4_ + fStack_c8))));
            uVar11 = *(ulonglong *)(lVar1 + 0x1198);
            iVar18 = iVar18 + 1;
            *(ulonglong *)(lVar1 + 0x1198) = uVar11 & 0xffffffffff7fffff;
            bVar15 = bVar15 | (byte)((uint)uVar11 >> 0x17) & 1;
            iVar17 = *(int *)(param_1 + 0x94);
          }
          lVar14 = lVar14 + 1;
        } while (lVar14 < iVar17);
        if ((bVar16 & 1) != 0) {
          auStack_d8 = auVar27._0_16_;
          if (0 < iVar18) {
            fVar2 = auVar27._0_4_;
            auVar19._0_4_ = fVar2 * fVar2;
            fVar4 = auVar27._4_4_;
            auVar19._4_4_ = fVar4 * fVar4;
            fVar6 = auVar27._8_4_;
            auVar19._8_4_ = fVar6 * fVar6;
            fVar8 = auVar27._12_4_;
            auVar19._12_4_ = fVar8 * fVar8;
            auVar19 = vblendps_avx(auVar19,auVar22._0_16_,8);
            auVar19 = vhaddps_avx(auVar19,auVar19);
            auVar20 = vhaddps_avx(auVar19,auVar19);
            auVar19 = vrsqrtps_avx(auVar20);
            fVar3 = auVar19._0_4_;
            fVar5 = auVar19._4_4_;
            fVar7 = auVar19._8_4_;
            fVar9 = auVar19._12_4_;
            auVar19 = vcmpps_avx(auVar24._0_16_,auVar20,1);
            auVar21._0_4_ =
                 fVar2 * ((auVar23._0_4_ * fVar3 * fVar3 * auVar20._0_4_ - auVar23._0_4_) * fVar3 +
                         fVar3);
            auVar21._4_4_ =
                 fVar4 * ((auVar23._4_4_ * fVar5 * fVar5 * auVar20._4_4_ - auVar23._4_4_) * fVar5 +
                         fVar5);
            auVar21._8_4_ =
                 fVar6 * ((auVar23._8_4_ * fVar7 * fVar7 * auVar20._8_4_ - auVar23._8_4_) * fVar7 +
                         fVar7);
            auVar21._12_4_ =
                 fVar8 * ((auVar23._12_4_ * fVar9 * fVar9 * auVar20._12_4_ - auVar23._12_4_) * fVar9
                         + fVar9);
            auStack_d8 = vblendvps_avx(auVar25._0_16_,auVar21,auVar19);
          }
          func_0x0001455ad610(lVar12,auStack_d8);
          func_0x00014506e070(lVar12,&uStack_118);
          *(byte *)(lVar12 + 0x94) = *(byte *)(lVar12 + 0x94) & 0xfe;
          if ((bVar15 != 0) || (*(float *)(lVar12 + 0x60) < auVar26._0_4_)) {
            func_0x0001401a7430(lVar12,bVar15);
          }
          iVar17 = *(int *)(param_1 + 0x94);
          if (0 < iVar17) {
            lVar14 = 0;
            do {
              if (*(longlong *)(*(longlong *)(*(longlong *)(param_1 + 0x98) + lVar14 * 8) + 0x1180)
                  == lVar12) {
                FUN_14555f6e0();
                iVar17 = *(int *)(param_1 + 0x94);
              }
              lVar14 = lVar14 + 1;
            } while (lVar14 < iVar17);
          }
        }
      }
      iVar13 = iVar13 + 1;
    } while (iVar13 < *(int *)(param_1 + 100));
  }
  return;
}

