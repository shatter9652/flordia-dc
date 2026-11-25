// Recovered from game_scarlett_master.exe (GTA VI, Xbox Series X, PE32+ x64)
// Address: 14001fee0  size: 1157 bytes
// Name:    FUN_14001fee0
// Subsystem: core
//
// Referenced strings (0 in this body, 0 including direct callees):
// Callees: FUN_144daa460, FUN_144da0e70
//
// Generated decompilation. Formatting follows MiscRef/GTAVSRC conventions;
// identifiers are recovered, not original. See ../../../README.md.

#include "gta6decomp/rage_types.h"


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_14001fee0(longlong param_1,longlong param_2,longlong param_3,undefined1 (*param_4) [16],
                  uint param_5)

{
  undefined1 auVar1 [16];
  undefined4 uVar2;
  undefined1 auVar3 [16];
  float fVar4;
  float fVar5;
  float fVar6;
  float fVar7;
  int iVar8;
  undefined1 (*pauVar9) [16];
  ulonglong uVar10;
  undefined1 auVar11 [16];
  undefined1 auVar12 [16];
  undefined1 auVar13 [16];
  float fVar14;
  float fVar20;
  float fVar21;
  undefined1 auVar15 [16];
  float fVar22;
  undefined1 auVar16 [16];
  undefined1 auVar17 [16];
  undefined1 auVar18 [16];
  undefined1 auVar19 [16];
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
  undefined1 auVar35 [16];
  undefined1 auVar36 [16];
  undefined1 auVar37 [16];
  uint uVar38;
  uint uVar39;
  uint uVar40;
  uint uVar41;
  float fVar42;
  float fVar46;
  float fVar47;
  undefined1 auVar43 [16];
  float fVar48;
  undefined1 auVar44 [16];
  undefined1 auVar45 [16];
  float fVar49;
  float fVar54;
  float fVar55;
  undefined1 auVar50 [16];
  undefined1 auVar51 [16];
  float fVar56;
  undefined1 auVar52 [16];
  undefined1 auVar53 [16];
  undefined1 auVar57 [16];
  undefined1 auVar58 [16];
  undefined1 auVar59 [16];
  undefined1 auStack_138 [16];
  undefined4 uStack_128;
  undefined4 uStack_124;
  undefined4 uStack_120;
  undefined4 uStack_11c;
  uint uStack_118;
  uint uStack_114;
  uint uStack_110;
  uint uStack_10c;
  undefined1 auStack_108 [16];
  undefined8 uStack_f8;
  undefined8 uStack_f0;
  
  auStack_108._4_4_ = _DAT_145fc6f4c;
  auStack_108._0_4_ = _DAT_145fc6f4c;
  auStack_108._8_4_ = _DAT_145fc6f4c;
  auStack_108._12_4_ = _DAT_145fc6f4c;
  uVar10 = (ulonglong)param_5;
  pauVar9 = (undefined1 (*) [16])(uVar10 * 0x10 + param_3);
  uStack_118 = _DAT_146159bdc;
  uStack_114 = _DAT_146159bdc;
  uStack_110 = _DAT_146159bdc;
  uStack_10c = _DAT_146159bdc;
  uStack_128 = _DAT_145f43778;
  uStack_124 = _DAT_145f43778;
  uStack_120 = _DAT_145f43778;
  uStack_11c = _DAT_145f43778;
  uVar38 = _DAT_145fc6f10;
  uVar39 = _DAT_145fc6f10;
  uVar40 = _DAT_145fc6f10;
  uVar41 = _DAT_145fc6f10;
  do {
    uVar10 = uVar10 + 1;
    uVar2 = *(undefined4 *)(param_2 + -4 + uVar10 * 4);
    FUN_144daa460(*(undefined8 *)(param_1 + 0x10),auStack_138,uVar2);
    auVar1 = *pauVar9;
    auVar23._0_12_ = ZEXT812(0);
    auVar23._12_4_ = 0;
    auVar35._4_4_ = _DAT_145fc6ed8;
    auVar35._0_4_ = _DAT_145fc6ed8;
    auVar35._8_4_ = _DAT_145fc6ed8;
    auVar35._12_4_ = _DAT_145fc6ed8;
    auVar34._0_12_ = ZEXT812(0);
    auVar34._12_4_ = 0;
    auVar36._4_4_ = _DAT_145fc6f80;
    auVar36._0_4_ = _DAT_145fc6f80;
    auVar36._8_4_ = _DAT_145fc6f80;
    auVar36._12_4_ = _DAT_145fc6f80;
    fVar4 = auVar1._0_4_;
    auVar15._0_4_ = auStack_138._0_4_ * fVar4;
    fVar5 = auVar1._4_4_;
    auVar15._4_4_ = auStack_138._4_4_ * fVar5;
    fVar6 = auVar1._8_4_;
    auVar15._8_4_ = auStack_138._8_4_ * fVar6;
    fVar7 = auVar1._12_4_;
    auVar15._12_4_ = auStack_138._12_4_ * fVar7;
    auVar3 = vhaddps_avx(auVar15,auVar15);
    auVar3 = vhaddps_avx(auVar3,auVar3);
    auVar3 = vcmpps_avx(auVar3,auVar23,1);
    auVar24._0_4_ = uVar38 ^ (uint)auStack_138._0_4_;
    auVar24._4_4_ = uVar39 ^ (uint)auStack_138._4_4_;
    auVar24._8_4_ = uVar40 ^ (uint)auStack_138._8_4_;
    auVar24._12_4_ = uVar41 ^ (uint)auStack_138._12_4_;
    auVar13 = vblendvps_avx(auStack_138,auVar24,auVar3);
    auVar3 = *param_4;
    auVar25._0_4_ = auVar13._0_4_ * fVar4;
    auVar25._4_4_ = auVar13._4_4_ * fVar5;
    auVar25._8_4_ = auVar13._8_4_ * fVar6;
    auVar25._12_4_ = auVar13._12_4_ * fVar7;
    auVar11 = vhaddps_avx(auVar25,auVar25);
    auVar11 = vhaddps_avx(auVar11,auVar11);
    auVar16 = vrcpps_avx(auVar11);
    fVar42 = auVar11._0_4_;
    auVar29._0_4_ = uVar38 ^ (uint)fVar42;
    fVar46 = auVar11._4_4_;
    auVar29._4_4_ = uVar39 ^ (uint)fVar46;
    fVar47 = auVar11._8_4_;
    auVar29._8_4_ = uVar40 ^ (uint)fVar47;
    fVar48 = auVar11._12_4_;
    auVar29._12_4_ = uVar41 ^ (uint)fVar48;
    auVar12 = vcmpps_avx(auVar11,auVar29,1);
    auVar15 = vcmpps_avx(auVar11,auVar29,0);
    fVar54 = auVar16._0_4_;
    fVar55 = auVar16._4_4_;
    fVar56 = auVar16._8_4_;
    fVar49 = auVar16._12_4_;
    auVar26._0_4_ = -(fVar42 * fVar42) + _DAT_145fc6ed8;
    auVar26._4_4_ = -(fVar46 * fVar46) + _DAT_145fc6ed8;
    auVar26._8_4_ = -(fVar47 * fVar47) + _DAT_145fc6ed8;
    auVar26._12_4_ = -(fVar48 * fVar48) + _DAT_145fc6ed8;
    auVar16 = vmaxps_avx(auVar34,auVar26);
    auVar11 = vrsqrtps_avx(auVar16);
    fVar14 = auVar11._0_4_;
    fVar20 = auVar11._4_4_;
    fVar21 = auVar11._8_4_;
    fVar22 = auVar11._12_4_;
    auVar50._4_4_ = _DAT_146159bfc;
    auVar50._0_4_ = _DAT_146159bfc;
    auVar50._8_4_ = _DAT_146159bfc;
    auVar50._12_4_ = _DAT_146159bfc;
    auVar11 = vcmpps_avx(auVar50,auVar16,2);
    auVar27._0_4_ =
         (float)(auVar11._0_4_ &
                (uint)(((_DAT_145fc6f08 * fVar14 * fVar14 * auVar16._0_4_ - _DAT_145fc6f08) * fVar14
                       + fVar14) * auVar16._0_4_));
    auVar27._4_4_ =
         (float)(auVar11._4_4_ &
                (uint)(((_DAT_145fc6f08 * fVar20 * fVar20 * auVar16._4_4_ - _DAT_145fc6f08) * fVar20
                       + fVar20) * auVar16._4_4_));
    auVar27._8_4_ =
         (float)(auVar11._8_4_ &
                (uint)(((_DAT_145fc6f08 * fVar21 * fVar21 * auVar16._8_4_ - _DAT_145fc6f08) * fVar21
                       + fVar21) * auVar16._8_4_));
    auVar27._12_4_ =
         (float)(auVar11._12_4_ &
                (uint)(((_DAT_145fc6f08 * fVar22 * fVar22 * auVar16._12_4_ - _DAT_145fc6f08) *
                        fVar22 + fVar22) * auVar16._12_4_));
    auVar30._0_4_ = auVar27._0_4_ * (-((fVar42 * fVar54 - _DAT_145fc6ed8) * fVar54) + fVar54);
    auVar30._4_4_ = auVar27._4_4_ * (-((fVar46 * fVar55 - _DAT_145fc6ed8) * fVar55) + fVar55);
    auVar30._8_4_ = auVar27._8_4_ * (-((fVar47 * fVar56 - _DAT_145fc6ed8) * fVar56) + fVar56);
    auVar30._12_4_ = auVar27._12_4_ * (-((fVar48 * fVar49 - _DAT_145fc6ed8) * fVar49) + fVar49);
    auVar43._0_4_ = (uint)auVar30._0_4_ & auStack_108._0_4_;
    auVar43._4_4_ = (uint)auVar30._4_4_ & auStack_108._4_4_;
    auVar43._8_4_ = (uint)auVar30._8_4_ & auStack_108._8_4_;
    auVar43._12_4_ = (uint)auVar30._12_4_ & auStack_108._12_4_;
    auVar11 = vrcpps_avx(auVar30);
    auVar16 = vcmpps_avx(auVar35,auVar43,1);
    fVar20 = auVar11._0_4_;
    fVar21 = auVar11._4_4_;
    fVar22 = auVar11._8_4_;
    fVar14 = auVar11._12_4_;
    auVar51._0_4_ = (auVar30._0_4_ * fVar20 - _DAT_145fc6ed8) * fVar20 - fVar20;
    auVar51._4_4_ = (auVar30._4_4_ * fVar21 - _DAT_145fc6ed8) * fVar21 - fVar21;
    auVar51._8_4_ = (auVar30._8_4_ * fVar22 - _DAT_145fc6ed8) * fVar22 - fVar22;
    auVar51._12_4_ = (auVar30._12_4_ * fVar14 - _DAT_145fc6ed8) * fVar14 - fVar14;
    auVar11 = vblendvps_avx(auVar30,auVar51,auVar16);
    fVar14 = auVar11._0_4_;
    fVar42 = fVar14 * fVar14;
    fVar20 = auVar11._4_4_;
    fVar46 = fVar20 * fVar20;
    fVar21 = auVar11._8_4_;
    fVar47 = fVar21 * fVar21;
    fVar22 = auVar11._12_4_;
    fVar48 = fVar22 * fVar22;
    auVar11 = vsubps_avx(auVar13,auVar1);
    fVar49 = auVar3._0_4_ * auVar11._0_4_ + fVar4;
    fVar54 = auVar3._4_4_ * auVar11._4_4_ + fVar5;
    fVar55 = auVar3._8_4_ * auVar11._8_4_ + fVar6;
    fVar56 = auVar3._12_4_ * auVar11._12_4_ + fVar7;
    auVar44._0_4_ = fVar49 * fVar49;
    auVar44._4_4_ = fVar54 * fVar54;
    auVar44._8_4_ = fVar55 * fVar55;
    auVar44._12_4_ = fVar56 * fVar56;
    auVar59._4_4_ = _DAT_146159be0;
    auVar59._0_4_ = _DAT_146159be0;
    auVar59._8_4_ = _DAT_146159be0;
    auVar59._12_4_ = _DAT_146159be0;
    auVar17 = vhaddps_avx(auVar44,auVar44);
    auVar57._0_4_ =
         fVar42 * fVar42 * fVar42 * fVar42 * fVar14 *
         (fVar42 * (fVar42 * (fVar42 * (fVar42 * _DAT_14615a184 + _DAT_14615a180) + _DAT_14615a188)
                   + _DAT_14615a18c) + _DAT_14615a190) +
         fVar42 * fVar14 * (fVar42 * (fVar42 * _DAT_14615a198 + _DAT_14615a194) + _DAT_14615a19c) +
         (float)(auVar16._0_4_ & (uVar38 & (uint)auVar30._0_4_ | uStack_118)) + fVar14;
    auVar57._4_4_ =
         fVar46 * fVar46 * fVar46 * fVar46 * fVar20 *
         (fVar46 * (fVar46 * (fVar46 * (fVar46 * _DAT_14615a184 + _DAT_14615a180) + _DAT_14615a188)
                   + _DAT_14615a18c) + _DAT_14615a190) +
         fVar46 * fVar20 * (fVar46 * (fVar46 * _DAT_14615a198 + _DAT_14615a194) + _DAT_14615a19c) +
         (float)(auVar16._4_4_ & (uVar39 & (uint)auVar30._4_4_ | uStack_114)) + fVar20;
    auVar57._8_4_ =
         fVar47 * fVar47 * fVar47 * fVar47 * fVar21 *
         (fVar47 * (fVar47 * (fVar47 * (fVar47 * _DAT_14615a184 + _DAT_14615a180) + _DAT_14615a188)
                   + _DAT_14615a18c) + _DAT_14615a190) +
         fVar47 * fVar21 * (fVar47 * (fVar47 * _DAT_14615a198 + _DAT_14615a194) + _DAT_14615a19c) +
         (float)(auVar16._8_4_ & (uVar40 & (uint)auVar30._8_4_ | uStack_110)) + fVar21;
    auVar57._12_4_ =
         fVar48 * fVar48 * fVar48 * fVar48 * fVar22 *
         (fVar48 * (fVar48 * (fVar48 * (fVar48 * _DAT_14615a184 + _DAT_14615a180) + _DAT_14615a188)
                   + _DAT_14615a18c) + _DAT_14615a190) +
         fVar48 * fVar22 * (fVar48 * (fVar48 * _DAT_14615a198 + _DAT_14615a194) + _DAT_14615a19c) +
         (float)(auVar16._12_4_ & (uVar41 & (uint)auVar30._12_4_ | uStack_10c)) + fVar22;
    auVar33._0_4_ = uVar38 ^ (uint)auVar27._0_4_;
    auVar33._4_4_ = uVar39 ^ (uint)auVar27._4_4_;
    auVar33._8_4_ = uVar40 ^ (uint)auVar27._8_4_;
    auVar33._12_4_ = uVar41 ^ (uint)auVar27._12_4_;
    auVar11 = vcmpps_avx(auVar27,auVar33,1);
    auVar11 = vblendvps_avx(auVar36,auVar59,auVar11);
    auVar37._4_4_ = _DAT_146159bdc;
    auVar37._0_4_ = _DAT_146159bdc;
    auVar37._8_4_ = _DAT_146159bdc;
    auVar37._12_4_ = _DAT_146159bdc;
    auVar16 = vhaddps_avx(auVar17,auVar17);
    auVar31._0_4_ = auVar57._0_4_ + auVar11._0_4_;
    auVar31._4_4_ = auVar57._4_4_ + auVar11._4_4_;
    auVar31._8_4_ = auVar57._8_4_ + auVar11._8_4_;
    auVar31._12_4_ = auVar57._12_4_ + auVar11._12_4_;
    auVar11 = vblendvps_avx(auVar57,auVar31,auVar12);
    auVar12 = vrsqrtps_avx(auVar16);
    fVar14 = auVar12._0_4_;
    fVar20 = auVar12._4_4_;
    fVar21 = auVar12._8_4_;
    fVar22 = auVar12._12_4_;
    auVar32._0_4_ =
         ((_DAT_145fc6f08 * fVar14 * fVar14 * auVar16._0_4_ - _DAT_145fc6f08) * fVar14 + fVar14) *
         fVar49;
    auVar32._4_4_ =
         ((_DAT_145fc6f08 * fVar20 * fVar20 * auVar16._4_4_ - _DAT_145fc6f08) * fVar20 + fVar20) *
         fVar54;
    auVar32._8_4_ =
         ((_DAT_145fc6f08 * fVar21 * fVar21 * auVar16._8_4_ - _DAT_145fc6f08) * fVar21 + fVar21) *
         fVar55;
    auVar32._12_4_ =
         ((_DAT_145fc6f08 * fVar22 * fVar22 * auVar16._12_4_ - _DAT_145fc6f08) * fVar22 + fVar22) *
         fVar56;
    auVar52._4_4_ = _DAT_14615a1a0;
    auVar52._0_4_ = _DAT_14615a1a0;
    auVar52._8_4_ = _DAT_14615a1a0;
    auVar52._12_4_ = _DAT_14615a1a0;
    auVar12 = vcmpps_avx(auVar33,auVar27,1);
    auVar12 = vblendvps_avx(auVar52,auVar37,auVar12);
    auVar16 = vsubps_avx(auVar35,auVar3);
    auVar11 = vblendvps_avx(auVar11,auVar12,auVar15);
    auVar3 = vunpcklps_avx(auVar16,auVar3);
    fVar14 = auVar11._0_4_ * auVar3._0_4_;
    fVar20 = auVar11._4_4_ * auVar3._4_4_;
    fVar21 = auVar11._8_4_ * auVar3._8_4_;
    fVar22 = auVar11._12_4_ * auVar3._12_4_;
    auVar45._0_4_ = _DAT_146159b48 * fVar14;
    auVar45._4_4_ = _DAT_146159b48 * fVar20;
    auVar45._8_4_ = _DAT_146159b48 * fVar21;
    auVar45._12_4_ = _DAT_146159b48 * fVar22;
    auVar3 = vroundps_avx(auVar45,0);
    fVar14 = auVar3._0_4_ * _DAT_146159be0 + fVar14;
    fVar20 = auVar3._4_4_ * _DAT_146159be0 + fVar20;
    fVar21 = auVar3._8_4_ * _DAT_146159be0 + fVar21;
    fVar22 = auVar3._12_4_ * _DAT_146159be0 + fVar22;
    fVar42 = fVar14 * fVar14;
    fVar46 = fVar20 * fVar20;
    fVar47 = fVar21 * fVar21;
    fVar48 = fVar22 * fVar22;
    fVar42 = fVar42 * (fVar42 * (fVar42 * (fVar42 * _DAT_146159be8 + _DAT_146159be4) +
                                _DAT_146159bec) + _DAT_146159bf0) + _DAT_145fc6ed8;
    fVar46 = fVar46 * (fVar46 * (fVar46 * (fVar46 * _DAT_146159be8 + _DAT_146159be4) +
                                _DAT_146159bec) + _DAT_146159bf0) + _DAT_145fc6ed8;
    fVar47 = fVar47 * (fVar47 * (fVar47 * (fVar47 * _DAT_146159be8 + _DAT_146159be4) +
                                _DAT_146159bec) + _DAT_146159bf0) + _DAT_145fc6ed8;
    fVar48 = fVar48 * (fVar48 * (fVar48 * (fVar48 * _DAT_146159be8 + _DAT_146159be4) +
                                _DAT_146159bec) + _DAT_146159bf0) + _DAT_145fc6ed8;
    auVar53._0_4_ = fVar42 * fVar14;
    auVar53._4_4_ = fVar46 * fVar20;
    auVar53._8_4_ = fVar47 * fVar21;
    auVar53._12_4_ = fVar48 * fVar22;
    auVar58._0_4_ = -(fVar14 * fVar42) - 0.0;
    auVar58._4_4_ = -(fVar20 * fVar46) - 0.0;
    auVar58._8_4_ = -(fVar21 * fVar47) - 0.0;
    auVar58._12_4_ = -(fVar22 * fVar48) - 0.0;
    auVar16._0_4_ = (int)auVar3._0_4_;
    auVar16._4_4_ = (int)auVar3._4_4_;
    auVar16._8_4_ = (int)auVar3._8_4_;
    auVar16._12_4_ = (int)auVar3._12_4_;
    auVar3._4_4_ = uStack_124;
    auVar3._0_4_ = uStack_128;
    auVar3._8_4_ = uStack_120;
    auVar3._12_4_ = uStack_11c;
    auVar3 = vpand_avx(auVar16,auVar3);
    auVar11 = vrcpps_avx(auVar27);
    auVar3 = vpcmpeqd_avx(ZEXT416(0) << 0x20,auVar3);
    auVar3 = vblendvps_avx(auVar58,auVar53,auVar3);
    fVar20 = auVar11._0_4_;
    fVar21 = auVar11._4_4_;
    fVar22 = auVar11._8_4_;
    fVar14 = auVar11._12_4_;
    auVar11 = vcmpps_avx(auVar27,auVar33,0);
    auVar17._0_4_ = (-((auVar27._0_4_ * fVar20 - _DAT_145fc6ed8) * fVar20) + fVar20) * auVar3._0_4_;
    auVar17._4_4_ = (-((auVar27._4_4_ * fVar21 - _DAT_145fc6ed8) * fVar21) + fVar21) * auVar3._4_4_;
    auVar17._8_4_ = (-((auVar27._8_4_ * fVar22 - _DAT_145fc6ed8) * fVar22) + fVar22) * auVar3._8_4_;
    auVar17._12_4_ =
         (-((auVar27._12_4_ * fVar14 - _DAT_145fc6ed8) * fVar14) + fVar14) * auVar3._12_4_;
    auVar3 = vshufps_avx(auVar17,auVar17,0x55);
    fVar42 = auVar13._0_4_ * auVar3._0_4_ + auVar17._0_4_ * fVar4;
    fVar46 = auVar13._4_4_ * auVar3._4_4_ + auVar17._0_4_ * fVar5;
    fVar47 = auVar13._8_4_ * auVar3._8_4_ + auVar17._0_4_ * fVar6;
    fVar48 = auVar13._12_4_ * auVar3._12_4_ + auVar17._0_4_ * fVar7;
    auVar18._0_4_ = fVar42 * fVar42;
    auVar18._4_4_ = fVar46 * fVar46;
    auVar18._8_4_ = fVar47 * fVar47;
    auVar18._12_4_ = fVar48 * fVar48;
    auVar3 = vhaddps_avx(auVar18,auVar18);
    auVar3 = vhaddps_avx(auVar3,auVar3);
    auVar12 = vrsqrtps_avx(auVar3);
    fVar14 = auVar12._0_4_;
    fVar20 = auVar12._4_4_;
    fVar21 = auVar12._8_4_;
    fVar22 = auVar12._12_4_;
    auVar19._0_4_ =
         fVar42 * ((_DAT_145fc6f08 * fVar14 * fVar14 * auVar3._0_4_ - _DAT_145fc6f08) * fVar14 +
                  fVar14);
    auVar19._4_4_ =
         fVar46 * ((_DAT_145fc6f08 * fVar20 * fVar20 * auVar3._4_4_ - _DAT_145fc6f08) * fVar20 +
                  fVar20);
    auVar19._8_4_ =
         fVar47 * ((_DAT_145fc6f08 * fVar21 * fVar21 * auVar3._8_4_ - _DAT_145fc6f08) * fVar21 +
                  fVar21);
    auVar19._12_4_ =
         fVar48 * ((_DAT_145fc6f08 * fVar22 * fVar22 * auVar3._12_4_ - _DAT_145fc6f08) * fVar22 +
                  fVar22);
    auVar1 = vblendvps_avx(auVar19,auVar1,auVar11);
    auVar28._0_4_ = fVar4 + _DAT_146159ef0;
    auVar28._4_4_ = fVar5 + _DAT_146159ef0;
    auVar28._8_4_ = fVar6 + _DAT_146159ef0;
    auVar28._12_4_ = fVar7 + _DAT_146159ef0;
    auVar11._0_4_ = fVar4 + _DAT_146159ef4;
    auVar11._4_4_ = fVar5 + _DAT_146159ef4;
    auVar11._8_4_ = fVar6 + _DAT_146159ef4;
    auVar11._12_4_ = fVar7 + _DAT_146159ef4;
    auVar3 = vcmpps_avx(auVar28,auVar13,2);
    auVar13 = vcmpps_avx(auVar13,auVar11,2);
    auVar12._0_4_ = auVar3._0_4_ & auVar13._0_4_;
    auVar12._4_4_ = auVar3._4_4_ & auVar13._4_4_;
    auVar12._8_4_ = auVar3._8_4_ & auVar13._8_4_;
    auVar12._12_4_ = auVar3._12_4_ & auVar13._12_4_;
    iVar8 = -(uint)((_DAT_145f41010 & ~auVar12) == (undefined1  [16])0x0);
    auVar13._4_4_ = iVar8;
    auVar13._0_4_ = iVar8;
    auVar13._8_4_ = iVar8;
    auVar13._12_4_ = iVar8;
    auStack_138 = vblendvps_avx(auVar1,auVar32,auVar13);
    uStack_f8 = auStack_138._0_8_;
    uStack_f0 = auStack_138._8_8_;
    FUN_144da0e70(*(undefined8 *)(param_1 + 0x10),uVar2,&uStack_f8);
    pauVar9 = pauVar9 + 1;
  } while ((int)uVar10 != 5);
  return;
}

