// Recovered from game_scarlett_master.exe (GTA VI, Xbox Series X, PE32+ x64)
// Address: 14001e250  size: 1193 bytes
// Name:    FUN_14001e250
// Subsystem: core
//
// Referenced strings (0 in this body, 0 including direct callees):
// Callees: FUN_144db6f00, FUN_144e14710, FUN_144e156a0, FUN_144da0e70, FUN_144db6f30, FUN_144daa460
//
// Generated decompilation. Formatting follows MiscRef/GTAVSRC conventions;
// identifiers are recovered, not original. See ../../../README.md.

#include "gta6decomp/rage_types.h"


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

ulonglong FUN_14001e250(longlong param_1,longlong *param_2,undefined1 (*param_3) [16],
                       ulonglong param_4)

{
  longlong lVar1;
  bool bVar2;
  bool bVar3;
  bool bVar4;
  bool bVar5;
  undefined4 uVar6;
  ulonglong uVar7;
  undefined1 auVar8 [16];
  undefined1 auVar9 [16];
  undefined1 auVar10 [16];
  undefined1 auVar11 [16];
  undefined1 auVar12 [16];
  undefined1 auVar13 [16];
  undefined1 auVar14 [16];
  undefined1 auVar15 [16];
  float fVar16;
  float fVar19;
  float fVar20;
  undefined1 auVar17 [16];
  float fVar21;
  undefined1 auVar18 [16];
  undefined1 auVar22 [16];
  float fVar23;
  float fVar24;
  float fVar25;
  float fVar26;
  float fVar27;
  undefined1 auVar28 [64];
  undefined1 auVar29 [16];
  undefined1 auVar31 [16];
  undefined1 auVar32 [16];
  float fVar34;
  float fVar35;
  float fVar36;
  float fVar37;
  uint uVar38;
  uint uVar40;
  uint uVar41;
  uint uVar42;
  undefined1 auVar39 [64];
  float fVar43;
  float fVar45;
  float fVar46;
  float fVar47;
  undefined1 auVar44 [64];
  undefined1 *puVar48;
  undefined8 uStack_1d8;
  undefined8 uStack_1d0;
  undefined8 uStack_1c8;
  undefined8 uStack_1c0;
  undefined1 auStack_1b8 [16];
  undefined8 uStack_1a8;
  undefined8 uStack_1a0;
  undefined8 uStack_198;
  undefined8 uStack_190;
  undefined1 auStack_188 [16];
  undefined1 auStack_178 [16];
  undefined1 auStack_168 [12];
  float fStack_15c;
  undefined1 auStack_158 [16];
  undefined1 auStack_148 [16];
  undefined1 auStack_138 [16];
  undefined *puStack_128;
  ulonglong uStack_120;
  undefined4 uStack_118;
  undefined4 uStack_114;
  undefined4 uStack_110;
  undefined8 uStack_108;
  undefined4 *puStack_100;
  undefined8 uStack_f8;
  undefined8 uStack_f0;
  undefined4 uStack_e8;
  undefined4 uStack_e4;
  undefined4 uStack_e0;
  undefined4 uStack_dc;
  undefined4 uStack_d8;
  undefined1 auStack_c8 [16];
  undefined1 auVar30 [64];
  undefined1 auVar33 [64];
  
  uVar7 = 0;
  if (((param_4 >> 0x21 & 1) != 0) && (_DAT_145fc6f00 < (float)param_4)) {
    (**(code **)(*param_2 + 0x18))(param_2,auStack_138,auStack_1b8);
    auVar31._0_12_ = ZEXT812(0);
    auVar31._12_4_ = 0;
    auVar33 = ZEXT1664(auVar31);
    auVar29._4_4_ = _DAT_146159bfc;
    auVar29._0_4_ = _DAT_146159bfc;
    auVar29._8_4_ = _DAT_146159bfc;
    auVar29._12_4_ = _DAT_146159bfc;
    auVar30 = ZEXT1664(auVar29);
    auVar10 = vsubps_avx(auStack_1b8,*param_3);
    auVar8._0_4_ = auVar10._0_4_ * auVar10._0_4_;
    auVar8._4_4_ = auVar10._4_4_ * auVar10._4_4_;
    auVar8._8_4_ = auVar10._8_4_ * auVar10._8_4_;
    auVar8._12_4_ = auVar10._12_4_ * auVar10._12_4_;
    auVar10 = vblendps_avx(auVar8,auVar31,8);
    auVar10 = vhaddps_avx(auVar10,auVar10);
    auVar32 = vhaddps_avx(auVar10,auVar10);
    auVar10 = vrsqrtps_avx(auVar32);
    fVar23 = auVar10._0_4_;
    fVar24 = auVar10._4_4_;
    fVar25 = auVar10._8_4_;
    fVar27 = auVar10._12_4_;
    auVar10 = vcmpps_avx(auVar29,auVar32,2);
    fVar34 = (float)(auVar10._0_4_ &
                    (uint)(((_DAT_145fc6f08 * fVar23 * fVar23 * auVar32._0_4_ - _DAT_145fc6f08) *
                            fVar23 + fVar23) * auVar32._0_4_));
    fVar35 = (float)(auVar10._4_4_ &
                    (uint)(((_DAT_145fc6f08 * fVar24 * fVar24 * auVar32._4_4_ - _DAT_145fc6f08) *
                            fVar24 + fVar24) * auVar32._4_4_));
    fVar36 = (float)(auVar10._8_4_ &
                    (uint)(((_DAT_145fc6f08 * fVar25 * fVar25 * auVar32._8_4_ - _DAT_145fc6f08) *
                            fVar25 + fVar25) * auVar32._8_4_));
    fVar37 = (float)(auVar10._12_4_ &
                    (uint)(((_DAT_145fc6f08 * fVar27 * fVar27 * auVar32._12_4_ - _DAT_145fc6f08) *
                            fVar27 + fVar27) * auVar32._12_4_));
    fVar45 = _DAT_145fc6f08;
    fVar46 = _DAT_145fc6f08;
    fVar47 = _DAT_145fc6f08;
    fVar26 = _DAT_145fc6f08;
    FUN_144db6f00(*(undefined8 *)(param_1 + 0x10),auStack_148,*(undefined4 *)(param_1 + 0x78));
    auVar28 = ZEXT1664(auStack_148);
    fVar19 = *(float *)(param_1 + 0xc0);
    fVar20 = *(float *)(param_1 + 0xc4);
    fVar21 = *(float *)(param_1 + 200);
    fVar43 = *(float *)(param_1 + 0xcc);
    auVar10 = vsubps_avx(auStack_148,*param_3);
    fVar23 = *(float *)(*(longlong *)(param_1 + 0x88) + 400);
    auVar9._0_4_ = auVar10._0_4_ * auVar10._0_4_;
    auVar9._4_4_ = auVar10._4_4_ * auVar10._4_4_;
    auVar9._8_4_ = auVar10._8_4_ * auVar10._8_4_;
    auVar9._12_4_ = auVar10._12_4_ * auVar10._12_4_;
    auVar10 = vblendps_avx(auVar9,auVar33._0_16_,8);
    auVar10 = vhaddps_avx(auVar10,auVar10);
    auVar32 = vhaddps_avx(auVar10,auVar10);
    auVar10 = vrsqrtps_avx(auVar32);
    fVar24 = auVar10._0_4_;
    fVar25 = auVar10._4_4_;
    fVar27 = auVar10._8_4_;
    fVar16 = auVar10._12_4_;
    auVar10 = vcmpps_avx(auVar30._0_16_,auVar32,2);
    auVar39 = ZEXT1664(CONCAT412(auVar10._12_4_ &
                                 (uint)(((fVar26 * fVar16 * fVar16 * auVar32._12_4_ - fVar26) *
                                         fVar16 + fVar16) * auVar32._12_4_),
                                 CONCAT48(auVar10._8_4_ &
                                          (uint)(((fVar47 * fVar27 * fVar27 * auVar32._8_4_ - fVar47
                                                  ) * fVar27 + fVar27) * auVar32._8_4_),
                                          CONCAT44(auVar10._4_4_ &
                                                   (uint)(((fVar46 * fVar25 * fVar25 * auVar32._4_4_
                                                           - fVar46) * fVar25 + fVar25) *
                                                         auVar32._4_4_),
                                                   auVar10._0_4_ &
                                                   (uint)(((fVar45 * fVar24 * fVar24 * auVar32._0_4_
                                                           - fVar45) * fVar24 + fVar24) *
                                                         auVar32._0_4_)))));
    fVar24 = *(float *)(*(longlong *)(param_1 + 0x88) + 0x18c);
    auVar44 = ZEXT1664(CONCAT412(fVar43 * fVar24,
                                 CONCAT48(fVar21 * fVar24,CONCAT44(fVar20 * fVar24,fVar19 * fVar24))
                                ));
    fVar24 = fVar23;
    fVar25 = fVar23;
    fVar27 = fVar23;
    uVar6 = (**(code **)(*param_2 + 0x48))(param_2);
    func_0x00014478e3d0(param_1,auStack_158,uVar6);
    auVar32 = auVar33._0_16_;
    auVar11._0_4_ = auVar44._0_4_ + auStack_158._0_4_;
    auVar11._4_4_ = auVar44._4_4_ + auStack_158._4_4_;
    auVar11._8_4_ = auVar44._8_4_ + auStack_158._8_4_;
    auVar11._12_4_ = auVar44._12_4_ + auStack_158._12_4_;
    auVar8 = auVar39._0_16_;
    auVar10 = vcmpps_avx(auVar11,auVar8,2);
    if ((((SUB161(auVar10 >> 0x1f,0) & 1) == 0 && (SUB161(auVar10 >> 0x3f,0) & 1) == 0) &&
        (SUB161(auVar10 >> 0x5f,0) & 1) == 0) && -1 < auVar10[0xf]) {
      auVar15._0_4_ = fVar23 * fVar19;
      auVar15._4_4_ = fVar24 * fVar20;
      auVar15._8_4_ = fVar25 * fVar21;
      auVar15._12_4_ = fVar27 * fVar43;
      auVar11 = vsubps_avx(auStack_158,auVar15);
      auVar9 = vcmpps_avx(auVar8,auVar11,1);
      auVar10 = *(undefined1 (*) [16])(param_1 + 0xc0);
      if ((((SUB161(auVar9 >> 0x1f,0) & 1) != 0 || (SUB161(auVar9 >> 0x3f,0) & 1) != 0) ||
          (SUB161(auVar9 >> 0x5f,0) & 1) != 0) || auVar9[0xf] < '\0') {
        auVar32 = vsubps_avx(auVar11,auVar8);
        auVar22._0_12_ = ZEXT812(0);
        auVar22._12_4_ = 0;
        auVar8 = vsubps_avx(auVar10,auVar15);
        auVar32 = vmaxps_avx(auVar32,auVar22);
        auVar8 = vminps_avx(auVar32,auVar8);
        auVar32._0_4_ = auVar8._0_4_ ^ _DAT_145fc6f10;
        auVar32._4_4_ = auVar8._4_4_ ^ _DAT_145fc6f10;
        auVar32._8_4_ = auVar8._8_4_ ^ _DAT_145fc6f10;
        auVar32._12_4_ = auVar8._12_4_ ^ _DAT_145fc6f10;
      }
    }
    else {
      auVar10 = vsubps_avx(auVar8,auVar11);
      auVar10 = vmaxps_avx(auVar10,auVar32);
      auVar32 = vminps_avx(auVar10,auVar44._0_16_);
      auVar10 = *(undefined1 (*) [16])(param_1 + 0xc0);
    }
    auVar12._0_4_ = auVar32._0_4_ + fVar34;
    auVar12._4_4_ = auVar32._4_4_ + fVar35;
    auVar12._8_4_ = auVar32._8_4_ + fVar36;
    auVar12._12_4_ = auVar32._12_4_ + fVar37;
    auVar17._0_4_ = _DAT_145fc6f10 ^ auVar10._0_4_;
    auVar17._4_4_ = _DAT_145fc6f10 ^ auVar10._4_4_;
    auVar17._8_4_ = _DAT_145fc6f10 ^ auVar10._8_4_;
    auVar17._12_4_ = _DAT_145fc6f10 ^ auVar10._12_4_;
    auVar32 = vmaxps_avx(auVar12,auVar17);
    auVar10 = vminps_avx(auVar32,auVar10);
    auVar33 = ZEXT1664(auVar10);
    auVar10 = vcmpps_avx(auVar10,ZEXT816(0) << 0x40,4);
    bVar4 = (SUB161(auVar10 >> 0x1f,0) & 1) != 0;
    bVar5 = (SUB161(auVar10 >> 0x3f,0) & 1) != 0;
    bVar3 = (SUB161(auVar10 >> 0x5f,0) & 1) != 0;
    bVar2 = auVar10[0xf] < '\0';
    uVar7 = CONCAT71((int7)((ulonglong)param_1 >> 8),((bVar4 || bVar5) || bVar3) || bVar2);
    if (((bVar4 || bVar5) || bVar3) || bVar2) {
      auVar10 = vsubps_avx(auStack_1b8,auVar28._0_16_);
      auVar44 = ZEXT1664(auVar10);
      auVar13._0_4_ = auVar10._0_4_ * auVar10._0_4_;
      auVar13._4_4_ = auVar10._4_4_ * auVar10._4_4_;
      auVar13._8_4_ = auVar10._8_4_ * auVar10._8_4_;
      auVar13._12_4_ = auVar10._12_4_ * auVar10._12_4_;
      auVar10 = vblendps_avx(auVar13,ZEXT816(0) << 0x40,8);
      auVar10 = vhaddps_avx(auVar10,auVar10);
      auVar32 = vhaddps_avx(auVar10,auVar10);
      auVar10 = vrsqrtps_avx(auVar32);
      fVar23 = auVar10._0_4_;
      fVar24 = auVar10._4_4_;
      fVar25 = auVar10._8_4_;
      fVar27 = auVar10._12_4_;
      fVar23 = (fVar23 * fVar23 * auVar32._0_4_ * fVar45 - fVar45) * fVar23 + fVar23;
      fVar24 = (fVar24 * fVar24 * auVar32._4_4_ * fVar46 - fVar46) * fVar24 + fVar24;
      fVar25 = (fVar25 * fVar25 * auVar32._8_4_ * fVar47 - fVar47) * fVar25 + fVar25;
      fVar27 = (fVar27 * fVar27 * auVar32._12_4_ * fVar26 - fVar26) * fVar27 + fVar27;
      auVar10 = vcmpps_avx(auVar30._0_16_,auVar32,2);
      fVar43 = (float)(auVar10._0_4_ & (uint)(fVar23 * auVar32._0_4_));
      fVar45 = (float)(auVar10._4_4_ & (uint)(fVar24 * auVar32._4_4_));
      fVar46 = (float)(auVar10._8_4_ & (uint)(fVar25 * auVar32._8_4_));
      fVar47 = (float)(auVar10._12_4_ & (uint)(fVar27 * auVar32._12_4_));
      uVar38 = _DAT_145fc6f10;
      uVar40 = _DAT_145fc6f10;
      uVar41 = _DAT_145fc6f10;
      uVar42 = _DAT_145fc6f10;
      FUN_144db6f30(*(undefined8 *)(param_1 + 0x10),auStack_168,*(undefined4 *)(param_1 + 0x78));
      auVar10._12_4_ = fStack_15c;
      auVar10._0_12_ = auStack_168;
      auVar8 = auVar44._0_16_;
      auVar32 = vshufps_avx(auVar8,auVar8,0xd2);
      auVar8 = vshufps_avx(auVar8,auVar8,0xc9);
      auVar14._0_4_ = uVar38 ^ auStack_168._0_4_;
      auVar14._4_4_ = uVar40 ^ auStack_168._4_4_;
      auVar14._8_4_ = uVar41 ^ auStack_168._8_4_;
      auVar14._12_4_ = uVar42 ^ (uint)fStack_15c;
      auVar10 = vblendps_avx(auVar14,auVar10,8);
      auVar9 = vshufps_avx(auVar10,auVar10,0xc9);
      auVar10 = vshufps_avx(auVar10,auVar10,0xd2);
      fVar16 = -(auVar10._0_4_ * auVar8._0_4_) + auVar9._0_4_ * auVar32._0_4_;
      fVar19 = -(auVar10._4_4_ * auVar8._4_4_) + auVar9._4_4_ * auVar32._4_4_;
      fVar20 = -(auVar10._8_4_ * auVar8._8_4_) + auVar9._8_4_ * auVar32._8_4_;
      fVar21 = -(auVar10._12_4_ * auVar8._12_4_) + auVar9._12_4_ * auVar32._12_4_;
      auVar18._0_4_ = fVar16 + fVar16;
      auVar18._4_4_ = fVar19 + fVar19;
      auVar18._8_4_ = fVar20 + fVar20;
      auVar18._12_4_ = fVar21 + fVar21;
      auVar32 = vshufps_avx(auVar18,auVar18,0xd2);
      auVar8 = vshufps_avx(auVar18,auVar18,0xc9);
      auVar39 = ZEXT1664(CONCAT412(auVar18._12_4_ * fStack_15c + auVar44._12_4_ +
                                   -(auVar10._12_4_ * auVar8._12_4_) +
                                   auVar32._12_4_ * auVar9._12_4_,
                                   CONCAT48(auVar18._8_4_ * fStack_15c + auVar44._8_4_ +
                                            -(auVar10._8_4_ * auVar8._8_4_) +
                                            auVar32._8_4_ * auVar9._8_4_,
                                            CONCAT44(auVar18._4_4_ * fStack_15c + auVar44._4_4_ +
                                                     -(auVar10._4_4_ * auVar8._4_4_) +
                                                     auVar32._4_4_ * auVar9._4_4_,
                                                     auVar18._0_4_ * fStack_15c + auVar44._0_4_ +
                                                     -(auVar10._0_4_ * auVar8._0_4_) +
                                                     auVar32._0_4_ * auVar9._0_4_))));
      auVar30 = ZEXT1664(CONCAT412((fVar47 + auVar33._12_4_) * auVar44._12_4_ * fVar27 +
                                   auVar28._12_4_,
                                   CONCAT48((fVar46 + auVar33._8_4_) * auVar44._8_4_ * fVar25 +
                                            auVar28._8_4_,
                                            CONCAT44((fVar45 + auVar33._4_4_) *
                                                     auVar44._4_4_ * fVar24 + auVar28._4_4_,
                                                     (fVar43 + auVar33._0_4_) *
                                                     auVar44._0_4_ * fVar23 + auVar28._0_4_))));
      FUN_144daa460(*(undefined8 *)(param_1 + 0x10),&uStack_1c8,*(undefined4 *)(param_1 + 0x74));
      uStack_108 = *(undefined8 *)(param_1 + 0x10);
      puStack_100 = *(undefined4 **)(param_1 + 0x88);
      auVar28 = ZEXT864(_DAT_146169990);
      uStack_114 = 0x3dcccccd;
      uStack_f8 = *(undefined8 *)(puStack_100 + 0x50);
      uStack_f0 = *(undefined8 *)(puStack_100 + 0x52);
      uStack_e8 = *puStack_100;
      uStack_e4 = puStack_100[1];
      uStack_e0 = puStack_100[2];
      uStack_dc = puStack_100[3];
      uStack_d8 = puStack_100[4];
      uStack_118 = puStack_100[0x61];
      puStack_128 = &UNK_146676dd0;
      puVar48 = auStack_178;
      uStack_120 = _DAT_146169990;
      auStack_178 = auVar30._0_16_;
      uStack_110 = 1;
      auStack_c8 = auVar39._0_16_;
      FUN_144e14710(uStack_108,&puStack_128,0,0,puVar48);
      lVar1 = *(longlong *)(*(longlong *)(param_1 + 0x88) + 0x30);
      if (lVar1 != 0) {
        FUN_144daa460(*(undefined8 *)(param_1 + 0x10),&uStack_1d8,*(undefined4 *)(param_1 + 0x74));
        uStack_1a8 = uStack_1c8;
        uStack_1a0 = uStack_1c0;
        FUN_144e156a0(auStack_188,&uStack_1a8,&uStack_1d8,lVar1,
                      (ulonglong)puVar48 & 0xffffffffffffff00);
        auVar10 = vpcmpeqd_avx((undefined1  [16])0x0,auStack_188);
        auVar32 = vpcmpeqd_avx(auVar28._0_16_,auVar28._0_16_);
        if (((SUB164(auVar10 ^ auVar32,0) & 1) != 0) || ((SUB161(auVar10 ^ auVar32,4) & 1) != 0)) {
          uStack_198 = uStack_1d8;
          uStack_190 = uStack_1d0;
          FUN_144da0e70(*(undefined8 *)(param_1 + 0x10),*(undefined4 *)(param_1 + 0x74));
        }
      }
    }
  }
  return uVar7 & 0xffffffff;
}

