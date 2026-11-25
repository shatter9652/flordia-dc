// Recovered from game_scarlett_master.exe (GTA VI, Xbox Series X, PE32+ x64)
// Address: 1400f18a0  size: 1753 bytes
// Name:    FUN_1400f18a0
// Subsystem: core
//
// Referenced strings (0 in this body, 0 including direct callees):
// Callees: FUN_1413aa220, FUN_140bdda10, FUN_1440d6010, FUN_1420ae670, FUN_140bb2440, FUN_144e29d40, FUN_1440d56d0, FUN_144faf320, FUN_14509be90, FUN_1402e5b80, FUN_1440d5e80, FUN_144dd11b0
//
// Generated decompilation. Formatting follows MiscRef/GTAVSRC conventions;
// identifiers are recovered, not original. See ../../../README.md.

#include "gta6decomp/rage_types.h"


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1400f18a0(longlong param_1,uint param_2,byte param_3)

{
  byte bVar1;
  undefined1 uVar2;
  longlong *plVar3;
  undefined1 auVar4 [16];
  undefined1 auVar5 [16];
  byte bVar6;
  char cVar7;
  undefined4 uVar8;
  uint uVar9;
  longlong lVar10;
  ulonglong uVar11;
  byte bVar12;
  undefined4 uVar13;
  undefined8 uVar14;
  bool bVar15;
  undefined1 uVar16;
  undefined8 unaff_RBP;
  ulonglong uVar17;
  undefined8 *puVar18;
  undefined8 **ppuVar19;
  byte bVar20;
  byte bVar21;
  bool bVar22;
  undefined1 auVar23 [16];
  undefined1 auVar24 [16];
  undefined1 auVar25 [16];
  undefined1 auVar26 [16];
  undefined1 auVar27 [16];
  undefined1 auVar28 [16];
  undefined1 auVar29 [16];
  undefined1 auVar30 [16];
  undefined1 auVar31 [16];
  undefined1 auVar32 [16];
  undefined1 auVar33 [16];
  undefined1 auVar34 [16];
  undefined1 auVar35 [64];
  float fVar36;
  float fVar38;
  float fVar39;
  float fVar40;
  undefined1 auVar37 [64];
  float fVar41;
  float fVar42;
  float fVar43;
  float fVar44;
  undefined8 *puStack_1b8;
  undefined *puStack_1b0;
  undefined8 uStack_1a8;
  undefined8 uStack_1a0;
  undefined8 uStack_198;
  undefined8 uStack_190;
  undefined1 auStack_188 [16];
  undefined8 uStack_178;
  undefined8 uStack_170;
  float fStack_168;
  float fStack_164;
  float fStack_160;
  float fStack_15c;
  undefined1 auStack_158 [16];
  undefined8 *puStack_148;
  code *pcStack_140;
  undefined *puStack_138;
  undefined *puStack_130;
  undefined8 uStack_128;
  undefined *puStack_120;
  undefined8 *puStack_118;
  undefined *puStack_110;
  undefined8 uStack_108;
  undefined8 uStack_100;
  undefined8 uStack_f8;
  undefined8 uStack_f0;
  undefined1 uStack_e8;
  undefined1 uStack_e7;
  undefined1 uStack_e6;
  undefined1 uStack_e5;
  undefined1 uStack_e4;
  undefined1 uStack_e3;
  undefined1 auStack_d8 [32];
  undefined4 uStack_b8;
  undefined4 uStack_b4;
  undefined4 uStack_b0;
  undefined4 uStack_ac;
  undefined8 *puStack_a8;
  undefined8 *puStack_a0;
  undefined8 *puStack_98;
  undefined8 *puStack_90;
  undefined8 *puStack_88;
  undefined8 *puStack_80;
  
  uVar9 = _DAT_14abbef4c;
  bVar21 = *(byte *)(param_1 + 0xb1);
  uVar17 = CONCAT71((int7)((ulonglong)unaff_RBP >> 8),bVar21);
  *(undefined1 *)(param_1 + 0xb1) = 0;
  bVar20 = *(byte *)(param_1 + 0xc6);
  *(undefined1 *)(param_1 + 0xc6) = 0;
  puVar18 = (undefined8 *)(*(ulonglong *)(param_1 + 8) & 0xfffffffffffffff0);
  if ((*(char *)(param_1 + 0xb7) != '\x01') || (*(char *)(param_1 + 0xb0) != '\x01'))
  goto LAB_1400f1ecc;
  auVar27._0_12_ = ZEXT812(0);
  auVar27._12_4_ = 0;
  auVar27 = vcmpss_avx(auVar27,ZEXT416(*(uint *)(param_1 + 0x48)),1);
  auVar27 = vblendvps_avx(ZEXT416(uVar9),ZEXT416(*(uint *)(param_1 + 0x48)),auVar27);
  auVar35 = ZEXT1664(auVar27);
  bVar6 = FUN_1440d5e80(*(undefined1 *)(puVar18 + 6),*(undefined4 *)((longlong)puVar18 + 0x9c));
  bVar1 = *(byte *)(param_1 + 0xcd);
  *(undefined1 *)(param_1 + 0xcd) = 0;
  FUN_144faf320(param_1,&puStack_1b8);
  auStack_d8 = ZEXT1632(CONCAT412(0x3f800000,ZEXT812(0)));
  uStack_b8 = _DAT_145fc6ed8;
  uStack_b4 = _DAT_145fc6ed8;
  uStack_b0 = _DAT_145fc6ed8;
  uStack_ac = _DAT_145fc6ed8;
  auVar35 = ZEXT1664(auVar35._0_16_);
  FUN_140bb2440(puVar18,uVar17 & 0xffffffff,auStack_d8);
  *(int *)(param_1 + 0x180) = _DAT_14abbef44;
  auVar27 = vpunpckhwd_avx(auStack_d8._16_16_,auStack_d8._16_16_);
  auVar27 = vpsrad_avx(auVar27,0x10);
  auVar27 = vcvtdq2ps_avx(auVar27);
  auVar27 = vshufpd_avx(auVar27,auVar27,3);
  auVar28._0_4_ = auVar27._0_4_ * _DAT_146159c90 + auStack_d8._16_4_;
  auVar28._4_4_ = auVar27._4_4_ * _UNK_146159c94 + auStack_d8._20_4_;
  auVar28._8_4_ = auVar27._8_4_ * _UNK_146159c98 + auStack_d8._24_4_;
  auVar28._12_4_ = auVar27._12_4_ * _UNK_146159c9c + auStack_d8._28_4_;
  auVar27 = vcmpps_avx(auVar28,ZEXT816(0) << 0x20,0);
  uVar13 = vmovmskps_avx(auVar27);
  bVar12 = (byte)uVar13 & 7;
  bVar20 = bVar20 | bVar21;
  if ((bVar20 == 0) && (bVar12 != 7)) {
    auVar4._8_8_ = uStack_1a0;
    auVar4._0_8_ = uStack_1a8;
    auVar27 = vsubps_avx(auVar4,*(undefined1 (*) [16])(puVar18 + 0xe));
    auStack_188 = vpsubw_avx(auVar4,*(undefined1 (*) [16])(puVar18 + 0xe));
    auVar27 = vblendps_avx(auVar27,auStack_188,8);
    auVar28 = vpunpckhwd_avx(auVar27,auVar27);
    auVar28 = vpsrad_avx(auVar28,0x10);
    auVar28 = vcvtdq2ps_avx(auVar28);
    auVar28 = vshufpd_avx(auVar28,auVar28,3);
    fVar36 = auVar28._0_4_ * _DAT_146159c90 + auVar27._0_4_;
    fVar38 = auVar28._4_4_ * _UNK_146159c94 + auVar27._4_4_;
    fVar39 = auVar28._8_4_ * _UNK_146159c98 + auVar27._8_4_;
    fVar40 = auVar28._12_4_ * _UNK_146159c9c + auVar27._12_4_;
    if (*(char *)(param_1 + 0xb3) == '\0') {
      fStack_168 = fVar36;
      fStack_164 = fVar38;
      fStack_160 = fVar39;
      fStack_15c = fVar40;
      bVar20 = FUN_14509be90(*(undefined8 *)(param_1 + 8),*(undefined4 *)(param_1 + 0x50),
                             &fStack_168,auVar35._0_8_);
      uVar17 = 1;
      if (bVar20 == 0) {
        uVar17 = (ulonglong)bVar21;
      }
    }
    else {
      lVar10 = FUN_144e29d40(*(undefined4 *)((longlong)puVar18 + 0x9c));
      if (lVar10 != 0) {
        auVar23._0_4_ = fVar36 * fVar36;
        auVar23._4_4_ = fVar38 * fVar38;
        auVar23._8_4_ = fVar39 * fVar39;
        auVar23._12_4_ = fVar40 * fVar40;
        auVar29._0_12_ = ZEXT812(0);
        auVar29._12_4_ = 0;
        auVar27 = vblendps_avx(auVar23,auVar29,8);
        auVar27 = vhaddps_avx(auVar27,auVar27);
        vhaddps_avx(auVar27,auVar27);
        func_0x000142669fd0(lVar10);
      }
      bVar20 = 0;
    }
  }
  bVar6 = bVar6 | bVar1;
  if ((*(char *)(param_1 + 0xb3) == '\0') && (*(char *)(puVar18 + 6) == '\x02')) {
    if (*(char *)(param_1 + 0xbf) == '\x01') {
      auVar5._8_8_ = uStack_1a0;
      auVar5._0_8_ = uStack_1a8;
      auVar27 = vpunpckhwd_avx(auVar5,auVar5);
      auVar27 = vpsrad_avx(auVar27,0x10);
      auVar27 = vcvtdq2ps_avx(auVar27);
      auVar27 = vshufpd_avx(auVar27,auVar27,3);
      auVar37 = ZEXT1664(CONCAT412(auVar27._12_4_ * _UNK_146159c9c +
                                   (float)((ulonglong)uStack_1a0 >> 0x20),
                                   CONCAT48(auVar27._8_4_ * _UNK_146159c98 + (float)uStack_1a0,
                                            CONCAT44(auVar27._4_4_ * _UNK_146159c94 +
                                                     (float)((ulonglong)uStack_1a8 >> 0x20),
                                                     auVar27._0_4_ * _DAT_146159c90 +
                                                     (float)uStack_1a8))));
      uStack_178 = puVar18[0xe];
      uStack_170 = puVar18[0xf];
      func_0x000144dc3790();
      auVar27 = vsubps_avx(auVar37._0_16_,auStack_158);
      auVar30._0_12_ = ZEXT812(0);
      auVar30._12_4_ = 0;
      uVar11 = uVar17 & 0xff;
      auVar24._0_4_ = auVar27._0_4_ * auVar27._0_4_;
      auVar24._4_4_ = auVar27._4_4_ * auVar27._4_4_;
      auVar24._8_4_ = auVar27._8_4_ * auVar27._8_4_;
      auVar24._12_4_ = auVar27._12_4_ * auVar27._12_4_;
      auVar27 = vblendps_avx(auVar24,auVar30,8);
      auVar27 = vhaddps_avx(auVar27,auVar27);
      auVar27 = vhaddps_avx(auVar27,auVar27);
      uVar17 = 1;
      if (auVar27._0_4_ <= _DAT_14615a7f8) {
        uVar17 = uVar11;
      }
    }
    *(uint *)((longlong)puVar18 + 0xec) =
         *(uint *)((longlong)puVar18 + 0xec) & 0xfffbffff | (param_2 & 0xff) << 0x12;
  }
  else {
    *(uint *)((longlong)puVar18 + 0xec) =
         *(uint *)((longlong)puVar18 + 0xec) & 0xfffbffff | (param_2 & 0xff) << 0x12;
    if (*(char *)(puVar18 + 6) == '\x04') {
      uVar17 = uVar17 & 0xff;
      if (*(short *)((longlong)puVar18 + 0xc2) == 0xc) {
        uVar17 = 0;
      }
      if (*(short *)(puVar18 + 0x18) == 0xc) {
        uVar17 = 0;
      }
    }
  }
  uVar13 = *(undefined4 *)((longlong)puVar18 + 0x9c);
  bVar21 = bVar6 & 1;
  cVar7 = FUN_144dd11b0();
  uVar16 = (undefined1)uVar17;
  if ((cVar7 == '\0') || (bVar21 != 0)) {
    if (puVar18[7] == 0) {
      bVar22 = false;
    }
    else {
      bVar22 = *(int *)(puVar18[7] + 0x10) != 0;
    }
    uVar2 = *(undefined1 *)(param_1 + 0xbc);
    *(undefined1 *)(param_1 + 0xbc) = 0;
    if ((bVar21 | param_3) != 1) {
      FUN_1440d6010(puVar18,&puStack_1b8,uVar17 & 0xffffffff,uVar2,*(undefined1 *)(param_1 + 0xc0),
                    bVar22,*(undefined1 *)(param_1 + 0xb5),(char)param_2);
      uVar13 = auVar35._0_4_;
      goto LAB_1400f1dfa;
    }
    plVar3 = *(longlong **)((ulonglong)*(byte *)(puVar18 + 6) * 8 + 0x14abbe7c0);
    bVar15 = false;
    uVar9 = (uint)((ulonglong)((longlong)puVar18 - *plVar3) / (ulonglong)*(uint *)(plVar3 + 1)) &
            0x1ffff;
    puStack_148 = &uStack_128;
    uStack_128 = (undefined8 **)
                 (CONCAT35(uStack_128._5_3_,
                           CONCAT14(bVar6,(*(byte *)(puVar18 + 6) & 0x1f) << 0x11 | uVar9 |
                                          (*(uint *)(plVar3[5] + (ulonglong)uVar9 * 4) & 0x7fe0000)
                                          << 5)) & 0xffffff01ffffffff);
    puStack_118 = puStack_1b8;
    puStack_110 = puStack_1b0;
    uStack_108 = uStack_1a8;
    uStack_100 = uStack_1a0;
    uStack_f8 = uStack_198;
    uStack_f0 = uStack_190;
    pcStack_140 = FUN_1440d5f40;
    puStack_138 = &UNK_1424eb140;
    puStack_130 = &SUB_140004380;
    auVar35 = ZEXT1664(auVar35._0_16_);
    uStack_e8 = uVar16;
    uStack_e7 = uVar2;
    uStack_e6 = *(undefined1 *)(param_1 + 0xc0);
    uStack_e5 = bVar22;
    uStack_e4 = *(undefined1 *)(param_1 + 0xb5);
    uStack_e3 = (char)param_2;
    FUN_1402e5b80(4);
    uVar13 = auVar35._0_4_;
  }
  else {
    lVar10 = func_0x0001450ed6c0(uVar13);
    uVar13 = auVar35._0_4_;
    if (lVar10 == 0) {
LAB_1400f1dfa:
      bVar15 = false;
    }
    else {
      fVar41 = *(float *)(lVar10 + 0x50);
      fVar42 = *(float *)(lVar10 + 0x54);
      fVar43 = *(float *)(lVar10 + 0x58);
      fVar44 = *(float *)(lVar10 + 0x5c);
      fVar36 = *(float *)(lVar10 + 0x60);
      fVar38 = *(float *)(lVar10 + 100);
      fVar39 = *(float *)(lVar10 + 0x68);
      fVar40 = *(float *)(lVar10 + 0x6c);
      FUN_140bdda10(param_1,puVar18,&puStack_1b8,param_2,uVar16);
      uVar13 = auVar35._0_4_;
      auVar33._0_4_ = fVar41 + _DAT_145fc6fb0;
      auVar33._4_4_ = fVar42 + _DAT_145fc6fb0;
      auVar33._8_4_ = fVar43 + _DAT_145fc6fb0;
      auVar33._12_4_ = fVar44 + _DAT_145fc6fb0;
      auVar34._0_4_ = fVar41 + _DAT_145fc6f14;
      auVar34._4_4_ = fVar42 + _DAT_145fc6f14;
      auVar34._8_4_ = fVar43 + _DAT_145fc6f14;
      auVar34._12_4_ = fVar44 + _DAT_145fc6f14;
      auVar27 = vcmpps_avx(auVar33,*(undefined1 (*) [16])(lVar10 + 0x50),2);
      auVar28 = vcmpps_avx(*(undefined1 (*) [16])(lVar10 + 0x50),auVar34,2);
      auVar32._0_4_ = auVar27._0_4_ & auVar28._0_4_;
      auVar32._4_4_ = auVar27._4_4_ & auVar28._4_4_;
      auVar32._8_4_ = auVar27._8_4_ & auVar28._8_4_;
      auVar32._12_4_ = auVar27._12_4_ & auVar28._12_4_;
      uVar8 = vmovmskps_avx(auVar32);
      if ((~(byte)uVar8 & 7) == 0) {
        auVar25._0_4_ = fVar36 + _DAT_145fc6fb0;
        auVar25._4_4_ = fVar38 + _DAT_145fc6fb0;
        auVar25._8_4_ = fVar39 + _DAT_145fc6fb0;
        auVar25._12_4_ = fVar40 + _DAT_145fc6fb0;
        auVar31._0_4_ = fVar36 + _DAT_145fc6f14;
        auVar31._4_4_ = fVar38 + _DAT_145fc6f14;
        auVar31._8_4_ = fVar39 + _DAT_145fc6f14;
        auVar31._12_4_ = fVar40 + _DAT_145fc6f14;
        auVar27 = vcmpps_avx(auVar25,*(undefined1 (*) [16])(lVar10 + 0x60),2);
        auVar28 = vcmpps_avx(*(undefined1 (*) [16])(lVar10 + 0x60),auVar31,2);
        auVar26._0_4_ = auVar27._0_4_ & auVar28._0_4_;
        auVar26._4_4_ = auVar27._4_4_ & auVar28._4_4_;
        auVar26._8_4_ = auVar27._8_4_ & auVar28._8_4_;
        auVar26._12_4_ = auVar27._12_4_ & auVar28._12_4_;
        auVar27 = vpcmpeqd_avx(auVar28,auVar28);
        if ((auVar27 & ~auVar26) != (undefined1  [16])0x0) goto LAB_1400f1c49;
      }
      else {
LAB_1400f1c49:
        if (param_3 == 0) {
          func_0x0001440d5f30(puVar18);
          uVar13 = auVar35._0_4_;
        }
        else {
          plVar3 = *(longlong **)((ulonglong)*(byte *)(puVar18 + 6) * 8 + 0x14abbe7c0);
          uVar9 = (uint)((ulonglong)((longlong)puVar18 - *plVar3) / (ulonglong)*(uint *)(plVar3 + 1)
                        ) & 0x1ffff;
          uStack_128 = &puStack_148;
          puStack_148 = (undefined8 *)
                        CONCAT44(puStack_148._4_4_,
                                 (*(byte *)(puVar18 + 6) & 0x1f) << 0x11 | uVar9 |
                                 (*(uint *)(plVar3[5] + (ulonglong)uVar9 * 4) & 0x7fe0000) << 5);
          puStack_120 = &UNK_1440d5ec0;
          puStack_118 = (undefined8 *)&UNK_1413b41f0;
          puStack_110 = &SUB_140004380;
          FUN_1402e5b80(4);
          uVar13 = auVar35._0_4_;
        }
      }
      bVar15 = *(int *)(param_1 + 0x18c) != _DAT_14abbef44 || *(int *)(param_1 + 0x1c0) == 0;
    }
  }
  if (*(char *)(param_1 + 0xb6) == '\x01') {
    ppuVar19 = (undefined8 **)auStack_d8;
    if (bVar12 == 7) {
      ppuVar19 = &puStack_1b8;
    }
    puStack_88 = ppuVar19[4];
    puStack_80 = ppuVar19[5];
    puStack_a8 = *ppuVar19;
    puStack_a0 = ppuVar19[1];
    puStack_98 = ppuVar19[2];
    puStack_90 = ppuVar19[3];
    FUN_1440d56d0(*(undefined8 *)(param_1 + 8),*(undefined1 *)(param_1 + 0xc1),&puStack_a8,
                  &puStack_1b8,uVar16,uVar13);
  }
  if ((0.0 < *(float *)(param_1 + 0x48)) ||
     ((*(int *)(param_1 + 0x1c0) != 0 && (*(int *)(param_1 + 0x18c) == _DAT_14abbef44)))) {
    FUN_1413aa220(param_1,auStack_d8,&puStack_1b8,uVar17 & 0xffffffff);
  }
  if (bVar15) {
    FUN_1420ae670(*(undefined8 *)(param_1 + 8),*(undefined1 *)(param_1 + 0xb5));
  }
LAB_1400f1ecc:
  if (bVar20 != 0) {
    uStack_128 = &puStack_1b8;
    if (param_3 == 0) {
      uVar14 = 0x12;
    }
    else {
      uVar14 = 4;
    }
    puStack_120 = &UNK_1440d6ba0;
    puStack_118 = (undefined8 *)&UNK_1401167b0;
    puStack_110 = &SUB_140004380;
    puStack_1b8 = puVar18;
    FUN_1402e5b80(uVar14);
  }
  func_0x0001455c9810(param_1);
  return;
}

