// Recovered from game_scarlett_master.exe (GTA VI, Xbox Series X, PE32+ x64)
// Address: 1401128b0  size: 1052 bytes
// Name:    FUN_1401128b0
// Subsystem: core
//
// Referenced strings (0 in this body, 0 including direct callees):
// Callees: FUN_140112cf0, FUN_140047dc0
//
// Generated decompilation. Formatting follows MiscRef/GTAVSRC conventions;
// identifiers are recovered, not original. See ../../../README.md.

#include "gta6decomp/rage_types.h"


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1401128b0(int param_1,longlong param_2,longlong param_3,uint param_4,
                  undefined1 (*param_5) [16],undefined1 (*param_6) [16])

{
  longlong lVar1;
  undefined8 uVar2;
  float fVar3;
  int iVar4;
  int iVar5;
  undefined1 auVar6 [16];
  undefined1 auVar7 [16];
  undefined1 auVar8 [16];
  undefined1 auVar9 [16];
  undefined1 auVar10 [16];
  float fVar11;
  undefined1 auVar12 [16];
  undefined1 auVar13 [16];
  float fVar14;
  float fVar16;
  float fVar17;
  undefined1 auVar15 [16];
  undefined1 auVar18 [16];
  undefined1 auVar19 [16];
  float fVar20;
  float fVar21;
  float fVar22;
  float fVar23;
  float fVar24;
  float fVar29;
  float fVar30;
  float fVar31;
  undefined1 auVar25 [16];
  undefined1 auVar26 [16];
  undefined1 auVar27 [16];
  undefined1 auVar28 [16];
  undefined1 auVar32 [16];
  float fVar33;
  float fVar37;
  float fVar38;
  undefined1 auVar34 [16];
  float fVar39;
  undefined1 auVar35 [16];
  undefined1 auVar36 [16];
  undefined1 auVar40 [16];
  undefined1 auVar41 [16];
  undefined1 auVar42 [16];
  undefined1 auVar43 [16];
  int iStack_16c;
  undefined1 auStack_168 [16];
  undefined1 auStack_158 [16];
  undefined1 auStack_138 [12];
  float fStack_12c;
  undefined1 auStack_128 [16];
  undefined1 auStack_118 [16];
  undefined1 auStack_108 [48];
  float fStack_d8;
  float fStack_d4;
  float fStack_d0;
  float fStack_cc;
  
  iStack_16c = -1;
  iVar5 = 5;
  if (param_1 < 5) {
    iVar5 = param_1;
  }
  lVar1 = *(longlong *)(param_3 + 0x50);
  FUN_140047dc0(lVar1,*(undefined4 *)(param_2 + (ulonglong)param_4 * 4),&iStack_16c);
  iVar4 = iStack_16c;
  if ((iStack_16c == -1) || ((int)(uint)*(ushort *)(lVar1 + 0x6c) <= iStack_16c)) {
    fVar11 = ((float)(int)param_4 * _DAT_145fc6f84) / (float)iVar5;
    *(float *)*param_5 = fVar11;
    *(float *)(*param_5 + 4) = fVar11;
    *(float *)(*param_5 + 8) = fVar11;
    *(float *)(*param_5 + 0xc) = fVar11;
    auVar7 = ZEXT416(0) << 0x20;
  }
  else {
    func_0x000140112cd0(*(undefined8 *)(lVar1 + 0x28),iStack_16c,auStack_108);
    uVar2 = *(undefined8 *)(param_3 + 0x48);
    fVar20 = fStack_d8;
    fVar21 = fStack_d4;
    fVar22 = fStack_d0;
    fVar23 = fStack_cc;
    FUN_140112cf0(uVar2,0,auStack_138);
    FUN_140112cf0(uVar2,iVar4,auStack_168);
    fVar3 = _DAT_145fc6f08;
    auVar7._12_4_ = fStack_12c;
    auVar7._0_12_ = auStack_138;
    auVar18._4_4_ = _DAT_145fc6ed8;
    auVar18._0_4_ = _DAT_145fc6ed8;
    auVar18._8_4_ = _DAT_145fc6ed8;
    auVar18._12_4_ = _DAT_145fc6ed8;
    auVar10 = vsubps_avx(auStack_158,auStack_128);
    auVar12._0_4_ = _DAT_145fc6f10 ^ auStack_138._0_4_;
    auVar12._4_4_ = _DAT_145fc6f10 ^ auStack_138._4_4_;
    auVar12._8_4_ = _DAT_145fc6f10 ^ auStack_138._8_4_;
    auVar12._12_4_ = _DAT_145fc6f10 ^ (uint)fStack_12c;
    auVar6._0_4_ = _DAT_145fc6f10 ^ (uint)auStack_118._0_4_;
    auVar6._4_4_ = _DAT_145fc6f10 ^ (uint)auStack_118._4_4_;
    auVar6._8_4_ = _DAT_145fc6f10 ^ (uint)auStack_118._8_4_;
    auVar6._12_4_ = _DAT_145fc6f10 ^ (uint)auStack_118._12_4_;
    auVar7 = vblendps_avx(auVar12,auVar7,8);
    auVar8 = vrcpps_avx(auStack_118);
    auVar9 = vshufps_avx(auVar10,auVar10,0xc9);
    fVar14 = auVar8._0_4_;
    fVar16 = auVar8._4_4_;
    fVar17 = auVar8._8_4_;
    fVar11 = auVar8._12_4_;
    auVar8 = vcmpps_avx(auStack_118,auVar6,4);
    auVar12 = vshufps_avx(auVar7,auVar7,0xc9);
    auVar7 = vshufps_avx(auVar7,auVar7,0xd2);
    auVar13 = vshufps_avx(auVar10,auVar10,0xd2);
    auVar6 = ZEXT816(0) << 0x20;
    fVar24 = -(auVar7._0_4_ * auVar9._0_4_) + auVar13._0_4_ * auVar12._0_4_;
    fVar29 = -(auVar7._4_4_ * auVar9._4_4_) + auVar13._4_4_ * auVar12._4_4_;
    fVar30 = -(auVar7._8_4_ * auVar9._8_4_) + auVar13._8_4_ * auVar12._8_4_;
    fVar31 = -(auVar7._12_4_ * auVar9._12_4_) + auVar13._12_4_ * auVar12._12_4_;
    auVar25._0_4_ = fVar24 + fVar24;
    auVar25._4_4_ = fVar29 + fVar29;
    auVar25._8_4_ = fVar30 + fVar30;
    auVar25._12_4_ = fVar31 + fVar31;
    auVar9 = vshufps_avx(auVar25,auVar25,0xd2);
    auVar13 = vshufps_avx(auVar25,auVar25,0xc9);
    fVar14 = (auVar25._0_4_ * fStack_12c + auVar10._0_4_ +
             -(auVar7._0_4_ * auVar13._0_4_) + auVar9._0_4_ * auVar12._0_4_) *
             (float)(auVar8._0_4_ &
                    (uint)(-((auStack_118._0_4_ * fVar14 - _DAT_145fc6ed8) * fVar14) + fVar14));
    fVar16 = (auVar25._4_4_ * fStack_12c + auVar10._4_4_ +
             -(auVar7._4_4_ * auVar13._4_4_) + auVar9._4_4_ * auVar12._4_4_) *
             (float)(auVar8._4_4_ &
                    (uint)(-((auStack_118._4_4_ * fVar16 - _DAT_145fc6ed8) * fVar16) + fVar16));
    fVar17 = (auVar25._8_4_ * fStack_12c + auVar10._8_4_ +
             -(auVar7._8_4_ * auVar13._8_4_) + auVar9._8_4_ * auVar12._8_4_) *
             (float)(auVar8._8_4_ &
                    (uint)(-((auStack_118._8_4_ * fVar17 - _DAT_145fc6ed8) * fVar17) + fVar17));
    fVar31 = (auVar25._12_4_ * fStack_12c + auVar10._12_4_ +
             -(auVar7._12_4_ * auVar13._12_4_) + auVar9._12_4_ * auVar12._12_4_) *
             (float)(auVar8._12_4_ &
                    (uint)(-((auStack_118._12_4_ * fVar11 - _DAT_145fc6ed8) * fVar11) + fVar11));
    auVar8._0_4_ = fVar14 * fVar14;
    auVar8._4_4_ = fVar16 * fVar16;
    auVar8._8_4_ = fVar17 * fVar17;
    auVar8._12_4_ = fVar31 * fVar31;
    auVar7 = vblendps_avx(auVar8,auVar6,8);
    auVar7 = vhaddps_avx(auVar7,auVar7);
    auVar13 = vhaddps_avx(auVar7,auVar7);
    auVar7 = vrsqrtps_avx(auVar13);
    fVar11 = auVar7._0_4_;
    fVar24 = auVar7._4_4_;
    fVar29 = auVar7._8_4_;
    fVar30 = auVar7._12_4_;
    fVar11 = (_DAT_145fc6f08 * fVar11 * fVar11 * auVar13._0_4_ - _DAT_145fc6f08) * fVar11 + fVar11;
    fVar24 = (_DAT_145fc6f08 * fVar24 * fVar24 * auVar13._4_4_ - _DAT_145fc6f08) * fVar24 + fVar24;
    fVar29 = (_DAT_145fc6f08 * fVar29 * fVar29 * auVar13._8_4_ - _DAT_145fc6f08) * fVar29 + fVar29;
    fVar30 = (_DAT_145fc6f08 * fVar30 * fVar30 * auVar13._12_4_ - _DAT_145fc6f08) * fVar30 + fVar30;
    auVar26._4_4_ = _DAT_145fc6f14;
    auVar26._0_4_ = _DAT_145fc6f14;
    auVar26._8_4_ = _DAT_145fc6f14;
    auVar26._12_4_ = _DAT_145fc6f14;
    auVar15._0_4_ = fVar14 * fVar11;
    auVar15._4_4_ = fVar16 * fVar24;
    auVar15._8_4_ = fVar17 * fVar29;
    auVar15._12_4_ = fVar31 * fVar30;
    auVar7 = vcmpps_avx(auVar26,auVar13,1);
    auVar7 = vblendvps_avx(ZEXT416((uint)_DAT_145fc6ed8),auVar15,auVar7);
    auVar9 = vshufps_avx(auVar7,auVar7,0xaa);
    auVar12 = vshufps_avx(auVar7,auVar7,0x55);
    auVar7 = vrcpps_avx(auVar9);
    auVar27._0_4_ = _DAT_145fc6f10 ^ (uint)auVar9._0_4_;
    auVar27._4_4_ = _DAT_145fc6f10 ^ (uint)auVar9._4_4_;
    auVar27._8_4_ = _DAT_145fc6f10 ^ (uint)auVar9._8_4_;
    auVar27._12_4_ = _DAT_145fc6f10 ^ (uint)auVar9._12_4_;
    fVar16 = auVar7._0_4_;
    fVar17 = auVar7._4_4_;
    fVar31 = auVar7._8_4_;
    fVar14 = auVar7._12_4_;
    auVar34._0_4_ = (-((auVar9._0_4_ * fVar16 - _DAT_145fc6ed8) * fVar16) + fVar16) * auVar12._0_4_;
    auVar34._4_4_ = (-((auVar9._4_4_ * fVar17 - _DAT_145fc6ed8) * fVar17) + fVar17) * auVar12._4_4_;
    auVar34._8_4_ = (-((auVar9._8_4_ * fVar31 - _DAT_145fc6ed8) * fVar31) + fVar31) * auVar12._8_4_;
    auVar34._12_4_ =
         (-((auVar9._12_4_ * fVar14 - _DAT_145fc6ed8) * fVar14) + fVar14) * auVar12._12_4_;
    auVar7 = vrcpps_avx(auVar34);
    auVar40._0_4_ = (uint)auVar34._0_4_ & _DAT_145fc6f4c;
    auVar40._4_4_ = (uint)auVar34._4_4_ & _DAT_145fc6f4c;
    auVar40._8_4_ = (uint)auVar34._8_4_ & _DAT_145fc6f4c;
    auVar40._12_4_ = (uint)auVar34._12_4_ & _DAT_145fc6f4c;
    fVar16 = auVar7._0_4_;
    fVar17 = auVar7._4_4_;
    fVar31 = auVar7._8_4_;
    fVar14 = auVar7._12_4_;
    auVar8 = vcmpps_avx(auVar18,auVar40,1);
    auVar42._0_4_ = (auVar34._0_4_ * fVar16 - _DAT_145fc6ed8) * fVar16 - fVar16;
    auVar42._4_4_ = (auVar34._4_4_ * fVar17 - _DAT_145fc6ed8) * fVar17 - fVar17;
    auVar42._8_4_ = (auVar34._8_4_ * fVar31 - _DAT_145fc6ed8) * fVar31 - fVar31;
    auVar42._12_4_ = (auVar34._12_4_ * fVar14 - _DAT_145fc6ed8) * fVar14 - fVar14;
    auVar7 = vblendvps_avx(auVar34,auVar42,auVar8);
    fVar14 = auVar7._0_4_;
    fVar33 = fVar14 * fVar14;
    fVar16 = auVar7._4_4_;
    fVar37 = fVar16 * fVar16;
    fVar17 = auVar7._8_4_;
    fVar38 = fVar17 * fVar17;
    fVar31 = auVar7._12_4_;
    fVar39 = fVar31 * fVar31;
    auVar35._4_4_ = _DAT_145fc6f80;
    auVar35._0_4_ = _DAT_145fc6f80;
    auVar35._8_4_ = _DAT_145fc6f80;
    auVar35._12_4_ = _DAT_145fc6f80;
    auVar32._4_4_ = _DAT_146159be0;
    auVar32._0_4_ = _DAT_146159be0;
    auVar32._8_4_ = _DAT_146159be0;
    auVar32._12_4_ = _DAT_146159be0;
    auVar41._4_4_ = _DAT_146159bdc;
    auVar41._0_4_ = _DAT_146159bdc;
    auVar41._8_4_ = _DAT_146159bdc;
    auVar41._12_4_ = _DAT_146159bdc;
    auVar43._0_4_ =
         fVar33 * fVar33 * fVar33 * fVar33 * fVar14 *
         (fVar33 * (fVar33 * (fVar33 * (fVar33 * _DAT_14615a184 + _DAT_14615a180) + _DAT_14615a188)
                   + _DAT_14615a18c) + _DAT_14615a190) +
         fVar33 * fVar14 * (fVar33 * (fVar33 * _DAT_14615a198 + _DAT_14615a194) + _DAT_14615a19c) +
         (float)(((uint)auVar34._0_4_ & _DAT_145fc6f10 | _DAT_146159bdc) & auVar8._0_4_) + fVar14;
    auVar43._4_4_ =
         fVar37 * fVar37 * fVar37 * fVar37 * fVar16 *
         (fVar37 * (fVar37 * (fVar37 * (fVar37 * _DAT_14615a184 + _DAT_14615a180) + _DAT_14615a188)
                   + _DAT_14615a18c) + _DAT_14615a190) +
         fVar37 * fVar16 * (fVar37 * (fVar37 * _DAT_14615a198 + _DAT_14615a194) + _DAT_14615a19c) +
         (float)(((uint)auVar34._4_4_ & _DAT_145fc6f10 | _DAT_146159bdc) & auVar8._4_4_) + fVar16;
    auVar43._8_4_ =
         fVar38 * fVar38 * fVar38 * fVar38 * fVar17 *
         (fVar38 * (fVar38 * (fVar38 * (fVar38 * _DAT_14615a184 + _DAT_14615a180) + _DAT_14615a188)
                   + _DAT_14615a18c) + _DAT_14615a190) +
         fVar38 * fVar17 * (fVar38 * (fVar38 * _DAT_14615a198 + _DAT_14615a194) + _DAT_14615a19c) +
         (float)(((uint)auVar34._8_4_ & _DAT_145fc6f10 | _DAT_146159bdc) & auVar8._8_4_) + fVar17;
    auVar43._12_4_ =
         fVar39 * fVar39 * fVar39 * fVar39 * fVar31 *
         (fVar39 * (fVar39 * (fVar39 * (fVar39 * _DAT_14615a184 + _DAT_14615a180) + _DAT_14615a188)
                   + _DAT_14615a18c) + _DAT_14615a190) +
         fVar39 * fVar31 * (fVar39 * (fVar39 * _DAT_14615a198 + _DAT_14615a194) + _DAT_14615a19c) +
         (float)(((uint)auVar34._12_4_ & _DAT_145fc6f10 | _DAT_146159bdc) & auVar8._12_4_) + fVar31;
    auVar7 = vcmpps_avx(auVar12,auVar6,1);
    auVar7 = vblendvps_avx(auVar35,auVar32,auVar7);
    auVar8 = vcmpps_avx(auVar9,auVar27,1);
    auVar9 = vcmpps_avx(auVar9,auVar27,0);
    auVar28._4_4_ = _DAT_146159bfc;
    auVar28._0_4_ = _DAT_146159bfc;
    auVar28._8_4_ = _DAT_146159bfc;
    auVar28._12_4_ = _DAT_146159bfc;
    auVar36._4_4_ = _DAT_14615a1a0;
    auVar36._0_4_ = _DAT_14615a1a0;
    auVar36._8_4_ = _DAT_14615a1a0;
    auVar36._12_4_ = _DAT_14615a1a0;
    auVar19._0_4_ = auVar43._0_4_ + auVar7._0_4_;
    auVar19._4_4_ = auVar43._4_4_ + auVar7._4_4_;
    auVar19._8_4_ = auVar43._8_4_ + auVar7._8_4_;
    auVar19._12_4_ = auVar43._12_4_ + auVar7._12_4_;
    auVar7 = vblendvps_avx(auVar43,auVar19,auVar8);
    auVar8 = vcmpps_avx(auVar6,auVar12,1);
    auVar12 = vcmpps_avx(auVar28,auVar13,2);
    auVar8 = vblendvps_avx(auVar36,auVar41,auVar8);
    auVar10._0_4_ = auVar12._0_4_ & (uint)(fVar11 * auVar13._0_4_);
    auVar10._4_4_ = auVar12._4_4_ & (uint)(fVar24 * auVar13._4_4_);
    auVar10._8_4_ = auVar12._8_4_ & (uint)(fVar29 * auVar13._8_4_);
    auVar10._12_4_ = auVar12._12_4_ & (uint)(fVar30 * auVar13._12_4_);
    auVar13._0_4_ = fVar20 * fVar20;
    auVar13._4_4_ = fVar21 * fVar21;
    auVar13._8_4_ = fVar22 * fVar22;
    auVar13._12_4_ = fVar23 * fVar23;
    auVar7 = vblendvps_avx(auVar7,auVar8,auVar9);
    *param_5 = auVar7;
    auVar7 = vblendps_avx(auVar13,auVar6,8);
    auVar7 = vhaddps_avx(auVar7,auVar7);
    auVar8 = vhaddps_avx(auVar7,auVar7);
    auVar7 = vrsqrtps_avx(auVar8);
    fVar11 = auVar7._0_4_;
    fVar14 = auVar7._4_4_;
    fVar24 = auVar7._8_4_;
    fVar16 = auVar7._12_4_;
    auVar7 = vcmpps_avx(auVar28,auVar8,2);
    auVar9._0_4_ = auVar7._0_4_ &
                   (uint)(((fVar3 * fVar11 * fVar11 * auVar8._0_4_ - fVar3) * fVar11 + fVar11) *
                         auVar8._0_4_);
    auVar9._4_4_ = auVar7._4_4_ &
                   (uint)(((fVar3 * fVar14 * fVar14 * auVar8._4_4_ - fVar3) * fVar14 + fVar14) *
                         auVar8._4_4_);
    auVar9._8_4_ = auVar7._8_4_ &
                   (uint)(((fVar3 * fVar24 * fVar24 * auVar8._8_4_ - fVar3) * fVar24 + fVar24) *
                         auVar8._8_4_);
    auVar9._12_4_ =
         auVar7._12_4_ &
         (uint)(((fVar3 * fVar16 * fVar16 * auVar8._12_4_ - fVar3) * fVar16 + fVar16) *
               auVar8._12_4_);
    auVar7 = vsubps_avx(auVar9,auVar10);
    auVar7 = vmaxps_avx(auVar7,auVar6);
  }
  *param_6 = auVar7;
  return;
}

