// Recovered from game_scarlett_master.exe (GTA VI, Xbox Series X, PE32+ x64)
// Address: 1400d2070  size: 1253 bytes
// Name:    FUN_1400d2070
// Subsystem: core
//
// Referenced strings (0 in this body, 0 including direct callees):
// Callees: FUN_144e710b0, FUN_1400d0240, FUN_144ec6670, FUN_144f67c80, FUN_144ec6720, FUN_144f63ee0
//
// Generated decompilation. Formatting follows MiscRef/GTAVSRC conventions;
// identifiers are recovered, not original. See ../../../README.md.

#include "gta6decomp/rage_types.h"


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1400d2070(undefined8 param_1,undefined8 param_2,undefined1 (*param_3) [16],
                  longlong *param_4,float *param_5,float *param_6)

{
  ushort uVar1;
  longlong lVar2;
  undefined8 uVar3;
  undefined8 *puVar4;
  longlong lVar5;
  ulonglong uVar6;
  undefined8 *puVar7;
  undefined4 uVar8;
  undefined1 auVar9 [16];
  undefined1 auVar10 [16];
  undefined1 auVar11 [16];
  undefined1 auVar12 [16];
  undefined1 auVar13 [16];
  undefined1 auVar14 [16];
  float fVar15;
  float fVar17;
  float fVar18;
  float fVar19;
  undefined1 auVar16 [16];
  undefined1 auVar20 [64];
  undefined1 auVar21 [16];
  undefined1 auVar22 [64];
  undefined1 auVar23 [64];
  undefined1 auVar24 [64];
  undefined1 auVar25 [64];
  undefined1 auVar26 [64];
  undefined1 auStack_e18 [16];
  undefined1 auStack_e08 [16];
  uint uStack_df4;
  undefined1 auStack_df0 [1024];
  undefined8 uStack_9f0;
  undefined8 uStack_9e8;
  undefined8 uStack_9e0;
  undefined8 uStack_9d8;
  undefined8 uStack_9d0;
  undefined8 uStack_9c8;
  undefined8 uStack_9c0;
  undefined8 uStack_9b8;
  undefined8 uStack_9b0;
  undefined8 uStack_98b;
  undefined8 uStack_978;
  undefined8 uStack_970;
  undefined8 uStack_968;
  undefined8 uStack_960;
  undefined8 uStack_958;
  undefined8 uStack_950;
  undefined8 uStack_948;
  undefined8 uStack_940;
  undefined8 uStack_938;
  undefined8 uStack_930;
  undefined8 uStack_928;
  undefined8 uStack_920;
  undefined8 uStack_918;
  undefined8 uStack_910;
  undefined8 *puStack_908;
  undefined8 uStack_900;
  undefined8 uStack_8f8;
  undefined8 uStack_8f0;
  undefined8 uStack_8e8;
  undefined1 auStack_8e0 [1024];
  undefined8 uStack_4e0;
  undefined8 uStack_4d8;
  undefined8 uStack_4d0;
  undefined8 uStack_4c8;
  undefined8 uStack_4c0;
  undefined8 uStack_4b8;
  undefined8 uStack_4b0;
  undefined8 uStack_4a8;
  undefined8 uStack_4a0;
  undefined8 uStack_47b;
  undefined8 uStack_468;
  undefined8 uStack_460;
  undefined8 uStack_458;
  undefined8 uStack_450;
  undefined8 uStack_448;
  undefined8 uStack_440;
  undefined8 uStack_438;
  undefined8 uStack_430;
  undefined8 uStack_428;
  undefined8 uStack_420;
  undefined8 uStack_418;
  undefined8 uStack_410;
  undefined8 uStack_408;
  undefined8 uStack_400;
  undefined4 uStack_2f8;
  undefined1 auStack_2f0 [16];
  undefined1 *puStack_2e0;
  undefined1 auStack_2d8 [48];
  undefined8 uStack_2a8;
  undefined4 uStack_a0;
  
  if ((*(uint *)(param_4 + 4) < 4) && (*(uint *)(param_4 + 4) != 1)) {
    func_0x000144e71130((int)param_4[3]);
    *(undefined2 *)((longlong)param_4 + 0x1e) = 0;
    *(undefined4 *)(param_4 + 4) = 0;
    if (*param_4 != 0) {
      func_0x000145f40580(*param_4,0);
      if (*(short *)((longlong)param_4 + 0x1c) != 0) {
        lVar5 = 0x2a;
        uVar6 = 0;
        do {
          lVar2 = *param_4;
          uVar6 = uVar6 + 1;
          *(undefined8 *)(lVar2 + -10 + lVar5) = 0xffffffff00000000;
          *(undefined1 *)(lVar2 + lVar5) = 0;
          *(undefined2 *)(lVar2 + -2 + lVar5) = 0xffff;
          lVar5 = lVar5 + 0x40;
        } while (uVar6 < *(ushort *)((longlong)param_4 + 0x1c));
      }
    }
    auVar21._4_4_ = _DAT_14615a290;
    auVar21._0_4_ = _DAT_14615a290;
    auVar21._8_4_ = _DAT_14615a290;
    auVar21._12_4_ = _DAT_14615a290;
    auVar11._0_4_ = *(float *)*param_3 + *param_6;
    auVar11._4_4_ = *(float *)(*param_3 + 4) + param_6[1];
    auVar11._8_4_ = *(float *)(*param_3 + 8) + param_6[2];
    auVar11._12_4_ = *(float *)(*param_3 + 0xc) + param_6[3];
    auVar10 = vblendps_avx(auVar11,*param_3,8);
    auVar20 = ZEXT1664(auVar10);
    auVar9 = vrcpps_avx(auVar21);
    fVar15 = auVar9._0_4_;
    fVar17 = auVar9._4_4_;
    fVar18 = auVar9._8_4_;
    fVar19 = auVar9._12_4_;
    fVar15 = (-(fVar15 * _DAT_14615a290) + _DAT_145fc6ed8) * fVar15 + fVar15;
    fVar17 = (-(fVar17 * _DAT_14615a290) + _DAT_145fc6ed8) * fVar17 + fVar17;
    fVar18 = (-(fVar18 * _DAT_14615a290) + _DAT_145fc6ed8) * fVar18 + fVar18;
    fVar19 = (-(fVar19 * _DAT_14615a290) + _DAT_145fc6ed8) * fVar19 + fVar19;
    auVar12._0_4_ = fVar15 * auVar10._0_4_;
    auVar12._4_4_ = fVar17 * auVar10._4_4_;
    auVar12._8_4_ = fVar18 * auVar10._8_4_;
    auVar12._12_4_ = fVar19 * auVar10._12_4_;
    auVar9 = vroundps_avx(auVar12,3);
    auVar23 = ZEXT1664(CONCAT412(-(auVar9._12_4_ * _DAT_14615a290) + auVar10._12_4_,
                                 CONCAT48(-(auVar9._8_4_ * _DAT_14615a290) + auVar10._8_4_,
                                          CONCAT44(-(auVar9._4_4_ * _DAT_14615a290) + auVar10._4_4_,
                                                   -(auVar9._0_4_ * _DAT_14615a290) + auVar10._0_4_)
                                         )));
    auVar13._0_4_ = (int)auVar9._0_4_;
    auVar13._4_4_ = (int)auVar9._4_4_;
    auVar13._8_4_ = (int)auVar9._8_4_;
    auVar13._12_4_ = (int)auVar9._12_4_;
    auVar10 = vpackssdw_avx(auVar13,auVar13);
    uVar8 = auVar10._0_4_;
    auVar24 = ZEXT1664(CONCAT412(uVar8,CONCAT48(uVar8,CONCAT44(uVar8,uVar8))));
    auVar14._0_4_ = *(float *)*param_3 + *param_5;
    auVar14._4_4_ = *(float *)(*param_3 + 4) + param_5[1];
    auVar14._8_4_ = *(float *)(*param_3 + 8) + param_5[2];
    auVar14._12_4_ = *(float *)(*param_3 + 0xc) + param_5[3];
    auVar10 = vblendps_avx(auVar14,*param_3,8);
    auVar25 = ZEXT1664(auVar10);
    auVar9._0_4_ = auVar10._0_4_ * fVar15;
    auVar9._4_4_ = auVar10._4_4_ * fVar17;
    auVar9._8_4_ = auVar10._8_4_ * fVar18;
    auVar9._12_4_ = auVar10._12_4_ * fVar19;
    uStack_2f8 = 0;
    auVar9 = vroundps_avx(auVar9,3);
    auVar22 = ZEXT1664(CONCAT412(-(auVar9._12_4_ * _DAT_14615a290) + auVar10._12_4_,
                                 CONCAT48(-(auVar9._8_4_ * _DAT_14615a290) + auVar10._8_4_,
                                          CONCAT44(-(auVar9._4_4_ * _DAT_14615a290) + auVar10._4_4_,
                                                   -(auVar9._0_4_ * _DAT_14615a290) + auVar10._0_4_)
                                         )));
    auVar10._0_4_ = (int)auVar9._0_4_;
    auVar10._4_4_ = (int)auVar9._4_4_;
    auVar10._8_4_ = (int)auVar9._8_4_;
    auVar10._12_4_ = (int)auVar9._12_4_;
    auVar10 = vpackssdw_avx(auVar10,auVar10);
    uVar8 = auVar10._0_4_;
    auVar26 = ZEXT1664(CONCAT412(uVar8,CONCAT48(uVar8,CONCAT44(uVar8,uVar8))));
    auStack_2f0._0_12_ = ZEXT412(6) << 0x40;
    auStack_2f0._12_4_ = 0;
    uStack_2a8 = 0x80;
    uStack_a0 = 0;
    puStack_2e0 = auStack_2d8;
    FUN_144f63ee0(auStack_e18);
    auVar14 = auVar26._0_16_;
    auVar13 = auVar25._0_16_;
    auVar9 = auVar22._0_16_;
    auVar12 = auVar24._0_16_;
    auVar11 = auVar23._0_16_;
    auVar10 = auVar20._0_16_;
    if (*(char *)(auStack_e18._0_8_ + 0x1e) == '\x03') {
      puStack_908 = (undefined8 *)auStack_e18._0_8_;
      uStack_900 = auStack_e18._8_8_;
      uStack_8f8 = auStack_e08._0_8_;
      uStack_8f0 = auStack_e08._8_8_;
      uStack_8e8 = 0x100;
      if ((ulonglong)uStack_df4 != 0) {
        if (0x100 < uStack_df4) {
          uStack_8e8 = (ulonglong)uStack_df4;
        }
        auVar20 = ZEXT1664(auVar10);
        auVar22 = ZEXT1664(auVar9);
        auVar23 = ZEXT1664(auVar11);
        auVar24 = ZEXT1664(auVar12);
        auVar25 = ZEXT1664(auVar13);
        auVar26 = ZEXT1664(auVar14);
        func_0x000145f40560(auStack_8e0,auStack_df0,(ulonglong)uStack_df4 << 2);
        auVar14 = auVar26._0_16_;
        auVar13 = auVar25._0_16_;
        auVar9 = auVar22._0_16_;
        auVar12 = auVar24._0_16_;
        auVar11 = auVar23._0_16_;
        auVar10 = auVar20._0_16_;
        uStack_8e8 = CONCAT44(uStack_df4,(undefined4)uStack_8e8);
      }
      uStack_47b = uStack_98b;
      uStack_4a0 = uStack_9b0;
      uStack_4c0 = uStack_9d0;
      uStack_4b8 = uStack_9c8;
      uStack_4b0 = uStack_9c0;
      uStack_4a8 = uStack_9b8;
      uStack_4e0 = uStack_9f0;
      uStack_4d8 = uStack_9e8;
      uStack_4d0 = uStack_9e0;
      uStack_4c8 = uStack_9d8;
      uStack_468 = uStack_978;
      uStack_460 = uStack_970;
      uStack_458 = uStack_968;
      uStack_450 = uStack_960;
      uStack_448 = uStack_958;
      uStack_440 = uStack_950;
      uStack_438 = uStack_948;
      uStack_430 = uStack_940;
      uStack_428 = uStack_938;
      uStack_420 = uStack_930;
      uStack_418 = uStack_928;
      uStack_410 = uStack_920;
      uStack_408 = uStack_918;
      uStack_400 = uStack_910;
    }
    else {
      func_0x000145f40560(&puStack_908,auStack_e18,0x510);
      auVar14 = auVar26._0_16_;
      auVar13 = auVar25._0_16_;
      auVar9 = auVar22._0_16_;
      auVar12 = auVar24._0_16_;
      auVar11 = auVar23._0_16_;
      auVar10 = auVar20._0_16_;
    }
    puStack_908 = &uStack_468;
    auVar11 = vblendps_avx(auVar10,auVar11,3);
    auVar9 = vblendps_avx(auVar13,auVar9,3);
    auVar20 = ZEXT1664(CONCAT214(auVar12._14_2_ + auVar10._14_2_,
                                 CONCAT212(auVar12._12_2_ + auVar10._12_2_,
                                           CONCAT210(auVar12._10_2_ + auVar10._10_2_,
                                                     CONCAT28(auVar12._8_2_ + auVar10._8_2_,
                                                              CONCAT26(auVar12._6_2_ + auVar10._6_2_
                                                                       ,CONCAT24(auVar12._4_2_ +
                                                                                 auVar10._4_2_,
                                                                                 CONCAT22(auVar12.
                                                  _2_2_ + auVar10._2_2_,
                                                  auVar12._0_2_ + auVar10._0_2_))))))));
    auVar22 = ZEXT1664(auVar9);
    auVar23 = ZEXT1664(auVar11);
    auVar24 = ZEXT1664(CONCAT214(auVar14._14_2_ + auVar13._14_2_,
                                 CONCAT212(auVar14._12_2_ + auVar13._12_2_,
                                           CONCAT210(auVar14._10_2_ + auVar13._10_2_,
                                                     CONCAT28(auVar14._8_2_ + auVar13._8_2_,
                                                              CONCAT26(auVar14._6_2_ + auVar13._6_2_
                                                                       ,CONCAT24(auVar14._4_2_ +
                                                                                 auVar13._4_2_,
                                                                                 CONCAT22(auVar14.
                                                  _2_2_ + auVar13._2_2_,
                                                  auVar14._0_2_ + auVar13._0_2_))))))));
    FUN_1400d0240(param_1,&puStack_908,param_2);
    auVar12 = auVar24._0_16_;
    auVar9 = auVar22._0_16_;
    auVar11 = auVar23._0_16_;
    auVar10 = auVar20._0_16_;
    auStack_2f0._0_8_ = param_4;
    if ((int)param_4[4] == 3) {
      FUN_144e710b0(param_4);
      auVar12 = auVar24._0_16_;
      auVar9 = auVar22._0_16_;
      auVar11 = auVar23._0_16_;
      auVar10 = auVar20._0_16_;
    }
    lVar5 = *param_4;
    auVar10 = vblendps_avx(auVar11,auVar10,8);
    auVar20 = ZEXT1664(auVar10);
    auVar10 = vblendps_avx(auVar9,auVar12,8);
    auVar22 = ZEXT1664(auVar10);
    if (lVar5 == 0) {
      FUN_144ec6720();
      uVar1 = *(ushort *)((longlong)param_4 + 0x1c);
      puVar4 = (undefined8 *)func_0x000144f97130((ulonglong)uVar1 << 6);
      if ((uVar1 != 0) && (puVar4 != (undefined8 *)0x0)) {
        puVar7 = puVar4;
        do {
          puVar7[2] = 0;
          puVar7[3] = 0;
          puVar7[4] = 0;
          puVar7[5] = 0;
          *puVar7 = 0;
          puVar7[1] = 0;
          puVar7[2] = 0;
          puVar7[3] = 0;
          puVar7[4] = 0xffffffff00000000;
          *(undefined2 *)(puVar7 + 5) = 0xffff;
          puVar7 = puVar7 + 8;
        } while (puVar7 != puVar4 + (ulonglong)uVar1 * 8);
      }
      *param_4 = (longlong)puVar4;
      auVar20 = ZEXT1664(auVar20._0_16_);
      auVar22 = ZEXT1664(auVar22._0_16_);
      FUN_144ec6670();
      *(undefined1 *)((longlong)param_4 + 0x24) = 1;
      lVar5 = *param_4;
    }
    func_0x000144f65500(puStack_908,lVar5,*(undefined2 *)((longlong)param_4 + 0x1c),0);
    auVar10 = vpunpckhwd_avx(auVar22._0_16_,auVar22._0_16_);
    auVar10 = vpsrad_avx(auVar10,0x10);
    auVar10 = vcvtdq2ps_avx(auVar10);
    puStack_908[2] = param_4;
    auVar9 = vshufpd_avx(auVar10,auVar10,3);
    auVar16._8_8_ = 0;
    auVar16._0_8_ = _DAT_146159c90;
    auVar10 = vpunpckhwd_avx(auVar16,auVar20._0_16_);
    fVar15 = (float)(_DAT_146159c90 >> 0x20);
    auVar22 = ZEXT1664(CONCAT412(auVar9._12_4_ * 0.0 + auVar22._12_4_,
                                 CONCAT48(auVar9._8_4_ * 0.0 + auVar22._8_4_,
                                          CONCAT44(fVar15 * auVar9._4_4_ + auVar22._4_4_,
                                                   (float)_DAT_146159c90 * auVar9._0_4_ +
                                                   auVar22._0_4_))));
    auVar10 = vpsrad_avx(auVar10,0x10);
    auVar10 = vcvtdq2ps_avx(auVar10);
    auVar10 = vshufpd_avx(auVar10,auVar10,3);
    auVar20 = ZEXT1664(CONCAT412(auVar10._12_4_ * 0.0 + auVar20._12_4_,
                                 CONCAT48(auVar10._8_4_ * 0.0 + auVar20._8_4_,
                                          CONCAT44(fVar15 * auVar10._4_4_ + auVar20._4_4_,
                                                   (float)_DAT_146159c90 * auVar10._0_4_ +
                                                   auVar20._0_4_))));
    uVar3 = func_0x000144febb80(&puStack_908);
    auStack_e18 = auVar20._0_16_;
    auStack_e08 = auVar22._0_16_;
    func_0x0001453159b0(uVar3);
    func_0x000144f64560(&puStack_908,0);
    uStack_2a8 = 0x80;
    auStack_2f0._12_4_ = 0;
    if ((auStack_2d8 != puStack_2e0) && (puStack_2e0 != (undefined1 *)0x0)) {
      func_0x000144d9c130();
    }
    auStack_2f0._8_4_ = 6;
    puStack_2e0 = (undefined1 *)0x0;
    FUN_144f67c80();
  }
  return;
}

