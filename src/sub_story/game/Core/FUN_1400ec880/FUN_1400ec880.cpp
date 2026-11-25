// Recovered from game_scarlett_master.exe (GTA VI, Xbox Series X, PE32+ x64)
// Address: 1400ec880  size: 2959 bytes
// Name:    FUN_1400ec880
// Subsystem: core
//
// Referenced strings (0 in this body, 0 including direct callees):
// Callees: 
//
// Generated decompilation. Formatting follows MiscRef/GTAVSRC conventions;
// identifiers are recovered, not original. See ../../../README.md.

#include "gta6decomp/rage_types.h"


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1400ec880(uint param_1,longlong param_2,longlong param_3,int param_4,float param_5,
                  longlong param_6,longlong param_7,longlong param_8,longlong param_9,
                  longlong param_10)

{
  float *pfVar1;
  undefined1 (*pauVar2) [16];
  byte *pbVar3;
  undefined1 auVar4 [16];
  ushort uVar5;
  undefined1 auVar6 [16];
  uint uVar7;
  ulonglong uVar8;
  longlong lVar9;
  undefined1 (*pauVar10) [16];
  int iVar11;
  ulonglong uVar12;
  uint uVar13;
  float *pfVar14;
  longlong lVar15;
  longlong lVar16;
  float fVar17;
  float fVar20;
  float fVar21;
  float fVar22;
  undefined1 auVar18 [16];
  undefined1 auVar19 [16];
  float fVar30;
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
  undefined1 auVar37 [16];
  undefined1 auVar38 [16];
  undefined1 auVar39 [16];
  undefined1 auVar40 [16];
  undefined1 auVar41 [16];
  undefined1 auVar42 [16];
  float fVar43;
  float fVar48;
  float fVar49;
  undefined1 auVar44 [16];
  float fVar50;
  undefined1 auVar45 [16];
  undefined1 auVar46 [16];
  undefined1 auVar47 [16];
  undefined1 auVar51 [16];
  undefined1 auVar52 [64];
  undefined1 auVar53 [16];
  undefined1 auVar54 [16];
  undefined1 auVar55 [16];
  undefined1 auVar56 [16];
  undefined1 auVar57 [16];
  undefined1 auVar58 [16];
  float fVar59;
  float fVar60;
  float fVar67;
  float fVar68;
  float fVar69;
  float fVar70;
  float fVar71;
  undefined1 auVar61 [16];
  undefined1 auVar62 [16];
  undefined1 auVar63 [16];
  undefined1 auVar64 [16];
  undefined1 auVar65 [16];
  undefined1 auVar66 [16];
  float fVar74;
  float fVar75;
  undefined1 auVar72 [16];
  undefined1 auVar73 [16];
  float fVar76;
  float fVar77;
  float fVar82;
  float fVar84;
  float fVar86;
  undefined1 auVar78 [16];
  float fVar83;
  float fVar85;
  float fVar87;
  undefined1 auVar79 [16];
  undefined1 auVar80 [16];
  undefined1 auVar81 [16];
  float fVar88;
  float fVar90;
  float fVar91;
  float fVar92;
  undefined1 auVar89 [16];
  undefined1 auVar93 [16];
  float fVar96;
  undefined1 auVar94 [16];
  undefined1 auVar95 [16];
  undefined1 auVar97 [16];
  undefined1 auVar98 [16];
  undefined1 auVar99 [16];
  undefined1 auVar100 [16];
  undefined1 auVar101 [16];
  undefined1 auVar102 [64];
  float fStack_228;
  float fStack_224;
  float fStack_220;
  float fStack_21c;
  float fStack_218;
  float fStack_214;
  float fStack_210;
  float fStack_20c;
  undefined1 auStack_208 [8];
  float fStack_200;
  float fStack_1fc;
  undefined1 auStack_1d8 [16];
  float fStack_1a8;
  float fStack_1a4;
  float fStack_1a0;
  float fStack_19c;
  
  uVar7 = _DAT_145fc6f10;
  iVar11 = 0;
  fVar59 = _DAT_14615a130;
  do {
    auStack_1d8._0_12_ = ZEXT812(0);
    auStack_1d8._12_4_ = 0;
    uVar12 = 0;
    lVar15 = param_2;
    do {
      lVar16 = uVar12 * 0x80;
      uVar5 = *(ushort *)(param_2 + 0x20 + lVar16);
      uVar13 = uVar5 & 0xf;
      if ((uVar5 & 0xf) == 0) {
        auVar51 = SUB6416(ZEXT864(0),0);
        auVar101 = SUB6416(ZEXT864(0),0);
      }
      else {
        auVar102 = ZEXT864(0);
        uVar8 = 0;
        auVar52 = ZEXT864(0);
        do {
          pbVar3 = (byte *)(lVar15 + 0x34 + uVar8);
          lVar9 = uVar8 * 2;
          uVar8 = uVar8 + 1;
          lVar9 = (ulonglong)*(ushort *)(lVar15 + 0x24 + lVar9) * 0x10;
          fVar30 = (float)*pbVar3 * fVar59;
          pfVar1 = (float *)(param_8 + lVar9);
          auVar101._0_4_ = fVar30 * *pfVar1 + auVar102._0_4_;
          auVar101._4_4_ = fVar30 * pfVar1[1] + auVar102._4_4_;
          auVar101._8_4_ = fVar30 * pfVar1[2] + auVar102._8_4_;
          auVar101._12_4_ = fVar30 * pfVar1[3] + auVar102._12_4_;
          auVar102 = ZEXT1664(auVar101);
          pfVar1 = (float *)(param_9 + lVar9);
          auVar51._0_4_ = fVar30 * *pfVar1 + auVar52._0_4_;
          auVar51._4_4_ = fVar30 * pfVar1[1] + auVar52._4_4_;
          auVar51._8_4_ = fVar30 * pfVar1[2] + auVar52._8_4_;
          auVar51._12_4_ = fVar30 * pfVar1[3] + auVar52._12_4_;
          auVar52 = ZEXT1664(auVar51);
        } while (uVar13 != uVar8);
      }
      pauVar2 = (undefined1 (*) [16])(param_2 + lVar16);
      fVar30 = *(float *)(param_2 + 0x60 + lVar16);
      auVar4 = *pauVar2;
      lVar9 = (longlong)*(int *)(param_2 + 0xc + lVar16) * 0x20;
      auVar29 = *(undefined1 (*) [16])(param_6 + 0x10 + lVar9);
      pfVar1 = (float *)(param_3 + lVar9);
      auVar53._0_4_ = fVar30 * *pfVar1;
      auVar53._4_4_ = fVar30 * pfVar1[1];
      auVar53._8_4_ = fVar30 * pfVar1[2];
      auVar53._12_4_ = fVar30 * pfVar1[3];
      pfVar1 = (float *)(param_6 + lVar9);
      pfVar14 = (float *)(param_7 + lVar9);
      auVar35 = pauVar2[1];
      auVar37 = vshufps_avx(auVar4,auVar4,0xd2);
      auVar24 = vshufps_avx(auVar4,auVar4,0xc9);
      auVar34 = vshufps_avx(auVar29,auVar29,0xc9);
      auVar32 = vshufps_avx(auVar29,auVar29,0xd2);
      auVar29 = vshufps_avx(auVar29,auVar29,0xff);
      fVar59 = auVar34._0_4_;
      fVar17 = auVar34._4_4_;
      fVar20 = auVar34._8_4_;
      fVar21 = auVar34._12_4_;
      auVar34 = vshufps_avx(auVar35,auVar35,0xd2);
      fVar69 = auVar32._0_4_;
      fVar76 = -(fVar69 * auVar24._0_4_) + auVar37._0_4_ * fVar59;
      fVar48 = auVar32._4_4_;
      fVar82 = -(fVar48 * auVar24._4_4_) + auVar37._4_4_ * fVar17;
      fVar49 = auVar32._8_4_;
      fVar84 = -(fVar49 * auVar24._8_4_) + auVar37._8_4_ * fVar20;
      fVar74 = auVar32._12_4_;
      fVar86 = -(fVar74 * auVar24._12_4_) + auVar37._12_4_ * fVar21;
      auVar78._0_4_ = fVar76 + fVar76;
      auVar78._4_4_ = fVar82 + fVar82;
      auVar78._8_4_ = fVar84 + fVar84;
      auVar78._12_4_ = fVar86 + fVar86;
      auVar32 = vshufps_avx(auVar78,auVar78,0xd2);
      auVar19 = vshufps_avx(auVar78,auVar78,0xc9);
      auVar44 = vshufps_avx(auVar35,auVar35,0xc9);
      fVar76 = -(fVar69 * auVar44._0_4_) + auVar34._0_4_ * fVar59;
      fVar82 = -(fVar48 * auVar44._4_4_) + auVar34._4_4_ * fVar17;
      fVar84 = -(fVar49 * auVar44._8_4_) + auVar34._8_4_ * fVar20;
      fVar86 = -(fVar74 * auVar44._12_4_) + auVar34._12_4_ * fVar21;
      auVar31._0_4_ = fVar76 + fVar76;
      auVar31._4_4_ = fVar82 + fVar82;
      auVar31._8_4_ = fVar84 + fVar84;
      auVar31._12_4_ = fVar86 + fVar86;
      auVar58 = vshufps_avx(auVar31,auVar31,0xd2);
      auVar81 = vshufps_avx(auVar31,auVar31,0xc9);
      auVar33 = vshufps_avx(auVar53,auVar53,0xff);
      auStack_208._0_4_ =
           -(fVar69 * auVar19._0_4_) + auVar32._0_4_ * fVar59 +
           auVar29._0_4_ * auVar78._0_4_ + *pfVar1 + auVar4._0_4_;
      auStack_208._4_4_ =
           -(fVar48 * auVar19._4_4_) + auVar32._4_4_ * fVar17 +
           auVar29._4_4_ * auVar78._4_4_ + pfVar1[1] + auVar4._4_4_;
      fStack_200 = -(fVar49 * auVar19._8_4_) + auVar32._8_4_ * fVar20 +
                   auVar29._8_4_ * auVar78._8_4_ + pfVar1[2] + auVar4._8_4_;
      fStack_1fc = -(fVar74 * auVar19._12_4_) + auVar32._12_4_ * fVar21 +
                   auVar29._12_4_ * auVar78._12_4_ + pfVar1[3] + auVar4._12_4_;
      fVar76 = *(float *)(param_2 + 0x3c + lVar16) * *(float *)(param_2 + 100 + lVar16);
      fVar59 = auVar31._0_4_ * auVar29._0_4_ + auVar35._0_4_ +
               -(fVar69 * auVar81._0_4_) + auVar58._0_4_ * fVar59;
      fVar84 = auVar31._4_4_ * auVar29._4_4_ + auVar35._4_4_ +
               -(fVar48 * auVar81._4_4_) + auVar58._4_4_ * fVar17;
      fVar86 = auVar31._8_4_ * auVar29._8_4_ + auVar35._8_4_ +
               -(fVar49 * auVar81._8_4_) + auVar58._8_4_ * fVar20;
      fVar69 = auVar31._12_4_ * auVar29._12_4_ + auVar35._12_4_ +
               -(fVar74 * auVar81._12_4_) + auVar58._12_4_ * fVar21;
      fVar17 = *pfVar14;
      fVar20 = pfVar14[1];
      fVar21 = pfVar14[2];
      fVar82 = pfVar14[3];
      auVar29 = vsubps_avx(auVar101,_auStack_208);
      auVar32._0_4_ = auVar29._0_4_ * fVar59;
      auVar32._4_4_ = auVar29._4_4_ * fVar84;
      auVar32._8_4_ = auVar29._8_4_ * fVar86;
      auVar32._12_4_ = auVar29._12_4_ * fVar69;
      auVar29 = vblendps_avx(auVar32,ZEXT416(0) << 0x20,8);
      auVar29 = vhaddps_avx(auVar29,auVar29);
      auVar29 = vhaddps_avx(auVar29,auVar29);
      fStack_1a8 = auVar33._0_4_;
      fStack_1a4 = auVar33._4_4_;
      fStack_1a0 = auVar33._8_4_;
      fStack_19c = auVar33._12_4_;
      auVar19 = auVar51;
      auVar32 = auVar101;
      if (auVar29._0_4_ < 0.0) {
        auVar58._4_4_ = _DAT_145fc6f10;
        auVar58._0_4_ = _DAT_145fc6f10;
        auVar58._8_4_ = _DAT_145fc6f10;
        auVar58._12_4_ = _DAT_145fc6f10;
        auVar81._0_4_ = _DAT_145fc6f48 / (fVar76 + fStack_1a8);
        auVar81._4_12_ = SUB6012((undefined1  [60])0x0,0);
        auVar32 = vcmpss_avx(ZEXT416((uint)(fVar76 + fStack_1a8)),ZEXT416(_DAT_14615b49c),4);
        auVar32 = vblendvps_avx(auVar58,auVar81,auVar32);
        fVar48 = auVar32._0_4_ * auVar29._0_4_;
        fVar49 = fVar48 * (float)(uVar7 ^ (uint)fVar59);
        fVar74 = fVar48 * (float)(uVar7 ^ (uint)fVar84);
        fVar75 = fVar48 * (float)(uVar7 ^ (uint)fVar86);
        fVar48 = fVar48 * (float)(uVar7 ^ (uint)fVar69);
        fVar59 = fStack_1a8 * fVar49;
        fVar84 = fStack_1a4 * fVar74;
        fVar86 = fStack_1a0 * fVar75;
        fVar69 = fStack_19c * fVar48;
        fVar17 = fVar17 + fVar59;
        fVar20 = fVar20 + fVar84;
        fVar21 = fVar21 + fVar86;
        fVar82 = fVar82 + fVar69;
        *pfVar1 = fVar59 + *pfVar1;
        pfVar1[1] = fVar84 + pfVar1[1];
        pfVar1[2] = fVar86 + pfVar1[2];
        pfVar1[3] = fVar69 + pfVar1[3];
        *pfVar14 = fVar17;
        pfVar14[1] = fVar20;
        pfVar14[2] = fVar21;
        pfVar14[3] = fVar82;
        auStack_208._4_4_ = fVar84 + (float)auStack_208._4_4_;
        auStack_208._0_4_ = fVar59 + (float)auStack_208._0_4_;
        fStack_200 = fVar86 + fStack_200;
        fStack_1fc = fVar69 + fStack_1fc;
        auVar29._0_4_ = fVar49 * fVar76;
        auVar29._4_4_ = fVar74 * fVar76;
        auVar29._8_4_ = fVar75 * fVar76;
        auVar29._12_4_ = fVar48 * fVar76;
        auVar32 = vsubps_avx(auVar101,auVar29);
        auVar19 = vsubps_avx(auVar51,auVar29);
      }
      auVar29 = *(undefined1 (*) [16])(pfVar14 + 4);
      auVar58 = vshufps_avx(auVar29,auVar29,0xc9);
      auVar81 = vshufps_avx(auVar29,auVar29,0xd2);
      fVar86 = auVar58._0_4_;
      fVar69 = auVar58._4_4_;
      fVar48 = auVar58._8_4_;
      fVar49 = auVar58._12_4_;
      fVar50 = auVar81._0_4_;
      fVar59 = -(fVar50 * auVar24._0_4_) + auVar37._0_4_ * fVar86;
      fVar60 = auVar81._4_4_;
      fVar84 = -(fVar60 * auVar24._4_4_) + auVar37._4_4_ * fVar69;
      fVar67 = auVar81._8_4_;
      fVar74 = -(fVar67 * auVar24._8_4_) + auVar37._8_4_ * fVar48;
      fVar68 = auVar81._12_4_;
      fVar75 = -(fVar68 * auVar24._12_4_) + auVar37._12_4_ * fVar49;
      auVar33._0_4_ = fVar59 + fVar59;
      auVar33._4_4_ = fVar84 + fVar84;
      auVar33._8_4_ = fVar74 + fVar74;
      auVar33._12_4_ = fVar75 + fVar75;
      auVar37 = vshufps_avx(auVar33,auVar33,0xd2);
      auVar24 = vshufps_avx(auVar33,auVar33,0xc9);
      fVar84 = pfVar14[7];
      fVar59 = -(fVar50 * auVar44._0_4_) + auVar34._0_4_ * fVar86;
      fVar74 = -(fVar60 * auVar44._4_4_) + auVar34._4_4_ * fVar69;
      fVar75 = -(fVar67 * auVar44._8_4_) + auVar34._8_4_ * fVar48;
      fVar96 = -(fVar68 * auVar44._12_4_) + auVar34._12_4_ * fVar49;
      auVar93._0_4_ =
           -(fVar50 * auVar24._0_4_) + auVar37._0_4_ * fVar86 +
           fVar84 * auVar33._0_4_ + auVar4._0_4_;
      auVar93._4_4_ =
           -(fVar60 * auVar24._4_4_) + auVar37._4_4_ * fVar69 +
           fVar84 * auVar33._4_4_ + auVar4._4_4_;
      auVar93._8_4_ =
           -(fVar67 * auVar24._8_4_) + auVar37._8_4_ * fVar48 +
           fVar84 * auVar33._8_4_ + auVar4._8_4_;
      auVar93._12_4_ =
           -(fVar68 * auVar24._12_4_) + auVar37._12_4_ * fVar49 +
           fVar84 * auVar33._12_4_ + auVar4._12_4_;
      auVar34._0_4_ = fVar59 + fVar59;
      auVar34._4_4_ = fVar74 + fVar74;
      auVar34._8_4_ = fVar75 + fVar75;
      auVar34._12_4_ = fVar96 + fVar96;
      auVar44._0_4_ = auVar93._0_4_ + fVar17;
      auVar44._4_4_ = auVar93._4_4_ + fVar20;
      auVar44._8_4_ = auVar93._8_4_ + fVar21;
      auVar44._12_4_ = auVar93._12_4_ + fVar82;
      auVar4 = vshufps_avx(auVar34,auVar34,0xd2);
      auVar37 = vshufps_avx(auVar34,auVar34,0xc9);
      auVar24 = vsubps_avx(auVar19,auVar44);
      fVar74 = -(fVar50 * auVar37._0_4_) + auVar4._0_4_ * fVar86 +
               fVar84 * auVar34._0_4_ + auVar35._0_4_;
      fVar75 = -(fVar60 * auVar37._4_4_) + auVar4._4_4_ * fVar69 +
               fVar84 * auVar34._4_4_ + auVar35._4_4_;
      fVar96 = -(fVar67 * auVar37._8_4_) + auVar4._8_4_ * fVar48 +
               fVar84 * auVar34._8_4_ + auVar35._8_4_;
      fVar22 = -(fVar68 * auVar37._12_4_) + auVar4._12_4_ * fVar49 +
               fVar84 * auVar34._12_4_ + auVar35._12_4_;
      auVar35._0_4_ = auVar24._0_4_ * fVar74;
      auVar35._4_4_ = auVar24._4_4_ * fVar75;
      auVar35._8_4_ = auVar24._8_4_ * fVar96;
      auVar35._12_4_ = auVar24._12_4_ * fVar22;
      auVar4._4_4_ = _UNK_14614f7c4;
      auVar4._0_4_ = _DAT_14614f7c0;
      auVar4._8_4_ = _UNK_14614f7c8;
      auVar4._12_4_ = _UNK_14614f7cc;
      auVar4 = vblendps_avx(auVar35,auVar4,8);
      auVar4 = vhaddps_avx(auVar4,auVar4);
      auVar4 = vhaddps_avx(auVar4,auVar4);
      fVar43 = (float)(uVar7 ^ (uint)auVar4._0_4_);
      fVar59 = _DAT_14615a130;
      if (auVar4._0_4_ < fVar43) {
        pfVar1 = (float *)(param_3 + 0x10 + lVar9);
        auVar94._0_4_ = fVar30 * *pfVar1;
        auVar94._4_4_ = fVar30 * pfVar1[1];
        auVar94._8_4_ = fVar30 * pfVar1[2];
        auVar94._12_4_ = fVar30 * pfVar1[3];
        fStack_218 = auVar29._0_4_;
        fStack_214 = auVar29._4_4_;
        fStack_210 = auVar29._8_4_;
        fStack_20c = auVar29._12_4_;
        pauVar10 = (undefined1 (*) [16])(uVar12 * 0x30 + param_10);
        auVar24 = vshufps_avx(auVar53,auVar53,0xaa);
        auVar37._0_4_ = fStack_218 + fStack_218;
        auVar37._4_4_ = fStack_214 + fStack_214;
        auVar37._8_4_ = fStack_210 + fStack_210;
        auVar37._12_4_ = fStack_20c + fStack_20c;
        auVar4 = vshufps_avx(auVar37,auVar37,0xc9);
        auVar35 = vshufps_avx(auVar37,auVar37,0xd2);
        auVar34 = vshufps_avx(auVar53,auVar53,0x55);
        auVar97._0_4_ = -(fVar84 * auVar35._0_4_) + fVar86 * auVar37._0_4_;
        auVar97._4_4_ = -(fVar84 * auVar35._4_4_) + fVar69 * auVar37._4_4_;
        auVar97._8_4_ = -(fVar84 * auVar35._8_4_) + fVar48 * auVar37._8_4_;
        auVar97._12_4_ = -(fVar84 * auVar35._12_4_) + fVar49 * auVar37._12_4_;
        auVar72._0_4_ = fVar50 * auVar37._0_4_ + fVar84 * auVar4._0_4_;
        auVar72._4_4_ = fVar60 * auVar37._4_4_ + fVar84 * auVar4._4_4_;
        auVar72._8_4_ = fVar67 * auVar37._8_4_ + fVar84 * auVar4._8_4_;
        auVar72._12_4_ = fVar68 * auVar37._12_4_ + fVar84 * auVar4._12_4_;
        auVar54._0_4_ = -(auVar35._0_4_ * fVar50) - (fVar86 * auVar4._0_4_ - _DAT_145fc6ed8);
        auVar54._4_4_ = -(auVar35._4_4_ * fVar60) - (fVar69 * auVar4._4_4_ - _DAT_145fc6ed8);
        auVar54._8_4_ = -(auVar35._8_4_ * fVar67) - (fVar48 * auVar4._8_4_ - _DAT_145fc6ed8);
        auVar54._12_4_ = -(auVar35._12_4_ * fVar68) - (fVar49 * auVar4._12_4_ - _DAT_145fc6ed8);
        auVar4 = vblendps_avx(auVar72,auVar97,2);
        auVar35 = vblendps_avx(auVar54,auVar72,2);
        auVar37 = vblendps_avx(auVar97,auVar54,2);
        auVar4 = vblendps_avx(auVar54,auVar4,3);
        auVar58 = vshufps_avx(auVar94,auVar94,0xaa);
        auVar35 = vblendps_avx(auVar97,auVar35,3);
        auVar37 = vblendps_avx(auVar72,auVar37,3);
        fVar71 = auVar35._0_4_;
        fVar77 = auVar35._4_4_;
        fVar83 = auVar35._8_4_;
        fVar85 = auVar35._12_4_;
        fVar69 = auVar37._0_4_;
        fVar48 = auVar37._4_4_;
        fVar49 = auVar37._8_4_;
        fVar50 = auVar37._12_4_;
        auVar35 = vshufps_avx(auVar94,auVar94,0x55);
        fVar87 = auVar4._0_4_;
        fVar59 = auVar35._0_4_ * fVar87 + auVar58._0_4_ * fVar69 + fVar71 * auVar53._0_4_;
        fVar88 = auVar4._4_4_;
        fVar30 = auVar35._4_4_ * fVar88 + auVar58._4_4_ * fVar48 + fVar77 * auVar53._0_4_;
        fVar90 = auVar4._8_4_;
        fVar84 = auVar35._8_4_ * fVar90 + auVar58._8_4_ * fVar49 + fVar83 * auVar53._0_4_;
        fVar91 = auVar4._12_4_;
        fVar86 = auVar35._12_4_ * fVar91 + auVar58._12_4_ * fVar50 + fVar85 * auVar53._0_4_;
        fVar60 = auVar94._0_4_ * fVar87 + fVar69 * auVar34._0_4_ + fVar71 * auVar58._0_4_;
        fVar67 = auVar94._0_4_ * fVar88 + fVar48 * auVar34._4_4_ + fVar77 * auVar58._4_4_;
        fVar68 = auVar94._0_4_ * fVar90 + fVar49 * auVar34._8_4_ + fVar83 * auVar58._8_4_;
        fVar70 = auVar94._0_4_ * fVar91 + fVar50 * auVar34._12_4_ + fVar85 * auVar58._12_4_;
        auVar6._8_4_ = uVar7;
        auVar6._0_8_ = CONCAT44(uVar7,uVar7);
        auVar6._12_4_ = uVar7;
        auVar37 = vshufps_avx(auVar72,auVar72,0x55);
        auVar34 = vshufps_avx(auVar97,auVar97,0xaa);
        auVar58 = vshufps_avx(auVar54,auVar54,0x55);
        fVar69 = fVar87 * auVar24._0_4_ + auVar94._0_4_ * fVar69 + fVar71 * auVar35._0_4_;
        fVar48 = fVar88 * auVar24._4_4_ + auVar94._0_4_ * fVar48 + fVar77 * auVar35._4_4_;
        fVar49 = fVar90 * auVar24._8_4_ + auVar94._0_4_ * fVar49 + fVar83 * auVar35._8_4_;
        fVar50 = fVar91 * auVar24._12_4_ + auVar94._0_4_ * fVar50 + fVar85 * auVar35._12_4_;
        auVar35 = vshufps_avx(auVar72,auVar72,0xaa);
        auVar24 = vshufps_avx(auVar54,auVar54,0xaa);
        auVar4 = vmovshdup_avx(auVar93);
        auVar100._0_4_ = (float)((uint)auVar93._0_4_ ^ uVar7);
        auVar100._4_4_ = (uint)auVar93._4_4_ ^ uVar7;
        auVar100._8_4_ = (uint)auVar93._8_4_ ^ uVar7;
        auVar100._12_4_ = (uint)auVar93._12_4_ ^ uVar7;
        auVar41._0_4_ = fVar69 * auVar72._0_4_ + fVar60 * auVar97._0_4_ + fVar59 * auVar54._0_4_;
        auVar41._4_4_ = fVar48 * auVar72._0_4_ + fVar67 * auVar97._0_4_ + fVar30 * auVar54._0_4_;
        auVar41._8_4_ = fVar49 * auVar72._0_4_ + fVar68 * auVar97._0_4_ + fVar84 * auVar54._0_4_;
        auVar41._12_4_ = fVar50 * auVar72._0_4_ + fVar70 * auVar97._0_4_ + fVar86 * auVar54._0_4_;
        auVar81 = vshufps_avx(auVar97,auVar97,0x55);
        auVar98._0_4_ = (float)(uVar7 ^ auVar4._0_4_);
        auVar98._4_4_ = uVar7 ^ auVar4._4_4_;
        auVar98._8_4_ = uVar7 ^ auVar4._8_4_;
        auVar98._12_4_ = uVar7 ^ auVar4._12_4_;
        auVar18._0_4_ = fVar69 * auVar81._0_4_ + fVar60 * auVar58._0_4_ + fVar59 * auVar37._0_4_;
        auVar18._4_4_ = fVar48 * auVar81._4_4_ + fVar67 * auVar58._4_4_ + fVar30 * auVar37._4_4_;
        auVar18._8_4_ = fVar49 * auVar81._8_4_ + fVar68 * auVar58._8_4_ + fVar84 * auVar37._8_4_;
        auVar18._12_4_ = fVar50 * auVar81._12_4_ + fVar70 * auVar58._12_4_ + fVar86 * auVar37._12_4_
        ;
        auVar55._0_4_ = fVar69 * auVar24._0_4_ + fVar60 * auVar35._0_4_ + fVar59 * auVar34._0_4_;
        auVar55._4_4_ = fVar48 * auVar24._4_4_ + fVar67 * auVar35._4_4_ + fVar30 * auVar34._4_4_;
        auVar55._8_4_ = fVar49 * auVar24._8_4_ + fVar68 * auVar35._8_4_ + fVar84 * auVar34._8_4_;
        auVar55._12_4_ = fVar50 * auVar24._12_4_ + fVar70 * auVar35._12_4_ + fVar86 * auVar34._12_4_
        ;
        auVar4 = vshufpd_avx(auVar93,auVar93,1);
        auVar23._0_8_ = CONCAT44(uVar7,uVar7) ^ auVar4._0_8_;
        auVar23._8_8_ = auVar6._8_8_ ^ auVar4._8_8_;
        auVar24 = vshufps_avx(auVar41,auVar41,0x55);
        auVar4 = vblendps_avx(ZEXT816(0) << 0x20,auVar23,1);
        auVar35 = vinsertps_avx(auVar18,auVar93,0x9d);
        auVar34 = vshufps_avx(auVar18,auVar18,0x55);
        auVar37 = vmovlhps_avx(auVar4,auVar93);
        auVar4 = vinsertps_avx(auVar35,auVar98,0x20);
        auVar35 = vinsertps_avx(auVar37,auVar23,0x30);
        fVar69 = (float)auVar23._0_8_;
        fVar59 = auVar4._0_4_;
        fVar30 = auVar4._4_4_;
        fVar84 = auVar4._8_4_;
        fVar86 = auVar4._12_4_;
        fVar88 = auVar35._0_4_;
        fVar90 = auVar35._4_4_;
        fVar91 = auVar35._8_4_;
        fVar92 = auVar35._12_4_;
        auVar35 = vshufps_avx(auVar55,auVar55,0x55);
        auVar4 = vinsertps_avx(auVar18,auVar93,0x4e);
        auVar37 = vshufps_avx(auVar41,auVar41,0xaa);
        auVar4 = vinsertps_avx(auVar4,auVar100,0x10);
        auVar4 = vinsertps_avx(auVar4,auVar93,0x70);
        fVar48 = auVar4._0_4_;
        fVar67 = fVar48 * auVar37._0_4_ + fVar88 * auVar24._0_4_ + auVar41._0_4_ * fVar59;
        fVar49 = auVar4._4_4_;
        fVar68 = fVar49 * auVar37._4_4_ + fVar90 * auVar24._4_4_ + auVar41._0_4_ * fVar30;
        fVar50 = auVar4._8_4_;
        fVar70 = fVar50 * auVar37._8_4_ + fVar91 * auVar24._8_4_ + auVar41._0_4_ * fVar84;
        fVar60 = auVar4._12_4_;
        fVar71 = fVar60 * auVar37._12_4_ + fVar92 * auVar24._12_4_ + auVar41._0_4_ * fVar86;
        auVar4 = vshufps_avx(auVar18,auVar18,0xaa);
        fVar77 = fVar48 * auVar4._0_4_ + fVar88 * auVar34._0_4_ + auVar18._0_4_ * fVar59;
        fVar83 = fVar49 * auVar4._4_4_ + fVar90 * auVar34._4_4_ + auVar18._0_4_ * fVar30;
        fVar85 = fVar50 * auVar4._8_4_ + fVar91 * auVar34._8_4_ + auVar18._0_4_ * fVar84;
        fVar87 = fVar60 * auVar4._12_4_ + fVar92 * auVar34._12_4_ + auVar18._0_4_ * fVar86;
        auVar4 = vshufps_avx(auVar55,auVar55,0xaa);
        fVar59 = fVar48 * auVar4._0_4_ + fVar88 * auVar35._0_4_ + auVar55._0_4_ * fVar59;
        fVar30 = fVar49 * auVar4._4_4_ + fVar90 * auVar35._4_4_ + auVar55._0_4_ * fVar30;
        fVar84 = fVar50 * auVar4._8_4_ + fVar91 * auVar35._8_4_ + auVar55._0_4_ * fVar84;
        fVar86 = fVar60 * auVar4._12_4_ + fVar92 * auVar35._12_4_ + auVar55._0_4_ * fVar86;
        auVar35 = vshufps_avx(auVar93,auVar93,0xaa);
        auVar73._0_4_ = (float)(uVar7 ^ (uint)fVar74);
        auVar73._4_4_ = (float)(uVar7 ^ (uint)fVar75);
        auVar73._8_4_ = (float)(uVar7 ^ (uint)fVar96);
        auVar73._12_4_ = (float)(uVar7 ^ (uint)fVar22);
        auVar34 = vshufps_avx(auVar93,auVar93,0xc9);
        auVar24._0_4_ = -(fVar59 * auVar93._0_4_) - (fVar77 * _DAT_14614f7c0 + fVar67 * fVar69);
        auVar24._4_4_ = -(fVar30 * auVar93._0_4_) - (fVar83 * _UNK_14614f7c4 + fVar68 * fVar69);
        auVar24._8_4_ = -(fVar84 * auVar93._0_4_) - (fVar85 * _UNK_14614f7c8 + fVar70 * fVar69);
        auVar24._12_4_ = -(fVar86 * auVar93._0_4_) - (fVar87 * _UNK_14614f7cc + fVar71 * fVar69);
        auVar37 = vshufps_avx(auVar93,auVar93,0x55);
        auVar4 = vmovshdup_avx(auVar24);
        auVar45._0_4_ = -(fVar59 * 0.0) - (fVar77 * auVar100._0_4_ + fVar67 * auVar37._0_4_);
        auVar45._4_4_ = -(fVar30 * 0.0) - (fVar83 * auVar100._0_4_ + fVar68 * auVar37._4_4_);
        auVar45._8_4_ = -(fVar84 * 0.0) - (fVar85 * auVar100._0_4_ + fVar70 * auVar37._8_4_);
        auVar45._12_4_ = -(fVar86 * 0.0) - (fVar87 * auVar100._0_4_ + fVar71 * auVar37._12_4_);
        auVar37 = vinsertps_avx(auVar24,ZEXT416((uint)(fStack_1a8 + auVar4._0_4_)),0x10);
        fVar30 = (-(fVar59 * auVar98._0_4_) - (fVar77 * auVar35._0_4_ + fVar67 * 0.0)) + fStack_1a8;
        auVar35 = vshufps_avx(auVar73,auVar73,0x55);
        auVar4 = vshufpd_avx(auVar45,auVar45,1);
        auVar58 = vshufps_avx(auVar93,auVar93,0xd2);
        auVar24 = vinsertps_avx(auVar45,ZEXT416((uint)(fStack_1a8 + auVar4._0_4_)),0x20);
        auVar4 = vshufps_avx(auVar73,auVar73,0xaa);
        auVar95._0_12_ = ZEXT812(0);
        auVar95._12_4_ = 0;
        auVar25._0_4_ =
             auVar73._0_4_ *
             (auVar24._0_4_ * auVar4._0_4_ + auVar37._0_4_ * auVar35._0_4_ + fVar30 * auVar73._0_4_)
        ;
        auVar25._4_4_ =
             auVar73._4_4_ *
             (auVar24._4_4_ * auVar4._4_4_ + auVar37._4_4_ * auVar35._4_4_ + auVar73._0_4_ * 0.0);
        auVar25._8_4_ =
             auVar73._8_4_ *
             (auVar24._8_4_ * auVar4._8_4_ + auVar37._8_4_ * auVar35._8_4_ + auVar73._0_4_ * 0.0);
        auVar25._12_4_ =
             auVar73._12_4_ *
             (auVar24._12_4_ * auVar4._12_4_ + auVar37._12_4_ * auVar35._12_4_ + auVar73._0_4_ * 0.0
             );
        auVar4 = vblendps_avx(auVar25,ZEXT416(0) << 0x20,8);
        auVar4 = vhaddps_avx(auVar4,auVar4);
        auVar4 = vhaddps_avx(auVar4,auVar4);
        fVar59 = auVar4._0_4_ + fVar76;
        auVar4 = vcmpss_avx(ZEXT416((uint)fVar59),ZEXT816(0) << 0x20,4);
        fVar84 = (float)(auVar4._0_4_ & (uint)(_DAT_145fc6ed8 / fVar59)) * fVar43;
        auVar38._0_4_ = auVar73._0_4_ * fVar84;
        auVar38._4_4_ = auVar73._4_4_ * fVar84;
        auVar38._8_4_ = auVar73._8_4_ * fVar84;
        auVar38._12_4_ = auVar73._12_4_ * fVar84;
        auVar4 = vshufps_avx(auVar38,auVar38,0xd2);
        auVar35 = vshufps_avx(auVar38,auVar38,0xc9);
        fVar71 = auVar34._0_4_;
        fVar77 = auVar34._4_4_;
        fVar83 = auVar34._8_4_;
        fVar85 = auVar34._12_4_;
        fVar60 = auVar58._0_4_;
        auVar46._0_4_ = -(fVar60 * auVar35._0_4_) + fVar71 * auVar4._0_4_;
        fVar67 = auVar58._4_4_;
        auVar46._4_4_ = -(fVar67 * auVar35._4_4_) + fVar77 * auVar4._4_4_;
        fVar68 = auVar58._8_4_;
        auVar46._8_4_ = -(fVar68 * auVar35._8_4_) + fVar83 * auVar4._8_4_;
        fVar70 = auVar58._12_4_;
        auVar46._12_4_ = -(fVar70 * auVar35._12_4_) + fVar85 * auVar4._12_4_;
        auVar4 = vshufps_avx(auVar46,auVar46,0x55);
        auVar35 = vshufps_avx(auVar46,auVar46,0xaa);
        auVar26._0_4_ =
             auVar55._0_4_ * auVar35._0_4_ +
             auVar18._0_4_ * auVar4._0_4_ + auVar46._0_4_ * auVar41._0_4_;
        auVar26._4_4_ =
             auVar55._4_4_ * auVar35._4_4_ +
             auVar18._4_4_ * auVar4._4_4_ + auVar46._0_4_ * auVar41._4_4_;
        auVar26._8_4_ =
             auVar55._8_4_ * auVar35._8_4_ +
             auVar18._8_4_ * auVar4._8_4_ + auVar46._0_4_ * auVar41._8_4_;
        auVar26._12_4_ =
             auVar55._12_4_ * auVar35._12_4_ +
             auVar18._12_4_ * auVar4._12_4_ + auVar46._0_4_ * auVar41._12_4_;
        auVar47._0_4_ = auVar26._0_4_ * auVar26._0_4_;
        auVar47._4_4_ = auVar26._4_4_ * auVar26._4_4_;
        auVar47._8_4_ = auVar26._8_4_ * auVar26._8_4_;
        auVar47._12_4_ = auVar26._12_4_ * auVar26._12_4_;
        auVar4 = vblendps_avx(auVar47,auVar95,8);
        auVar4 = vhaddps_avx(auVar4,auVar4);
        auVar4 = vhaddps_avx(auVar4,auVar4);
        fVar86 = auVar4._0_4_ * _DAT_14615cb28;
        fVar59 = _DAT_145fc6ed8 + fVar86;
        fVar86 = (_DAT_145fc6ed8 - fVar86) / fVar59;
        fVar59 = fVar59 + fVar59;
        auVar61._4_4_ = fVar59;
        auVar61._0_4_ = fVar59;
        auVar61._8_4_ = fVar59;
        auVar61._12_4_ = fVar59;
        auVar4 = vrcpps_avx(auVar61);
        fVar69 = auVar4._0_4_;
        fVar48 = auVar4._4_4_;
        fVar49 = auVar4._8_4_;
        fVar50 = auVar4._12_4_;
        auVar79._0_4_ = (uint)fStack_218 ^ uVar7;
        auVar79._4_4_ = (uint)fStack_214 ^ uVar7;
        auVar79._8_4_ = (uint)fStack_210 ^ uVar7;
        auVar79._12_4_ = (uint)fStack_20c ^ uVar7;
        auVar62._0_4_ = auVar26._0_4_ * (-((fVar69 * fVar59 - _DAT_145fc6ed8) * fVar69) + fVar69);
        auVar62._4_4_ = auVar26._4_4_ * (-((fVar48 * fVar59 - _DAT_145fc6ed8) * fVar48) + fVar48);
        auVar62._8_4_ = auVar26._8_4_ * (-((fVar49 * fVar59 - _DAT_145fc6ed8) * fVar49) + fVar49);
        auVar62._12_4_ = auVar26._12_4_ * (-((fVar50 * fVar59 - _DAT_145fc6ed8) * fVar50) + fVar50);
        auVar4 = vblendps_avx(auVar79,auVar29,10);
        auVar35 = vblendps_avx(auVar79,auVar29,9);
        auVar34 = vshufps_avx(auVar4,auVar4,0x1b);
        auVar35 = vshufps_avx(auVar35,auVar35,0xb1);
        auVar4 = vshufpd_avx(auVar29,auVar79,1);
        auVar29 = vshufps_avx(auVar62,auVar62,0x55);
        auVar58 = vshufps_avx(auVar62,auVar62,0xaa);
        auVar42._0_4_ =
             auVar58._0_4_ * auVar35._0_4_ +
             auVar29._0_4_ * auVar4._0_4_ + auVar62._0_4_ * auVar34._0_4_ + fVar86 * fStack_218;
        auVar42._4_4_ =
             auVar58._4_4_ * auVar35._4_4_ +
             auVar29._4_4_ * auVar4._4_4_ + auVar62._0_4_ * auVar34._4_4_ + fVar86 * fStack_214;
        auVar42._8_4_ =
             auVar58._8_4_ * auVar35._8_4_ +
             auVar29._8_4_ * auVar4._8_4_ + auVar62._0_4_ * auVar34._8_4_ + fVar86 * fStack_210;
        auVar42._12_4_ =
             auVar58._12_4_ * auVar35._12_4_ +
             auVar29._12_4_ * auVar4._12_4_ + auVar62._0_4_ * auVar34._12_4_ + fVar86 * fStack_20c;
        auVar4 = vshufps_avx(auVar26,auVar26,0xc9);
        auVar29 = vshufps_avx(auVar26,auVar26,0xd2);
        fStack_228 = auVar19._0_4_;
        fStack_224 = auVar19._4_4_;
        fStack_220 = auVar19._8_4_;
        fStack_21c = auVar19._12_4_;
        auVar19._0_4_ = -(fVar76 * auVar38._0_4_) + fStack_228;
        auVar19._4_4_ = -(fVar76 * auVar38._4_4_) + fStack_224;
        auVar19._8_4_ = -(fVar76 * auVar38._8_4_) + fStack_220;
        auVar19._12_4_ = -(fVar76 * auVar38._12_4_) + fStack_21c;
        auVar63._0_4_ = fStack_1a8 * auVar38._0_4_ + auVar44._0_4_;
        auVar63._4_4_ = fStack_1a4 * auVar38._4_4_ + auVar44._4_4_;
        auVar63._8_4_ = fStack_1a0 * auVar38._8_4_ + auVar44._8_4_;
        auVar63._12_4_ = fStack_19c * auVar38._12_4_ + auVar44._12_4_;
        auVar35 = vsubps_avx(auVar19,auVar32);
        auVar80._0_4_ = auVar35._0_4_ + (float)auStack_208._0_4_;
        auVar80._4_4_ = auVar35._4_4_ + (float)auStack_208._4_4_;
        auVar80._8_4_ = auVar35._8_4_ + fStack_200;
        auVar80._12_4_ = auVar35._12_4_ + fStack_1fc;
        fVar17 = fStack_1a8 * auVar38._0_4_ + fVar17;
        fVar20 = fStack_1a4 * auVar38._4_4_ + fVar20;
        fVar21 = fStack_1a0 * auVar38._8_4_ + fVar21;
        fVar82 = fStack_19c * auVar38._12_4_ + fVar82;
        auVar34 = vsubps_avx(auVar63,auVar80);
        fVar69 = auVar34._0_4_ + -(fVar71 * auVar29._0_4_) + fVar60 * auVar4._0_4_;
        fVar48 = auVar34._4_4_ + -(fVar77 * auVar29._4_4_) + fVar67 * auVar4._4_4_;
        fVar49 = auVar34._8_4_ + -(fVar83 * auVar29._8_4_) + fVar68 * auVar4._8_4_;
        fVar50 = auVar34._12_4_ + -(fVar85 * auVar29._12_4_) + fVar70 * auVar4._12_4_;
        auVar27._0_4_ = auVar73._0_4_ * fVar69;
        auVar27._4_4_ = auVar73._4_4_ * fVar48;
        auVar27._8_4_ = auVar73._8_4_ * fVar49;
        auVar27._12_4_ = auVar73._12_4_ * fVar50;
        *pfVar14 = fVar17;
        pfVar14[1] = fVar20;
        pfVar14[2] = fVar21;
        pfVar14[3] = fVar82;
        *(undefined1 (*) [16])(pfVar14 + 4) = auVar42;
        auVar4 = vblendps_avx(auVar27,ZEXT416(0) << 0x20,8);
        auVar4 = vhaddps_avx(auVar4,auVar4);
        auVar4 = vhaddps_avx(auVar4,auVar4);
        fVar69 = auVar4._0_4_ * fVar74 + fVar69;
        fVar48 = auVar4._4_4_ * fVar75 + fVar48;
        fVar49 = auVar4._8_4_ * fVar96 + fVar49;
        fVar50 = auVar4._12_4_ * fVar22 + fVar50;
        *(float *)(pauVar10[1] + 0xc) = fVar84 + *(float *)(pauVar10[1] + 0xc);
        fVar86 = _DAT_145fc6ed8;
        auVar39._0_4_ = fVar69 * fVar69;
        auVar39._4_4_ = fVar48 * fVar48;
        auVar39._8_4_ = fVar49 * fVar49;
        auVar39._12_4_ = fVar50 * fVar50;
        auVar4 = vblendps_avx(auVar39,ZEXT416(0) << 0x20,8);
        auVar4 = vhaddps_avx(auVar4,auVar4);
        auVar4 = vhaddps_avx(auVar4,auVar4);
        fVar59 = _DAT_14615a130;
        if (_DAT_14615a034 < auVar4._0_4_) {
          auVar29 = vrsqrtss_avx(auVar4,auVar4);
          fVar59 = auVar29._0_4_;
          fVar59 = fVar59 * _DAT_145fc6f08 * (fVar59 * auVar4._0_4_ * fVar59 + _DAT_145fc6f04);
          fVar74 = fVar59 * fVar84 * *(float *)(pauVar2[6] + 8);
          auVar64._0_4_ = fVar69 * fVar59;
          auVar64._4_4_ = fVar48 * fVar59;
          auVar64._8_4_ = fVar49 * fVar59;
          auVar64._12_4_ = fVar50 * fVar59;
          auVar4 = vshufps_avx(auVar64,auVar64,0x55);
          auVar29 = vshufps_avx(auVar64,auVar64,0xaa);
          auVar65._0_4_ =
               (auVar29._0_4_ * auVar24._0_4_ +
               auVar4._0_4_ * auVar37._0_4_ + auVar64._0_4_ * fVar30) * auVar64._0_4_;
          auVar65._4_4_ =
               (auVar29._4_4_ * auVar24._4_4_ + auVar4._4_4_ * auVar37._4_4_ + auVar64._0_4_ * 0.0)
               * auVar64._4_4_;
          auVar65._8_4_ =
               (auVar29._8_4_ * auVar24._8_4_ + auVar4._8_4_ * auVar37._8_4_ + auVar64._0_4_ * 0.0)
               * auVar64._8_4_;
          auVar65._12_4_ =
               (auVar29._12_4_ * auVar24._12_4_ +
               auVar4._12_4_ * auVar37._12_4_ + auVar64._0_4_ * 0.0) * auVar64._12_4_;
          auVar4 = vblendps_avx(auVar65,ZEXT416(0) << 0x20,8);
          auVar4 = vhaddps_avx(auVar4,auVar4);
          auVar4 = vhaddps_avx(auVar4,auVar4);
          fVar59 = fVar76 + auVar4._0_4_;
          auVar29 = vcmpss_avx(ZEXT416(0) << 0x20,ZEXT416((uint)fVar59),4);
          auVar4 = vcmpss_avx(ZEXT416((uint)(fVar74 * fVar59)),ZEXT416((uint)_DAT_145fc6ed8),1);
          auVar89._4_4_ = _DAT_145fc6f48;
          auVar89._0_4_ = _DAT_145fc6f48;
          auVar89._8_4_ = _DAT_145fc6f48;
          auVar89._12_4_ = _DAT_145fc6f48;
          auVar4 = vblendvps_avx(auVar89,ZEXT416((uint)(-(fVar74 * fVar59) - 0.0)),auVar4);
          fVar59 = (float)(auVar29._0_4_ & (uint)(_DAT_145fc6ed8 / fVar59)) * auVar4._0_4_;
          auVar40._0_4_ = fVar59 * fVar69;
          auVar40._4_4_ = fVar59 * fVar48;
          auVar40._8_4_ = fVar59 * fVar49;
          auVar40._12_4_ = fVar59 * fVar50;
          auVar4 = vshufps_avx(auVar40,auVar40,0xd2);
          auVar29 = vshufps_avx(auVar40,auVar40,0xc9);
          *pfVar14 = auVar40._0_4_ * fStack_1a8 + fVar17;
          pfVar14[1] = auVar40._4_4_ * fStack_1a4 + fVar20;
          pfVar14[2] = auVar40._8_4_ * fStack_1a0 + fVar21;
          pfVar14[3] = auVar40._12_4_ * fStack_19c + fVar82;
          fVar59 = _DAT_14615a130;
          auVar99._0_4_ = -(auVar29._0_4_ * fVar60) + auVar4._0_4_ * fVar71;
          auVar99._4_4_ = -(auVar29._4_4_ * fVar67) + auVar4._4_4_ * fVar77;
          auVar99._8_4_ = -(auVar29._8_4_ * fVar68) + auVar4._8_4_ * fVar83;
          auVar99._12_4_ = -(auVar29._12_4_ * fVar70) + auVar4._12_4_ * fVar85;
          auVar4 = vshufps_avx(auVar99,auVar99,0x55);
          auVar29 = vshufps_avx(auVar99,auVar99,0xaa);
          fVar69 = auVar29._0_4_ * auVar55._0_4_ +
                   auVar4._0_4_ * auVar18._0_4_ + auVar99._0_4_ * auVar41._0_4_;
          fVar48 = auVar29._4_4_ * auVar55._4_4_ +
                   auVar4._4_4_ * auVar18._4_4_ + auVar99._0_4_ * auVar41._4_4_;
          fVar49 = auVar29._8_4_ * auVar55._8_4_ +
                   auVar4._8_4_ * auVar18._8_4_ + auVar99._0_4_ * auVar41._8_4_;
          fVar74 = auVar29._12_4_ * auVar55._12_4_ +
                   auVar4._12_4_ * auVar18._12_4_ + auVar99._0_4_ * auVar41._12_4_;
          auVar28._0_4_ = fVar69 * fVar69;
          auVar28._4_4_ = fVar48 * fVar48;
          auVar28._8_4_ = fVar49 * fVar49;
          auVar28._12_4_ = fVar74 * fVar74;
          auVar4 = vblendps_avx(auVar28,ZEXT416(0) << 0x20,8);
          auVar4 = vhaddps_avx(auVar4,auVar4);
          auVar4 = vhaddps_avx(auVar4,auVar4);
          fVar17 = auVar4._0_4_ * _DAT_14615cb28;
          fVar30 = fVar17 + fVar86;
          fVar17 = (fVar86 - fVar17) / fVar30;
          fVar30 = fVar30 + fVar30;
          auVar56._4_4_ = fVar30;
          auVar56._0_4_ = fVar30;
          auVar56._8_4_ = fVar30;
          auVar56._12_4_ = fVar30;
          auVar4 = vrcpps_avx(auVar56);
          fVar20 = auVar4._0_4_;
          fVar21 = auVar4._4_4_;
          fVar82 = auVar4._8_4_;
          fVar86 = auVar4._12_4_;
          auVar66._0_4_ = (uint)auVar42._0_4_ ^ uVar7;
          auVar66._4_4_ = (uint)auVar42._4_4_ ^ uVar7;
          auVar66._8_4_ = (uint)auVar42._8_4_ ^ uVar7;
          auVar66._12_4_ = (uint)auVar42._12_4_ ^ uVar7;
          auVar57._0_4_ = fVar69 * (-((fVar20 * fVar30 - _DAT_145fc6ed8) * fVar20) + fVar20);
          auVar57._4_4_ = fVar48 * (-((fVar21 * fVar30 - _DAT_145fc6ed8) * fVar21) + fVar21);
          auVar57._8_4_ = fVar49 * (-((fVar82 * fVar30 - _DAT_145fc6ed8) * fVar82) + fVar82);
          auVar57._12_4_ = fVar74 * (-((fVar86 * fVar30 - _DAT_145fc6ed8) * fVar86) + fVar86);
          auVar4 = vblendps_avx(auVar66,auVar42,10);
          auVar37 = vshufps_avx(auVar4,auVar4,0x1b);
          auVar24 = vshufps_avx(auVar57,auVar57,0x55);
          auVar29 = vshufpd_avx(auVar42,auVar66,1);
          auVar4 = vblendps_avx(auVar66,auVar42,9);
          auVar34 = vshufps_avx(auVar57,auVar57,0xaa);
          auVar4 = vshufps_avx(auVar4,auVar4,0xb1);
          auVar19._0_4_ = -(auVar40._0_4_ * fVar76) + auVar19._0_4_;
          auVar19._4_4_ = -(auVar40._4_4_ * fVar76) + auVar19._4_4_;
          auVar19._8_4_ = -(auVar40._8_4_ * fVar76) + auVar19._8_4_;
          auVar19._12_4_ = -(auVar40._12_4_ * fVar76) + auVar19._12_4_;
          pfVar14[4] = auVar34._0_4_ * auVar4._0_4_ +
                       auVar24._0_4_ * auVar29._0_4_ +
                       auVar57._0_4_ * auVar37._0_4_ + fVar17 * auVar42._0_4_;
          pfVar14[5] = auVar34._4_4_ * auVar4._4_4_ +
                       auVar24._4_4_ * auVar29._4_4_ +
                       auVar57._0_4_ * auVar37._4_4_ + fVar17 * auVar42._4_4_;
          pfVar14[6] = auVar34._8_4_ * auVar4._8_4_ +
                       auVar24._8_4_ * auVar29._8_4_ +
                       auVar57._0_4_ * auVar37._8_4_ + fVar17 * auVar42._8_4_;
          pfVar14[7] = auVar34._12_4_ * auVar4._12_4_ +
                       auVar24._12_4_ * auVar29._12_4_ +
                       auVar57._0_4_ * auVar37._12_4_ + fVar17 * auVar42._12_4_;
        }
        auStack_1d8._4_4_ = 0;
        auStack_1d8._0_4_ = fVar84 * fVar84 + (float)auStack_1d8._0_4_;
        auVar4 = vblendps_avx(auVar35,pauVar10[1],8);
        pauVar10[1] = auVar4;
        pauVar10[2] = auVar93;
        auVar4 = vblendps_avx(auVar73,*pauVar10,8);
        *pauVar10 = auVar4;
        *(float *)(*pauVar10 + 0xc) = fVar43;
      }
      if ((short)uVar13 != 0) {
        auVar101 = vsubps_avx(auVar32,auVar101);
        auVar51 = vsubps_avx(auVar19,auVar51);
        uVar8 = 0;
        do {
          lVar16 = uVar8 * 2;
          fVar30 = *(float *)(lVar15 + 0x40 + uVar8 * 4);
          uVar8 = uVar8 + 1;
          lVar16 = (ulonglong)*(ushort *)(lVar15 + 0x24 + lVar16) * 0x10;
          pfVar1 = (float *)(param_8 + lVar16);
          fVar17 = pfVar1[1];
          fVar20 = pfVar1[2];
          fVar21 = pfVar1[3];
          pfVar14 = (float *)(param_9 + lVar16);
          auVar36._0_4_ = auVar51._0_4_ * fVar30 + *pfVar14;
          auVar36._4_4_ = auVar51._4_4_ * fVar30 + pfVar14[1];
          auVar36._8_4_ = auVar51._8_4_ * fVar30 + pfVar14[2];
          auVar36._12_4_ = auVar51._12_4_ * fVar30 + pfVar14[3];
          pfVar14 = (float *)(param_8 + lVar16);
          *pfVar14 = fVar30 * auVar101._0_4_ + *pfVar1;
          pfVar14[1] = fVar30 * auVar101._4_4_ + fVar17;
          pfVar14[2] = fVar30 * auVar101._8_4_ + fVar20;
          pfVar14[3] = fVar30 * auVar101._12_4_ + fVar21;
          *(undefined1 (*) [16])(param_9 + lVar16) = auVar36;
        } while (uVar13 != uVar8);
      }
      uVar12 = uVar12 + 1;
      lVar15 = lVar15 + 0x80;
    } while (uVar12 != param_1);
    iVar11 = iVar11 + 1;
  } while ((iVar11 < param_4) && (param_5 < (float)auStack_1d8._0_4_));
  return;
}

