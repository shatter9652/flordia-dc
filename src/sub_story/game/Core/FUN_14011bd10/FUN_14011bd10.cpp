// Recovered from game_scarlett_master.exe (GTA VI, Xbox Series X, PE32+ x64)
// Address: 14011bd10  size: 28 bytes
// Name:    FUN_14011bd10
// Subsystem: core
//
// Referenced strings (0 in this body, 0 including direct callees):
// Callees: 
//
// Generated decompilation. Formatting follows MiscRef/GTAVSRC conventions;
// identifiers are recovered, not original. See ../../../README.md.

#include "gta6decomp/rage_types.h"


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_14011bd10(void)

{
  float fVar1;
  float fVar2;
  float fVar3;
  float fVar4;
  float fVar5;
  float fVar6;
  undefined1 auVar7 [16];
  short sVar8;
  short sVar9;
  uint uVar10;
  uint uVar11;
  float *pfVar12;
  longlong lVar13;
  undefined1 auVar14 [16];
  float fVar15;
  float fVar16;
  longlong *plVar17;
  undefined8 uVar18;
  undefined8 uVar19;
  undefined1 auVar20 [32];
  ulonglong uVar21;
  char cVar22;
  int iVar23;
  uint uVar24;
  longlong lVar25;
  ulonglong uVar26;
  ulonglong uVar27;
  undefined1 (*pauVar28) [16];
  longlong lVar29;
  int iVar30;
  longlong lVar31;
  longlong lVar32;
  longlong *plVar33;
  longlong lVar34;
  uint uVar35;
  bool bVar36;
  undefined1 auVar37 [16];
  undefined1 auVar38 [16];
  undefined1 auVar39 [16];
  undefined1 auVar40 [16];
  undefined1 auVar41 [16];
  undefined1 auVar42 [64];
  undefined1 auVar43 [64];
  undefined1 auVar44 [64];
  undefined1 auVar45 [64];
  undefined1 auVar46 [64];
  undefined1 in_ZMM11 [64];
  undefined1 auVar47 [64];
  undefined1 auVar48 [16];
  undefined1 auVar50 [64];
  undefined1 in_ZMM14 [64];
  undefined1 auVar51 [64];
  undefined1 in_ZMM15 [64];
  undefined1 auVar52 [64];
  undefined1 auVar53 [64];
  float fStack_1e8;
  float fStack_1e4;
  float fStack_1e0;
  float fStack_1dc;
  float fStack_1d8;
  float fStack_1d4;
  float fStack_1d0;
  float fStack_1cc;
  undefined8 uStack_1a8;
  undefined8 uStack_1a0;
  undefined8 uStack_198;
  undefined8 uStack_190;
  undefined1 auStack_188 [16];
  float fStack_178;
  float fStack_174;
  float fStack_170;
  float fStack_16c;
  undefined1 auStack_168 [8];
  float fStack_160;
  float fStack_15c;
  undefined1 auStack_158 [8];
  float fStack_150;
  float fStack_14c;
  undefined8 uStack_148;
  undefined8 uStack_140;
  undefined8 uStack_138;
  undefined8 uStack_130;
  undefined8 uStack_128;
  undefined8 uStack_120;
  undefined8 uStack_118;
  undefined8 uStack_110;
  undefined1 auStack_108 [32];
  undefined1 auStack_98 [16];
  undefined1 auStack_68 [16];
  undefined1 auStack_58 [16];
  longlong lVar54;
  undefined1 auVar49 [64];
  
  cVar22 = func_0x000144fe7070();
  if (cVar22 == '\0') {
    return;
  }
  auStack_58 = in_ZMM15._0_16_;
  auStack_68 = in_ZMM14._0_16_;
  auStack_98 = in_ZMM11._0_16_;
  FUN_140004b40(0x147f56698);
  plVar17 = _DAT_14a04ec10;
  uVar10 = *(uint *)((longlong)_DAT_14a04ec10 + 0xc);
  if (uVar10 == 0) {
    uVar35 = 0;
code_r0x000144fcb43b:
    if (uVar35 != uVar10) {
      auVar42 = ZEXT464(_DAT_146159ef4);
      auVar44 = ZEXT1664(CONCAT412(_DAT_145fc6f08,
                                   CONCAT48(_DAT_145fc6f08,CONCAT44(_DAT_145fc6f08,_DAT_145fc6f08)))
                        );
      auVar45 = ZEXT464(_DAT_145fc6ed8);
      auVar46 = ZEXT864(_DAT_146159bc0);
      auVar43 = ZEXT1264(ZEXT812(0));
      do {
        uVar27 = (ulonglong)((int)plVar17[1] * uVar35);
        lVar54 = *plVar17 + uVar27;
        if (((*(int *)(*plVar17 + 0xc98 + uVar27) != 0) || ((*(uint *)(lVar54 + 0xca0) & 4) != 0))
           && (auVar42._0_4_ <= *(float *)(lVar54 + 0xc84))) {
          iVar30 = (int)*(short *)(lVar54 + 0xb4a);
          if ((*(short *)(lVar54 + 0xb48) != -1 && iVar30 != -1) &&
             (-1 < *(short *)(lVar54 + 0xb4a))) {
            plVar33 = (longlong *)
                      ((ulonglong)(uint)(int)*(short *)(lVar54 + 0xb48) * 0x40 + _DAT_148d7a9f8);
            lVar25 = *(longlong *)(*plVar33 + 0x38);
            auVar42 = ZEXT1664(auVar42._0_16_);
            auVar43 = ZEXT1664(auVar43._0_16_);
            auVar44 = ZEXT1664(auVar44._0_16_);
            auVar45 = ZEXT1664(auVar45._0_16_);
            auVar46 = ZEXT1664(auVar46._0_16_);
            iVar23 = func_0x000144fcbac0(lVar25);
            if (iVar30 < iVar23) {
              pfVar12 = *(float **)(lVar54 + 0xc28);
              auVar7 = **(undefined1 (**) [16])(lVar54 + 0xc30);
              auVar47 = ZEXT1664(auVar7);
              auVar37 = auVar43._0_16_;
              auVar14 = vblendps_avx(auVar7,auVar37,4);
              auVar38 = vshufps_avx(auVar7,auVar7,0xc9);
              fVar4 = auVar14._0_4_;
              auVar39._0_4_ = fVar4 * fVar4;
              fVar6 = auVar14._4_4_;
              auVar39._4_4_ = fVar6 * fVar6;
              fVar1 = auVar14._8_4_;
              auVar39._8_4_ = fVar1 * fVar1;
              fVar3 = auVar14._12_4_;
              auVar39._12_4_ = fVar3 * fVar3;
              auVar14 = vblendps_avx(auVar39,auVar37,8);
              auVar14 = vhaddps_avx(auVar14,auVar14);
              auVar39 = vhaddps_avx(auVar14,auVar14);
              auVar14 = vrsqrtps_avx(auVar39);
              fVar5 = auVar14._0_4_;
              fVar15 = auVar14._4_4_;
              fVar2 = auVar14._8_4_;
              fVar16 = auVar14._12_4_;
              auVar14 = vcmpps_avx(auVar37,auVar39,1);
              auVar37._0_4_ =
                   auVar14._0_4_ &
                   (uint)(((auVar44._0_4_ * fVar5 * fVar5 * auVar39._0_4_ - auVar44._0_4_) * fVar5 +
                          fVar5) * fVar4);
              auVar37._4_4_ =
                   auVar14._4_4_ &
                   (uint)(((auVar44._4_4_ * fVar15 * fVar15 * auVar39._4_4_ - auVar44._4_4_) *
                           fVar15 + fVar15) * fVar6);
              auVar37._8_4_ =
                   auVar14._8_4_ &
                   (uint)(((auVar44._8_4_ * fVar2 * fVar2 * auVar39._8_4_ - auVar44._8_4_) * fVar2 +
                          fVar2) * fVar1);
              auVar37._12_4_ =
                   auVar14._12_4_ &
                   (uint)(((auVar44._12_4_ * fVar16 * fVar16 * auVar39._12_4_ - auVar44._12_4_) *
                           fVar16 + fVar16) * fVar3);
              auVar14 = vinsertps_avx(auVar37,ZEXT416(*(uint *)(lVar54 + 0xc74)),0x2b);
              auVar51 = ZEXT1664(CONCAT412(auVar14._12_4_ + pfVar12[3],
                                           CONCAT48(auVar14._8_4_ + pfVar12[2],
                                                    CONCAT44(auVar14._4_4_ + pfVar12[1],
                                                             auVar14._0_4_ + *pfVar12))));
              auVar14 = vshufps_avx(auVar37,auVar37,0xc9);
              auVar39 = vshufps_avx(auVar37,auVar37,0xd2);
              auVar48._0_4_ = -(auVar39._0_4_ * auVar46._0_4_) + auVar45._0_4_ * auVar14._0_4_;
              auVar48._4_4_ = -(auVar39._4_4_ * auVar46._4_4_) + auVar45._4_4_ * auVar14._4_4_;
              auVar48._8_4_ = -(auVar39._8_4_ * auVar46._8_4_) + auVar45._8_4_ * auVar14._8_4_;
              auVar48._12_4_ = -(auVar39._12_4_ * auVar46._12_4_) + auVar45._12_4_ * auVar14._12_4_;
              auVar49 = ZEXT1664(auVar48);
              auVar7 = vshufps_avx(auVar7,auVar7,0xd2);
              auVar14 = vshufps_avx(auVar48,auVar48,0xc9);
              auVar39 = vshufps_avx(auVar48,auVar48,0xd2);
              auVar50 = ZEXT1664(CONCAT412(-(auVar39._12_4_ * auVar38._12_4_) +
                                           auVar14._12_4_ * auVar7._12_4_,
                                           CONCAT48(-(auVar39._8_4_ * auVar38._8_4_) +
                                                    auVar14._8_4_ * auVar7._8_4_,
                                                    CONCAT44(-(auVar39._4_4_ * auVar38._4_4_) +
                                                             auVar14._4_4_ * auVar7._4_4_,
                                                             -(auVar39._0_4_ * auVar38._0_4_) +
                                                             auVar14._0_4_ * auVar7._0_4_))));
              pauVar28 = (undefined1 (*) [16])
                         func_0x000144d9d700(*(undefined8 *)(*(longlong *)(lVar25 + 0x110) + 0x90),
                                             iVar30);
              auVar39 = auVar51._0_16_;
              auVar7 = vinsertps_avx(auVar49._0_16_,auVar39,0x30);
              auVar14 = vinsertps_avx(auVar47._0_16_,auVar39,0x70);
              auVar39 = vinsertps_avx(auVar50._0_16_,auVar39,0xb0);
              *pauVar28 = auVar7;
              pauVar28[1] = auVar14;
              pauVar28[2] = auVar39;
              func_0x000144fcba90(*(undefined8 *)(*plVar33 + 0x38),iVar30);
              lVar25 = *(longlong *)(lVar54 + 0xc20);
              if (lVar25 != 0) {
                FUN_14011bd30(lVar54,&uStack_128,0);
                auVar20 = auStack_108;
                uVar24 = *(uint *)(lVar25 + 4);
                if ((ulonglong)uVar24 != 0) {
                  auVar51 = ZEXT1664(CONCAT88(uStack_120,uStack_128));
                  auVar52 = ZEXT1664(CONCAT88(uStack_110,uStack_118));
                  lVar34 = 0;
                  do {
                    sVar8 = *(short *)(lVar25 + 200 + lVar34);
                    if (((sVar8 != -1) && (sVar9 = *(short *)(lVar25 + 0xca + lVar34), sVar9 != -1))
                       && (-1 < sVar9)) {
                      iVar23 = (int)sVar9;
                      plVar33 = (longlong *)((ulonglong)(uint)(int)sVar8 * 0x40 + _DAT_148d7a9f8);
                      lVar29 = *(longlong *)(*plVar33 + 0x38);
                      iVar30 = func_0x000144fcbac0();
                      if (iVar23 < iVar30) {
                        fVar4 = *(float *)(lVar25 + 0xd0 + lVar34);
                        fVar5 = *(float *)(lVar25 + 0xd4 + lVar34);
                        fStack_1e8 = auVar20._16_4_;
                        fStack_1e4 = auVar20._20_4_;
                        fStack_1e0 = auVar20._24_4_;
                        fStack_1dc = auVar20._28_4_;
                        auVar53 = ZEXT1664(auVar51._0_16_);
                        fVar6 = *(float *)(lVar25 + 0xd8 + lVar34);
                        fStack_1d8 = auVar20._0_4_;
                        fStack_1d4 = auVar20._4_4_;
                        fStack_1d0 = auVar20._8_4_;
                        fStack_1cc = auVar20._12_4_;
                        auVar51 = ZEXT1664(CONCAT412(fVar6 * fStack_1cc +
                                                     auVar52._12_4_ * fVar5 +
                                                     auVar51._12_4_ * fVar4 + fStack_1dc,
                                                     CONCAT48(fVar6 * fStack_1d0 +
                                                              auVar52._8_4_ * fVar5 +
                                                              auVar51._8_4_ * fVar4 + fStack_1e0,
                                                              CONCAT44(fVar6 * fStack_1d4 +
                                                                       auVar52._4_4_ * fVar5 +
                                                                       auVar51._4_4_ * fVar4 +
                                                                       fStack_1e4,
                                                                       fVar6 * fStack_1d8 +
                                                                       auVar52._0_4_ * fVar5 +
                                                                       auVar51._0_4_ * fVar4 +
                                                                       fStack_1e8))));
                        pauVar28 = (undefined1 (*) [16])
                                   func_0x000144d9d700(*(undefined8 *)
                                                        (*(longlong *)(lVar29 + 0x110) + 0x90),
                                                       iVar23);
                        auVar39 = auVar51._0_16_;
                        auVar7 = vinsertps_avx(auVar49._0_16_,auVar39,0x30);
                        auVar14 = vinsertps_avx(auVar47._0_16_,auVar39,0x70);
                        auVar39 = vinsertps_avx(auVar50._0_16_,auVar39,0xb0);
                        auVar51 = ZEXT1664(auVar53._0_16_);
                        auVar52 = ZEXT1664(auVar52._0_16_);
                        *pauVar28 = auVar7;
                        pauVar28[1] = auVar14;
                        pauVar28[2] = auVar39;
                        func_0x000144fcba90(*(undefined8 *)(*plVar33 + 0x38),iVar23);
                      }
                    }
                    lVar34 = lVar34 + 0xe0;
                  } while ((ulonglong)uVar24 * 0xe0 != lVar34);
                }
                uVar24 = *(uint *)(lVar25 + 0x554);
                if ((ulonglong)uVar24 != 0) {
                  lVar34 = lVar25 + 0x560;
                  lVar29 = lVar25 + 0x6f0;
                  do {
                    lVar32 = _DAT_148d7a9f8;
                    if ((*(short *)(lVar34 + 0xb8) != -1) &&
                       (sVar8 = *(short *)(lVar34 + 0xba), sVar8 != -1)) {
                      lVar31 = (ulonglong)(uint)(int)*(short *)(lVar34 + 0xb8) * 0x40;
                      lVar13 = *(longlong *)(*(longlong *)(_DAT_148d7a9f8 + lVar31) + 0x38);
                      auVar42 = ZEXT1664(auVar42._0_16_);
                      auVar43 = ZEXT1664(auVar43._0_16_);
                      auVar44 = ZEXT1664(auVar44._0_16_);
                      auVar45 = ZEXT1664(auVar45._0_16_);
                      auVar46 = ZEXT1664(auVar46._0_16_);
                      auVar47 = ZEXT1664(auVar47._0_16_);
                      auVar49 = ZEXT1664(auVar49._0_16_);
                      auVar50 = ZEXT1664(auVar50._0_16_);
                      iVar30 = func_0x000144fcbac0(lVar13);
                      if (sVar8 < iVar30) {
                        pauVar28 = (undefined1 (*) [16])
                                   func_0x000144d9d700(*(undefined8 *)
                                                        (*(longlong *)(lVar13 + 0x110) + 0x90));
                        uStack_138 = *(undefined8 *)(lVar34 + 0x620);
                        uStack_130 = *(undefined8 *)(lVar34 + 0x628);
                        uStack_148 = *(undefined8 *)pauVar28[1];
                        uStack_140 = *(undefined8 *)(pauVar28[1] + 8);
                        FUN_14011be10(&uStack_1a8,&uStack_128,*(undefined4 *)(lVar54 + 0xc84),
                                      &uStack_138,*(undefined4 *)(lVar34 + 0x614),&uStack_148);
                        fVar15 = fStack_16c;
                        fVar6 = fStack_170;
                        fVar5 = fStack_174;
                        fVar4 = fStack_178;
                        uVar19 = uStack_1a0;
                        uVar18 = uStack_1a8;
                        auVar7._8_8_ = uStack_1a0;
                        auVar7._0_8_ = uStack_1a8;
                        auVar41._4_4_ = fStack_170;
                        auVar41._0_4_ = fStack_170;
                        auVar41._8_4_ = fStack_170;
                        auVar41._12_4_ = fStack_170;
                        auVar38._4_4_ = fStack_178;
                        auVar38._0_4_ = fStack_178;
                        auVar38._8_4_ = fStack_178;
                        auVar38._12_4_ = fStack_178;
                        auVar7 = vblendps_avx(auVar7,auVar38,8);
                        auVar40._4_4_ = fStack_174;
                        auVar40._0_4_ = fStack_174;
                        auVar40._8_4_ = fStack_174;
                        auVar40._12_4_ = fStack_174;
                        *pauVar28 = auVar7;
                        auVar14._8_8_ = uStack_190;
                        auVar14._0_8_ = uStack_198;
                        auVar51 = ZEXT1664(auVar14);
                        auVar7 = vblendps_avx(auVar14,auVar40,8);
                        pauVar28[1] = auVar7;
                        auVar52 = ZEXT1664(auStack_188);
                        auVar7 = vblendps_avx(auStack_188,auVar41,8);
                        pauVar28[2] = auVar7;
                        func_0x000144fcba90(*(undefined8 *)(*(longlong *)(lVar32 + lVar31) + 0x38),
                                            (int)sVar8);
                        uVar11 = *(uint *)(lVar34 + 0xc4);
                        if ((ulonglong)uVar11 != 0) {
                          lVar32 = 0;
                          _auStack_158 = auVar51._0_16_;
                          _auStack_168 = auVar52._0_16_;
                          do {
                            sVar8 = *(short *)(lVar29 + -8 + lVar32);
                            if (((sVar8 != -1) &&
                                (sVar9 = *(short *)(lVar29 + -6 + lVar32), sVar9 != -1)) &&
                               (-1 < sVar9)) {
                              iVar23 = (int)sVar9;
                              plVar33 = (longlong *)
                                        ((ulonglong)(uint)(int)sVar8 * 0x40 + _DAT_148d7a9f8);
                              lVar13 = *(longlong *)(*plVar33 + 0x38);
                              iVar30 = func_0x000144fcbac0();
                              if (iVar23 < iVar30) {
                                fVar1 = *(float *)(lVar29 + lVar32);
                                fVar2 = *(float *)(lVar29 + 4 + lVar32);
                                fVar3 = *(float *)(lVar29 + 8 + lVar32);
                                fStack_1e8 = (float)uVar18;
                                fStack_1e4 = (float)((ulonglong)uVar18 >> 0x20);
                                fStack_1e0 = (float)uVar19;
                                fStack_1dc = (float)((ulonglong)uVar19 >> 0x20);
                                auVar51 = ZEXT1664(CONCAT412(fVar3 * fStack_15c +
                                                             fVar2 * fStack_14c +
                                                             fVar1 * fStack_1dc + fVar15,
                                                             CONCAT48(fVar3 * fStack_160 +
                                                                      fVar2 * fStack_150 +
                                                                      fVar1 * fStack_1e0 + fVar6,
                                                                      CONCAT44(fVar3 * (float)
                                                  auStack_168._4_4_ +
                                                  fVar2 * (float)auStack_158._4_4_ +
                                                  fVar1 * fStack_1e4 + fVar5,
                                                  fVar3 * (float)auStack_168._0_4_ +
                                                  fVar2 * (float)auStack_158._0_4_ +
                                                  fVar1 * fStack_1e8 + fVar4))));
                                pauVar28 = (undefined1 (*) [16])
                                           func_0x000144d9d700(*(undefined8 *)
                                                                (*(longlong *)(lVar13 + 0x110) +
                                                                0x90),iVar23);
                                auVar39 = auVar51._0_16_;
                                auVar7 = vinsertps_avx(auVar49._0_16_,auVar39,0x30);
                                auVar14 = vinsertps_avx(auVar47._0_16_,auVar39,0x70);
                                auVar39 = vinsertps_avx(auVar50._0_16_,auVar39,0xb0);
                                *pauVar28 = auVar7;
                                pauVar28[1] = auVar14;
                                pauVar28[2] = auVar39;
                                func_0x000144fcba90(*(undefined8 *)(*plVar33 + 0x38),iVar23);
                              }
                            }
                            lVar32 = lVar32 + 0xe0;
                          } while ((ulonglong)uVar11 * 0xe0 != lVar32);
                        }
                      }
                      auStack_108._16_4_ = fStack_178;
                      auStack_108._0_16_ = auStack_188;
                      auStack_108._20_4_ = fStack_174;
                      auStack_108._24_4_ = fStack_170;
                      auStack_108._28_4_ = fStack_16c;
                      uStack_128 = uStack_1a8;
                      uStack_120 = uStack_1a0;
                      uStack_118 = uStack_198;
                      uStack_110 = uStack_190;
                    }
                    lVar34 = lVar34 + 0x640;
                    lVar29 = lVar29 + 0x640;
                  } while (lVar34 != lVar25 + 0x560 + (ulonglong)uVar24 * 0x640);
                }
              }
            }
          }
        }
        uVar24 = uVar35 + 1;
        if (uVar35 + 1 < *(uint *)((longlong)plVar17 + 0xc)) {
          uVar24 = *(uint *)((longlong)plVar17 + 0xc);
        }
        do {
          uVar11 = uVar24;
          if (uVar24 - 1 == uVar35) break;
          uVar35 = uVar35 + 1;
          uVar11 = uVar35;
        } while ((~*(uint *)(plVar17[5] + (ulonglong)(uVar35 & 0x1ffff) * 4) &
                 *(uint *)(plVar17 + 6)) != 0);
        uVar35 = uVar11;
      } while (uVar35 != uVar10);
    }
  }
  else {
    uVar35 = 0;
    do {
      if ((~*(uint *)(_DAT_14a04ec10[5] + (ulonglong)(uVar35 & 0x1ffff) * 4) &
          *(uint *)(_DAT_14a04ec10 + 6)) == 0) goto code_r0x000144fcb43b;
      uVar35 = uVar35 + 1;
    } while (uVar10 != uVar35);
  }
  iRam0000000147f566a8 = iRam0000000147f566a8 + -1;
  uVar27 = uRam0000000147f56698;
  if (iRam0000000147f566a8 == 0) {
    do {
      uVar26 = uVar27;
      LOCK();
      uVar27 = uVar26;
      uVar21 = (ulonglong)((int)uVar26 - 1) | 0xffffffff00000000;
      if (uVar26 != uRam0000000147f56698) {
        uVar27 = uRam0000000147f56698;
        uVar21 = uRam0000000147f56698;
      }
      uRam0000000147f56698 = uVar21;
      UNLOCK();
    } while (uVar26 != uVar27);
    if ((uVar26 & 0xfffffffe) != 0) {
      iRam0000000147f566a8 = 0;
      lVar54 = lRam0000000147f566a0;
      do {
        while (lVar54 < 0) {
          auStack_58._8_8_ = 0x140019c89;
          cVar22 = FUN_1400062d0(0x147f566a0,1,&stack0xffffffffffffffe0);
          if (cVar22 != '\0') {
            return;
          }
        }
        LOCK();
        lVar25 = lVar54;
        lVar34 = lVar54 + 0x100000000;
        if (lVar54 != lRam0000000147f566a0) {
          lVar25 = lRam0000000147f566a0;
          lVar34 = lRam0000000147f566a0;
        }
        lRam0000000147f566a0 = lVar34;
        UNLOCK();
        bVar36 = lVar54 != lVar25;
        lVar54 = lVar25;
      } while (bVar36);
      return;
    }
  }
  return;
}

