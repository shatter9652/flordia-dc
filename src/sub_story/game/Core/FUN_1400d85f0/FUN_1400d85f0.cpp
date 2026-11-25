// Recovered from game_scarlett_master.exe (GTA VI, Xbox Series X, PE32+ x64)
// Address: 1400d85f0  size: 1140 bytes
// Name:    FUN_1400d85f0
// Subsystem: core
//
// Referenced strings (0 in this body, 0 including direct callees):
// Callees: FUN_1409893b0, FUN_1400d0240, FUN_144f67c80
//
// Generated decompilation. Formatting follows MiscRef/GTAVSRC conventions;
// identifiers are recovered, not original. See ../../../README.md.

#include "gta6decomp/rage_types.h"


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined1 FUN_1400d85f0(undefined8 param_1,longlong *param_2,longlong param_3,undefined8 param_4)

{
  longlong *plVar1;
  undefined1 auVar2 [16];
  undefined1 auVar3 [16];
  undefined1 auVar4 [16];
  undefined1 auVar5 [16];
  undefined1 auVar6 [16];
  longlong lVar7;
  int iVar8;
  undefined4 uVar9;
  undefined8 uVar10;
  undefined1 uVar11;
  short sVar12;
  short sVar16;
  undefined1 auVar13 [16];
  undefined1 auVar14 [16];
  undefined1 auVar15 [16];
  undefined1 auVar17 [16];
  undefined1 auVar18 [16];
  undefined1 auVar19 [16];
  undefined1 auVar20 [16];
  undefined1 auVar21 [16];
  undefined1 auVar22 [16];
  undefined1 auVar23 [16];
  undefined1 auVar24 [16];
  float fVar25;
  undefined1 auVar26 [16];
  float fVar28;
  float fVar29;
  float fVar30;
  undefined1 auVar27 [64];
  undefined1 auVar31 [64];
  float fVar32;
  float fVar33;
  float fVar34;
  float fVar35;
  float fVar36;
  float fVar38;
  float fVar39;
  float fVar40;
  undefined1 auVar37 [64];
  undefined1 auVar41 [64];
  longlong *plStack_948;
  int iStack_940;
  float fStack_938;
  float fStack_934;
  float fStack_930;
  float fStack_92c;
  float fStack_928;
  float fStack_924;
  float fStack_920;
  float fStack_91c;
  float fStack_918;
  float fStack_914;
  float fStack_910;
  float fStack_90c;
  float fStack_908;
  float fStack_904;
  float fStack_900;
  float fStack_8fc;
  undefined1 auStack_8f8 [16];
  float fStack_8e8;
  float fStack_8e4;
  float fStack_8e0;
  float fStack_8dc;
  undefined1 auStack_8d8 [16];
  undefined4 uStack_2e8;
  undefined1 auStack_2e0 [16];
  undefined1 *puStack_2d0;
  undefined1 auStack_2c8 [48];
  undefined8 uStack_298;
  undefined4 uStack_90;
  
  if (param_3 == 0) {
    (**(code **)(*(longlong *)*param_2 + 0x18))((longlong *)*param_2,&plStack_948,0);
    iVar8 = func_0x000144e05fa0(plStack_948[1]);
    fVar32 = 0.0;
    fVar33 = 0.0;
    fVar34 = 0.0;
    fVar35 = 0.0;
    fVar25 = 0.0;
    fVar28 = 0.0;
    fVar29 = 0.0;
    fVar30 = 0.0;
    if (iStack_940 != iVar8) {
      uVar9 = (**(code **)(*plStack_948 + 0xf0))(plStack_948,iStack_940);
      (**(code **)(*plStack_948 + 0x108))(plStack_948,uVar9,auStack_8f8);
      fVar25 = fStack_8e8;
      fVar28 = fStack_8e4;
      fVar29 = fStack_8e0;
      fVar30 = fStack_8dc;
    }
    (**(code **)(*plStack_948 + 0x88))(plStack_948,auStack_8f8);
    auVar26._4_4_ = fStack_8e4;
    auVar26._0_4_ = fStack_8e8;
    auVar26._8_4_ = fStack_8e0;
    auVar26._12_4_ = fStack_8dc;
    auVar15 = vshufps_avx(auVar26,auStack_8d8,0x33);
    auVar15 = vshufps_avx(auVar26,auVar15,0x2f);
    auVar31 = ZEXT1664(CONCAT412((auVar15._12_4_ + _DAT_145fc6ed8) * fVar30,
                                 CONCAT48((auVar15._8_4_ + _DAT_145fc6ed8) * fVar29,
                                          CONCAT44((auVar15._4_4_ + _DAT_145fc6ed8) * fVar28,
                                                   (auVar15._0_4_ + _DAT_145fc6ed8) * fVar25))));
    fVar25 = _DAT_145fc6ed8;
    fVar28 = _DAT_145fc6ed8;
    fVar29 = _DAT_145fc6ed8;
    fVar30 = _DAT_145fc6ed8;
    (**(code **)(*plStack_948 + 0x88))(plStack_948,&fStack_938);
    auVar3._4_4_ = fStack_904;
    auVar3._0_4_ = fStack_908;
    auVar3._8_4_ = fStack_900;
    auVar3._12_4_ = fStack_8fc;
    fVar36 = auVar31._0_4_;
    auVar23._4_4_ = _DAT_14615a290;
    auVar23._0_4_ = _DAT_14615a290;
    auVar23._8_4_ = _DAT_14615a290;
    auVar23._12_4_ = _DAT_14615a290;
    auVar15 = auVar31._0_16_;
    auVar26 = vshufps_avx(auVar15,auVar15,0x55);
    auVar21 = vshufps_avx(auVar15,auVar15,0xaa);
    plVar1 = (longlong *)*param_2;
    lVar7 = param_2[1];
    auVar15 = vrcpps_avx(auVar23);
    auVar13._0_4_ =
         auVar21._0_4_ * fStack_918 + auVar26._0_4_ * fStack_928 + fVar36 * fStack_938 + fStack_908;
    auVar13._4_4_ =
         auVar21._4_4_ * fStack_914 + auVar26._4_4_ * fStack_924 + fVar36 * fStack_934 + fStack_904;
    auVar13._8_4_ =
         auVar21._8_4_ * fStack_910 + auVar26._8_4_ * fStack_920 + fVar36 * fStack_930 + fStack_900;
    auVar13._12_4_ =
         auVar21._12_4_ * fStack_90c +
         auVar26._12_4_ * fStack_91c + fVar36 * fStack_92c + fStack_8fc;
    fVar36 = auVar15._0_4_;
    fVar38 = auVar15._4_4_;
    fVar39 = auVar15._8_4_;
    fVar40 = auVar15._12_4_;
    fVar36 = (-(fVar36 * _DAT_14615a290) + fVar25) * fVar36 + fVar36;
    fVar38 = (-(fVar38 * _DAT_14615a290) + fVar28) * fVar38 + fVar38;
    fVar39 = (-(fVar39 * _DAT_14615a290) + fVar29) * fVar39 + fVar39;
    fVar40 = (-(fVar40 * _DAT_14615a290) + fVar30) * fVar40 + fVar40;
    auVar15 = vblendps_avx(auVar13,auVar3,8);
    auVar21._0_4_ = fVar36 * auVar15._0_4_;
    auVar21._4_4_ = fVar38 * auVar15._4_4_;
    auVar21._8_4_ = fVar39 * auVar15._8_4_;
    auVar21._12_4_ = fVar40 * auVar15._12_4_;
    auVar26 = vroundps_avx(auVar21,3);
    auVar24._0_4_ = -(auVar26._0_4_ * _DAT_14615a290) + auVar15._0_4_;
    auVar24._4_4_ = -(auVar26._4_4_ * _DAT_14615a290) + auVar15._4_4_;
    auVar24._8_4_ = -(auVar26._8_4_ * _DAT_14615a290) + auVar15._8_4_;
    auVar24._12_4_ = -(auVar26._12_4_ * _DAT_14615a290) + auVar15._12_4_;
    auVar15 = vblendps_avx(auVar13,auVar24,3);
    auVar31 = ZEXT1664(auVar15);
    auVar15._0_4_ = (int)auVar26._0_4_;
    auVar15._4_4_ = (int)auVar26._4_4_;
    auVar15._8_4_ = (int)auVar26._8_4_;
    auVar15._12_4_ = (int)auVar26._12_4_;
    auVar15 = vpackssdw_avx(auVar15,auVar15);
    sVar12 = auVar15._0_2_;
    sVar16 = auVar15._2_2_;
    auVar41 = ZEXT1664(CONCAT214(sVar16 + (short)((uint)fStack_8fc >> 0x10),
                                 CONCAT212(sVar12 + SUB42(fStack_8fc,0),
                                           CONCAT210(sVar16 + (short)((uint)fStack_900 >> 0x10),
                                                     CONCAT28(sVar12 + SUB42(fStack_900,0),
                                                              CONCAT26(sVar16 + (short)((uint)
                                                  fStack_904 >> 0x10),
                                                  CONCAT24(sVar12 + SUB42(fStack_904,0),
                                                           CONCAT22(sVar16 + (short)((uint)
                                                  fStack_908 >> 0x10),sVar12 + SUB42(fStack_908,0)))
                                                  ))))));
    iVar8 = func_0x000144e05fa0(plVar1[1]);
    auVar26 = auVar41._0_16_;
    auVar15 = auVar31._0_16_;
    if ((int)lVar7 != iVar8) {
      uVar9 = (**(code **)(*plVar1 + 0xf0))(plVar1,(int)lVar7);
      (**(code **)(*plVar1 + 0x108))(plVar1,uVar9,auStack_8f8);
      auVar26 = auVar41._0_16_;
      auVar15 = auVar31._0_16_;
      fVar32 = fStack_8e8;
      fVar33 = fStack_8e4;
      fVar34 = fStack_8e0;
      fVar35 = fStack_8dc;
    }
    auVar15 = vblendps_avx(auVar15,auVar26,8);
    auVar31 = ZEXT1664(auVar15);
    (**(code **)(*plVar1 + 0x88))(plVar1,auStack_8f8);
    auVar5._4_4_ = fStack_8e4;
    auVar5._0_4_ = fStack_8e8;
    auVar5._8_4_ = fStack_8e0;
    auVar5._12_4_ = fStack_8dc;
    auVar15 = vshufps_avx(auVar5,auStack_8d8,0x33);
    auVar15 = vshufps_avx(auVar5,auVar15,0x2f);
    auVar41 = ZEXT1664(CONCAT412(fVar35 * (auVar15._12_4_ + fVar30),
                                 CONCAT48(fVar34 * (auVar15._8_4_ + fVar29),
                                          CONCAT44(fVar33 * (auVar15._4_4_ + fVar28),
                                                   fVar32 * (auVar15._0_4_ + fVar25)))));
    (**(code **)(*plVar1 + 0x88))(plVar1,&fStack_938);
    auVar4._4_4_ = fStack_904;
    auVar4._0_4_ = fStack_908;
    auVar4._8_4_ = fStack_900;
    auVar4._12_4_ = fStack_8fc;
    fVar32 = auVar41._0_4_;
    auVar26 = auVar41._0_16_;
    auVar15 = vshufps_avx(auVar26,auVar26,0x55);
    auVar26 = vshufps_avx(auVar26,auVar26,0xaa);
    plVar1 = (longlong *)*param_2;
    lVar7 = param_2[1];
    auVar14._0_4_ =
         auVar26._0_4_ * fStack_918 + auVar15._0_4_ * fStack_928 + fVar32 * fStack_938 + fStack_908;
    auVar14._4_4_ =
         auVar26._4_4_ * fStack_914 + auVar15._4_4_ * fStack_924 + fVar32 * fStack_934 + fStack_904;
    auVar14._8_4_ =
         auVar26._8_4_ * fStack_910 + auVar15._8_4_ * fStack_920 + fVar32 * fStack_930 + fStack_900;
    auVar14._12_4_ =
         auVar26._12_4_ * fStack_90c +
         auVar15._12_4_ * fStack_91c + fVar32 * fStack_92c + fStack_8fc;
    auVar15 = vblendps_avx(auVar14,auVar4,8);
    auVar18._0_4_ = fVar36 * auVar15._0_4_;
    auVar18._4_4_ = fVar38 * auVar15._4_4_;
    auVar18._8_4_ = fVar39 * auVar15._8_4_;
    auVar18._12_4_ = fVar40 * auVar15._12_4_;
    auVar26 = vroundps_avx(auVar18,3);
    auVar22._0_4_ = auVar26._0_4_ * _DAT_14615ad78 + auVar15._0_4_;
    auVar22._4_4_ = auVar26._4_4_ * _DAT_14615ad78 + auVar15._4_4_;
    auVar22._8_4_ = auVar26._8_4_ * _DAT_14615ad78 + auVar15._8_4_;
    auVar22._12_4_ = auVar26._12_4_ * _DAT_14615ad78 + auVar15._12_4_;
    auVar17._0_4_ = (int)auVar26._0_4_;
    auVar17._4_4_ = (int)auVar26._4_4_;
    auVar17._8_4_ = (int)auVar26._8_4_;
    auVar17._12_4_ = (int)auVar26._12_4_;
    auVar15 = vblendps_avx(auVar14,auVar22,3);
    auVar26 = vpackssdw_avx(auVar17,auVar17);
    sVar12 = auVar26._0_2_;
    auVar2._0_2_ = sVar12 + SUB42(fStack_908,0);
    sVar16 = auVar26._2_2_;
    auVar2._2_2_ = sVar16 + (short)((uint)fStack_908 >> 0x10);
    auVar2._4_2_ = sVar12 + SUB42(fStack_904,0);
    auVar2._6_2_ = sVar16 + (short)((uint)fStack_904 >> 0x10);
    auVar2._8_2_ = sVar12 + SUB42(fStack_900,0);
    auVar2._10_2_ = sVar16 + (short)((uint)fStack_900 >> 0x10);
    auVar2._12_2_ = sVar12 + SUB42(fStack_8fc,0);
    auVar2._14_2_ = sVar16 + (short)((uint)fStack_8fc >> 0x10);
    auVar15 = vpblendd_avx2(auVar15,auVar2,8);
    auVar41 = ZEXT1664(auVar15);
    iVar8 = func_0x000144e05fa0(plVar1[1]);
    auVar37 = ZEXT1264(ZEXT812(0));
    fVar32 = 0.0;
    fVar33 = 0.0;
    fVar34 = 0.0;
    fVar35 = 0.0;
    if ((int)lVar7 != iVar8) {
      uVar9 = (**(code **)(*plVar1 + 0xf0))(plVar1,(int)lVar7);
      (**(code **)(*plVar1 + 0x108))(plVar1,uVar9,auStack_8f8);
      fVar32 = fStack_8e8;
      fVar33 = fStack_8e4;
      fVar34 = fStack_8e0;
      fVar35 = fStack_8dc;
    }
    (**(code **)(*plVar1 + 0x88))(plVar1,auStack_8f8);
    auVar6._4_4_ = fStack_8e4;
    auVar6._0_4_ = fStack_8e8;
    auVar6._8_4_ = fStack_8e0;
    auVar6._12_4_ = fStack_8dc;
    auVar15 = vshufps_avx(auVar6,auStack_8d8,0x33);
    auVar15 = vshufps_avx(auVar6,auVar15,0x2f);
    auVar27 = ZEXT1664(CONCAT412(fVar35 * (auVar15._12_4_ + fVar30),
                                 CONCAT48(fVar34 * (auVar15._8_4_ + fVar29),
                                          CONCAT44(fVar33 * (auVar15._4_4_ + fVar28),
                                                   fVar32 * (auVar15._0_4_ + fVar25)))));
    (**(code **)(*plVar1 + 0x88))(plVar1,&fStack_938);
    fVar25 = auVar27._0_4_;
    auVar26 = auVar27._0_16_;
    auVar15 = vshufps_avx(auVar26,auVar26,0x55);
    auVar26 = vshufps_avx(auVar26,auVar26,0xaa);
    auVar20._0_4_ =
         auVar26._0_4_ * fStack_918 + auVar15._0_4_ * fStack_928 + fVar25 * fStack_938 + fStack_908;
    auVar20._4_4_ =
         auVar26._4_4_ * fStack_914 + auVar15._4_4_ * fStack_924 + fVar25 * fStack_934 + fStack_904;
    auVar20._8_4_ =
         auVar26._8_4_ * fStack_910 + auVar15._8_4_ * fStack_920 + fVar25 * fStack_930 + fStack_900;
    auVar20._12_4_ =
         auVar26._12_4_ * fStack_90c +
         auVar15._12_4_ * fStack_91c + fVar25 * fStack_92c + fStack_8fc;
    auVar15 = vshufps_avx(auVar20,auVar20,0xaa);
    auVar15 = vblendps_avx(auVar31._0_16_,auVar15,4);
    auVar31 = ZEXT1664(auVar15);
    uStack_2e8 = 0;
    auStack_2e0._12_4_ = auVar37._12_4_;
    auStack_2e0._0_8_ = auVar37._0_8_;
    auStack_2e0._8_4_ = 6;
    uStack_298 = 0x80;
    uStack_90 = 0;
    puStack_2d0 = auStack_2c8;
    FUN_1409893b0(auStack_8f8);
    FUN_1400d0240(param_1,auStack_8f8,param_4);
    auVar15 = vpunpckhwd_avx(auVar41._0_16_,auVar41._0_16_);
    auVar15 = vpsrad_avx(auVar15,0x10);
    auVar15 = vcvtdq2ps_avx(auVar15);
    vshufpd_avx(auVar15,auVar15,3);
    auVar19._8_8_ = 0;
    auVar19._0_8_ = _DAT_146159c90;
    auVar15 = vpunpckhwd_avx(auVar19,auVar31._0_16_);
    auVar15 = vpsrad_avx(auVar15,0x10);
    auVar15 = vcvtdq2ps_avx(auVar15);
    vshufpd_avx(auVar15,auVar15,3);
    uVar10 = func_0x000144febb80(auStack_8f8);
    func_0x0001451ae4b0(uVar10);
    uVar11 = func_0x000144f64560(auStack_8f8,0);
    uStack_298 = 0x80;
    auStack_2e0._12_4_ = 0;
    if ((auStack_2c8 != puStack_2d0) && (puStack_2d0 != (undefined1 *)0x0)) {
      func_0x000144d9c130();
    }
    auStack_2e0._8_4_ = 6;
    puStack_2d0 = (undefined1 *)0x0;
    FUN_144f67c80();
  }
  else if (*(int *)(param_3 + 0x20) == 4) {
    uVar11 = *(short *)(param_3 + 0x1e) == 0;
  }
  else {
    uVar11 = 1;
  }
  return uVar11;
}

