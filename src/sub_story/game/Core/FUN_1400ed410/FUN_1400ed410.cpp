// Recovered from game_scarlett_master.exe (GTA VI, Xbox Series X, PE32+ x64)
// Address: 1400ed410  size: 781 bytes
// Name:    FUN_1400ed410
// Subsystem: core
//
// Referenced strings (0 in this body, 0 including direct callees):
// Callees: 
//
// Generated decompilation. Formatting follows MiscRef/GTAVSRC conventions;
// identifiers are recovered, not original. See ../../../README.md.

#include "gta6decomp/rage_types.h"


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1400ed410(uint param_1,longlong param_2,longlong param_3,longlong param_4,float *param_5,
                  longlong param_6,float param_7,longlong param_8)

{
  float *pfVar1;
  float *pfVar2;
  float *pfVar3;
  float fVar4;
  float fVar5;
  undefined1 auVar6 [16];
  undefined1 auVar7 [16];
  undefined1 auVar8 [16];
  undefined1 auVar9 [16];
  undefined1 auVar10 [16];
  undefined1 auVar11 [16];
  undefined1 auVar12 [16];
  undefined1 auVar13 [16];
  float fVar14;
  float fVar15;
  float fVar16;
  float fVar17;
  float fVar18;
  longlong lVar19;
  float fVar22;
  float fVar23;
  float fVar24;
  undefined1 auVar20 [16];
  undefined1 auVar21 [16];
  float fVar25;
  float fVar26;
  float fVar28;
  float fVar29;
  float fVar30;
  undefined1 auVar27 [16];
  float fVar31;
  float fVar32;
  float fVar33;
  float fVar34;
  float fVar35;
  float fVar36;
  undefined1 auVar37 [16];
  undefined1 auVar38 [16];
  undefined1 auVar39 [16];
  undefined1 auVar40 [16];
  float fVar41;
  float fVar43;
  float fVar44;
  undefined1 auVar42 [16];
  float fVar45;
  float fVar46;
  float fVar47;
  float fVar48;
  float fVar49;
  float fVar50;
  float fVar51;
  float fVar52;
  float fVar53;
  float fVar54;
  float fVar55;
  
  fVar18 = _DAT_145fc6f10;
  if (0 < (int)param_1) {
    fVar4 = param_7 * param_7 * _DAT_145fc6edc;
    fVar5 = param_7 * _DAT_145fc6edc;
    fVar14 = *param_5;
    fVar15 = param_5[1];
    fVar16 = param_5[2];
    fVar17 = param_5[3];
    lVar19 = 0;
    do {
      auVar37._0_12_ = ZEXT812(0);
      auVar37._12_4_ = 0;
      fVar31 = 0.0;
      fVar32 = 0.0;
      fVar33 = 0.0;
      fVar35 = 0.0;
      if (param_6 != 0) {
        fVar35 = fVar4 * *(float *)(param_2 + 0xc + lVar19);
        pfVar1 = (float *)(param_6 + lVar19);
        fVar31 = fVar35 * *pfVar1;
        fVar32 = fVar35 * pfVar1[1];
        fVar33 = fVar35 * pfVar1[2];
        fVar35 = fVar35 * pfVar1[3];
      }
      pfVar1 = (float *)(param_4 + lVar19);
      fVar22 = pfVar1[1];
      fVar23 = pfVar1[2];
      fVar25 = pfVar1[3];
      pfVar2 = (float *)(param_3 + lVar19);
      fVar34 = pfVar2[1];
      fVar36 = pfVar2[2];
      fVar49 = pfVar2[3];
      pfVar3 = (float *)(param_8 + lVar19);
      *pfVar3 = param_7 * *pfVar1 + fVar31 + fVar4 * fVar14 + *pfVar2;
      pfVar3[1] = param_7 * fVar22 + fVar32 + fVar4 * fVar15 + fVar34;
      pfVar3[2] = param_7 * fVar23 + fVar33 + fVar4 * fVar16 + fVar36;
      pfVar3[3] = param_7 * fVar25 + fVar35 + fVar4 * fVar17 + fVar49;
      if (param_6 != 0) {
        auVar37 = *(undefined1 (*) [16])(param_6 + 0x10 + lVar19);
      }
      auVar21 = *(undefined1 (*) [16])(param_3 + 0x10 + lVar19);
      fVar35 = *(float *)(param_3 + 0x1c + lVar19);
      fVar23 = auVar21._0_4_;
      auVar42._0_4_ = fVar23 + fVar23;
      fVar25 = auVar21._4_4_;
      auVar42._4_4_ = fVar25 + fVar25;
      fVar34 = auVar21._8_4_;
      auVar42._8_4_ = fVar34 + fVar34;
      fVar36 = auVar21._12_4_;
      auVar42._12_4_ = fVar36 + fVar36;
      auVar6 = vshufps_avx(auVar21,auVar21,0xc9);
      auVar7 = vshufps_avx(auVar21,auVar21,0xd2);
      auVar8 = vshufps_avx(auVar42,auVar42,0xc9);
      auVar9 = vshufps_avx(auVar42,auVar42,0xd2);
      auVar39._0_4_ = auVar7._0_4_ * auVar42._0_4_ + auVar8._0_4_ * fVar35;
      auVar39._4_4_ = auVar7._4_4_ * auVar42._4_4_ + auVar8._4_4_ * fVar35;
      auVar39._8_4_ = auVar7._8_4_ * auVar42._8_4_ + auVar8._8_4_ * fVar35;
      auVar39._12_4_ = auVar7._12_4_ * auVar42._12_4_ + auVar8._12_4_ * fVar35;
      auVar40._0_4_ = -(fVar35 * auVar9._0_4_) + auVar6._0_4_ * auVar42._0_4_;
      auVar40._4_4_ = -(fVar35 * auVar9._4_4_) + auVar6._4_4_ * auVar42._4_4_;
      auVar40._8_4_ = -(fVar35 * auVar9._8_4_) + auVar6._8_4_ * auVar42._8_4_;
      auVar40._12_4_ = -(fVar35 * auVar9._12_4_) + auVar6._12_4_ * auVar42._12_4_;
      auVar38._0_4_ =
           -(auVar9._0_4_ * auVar7._0_4_) - (auVar6._0_4_ * auVar8._0_4_ - _DAT_145fc6ed8);
      auVar38._4_4_ =
           -(auVar9._4_4_ * auVar7._4_4_) - (auVar6._4_4_ * auVar8._4_4_ - _DAT_145fc6ed8);
      auVar38._8_4_ =
           -(auVar9._8_4_ * auVar7._8_4_) - (auVar6._8_4_ * auVar8._8_4_ - _DAT_145fc6ed8);
      auVar38._12_4_ =
           -(auVar9._12_4_ * auVar7._12_4_) - (auVar6._12_4_ * auVar8._12_4_ - _DAT_145fc6ed8);
      auVar6 = vblendps_avx(auVar39,auVar40,2);
      auVar7 = vblendps_avx(auVar38,auVar39,2);
      auVar8 = vblendps_avx(auVar40,auVar38,2);
      auVar6 = vblendps_avx(auVar38,auVar6,3);
      fVar35 = *(float *)(param_2 + 4 + lVar19);
      auVar7 = vblendps_avx(auVar40,auVar7,3);
      fVar31 = *(float *)(param_2 + lVar19);
      auVar8 = vblendps_avx(auVar39,auVar8,3);
      fVar32 = *(float *)(param_2 + 0x18 + lVar19);
      fVar52 = auVar7._0_4_;
      fVar53 = auVar7._4_4_;
      fVar54 = auVar7._8_4_;
      fVar55 = auVar7._12_4_;
      fVar49 = auVar8._0_4_;
      fVar50 = auVar8._4_4_;
      fVar51 = auVar8._8_4_;
      fVar24 = auVar8._12_4_;
      fVar33 = *(float *)(param_2 + 0x14 + lVar19);
      fVar26 = auVar6._0_4_;
      fVar41 = fVar33 * fVar26 + fVar32 * fVar49 + fVar52 * fVar31;
      fVar28 = auVar6._4_4_;
      fVar43 = fVar33 * fVar28 + fVar32 * fVar50 + fVar53 * fVar31;
      fVar29 = auVar6._8_4_;
      fVar44 = fVar33 * fVar29 + fVar32 * fVar51 + fVar54 * fVar31;
      fVar30 = auVar6._12_4_;
      fVar45 = fVar33 * fVar30 + fVar32 * fVar24 + fVar55 * fVar31;
      fVar31 = *(float *)(param_2 + 0x10 + lVar19);
      fVar22 = *(float *)(param_2 + 8 + lVar19);
      fVar46 = fVar31 * fVar26 + fVar49 * fVar35 + fVar32 * fVar52;
      fVar47 = fVar31 * fVar28 + fVar50 * fVar35 + fVar32 * fVar53;
      fVar48 = fVar31 * fVar29 + fVar51 * fVar35 + fVar32 * fVar54;
      fVar32 = fVar31 * fVar30 + fVar24 * fVar35 + fVar32 * fVar55;
      auVar7 = vshufps_avx(auVar38,auVar38,0x55);
      fVar49 = fVar26 * fVar22 + fVar31 * fVar49 + fVar52 * fVar33;
      fVar50 = fVar28 * fVar22 + fVar31 * fVar50 + fVar53 * fVar33;
      fVar51 = fVar29 * fVar22 + fVar31 * fVar51 + fVar54 * fVar33;
      fVar31 = fVar30 * fVar22 + fVar31 * fVar24 + fVar55 * fVar33;
      auVar8 = vshufps_avx(auVar38,auVar38,0xaa);
      auVar9 = vshufps_avx(auVar39,auVar39,0x55);
      auVar42 = vshufps_avx(auVar40,auVar40,0xaa);
      auVar10 = vshufps_avx(auVar39,auVar39,0xaa);
      auVar11 = vshufps_avx(auVar40,auVar40,0x55);
      fVar35 = auVar37._0_4_;
      auVar12 = vshufps_avx(auVar37,auVar37,0x55);
      auVar13 = vshufps_avx(auVar37,auVar37,0xaa);
      auVar27._0_4_ = (uint)fVar23 ^ (uint)fVar18;
      auVar27._4_4_ = (uint)fVar25 ^ (uint)fVar18;
      auVar27._8_4_ = (uint)fVar34 ^ (uint)fVar18;
      auVar27._12_4_ = (uint)fVar36 ^ (uint)fVar18;
      auVar6 = vshufpd_avx(auVar21,auVar27,1);
      pfVar1 = (float *)(param_4 + 0x10 + lVar19);
      auVar37 = vblendps_avx(auVar27,auVar21,10);
      auVar21 = vblendps_avx(auVar27,auVar21,9);
      auVar37 = vshufps_avx(auVar37,auVar37,0x1b);
      auVar21 = vshufps_avx(auVar21,auVar21,0xb1);
      auVar20._0_4_ =
           fVar5 * (param_7 * ((fVar49 * auVar8._0_4_ +
                               fVar46 * auVar10._0_4_ + fVar41 * auVar42._0_4_) * auVar13._0_4_ +
                              (fVar49 * auVar11._0_4_ +
                              fVar46 * auVar7._0_4_ + fVar41 * auVar9._0_4_) * auVar12._0_4_ +
                              fVar35 * (fVar49 * auVar39._0_4_ +
                                       fVar46 * auVar40._0_4_ + fVar41 * auVar38._0_4_)) + *pfVar1);
      auVar20._4_4_ =
           fVar5 * (param_7 * ((fVar50 * auVar8._4_4_ +
                               fVar47 * auVar10._4_4_ + fVar43 * auVar42._4_4_) * auVar13._4_4_ +
                              (fVar50 * auVar11._4_4_ +
                              fVar47 * auVar7._4_4_ + fVar43 * auVar9._4_4_) * auVar12._4_4_ +
                              fVar35 * (fVar50 * auVar39._0_4_ +
                                       fVar47 * auVar40._0_4_ + fVar43 * auVar38._0_4_)) + pfVar1[1]
                   );
      auVar20._8_4_ =
           fVar5 * (param_7 * ((fVar51 * auVar8._8_4_ +
                               fVar48 * auVar10._8_4_ + fVar44 * auVar42._8_4_) * auVar13._8_4_ +
                              (fVar51 * auVar11._8_4_ +
                              fVar48 * auVar7._8_4_ + fVar44 * auVar9._8_4_) * auVar12._8_4_ +
                              fVar35 * (fVar51 * auVar39._0_4_ +
                                       fVar48 * auVar40._0_4_ + fVar44 * auVar38._0_4_)) + pfVar1[2]
                   );
      auVar20._12_4_ =
           fVar5 * (param_7 * ((fVar31 * auVar8._12_4_ +
                               fVar32 * auVar10._12_4_ + fVar45 * auVar42._12_4_) * auVar13._12_4_ +
                              (fVar31 * auVar11._12_4_ +
                              fVar32 * auVar7._12_4_ + fVar45 * auVar9._12_4_) * auVar12._12_4_ +
                              fVar35 * (fVar31 * auVar39._0_4_ +
                                       fVar32 * auVar40._0_4_ + fVar45 * auVar38._0_4_)) + pfVar1[3]
                   );
      auVar7 = vshufps_avx(auVar20,auVar20,0x55);
      auVar8 = vshufps_avx(auVar20,auVar20,0xaa);
      fVar49 = auVar8._0_4_ * auVar21._0_4_ +
               auVar7._0_4_ * auVar6._0_4_ +
               auVar20._0_4_ * auVar37._0_4_ + -(fVar18 * fVar23) + fVar23;
      fVar50 = auVar8._4_4_ * auVar21._4_4_ +
               auVar7._4_4_ * auVar6._4_4_ +
               auVar20._0_4_ * auVar37._4_4_ + -(fVar18 * fVar25) + fVar25;
      fVar34 = auVar8._8_4_ * auVar21._8_4_ +
               auVar7._8_4_ * auVar6._8_4_ +
               auVar20._0_4_ * auVar37._8_4_ + -(fVar18 * fVar34) + fVar34;
      fVar36 = auVar8._12_4_ * auVar21._12_4_ +
               auVar7._12_4_ * auVar6._12_4_ +
               auVar20._0_4_ * auVar37._12_4_ + -(fVar18 * fVar36) + fVar36;
      auVar21._0_4_ = fVar49 * fVar49;
      auVar21._4_4_ = fVar50 * fVar50;
      auVar21._8_4_ = fVar34 * fVar34;
      auVar21._12_4_ = fVar36 * fVar36;
      auVar37 = vhaddps_avx(auVar21,auVar21);
      auVar37 = vhaddps_avx(auVar37,auVar37);
      auVar21 = vrsqrtps_avx(auVar37);
      fVar35 = auVar21._0_4_;
      fVar31 = auVar21._4_4_;
      fVar32 = auVar21._8_4_;
      fVar33 = auVar21._12_4_;
      fVar22 = _DAT_145fc6f08 * fVar31 * fVar31 * auVar37._4_4_ - _DAT_145fc6f08;
      fVar23 = _DAT_145fc6f08 * fVar32 * fVar32 * auVar37._8_4_ - _DAT_145fc6f08;
      fVar25 = _DAT_145fc6f08 * fVar33 * fVar33 * auVar37._12_4_ - _DAT_145fc6f08;
      pfVar1 = (float *)(param_8 + 0x10 + lVar19);
      *pfVar1 = fVar49 * ((_DAT_145fc6f08 * fVar35 * fVar35 * auVar37._0_4_ - _DAT_145fc6f08) *
                          fVar35 + fVar35);
      pfVar1[1] = fVar50 * (fVar22 * fVar31 + fVar31);
      pfVar1[2] = fVar34 * (fVar23 * fVar32 + fVar32);
      pfVar1[3] = fVar36 * (fVar25 * fVar33 + fVar33);
      lVar19 = lVar19 + 0x20;
    } while ((ulonglong)param_1 << 5 != lVar19);
  }
  return;
}

