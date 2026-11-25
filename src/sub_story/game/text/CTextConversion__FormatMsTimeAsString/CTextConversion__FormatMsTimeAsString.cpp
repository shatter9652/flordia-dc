// Recovered from game_scarlett_master.exe (GTA VI, Xbox Series X, PE32+ x64)
// Address: 141669a70  size: 1106 bytes
// Name:    CTextConversion::FormatMsTimeAsString
// Subsystem: core
// Class:   CTextConversion
//
// Evidence:
//   GTAVSRC: CTextConversion::FormatMsTimeAsString  (game/text/TextConversion.cpp)
//   literal: %02u:%02u.%02u
//
// Referenced strings (0 in this body, 0 including direct callees):
// Callees: FUN_144f20ec0, FUN_1408bd0c0, FUN_14540d620, FUN_141669ed0, FUN_14026db50
//
// Generated decompilation. Formatting follows MiscRef/GTAVSRC conventions;
// identifiers are recovered, not original. See ../../../README.md.

#include "gta6decomp/rage_types.h"
#include "gta6decomp/CTextConversion.h"


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined8 CTextConversion__FormatMsTimeAsString(longlong param_1)

{
  float *pfVar1;
  byte bVar2;
  longlong lVar3;
  longlong lVar4;
  undefined1 auVar5 [16];
  bool bVar6;
  undefined4 uVar7;
  longlong lVar8;
  ulonglong uVar9;
  uint uVar10;
  ulonglong uVar11;
  float fVar12;
  float fVar17;
  float fVar18;
  float fVar19;
  undefined1 auVar13 [16];
  undefined1 auVar14 [16];
  undefined1 auVar15 [16];
  undefined1 auVar16 [16];
  undefined1 auVar20 [16];
  undefined1 auVar21 [16];
  undefined1 auVar22 [16];
  undefined1 auVar23 [16];
  undefined1 auVar24 [16];
  undefined1 auVar25 [16];
  undefined1 auVar26 [16];
  undefined1 auVar27 [16];
  undefined1 auVar28 [16];
  float fVar29;
  float fVar35;
  undefined1 auVar30 [16];
  undefined1 auVar31 [16];
  float fVar33;
  float fVar34;
  undefined1 auVar32 [64];
  undefined1 auVar36 [64];
  undefined1 auVar37 [16];
  float fVar38;
  float fVar40;
  float fVar41;
  float fVar42;
  undefined1 auVar39 [64];
  undefined1 auVar43 [64];
  undefined1 auVar44 [64];
  ushort auStack_3e0 [4];
  undefined8 uStack_3d8;
  undefined8 uStack_3d0;
  ushort auStack_3c0 [4];
  undefined1 auStack_3b8 [16];
  undefined1 auStack_3a8 [16];
  undefined1 auStack_398 [16];
  undefined1 auStack_388 [32];
  undefined1 auStack_368 [32];
  undefined1 auStack_348 [32];
  undefined2 uStack_328;
  undefined1 auStack_318 [16];
  undefined1 auStack_308 [16];
  undefined1 auStack_2f8 [16];
  uint uStack_2e8;
  uint uStack_2e4;
  uint uStack_2e0;
  uint uStack_2dc;
  undefined8 uStack_2d8;
  undefined8 uStack_2d0;
  undefined1 auStack_2c8 [16];
  uint uStack_2b8;
  uint uStack_2b4;
  uint uStack_2b0;
  uint uStack_2ac;
  undefined8 uStack_298;
  undefined8 uStack_290;
  undefined1 auStack_288 [16];
  undefined4 uStack_278;
  undefined4 uStack_208;
  undefined4 uStack_198;
  undefined4 uStack_128;
  undefined4 uStack_b8;
  undefined4 uStack_b4;
  undefined1 uStack_b0;
  
  lVar3 = *(longlong *)(param_1 + 0x30);
  bVar2 = *(byte *)(lVar3 + 0x8b);
  if ((ulonglong)bVar2 != 0) {
    lVar8 = func_0x000145165400();
    lVar4 = *(longlong *)(lVar8 + 8);
    auVar36 = ZEXT1264(ZEXT812(0));
    auVar15._0_12_ = ZEXT812(0);
    auVar15._12_4_ = 0;
    uVar9 = 0;
    bVar6 = false;
    auVar25._0_12_ = ZEXT812(0);
    auVar25._12_4_ = 0;
    auVar32 = ZEXT1264(ZEXT812(0));
    fVar38 = 0.0;
    fVar40 = 0.0;
    fVar41 = 0.0;
    fVar42 = 0.0;
    do {
      uVar11 = (ulonglong)((uint)*(ushort *)(lVar3 + 0x70 + uVar9 * 2) * *(int *)(lVar8 + 0x14));
      if (!bVar6) {
        auVar36 = ZEXT1664(*(undefined1 (*) [16])(lVar4 + 0xc0 + uVar11));
        bVar6 = true;
      }
      pfVar1 = (float *)(lVar4 + uVar11);
      auVar26._0_4_ = auVar25._0_4_ + *pfVar1;
      auVar26._4_4_ = auVar25._4_4_ + pfVar1[1];
      auVar26._8_4_ = auVar25._8_4_ + pfVar1[2];
      auVar26._12_4_ = auVar25._12_4_ + pfVar1[3];
      pfVar1 = (float *)(lVar4 + 0x10 + uVar11);
      fVar29 = auVar32._0_4_ + *pfVar1;
      fVar33 = auVar32._4_4_ + pfVar1[1];
      fVar34 = auVar32._8_4_ + pfVar1[2];
      fVar35 = auVar32._12_4_ + pfVar1[3];
      auVar32 = ZEXT1664(CONCAT412(fVar35,CONCAT48(fVar34,CONCAT44(fVar33,fVar29))));
      pfVar1 = (float *)(lVar4 + 0x40 + uVar11);
      fVar38 = fVar38 + *pfVar1;
      fVar40 = fVar40 + pfVar1[1];
      fVar41 = fVar41 + pfVar1[2];
      fVar42 = fVar42 + pfVar1[3];
      auVar20._0_4_ = auVar15._0_4_ + _DAT_145fc6ed8;
      auVar20._4_4_ = auVar15._4_4_ + _DAT_145fc6ed8;
      auVar20._8_4_ = auVar15._8_4_ + _DAT_145fc6ed8;
      auVar20._12_4_ = auVar15._12_4_ + _DAT_145fc6ed8;
      uVar9 = uVar9 + 1;
      auVar15 = auVar20;
      auVar25 = auVar26;
    } while (bVar2 != uVar9);
    if (bVar6) {
      auVar15 = vrcpps_avx(auVar20);
      fVar12 = auVar15._0_4_;
      fVar17 = auVar15._4_4_;
      fVar18 = auVar15._8_4_;
      fVar19 = auVar15._12_4_;
      fVar12 = -((fVar12 * auVar20._0_4_ - _DAT_145fc6ed8) * fVar12) + fVar12;
      fVar17 = -((fVar17 * auVar20._4_4_ - _DAT_145fc6ed8) * fVar17) + fVar17;
      fVar18 = -((fVar18 * auVar20._8_4_ - _DAT_145fc6ed8) * fVar18) + fVar18;
      fVar19 = -((fVar19 * auVar20._12_4_ - _DAT_145fc6ed8) * fVar19) + fVar19;
      auStack_3a8._0_4_ = fVar12 * auVar26._0_4_;
      auStack_3a8._4_4_ = fVar17 * auVar26._4_4_;
      auStack_3a8._8_4_ = fVar18 * auVar26._8_4_;
      auStack_3a8._12_4_ = fVar19 * auVar26._12_4_;
      auVar43 = ZEXT1664(auStack_3a8);
      auStack_398._0_4_ = fVar12 * fVar29;
      auStack_398._4_4_ = fVar17 * fVar33;
      auStack_398._8_4_ = fVar18 * fVar34;
      auStack_398._12_4_ = fVar19 * fVar35;
      auVar44 = ZEXT1664(auStack_398);
      FUN_141669ed0(&uStack_3d8,auStack_3a8,auStack_398,lVar3,*(undefined8 *)(param_1 + 0x20),
                    *(undefined8 *)(param_1 + 0x28));
      auVar37._0_12_ = ZEXT812(0);
      auVar37._12_4_ = 0;
      auVar32 = ZEXT1664(auVar37);
      auVar5._8_8_ = uStack_3d0;
      auVar5._0_8_ = uStack_3d8;
      auVar15 = vcmpps_avx(auVar37,auVar5,0);
      uVar7 = vmovmskps_avx(auVar15);
      if ((~(byte)uVar7 & 7) != 0) {
        auVar13._0_4_ = fVar38 * fVar38;
        auVar13._4_4_ = fVar40 * fVar40;
        auVar13._8_4_ = fVar41 * fVar41;
        auVar13._12_4_ = fVar42 * fVar42;
        auVar21._4_4_ = _DAT_145fc6f14;
        auVar21._0_4_ = _DAT_145fc6f14;
        auVar21._8_4_ = _DAT_145fc6f14;
        auVar21._12_4_ = _DAT_145fc6f14;
        auVar15 = vblendps_avx(auVar13,auVar37,8);
        auVar15 = vhaddps_avx(auVar15,auVar15);
        auVar25 = vhaddps_avx(auVar15,auVar15);
        auVar20 = vrsqrtps_avx(auVar25);
        auVar15 = vcmpps_avx(auVar21,auVar25,1);
        fVar29 = auVar20._0_4_;
        fVar33 = auVar20._4_4_;
        fVar34 = auVar20._8_4_;
        fVar35 = auVar20._12_4_;
        auVar14._0_4_ =
             fVar38 * ((_DAT_145fc6f08 * fVar29 * fVar29 * auVar25._0_4_ - _DAT_145fc6f08) * fVar29
                      + fVar29);
        auVar14._4_4_ =
             fVar40 * ((_DAT_145fc6f08 * fVar33 * fVar33 * auVar25._4_4_ - _DAT_145fc6f08) * fVar33
                      + fVar33);
        auVar14._8_4_ =
             fVar41 * ((_DAT_145fc6f08 * fVar34 * fVar34 * auVar25._8_4_ - _DAT_145fc6f08) * fVar34
                      + fVar34);
        auVar14._12_4_ =
             fVar42 * ((_DAT_145fc6f08 * fVar35 * fVar35 * auVar25._12_4_ - _DAT_145fc6f08) * fVar35
                      + fVar35);
        auVar15 = vblendvps_avx(ZEXT416((uint)_DAT_145fc6ed8),auVar14,auVar15);
        auVar39 = ZEXT1664(auVar15);
        fVar12 = _DAT_145fc6f08;
        fVar17 = _DAT_145fc6f08;
        fVar18 = _DAT_145fc6f08;
        fVar19 = _DAT_145fc6f08;
        FUN_144f20ec0(lVar3,auStack_3e0,0,*(undefined8 *)(param_1 + 0x20));
        FUN_144f20ec0(lVar3,auStack_3c0,1,*(undefined8 *)(param_1 + 0x28));
        uStack_298 = 0xffffffff00000000;
        uStack_290 = 0xffffffff00000000;
        uStack_208 = 0;
        uStack_198 = 0;
        uStack_128 = 0;
        uStack_b8 = 0;
        auStack_318 = auVar43._0_16_;
        auStack_308 = auVar44._0_16_;
        auStack_2f8 = auVar39._0_16_;
        uStack_2e8 = auVar39._0_4_ ^ _DAT_145fc6f10;
        uStack_2e4 = auVar39._4_4_ ^ _DAT_145fc6f10;
        uStack_2e0 = auVar39._8_4_ ^ _DAT_145fc6f10;
        uStack_2dc = auVar39._12_4_ ^ _DAT_145fc6f10;
        uStack_2d8 = uStack_3d8;
        uStack_2d0 = uStack_3d0;
        auVar15 = vcvtps2ph_f16c(ZEXT416(_DAT_145fc6f48),3);
        uVar10 = auVar15._0_2_ | 0x10000;
        FUN_14026db50(auStack_388,
                      *(undefined8 *)
                       (*(longlong *)(_DAT_14abbf348 + 0x28) + (ulonglong)auStack_3e0[0] * 0x10),
                      uVar10);
        FUN_14026db50(auStack_3b8,
                      *(undefined8 *)
                       (*(longlong *)(_DAT_14abbf348 + 0x28) + (ulonglong)auStack_3c0[0] * 0x10),
                      uVar10);
        auStack_2c8 = vsubps_avx(auStack_388._0_16_,auStack_3b8);
        lVar4 = *(longlong *)(param_1 + 0x38);
        auVar15 = *(undefined1 (*) [16])(lVar4 + 0x40);
        auVar22._0_4_ = (uint)auVar15._0_4_ & _DAT_145fc6f4c;
        auVar22._4_4_ = (uint)auVar15._4_4_ & _DAT_145fc6f4c;
        auVar22._8_4_ = (uint)auVar15._8_4_ & _DAT_145fc6f4c;
        auVar22._12_4_ = (uint)auVar15._12_4_ & _DAT_145fc6f4c;
        auVar25 = vshufps_avx(auVar15,auVar15,0x46);
        auVar30._0_4_ = auVar25._0_4_ * _DAT_146161930;
        auVar30._4_4_ = auVar25._4_4_ * _UNK_146161934;
        auVar30._8_4_ = auVar25._8_4_ * _UNK_146161938;
        auVar30._12_4_ = auVar25._12_4_ * _UNK_14616193c;
        auVar25 = vshufps_avx(auVar22,auVar22,0x55);
        auVar23._4_4_ = auVar22._0_4_;
        auVar23._0_4_ = auVar22._0_4_;
        auVar23._8_4_ = auVar22._0_4_;
        auVar23._12_4_ = auVar22._0_4_;
        auVar25 = vcmpps_avx(auVar23,auVar25,2);
        auVar20 = vshufps_avx(auVar15,auVar15,0x18);
        auVar27._0_4_ = auVar20._0_4_ * _DAT_146161920;
        auVar27._4_4_ = auVar20._4_4_ * _UNK_146161924;
        auVar27._8_4_ = auVar20._8_4_ * _UNK_146161928;
        auVar27._12_4_ = auVar20._12_4_ * _UNK_14616192c;
        auVar25 = vblendvps_avx(auVar30,auVar27,auVar25);
        fVar38 = auVar25._0_4_;
        auVar28._0_4_ = fVar38 * fVar38;
        fVar41 = auVar25._4_4_;
        auVar28._4_4_ = fVar41 * fVar41;
        fVar29 = auVar25._8_4_;
        auVar28._8_4_ = fVar29 * fVar29;
        fVar34 = auVar25._12_4_;
        auVar28._12_4_ = fVar34 * fVar34;
        auVar25 = vblendps_avx(auVar28,auVar32._0_16_,8);
        auVar25 = vhaddps_avx(auVar25,auVar25);
        auVar25 = vhaddps_avx(auVar25,auVar25);
        auVar20 = vrsqrtps_avx(auVar25);
        fVar40 = auVar20._0_4_;
        fVar42 = auVar20._4_4_;
        fVar33 = auVar20._8_4_;
        fVar35 = auVar20._12_4_;
        auVar24._0_4_ =
             ((fVar12 * fVar40 * fVar40 * auVar25._0_4_ - fVar12) * fVar40 + fVar40) * fVar38;
        auVar24._4_4_ =
             ((fVar17 * fVar42 * fVar42 * auVar25._4_4_ - fVar17) * fVar42 + fVar42) * fVar41;
        auVar24._8_4_ =
             ((fVar18 * fVar33 * fVar33 * auVar25._8_4_ - fVar18) * fVar33 + fVar33) * fVar29;
        auVar24._12_4_ =
             ((fVar19 * fVar35 * fVar35 * auVar25._12_4_ - fVar19) * fVar35 + fVar35) * fVar34;
        auVar25 = vshufps_avx(auVar15,auVar15,0xc9);
        auVar20 = vshufps_avx(auVar24,auVar24,0xd2);
        auVar26 = vshufps_avx(auVar24,auVar24,0xc9);
        auVar5 = vshufps_avx(auVar15,auVar15,0xd2);
        fVar38 = *(float *)(lVar4 + 0x50);
        auVar31._4_4_ = _DAT_146159bfc;
        auVar31._0_4_ = _DAT_146159bfc;
        auVar31._8_4_ = _DAT_146159bfc;
        auVar31._12_4_ = _DAT_146159bfc;
        fVar40 = *(float *)(lVar4 + 0x54);
        fVar41 = *(float *)(lVar4 + 0x58);
        fVar42 = (-(auVar5._0_4_ * auVar26._0_4_) + auVar20._0_4_ * auVar25._0_4_) * fVar41 +
                 auVar24._0_4_ * fVar40 + fVar38 * auVar15._0_4_;
        fVar29 = (-(auVar5._4_4_ * auVar26._4_4_) + auVar20._4_4_ * auVar25._4_4_) * fVar41 +
                 auVar24._4_4_ * fVar40 + fVar38 * auVar15._4_4_;
        fVar33 = (-(auVar5._8_4_ * auVar26._8_4_) + auVar20._8_4_ * auVar25._8_4_) * fVar41 +
                 auVar24._8_4_ * fVar40 + fVar38 * auVar15._8_4_;
        fVar38 = (-(auVar5._12_4_ * auVar26._12_4_) + auVar20._12_4_ * auVar25._12_4_) * fVar41 +
                 auVar24._12_4_ * fVar40 + fVar38 * auVar15._12_4_;
        auVar16._0_4_ = fVar42 * fVar42;
        auVar16._4_4_ = fVar29 * fVar29;
        auVar16._8_4_ = fVar33 * fVar33;
        auVar16._12_4_ = fVar38 * fVar38;
        auVar15 = vblendps_avx(auVar16,auVar32._0_16_,8);
        auVar15 = vhaddps_avx(auVar15,auVar15);
        auVar25 = vhaddps_avx(auVar15,auVar15);
        auVar15 = vrsqrtps_avx(auVar25);
        fVar38 = auVar15._0_4_;
        fVar40 = auVar15._4_4_;
        fVar41 = auVar15._8_4_;
        fVar42 = auVar15._12_4_;
        auVar15 = vcmpps_avx(auVar31,auVar25,2);
        uStack_2b8 = auVar15._0_4_ &
                     (uint)(((fVar12 * fVar38 * fVar38 * auVar25._0_4_ - fVar12) * fVar38 + fVar38)
                           * auVar25._0_4_);
        uStack_2b4 = auVar15._4_4_ &
                     (uint)(((fVar17 * fVar40 * fVar40 * auVar25._4_4_ - fVar17) * fVar40 + fVar40)
                           * auVar25._4_4_);
        uStack_2b0 = auVar15._8_4_ &
                     (uint)(((fVar18 * fVar41 * fVar41 * auVar25._8_4_ - fVar18) * fVar41 + fVar41)
                           * auVar25._8_4_);
        uStack_2ac = auVar15._12_4_ &
                     (uint)(((fVar19 * fVar42 * fVar42 * auVar25._12_4_ - fVar19) * fVar42 + fVar42)
                           * auVar25._12_4_);
        auStack_288 = auVar36._0_16_;
        uStack_278 = *(undefined4 *)(lVar3 + 0x54);
        auStack_368 = ZEXT432(0) << 0x20;
        auStack_388 = ZEXT432(0) << 0x20;
        uStack_328 = 0;
        uStack_b4 = 0;
        uStack_b0 = 1;
        auStack_348 = auStack_368;
        FUN_14540d620(auStack_388,auStack_318);
        FUN_1408bd0c0(auStack_318,auStack_388,0);
      }
      return 1;
    }
  }
  return 0;
}

