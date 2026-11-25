// Recovered from game_scarlett_master.exe (GTA VI, Xbox Series X, PE32+ x64)
// Address: 140106a40  size: 1413 bytes
// Name:    FUN_140106a40
// Subsystem: core
//
// Referenced strings (0 in this body, 0 including direct callees):
// Callees: FUN_1450f2210, FUN_14026db50, FUN_1401054b0, FUN_144fad5f0
//
// Generated decompilation. Formatting follows MiscRef/GTAVSRC conventions;
// identifiers are recovered, not original. See ../../../README.md.

#include "gta6decomp/rage_types.h"


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_140106a40(longlong param_1,longlong param_2,longlong param_3)

{
  float fVar1;
  char cVar2;
  undefined4 uVar3;
  uint uVar4;
  uint uVar5;
  undefined8 uVar6;
  undefined1 (*pauVar7) [16];
  float *pfVar8;
  float *pfVar9;
  char cVar10;
  char cVar11;
  longlong lVar12;
  longlong lVar13;
  ulonglong uVar14;
  ulonglong uVar15;
  ulonglong uVar16;
  undefined1 auVar17 [16];
  undefined1 auVar18 [16];
  undefined1 auVar19 [16];
  undefined1 auVar20 [16];
  undefined1 auVar21 [16];
  undefined1 auVar22 [16];
  float fVar23;
  float fVar24;
  undefined1 auVar25 [16];
  undefined1 auVar26 [16];
  undefined1 auVar27 [64];
  undefined1 auVar28 [16];
  undefined1 auVar29 [64];
  undefined1 auVar30 [16];
  undefined1 auVar31 [64];
  undefined1 auVar32 [16];
  undefined1 auVar33 [64];
  undefined1 auVar34 [16];
  undefined1 auVar35 [64];
  undefined1 auVar36 [16];
  undefined1 auVar37 [64];
  undefined1 auVar38 [64];
  undefined4 uStack_148;
  undefined1 auStack_144 [12];
  undefined4 uStack_138;
  undefined4 uStack_134;
  undefined8 uStack_130;
  undefined8 uStack_128;
  undefined4 uStack_120;
  undefined4 uStack_11c;
  undefined1 auStack_118 [8];
  float fStack_110;
  float fStack_10c;
  undefined4 uStack_108;
  undefined1 auStack_104 [12];
  undefined4 uStack_f8;
  undefined4 uStack_f4;
  undefined8 uStack_f0;
  undefined8 uStack_e8;
  undefined4 uStack_e0;
  undefined4 uStack_dc;
  undefined1 auStack_d8 [16];
  float fStack_c8;
  float fStack_c4;
  float fStack_c0;
  float fStack_bc;
  
  auStack_104._8_4_ = 0;
  auStack_104._0_8_ = SUB128(ZEXT812(0),4);
  uStack_138 = 0;
  uStack_f0 = 0;
  uStack_e8 = 0;
  uStack_dc = 0;
  uStack_108 = 0x3f800000;
  uStack_f4 = 0x3f800000;
  uStack_e0 = 0x3f800000;
  uStack_128 = 0;
  uStack_11c = 0;
  uStack_148 = 0x3f800000;
  uStack_134 = 0x3f800000;
  uStack_120 = 0x3f800000;
  uVar15 = *(longlong *)(param_3 + 0x28) + 0xfU & 0xfffffffffffffff0;
  auStack_144 = auStack_104;
  uStack_130 = uStack_f0;
  uStack_f8 = uStack_138;
  if ((*(ulonglong *)(param_3 + 0x38) < uVar15 + 0x70) ||
     (*(ulonglong *)(param_3 + 0x28) = uVar15 + 0x70, uVar15 == 0)) {
    uVar15 = 0;
  }
  else {
    FUN_1401054b0(uVar15);
  }
  func_0x000144fad540(uVar15);
  auVar33 = ZEXT464(*(uint *)(param_1 + 0x28));
  auVar31 = ZEXT464(*(uint *)(param_1 + 0x2c));
  auVar29 = ZEXT1664(*(undefined1 (*) [16])(param_1 + 0x70));
  auVar35 = ZEXT1664(*(undefined1 (*) [16])(param_1 + 0x80));
  lVar12 = FUN_1450f2210(param_2);
  uVar3 = *(undefined4 *)(param_2 + 0x9c);
  uVar6 = *(undefined8 *)(lVar12 + 0xf8);
  cVar2 = *(char *)(param_1 + 0x12a);
  lVar13 = func_0x000144e63d10(uVar3);
  uVar4 = *(uint *)(lVar13 + 0x220);
  cVar10 = func_0x000144e238f0(uVar3);
  fVar24 = *(float *)(param_1 + 0x90);
  uVar5 = *(uint *)(lVar13 + 0x234);
  auVar27 = ZEXT1664(CONCAT412(fVar24 * _UNK_14614f7fc,
                               CONCAT48(fVar24 * _UNK_14614f7f8,
                                        CONCAT44(fVar24 * _UNK_14614f7f4,fVar24 * _DAT_14614f7f0))))
  ;
  cVar11 = func_0x000144ed25d0(uVar3);
  auVar19 = auVar29._0_16_;
  auVar30 = auVar31._0_16_;
  auVar34 = auVar35._0_16_;
  auVar32 = auVar33._0_16_;
  auVar17 = auVar19;
  if (cVar11 == '\0') {
    lVar13 = *(longlong *)(*(longlong *)(lVar12 + 8) + 0x20);
    auVar19 = vsubps_avx(*(undefined1 (*) [16])(lVar13 + 0x20),*(undefined1 (*) [16])(lVar13 + 0x30)
                        );
    auVar37 = ZEXT1664(auVar19);
    auVar17 = vcvtps2ph_f16c(ZEXT416((uint)_DAT_145fc6f48),3);
    auVar19 = vshufps_avx(auVar19,auVar19,0x55);
    auVar38 = ZEXT1664(auVar19);
    FUN_14026db50(&fStack_c8,lVar12,auVar17._0_2_ | 0x10000);
    auVar30 = auVar31._0_16_;
    auVar34 = auVar35._0_16_;
    auVar32 = auVar33._0_16_;
    auVar19 = vrcpps_avx(auVar38._0_16_);
    auVar17._0_4_ = fStack_c8 * fStack_c8;
    auVar17._4_4_ = fStack_c4 * fStack_c4;
    auVar17._8_4_ = fStack_c0 * fStack_c0;
    auVar17._12_4_ = fStack_bc * fStack_bc;
    auVar36 = vhaddps_avx(auVar17,auVar17);
    auVar18._4_4_ = _DAT_145fc6ed8;
    auVar18._0_4_ = _DAT_145fc6ed8;
    auVar18._8_4_ = _DAT_145fc6ed8;
    auVar18._12_4_ = _DAT_145fc6ed8;
    fVar24 = auVar19._0_4_;
    auVar19 = vrsqrtss_avx(auVar36,auVar36);
    fVar23 = auVar19._0_4_;
    auVar19 = vcmpss_avx(ZEXT416(_DAT_146159bfc),auVar36,2);
    auVar17 = vmovshdup_avx(auVar37._0_16_);
    auVar17 = vcmpss_avx(auVar17,ZEXT816(0),0);
    fVar24 = (float)(~auVar17._0_4_ &
                    (uint)((-((fVar24 * auVar38._0_4_ - _DAT_145fc6ed8) * fVar24) + fVar24) *
                          (float)(auVar19._0_4_ &
                                 (uint)(((fVar23 * fVar23 * auVar36._0_4_ * _DAT_145fc6f08 +
                                         _DAT_145fc6edc) * fVar23 + fVar23) * auVar36._0_4_))));
    if (_DAT_1492de978 - _DAT_1492de974 < _DAT_145fc6f00) {
      auVar19 = vcmpss_avx(ZEXT416((uint)_DAT_1492de978),ZEXT416((uint)fVar24),2);
      auVar19 = vblendvps_avx(auVar18,ZEXT416((uint)_DAT_1492de970),auVar19);
      fVar24 = auVar19._0_4_;
    }
    else {
      auVar19._0_4_ = (fVar24 - _DAT_1492de974) / (_DAT_1492de978 - _DAT_1492de974);
      auVar19._4_12_ = SUB6012((undefined1  [60])0x0,0);
      auVar17 = vminss_avx(ZEXT416((uint)_DAT_145fc6ed8),auVar19);
      auVar19 = vcmpss_avx(auVar19,ZEXT816(0),1);
      fVar24 = (float)(~auVar19._0_4_ & auVar17._0_4_) * (_DAT_1492de970 + _DAT_145fc6f48) +
               _DAT_145fc6ed8;
    }
    auVar27 = ZEXT1664(CONCAT412(fVar24 * auVar27._12_4_,
                                 CONCAT48(fVar24 * auVar27._8_4_,
                                          CONCAT44(fVar24 * auVar27._4_4_,fVar24 * auVar27._0_4_))))
    ;
    auVar19 = *(undefined1 (*) [16])(param_1 + 0x70);
    auVar17 = auVar29._0_16_;
  }
  auVar36._0_12_ = ZEXT812(0);
  auVar36._12_4_ = 0;
  if ((uVar5 >> 0x10 & 1) != 0) {
    auVar36 = _DAT_146161fa0;
  }
  auVar29 = ZEXT1664(auVar36);
  pauVar7 = *(undefined1 (**) [16])(param_3 + 0x10);
  auVar30 = vinsertps_avx(auVar19,auVar30,0x2b);
  uVar14 = 0x820441d35c8;
  if (cVar2 == '\0') {
    uVar14 = 0x820441d35c4;
  }
  uVar16 = uVar14 & 0x800441d21cc;
  if ((uVar4 >> 9 & 1) == 0) {
    uVar16 = uVar14;
  }
  pfVar8 = *(float **)(param_3 + 0x18);
  auVar21._0_4_ = auVar32._0_4_ ^ _DAT_145fc6f10;
  auVar21._4_4_ = auVar32._4_4_ ^ _DAT_145fc6f10;
  auVar21._8_4_ = auVar32._8_4_ ^ _DAT_145fc6f10;
  auVar21._12_4_ = auVar32._12_4_ ^ _DAT_145fc6f10;
  auVar32 = vshufps_avx(auVar19,auVar19,0x55);
  uVar14 = uVar16 | 0x20000000000;
  if (cVar10 == '\0') {
    uVar14 = uVar16;
  }
  auVar34 = vshufps_avx(auVar34,auVar21,4);
  auVar17 = vshufps_avx(auVar17,auVar21,4);
  fVar24 = auVar19._0_4_;
  auVar18 = vshufps_avx(auVar19,auVar19,0xaa);
  auVar20._0_4_ = auVar36._0_4_ + fVar24;
  auVar20._4_4_ = auVar36._4_4_ + auVar19._4_4_;
  auVar20._8_4_ = auVar36._8_4_ + auVar19._8_4_;
  auVar20._12_4_ = auVar36._12_4_ + auVar19._12_4_;
  auVar33 = ZEXT1664(CONCAT412(auVar34._12_4_ + auVar30._12_4_,
                               CONCAT48(auVar34._8_4_ + auVar30._8_4_,
                                        CONCAT44(auVar34._4_4_ + auVar30._4_4_,
                                                 auVar34._0_4_ + auVar30._0_4_))));
  auVar19 = *pauVar7;
  auVar22._0_4_ = auVar17._0_4_ + auVar30._0_4_;
  auVar22._4_4_ = auVar17._4_4_ + auVar30._4_4_;
  auVar22._8_4_ = auVar17._8_4_ + auVar30._8_4_;
  auVar22._12_4_ = auVar17._12_4_ + auVar30._12_4_;
  auVar17 = pauVar7[1];
  auVar30 = vshufps_avx(auVar20,auVar20,0x55);
  auVar28._0_4_ =
       *(float *)pauVar7[2] * auVar18._0_4_ +
       auVar17._0_4_ * auVar32._0_4_ + auVar19._0_4_ * fVar24 + *(float *)pauVar7[3];
  auVar28._4_4_ =
       *(float *)(pauVar7[2] + 4) * auVar18._4_4_ +
       auVar17._4_4_ * auVar32._4_4_ + auVar19._4_4_ * fVar24 + *(float *)(pauVar7[3] + 4);
  auVar28._8_4_ =
       *(float *)(pauVar7[2] + 8) * auVar18._8_4_ +
       auVar17._8_4_ * auVar32._8_4_ + auVar19._8_4_ * fVar24 + *(float *)(pauVar7[3] + 8);
  auVar28._12_4_ =
       *(float *)(pauVar7[2] + 0xc) * auVar18._12_4_ +
       auVar17._12_4_ * auVar32._12_4_ + auVar19._12_4_ * fVar24 + *(float *)(pauVar7[3] + 0xc);
  auVar32 = vshufps_avx(auVar20,auVar20,0xaa);
  auVar34 = vshufps_avx(auVar22,auVar22,0x55);
  auVar18 = vshufps_avx(auVar22,auVar22,0xaa);
  auVar21 = vsubps_avx(auVar28,auVar27._0_16_);
  auStack_d8._0_4_ =
       *(float *)pauVar7[2] * auVar18._0_4_ +
       auVar17._0_4_ * auVar34._0_4_ + auVar19._0_4_ * auVar22._0_4_ + *(float *)pauVar7[3];
  auStack_d8._4_4_ =
       *(float *)(pauVar7[2] + 4) * auVar18._4_4_ +
       auVar17._4_4_ * auVar34._4_4_ + auVar19._4_4_ * auVar22._0_4_ + *(float *)(pauVar7[3] + 4);
  auStack_d8._8_4_ =
       *(float *)(pauVar7[2] + 8) * auVar18._8_4_ +
       auVar17._8_4_ * auVar34._8_4_ + auVar19._8_4_ * auVar22._0_4_ + *(float *)(pauVar7[3] + 8);
  auStack_d8._12_4_ =
       *(float *)(pauVar7[2] + 0xc) * auVar18._12_4_ +
       auVar17._12_4_ * auVar34._12_4_ +
       auVar19._12_4_ * auVar22._0_4_ + *(float *)(pauVar7[3] + 0xc);
  auVar35 = ZEXT1664(auStack_d8);
  auVar19 = vblendps_avx(auVar21,auStack_d8,3);
  auVar19 = vsubps_avx(auVar19,auVar36);
  auVar31 = ZEXT1664(auVar19);
  auStack_118._4_4_ =
       auVar32._4_4_ * pfVar8[9] +
       auVar30._4_4_ * pfVar8[5] + pfVar8[1] * auVar20._0_4_ + pfVar8[0xd];
  auStack_118._0_4_ =
       auVar32._0_4_ * pfVar8[8] + auVar30._0_4_ * pfVar8[4] + *pfVar8 * auVar20._0_4_ + pfVar8[0xc]
  ;
  fStack_110 = auVar32._8_4_ * pfVar8[10] +
               auVar30._8_4_ * pfVar8[6] + pfVar8[2] * auVar20._0_4_ + pfVar8[0xe];
  fStack_10c = auVar32._12_4_ * pfVar8[0xb] +
               auVar30._12_4_ * pfVar8[7] + pfVar8[3] * auVar20._0_4_ + pfVar8[0xf];
  FUN_144fad5f0(param_3,0,uVar15,&uStack_108,&uStack_148,uVar6,uVar14,0);
  auStack_d8 = auVar31._0_16_;
  _auStack_118 = auVar35._0_16_;
  FUN_144fad5f0(param_3,1,uVar15,&uStack_108,&uStack_148,uVar6,uVar14,0);
  pfVar8 = *(float **)(param_3 + 0x10);
  fVar24 = *(float *)(param_1 + 0x80);
  fVar23 = *(float *)(param_1 + 0x84);
  fVar1 = *(float *)(param_1 + 0x88);
  pfVar9 = *(float **)(param_3 + 0x18);
  auVar19 = *(undefined1 (*) [16])(pfVar8 + 0xc);
  auVar17 = *(undefined1 (*) [16])(pfVar8 + 4);
  auVar30 = *(undefined1 (*) [16])(pfVar8 + 8);
  auVar26._0_4_ = auVar29._0_4_ + *(float *)(param_1 + 0x80);
  auVar26._4_4_ = auVar29._4_4_ + *(float *)(param_1 + 0x84);
  auVar26._8_4_ = auVar29._8_4_ + *(float *)(param_1 + 0x88);
  auVar26._12_4_ = auVar29._12_4_ + *(float *)(param_1 + 0x8c);
  auVar25._0_4_ = auVar30._0_4_ * fVar1 + auVar17._0_4_ * fVar23 + *pfVar8 * fVar24 + auVar19._0_4_;
  auVar25._4_4_ =
       auVar30._4_4_ * fVar1 + auVar17._4_4_ * fVar23 + pfVar8[1] * fVar24 + auVar19._4_4_;
  auVar25._8_4_ =
       auVar30._8_4_ * fVar1 + auVar17._8_4_ * fVar23 + pfVar8[2] * fVar24 + auVar19._8_4_;
  auVar25._12_4_ =
       auVar30._12_4_ * fVar1 + auVar17._12_4_ * fVar23 + pfVar8[3] * fVar24 + auVar19._12_4_;
  auVar32 = vshufps_avx(auVar26,auVar26,0x55);
  fVar24 = auVar33._0_4_;
  auVar34 = vshufps_avx(auVar26,auVar26,0xaa);
  auVar21 = vsubps_avx(auVar25,auVar27._0_16_);
  auVar18 = auVar33._0_16_;
  auVar36 = vshufps_avx(auVar18,auVar18,0x55);
  auVar18 = vshufps_avx(auVar18,auVar18,0xaa);
  auStack_d8._0_4_ =
       auVar30._0_4_ * auVar18._0_4_ +
       auVar17._0_4_ * auVar36._0_4_ + *pfVar8 * fVar24 + auVar19._0_4_;
  auStack_d8._4_4_ =
       auVar30._4_4_ * auVar18._4_4_ +
       auVar17._4_4_ * auVar36._4_4_ + pfVar8[1] * fVar24 + auVar19._4_4_;
  auStack_d8._8_4_ =
       auVar30._8_4_ * auVar18._8_4_ +
       auVar17._8_4_ * auVar36._8_4_ + pfVar8[2] * fVar24 + auVar19._8_4_;
  auStack_d8._12_4_ =
       auVar30._12_4_ * auVar18._12_4_ +
       auVar17._12_4_ * auVar36._12_4_ + pfVar8[3] * fVar24 + auVar19._12_4_;
  auVar31 = ZEXT1664(auStack_d8);
  auVar19 = vblendps_avx(auVar21,auStack_d8,3);
  auVar19 = vsubps_avx(auVar19,auVar29._0_16_);
  auVar27 = ZEXT1664(auVar19);
  auStack_118._4_4_ =
       auVar34._4_4_ * pfVar9[9] +
       auVar32._4_4_ * pfVar9[5] + pfVar9[1] * auVar26._0_4_ + pfVar9[0xd];
  auStack_118._0_4_ =
       auVar34._0_4_ * pfVar9[8] + auVar32._0_4_ * pfVar9[4] + *pfVar9 * auVar26._0_4_ + pfVar9[0xc]
  ;
  fStack_110 = auVar34._8_4_ * pfVar9[10] +
               auVar32._8_4_ * pfVar9[6] + pfVar9[2] * auVar26._0_4_ + pfVar9[0xe];
  fStack_10c = auVar34._12_4_ * pfVar9[0xb] +
               auVar32._12_4_ * pfVar9[7] + pfVar9[3] * auVar26._0_4_ + pfVar9[0xf];
  FUN_144fad5f0(param_3,2,uVar15,&uStack_108,&uStack_148,uVar6,uVar14,0);
  auStack_d8 = auVar27._0_16_;
  _auStack_118 = auVar31._0_16_;
  FUN_144fad5f0(param_3,3,uVar15,&uStack_108,&uStack_148,uVar6,uVar14,0);
  return;
}

