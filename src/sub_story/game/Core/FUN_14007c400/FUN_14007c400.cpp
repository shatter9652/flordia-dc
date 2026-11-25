// Recovered from game_scarlett_master.exe (GTA VI, Xbox Series X, PE32+ x64)
// Address: 14007c400  size: 206 bytes
// Name:    FUN_14007c400
// Subsystem: core
//
// Referenced strings (0 in this body, 0 including direct callees):
// Callees: 
//
// Generated decompilation. Formatting follows MiscRef/GTAVSRC conventions;
// identifiers are recovered, not original. See ../../../README.md.

#include "gta6decomp/rage_types.h"


void FUN_14007c400(longlong param_1,undefined8 param_2,uint param_3,float param_4,float param_5)

{
  uint *puVar1;
  float *pfVar2;
  uint uVar3;
  uint uVar4;
  undefined1 auVar5 [16];
  undefined8 uVar6;
  ulonglong uVar7;
  ulonglong uVar8;
  ulonglong uVar9;
  longlong lVar10;
  longlong lVar11;
  longlong lVar12;
  float fVar13;
  undefined1 auVar14 [16];
  undefined1 auVar15 [32];
  undefined1 auVar17 [64];
  float fVar18;
  float fVar19;
  float fVar20;
  float fVar21;
  float fVar22;
  float fVar23;
  float fVar24;
  float fVar25;
  float fVar26;
  float fVar27;
  float fVar28;
  float fVar29;
  float fVar30;
  float fVar31;
  float fVar32;
  float fVar33;
  undefined1 auVar34 [32];
  undefined1 auVar35 [32];
  undefined1 auVar16 [32];
  
  if ((*(uint *)(param_1 + 0x24) < param_3) && (*(uint *)(param_1 + 0x20) < param_3)) {
    lVar12 = (ulonglong)param_3 << 2;
    uVar6 = func_0x000144d9c140(4,lVar12);
    if ((ulonglong)*(uint *)(param_1 + 0x24) != 0) {
      func_0x000145f40560(uVar6,*(undefined8 *)(param_1 + 0x28),
                          (ulonglong)*(uint *)(param_1 + 0x24) << 2);
    }
    if (*(longlong *)(param_1 + 0x28) != 0) {
      func_0x000144d9c130();
    }
    *(undefined8 *)(param_1 + 0x28) = uVar6;
    *(uint *)(param_1 + 0x20) = param_3;
  }
  else {
    uVar6 = *(undefined8 *)(param_1 + 0x28);
    lVar12 = (ulonglong)param_3 << 2;
  }
  *(uint *)(param_1 + 0x24) = param_3;
  func_0x000145f40560(uVar6,param_2,lVar12);
  uVar3 = *(uint *)(param_1 + 4);
  uVar8 = (ulonglong)uVar3;
  lVar12 = *(longlong *)(param_1 + 8);
  auVar14 = vminss_avx(ZEXT416(*(uint *)(lVar12 + 4)),
                       ZEXT416(*(uint *)(lVar12 + 4 + (ulonglong)(uVar3 - 1) * 0x14)));
  uVar4 = *(uint *)(param_1 + 0x24);
  uVar7 = (ulonglong)uVar4;
  fVar13 = auVar14._0_4_;
  if (uVar7 == 0) {
    if (uVar3 == 0) {
      uVar8 = 0;
      fVar18 = 0.0;
    }
    else {
      fVar18 = 0.0;
      lVar10 = 0;
      do {
        pfVar2 = (float *)(lVar12 + 4 + lVar10);
        lVar10 = lVar10 + 0x14;
        fVar18 = param_5 * (*pfVar2 - fVar13) + (fVar13 - param_4) + fVar18;
      } while (uVar8 * 0x14 != lVar10);
    }
  }
  else {
    lVar10 = *(longlong *)(param_1 + 0x28);
    param_4 = fVar13 - param_4;
    uVar8 = uVar7;
    if (uVar4 < 0x10) {
      auVar17 = ZEXT1264(ZEXT812(0));
      uVar9 = 0;
    }
    else {
      auVar15._4_4_ = fVar13;
      auVar15._0_4_ = fVar13;
      auVar15._8_4_ = fVar13;
      auVar15._12_4_ = fVar13;
      auVar15._16_4_ = fVar13;
      auVar15._20_4_ = fVar13;
      auVar15._24_4_ = fVar13;
      auVar15._28_4_ = fVar13;
      fVar18 = 0.0;
      fVar19 = 0.0;
      fVar20 = 0.0;
      fVar21 = 0.0;
      fVar22 = 0.0;
      fVar23 = 0.0;
      fVar24 = 0.0;
      fVar25 = 0.0;
      lVar11 = 0;
      fVar26 = 0.0;
      fVar27 = 0.0;
      fVar28 = 0.0;
      fVar29 = 0.0;
      fVar30 = 0.0;
      fVar31 = 0.0;
      fVar32 = 0.0;
      fVar33 = 0.0;
      uVar9 = (ulonglong)(uVar4 & 0xfffffff0);
      do {
        auVar14 = vinsertps_avx(ZEXT416(*(uint *)(lVar12 + 4 +
                                                 (ulonglong)*(uint *)(lVar10 + 0x10 + lVar11) * 0x14
                                                 )),
                                ZEXT416(*(uint *)(lVar12 + 4 +
                                                 (ulonglong)*(uint *)(lVar10 + 0x14 + lVar11) * 0x14
                                                 )),0x10);
        auVar14 = vinsertps_avx(auVar14,ZEXT416(*(uint *)(lVar12 + 4 +
                                                         (ulonglong)
                                                         *(uint *)(lVar10 + 0x18 + lVar11) * 0x14)),
                                0x20);
        auVar14 = vinsertps_avx(auVar14,ZEXT416(*(uint *)(lVar12 + 4 +
                                                         (ulonglong)
                                                         *(uint *)(lVar10 + 0x1c + lVar11) * 0x14)),
                                0x30);
        auVar5 = vinsertps_avx(ZEXT416(*(uint *)(lVar12 + 4 +
                                                (ulonglong)*(uint *)(lVar10 + lVar11) * 0x14)),
                               ZEXT416(*(uint *)(lVar12 + 4 +
                                                (ulonglong)*(uint *)(lVar10 + 4 + lVar11) * 0x14)),
                               0x10);
        auVar5 = vinsertps_avx(auVar5,ZEXT416(*(uint *)(lVar12 + 4 +
                                                       (ulonglong)*(uint *)(lVar10 + 8 + lVar11) *
                                                       0x14)),0x20);
        auVar5 = vinsertps_avx(auVar5,ZEXT416(*(uint *)(lVar12 + 4 +
                                                       (ulonglong)*(uint *)(lVar10 + 0xc + lVar11) *
                                                       0x14)),0x30);
        auVar34._16_16_ = auVar14;
        auVar34._0_16_ = auVar5;
        auVar14 = vinsertps_avx(ZEXT416(*(uint *)(lVar12 + 4 +
                                                 (ulonglong)*(uint *)(lVar10 + 0x30 + lVar11) * 0x14
                                                 )),
                                ZEXT416(*(uint *)(lVar12 + 4 +
                                                 (ulonglong)*(uint *)(lVar10 + 0x34 + lVar11) * 0x14
                                                 )),0x10);
        auVar34 = vsubps_avx(auVar34,auVar15);
        fVar18 = param_5 * auVar34._0_4_ + param_4 + fVar18;
        fVar19 = param_5 * auVar34._4_4_ + param_4 + fVar19;
        fVar20 = param_5 * auVar34._8_4_ + param_4 + fVar20;
        fVar21 = param_5 * auVar34._12_4_ + param_4 + fVar21;
        fVar22 = param_5 * auVar34._16_4_ + param_4 + fVar22;
        fVar23 = param_5 * auVar34._20_4_ + param_4 + fVar23;
        fVar24 = param_5 * auVar34._24_4_ + param_4 + fVar24;
        fVar25 = param_5 * auVar34._28_4_ + param_4 + fVar25;
        auVar14 = vinsertps_avx(auVar14,ZEXT416(*(uint *)(lVar12 + 4 +
                                                         (ulonglong)
                                                         *(uint *)(lVar10 + 0x38 + lVar11) * 0x14)),
                                0x20);
        auVar14 = vinsertps_avx(auVar14,ZEXT416(*(uint *)(lVar12 + 4 +
                                                         (ulonglong)
                                                         *(uint *)(lVar10 + 0x3c + lVar11) * 0x14)),
                                0x30);
        auVar5 = vinsertps_avx(ZEXT416(*(uint *)(lVar12 + 4 +
                                                (ulonglong)*(uint *)(lVar10 + 0x20 + lVar11) * 0x14)
                                      ),ZEXT416(*(uint *)(lVar12 + 4 +
                                                         (ulonglong)
                                                         *(uint *)(lVar10 + 0x24 + lVar11) * 0x14)),
                               0x10);
        auVar5 = vinsertps_avx(auVar5,ZEXT416(*(uint *)(lVar12 + 4 +
                                                       (ulonglong)*(uint *)(lVar10 + 0x28 + lVar11)
                                                       * 0x14)),0x20);
        puVar1 = (uint *)(lVar10 + 0x2c + lVar11);
        lVar11 = lVar11 + 0x40;
        auVar5 = vinsertps_avx(auVar5,ZEXT416(*(uint *)(lVar12 + 4 + (ulonglong)*puVar1 * 0x14)),
                               0x30);
        auVar35._16_16_ = auVar14;
        auVar35._0_16_ = auVar5;
        auVar34 = vsubps_avx(auVar35,auVar15);
        fVar26 = param_5 * auVar34._0_4_ + param_4 + fVar26;
        fVar27 = param_5 * auVar34._4_4_ + param_4 + fVar27;
        fVar28 = param_5 * auVar34._8_4_ + param_4 + fVar28;
        fVar29 = param_5 * auVar34._12_4_ + param_4 + fVar29;
        fVar30 = param_5 * auVar34._16_4_ + param_4 + fVar30;
        fVar31 = param_5 * auVar34._20_4_ + param_4 + fVar31;
        fVar32 = param_5 * auVar34._24_4_ + param_4 + fVar32;
        fVar33 = param_5 * auVar34._28_4_ + param_4 + fVar33;
      } while ((ulonglong)(uVar4 >> 4) << 6 != lVar11);
      auVar14._0_4_ = fVar26 + fVar18;
      auVar14._4_4_ = fVar27 + fVar19;
      auVar14._8_4_ = fVar28 + fVar20;
      auVar14._12_4_ = fVar29 + fVar21;
      auVar16._16_4_ = fVar30 + fVar22;
      auVar16._0_16_ = auVar14;
      auVar16._20_4_ = fVar31 + fVar23;
      auVar16._24_4_ = fVar32 + fVar24;
      auVar16._28_4_ = fVar33 + fVar25;
      auVar14 = vhaddps_avx(auVar16._16_16_,auVar14);
      auVar14 = vhaddps_avx(auVar14,auVar14);
      auVar14 = vhaddps_avx(auVar14,auVar14);
      fVar18 = auVar14._0_4_;
      auVar17 = ZEXT1664(auVar14);
      if ((uVar4 & 0xfffffff0) == uVar4) goto code_r0x000144ef3185;
    }
    do {
      lVar11 = uVar9 * 4;
      uVar9 = uVar9 + 1;
      fVar18 = param_5 * (*(float *)(lVar12 + 4 + (ulonglong)*(uint *)(lVar10 + lVar11) * 0x14) -
                         fVar13) + param_4 + auVar17._0_4_;
      auVar17 = ZEXT464((uint)fVar18);
    } while (uVar7 != uVar9);
  }
code_r0x000144ef3185:
  *(float *)(param_1 + 0x74) = fVar18 / (float)uVar8;
  return;
}

