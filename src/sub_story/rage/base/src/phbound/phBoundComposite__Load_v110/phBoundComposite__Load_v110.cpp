// Recovered from game_scarlett_master.exe (GTA VI, Xbox Series X, PE32+ x64)
// Address: 1447cbf60  size: 1433 bytes
// Name:    phBoundComposite::Load_v110
// Subsystem: physics
// Class:   phBoundComposite
//
// Evidence:
//   GTAVSRC: phBoundComposite::Load_v110  (rage/base/src/phbound/boundcomposite.cpp)
//   literal: allowInternalMotion
//
// Referenced strings (0 in this body, 0 including direct callees):
// Callees: FUN_1447c2870, FUN_145034ac0, FUN_141884c70, FUN_1428ca730, FUN_1447ccc70, FUN_145035af0, FUN_144f5b4e0, FUN_14017dc60, FUN_1428ca690, fiAssetManager::FileName, FUN_1450349c0
//
// Generated decompilation. Formatting follows MiscRef/GTAVSRC conventions;
// identifiers are recovered, not original. See ../../../README.md.

#include "gta6decomp/rage_types.h"
#include "gta6decomp/phBoundComposite.h"


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined8 phBoundComposite__Load_v110(longlong *param_1,longlong *param_2)

{
  undefined8 *puVar1;
  longlong lVar2;
  longlong *plVar3;
  float fVar4;
  float fVar5;
  float fVar6;
  float fVar7;
  undefined1 auVar8 [32];
  undefined1 auVar9 [32];
  char cVar10;
  char cVar11;
  byte bVar12;
  ushort uVar13;
  undefined4 uVar14;
  undefined4 uVar15;
  int iVar16;
  undefined8 uVar17;
  undefined8 uVar18;
  uint uVar19;
  ulonglong uVar20;
  ushort uVar21;
  undefined1 auVar22 [16];
  undefined1 auVar23 [16];
  undefined1 auVar24 [16];
  float fVar25;
  float fVar27;
  float fVar28;
  float fVar29;
  undefined1 auVar26 [16];
  undefined1 auVar30 [16];
  undefined1 auVar31 [16];
  undefined1 auVar32 [16];
  undefined1 auVar33 [16];
  undefined1 auVar34 [64];
  float fVar35;
  float fVar37;
  float fVar38;
  float fVar39;
  undefined1 auVar36 [64];
  uint uVar40;
  uint uVar42;
  uint uVar43;
  uint uVar44;
  undefined1 auVar41 [64];
  undefined1 auVar45 [16];
  undefined1 auVar46 [64];
  undefined1 auVar47 [64];
  undefined1 auVar48 [64];
  undefined1 auVar49 [64];
  undefined1 in_ZMM13 [64];
  undefined8 uStack_1f8;
  undefined8 uStack_1f0;
  undefined1 auStack_1e8 [8];
  undefined8 uStack_1e0;
  undefined1 auStack_1d8 [8];
  undefined8 uStack_1d0;
  undefined1 auStack_1c8 [8];
  undefined8 uStack_1c0;
  undefined1 aauStack_1b8 [13] [16];
  undefined8 uStack_e8;
  undefined8 uStack_e0;
  undefined8 uStack_d8;
  undefined8 uStack_d0;
  undefined1 auStack_58 [16];
  
  auStack_58 = in_ZMM13._0_16_;
  FUN_1428ca690(param_2);
  uVar14 = (**(code **)(*param_2 + 0x28))(param_2,1);
  uVar15 = FUN_1428ca730(param_2,&UNK_14677ee46,1);
  FUN_145034ac0(param_1,uVar14,uVar15,0);
  cVar10 = FUN_1428ca730(param_2,&UNK_146788aa8,1);
  if (cVar10 != '\0') {
    (**(code **)(*param_2 + 0x50))(param_2,&uStack_1f8,1);
    uStack_d8 = uStack_1f8;
    uStack_d0 = uStack_1f0;
    (**(code **)(*param_1 + 0x20))(param_1);
  }
  cVar10 = FUN_1428ca730(param_2,&UNK_146788a3c,1);
  if (cVar10 != '\0') {
    (**(code **)(*param_2 + 0x50))(param_2,&uStack_1f8,1);
    uStack_e8 = uStack_1f8;
    uStack_e0 = uStack_1f0;
    func_0x000144ee47b0(param_1);
  }
  if (*(short *)((longlong)param_1 + 0x9a) != 0) {
    uVar19 = 0;
    do {
      cVar11 = FUN_1428ca730(param_2,&UNK_1467888ea,1);
      if (cVar11 != '\0') {
        (**(code **)(*param_2 + 0x38))(param_2,1);
      }
      uVar19 = uVar19 + 1;
    } while (uVar19 < *(ushort *)((longlong)param_1 + 0x9a));
  }
  cVar11 = FUN_1428ca730(param_2,&UNK_1467888df,1);
  if ((cVar11 == '\0') || (iVar16 = (**(code **)(*param_2 + 0x28))(param_2,1), iVar16 != 1)) {
    bVar12 = 0;
    uVar17 = 0;
  }
  else {
    bVar12 = 1;
    uVar17 = FUN_1447c2870(param_2);
  }
  if (*(short *)((longlong)param_1 + 0x9a) == 0) {
    uVar13 = 0;
  }
  else {
    auVar36 = ZEXT1664(CONCAT412(_DAT_145fc6f08,
                                 CONCAT48(_DAT_145fc6f08,CONCAT44(_DAT_145fc6f08,_DAT_145fc6f08))));
    auVar41 = ZEXT1664(CONCAT412(_DAT_145fc6f4c,
                                 CONCAT48(_DAT_145fc6f4c,CONCAT44(_DAT_145fc6f4c,_DAT_145fc6f4c))));
    auVar46 = ZEXT1664(CONCAT412(_DAT_145fc6f70,
                                 CONCAT48(_DAT_145fc6f70,CONCAT44(_DAT_145fc6f70,_DAT_145fc6f70))));
    auVar47 = ZEXT464(_DAT_145fc6ed8);
    auVar48 = ZEXT864(_DAT_146159bc0);
    auVar49 = ZEXT1664(_DAT_14614f7f0);
    auVar34 = ZEXT1264(ZEXT812(0));
    uVar21 = 0;
    do {
      auVar34 = ZEXT1664(auVar34._0_16_);
      auVar36 = ZEXT1664(auVar36._0_16_);
      auVar41 = ZEXT1664(auVar41._0_16_);
      auVar46 = ZEXT1664(auVar46._0_16_);
      auVar47 = ZEXT1664(auVar47._0_16_);
      auVar48 = ZEXT1664(auVar48._0_16_);
      auVar49 = ZEXT1664(auVar49._0_16_);
      cVar11 = FUN_1428ca730(param_2,&UNK_146788aa1,0);
      if (cVar11 != '\0') {
        FUN_1428ca690(param_2);
        uVar19 = (**(code **)(*param_2 + 0x28))(param_2,1);
        cVar11 = FUN_1428ca730(param_2,&UNK_146788a6d,1);
        if (cVar11 == '\0') {
          uVar18 = FUN_1447ccc70(param_2);
        }
        else {
          (**(code **)(*param_2 + 0x10))(param_2,auStack_1e8,0x100);
          uVar18 = fiAssetManager__FileName(auStack_1e8);
        }
        FUN_1450349c0(param_1,uVar19,uVar18,1,0);
        FUN_14017dc60(uVar18,1);
        stack0xfffffffffffffe1c = ZEXT828(SUB128(ZEXT812(0),4));
        auStack_1e8._0_4_ = 0x3f800000;
        auStack_1d8._4_4_ = 0x3f800000;
        uStack_1d0 = 0;
        _auStack_1c8 = ZEXT1232(ZEXT412(0x3f800000) << 0x40);
        auVar34 = ZEXT1664(auVar34._0_16_);
        auVar36 = ZEXT1664(auVar36._0_16_);
        auVar41 = ZEXT1664(auVar41._0_16_);
        auVar46 = ZEXT1664(auVar46._0_16_);
        auVar47 = ZEXT1664(auVar47._0_16_);
        auVar48 = ZEXT1664(auVar48._0_16_);
        auVar49 = ZEXT1664(auVar49._0_16_);
        cVar11 = FUN_1428ca730(param_2,&UNK_146788835,1);
        if (cVar11 == '\0') {
          cVar11 = FUN_1428ca730(param_2,&UNK_1467889a8,1);
          if (cVar11 != '\0') goto LAB_1447cc275;
        }
        else {
          (**(code **)(*param_2 + 0x50))(param_2,auStack_1e8,1);
          (**(code **)(*param_2 + 0x50))(param_2,auStack_1d8,1);
          (**(code **)(*param_2 + 0x50))(param_2,auStack_1c8,1);
LAB_1447cc275:
          (**(code **)(*param_2 + 0x50))(param_2,auStack_1c8 + 0x10);
        }
        auVar8 = _auStack_1c8;
        auVar30._0_4_ = (float)auStack_1c8._0_4_ * (float)auStack_1c8._0_4_;
        auVar30._4_4_ = (float)auStack_1c8._4_4_ * (float)auStack_1c8._4_4_;
        auVar30._8_4_ = (float)uStack_1c0 * (float)uStack_1c0;
        auVar30._12_4_ = uStack_1c0._4_4_ * uStack_1c0._4_4_;
        auVar33 = auVar34._0_16_;
        auVar30 = vblendps_avx(auVar30,auVar33,8);
        auVar30 = vhaddps_avx(auVar30,auVar30);
        auVar30 = vhaddps_avx(auVar30,auVar30);
        auVar31 = vrsqrtps_avx(auVar30);
        fVar4 = auVar31._0_4_;
        fVar5 = auVar31._4_4_;
        fVar6 = auVar31._8_4_;
        fVar7 = auVar31._12_4_;
        fVar35 = auVar36._0_4_;
        fVar37 = auVar36._4_4_;
        fVar38 = auVar36._8_4_;
        fVar39 = auVar36._12_4_;
        auVar22._0_4_ =
             ((fVar35 * fVar4 * fVar4 * auVar30._0_4_ - fVar35) * fVar4 + fVar4) *
             (float)auStack_1c8._0_4_;
        auVar22._4_4_ =
             ((fVar37 * fVar5 * fVar5 * auVar30._4_4_ - fVar37) * fVar5 + fVar5) *
             (float)auStack_1c8._4_4_;
        auVar22._8_4_ =
             ((fVar38 * fVar6 * fVar6 * auVar30._8_4_ - fVar38) * fVar6 + fVar6) * (float)uStack_1c0
        ;
        auVar22._12_4_ =
             ((fVar39 * fVar7 * fVar7 * auVar30._12_4_ - fVar39) * fVar7 + fVar7) * uStack_1c0._4_4_
        ;
        auVar30 = vshufps_avx(_auStack_1d8,_auStack_1d8,0xc9);
        auVar31 = vshufps_avx(_auStack_1d8,_auStack_1d8,0xd2);
        auVar26 = vshufps_avx(auVar22,auVar22,0xd2);
        auVar23 = vshufps_avx(auVar22,auVar22,0xc9);
        _auStack_1c8 = auVar22;
        auVar9 = _auStack_1c8;
        fVar25 = -(auVar23._0_4_ * auVar31._0_4_) + auVar26._0_4_ * auVar30._0_4_;
        fVar27 = -(auVar23._4_4_ * auVar31._4_4_) + auVar26._4_4_ * auVar30._4_4_;
        fVar28 = -(auVar23._8_4_ * auVar31._8_4_) + auVar26._8_4_ * auVar30._8_4_;
        fVar29 = -(auVar23._12_4_ * auVar31._12_4_) + auVar26._12_4_ * auVar30._12_4_;
        auVar31._0_4_ = fVar25 * fVar25;
        auVar31._4_4_ = fVar27 * fVar27;
        auVar31._8_4_ = fVar28 * fVar28;
        auVar31._12_4_ = fVar29 * fVar29;
        auVar30 = vblendps_avx(auVar31,auVar33,8);
        auVar30 = vhaddps_avx(auVar30,auVar30);
        auVar30 = vhaddps_avx(auVar30,auVar30);
        auVar31 = vrsqrtps_avx(auVar30);
        fVar4 = auVar31._0_4_;
        fVar5 = auVar31._4_4_;
        fVar6 = auVar31._8_4_;
        fVar7 = auVar31._12_4_;
        auStack_1e8._0_4_ =
             ((fVar35 * fVar4 * fVar4 * auVar30._0_4_ - fVar35) * fVar4 + fVar4) * fVar25;
        auStack_1e8._4_4_ =
             ((fVar37 * fVar5 * fVar5 * auVar30._4_4_ - fVar37) * fVar5 + fVar5) * fVar27;
        register0x00001288 =
             ((fVar38 * fVar6 * fVar6 * auVar30._8_4_ - fVar38) * fVar6 + fVar6) * fVar28;
        register0x0000128c =
             ((fVar39 * fVar7 * fVar7 * auVar30._12_4_ - fVar39) * fVar7 + fVar7) * fVar29;
        auVar31 = vshufps_avx(_auStack_1e8,_auStack_1e8,0xd2);
        auVar24 = vshufps_avx(_auStack_1e8,_auStack_1e8,0xc9);
        uVar40 = auVar41._0_4_;
        auVar32._0_4_ = uVar40 & auStack_1e8._0_4_;
        uVar42 = auVar41._4_4_;
        auVar32._4_4_ = uVar42 & (uint)auStack_1e8._4_4_;
        uVar43 = auVar41._8_4_;
        auVar32._8_4_ = uVar43 & (uint)register0x00001288;
        uVar44 = auVar41._12_4_;
        auVar32._12_4_ = uVar44 & (uint)register0x0000128c;
        auVar45 = auVar46._0_16_;
        auVar30 = vcmpps_avx(auVar32,auVar45,0x11);
        uVar14 = vmovmskps_avx(auVar30);
        auStack_1d8._0_4_ = -(auVar26._0_4_ * auVar24._0_4_) + auVar31._0_4_ * auVar23._0_4_;
        auStack_1d8._4_4_ = -(auVar26._4_4_ * auVar24._4_4_) + auVar31._4_4_ * auVar23._4_4_;
        uStack_1d0._0_4_ = -(auVar26._8_4_ * auVar24._8_4_) + auVar31._8_4_ * auVar23._8_4_;
        uStack_1d0._4_4_ = -(auVar26._12_4_ * auVar24._12_4_) + auVar31._12_4_ * auVar23._12_4_;
        if ((~(byte)uVar14 & 7) == 0) {
          auVar26._0_4_ = uVar40 & auStack_1d8._0_4_;
          auVar26._4_4_ = uVar42 & auStack_1d8._4_4_;
          auVar26._8_4_ = uVar43 & (uint)(float)uStack_1d0;
          auVar26._12_4_ = uVar44 & (uint)uStack_1d0._4_4_;
          auVar30 = vcmpps_avx(auVar26,auVar45,0x11);
          uVar14 = vmovmskps_avx(auVar30);
          if ((~(byte)uVar14 & 7) != 0) goto LAB_1447cc384;
          auVar23._0_4_ = uVar40 & (uint)auVar22._0_4_;
          auVar23._4_4_ = uVar42 & (uint)auVar22._4_4_;
          auVar23._8_4_ = uVar43 & (uint)auVar22._8_4_;
          auVar23._12_4_ = uVar44 & (uint)auVar22._12_4_;
          auVar30 = vcmpps_avx(auVar23,auVar45,0x11);
          uVar14 = vmovmskps_avx(auVar30);
          if ((~(byte)uVar14 & 7) != 0) goto LAB_1447cc384;
          aauStack_1b8[0]._0_4_ = auVar8._16_4_;
          aauStack_1b8[0]._4_4_ = auVar8._20_4_;
          aauStack_1b8[0]._8_4_ = auVar8._24_4_;
          aauStack_1b8[0]._12_4_ = auVar8._28_4_;
          auVar24._0_4_ = uVar40 & aauStack_1b8[0]._0_4_;
          auVar24._4_4_ = uVar42 & aauStack_1b8[0]._4_4_;
          auVar24._8_4_ = uVar43 & aauStack_1b8[0]._8_4_;
          auVar24._12_4_ = uVar44 & aauStack_1b8[0]._12_4_;
          auVar30 = vcmpps_avx(auVar24,auVar45,0x11);
          uVar14 = vmovmskps_avx(auVar30);
          _auStack_1c8 = auVar9;
          if ((~(byte)uVar14 & 7) != 0) goto LAB_1447cc384;
        }
        else {
LAB_1447cc384:
          _auStack_1d8 = auVar48._0_16_;
          _auStack_1e8 = auVar47._0_16_;
          aauStack_1b8[0] = auVar33;
          _auStack_1c8 = auVar49._0_16_;
        }
        lVar2 = param_1[0xf];
        uVar20 = (ulonglong)((uVar19 & 0xffff) << 6);
        puVar1 = (undefined8 *)(lVar2 + 0x20 + uVar20);
        *puVar1 = auStack_1c8;
        puVar1[1] = uStack_1c0;
        puVar1[2] = aauStack_1b8[0]._0_8_;
        puVar1[3] = aauStack_1b8[0]._8_8_;
        puVar1 = (undefined8 *)(lVar2 + uVar20);
        *puVar1 = auStack_1e8;
        puVar1[1] = uStack_1e0;
        puVar1[2] = auStack_1d8;
        puVar1[3] = uStack_1d0;
        *(byte *)((longlong)param_1 + 0x9c) = *(byte *)((longlong)param_1 + 0x9c) | 4;
      }
      uVar13 = *(ushort *)((longlong)param_1 + 0x9a);
      uVar21 = uVar21 + 1;
    } while (uVar21 < uVar13);
  }
  if ((char)uVar15 != '\0') {
    if (param_1[0x10] != param_1[0xf]) {
      func_0x000145f40560(param_1[0x10],param_1[0xf],(ulonglong)uVar13 << 6);
      uVar13 = *(ushort *)((longlong)param_1 + 0x9a);
    }
  }
  if ((bool)(bVar12 & uVar13 != 0)) {
    uVar20 = 0;
    do {
      plVar3 = *(longlong **)(param_1[0xe] + uVar20 * 8);
      if (plVar3 != (longlong *)0x0) {
        (**(code **)(*plVar3 + 0x60))(plVar3,uVar17,0xffffffff);
        uVar13 = *(ushort *)((longlong)param_1 + 0x9a);
      }
      uVar20 = uVar20 + 1;
    } while (uVar20 < uVar13);
  }
  if (cVar10 == '\0') {
    FUN_141884c70(param_1);
  }
  (**(code **)(*param_1 + 0xc0))(param_1);
  FUN_145035af0(param_1,1);
  (**(code **)(*param_1 + 0x18))(param_1);
  FUN_144f5b4e0(param_1,auStack_1e8);
  return 1;
}

