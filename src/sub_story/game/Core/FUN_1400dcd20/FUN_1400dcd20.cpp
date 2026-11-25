// Recovered from game_scarlett_master.exe (GTA VI, Xbox Series X, PE32+ x64)
// Address: 1400dcd20  size: 1270 bytes
// Name:    FUN_1400dcd20
// Subsystem: core
//
// Referenced strings (0 in this body, 0 including direct callees):
// Callees: FUN_144ec6720, FUN_144f67c80, FUN_144e710b0, FUN_144f63ee0, FUN_144ec6670, FUN_1400d02c0, FUN_1400d0610
//
// Generated decompilation. Formatting follows MiscRef/GTAVSRC conventions;
// identifiers are recovered, not original. See ../../../README.md.

#include "gta6decomp/rage_types.h"


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1400dcd20(longlong param_1,longlong param_2)

{
  undefined1 (*pauVar1) [16];
  ushort uVar2;
  longlong *plVar3;
  longlong lVar4;
  undefined1 auVar5 [16];
  undefined1 auVar6 [16];
  longlong lVar7;
  undefined8 uVar8;
  undefined1 (*pauVar9) [32];
  ulonglong uVar10;
  undefined1 (*pauVar11) [32];
  float fVar12;
  undefined1 auVar13 [16];
  undefined1 auVar14 [16];
  short sVar15;
  short sVar18;
  undefined1 auVar16 [16];
  undefined1 auVar17 [16];
  undefined1 auVar19 [16];
  undefined1 auVar20 [16];
  undefined1 auVar21 [16];
  undefined1 auVar22 [16];
  undefined1 auVar23 [16];
  undefined1 auVar24 [16];
  undefined1 auVar25 [64];
  float fVar26;
  float fVar28;
  float fVar29;
  float fVar30;
  undefined1 auVar27 [64];
  undefined1 auStack_de8 [16];
  undefined1 auStack_dd8 [16];
  uint uStack_dc4;
  undefined1 auStack_dc0 [1024];
  undefined8 uStack_9c0;
  undefined8 uStack_9b8;
  undefined8 uStack_9b0;
  undefined8 uStack_9a8;
  undefined8 uStack_9a0;
  undefined8 uStack_998;
  undefined8 uStack_990;
  undefined8 uStack_988;
  undefined8 uStack_980;
  undefined5 uStack_960;
  undefined8 uStack_95b;
  undefined8 uStack_948;
  undefined8 uStack_940;
  undefined8 uStack_938;
  undefined8 uStack_930;
  undefined8 uStack_928;
  undefined8 uStack_920;
  undefined8 uStack_918;
  undefined8 uStack_910;
  undefined8 uStack_908;
  undefined8 uStack_900;
  undefined8 uStack_8f8;
  undefined8 uStack_8f0;
  undefined8 uStack_8e8;
  undefined8 uStack_8e0;
  undefined8 *puStack_8d8;
  undefined8 uStack_8d0;
  undefined8 uStack_8c8;
  undefined8 uStack_8c0;
  undefined8 uStack_8b8;
  undefined1 auStack_8b0 [1024];
  undefined8 uStack_4b0;
  undefined8 uStack_4a8;
  undefined8 uStack_4a0;
  undefined8 uStack_498;
  undefined8 uStack_490;
  undefined8 uStack_488;
  undefined8 uStack_480;
  undefined8 uStack_478;
  undefined8 uStack_470;
  undefined5 uStack_468;
  undefined3 uStack_463;
  undefined4 uStack_450;
  undefined1 uStack_44c;
  undefined8 uStack_44b;
  undefined8 uStack_438;
  undefined8 uStack_430;
  undefined8 uStack_428;
  undefined8 uStack_420;
  undefined8 uStack_418;
  undefined8 uStack_410;
  undefined8 uStack_408;
  undefined8 uStack_400;
  undefined8 uStack_3f8;
  undefined8 uStack_3f0;
  undefined8 uStack_3e8;
  undefined8 uStack_3e0;
  undefined8 uStack_3d8;
  undefined8 uStack_3d0;
  undefined4 uStack_2c8;
  undefined1 auStack_2c0 [16];
  undefined1 *puStack_2b0;
  undefined1 auStack_2a8 [48];
  undefined8 uStack_278;
  undefined4 uStack_70;
  
  plVar3 = *(longlong **)(param_1 + 0x2e0);
  if (((plVar3 != (longlong *)0x0) && (*(uint *)(plVar3 + 4) < 4)) && (*(uint *)(plVar3 + 4) != 1))
  {
    func_0x000144e71130((int)plVar3[3]);
    *(undefined2 *)((longlong)plVar3 + 0x1e) = 0;
    *(undefined4 *)(plVar3 + 4) = 0;
    if (*plVar3 != 0) {
      func_0x000145f40580(*plVar3,0,(ulonglong)*(ushort *)((longlong)plVar3 + 0x1c) << 6);
      if (*(short *)((longlong)plVar3 + 0x1c) != 0) {
        lVar7 = 0x2a;
        uVar10 = 0;
        do {
          lVar4 = *plVar3;
          uVar10 = uVar10 + 1;
          *(undefined8 *)(lVar4 + -10 + lVar7) = 0xffffffff00000000;
          *(undefined1 *)(lVar4 + lVar7) = 0;
          *(undefined2 *)(lVar4 + -2 + lVar7) = 0xffff;
          lVar7 = lVar7 + 0x40;
        } while (uVar10 < *(ushort *)((longlong)plVar3 + 0x1c));
      }
    }
    fVar12 = (float)func_0x0001400e2fa0(*(undefined8 *)(*(longlong *)(param_2 + 0x30) + 0xd0),
                                        *(undefined4 *)(*(longlong *)(param_2 + 0x30) + 0x5f0),0);
    auVar20._4_4_ = _DAT_14615a290;
    auVar20._0_4_ = _DAT_14615a290;
    auVar20._8_4_ = _DAT_14615a290;
    auVar20._12_4_ = _DAT_14615a290;
    fVar26 = fVar12 + _DAT_14abbd834;
    pauVar1 = (undefined1 (*) [16])(param_1 + 0x1a0);
    fVar12 = fVar12 + _DAT_14abbd838;
    auVar13 = vrcpps_avx(auVar20);
    auVar16._0_4_ = (float)DAT_14614f7f0 * fVar26 + *(float *)*pauVar1;
    auVar16._4_4_ = DAT_14614f7f0._4_4_ * fVar26 + *(float *)(param_1 + 0x1a4);
    auVar16._8_4_ = DAT_14614f7f0._8_4_ * fVar26 + *(float *)(param_1 + 0x1a8);
    auVar16._12_4_ = DAT_14614f7f0._12_4_ * fVar26 + *(float *)(param_1 + 0x1ac);
    auVar16 = vblendps_avx(auVar16,*pauVar1,8);
    fVar26 = auVar13._0_4_;
    fVar28 = auVar13._4_4_;
    fVar29 = auVar13._8_4_;
    fVar30 = auVar13._12_4_;
    fVar26 = (-(fVar26 * _DAT_14615a290) + _DAT_145fc6ed8) * fVar26 + fVar26;
    fVar28 = (-(fVar28 * _DAT_14615a290) + _DAT_145fc6ed8) * fVar28 + fVar28;
    fVar29 = (-(fVar29 * _DAT_14615a290) + _DAT_145fc6ed8) * fVar29 + fVar29;
    fVar30 = (-(fVar30 * _DAT_14615a290) + _DAT_145fc6ed8) * fVar30 + fVar30;
    auVar22._0_4_ = fVar26 * auVar16._0_4_;
    auVar22._4_4_ = fVar28 * auVar16._4_4_;
    auVar22._8_4_ = fVar29 * auVar16._8_4_;
    auVar22._12_4_ = fVar30 * auVar16._12_4_;
    auVar13 = vroundps_avx(auVar22,3);
    auVar24._0_4_ = -(auVar13._0_4_ * _DAT_14615a290) + auVar16._0_4_;
    auVar24._4_4_ = -(auVar13._4_4_ * _DAT_14615a290) + auVar16._4_4_;
    auVar24._8_4_ = -(auVar13._8_4_ * _DAT_14615a290) + auVar16._8_4_;
    auVar24._12_4_ = -(auVar13._12_4_ * _DAT_14615a290) + auVar16._12_4_;
    auVar23._0_4_ = (int)auVar13._0_4_;
    auVar23._4_4_ = (int)auVar13._4_4_;
    auVar23._8_4_ = (int)auVar13._8_4_;
    auVar23._12_4_ = (int)auVar13._12_4_;
    auVar5 = vpackssdw_avx(auVar23,auVar23);
    auVar13._0_4_ = (float)DAT_14614f7f0 * fVar12 + *(float *)*pauVar1;
    auVar13._4_4_ = DAT_14614f7f0._4_4_ * fVar12 + *(float *)(param_1 + 0x1a4);
    auVar13._8_4_ = DAT_14614f7f0._8_4_ * fVar12 + *(float *)(param_1 + 0x1a8);
    auVar13._12_4_ = DAT_14614f7f0._12_4_ * fVar12 + *(float *)(param_1 + 0x1ac);
    auVar13 = vblendps_avx(auVar13,*pauVar1,8);
    uStack_2c8 = 0;
    auVar14 = vblendps_avx(auVar16,auVar24,3);
    sVar15 = auVar5._0_2_;
    auVar6._0_2_ = sVar15 + auVar16._0_2_;
    sVar18 = auVar5._2_2_;
    auVar6._2_2_ = sVar18 + auVar16._2_2_;
    auVar6._4_2_ = sVar15 + auVar16._4_2_;
    auVar6._6_2_ = sVar18 + auVar16._6_2_;
    auVar6._8_2_ = sVar15 + auVar16._8_2_;
    auVar6._10_2_ = sVar18 + auVar16._10_2_;
    auVar6._12_2_ = sVar15 + auVar16._12_2_;
    auVar6._14_2_ = sVar18 + auVar16._14_2_;
    auVar16 = vblendps_avx(auVar14,auVar6,8);
    auVar25 = ZEXT1664(auVar16);
    auVar14._0_4_ = auVar13._0_4_ * fVar26;
    auVar14._4_4_ = auVar13._4_4_ * fVar28;
    auVar14._8_4_ = auVar13._8_4_ * fVar29;
    auVar14._12_4_ = auVar13._12_4_ * fVar30;
    auVar16 = vroundps_avx(auVar14,3);
    auVar21._0_4_ = -(auVar16._0_4_ * _DAT_14615a290) + auVar13._0_4_;
    auVar21._4_4_ = -(auVar16._4_4_ * _DAT_14615a290) + auVar13._4_4_;
    auVar21._8_4_ = -(auVar16._8_4_ * _DAT_14615a290) + auVar13._8_4_;
    auVar21._12_4_ = -(auVar16._12_4_ * _DAT_14615a290) + auVar13._12_4_;
    auVar17._0_4_ = (int)auVar16._0_4_;
    auVar17._4_4_ = (int)auVar16._4_4_;
    auVar17._8_4_ = (int)auVar16._8_4_;
    auVar17._12_4_ = (int)auVar16._12_4_;
    auVar14 = vpackssdw_avx(auVar17,auVar17);
    auVar16 = vblendps_avx(auVar13,auVar21,3);
    sVar15 = auVar14._0_2_;
    auVar5._0_2_ = sVar15 + auVar13._0_2_;
    sVar18 = auVar14._2_2_;
    auVar5._2_2_ = sVar18 + auVar13._2_2_;
    auVar5._4_2_ = sVar15 + auVar13._4_2_;
    auVar5._6_2_ = sVar18 + auVar13._6_2_;
    auVar5._8_2_ = sVar15 + auVar13._8_2_;
    auVar5._10_2_ = sVar18 + auVar13._10_2_;
    auVar5._12_2_ = sVar15 + auVar13._12_2_;
    auVar5._14_2_ = sVar18 + auVar13._14_2_;
    auVar16 = vblendps_avx(auVar16,auVar5,8);
    auVar27 = ZEXT1664(auVar16);
    auStack_2c0._0_12_ = ZEXT412(6) << 0x40;
    auStack_2c0._12_4_ = 0;
    uStack_278 = 0x80;
    uStack_70 = 0;
    puStack_2b0 = auStack_2a8;
    FUN_144f63ee0(auStack_de8);
    auVar16 = auVar25._0_16_;
    auVar13 = auVar27._0_16_;
    if (*(char *)(auStack_de8._0_8_ + 0x1e) == '\x03') {
      puStack_8d8 = (undefined8 *)auStack_de8._0_8_;
      uStack_8d0 = auStack_de8._8_8_;
      uStack_8c8 = auStack_dd8._0_8_;
      uStack_8c0 = auStack_dd8._8_8_;
      uStack_8b8 = 0x100;
      if ((ulonglong)uStack_dc4 != 0) {
        if (0x100 < uStack_dc4) {
          uStack_8b8 = (ulonglong)uStack_dc4;
        }
        auVar25 = ZEXT1664(auVar16);
        auVar27 = ZEXT1664(auVar13);
        func_0x000145f40560(auStack_8b0,auStack_dc0,(ulonglong)uStack_dc4 << 2);
        auVar16 = auVar25._0_16_;
        auVar13 = auVar27._0_16_;
        uStack_8b8 = CONCAT44(uStack_dc4,(undefined4)uStack_8b8);
      }
      uStack_450 = (undefined4)uStack_960;
      uStack_44c = (undefined1)((uint5)uStack_960 >> 0x20);
      uStack_44b = uStack_95b;
      uStack_470 = uStack_980;
      uStack_490 = uStack_9a0;
      uStack_488 = uStack_998;
      uStack_480 = uStack_990;
      uStack_478 = uStack_988;
      uStack_4b0 = uStack_9c0;
      uStack_4a8 = uStack_9b8;
      uStack_4a0 = uStack_9b0;
      uStack_498 = uStack_9a8;
      uStack_438 = uStack_948;
      uStack_430 = uStack_940;
      uStack_428 = uStack_938;
      uStack_420 = uStack_930;
      uStack_418 = uStack_928;
      uStack_410 = uStack_920;
      uStack_408 = uStack_918;
      uStack_400 = uStack_910;
      uStack_3f8 = uStack_908;
      uStack_3f0 = uStack_900;
      uStack_3e8 = uStack_8f8;
      uStack_3e0 = uStack_8f0;
      uStack_3d8 = uStack_8e8;
      uStack_3d0 = uStack_8e0;
    }
    else {
      func_0x000145f40560(&puStack_8d8,auStack_de8,0x510);
      auVar16 = auVar25._0_16_;
      auVar13 = auVar27._0_16_;
    }
    auVar14 = vpunpckhwd_avx(auVar13,auVar13);
    puStack_8d8 = &uStack_438;
    auVar14 = vpsrad_avx(auVar14,0x10);
    auVar14 = vcvtdq2ps_avx(auVar14);
    auVar5 = vshufpd_avx(auVar14,auVar14,3);
    auVar19._8_8_ = 0;
    auVar19._0_8_ = _DAT_146159c90;
    auVar14 = vpunpckhwd_avx(auVar19,auVar16);
    fVar26 = (float)(_DAT_146159c90 >> 0x20);
    auVar14 = vpsrad_avx(auVar14,0x10);
    auVar14 = vcvtdq2ps_avx(auVar14);
    auVar14 = vshufpd_avx(auVar14,auVar14,3);
    auVar25 = ZEXT1664(CONCAT412(auVar14._12_4_ * 0.0 + auVar16._12_4_,
                                 CONCAT48(auVar14._8_4_ * 0.0 + auVar16._8_4_,
                                          CONCAT44(fVar26 * auVar14._4_4_ + auVar16._4_4_,
                                                   (float)_DAT_146159c90 * auVar14._0_4_ +
                                                   auVar16._0_4_))));
    auVar27 = ZEXT1664(CONCAT412(auVar5._12_4_ * 0.0 + auVar13._12_4_,
                                 CONCAT48(auVar5._8_4_ * 0.0 + auVar13._8_4_,
                                          CONCAT44(fVar26 * auVar5._4_4_ + auVar13._4_4_,
                                                   (float)_DAT_146159c90 * auVar5._0_4_ +
                                                   auVar13._0_4_))));
    uVar8 = func_0x000144febb80(&puStack_8d8);
    auStack_de8 = auVar25._0_16_;
    auStack_dd8 = auVar27._0_16_;
    func_0x0001453159b0(uVar8);
    uVar8 = 0x84;
    if ((*(byte *)(param_2 + 0x14c) & 1) != 0) {
      uVar8 = 4;
      uStack_44c = 8;
    }
    uStack_468 = (undefined5)uVar8;
    uStack_463 = 0;
    FUN_1400d02c0(*(undefined8 *)(param_1 + 0x2f8),&puStack_8d8,param_2);
    auStack_2c0._0_8_ = plVar3;
    if ((int)plVar3[4] == 3) {
      FUN_144e710b0(plVar3);
    }
    lVar7 = *plVar3;
    if (lVar7 == 0) {
      FUN_144ec6720();
      uVar2 = *(ushort *)((longlong)plVar3 + 0x1c);
      pauVar9 = (undefined1 (*) [32])func_0x000144f97130((ulonglong)uVar2 << 6);
      if ((uVar2 != 0) && (pauVar9 != (undefined1 (*) [32])0x0)) {
        pauVar11 = pauVar9;
        do {
          *(undefined1 (*) [32])(*pauVar11 + 0x10) = ZEXT1232(ZEXT812(0));
          *pauVar11 = ZEXT1232(ZEXT812(0));
          *(undefined8 *)pauVar11[1] = 0xffffffff00000000;
          *(undefined2 *)(pauVar11[1] + 8) = 0xffff;
          pauVar11 = pauVar11 + 2;
        } while (pauVar11 != pauVar9 + (ulonglong)uVar2 * 2);
      }
      *plVar3 = (longlong)pauVar9;
      FUN_144ec6670();
      *(undefined1 *)((longlong)plVar3 + 0x24) = 1;
      lVar7 = *plVar3;
    }
    func_0x000144f65500(puStack_8d8,lVar7,*(undefined2 *)((longlong)plVar3 + 0x1c),0);
    puStack_8d8[2] = plVar3;
    FUN_1400d0610(&puStack_8d8,0);
    uStack_278 = 0x80;
    auStack_2c0._12_4_ = 0;
    if ((auStack_2a8 != puStack_2b0) && (puStack_2b0 != (undefined1 *)0x0)) {
      func_0x000144d9c130();
    }
    auStack_2c0._8_4_ = 6;
    puStack_2b0 = (undefined1 *)0x0;
    FUN_144f67c80();
  }
  return;
}

