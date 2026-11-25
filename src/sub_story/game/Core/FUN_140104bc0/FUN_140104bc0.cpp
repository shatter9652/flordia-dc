// Recovered from game_scarlett_master.exe (GTA VI, Xbox Series X, PE32+ x64)
// Address: 140104bc0  size: 2262 bytes
// Name:    FUN_140104bc0
// Subsystem: core
//
// Referenced strings (0 in this body, 0 including direct callees):
// Callees: FUN_145031160, FUN_144db7b20, FUN_14069ac90, FUN_144f856c0, FUN_14051b850, FUN_140193d70, FUN_1455841e0, FUN_1438e1f40
//
// Generated decompilation. Formatting follows MiscRef/GTAVSRC conventions;
// identifiers are recovered, not original. See ../../../README.md.

#include "gta6decomp/rage_types.h"


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined8 FUN_140104bc0(longlong param_1,longlong param_2,ulonglong *param_3,undefined4 param_4)

{
  undefined1 auVar1 [16];
  char cVar2;
  ushort uVar3;
  longlong lVar4;
  undefined1 (*pauVar5) [16];
  longlong lVar6;
  longlong lVar7;
  undefined4 uVar8;
  undefined4 uVar9;
  undefined8 unaff_R12;
  ulonglong uVar10;
  ulonglong uVar11;
  ulonglong uVar12;
  float fVar13;
  float fVar14;
  float fVar15;
  undefined1 auVar16 [16];
  undefined1 auVar17 [16];
  short sVar18;
  short sVar30;
  undefined1 auVar19 [16];
  undefined1 auVar20 [16];
  undefined1 auVar21 [16];
  undefined1 auVar22 [16];
  undefined1 auVar23 [16];
  undefined1 auVar24 [16];
  undefined1 auVar25 [16];
  undefined1 auVar26 [16];
  undefined1 auVar27 [16];
  undefined1 auVar28 [16];
  undefined1 auVar29 [16];
  undefined1 auVar31 [16];
  undefined1 auVar32 [16];
  undefined1 auVar33 [16];
  undefined1 auVar34 [16];
  undefined1 auVar35 [16];
  undefined1 auVar36 [16];
  float fVar37;
  float fVar40;
  float fVar41;
  float fVar42;
  undefined1 auVar38 [16];
  undefined1 auVar39 [16];
  undefined1 auVar43 [16];
  undefined1 auVar44 [16];
  undefined1 auVar45 [16];
  undefined1 auVar47 [64];
  undefined1 auVar48 [16];
  undefined1 auVar49 [16];
  undefined1 auVar50 [64];
  undefined1 auVar51 [64];
  float fVar52;
  undefined1 auVar53 [16];
  undefined1 auVar54 [16];
  float fVar55;
  float fVar56;
  float fVar57;
  float fVar58;
  float fVar59;
  float fVar60;
  float fVar61;
  undefined1 auVar62 [64];
  float fStack_148;
  float fStack_144;
  float fStack_140;
  float fStack_13c;
  longlong lStack_138;
  undefined1 auStack_12c [4];
  undefined1 auStack_128 [16];
  undefined1 auStack_118 [16];
  undefined1 auStack_108 [16];
  undefined1 auStack_f8 [16];
  undefined1 auStack_e8 [16];
  undefined1 auStack_d8 [16];
  undefined1 auVar46 [64];
  
  auVar27._0_12_ = ZEXT812(0);
  auVar27._12_4_ = 0.0;
  if (param_1 == 0) {
    auVar23 = ZEXT816(0);
    goto LAB_140105435;
  }
  cVar2 = *(char *)(param_1 + 0x30);
  if (cVar2 != '\x02') {
    if (cVar2 == '\x04') {
      lVar4 = *(longlong *)(*(longlong *)(param_2 + 8) + 0x20);
      cVar2 = func_0x000144f40600(*(undefined4 *)(param_1 + 0x9c));
      if (cVar2 == '\0') {
        pauVar5 = (undefined1 (*) [16])(lVar4 + 0x20);
      }
      else {
        lVar4 = *(longlong *)(param_1 + 0x20);
        pauVar5 = (undefined1 (*) [16])(lVar4 + 0x40);
      }
      auVar50 = ZEXT1664(*(undefined1 (*) [16])(lVar4 + 0x30));
      auVar47 = ZEXT1664(*pauVar5);
      auVar46 = ZEXT1264(ZEXT812(0));
      auVar48._0_12_ = ZEXT812(0);
      auVar48._12_4_ = 0;
      if ((*(byte *)(param_1 + 0x100) & 0x20) == 0) {
        auVar23 = vsubps_avx(*pauVar5,*(undefined1 (*) [16])(lVar4 + 0x30));
        uVar9 = auVar23._0_4_;
        auVar21._4_4_ = uVar9;
        auVar21._0_4_ = uVar9;
        auVar21._8_4_ = uVar9;
        auVar21._12_4_ = uVar9;
        auVar27 = vshufps_avx(auVar23,auVar23,0x55);
        auVar23 = vshufps_avx(auVar23,auVar23,0xaa);
        auVar27 = vminps_avx(auVar21,auVar27);
        auVar27 = vminps_avx(auVar27,auVar23);
        auVar22._0_4_ = auVar27._0_4_ * _DAT_14615a298;
        auVar22._4_4_ = auVar27._4_4_ * _DAT_14615a298;
        auVar22._8_4_ = auVar27._8_4_ * _DAT_14615a298;
        auVar22._12_4_ = auVar27._12_4_ * _DAT_14615a298;
        auVar16._0_4_ = auVar27._0_4_ + _DAT_14616ad04;
        auVar16._4_4_ = auVar27._4_4_ + _DAT_14616ad04;
        auVar16._8_4_ = auVar27._8_4_ + _DAT_14616ad04;
        auVar16._12_4_ = auVar27._12_4_ + _DAT_14616ad04;
        auVar27 = vmaxps_avx(auVar16,ZEXT416(0) << 0x20);
        auVar48 = vminps_avx(auVar22,auVar27);
      }
      auVar51 = ZEXT1664(auVar48);
      auVar27 = *(undefined1 (*) [16])(param_2 + 0x80);
      fVar58 = *(float *)(param_2 + 0x50);
      fVar59 = *(float *)(param_2 + 0x54);
      fVar60 = *(float *)(param_2 + 0x58);
      fVar61 = *(float *)(param_2 + 0x5c);
      fVar42 = *(float *)(param_2 + 0x60);
      fVar55 = *(float *)(param_2 + 100);
      fVar56 = *(float *)(param_2 + 0x68);
      fVar57 = *(float *)(param_2 + 0x6c);
      fVar15 = *(float *)(param_2 + 0x70);
      fVar37 = *(float *)(param_2 + 0x74);
      fVar40 = *(float *)(param_2 + 0x78);
      fVar41 = *(float *)(param_2 + 0x7c);
      auVar23 = vpunpckhwd_avx(auVar27,auVar27);
      auVar23 = vpsrad_avx(auVar23,0x10);
      auVar23 = vcvtdq2ps_avx(auVar23);
      auVar23 = vshufpd_avx(auVar23,auVar23,3);
      auVar62 = ZEXT1664(CONCAT412(auVar23._12_4_ * _UNK_146159c9c + auVar27._12_4_,
                                   CONCAT48(auVar23._8_4_ * _UNK_146159c98 + auVar27._8_4_,
                                            CONCAT44(auVar23._4_4_ * _UNK_146159c94 + auVar27._4_4_,
                                                     auVar23._0_4_ * _DAT_146159c90 + auVar27._0_4_)
                                           )));
      pauVar5 = (undefined1 (*) [16])func_0x000145031140(0);
      auVar23 = auVar51._0_16_;
      auVar27 = auVar46._0_16_;
      if (SUB164(*pauVar5,0) <= auVar62._0_4_) {
        auStack_108 = auVar62._0_16_;
        auVar31 = vcmpps_avx(auStack_108,pauVar5[1],6);
        auVar19 = vcmpps_avx(*pauVar5,auStack_108,6);
        uVar8 = vextractps_avx(auVar19,1);
        uVar9 = vmovmskps_avx(auVar31);
        if ((((byte)uVar8 | (byte)uVar9 | (byte)uVar9 >> 1) & 1) == 0) {
          fVar13 = (float)FUN_145031160();
          fVar14 = auVar47._0_4_;
          auVar23 = auVar47._0_16_;
          auVar27 = vshufps_avx(auVar23,auVar23,0x55);
          auVar23 = vshufps_avx(auVar23,auVar23,0xaa);
          auStack_118._0_4_ =
               fVar15 * auVar23._0_4_ + fVar42 * auVar27._0_4_ + fVar58 * fVar14 + auVar62._0_4_;
          auStack_118._4_4_ =
               fVar37 * auVar23._4_4_ + fVar55 * auVar27._4_4_ + fVar59 * fVar14 + auVar62._4_4_;
          auStack_118._8_4_ =
               fVar40 * auVar23._8_4_ + fVar56 * auVar27._8_4_ + fVar60 * fVar14 + auVar62._8_4_;
          auStack_118._12_4_ =
               fVar41 * auVar23._12_4_ + fVar57 * auVar27._12_4_ + fVar61 * fVar14 + auVar62._12_4_;
          fVar14 = (float)FUN_145031160();
          fVar52 = auVar50._0_4_;
          auVar23 = auVar50._0_16_;
          auVar27 = vshufps_avx(auVar23,auVar23,0x55);
          auVar23 = vshufps_avx(auVar23,auVar23,0xaa);
          auStack_128._0_4_ =
               fVar15 * auVar23._0_4_ + fVar42 * auVar27._0_4_ + fVar58 * fVar52 + auVar62._0_4_;
          auStack_128._4_4_ =
               fVar37 * auVar23._4_4_ + fVar55 * auVar27._4_4_ + fVar59 * fVar52 + auVar62._4_4_;
          auStack_128._8_4_ =
               fVar40 * auVar23._8_4_ + fVar56 * auVar27._8_4_ + fVar60 * fVar52 + auVar62._8_4_;
          auStack_128._12_4_ =
               fVar41 * auVar23._12_4_ + fVar57 * auVar27._12_4_ + fVar61 * fVar52 + auVar62._12_4_;
          fVar15 = (float)FUN_145031160();
          auVar23 = auVar51._0_16_;
          fVar15 = (fVar14 + fVar13 + fVar15) * _DAT_14615a240;
          auVar27._4_4_ = fVar15;
          auVar27._0_4_ = fVar15;
          auVar27._8_4_ = fVar15;
          auVar27._12_4_ = fVar15;
        }
      }
      goto LAB_140105435;
    }
    auVar23 = ZEXT816(0);
    if (cVar2 != '\x03') goto LAB_140105435;
    uVar9 = *(undefined4 *)(param_1 + 0x9c);
    cVar2 = FUN_1455841e0(uVar9);
    if (cVar2 != '\0') {
      return 0;
    }
    lVar4 = func_0x000144e25990(uVar9);
    lVar4 = *(longlong *)(lVar4 + 0x18);
    auVar47 = ZEXT1664(CONCAT412(_DAT_145fc6ed8,
                                 CONCAT48(_DAT_145fc6ed8,CONCAT44(_DAT_145fc6ed8,_DAT_145fc6ed8))));
    lStack_138 = *(longlong *)(lVar4 + 0x1a8);
    auVar27 = vshufps_avx(*(undefined1 (*) [16])(lVar4 + 0x60),*(undefined1 (*) [16])(lVar4 + 0x70),
                          0x33);
    lVar6 = *(longlong *)(*(longlong *)(lStack_138 + 0x10) + 0x20);
    auVar27 = vshufps_avx(*(undefined1 (*) [16])(lVar4 + 0x60),auVar27,0x2f);
    auVar44._0_4_ = auVar27._0_4_ + _DAT_145fc6ed8;
    auVar44._4_4_ = auVar27._4_4_ + _DAT_145fc6ed8;
    auVar44._8_4_ = auVar27._8_4_ + _DAT_145fc6ed8;
    auVar44._12_4_ = auVar27._12_4_ + _DAT_145fc6ed8;
    auVar46 = ZEXT1664(auVar44);
    auVar27 = vsubps_avx(*(undefined1 (*) [16])(lVar6 + 0x20),*(undefined1 (*) [16])(lVar6 + 0x30));
    auVar50 = ZEXT1664(auVar27);
    if ((param_3 == (ulonglong *)0x0) || ((int)*param_3 == 0)) {
      if (param_2 != 0) {
        func_0x0001451986d0(param_2,&fStack_148);
        uVar12 = CONCAT44(fStack_144,fStack_148);
        uVar10 = (ulonglong)(uint)fStack_144;
        uVar11 = (ulonglong)((uint)fStack_144 >> 0x10);
        goto LAB_140104f59;
      }
      uVar10 = CONCAT62((int6)((ulonglong)unaff_R12 >> 0x10),0xffff);
      uVar12 = 0;
      uVar11 = 0xffff;
LAB_14010516c:
      auVar23 = *(undefined1 (*) [16])(lVar4 + 0x80);
    }
    else {
      uVar12 = *param_3;
      uVar10 = uVar12 >> 0x20;
      uVar11 = uVar12 >> 0x30;
      if (param_2 == 0) goto LAB_14010516c;
LAB_140104f59:
      auVar44 = auVar46._0_16_;
      auVar27 = auVar50._0_16_;
      if (lVar4 == param_2) {
        auVar53._0_12_ = ZEXT812(0);
        auVar53._12_4_ = 0;
        auVar51 = ZEXT1664(auVar53);
        auVar17._0_12_ = ZEXT812(0);
        auVar17._12_4_ = 0;
        lVar6 = *(longlong *)(*(longlong *)(param_2 + 8) + 0x20);
        if (((lVar6 != 0) && (*(char *)(lVar6 + 0x10) == '\x06')) && ((short)uVar10 != -2)) {
          uVar3 = func_0x0001403dc2f0(param_2,uVar10);
          auVar44 = auVar46._0_16_;
          auVar27 = auVar50._0_16_;
          auVar53 = auVar51._0_16_;
          auVar17._0_12_ = ZEXT812(0);
          auVar17._12_4_ = 0;
          if ((uVar3 != 0xffff) && (uVar3 < *(ushort *)(lVar6 + 0x9a))) {
            auVar17 = *(undefined1 (*) [16])
                       (*(longlong *)(lVar6 + 0x78) + 0x30 + (ulonglong)uVar3 * 0x40);
          }
        }
        auVar23 = *(undefined1 (*) [16])(param_2 + 0x80);
        fVar15 = auVar17._0_4_;
        auVar45 = vshufps_avx(auVar17,auVar17,0x55);
        auVar31 = vpunpckhwd_avx(auVar23,auVar23);
        auVar31 = vpsrad_avx(auVar31,0x10);
        auVar31 = vcvtdq2ps_avx(auVar31);
        auVar31 = vshufpd_avx(auVar31,auVar31,3);
        auVar32._0_4_ = auVar31._0_4_ * _DAT_146159c90 + auVar23._0_4_;
        auVar32._4_4_ = auVar31._4_4_ * _UNK_146159c94 + auVar23._4_4_;
        auVar32._8_4_ = auVar31._8_4_ * _UNK_146159c98 + auVar23._8_4_;
        auVar32._12_4_ = auVar31._12_4_ * _UNK_146159c9c + auVar23._12_4_;
        auVar24._4_4_ = _DAT_14615a290;
        auVar24._0_4_ = _DAT_14615a290;
        auVar24._8_4_ = _DAT_14615a290;
        auVar24._12_4_ = _DAT_14615a290;
        auVar23 = vrcpps_avx(auVar24);
        fVar37 = auVar23._0_4_;
        fVar40 = auVar23._4_4_;
        fVar41 = auVar23._8_4_;
        fVar42 = auVar23._12_4_;
        fVar37 = (-(fVar37 * _DAT_14615a290) + auVar47._0_4_) * fVar37 + fVar37;
        fVar40 = (-(fVar40 * _DAT_14615a290) + auVar47._4_4_) * fVar40 + fVar40;
        fVar41 = (-(fVar41 * _DAT_14615a290) + auVar47._8_4_) * fVar41 + fVar41;
        fVar42 = (-(fVar42 * _DAT_14615a290) + auVar47._12_4_) * fVar42 + fVar42;
        auVar34._0_4_ = auVar32._0_4_ * fVar37;
        auVar34._4_4_ = auVar32._4_4_ * fVar40;
        auVar34._8_4_ = auVar32._8_4_ * fVar41;
        auVar34._12_4_ = auVar32._12_4_ * fVar42;
        auVar23 = vroundps_avx(auVar34,3);
        auVar43._0_4_ = -(auVar23._0_4_ * _DAT_14615a290) + auVar32._0_4_;
        auVar43._4_4_ = -(auVar23._4_4_ * _DAT_14615a290) + auVar32._4_4_;
        auVar43._8_4_ = -(auVar23._8_4_ * _DAT_14615a290) + auVar32._8_4_;
        auVar43._12_4_ = -(auVar23._12_4_ * _DAT_14615a290) + auVar32._12_4_;
        auVar35._0_4_ = (int)auVar23._0_4_;
        auVar35._4_4_ = (int)auVar23._4_4_;
        auVar35._8_4_ = (int)auVar23._8_4_;
        auVar35._12_4_ = (int)auVar23._12_4_;
        auVar49 = vpackssdw_avx(auVar35,auVar35);
        auVar48 = vshufps_avx(auVar17,auVar17,0xaa);
        auVar23 = vblendps_avx(auVar32,auVar43,3);
        auVar31 = vblendps_avx(auVar53,*(undefined1 (*) [16])(param_2 + 0x60),7);
        auVar19 = vblendps_avx(auVar53,*(undefined1 (*) [16])(param_2 + 0x70),7);
        auVar20 = vinsertps_avx(auVar23,auVar49,0x30);
        auVar54._0_4_ =
             auVar19._0_4_ * auVar48._0_4_ +
             auVar31._0_4_ * auVar45._0_4_ + fVar15 * *(float *)(param_2 + 0x50) + auVar20._0_4_;
        auVar54._4_4_ =
             auVar19._4_4_ * auVar48._4_4_ +
             auVar31._4_4_ * auVar45._4_4_ + fVar15 * *(float *)(param_2 + 0x54) + auVar20._4_4_;
        auVar54._8_4_ =
             auVar19._8_4_ * auVar48._8_4_ +
             auVar31._8_4_ * auVar45._8_4_ + fVar15 * *(float *)(param_2 + 0x58) + auVar20._8_4_;
        auVar54._12_4_ =
             auVar19._12_4_ * auVar48._12_4_ +
             auVar31._12_4_ * auVar45._12_4_ + fVar15 * *(float *)(param_2 + 0x5c) + auVar20._12_4_;
        auVar23 = vinsertps_avx(auVar54,auVar49,0x30);
        auVar36._0_4_ = auVar23._0_4_ * fVar37;
        auVar36._4_4_ = auVar23._4_4_ * fVar40;
        auVar36._8_4_ = auVar23._8_4_ * fVar41;
        auVar36._12_4_ = auVar23._12_4_ * fVar42;
        auVar31 = vroundps_avx(auVar36,3);
        auVar25._0_4_ = -(auVar31._0_4_ * _DAT_14615a290) + auVar23._0_4_;
        auVar25._4_4_ = -(auVar31._4_4_ * _DAT_14615a290) + auVar23._4_4_;
        auVar25._8_4_ = -(auVar31._8_4_ * _DAT_14615a290) + auVar23._8_4_;
        auVar25._12_4_ = -(auVar31._12_4_ * _DAT_14615a290) + auVar23._12_4_;
        auVar23 = vblendps_avx(auVar54,auVar25,3);
        auVar26._0_4_ = (int)auVar31._0_4_;
        auVar26._4_4_ = (int)auVar31._4_4_;
        auVar26._8_4_ = (int)auVar31._8_4_;
        auVar26._12_4_ = (int)auVar31._12_4_;
        auVar31 = vpackssdw_avx(auVar26,auVar26);
        sVar18 = auVar31._0_2_;
        auVar1._0_2_ = sVar18 + auVar20._0_2_;
        sVar30 = auVar31._2_2_;
        auVar1._2_2_ = sVar30 + auVar20._2_2_;
        auVar1._4_2_ = sVar18 + auVar20._4_2_;
        auVar1._6_2_ = sVar30 + auVar20._6_2_;
        auVar1._8_2_ = sVar18 + auVar20._8_2_;
        auVar1._10_2_ = sVar30 + auVar20._10_2_;
        auVar1._12_2_ = sVar18 + auVar20._12_2_;
        auVar1._14_2_ = sVar30 + auVar20._14_2_;
        auVar23 = vpblendd_avx2(auVar23,auVar1,8);
      }
      else {
        auVar23 = *(undefined1 (*) [16])(param_2 + 0x80);
      }
    }
    auVar31 = vpunpckhwd_avx(auVar23,auVar23);
    auVar50 = ZEXT1664(CONCAT412(auVar27._12_4_ * auVar44._12_4_,
                                 CONCAT48(auVar27._8_4_ * auVar44._8_4_,
                                          CONCAT44(auVar27._4_4_ * auVar44._4_4_,
                                                   auVar27._0_4_ * auVar44._0_4_))));
    auVar27 = vpsrad_avx(auVar31,0x10);
    auVar27 = vcvtdq2ps_avx(auVar27);
    auVar27 = vshufpd_avx(auVar27,auVar27,3);
    auVar46 = ZEXT1664(CONCAT412(auVar27._12_4_ * _UNK_146159c9c + auVar23._12_4_,
                                 CONCAT48(auVar27._8_4_ * _UNK_146159c98 + auVar23._8_4_,
                                          CONCAT44(auVar27._4_4_ * _UNK_146159c94 + auVar23._4_4_,
                                                   auVar27._0_4_ * _DAT_146159c90 + auVar23._0_4_)))
                      );
    pauVar5 = (undefined1 (*) [16])func_0x000145031140(0);
    auVar23 = auVar46._0_16_;
    auVar27 = vcmpps_avx(auVar23,pauVar5[1],2);
    auVar46 = ZEXT1264(ZEXT812(0));
    uVar9 = vmovmskps_avx(auVar27);
    if ((~(byte)uVar9 & 3) == 0) {
      auVar27 = vcmpps_avx(*pauVar5,auVar23,2);
      uVar9 = vmovmskps_avx(auVar27);
      if ((~(byte)uVar9 & 3) == 0) {
        auStack_d8 = auVar23;
        uVar9 = FUN_145031160();
        auVar46 = ZEXT1664(CONCAT412(uVar9,CONCAT48(uVar9,CONCAT44(uVar9,uVar9))));
      }
    }
    uVar9 = *(undefined4 *)(param_1 + 0x9c);
    lVar6 = func_0x000144e63d10(uVar9);
    lVar7 = func_0x000144e63d60(*(undefined8 *)(param_1 + 0x20),lVar6);
    auVar27 = vshufps_avx(auVar50._0_16_,auVar50._0_16_,0xaa);
    fVar15 = *(float *)(&UNK_146174728 + (ulonglong)(*(char *)(lVar7 + 0xc) == '\x04') * 4);
    auVar51 = ZEXT1664(CONCAT412(fVar15 * auVar27._12_4_,
                                 CONCAT48(fVar15 * auVar27._8_4_,
                                          CONCAT44(fVar15 * auVar27._4_4_,fVar15 * auVar27._0_4_))))
    ;
    if (lVar4 == param_2) {
      lVar6 = func_0x0001450f21c0(uVar9);
      uVar3 = FUN_140193d70(lVar4,uVar12 & 0xffffffff | (uVar10 & 0xffff) << 0x20 | uVar11 << 0x30,1
                           );
      auVar23 = auVar51._0_16_;
      auVar27 = auVar46._0_16_;
      if (uVar3 == 0xffff) {
        lVar7 = -1;
      }
      else {
        lVar7 = (longlong)
                *(short *)(*(longlong *)(*(longlong *)(lVar4 + 0x1a8) + 0x28) + 0x48 +
                          (ulonglong)((uint)uVar3 * 0x50));
      }
      if ((*(byte *)(lVar6 + 0x56e) & 4) == 0) {
        if (*(short *)(*(longlong *)(lStack_138 + 0x20) + 0x18 + lVar7 * 0x70) == 0) {
          lVar4 = *(longlong *)(*(longlong *)(param_2 + 8) + 0x20);
          if ((*(char *)(lVar4 + 0x10) == '\x06') && ((short)uVar10 != -2)) {
            uVar3 = func_0x0001403dc2f0(param_2,uVar10 & 0xffffffff);
            auVar27 = auVar46._0_16_;
            lVar4 = *(longlong *)(*(longlong *)(lVar4 + 0x70) + (ulonglong)uVar3 * 8);
          }
          auVar31 = vsubps_avx(*(undefined1 (*) [16])(lVar4 + 0x20),
                               *(undefined1 (*) [16])(lVar4 + 0x30));
          uVar9 = auVar31._0_4_;
          auVar29._4_4_ = uVar9;
          auVar29._0_4_ = uVar9;
          auVar29._8_4_ = uVar9;
          auVar29._12_4_ = uVar9;
          auVar23 = vshufps_avx(auVar31,auVar31,0x55);
          auVar31 = vshufps_avx(auVar31,auVar31,0xaa);
          auVar23 = vminps_avx(auVar29,auVar23);
          auVar23 = vminps_avx(auVar23,auVar31);
          fStack_148 = auVar23._0_4_ * _DAT_146159cc4;
          fStack_144 = auVar23._4_4_ * _DAT_146159cc4;
          fStack_140 = auVar23._8_4_ * _DAT_146159cc4;
          fStack_13c = auVar23._12_4_ * _DAT_146159cc4;
        }
        else {
          FUN_1438e1f40(&fStack_148,lVar4);
          auVar27 = auVar46._0_16_;
        }
        auVar23._0_4_ = fStack_148 + auVar27._0_4_;
        auVar23._4_4_ = fStack_144 + auVar27._4_4_;
        auVar23._8_4_ = fStack_140 + auVar27._8_4_;
        auVar23._12_4_ = fStack_13c + auVar27._12_4_;
      }
      goto LAB_140105435;
    }
    lVar7 = func_0x000144eda820(CONCAT44(fVar15,fVar15),auVar27._0_8_);
    auVar23 = auVar51._0_16_;
    auVar27 = auVar46._0_16_;
    if (*(int *)(lVar4 + 0x10) == 0) goto LAB_140105435;
    cVar2 = FUN_144db7b20(uVar9);
    auVar31 = auVar47._0_16_;
    auVar19 = auVar50._0_16_;
    if ((cVar2 == '\0') && ((lVar6 == 0 || ((*(byte *)(lVar6 + 0x238) & 4) == 0)))) {
      if (lVar7 != 0) {
        cVar2 = func_0x0001453d8250(lVar7,0,0,1);
        auVar31 = auVar47._0_16_;
        auVar19 = auVar50._0_16_;
        if (cVar2 != '\0') goto LAB_140105285;
      }
      auVar23 = auVar51._0_16_;
      auVar27 = auVar46._0_16_;
      if (((*(byte *)(param_1 + 0xed) & 1) == 0) &&
         ((lVar6 == 0 || ((*(byte *)(lVar6 + 0x238) & 8) == 0)))) goto LAB_140105435;
    }
LAB_140105285:
    lVar6 = *(longlong *)(*(longlong *)(lVar4 + 8) + 0x20);
    auVar20 = vsubps_avx(*(undefined1 (*) [16])(lVar6 + 0x20),*(undefined1 (*) [16])(lVar6 + 0x30));
    fVar37 = auVar20._0_4_;
    auVar23 = vshufps_avx(auVar20,auVar20,0x55);
    auVar27 = vrcpps_avx(auVar19);
    auVar38._4_4_ = _DAT_14615d24c;
    auVar38._0_4_ = _DAT_14615d24c;
    auVar38._8_4_ = _DAT_14615d24c;
    auVar38._12_4_ = _DAT_14615d24c;
    fVar40 = auVar27._0_4_;
    fVar41 = auVar27._4_4_;
    fVar42 = auVar27._8_4_;
    fVar15 = auVar27._12_4_;
    auVar27 = vcmpps_avx(auVar19,ZEXT816(0) << 0x20,0);
    auVar33._0_4_ =
         (fVar37 * (float)(_DAT_145fc6f4c & *(uint *)(lVar4 + 0x70)) +
         (float)(_DAT_145fc6f4c & *(uint *)(lVar4 + 0x60)) * auVar23._0_4_ +
         (float)(_DAT_145fc6f4c & *(uint *)(lVar4 + 0x50)) * fVar37) *
         (-((auVar19._0_4_ * fVar40 - auVar31._0_4_) * fVar40) + fVar40) + _DAT_14615d24c;
    auVar33._4_4_ =
         (auVar20._4_4_ * (float)(_DAT_145fc6f4c & *(uint *)(lVar4 + 0x74)) +
         (float)(_DAT_145fc6f4c & *(uint *)(lVar4 + 100)) * auVar23._4_4_ +
         (float)(_DAT_145fc6f4c & *(uint *)(lVar4 + 0x54)) * fVar37) *
         (-((auVar19._4_4_ * fVar41 - auVar31._4_4_) * fVar41) + fVar41) + _DAT_14615d24c;
    auVar33._8_4_ =
         (auVar20._8_4_ * (float)(_DAT_145fc6f4c & *(uint *)(lVar4 + 0x78)) +
         (float)(_DAT_145fc6f4c & *(uint *)(lVar4 + 0x68)) * auVar23._8_4_ +
         (float)(_DAT_145fc6f4c & *(uint *)(lVar4 + 0x58)) * fVar37) *
         (-((auVar19._8_4_ * fVar42 - auVar31._8_4_) * fVar42) + fVar42) + _DAT_14615d24c;
    auVar33._12_4_ =
         (auVar20._12_4_ * (float)(_DAT_145fc6f4c & *(uint *)(lVar4 + 0x7c)) +
         (float)(_DAT_145fc6f4c & *(uint *)(lVar4 + 0x6c)) * auVar23._12_4_ +
         (float)(_DAT_145fc6f4c & *(uint *)(lVar4 + 0x5c)) * fVar37) *
         (-((auVar19._12_4_ * fVar15 - auVar31._12_4_) * fVar15) + fVar15) + _DAT_14615d24c;
    auVar27 = vblendvps_avx(auVar33,auVar38,auVar27);
    auVar39._4_4_ = _DAT_146161f24;
    auVar39._0_4_ = _DAT_146161f24;
    auVar39._8_4_ = _DAT_146161f24;
    auVar39._12_4_ = _DAT_146161f24;
    auVar23 = vshufps_avx(auVar27,auVar27,0xaa);
    auVar27 = vrcpps_avx(auVar39);
    fVar15 = auVar27._0_4_;
    fVar37 = auVar27._4_4_;
    fVar40 = auVar27._8_4_;
    fVar41 = auVar27._12_4_;
    auVar28._0_4_ = auVar23._0_4_ * ((-(fVar15 * _DAT_146161f24) + auVar31._0_4_) * fVar15 + fVar15)
    ;
    auVar28._4_4_ = auVar23._4_4_ * ((-(fVar37 * _DAT_146161f24) + auVar31._4_4_) * fVar37 + fVar37)
    ;
    auVar28._8_4_ = auVar23._8_4_ * ((-(fVar40 * _DAT_146161f24) + auVar31._8_4_) * fVar40 + fVar40)
    ;
    auVar28._12_4_ =
         auVar23._12_4_ * ((-(fVar41 * _DAT_146161f24) + auVar31._12_4_) * fVar41 + fVar41);
    auVar27 = vmaxps_avx(auVar28,ZEXT816(0) << 0x20);
    auVar23 = vminps_avx(auVar27,auVar31);
    auVar47 = ZEXT1664(auVar23);
    FUN_1438e1f40(auVar27._0_8_,lVar4);
    auVar31 = vsubps_avx(auVar51._0_16_,auStack_e8);
    auVar27 = auVar46._0_16_;
    auVar23._0_4_ = auVar47._0_4_ * auVar31._0_4_ + auStack_e8._0_4_ + auVar46._0_4_;
    auVar23._4_4_ = auVar47._4_4_ * auVar31._4_4_ + auStack_e8._4_4_ + auVar46._4_4_;
    auVar23._8_4_ = auVar47._8_4_ * auVar31._8_4_ + auStack_e8._8_4_ + auVar46._8_4_;
    auVar23._12_4_ = auVar47._12_4_ * auVar31._12_4_ + auStack_e8._12_4_ + auVar46._12_4_;
    goto LAB_140105435;
  }
  lVar4 = func_0x00014515d910(*(undefined4 *)(param_1 + 0x9c));
  if ((lVar4 == 0) || (*(int *)(lVar4 + 0x94) < 1)) {
    auVar27._0_12_ = ZEXT812(0);
    auVar27._12_4_ = 0.0;
    lVar4 = *(longlong *)(*(longlong *)(param_2 + 8) + 0x20);
    auVar31 = vsubps_avx(*(undefined1 (*) [16])(lVar4 + 0x20),*(undefined1 (*) [16])(lVar4 + 0x30));
    uVar9 = auVar31._0_4_;
    auVar19._4_4_ = uVar9;
    auVar19._0_4_ = uVar9;
    auVar19._8_4_ = uVar9;
    auVar19._12_4_ = uVar9;
    auVar23 = vshufps_avx(auVar31,auVar31,0x55);
    auVar31 = vshufps_avx(auVar31,auVar31,0xaa);
    auVar23 = vminps_avx(auVar19,auVar23);
    auVar23 = vminps_avx(auVar23,auVar31);
    auVar20._0_4_ = auVar23._0_4_ * _DAT_14615a298;
    auVar20._4_4_ = auVar23._4_4_ * _DAT_14615a298;
    auVar20._8_4_ = auVar23._8_4_ * _DAT_14615a298;
    auVar20._12_4_ = auVar23._12_4_ * _DAT_14615a298;
    auVar31._0_4_ = auVar23._0_4_ + _DAT_14616ad04;
    auVar31._4_4_ = auVar23._4_4_ + _DAT_14616ad04;
    auVar31._8_4_ = auVar23._8_4_ + _DAT_14616ad04;
    auVar31._12_4_ = auVar23._12_4_ + _DAT_14616ad04;
    auVar23 = vmaxps_avx(auVar31,auVar27);
    auVar23 = vminps_avx(auVar20,auVar23);
    goto LAB_140105435;
  }
  if ((short)param_4 == -1) {
    if (param_3 != (ulonglong *)0x0) {
      lVar6 = FUN_14069ac90(lVar4,*param_3);
      goto LAB_140104f86;
    }
LAB_140104fb6:
    uVar9 = func_0x000144f856e0(lVar4);
    auVar27 = *(undefined1 (*) [16])(param_1 + 0x70);
    auVar46 = ZEXT1664(CONCAT412(uVar9,CONCAT48(uVar9,CONCAT44(uVar9,uVar9))));
    auVar23 = vpunpckhwd_avx(auVar27,auVar27);
    auVar23 = vpsrad_avx(auVar23,0x10);
    auVar23 = vcvtdq2ps_avx(auVar23);
    auVar23 = vshufpd_avx(auVar23,auVar23,3);
    auVar49._0_4_ = auVar23._0_4_ * _DAT_146159c90 + auVar27._0_4_;
    auVar49._4_4_ = auVar23._4_4_ * _UNK_146159c94 + auVar27._4_4_;
    auVar49._8_4_ = auVar23._8_4_ * _UNK_146159c98 + auVar27._8_4_;
    auVar49._12_4_ = auVar23._12_4_ * _UNK_146159c9c + auVar27._12_4_;
  }
  else {
    cVar2 = func_0x0001452756b0(param_4,&fStack_148,auStack_12c);
    if (cVar2 == '\0') {
      lVar6 = 0;
    }
    else {
      lVar6 = func_0x0001452eb880(lVar4,fStack_148);
      if (lVar6 == 0) {
        lVar6 = **(longlong **)(lVar4 + 0x98);
      }
    }
LAB_140104f86:
    if (lVar6 == 0) goto LAB_140104fb6;
    fVar15 = (float)FUN_144f856c0(lVar4);
    fVar15 = fVar15 + *(float *)(lVar6 + 0x90c);
    auVar46 = ZEXT1664(CONCAT412(fVar15,CONCAT48(fVar15,CONCAT44(fVar15,fVar15))));
    FUN_14051b850(fVar15,&fStack_148);
    auVar49._4_4_ = fStack_144;
    auVar49._0_4_ = fStack_148;
    auVar49._8_4_ = fStack_140;
    auVar49._12_4_ = fStack_13c;
  }
  auVar47 = ZEXT1664(auVar49);
  pauVar5 = (undefined1 (*) [16])func_0x000145031140(0);
  auVar23 = auVar46._0_16_;
  auStack_f8 = auVar47._0_16_;
  auVar27 = vcmpps_avx(auStack_f8,pauVar5[1],2);
  auVar45._0_12_ = ZEXT812(0);
  auVar45._12_4_ = 0;
  uVar9 = vmovmskps_avx(auVar27);
  if ((~(byte)uVar9 & 3) == 0) {
    auVar27 = vcmpps_avx(*pauVar5,auStack_f8,2);
    uVar9 = vmovmskps_avx(auVar27);
    if ((~(byte)uVar9 & 3) == 0) {
      uVar9 = FUN_145031160();
      auVar23 = auVar46._0_16_;
      auVar45._4_4_ = uVar9;
      auVar45._0_4_ = uVar9;
      auVar45._8_4_ = uVar9;
      auVar45._12_4_ = uVar9;
    }
  }
  fVar15 = *(float *)(lVar4 + 0x110);
  auVar27 = auVar45;
  if (0.0 <= fVar15) {
    auVar27._0_4_ = fVar15 * auVar45._0_4_;
    auVar27._4_4_ = fVar15 * auVar45._4_4_;
    auVar27._8_4_ = fVar15 * auVar45._8_4_;
    auVar27._12_4_ = fVar15 * auVar45._12_4_;
  }
  auVar23 = vmaxps_avx(auVar27,auVar23);
LAB_140105435:
  auVar27 = vmaxss_avx(auVar27,auVar23);
  return auVar27._0_8_;
}

