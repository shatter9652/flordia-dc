// Recovered from game_scarlett_master.exe (GTA VI, Xbox Series X, PE32+ x64)
// Address: 14002af10  size: 931 bytes
// Name:    FUN_14002af10
// Subsystem: core
//
// Referenced strings (0 in this body, 0 including direct callees):
// Callees: FUN_144daa460, FUN_144db6f30
//
// Generated decompilation. Formatting follows MiscRef/GTAVSRC conventions;
// identifiers are recovered, not original. See ../../../README.md.

#include "gta6decomp/rage_types.h"


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_14002af10(float *param_1,undefined8 param_2,undefined1 (*param_3) [16],char param_4,
                  undefined4 param_5,undefined1 (*param_6) [16],undefined4 param_7)

{
  undefined1 auVar1 [16];
  undefined1 auVar2 [16];
  undefined1 auVar3 [16];
  undefined1 in_ZMM0 [64];
  undefined1 auVar4 [16];
  undefined1 auVar5 [16];
  undefined1 auVar6 [16];
  float fVar7;
  float fVar8;
  float fVar16;
  float fVar18;
  float fVar20;
  undefined1 auVar9 [16];
  float fVar17;
  float fVar19;
  float fVar21;
  undefined1 auVar10 [16];
  undefined1 auVar11 [16];
  undefined1 auVar12 [16];
  undefined1 auVar13 [16];
  undefined1 auVar14 [16];
  undefined1 auVar15 [16];
  undefined1 auVar22 [16];
  undefined1 auVar23 [16];
  undefined1 auVar24 [16];
  undefined1 auVar25 [16];
  uint uVar26;
  uint uVar28;
  uint uVar29;
  uint uVar30;
  undefined1 auVar27 [64];
  undefined1 auVar31 [16];
  undefined1 auVar32 [16];
  undefined1 auVar33 [16];
  float fVar35;
  float fVar40;
  undefined1 auVar36 [16];
  float fVar38;
  float fVar39;
  undefined1 auVar37 [64];
  float fVar41;
  float fVar43;
  float fVar44;
  undefined1 auVar42 [16];
  float fVar45;
  undefined1 auStack_d8 [16];
  undefined1 auStack_c8 [12];
  float fStack_bc;
  undefined1 auStack_b8 [12];
  float fStack_ac;
  undefined1 auVar34 [64];
  
  fVar7 = _DAT_145fc6f48;
  if (param_4 == '\0') {
    fVar7 = _DAT_145fc6ed8;
  }
  auVar27 = ZEXT464((uint)fVar7);
  auVar1 = vinsertps_avx(in_ZMM0._0_16_,ZEXT416((uint)fVar7),0x2b);
  auVar37 = ZEXT1664(auVar1);
  FUN_144db6f30(param_2,auStack_b8,param_7);
  auVar42._12_4_ = fStack_ac;
  auVar42._0_12_ = auStack_b8;
  auVar31._0_12_ = ZEXT812(0);
  auVar31._12_4_ = 0;
  auVar34 = ZEXT1664(auVar31);
  auVar1 = vblendps_avx(auVar31,auVar27._0_16_,1);
  auVar3 = vshufps_avx(auVar42,auVar42,0xc9);
  auVar2 = vshufps_avx(auVar42,auVar42,0xd2);
  auVar42 = vinsertps_avx(auVar2,auVar27._0_16_,0x1d);
  fVar7 = -(auVar2._0_4_ * auVar42._0_4_) + auVar3._0_4_ * auVar1._0_4_;
  fVar16 = -(auVar2._4_4_ * auVar42._4_4_) + auVar3._4_4_ * auVar1._4_4_;
  fVar18 = -(auVar2._8_4_ * auVar42._8_4_) + auVar3._8_4_ * auVar1._8_4_;
  fVar20 = -(auVar2._12_4_ * auVar42._12_4_) + auVar3._12_4_ * auVar1._12_4_;
  auVar9._0_4_ = fVar7 + fVar7;
  auVar9._4_4_ = fVar16 + fVar16;
  auVar9._8_4_ = fVar18 + fVar18;
  auVar9._12_4_ = fVar20 + fVar20;
  auVar1 = vshufps_avx(auVar9,auVar9,0xd2);
  auVar42 = vshufps_avx(auVar9,auVar9,0xc9);
  auVar27 = ZEXT1664(CONCAT412(auVar9._12_4_ * fStack_ac + auVar37._12_4_ +
                               -(auVar2._12_4_ * auVar42._12_4_) + auVar1._12_4_ * auVar3._12_4_,
                               CONCAT48(auVar9._8_4_ * fStack_ac + auVar37._8_4_ +
                                        -(auVar2._8_4_ * auVar42._8_4_) +
                                        auVar1._8_4_ * auVar3._8_4_,
                                        CONCAT44(auVar9._4_4_ * fStack_ac + auVar37._4_4_ +
                                                 -(auVar2._4_4_ * auVar42._4_4_) +
                                                 auVar1._4_4_ * auVar3._4_4_,
                                                 auVar9._0_4_ * fStack_ac + auVar37._0_4_ +
                                                 -(auVar2._0_4_ * auVar42._0_4_) +
                                                 auVar1._0_4_ * auVar3._0_4_))));
  auVar1 = vsubps_avx(*param_3,*param_6);
  auVar37 = ZEXT1664(auVar1);
  FUN_144db6f30(param_2,auStack_c8,param_5);
  auVar1._12_4_ = fStack_bc;
  auVar1._0_12_ = auStack_c8;
  auVar3 = auVar27._0_16_;
  auVar42 = vshufps_avx(auVar3,auVar3,0xd2);
  auVar3 = vshufps_avx(auVar3,auVar3,0xc9);
  auVar4._0_4_ = auStack_c8._0_4_ ^ _DAT_145fc6f10;
  auVar4._4_4_ = auStack_c8._4_4_ ^ _DAT_145fc6f10;
  auVar4._8_4_ = auStack_c8._8_4_ ^ _DAT_145fc6f10;
  auVar4._12_4_ = (uint)fStack_bc ^ _DAT_145fc6f10;
  auVar1 = vblendps_avx(auVar4,auVar1,8);
  auVar2 = vshufps_avx(auVar1,auVar1,0xc9);
  auVar1 = vshufps_avx(auVar1,auVar1,0xd2);
  fVar7 = auVar2._0_4_;
  fVar16 = auVar2._4_4_;
  fVar18 = auVar2._8_4_;
  fVar20 = auVar2._12_4_;
  fVar41 = auVar1._0_4_;
  fVar8 = -(fVar41 * auVar3._0_4_) + auVar42._0_4_ * fVar7;
  fVar43 = auVar1._4_4_;
  fVar17 = -(fVar43 * auVar3._4_4_) + auVar42._4_4_ * fVar16;
  fVar44 = auVar1._8_4_;
  fVar19 = -(fVar44 * auVar3._8_4_) + auVar42._8_4_ * fVar18;
  fVar45 = auVar1._12_4_;
  fVar21 = -(fVar45 * auVar3._12_4_) + auVar42._12_4_ * fVar20;
  auVar10._0_4_ = fVar8 + fVar8;
  auVar10._4_4_ = fVar17 + fVar17;
  auVar10._8_4_ = fVar19 + fVar19;
  auVar10._12_4_ = fVar21 + fVar21;
  auVar1 = vshufps_avx(auVar10,auVar10,0xd2);
  auVar42 = vshufps_avx(auVar10,auVar10,0xc9);
  fVar35 = fStack_bc * auVar10._0_4_ + auVar27._0_4_ +
           -(fVar41 * auVar42._0_4_) + auVar1._0_4_ * fVar7;
  fVar38 = fStack_bc * auVar10._4_4_ + auVar27._4_4_ +
           -(fVar43 * auVar42._4_4_) + auVar1._4_4_ * fVar16;
  fVar39 = fStack_bc * auVar10._8_4_ + auVar27._8_4_ +
           -(fVar44 * auVar42._8_4_) + auVar1._8_4_ * fVar18;
  fVar40 = fStack_bc * auVar10._12_4_ + auVar27._12_4_ +
           -(fVar45 * auVar42._12_4_) + auVar1._12_4_ * fVar20;
  auVar42 = auVar37._0_16_;
  auVar1 = vshufps_avx(auVar42,auVar42,0xd2);
  auVar42 = vshufps_avx(auVar42,auVar42,0xc9);
  fVar8 = -(fVar41 * auVar42._0_4_) + fVar7 * auVar1._0_4_;
  fVar17 = -(fVar43 * auVar42._4_4_) + fVar16 * auVar1._4_4_;
  fVar19 = -(fVar44 * auVar42._8_4_) + fVar18 * auVar1._8_4_;
  fVar21 = -(fVar45 * auVar42._12_4_) + fVar20 * auVar1._12_4_;
  auVar11._0_4_ = fVar8 + fVar8;
  auVar11._4_4_ = fVar17 + fVar17;
  auVar11._8_4_ = fVar19 + fVar19;
  auVar11._12_4_ = fVar21 + fVar21;
  auVar1 = vshufps_avx(auVar11,auVar11,0xd2);
  auVar42 = vshufps_avx(auVar11,auVar11,0xc9);
  fVar41 = auVar11._0_4_ * fStack_bc + auVar37._0_4_ +
           -(fVar41 * auVar42._0_4_) + auVar1._0_4_ * fVar7;
  fVar43 = auVar11._4_4_ * fStack_bc + auVar37._4_4_ +
           -(fVar43 * auVar42._4_4_) + auVar1._4_4_ * fVar16;
  fVar44 = auVar11._8_4_ * fStack_bc + auVar37._8_4_ +
           -(fVar44 * auVar42._8_4_) + auVar1._8_4_ * fVar18;
  fVar45 = auVar11._12_4_ * fStack_bc + auVar37._12_4_ +
           -(fVar45 * auVar42._12_4_) + auVar1._12_4_ * fVar20;
  uVar26 = _DAT_145fc6f10;
  uVar28 = _DAT_145fc6f10;
  uVar29 = _DAT_145fc6f10;
  uVar30 = _DAT_145fc6f10;
  FUN_144daa460(param_2,auStack_d8,param_7);
  auVar2._0_4_ = fVar35 * fVar35;
  auVar2._4_4_ = fVar38 * fVar38;
  auVar2._8_4_ = fVar39 * fVar39;
  auVar2._12_4_ = fVar40 * fVar40;
  auVar3 = auVar34._0_16_;
  auVar1 = vblendps_avx(auVar2,auVar3,8);
  auVar1 = vhaddps_avx(auVar1,auVar1);
  auVar1 = vhaddps_avx(auVar1,auVar1);
  auVar42 = vrsqrtps_avx(auVar1);
  fVar7 = auVar42._0_4_;
  fVar16 = auVar42._4_4_;
  fVar18 = auVar42._8_4_;
  fVar20 = auVar42._12_4_;
  auVar5._0_4_ = fVar35 * ((_DAT_145fc6f08 * fVar7 * fVar7 * auVar1._0_4_ - _DAT_145fc6f08) * fVar7
                          + fVar7);
  auVar5._4_4_ = fVar38 * ((_DAT_145fc6f08 * fVar16 * fVar16 * auVar1._4_4_ - _DAT_145fc6f08) *
                           fVar16 + fVar16);
  auVar5._8_4_ = fVar39 * ((_DAT_145fc6f08 * fVar18 * fVar18 * auVar1._8_4_ - _DAT_145fc6f08) *
                           fVar18 + fVar18);
  auVar5._12_4_ =
       fVar40 * ((_DAT_145fc6f08 * fVar20 * fVar20 * auVar1._12_4_ - _DAT_145fc6f08) * fVar20 +
                fVar20);
  auVar12._0_4_ = fVar41 * fVar41;
  auVar12._4_4_ = fVar43 * fVar43;
  auVar12._8_4_ = fVar44 * fVar44;
  auVar12._12_4_ = fVar45 * fVar45;
  auVar1 = vblendps_avx(auVar12,auVar3,8);
  auVar1 = vhaddps_avx(auVar1,auVar1);
  auVar1 = vhaddps_avx(auVar1,auVar1);
  auVar42 = vrsqrtps_avx(auVar1);
  fVar7 = auVar42._0_4_;
  fVar16 = auVar42._4_4_;
  fVar18 = auVar42._8_4_;
  fVar20 = auVar42._12_4_;
  auVar22._0_4_ =
       fVar41 * ((_DAT_145fc6f08 * fVar7 * fVar7 * auVar1._0_4_ - _DAT_145fc6f08) * fVar7 + fVar7);
  auVar22._4_4_ =
       fVar43 * ((_DAT_145fc6f08 * fVar16 * fVar16 * auVar1._4_4_ - _DAT_145fc6f08) * fVar16 +
                fVar16);
  auVar22._8_4_ =
       fVar44 * ((_DAT_145fc6f08 * fVar18 * fVar18 * auVar1._8_4_ - _DAT_145fc6f08) * fVar18 +
                fVar18);
  auVar22._12_4_ =
       fVar45 * ((_DAT_145fc6f08 * fVar20 * fVar20 * auVar1._12_4_ - _DAT_145fc6f08) * fVar20 +
                fVar20);
  auVar13._0_4_ = auVar22._0_4_ * auVar5._0_4_;
  auVar13._4_4_ = auVar22._4_4_ * auVar5._4_4_;
  auVar13._8_4_ = auVar22._8_4_ * auVar5._8_4_;
  auVar13._12_4_ = auVar22._12_4_ * auVar5._12_4_;
  auVar1 = vblendps_avx(auVar13,auVar3,8);
  auVar1 = vhaddps_avx(auVar1,auVar1);
  auVar1 = vhaddps_avx(auVar1,auVar1);
  fVar7 = auVar1._0_4_;
  fVar16 = auVar1._4_4_;
  fVar18 = auVar1._8_4_;
  fVar20 = auVar1._12_4_;
  auVar32._0_4_ = (uint)(fVar7 + _DAT_145fc6f48) & _DAT_145fc6f4c;
  auVar32._4_4_ = (uint)(fVar16 + _DAT_145fc6f48) & _DAT_145fc6f4c;
  auVar32._8_4_ = (uint)(fVar18 + _DAT_145fc6f48) & _DAT_145fc6f4c;
  auVar32._12_4_ = (uint)(fVar20 + _DAT_145fc6f48) & _DAT_145fc6f4c;
  auVar24._4_4_ = _DAT_14615a034;
  auVar24._0_4_ = _DAT_14615a034;
  auVar24._8_4_ = _DAT_14615a034;
  auVar24._12_4_ = _DAT_14615a034;
  auVar1 = vcmpps_avx(auVar32,auVar24,5);
  auVar3 = _DAT_145fc6ee0;
  if ((((SUB161(auVar1 >> 0x1f,0) & 1) != 0 || (SUB161(auVar1 >> 0x3f,0) & 1) != 0) ||
      (SUB161(auVar1 >> 0x5f,0) & 1) != 0) || auVar1[0xf] < '\0') {
    auVar33._0_4_ = (uint)(fVar7 + _DAT_145fc6ed8) & _DAT_145fc6f4c;
    auVar33._4_4_ = (uint)(fVar16 + _DAT_145fc6ed8) & _DAT_145fc6f4c;
    auVar33._8_4_ = (uint)(fVar18 + _DAT_145fc6ed8) & _DAT_145fc6f4c;
    auVar33._12_4_ = (uint)(fVar20 + _DAT_145fc6ed8) & _DAT_145fc6f4c;
    auVar25._0_4_ = (uint)fVar35 & _DAT_145fc6f4c;
    auVar25._4_4_ = (uint)fVar38 & _DAT_145fc6f4c;
    auVar25._8_4_ = (uint)fVar39 & _DAT_145fc6f4c;
    auVar25._12_4_ = (uint)fVar40 & _DAT_145fc6f4c;
    auVar36._4_4_ = auVar25._0_4_;
    auVar36._0_4_ = auVar25._0_4_;
    auVar36._8_4_ = auVar25._0_4_;
    auVar36._12_4_ = auVar25._0_4_;
    auVar2 = vshufps_avx(auVar25,auVar25,0x55);
    auVar1 = vshufps_avx(auVar25,auVar25,0xaa);
    auVar3 = vcmpps_avx(auVar33,auVar24,1);
    auVar42 = vcmpps_avx(auVar36,auVar1,1);
    auVar1 = vcmpps_avx(auVar2,auVar1,1);
    auVar2 = vcmpps_avx(auVar36,auVar2,1);
    auVar1 = vblendvps_avx(_DAT_14614f7f0,_DAT_146159bc0,auVar1);
    auVar42 = vblendvps_avx(_DAT_14614f7f0,ZEXT416((uint)_DAT_145fc6ed8),auVar42);
    auVar1 = vblendvps_avx(auVar1,auVar42,auVar2);
    auVar1 = vblendvps_avx(auVar22,auVar1,auVar3);
    auVar42 = vshufps_avx(auVar5,auVar5,0xc9);
    auVar3 = vshufps_avx(auVar5,auVar5,0xd2);
    auVar2 = vshufps_avx(auVar1,auVar1,0xd2);
    auVar1 = vshufps_avx(auVar1,auVar1,0xc9);
    auVar23._0_4_ = -(auVar3._0_4_ * auVar1._0_4_) + auVar2._0_4_ * auVar42._0_4_;
    auVar23._4_4_ = -(auVar3._4_4_ * auVar1._4_4_) + auVar2._4_4_ * auVar42._4_4_;
    auVar23._8_4_ = -(auVar3._8_4_ * auVar1._8_4_) + auVar2._8_4_ * auVar42._8_4_;
    auVar23._12_4_ = -(auVar3._12_4_ * auVar1._12_4_) + auVar2._12_4_ * auVar42._12_4_;
    auVar6._0_4_ = _DAT_145fc6ed8 + fVar7;
    auVar6._4_4_ = fVar16 + 0.0;
    auVar6._8_4_ = fVar18 + 0.0;
    auVar6._12_4_ = fVar20 + 0.0;
    auVar1 = vinsertps_avx(auVar23,auVar6,0x30);
    fVar7 = auVar1._0_4_;
    auVar14._0_4_ = fVar7 * fVar7;
    fVar18 = auVar1._4_4_;
    auVar14._4_4_ = fVar18 * fVar18;
    fVar41 = auVar1._8_4_;
    auVar14._8_4_ = fVar41 * fVar41;
    fVar44 = auVar1._12_4_;
    auVar14._12_4_ = fVar44 * fVar44;
    auVar1 = vhaddps_avx(auVar14,auVar14);
    auVar1 = vhaddps_avx(auVar1,auVar1);
    auVar42 = vrsqrtps_avx(auVar1);
    fVar16 = auVar42._0_4_;
    fVar20 = auVar42._4_4_;
    fVar43 = auVar42._8_4_;
    fVar45 = auVar42._12_4_;
    auVar3._0_4_ = ((fVar16 * fVar16 * auVar1._0_4_ * _DAT_145fc6f08 - _DAT_145fc6f08) * fVar16 +
                   fVar16) * fVar7;
    auVar3._4_4_ = ((fVar20 * fVar20 * auVar1._4_4_ * _DAT_145fc6f08 - _DAT_145fc6f08) * fVar20 +
                   fVar20) * fVar18;
    auVar3._8_4_ = ((fVar43 * fVar43 * auVar1._8_4_ * _DAT_145fc6f08 - _DAT_145fc6f08) * fVar43 +
                   fVar43) * fVar41;
    auVar3._12_4_ =
         ((fVar45 * fVar45 * auVar1._12_4_ * _DAT_145fc6f08 - _DAT_145fc6f08) * fVar45 + fVar45) *
         fVar44;
  }
  auVar2 = vshufps_avx(auVar3,auVar3,0xff);
  fVar7 = auVar3._0_4_;
  auVar4 = vshufps_avx(auVar3,auVar3,0x55);
  auVar3 = vshufps_avx(auVar3,auVar3,0xaa);
  auVar15._0_4_ = (uint)auStack_d8._0_4_ ^ uVar26;
  auVar15._4_4_ = (uint)auStack_d8._4_4_ ^ uVar28;
  auVar15._8_4_ = (uint)auStack_d8._8_4_ ^ uVar29;
  auVar15._12_4_ = (uint)auStack_d8._12_4_ ^ uVar30;
  auVar1 = vblendps_avx(auVar15,auStack_d8,10);
  auVar5 = vshufps_avx(auVar1,auVar1,0x1b);
  auVar42 = vshufpd_avx(auStack_d8,auVar15,1);
  auVar1 = vblendps_avx(auVar15,auStack_d8,9);
  auVar1 = vshufps_avx(auVar1,auVar1,0xb1);
  *param_1 = auVar3._0_4_ * auVar1._0_4_ +
             auVar4._0_4_ * auVar42._0_4_ + fVar7 * auVar5._0_4_ + auVar2._0_4_ * auStack_d8._0_4_;
  param_1[1] = auVar3._4_4_ * auVar1._4_4_ +
               auVar4._4_4_ * auVar42._4_4_ + fVar7 * auVar5._4_4_ + auVar2._4_4_ * auStack_d8._4_4_
  ;
  param_1[2] = auVar3._8_4_ * auVar1._8_4_ +
               auVar4._8_4_ * auVar42._8_4_ + fVar7 * auVar5._8_4_ + auVar2._8_4_ * auStack_d8._8_4_
  ;
  param_1[3] = auVar3._12_4_ * auVar1._12_4_ +
               auVar4._12_4_ * auVar42._12_4_ +
               fVar7 * auVar5._12_4_ + auVar2._12_4_ * auStack_d8._12_4_;
  return;
}

