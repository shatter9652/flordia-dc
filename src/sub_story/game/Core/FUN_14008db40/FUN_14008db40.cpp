// Recovered from game_scarlett_master.exe (GTA VI, Xbox Series X, PE32+ x64)
// Address: 14008db40  size: 873 bytes
// Name:    FUN_14008db40
// Subsystem: core
//
// Referenced strings (0 in this body, 0 including direct callees):
// Callees: 
//
// Generated decompilation. Formatting follows MiscRef/GTAVSRC conventions;
// identifiers are recovered, not original. See ../../../README.md.

#include "gta6decomp/rage_types.h"


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

uint FUN_14008db40(longlong param_1,longlong param_2,ushort param_3,ushort param_4)

{
  undefined1 auVar1 [16];
  float fVar2;
  float fVar3;
  float fVar4;
  float fVar5;
  char cVar6;
  uint uVar7;
  undefined1 auVar8 [16];
  undefined1 auVar9 [16];
  undefined1 auVar10 [16];
  float fVar11;
  float fVar18;
  float fVar19;
  undefined1 auVar12 [16];
  undefined1 auVar13 [16];
  float fVar20;
  undefined1 auVar14 [16];
  undefined1 auVar15 [16];
  undefined1 auVar16 [16];
  undefined1 auVar17 [16];
  undefined1 auVar21 [16];
  undefined1 auVar22 [16];
  undefined1 auVar23 [16];
  undefined1 auVar24 [16];
  undefined1 auVar25 [16];
  undefined1 auVar26 [16];
  undefined1 auVar27 [16];
  undefined1 auVar28 [16];
  undefined1 auVar29 [16];
  float fVar30;
  float fVar32;
  float fVar33;
  undefined1 auVar31 [16];
  float fVar34;
  undefined1 auVar35 [16];
  undefined1 auVar36 [16];
  undefined1 auVar37 [16];
  undefined1 auVar38 [64];
  undefined1 auVar39 [64];
  undefined1 auVar40 [64];
  float fVar41;
  float fVar43;
  float fVar44;
  float fVar45;
  undefined1 auVar42 [64];
  float fVar46;
  float fVar48;
  float fVar49;
  float fVar50;
  undefined1 auVar47 [64];
  undefined1 auVar51 [16];
  float fVar52;
  float fVar53;
  float fVar54;
  float fVar55;
  float fStack_ac;
  undefined1 auStack_a8 [16];
  undefined1 auStack_98 [16];
  undefined1 aauStack_88 [8] [16];
  
  aauStack_88[0] =
       *(undefined1 (*) [16])
        (param_2 +
        (ulonglong)((*(ushort *)(param_1 + (ulonglong)((uint)param_3 * 0x50)) & 0x3fff) << 4));
  auVar38 = ZEXT1664(aauStack_88[0]);
  auVar1 = *(undefined1 (*) [16])
            (param_2 +
            (ulonglong)((*(ushort *)(param_1 + (ulonglong)((uint)param_4 * 0x50)) & 0x3fff) << 4));
  auVar40 = ZEXT1664(auVar1);
  auStack_98 = vsubps_avx(*(undefined1 (*) [16])
                           (param_2 +
                           (ulonglong)
                           ((*(ushort *)(param_1 + 4 + (ulonglong)((uint)param_3 * 0x50)) & 0x3fff)
                           << 4)),aauStack_88[0]);
  auVar39 = ZEXT1664(auStack_98);
  fVar2 = auStack_98._0_4_;
  auVar31._0_4_ = fVar2 * fVar2;
  fVar3 = auStack_98._4_4_;
  auVar31._4_4_ = fVar3 * fVar3;
  fVar4 = auStack_98._8_4_;
  auVar31._8_4_ = fVar4 * fVar4;
  fVar5 = auStack_98._12_4_;
  auVar31._12_4_ = fVar5 * fVar5;
  auVar27 = vsubps_avx(auVar1,aauStack_88[0]);
  auVar9 = vsubps_avx(*(undefined1 (*) [16])
                       (param_2 +
                       (ulonglong)
                       ((*(ushort *)(param_1 + 4 + (ulonglong)((uint)param_4 * 0x50)) & 0x3fff) << 4
                       )),auVar1);
  auVar42 = ZEXT1664(auVar9);
  auVar8 = ZEXT816(0) << 0x20;
  auVar14 = vblendps_avx(auVar31,auVar8,8);
  auVar23 = vhaddps_avx(auVar14,auVar14);
  fVar41 = auVar9._0_4_;
  auVar21._0_4_ = fVar41 * fVar2;
  fVar43 = auVar9._4_4_;
  auVar21._4_4_ = fVar43 * fVar3;
  fVar44 = auVar9._8_4_;
  auVar21._8_4_ = fVar44 * fVar4;
  fVar45 = auVar9._12_4_;
  auVar21._12_4_ = fVar45 * fVar5;
  auVar35._0_4_ = fVar41 * fVar41;
  auVar35._4_4_ = fVar43 * fVar43;
  auVar35._8_4_ = fVar44 * fVar44;
  auVar35._12_4_ = fVar45 * fVar45;
  auVar14 = vblendps_avx(auVar21,auVar8,8);
  auVar21 = vblendps_avx(auVar35,auVar8,8);
  auVar14 = vhaddps_avx(auVar14,auVar14);
  auVar21 = vhaddps_avx(auVar21,auVar21);
  auVar23 = vhaddps_avx(auVar23,auVar23);
  auVar24 = vhaddps_avx(auVar14,auVar14);
  auVar22._0_4_ = auVar27._0_4_ * fVar2;
  auVar22._4_4_ = auVar27._4_4_ * fVar3;
  auVar22._8_4_ = auVar27._8_4_ * fVar4;
  auVar22._12_4_ = auVar27._12_4_ * fVar5;
  auVar12._0_4_ = fVar41 * auVar27._0_4_;
  auVar12._4_4_ = fVar43 * auVar27._4_4_;
  auVar12._8_4_ = fVar44 * auVar27._8_4_;
  auVar12._12_4_ = fVar45 * auVar27._12_4_;
  auVar27 = vhaddps_avx(auVar21,auVar21);
  auVar47 = ZEXT1664(auVar27);
  auVar14 = vblendps_avx(auVar22,auVar8,8);
  auVar21 = vblendps_avx(auVar12,auVar8,8);
  auVar14 = vhaddps_avx(auVar14,auVar14);
  auVar21 = vhaddps_avx(auVar21,auVar21);
  fVar46 = auVar27._0_4_;
  fVar48 = auVar27._4_4_;
  fVar49 = auVar27._8_4_;
  fVar50 = auVar27._12_4_;
  fVar11 = auVar24._0_4_;
  auVar36._0_4_ = -(fVar11 * fVar11) + fVar46 * auVar23._0_4_;
  fVar18 = auVar24._4_4_;
  auVar36._4_4_ = -(fVar18 * fVar18) + fVar48 * auVar23._4_4_;
  fVar19 = auVar24._8_4_;
  auVar36._8_4_ = -(fVar19 * fVar19) + fVar49 * auVar23._8_4_;
  fVar20 = auVar24._12_4_;
  auVar36._12_4_ = -(fVar20 * fVar20) + fVar50 * auVar23._12_4_;
  auVar14 = vhaddps_avx(auVar14,auVar14);
  auVar21 = vhaddps_avx(auVar21,auVar21);
  auVar24 = vrcpps_avx(auVar36);
  auVar13._4_4_ = _DAT_145fc6ed8;
  auVar13._0_4_ = _DAT_145fc6ed8;
  auVar13._8_4_ = _DAT_145fc6ed8;
  auVar13._12_4_ = _DAT_145fc6ed8;
  auVar26._0_4_ = auVar14._0_4_ + fVar11;
  auVar26._4_4_ = auVar14._4_4_ + fVar18;
  auVar26._8_4_ = auVar14._8_4_ + fVar19;
  auVar26._12_4_ = auVar14._12_4_ + fVar20;
  fVar52 = auVar24._0_4_;
  fVar53 = auVar24._4_4_;
  fVar54 = auVar24._8_4_;
  fVar55 = auVar24._12_4_;
  auVar24 = vrcpps_avx(auVar23);
  fVar30 = auVar24._0_4_;
  fVar32 = auVar24._4_4_;
  fVar33 = auVar24._8_4_;
  fVar34 = auVar24._12_4_;
  auVar37._0_4_ =
       (fVar11 * auVar21._0_4_ - fVar46 * auVar14._0_4_) *
       ((fVar52 * auVar36._0_4_ - _DAT_145fc6ed8) * fVar52 - fVar52);
  auVar37._4_4_ =
       (fVar18 * auVar21._4_4_ - fVar48 * auVar14._4_4_) *
       ((fVar53 * auVar36._4_4_ - _DAT_145fc6ed8) * fVar53 - fVar53);
  auVar37._8_4_ =
       (fVar19 * auVar21._8_4_ - fVar49 * auVar14._8_4_) *
       ((fVar54 * auVar36._8_4_ - _DAT_145fc6ed8) * fVar54 - fVar54);
  auVar37._12_4_ =
       (fVar20 * auVar21._12_4_ - fVar50 * auVar14._12_4_) *
       ((fVar55 * auVar36._12_4_ - _DAT_145fc6ed8) * fVar55 - fVar55);
  auVar21 = vmaxps_avx(auVar14,auVar26);
  auVar14 = vminps_avx(auVar14,auVar26);
  fVar30 = -((fVar30 * auVar23._0_4_ - _DAT_145fc6ed8) * fVar30) + fVar30;
  fVar32 = -((fVar32 * auVar23._4_4_ - _DAT_145fc6ed8) * fVar32) + fVar32;
  fVar33 = -((fVar33 * auVar23._8_4_ - _DAT_145fc6ed8) * fVar33) + fVar33;
  fVar34 = -((fVar34 * auVar23._12_4_ - _DAT_145fc6ed8) * fVar34) + fVar34;
  auVar51._0_4_ = auVar21._0_4_ * fVar30;
  auVar51._4_4_ = auVar21._4_4_ * fVar32;
  auVar51._8_4_ = auVar21._8_4_ * fVar33;
  auVar51._12_4_ = auVar21._12_4_ * fVar34;
  auVar23._0_4_ = fVar30 * auVar14._0_4_;
  auVar23._4_4_ = fVar32 * auVar14._4_4_;
  auVar23._8_4_ = fVar33 * auVar14._8_4_;
  auVar23._12_4_ = fVar34 * auVar14._12_4_;
  auVar21 = vminps_avx(auVar37,auVar51);
  auVar14 = vcmpps_avx(auVar23,auVar37,1);
  auVar14 = vblendvps_avx(auVar23,auVar21,auVar14);
  auVar23 = vrcpps_avx(auVar27);
  auVar21 = vminps_avx(auVar14,auVar13);
  auVar14 = vcmpps_avx(auVar8,auVar14,1);
  auVar24._0_4_ = fVar2 * (float)(auVar14._0_4_ & auVar21._0_4_) + aauStack_88[0]._0_4_;
  auVar24._4_4_ = fVar3 * (float)(auVar14._4_4_ & auVar21._4_4_) + aauStack_88[0]._4_4_;
  auVar24._8_4_ = fVar4 * (float)(auVar14._8_4_ & auVar21._8_4_) + aauStack_88[0]._8_4_;
  auVar24._12_4_ = fVar5 * (float)(auVar14._12_4_ & auVar21._12_4_) + aauStack_88[0]._12_4_;
  fVar18 = auVar23._0_4_;
  fVar19 = auVar23._4_4_;
  fVar20 = auVar23._8_4_;
  fVar11 = auVar23._12_4_;
  auVar14 = vsubps_avx(auVar24,auVar1);
  auVar27._0_4_ = fVar41 * auVar14._0_4_;
  auVar27._4_4_ = fVar43 * auVar14._4_4_;
  auVar27._8_4_ = fVar44 * auVar14._8_4_;
  auVar27._12_4_ = fVar45 * auVar14._12_4_;
  auVar14 = vblendps_avx(auVar27,auVar8,8);
  auVar14 = vhaddps_avx(auVar14,auVar14);
  auVar14 = vhaddps_avx(auVar14,auVar14);
  auVar28._0_4_ = (-((fVar46 * fVar18 - _DAT_145fc6ed8) * fVar18) + fVar18) * auVar14._0_4_;
  auVar28._4_4_ = (-((fVar48 * fVar19 - _DAT_145fc6ed8) * fVar19) + fVar19) * auVar14._4_4_;
  auVar28._8_4_ = (-((fVar49 * fVar20 - _DAT_145fc6ed8) * fVar20) + fVar20) * auVar14._8_4_;
  auVar28._12_4_ = (-((fVar50 * fVar11 - _DAT_145fc6ed8) * fVar11) + fVar11) * auVar14._12_4_;
  auVar21 = vminps_avx(auVar28,auVar13);
  auVar14 = vcmpps_avx(auVar8,auVar28,1);
  fVar11 = auVar24._0_4_ + (-(fVar41 * (float)(auVar14._0_4_ & auVar21._0_4_)) - auVar1._0_4_);
  fVar18 = auVar24._4_4_ + (-(fVar43 * (float)(auVar14._4_4_ & auVar21._4_4_)) - auVar1._4_4_);
  fVar19 = auVar24._8_4_ + (-(fVar44 * (float)(auVar14._8_4_ & auVar21._8_4_)) - auVar1._8_4_);
  fVar20 = auVar24._12_4_ + (-(fVar45 * (float)(auVar14._12_4_ & auVar21._12_4_)) - auVar1._12_4_);
  auVar14._0_4_ = fVar11 * fVar11;
  auVar14._4_4_ = fVar18 * fVar18;
  auVar14._8_4_ = fVar19 * fVar19;
  auVar14._12_4_ = fVar20 * fVar20;
  auVar14 = vblendps_avx(auVar14,auVar8,8);
  auVar14 = vhaddps_avx(auVar14,auVar14);
  auVar14 = vhaddps_avx(auVar14,auVar14);
  if (auVar14._0_4_ < _DAT_1461767f0) {
    auVar14 = vinsertps_avx(auVar8,auStack_98,0x4e);
    auVar25._0_4_ = (uint)fVar2 ^ _DAT_145fc6f10;
    auVar25._4_4_ = (uint)fVar3 ^ _DAT_145fc6f10;
    auVar25._8_4_ = (uint)fVar4 ^ _DAT_145fc6f10;
    auVar25._12_4_ = (uint)fVar5 ^ _DAT_145fc6f10;
    auVar15._0_4_ = (uint)fVar41 ^ _DAT_145fc6f10;
    auVar15._4_4_ = (uint)fVar43 ^ _DAT_145fc6f10;
    auVar15._8_4_ = (uint)fVar44 ^ _DAT_145fc6f10;
    auVar15._12_4_ = (uint)fVar45 ^ _DAT_145fc6f10;
    auVar14 = vinsertps_avx(auVar14,auVar25,0x10);
    fVar2 = auVar14._0_4_;
    auVar29._0_4_ = fVar2 * fVar2;
    fVar3 = auVar14._4_4_;
    auVar29._4_4_ = fVar3 * fVar3;
    fVar4 = auVar14._8_4_;
    auVar29._8_4_ = fVar4 * fVar4;
    fVar5 = auVar14._12_4_;
    auVar29._12_4_ = fVar5 * fVar5;
    auVar14 = vblendps_avx(auVar29,auVar8,8);
    auVar14 = vhaddps_avx(auVar14,auVar14);
    auVar14 = vhaddps_avx(auVar14,auVar14);
    auVar23 = vrsqrtps_avx(auVar14);
    auVar14 = vinsertps_avx(auVar8,auVar9,0x4e);
    auVar14 = vinsertps_avx(auVar14,auVar15,0x18);
    auVar21 = vinsertps_avx(auVar14,auVar9,0x70);
    auVar16._0_4_ = auVar14._0_4_ * auVar14._0_4_;
    auVar16._4_4_ = auVar14._4_4_ * auVar14._4_4_;
    auVar16._8_4_ = auVar14._8_4_ * auVar14._8_4_;
    auVar16._12_4_ = auVar14._12_4_ * auVar14._12_4_;
    auVar14 = vblendps_avx(auVar16,auVar8,8);
    auVar14 = vhaddps_avx(auVar14,auVar14);
    auVar14 = vhaddps_avx(auVar14,auVar14);
    auVar14 = vrsqrtps_avx(auVar14);
    auVar9._0_4_ = auVar14._0_4_ * auVar21._0_4_;
    auVar9._4_4_ = auVar14._4_4_ * auVar21._4_4_;
    auVar9._8_4_ = auVar14._8_4_ * auVar21._8_4_;
    auVar9._12_4_ = auVar14._12_4_ * auVar21._12_4_;
    auVar8._0_4_ = auVar9._0_4_ * auVar23._0_4_ * fVar2;
    auVar8._4_4_ = auVar9._4_4_ * auVar23._4_4_ * fVar3;
    auVar8._8_4_ = auVar9._8_4_ * auVar23._8_4_ * fVar4;
    auVar8._12_4_ = auVar9._12_4_ * auVar23._12_4_ * fVar5;
    auVar14 = vhaddps_avx(auVar8,auVar8);
    if (auVar14._0_4_ < _DAT_1461718f0) {
      auVar17._0_4_ = auVar1._0_4_ * auVar9._0_4_;
      auVar17._4_4_ = auVar1._4_4_ * auVar9._4_4_;
      auVar17._8_4_ = auVar1._8_4_ * auVar9._8_4_;
      auVar17._12_4_ = auVar1._12_4_ * auVar9._12_4_;
      auVar1 = vblendps_avx(auVar17,ZEXT816(0) << 0x20,8);
      auVar1 = vhaddps_avx(auVar1,auVar1);
      auVar1 = vhaddps_avx(auVar1,auVar1);
      auStack_a8 = vblendps_avx(auVar9,auVar1,8);
      cVar6 = func_0x0001450e7a40(aauStack_88,auStack_98,auStack_a8,&fStack_ac,0);
      uVar7 = 0;
      if (((cVar6 != '\0') && (fStack_ac < _DAT_14615faf0)) && (_DAT_146159ef0 < fStack_ac)) {
        auVar1 = vsubps_avx(auVar38._0_16_,auVar40._0_16_);
        auVar10._0_4_ = auVar42._0_4_ * (fStack_ac * auVar39._0_4_ + auVar1._0_4_);
        auVar10._4_4_ = auVar42._4_4_ * (fStack_ac * auVar39._4_4_ + auVar1._4_4_);
        auVar10._8_4_ = auVar42._8_4_ * (fStack_ac * auVar39._8_4_ + auVar1._8_4_);
        auVar10._12_4_ = auVar42._12_4_ * (fStack_ac * auVar39._12_4_ + auVar1._12_4_);
        auVar1 = vblendps_avx(auVar10,ZEXT816(0) << 0x20,8);
        auVar1 = vhaddps_avx(auVar1,auVar1);
        auVar1 = vhaddps_avx(auVar1,auVar1);
        auVar14 = vdivps_avx(auVar1,auVar47._0_16_);
        auVar1 = vcmpps_avx(ZEXT416((uint)_DAT_146159ef0),auVar14,1);
        auVar14 = vcmpps_avx(auVar14,ZEXT416((uint)_DAT_14615faf0),1);
        uVar7 = auVar14._0_4_ & auVar1._0_4_;
      }
      goto LAB_14008dd23;
    }
  }
  uVar7 = 0;
LAB_14008dd23:
  return uVar7 & 0xffffff01;
}

