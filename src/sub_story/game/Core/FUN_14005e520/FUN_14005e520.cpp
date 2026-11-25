// Recovered from game_scarlett_master.exe (GTA VI, Xbox Series X, PE32+ x64)
// Address: 14005e520  size: 3421 bytes
// Name:    FUN_14005e520
// Subsystem: core
//
// Referenced strings (0 in this body, 0 including direct callees):
// Callees: FUN_14005e520
//
// Generated decompilation. Formatting follows MiscRef/GTAVSRC conventions;
// identifiers are recovered, not original. See ../../../README.md.

#include "gta6decomp/rage_types.h"


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_14005e520(longlong *param_1,longlong *param_2,ulonglong param_3,undefined1 (*param_4) [16])

{
  longlong *plVar1;
  undefined1 (*pauVar2) [16];
  float *pfVar3;
  longlong *plVar4;
  ulonglong uVar5;
  longlong *plVar6;
  ulonglong uVar7;
  ulonglong uVar8;
  longlong *plVar9;
  longlong *plVar10;
  float *pfVar11;
  ulonglong uVar12;
  longlong lVar13;
  float *pfVar14;
  ulonglong uVar15;
  ulonglong uVar16;
  longlong *plVar17;
  ulonglong uVar18;
  bool bVar19;
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
  float fVar30;
  float fVar55;
  float fVar56;
  float fVar57;
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
  undefined1 auVar43 [16];
  undefined1 auVar44 [16];
  undefined1 auVar45 [16];
  undefined1 auVar46 [16];
  undefined1 auVar47 [16];
  undefined1 auVar48 [16];
  undefined1 auVar49 [16];
  undefined1 auVar50 [16];
  undefined1 auVar51 [16];
  undefined1 auVar52 [16];
  undefined1 auVar53 [16];
  undefined1 auVar54 [16];
  float fVar58;
  float fVar59;
  float fVar75;
  float fVar77;
  float fVar79;
  undefined1 auVar60 [16];
  undefined1 auVar61 [16];
  undefined1 auVar62 [16];
  undefined1 auVar63 [16];
  undefined1 auVar64 [16];
  undefined1 auVar65 [16];
  undefined1 auVar66 [16];
  undefined1 auVar67 [16];
  undefined1 auVar68 [16];
  undefined1 auVar69 [16];
  float fVar76;
  float fVar78;
  float fVar80;
  undefined1 auVar70 [16];
  undefined1 auVar71 [16];
  undefined1 auVar72 [16];
  undefined1 auVar73 [16];
  undefined1 auVar74 [16];
  float fVar81;
  float fVar83;
  float fVar84;
  float fVar85;
  undefined1 auVar82 [16];
  undefined1 auVar86 [16];
  float fVar87;
  float fVar88;
  float fVar89;
  float fVar90;
  undefined1 auVar91 [64];
  
  uVar8 = (longlong)param_2 - (longlong)param_1;
  if (0x100 < (longlong)uVar8) {
    auVar91 = ZEXT1264(ZEXT812(0));
    plVar4 = param_2;
    fVar87 = _DAT_145fc6edc;
    fVar88 = _DAT_145fc6edc;
    fVar89 = _DAT_145fc6edc;
    fVar90 = _DAT_145fc6edc;
    fVar81 = _DAT_145fc6f08;
    fVar83 = _DAT_145fc6f08;
    fVar84 = _DAT_145fc6f08;
    fVar85 = _DAT_145fc6f08;
    do {
      uVar5 = uVar8 >> 4;
      if ((longlong)param_3 < 1) {
        auVar29._0_12_ = ZEXT812(0);
        auVar29._12_4_ = 0;
        uVar15 = (uVar8 >> 3) - 1;
        uVar12 = uVar15 >> 1;
        do {
          uVar7 = uVar5 - 1;
          pfVar11 = (float *)param_1[uVar5 - 1];
          uVar16 = uVar7;
          uVar18 = uVar7;
          if ((longlong)uVar5 <= (longlong)uVar12) {
            do {
              auVar51 = *param_4;
              pfVar14 = (float *)param_1[uVar18 * 2 + 1];
              pfVar3 = (float *)param_1[uVar18 * 2 + 2];
              fVar81 = -(fVar87 * (*pfVar3 + pfVar3[4])) + auVar51._0_4_;
              fVar83 = -(fVar88 * (pfVar3[1] + pfVar3[5])) + auVar51._4_4_;
              fVar84 = -(fVar89 * (pfVar3[2] + pfVar3[6])) + auVar51._8_4_;
              fVar85 = -(fVar90 * (pfVar3[3] + pfVar3[7])) + auVar51._12_4_;
              fVar59 = -(fVar87 * (*pfVar14 + pfVar14[4])) + auVar51._0_4_;
              fVar76 = -(fVar88 * (pfVar14[1] + pfVar14[5])) + auVar51._4_4_;
              fVar78 = -(fVar89 * (pfVar14[2] + pfVar14[6])) + auVar51._8_4_;
              fVar80 = -(fVar90 * (pfVar14[3] + pfVar14[7])) + auVar51._12_4_;
              auVar51._0_4_ = fVar81 * fVar81;
              auVar51._4_4_ = fVar83 * fVar83;
              auVar51._8_4_ = fVar84 * fVar84;
              auVar51._12_4_ = fVar85 * fVar85;
              auVar71._0_4_ = fVar59 * fVar59;
              auVar71._4_4_ = fVar76 * fVar76;
              auVar71._8_4_ = fVar78 * fVar78;
              auVar71._12_4_ = fVar80 * fVar80;
              auVar51 = vblendps_avx(auVar51,auVar29,8);
              auVar71 = vblendps_avx(auVar71,auVar29,8);
              auVar51 = vhaddps_avx(auVar51,auVar51);
              auVar71 = vhaddps_avx(auVar71,auVar71);
              auVar51 = vhaddps_avx(auVar51,auVar51);
              auVar71 = vhaddps_avx(auVar71,auVar71);
              auVar51 = vcmpps_avx(auVar51,auVar71,1);
              if ((((SUB161(auVar51 >> 0x1f,0) & 1) == 0 && (SUB161(auVar51 >> 0x3f,0) & 1) == 0) &&
                  (SUB161(auVar51 >> 0x5f,0) & 1) == 0) && -1 < auVar51[0xf]) {
                uVar16 = uVar18 * 2 + 2;
              }
              else {
                uVar16 = uVar18 * 2 + 1;
              }
              param_1[uVar18] = param_1[uVar16];
              uVar18 = uVar16;
            } while (uVar16 < uVar12);
          }
          if (((uVar8 & 8) == 0) && (uVar16 == uVar12)) {
            param_1[uVar12] = param_1[(uVar8 >> 3) - 1];
            uVar16 = uVar15;
          }
          while ((longlong)uVar5 <= (longlong)uVar16) {
            auVar51 = *param_4;
            uVar18 = (longlong)(uVar16 - 1) >> 1;
            pfVar14 = (float *)param_1[uVar18];
            fVar81 = -(fVar87 * (*pfVar11 + pfVar11[4])) + auVar51._0_4_;
            fVar83 = -(fVar88 * (pfVar11[1] + pfVar11[5])) + auVar51._4_4_;
            fVar84 = -(fVar89 * (pfVar11[2] + pfVar11[6])) + auVar51._8_4_;
            fVar85 = -(fVar90 * (pfVar11[3] + pfVar11[7])) + auVar51._12_4_;
            auVar72._0_4_ = fVar81 * fVar81;
            auVar72._4_4_ = fVar83 * fVar83;
            auVar72._8_4_ = fVar84 * fVar84;
            auVar72._12_4_ = fVar85 * fVar85;
            fVar81 = -(fVar87 * (*pfVar14 + pfVar14[4])) + auVar51._0_4_;
            fVar83 = -(fVar88 * (pfVar14[1] + pfVar14[5])) + auVar51._4_4_;
            fVar84 = -(fVar89 * (pfVar14[2] + pfVar14[6])) + auVar51._8_4_;
            fVar85 = -(fVar90 * (pfVar14[3] + pfVar14[7])) + auVar51._12_4_;
            auVar51 = vblendps_avx(auVar72,auVar29,8);
            auVar71 = vhaddps_avx(auVar51,auVar51);
            auVar52._0_4_ = fVar81 * fVar81;
            auVar52._4_4_ = fVar83 * fVar83;
            auVar52._8_4_ = fVar84 * fVar84;
            auVar52._12_4_ = fVar85 * fVar85;
            auVar51 = vblendps_avx(auVar52,auVar29,8);
            auVar51 = vhaddps_avx(auVar51,auVar51);
            auVar71 = vhaddps_avx(auVar71,auVar71);
            auVar51 = vhaddps_avx(auVar51,auVar51);
            auVar51 = vcmpps_avx(auVar51,auVar71,1);
            if ((((SUB161(auVar51 >> 0x1f,0) & 1) == 0 && (SUB161(auVar51 >> 0x3f,0) & 1) == 0) &&
                (SUB161(auVar51 >> 0x5f,0) & 1) == 0) && -1 < auVar51[0xf]) break;
            param_1[uVar16] = (longlong)pfVar14;
            uVar16 = uVar18;
          }
          param_1[uVar16] = (longlong)pfVar11;
          bVar19 = 1 < (longlong)uVar5;
          uVar5 = uVar7;
        } while (bVar19);
        if ((longlong)plVar4 - (longlong)param_1 < 9) {
          return;
        }
        auVar29 = ZEXT416(0) << 0x20;
        do {
          pfVar11 = (float *)plVar4[-1];
          plVar4[-1] = *param_1;
          plVar4 = plVar4 + -1;
          uVar5 = (longlong)plVar4 - (longlong)param_1;
          uVar8 = ((longlong)uVar5 >> 3) - 1;
          uVar15 = (longlong)uVar8 >> 1;
          if ((longlong)uVar15 < 1) {
            uVar12 = 0;
          }
          else {
            uVar16 = 0;
            do {
              auVar51 = *param_4;
              pfVar14 = (float *)param_1[uVar16 * 2 + 1];
              pfVar3 = (float *)param_1[uVar16 * 2 + 2];
              fVar81 = -(fVar87 * (*pfVar3 + pfVar3[4])) + auVar51._0_4_;
              fVar83 = -(fVar88 * (pfVar3[1] + pfVar3[5])) + auVar51._4_4_;
              fVar84 = -(fVar89 * (pfVar3[2] + pfVar3[6])) + auVar51._8_4_;
              fVar85 = -(fVar90 * (pfVar3[3] + pfVar3[7])) + auVar51._12_4_;
              fVar59 = -(fVar87 * (*pfVar14 + pfVar14[4])) + auVar51._0_4_;
              fVar76 = -(fVar88 * (pfVar14[1] + pfVar14[5])) + auVar51._4_4_;
              fVar78 = -(fVar89 * (pfVar14[2] + pfVar14[6])) + auVar51._8_4_;
              fVar80 = -(fVar90 * (pfVar14[3] + pfVar14[7])) + auVar51._12_4_;
              auVar53._0_4_ = fVar81 * fVar81;
              auVar53._4_4_ = fVar83 * fVar83;
              auVar53._8_4_ = fVar84 * fVar84;
              auVar53._12_4_ = fVar85 * fVar85;
              auVar73._0_4_ = fVar59 * fVar59;
              auVar73._4_4_ = fVar76 * fVar76;
              auVar73._8_4_ = fVar78 * fVar78;
              auVar73._12_4_ = fVar80 * fVar80;
              auVar51 = vblendps_avx(auVar53,auVar29,8);
              auVar71 = vblendps_avx(auVar73,auVar29,8);
              auVar51 = vhaddps_avx(auVar51,auVar51);
              auVar71 = vhaddps_avx(auVar71,auVar71);
              auVar51 = vhaddps_avx(auVar51,auVar51);
              auVar71 = vhaddps_avx(auVar71,auVar71);
              auVar51 = vcmpps_avx(auVar51,auVar71,1);
              if ((((SUB161(auVar51 >> 0x1f,0) & 1) == 0 && (SUB161(auVar51 >> 0x3f,0) & 1) == 0) &&
                  (SUB161(auVar51 >> 0x5f,0) & 1) == 0) && -1 < auVar51[0xf]) {
                uVar12 = uVar16 * 2 + 2;
              }
              else {
                uVar12 = uVar16 * 2 + 1;
              }
              param_1[uVar16] = param_1[uVar12];
              uVar16 = uVar12;
            } while ((longlong)uVar12 < (longlong)uVar15);
          }
          if (((uVar5 & 8) == 0) && (uVar12 == uVar15)) {
            param_1[uVar15] = param_1[((longlong)uVar5 >> 3) + -1];
            uVar12 = uVar8;
          }
          if (0 < (longlong)uVar12) {
            do {
              uVar8 = uVar12 - 1;
              auVar51 = *param_4;
              uVar15 = uVar8 >> 1;
              pfVar14 = (float *)param_1[uVar15];
              fVar81 = -(fVar87 * (*pfVar11 + pfVar11[4])) + auVar51._0_4_;
              fVar83 = -(fVar88 * (pfVar11[1] + pfVar11[5])) + auVar51._4_4_;
              fVar84 = -(fVar89 * (pfVar11[2] + pfVar11[6])) + auVar51._8_4_;
              fVar85 = -(fVar90 * (pfVar11[3] + pfVar11[7])) + auVar51._12_4_;
              auVar74._0_4_ = fVar81 * fVar81;
              auVar74._4_4_ = fVar83 * fVar83;
              auVar74._8_4_ = fVar84 * fVar84;
              auVar74._12_4_ = fVar85 * fVar85;
              fVar81 = -(fVar87 * (*pfVar14 + pfVar14[4])) + auVar51._0_4_;
              fVar83 = -(fVar88 * (pfVar14[1] + pfVar14[5])) + auVar51._4_4_;
              fVar84 = -(fVar89 * (pfVar14[2] + pfVar14[6])) + auVar51._8_4_;
              fVar85 = -(fVar90 * (pfVar14[3] + pfVar14[7])) + auVar51._12_4_;
              auVar51 = vblendps_avx(auVar74,auVar29,8);
              auVar71 = vhaddps_avx(auVar51,auVar51);
              auVar54._0_4_ = fVar81 * fVar81;
              auVar54._4_4_ = fVar83 * fVar83;
              auVar54._8_4_ = fVar84 * fVar84;
              auVar54._12_4_ = fVar85 * fVar85;
              auVar51 = vblendps_avx(auVar54,auVar29,8);
              auVar51 = vhaddps_avx(auVar51,auVar51);
              auVar71 = vhaddps_avx(auVar71,auVar71);
              auVar51 = vhaddps_avx(auVar51,auVar51);
              auVar51 = vcmpps_avx(auVar51,auVar71,1);
              if ((((SUB161(auVar51 >> 0x1f,0) & 1) == 0 && (SUB161(auVar51 >> 0x3f,0) & 1) == 0) &&
                  (SUB161(auVar51 >> 0x5f,0) & 1) == 0) && -1 < auVar51[0xf]) goto LAB_14005f24f;
              param_1[uVar12] = (longlong)pfVar14;
              uVar12 = uVar15;
            } while (1 < uVar8);
            uVar12 = 0;
          }
LAB_14005f24f:
          param_1[uVar12] = (longlong)pfVar11;
          if ((longlong)uVar5 < 9) {
            return;
          }
        } while( true );
      }
      plVar9 = plVar4 + -1;
      plVar10 = param_1 + uVar5;
      lVar13 = (longlong)plVar9 - (longlong)param_1 >> 3;
      auVar29 = auVar91._0_16_;
      if (lVar13 < 0x29) {
        pfVar11 = (float *)*plVar10;
        pfVar14 = (float *)*param_1;
        fVar59 = *(float *)*param_4;
        fVar76 = *(float *)(*param_4 + 4);
        fVar78 = *(float *)(*param_4 + 8);
        fVar80 = *(float *)(*param_4 + 0xc);
        fVar30 = -(fVar87 * (*pfVar11 + pfVar11[4])) + fVar59;
        fVar55 = -(fVar88 * (pfVar11[1] + pfVar11[5])) + fVar76;
        fVar56 = -(fVar89 * (pfVar11[2] + pfVar11[6])) + fVar78;
        fVar57 = -(fVar90 * (pfVar11[3] + pfVar11[7])) + fVar80;
        fVar58 = -(fVar87 * (*pfVar14 + pfVar14[4])) + fVar59;
        fVar75 = -(fVar88 * (pfVar14[1] + pfVar14[5])) + fVar76;
        fVar77 = -(fVar89 * (pfVar14[2] + pfVar14[6])) + fVar78;
        fVar79 = -(fVar90 * (pfVar14[3] + pfVar14[7])) + fVar80;
        auVar43._0_4_ = fVar30 * fVar30;
        auVar43._4_4_ = fVar55 * fVar55;
        auVar43._8_4_ = fVar56 * fVar56;
        auVar43._12_4_ = fVar57 * fVar57;
        auVar70._0_4_ = fVar58 * fVar58;
        auVar70._4_4_ = fVar75 * fVar75;
        auVar70._8_4_ = fVar77 * fVar77;
        auVar70._12_4_ = fVar79 * fVar79;
        auVar51 = vblendps_avx(auVar43,auVar29,8);
        auVar71 = vblendps_avx(auVar70,auVar29,8);
        auVar51 = vhaddps_avx(auVar51,auVar51);
        auVar71 = vhaddps_avx(auVar71,auVar71);
        auVar52 = vhaddps_avx(auVar51,auVar51);
        auVar51 = vhaddps_avx(auVar71,auVar71);
        auVar51 = vcmpps_avx(auVar52,auVar51,1);
        if ((((SUB161(auVar51 >> 0x1f,0) & 1) != 0 || (SUB161(auVar51 >> 0x3f,0) & 1) != 0) ||
            (SUB161(auVar51 >> 0x5f,0) & 1) != 0) || auVar51[0xf] < '\0') {
          *plVar10 = (longlong)pfVar14;
          *param_1 = (longlong)pfVar11;
          pfVar11 = (float *)*plVar10;
          fVar59 = *(float *)*param_4;
          fVar76 = *(float *)(*param_4 + 4);
          fVar78 = *(float *)(*param_4 + 8);
          fVar80 = *(float *)(*param_4 + 0xc);
          fVar30 = fVar81 * (*pfVar11 + pfVar11[4]) + fVar59;
          fVar55 = fVar83 * (pfVar11[1] + pfVar11[5]) + fVar76;
          fVar56 = fVar84 * (pfVar11[2] + pfVar11[6]) + fVar78;
          fVar57 = fVar85 * (pfVar11[3] + pfVar11[7]) + fVar80;
          auVar44._0_4_ = fVar30 * fVar30;
          auVar44._4_4_ = fVar55 * fVar55;
          auVar44._8_4_ = fVar56 * fVar56;
          auVar44._12_4_ = fVar57 * fVar57;
          auVar51 = vblendps_avx(auVar44,auVar29,8);
          auVar51 = vhaddps_avx(auVar51,auVar51);
          auVar52 = vhaddps_avx(auVar51,auVar51);
        }
        pfVar14 = (float *)*plVar9;
        fVar59 = fVar81 * (*pfVar14 + pfVar14[4]) + fVar59;
        fVar76 = fVar83 * (pfVar14[1] + pfVar14[5]) + fVar76;
        fVar78 = fVar84 * (pfVar14[2] + pfVar14[6]) + fVar78;
        fVar80 = fVar85 * (pfVar14[3] + pfVar14[7]) + fVar80;
        auVar22._0_4_ = fVar59 * fVar59;
        auVar22._4_4_ = fVar76 * fVar76;
        auVar22._8_4_ = fVar78 * fVar78;
        auVar22._12_4_ = fVar80 * fVar80;
        auVar51 = vblendps_avx(auVar22,auVar29,8);
        auVar51 = vhaddps_avx(auVar51,auVar51);
        auVar51 = vhaddps_avx(auVar51,auVar51);
        auVar51 = vcmpps_avx(auVar51,auVar52,1);
        if ((((SUB161(auVar51 >> 0x1f,0) & 1) != 0 || (SUB161(auVar51 >> 0x3f,0) & 1) != 0) ||
            (SUB161(auVar51 >> 0x5f,0) & 1) != 0) || auVar51[0xf] < '\0') {
          *plVar9 = (longlong)pfVar11;
          *plVar10 = (longlong)pfVar14;
          pfVar11 = (float *)*param_1;
          auVar51 = *param_4;
          fVar59 = -(fVar87 * (*pfVar14 + pfVar14[4])) + auVar51._0_4_;
          fVar76 = -(fVar88 * (pfVar14[1] + pfVar14[5])) + auVar51._4_4_;
          fVar78 = -(fVar89 * (pfVar14[2] + pfVar14[6])) + auVar51._8_4_;
          fVar80 = -(fVar90 * (pfVar14[3] + pfVar14[7])) + auVar51._12_4_;
          fVar30 = -(fVar87 * (*pfVar11 + pfVar11[4])) + auVar51._0_4_;
          fVar55 = -(fVar88 * (pfVar11[1] + pfVar11[5])) + auVar51._4_4_;
          fVar56 = -(fVar89 * (pfVar11[2] + pfVar11[6])) + auVar51._8_4_;
          fVar57 = -(fVar90 * (pfVar11[3] + pfVar11[7])) + auVar51._12_4_;
          auVar23._0_4_ = fVar59 * fVar59;
          auVar23._4_4_ = fVar76 * fVar76;
          auVar23._8_4_ = fVar78 * fVar78;
          auVar23._12_4_ = fVar80 * fVar80;
          auVar51 = vblendps_avx(auVar23,auVar29,8);
          auVar45._0_4_ = fVar30 * fVar30;
          auVar45._4_4_ = fVar55 * fVar55;
          auVar45._8_4_ = fVar56 * fVar56;
          auVar45._12_4_ = fVar57 * fVar57;
          auVar71 = vhaddps_avx(auVar51,auVar51);
          auVar51 = vblendps_avx(auVar45,auVar29,8);
          auVar51 = vhaddps_avx(auVar51,auVar51);
          auVar71 = vhaddps_avx(auVar71,auVar71);
          auVar51 = vhaddps_avx(auVar51,auVar51);
          auVar51 = vcmpps_avx(auVar71,auVar51,1);
          if ((((SUB161(auVar51 >> 0x1f,0) & 1) != 0 || (SUB161(auVar51 >> 0x3f,0) & 1) != 0) ||
              (SUB161(auVar51 >> 0x5f,0) & 1) != 0) || auVar51[0xf] < '\0') {
            *plVar10 = (longlong)pfVar11;
            *param_1 = (longlong)pfVar14;
          }
        }
      }
      else {
        uVar8 = lVar13 + 1;
        pfVar11 = (float *)*param_1;
        pfVar14 = *(float **)((longlong)param_1 + (uVar8 & 0xfffffffffffffff8));
        uVar8 = uVar8 >> 3;
        fVar59 = *(float *)*param_4;
        fVar76 = *(float *)(*param_4 + 4);
        fVar78 = *(float *)(*param_4 + 8);
        fVar80 = *(float *)(*param_4 + 0xc);
        fVar30 = -(fVar87 * (*pfVar14 + pfVar14[4])) + fVar59;
        fVar55 = -(fVar88 * (pfVar14[1] + pfVar14[5])) + fVar76;
        fVar56 = -(fVar89 * (pfVar14[2] + pfVar14[6])) + fVar78;
        fVar57 = -(fVar90 * (pfVar14[3] + pfVar14[7])) + fVar80;
        fVar58 = -(fVar87 * (*pfVar11 + pfVar11[4])) + fVar59;
        fVar75 = -(fVar88 * (pfVar11[1] + pfVar11[5])) + fVar76;
        fVar77 = -(fVar89 * (pfVar11[2] + pfVar11[6])) + fVar78;
        fVar79 = -(fVar90 * (pfVar11[3] + pfVar11[7])) + fVar80;
        auVar31._0_4_ = fVar30 * fVar30;
        auVar31._4_4_ = fVar55 * fVar55;
        auVar31._8_4_ = fVar56 * fVar56;
        auVar31._12_4_ = fVar57 * fVar57;
        auVar60._0_4_ = fVar58 * fVar58;
        auVar60._4_4_ = fVar75 * fVar75;
        auVar60._8_4_ = fVar77 * fVar77;
        auVar60._12_4_ = fVar79 * fVar79;
        auVar51 = vblendps_avx(auVar31,auVar29,8);
        auVar71 = vblendps_avx(auVar60,auVar29,8);
        auVar51 = vhaddps_avx(auVar51,auVar51);
        auVar71 = vhaddps_avx(auVar71,auVar71);
        auVar52 = vhaddps_avx(auVar51,auVar51);
        auVar51 = vhaddps_avx(auVar71,auVar71);
        auVar51 = vcmpps_avx(auVar52,auVar51,1);
        if ((((SUB161(auVar51 >> 0x1f,0) & 1) != 0 || (SUB161(auVar51 >> 0x3f,0) & 1) != 0) ||
            (SUB161(auVar51 >> 0x5f,0) & 1) != 0) || auVar51[0xf] < '\0') {
          param_1[uVar8] = (longlong)pfVar11;
          *param_1 = (longlong)pfVar14;
          pfVar14 = (float *)param_1[uVar8];
          fVar59 = *(float *)*param_4;
          fVar76 = *(float *)(*param_4 + 4);
          fVar78 = *(float *)(*param_4 + 8);
          fVar80 = *(float *)(*param_4 + 0xc);
          fVar30 = fVar81 * (*pfVar14 + pfVar14[4]) + fVar59;
          fVar55 = fVar83 * (pfVar14[1] + pfVar14[5]) + fVar76;
          fVar56 = fVar84 * (pfVar14[2] + pfVar14[6]) + fVar78;
          fVar57 = fVar85 * (pfVar14[3] + pfVar14[7]) + fVar80;
          auVar32._0_4_ = fVar30 * fVar30;
          auVar32._4_4_ = fVar55 * fVar55;
          auVar32._8_4_ = fVar56 * fVar56;
          auVar32._12_4_ = fVar57 * fVar57;
          auVar51 = vblendps_avx(auVar32,auVar29,8);
          auVar51 = vhaddps_avx(auVar51,auVar51);
          auVar52 = vhaddps_avx(auVar51,auVar51);
        }
        pfVar11 = (float *)param_1[uVar8 * 2];
        fVar30 = fVar81 * (*pfVar11 + pfVar11[4]) + fVar59;
        fVar55 = fVar83 * (pfVar11[1] + pfVar11[5]) + fVar76;
        fVar56 = fVar84 * (pfVar11[2] + pfVar11[6]) + fVar78;
        fVar57 = fVar85 * (pfVar11[3] + pfVar11[7]) + fVar80;
        auVar61._0_4_ = fVar30 * fVar30;
        auVar61._4_4_ = fVar55 * fVar55;
        auVar61._8_4_ = fVar56 * fVar56;
        auVar61._12_4_ = fVar57 * fVar57;
        auVar51 = vblendps_avx(auVar61,auVar29,8);
        auVar51 = vhaddps_avx(auVar51,auVar51);
        auVar51 = vhaddps_avx(auVar51,auVar51);
        auVar51 = vcmpps_avx(auVar51,auVar52,1);
        if ((((SUB161(auVar51 >> 0x1f,0) & 1) != 0 || (SUB161(auVar51 >> 0x3f,0) & 1) != 0) ||
            (SUB161(auVar51 >> 0x5f,0) & 1) != 0) || auVar51[0xf] < '\0') {
          param_1[uVar8 * 2] = (longlong)pfVar14;
          param_1[uVar8] = (longlong)pfVar11;
          pfVar14 = (float *)*param_1;
          fVar59 = *(float *)*param_4;
          fVar76 = *(float *)(*param_4 + 4);
          fVar78 = *(float *)(*param_4 + 8);
          fVar80 = *(float *)(*param_4 + 0xc);
          fVar30 = -(fVar87 * (*pfVar11 + pfVar11[4])) + fVar59;
          fVar55 = -(fVar88 * (pfVar11[1] + pfVar11[5])) + fVar76;
          fVar56 = -(fVar89 * (pfVar11[2] + pfVar11[6])) + fVar78;
          fVar57 = -(fVar90 * (pfVar11[3] + pfVar11[7])) + fVar80;
          fVar58 = -(fVar87 * (*pfVar14 + pfVar14[4])) + fVar59;
          fVar75 = -(fVar88 * (pfVar14[1] + pfVar14[5])) + fVar76;
          fVar77 = -(fVar89 * (pfVar14[2] + pfVar14[6])) + fVar78;
          fVar79 = -(fVar90 * (pfVar14[3] + pfVar14[7])) + fVar80;
          auVar33._0_4_ = fVar30 * fVar30;
          auVar33._4_4_ = fVar55 * fVar55;
          auVar33._8_4_ = fVar56 * fVar56;
          auVar33._12_4_ = fVar57 * fVar57;
          auVar62._0_4_ = fVar58 * fVar58;
          auVar62._4_4_ = fVar75 * fVar75;
          auVar62._8_4_ = fVar77 * fVar77;
          auVar62._12_4_ = fVar79 * fVar79;
          auVar51 = vblendps_avx(auVar33,auVar29,8);
          auVar71 = vhaddps_avx(auVar51,auVar51);
          auVar51 = vblendps_avx(auVar62,auVar29,8);
          auVar51 = vhaddps_avx(auVar51,auVar51);
          auVar71 = vhaddps_avx(auVar71,auVar71);
          auVar51 = vhaddps_avx(auVar51,auVar51);
          auVar51 = vcmpps_avx(auVar71,auVar51,1);
          if ((((SUB161(auVar51 >> 0x1f,0) & 1) != 0 || (SUB161(auVar51 >> 0x3f,0) & 1) != 0) ||
              (SUB161(auVar51 >> 0x5f,0) & 1) != 0) || auVar51[0xf] < '\0') {
            param_1[uVar8] = (longlong)pfVar14;
            *param_1 = (longlong)pfVar11;
            fVar59 = *(float *)*param_4;
            fVar76 = *(float *)(*param_4 + 4);
            fVar78 = *(float *)(*param_4 + 8);
            fVar80 = *(float *)(*param_4 + 0xc);
          }
        }
        pfVar11 = (float *)plVar10[-uVar8];
        pfVar14 = (float *)*plVar10;
        fVar30 = -(fVar87 * (*pfVar14 + pfVar14[4])) + fVar59;
        fVar55 = -(fVar88 * (pfVar14[1] + pfVar14[5])) + fVar76;
        fVar56 = -(fVar89 * (pfVar14[2] + pfVar14[6])) + fVar78;
        fVar57 = -(fVar90 * (pfVar14[3] + pfVar14[7])) + fVar80;
        fVar58 = -(fVar87 * (*pfVar11 + pfVar11[4])) + fVar59;
        fVar75 = -(fVar88 * (pfVar11[1] + pfVar11[5])) + fVar76;
        fVar77 = -(fVar89 * (pfVar11[2] + pfVar11[6])) + fVar78;
        fVar79 = -(fVar90 * (pfVar11[3] + pfVar11[7])) + fVar80;
        auVar34._0_4_ = fVar30 * fVar30;
        auVar34._4_4_ = fVar55 * fVar55;
        auVar34._8_4_ = fVar56 * fVar56;
        auVar34._12_4_ = fVar57 * fVar57;
        auVar63._0_4_ = fVar58 * fVar58;
        auVar63._4_4_ = fVar75 * fVar75;
        auVar63._8_4_ = fVar77 * fVar77;
        auVar63._12_4_ = fVar79 * fVar79;
        auVar51 = vblendps_avx(auVar34,auVar29,8);
        auVar71 = vblendps_avx(auVar63,auVar29,8);
        auVar51 = vhaddps_avx(auVar51,auVar51);
        auVar71 = vhaddps_avx(auVar71,auVar71);
        auVar52 = vhaddps_avx(auVar51,auVar51);
        auVar51 = vhaddps_avx(auVar71,auVar71);
        auVar51 = vcmpps_avx(auVar52,auVar51,1);
        if ((((SUB161(auVar51 >> 0x1f,0) & 1) != 0 || (SUB161(auVar51 >> 0x3f,0) & 1) != 0) ||
            (SUB161(auVar51 >> 0x5f,0) & 1) != 0) || auVar51[0xf] < '\0') {
          *plVar10 = (longlong)pfVar11;
          plVar10[-uVar8] = (longlong)pfVar14;
          pfVar14 = (float *)*plVar10;
          fVar59 = *(float *)*param_4;
          fVar76 = *(float *)(*param_4 + 4);
          fVar78 = *(float *)(*param_4 + 8);
          fVar80 = *(float *)(*param_4 + 0xc);
          fVar30 = fVar81 * (*pfVar14 + pfVar14[4]) + fVar59;
          fVar55 = fVar83 * (pfVar14[1] + pfVar14[5]) + fVar76;
          fVar56 = fVar84 * (pfVar14[2] + pfVar14[6]) + fVar78;
          fVar57 = fVar85 * (pfVar14[3] + pfVar14[7]) + fVar80;
          auVar35._0_4_ = fVar30 * fVar30;
          auVar35._4_4_ = fVar55 * fVar55;
          auVar35._8_4_ = fVar56 * fVar56;
          auVar35._12_4_ = fVar57 * fVar57;
          auVar51 = vblendps_avx(auVar35,auVar29,8);
          auVar51 = vhaddps_avx(auVar51,auVar51);
          auVar52 = vhaddps_avx(auVar51,auVar51);
        }
        pfVar11 = (float *)plVar10[uVar8];
        fVar30 = fVar81 * (*pfVar11 + pfVar11[4]) + fVar59;
        fVar55 = fVar83 * (pfVar11[1] + pfVar11[5]) + fVar76;
        fVar56 = fVar84 * (pfVar11[2] + pfVar11[6]) + fVar78;
        fVar57 = fVar85 * (pfVar11[3] + pfVar11[7]) + fVar80;
        auVar64._0_4_ = fVar30 * fVar30;
        auVar64._4_4_ = fVar55 * fVar55;
        auVar64._8_4_ = fVar56 * fVar56;
        auVar64._12_4_ = fVar57 * fVar57;
        auVar51 = vblendps_avx(auVar64,auVar29,8);
        auVar51 = vhaddps_avx(auVar51,auVar51);
        auVar51 = vhaddps_avx(auVar51,auVar51);
        auVar51 = vcmpps_avx(auVar51,auVar52,1);
        if ((((SUB161(auVar51 >> 0x1f,0) & 1) != 0 || (SUB161(auVar51 >> 0x3f,0) & 1) != 0) ||
            (SUB161(auVar51 >> 0x5f,0) & 1) != 0) || auVar51[0xf] < '\0') {
          plVar10[uVar8] = (longlong)pfVar14;
          *plVar10 = (longlong)pfVar11;
          pfVar14 = (float *)plVar10[-uVar8];
          fVar59 = *(float *)*param_4;
          fVar76 = *(float *)(*param_4 + 4);
          fVar78 = *(float *)(*param_4 + 8);
          fVar80 = *(float *)(*param_4 + 0xc);
          fVar30 = -(fVar87 * (*pfVar11 + pfVar11[4])) + fVar59;
          fVar55 = -(fVar88 * (pfVar11[1] + pfVar11[5])) + fVar76;
          fVar56 = -(fVar89 * (pfVar11[2] + pfVar11[6])) + fVar78;
          fVar57 = -(fVar90 * (pfVar11[3] + pfVar11[7])) + fVar80;
          fVar58 = -(fVar87 * (*pfVar14 + pfVar14[4])) + fVar59;
          fVar75 = -(fVar88 * (pfVar14[1] + pfVar14[5])) + fVar76;
          fVar77 = -(fVar89 * (pfVar14[2] + pfVar14[6])) + fVar78;
          fVar79 = -(fVar90 * (pfVar14[3] + pfVar14[7])) + fVar80;
          auVar36._0_4_ = fVar30 * fVar30;
          auVar36._4_4_ = fVar55 * fVar55;
          auVar36._8_4_ = fVar56 * fVar56;
          auVar36._12_4_ = fVar57 * fVar57;
          auVar65._0_4_ = fVar58 * fVar58;
          auVar65._4_4_ = fVar75 * fVar75;
          auVar65._8_4_ = fVar77 * fVar77;
          auVar65._12_4_ = fVar79 * fVar79;
          auVar51 = vblendps_avx(auVar36,auVar29,8);
          auVar71 = vhaddps_avx(auVar51,auVar51);
          auVar51 = vblendps_avx(auVar65,auVar29,8);
          auVar51 = vhaddps_avx(auVar51,auVar51);
          auVar71 = vhaddps_avx(auVar71,auVar71);
          auVar51 = vhaddps_avx(auVar51,auVar51);
          auVar51 = vcmpps_avx(auVar71,auVar51,1);
          if ((((SUB161(auVar51 >> 0x1f,0) & 1) != 0 || (SUB161(auVar51 >> 0x3f,0) & 1) != 0) ||
              (SUB161(auVar51 >> 0x5f,0) & 1) != 0) || auVar51[0xf] < '\0') {
            *plVar10 = (longlong)pfVar14;
            plVar10[-uVar8] = (longlong)pfVar11;
            fVar59 = *(float *)*param_4;
            fVar76 = *(float *)(*param_4 + 4);
            fVar78 = *(float *)(*param_4 + 8);
            fVar80 = *(float *)(*param_4 + 0xc);
          }
        }
        pfVar11 = (float *)plVar9[uVar8 * -2];
        pfVar14 = (float *)plVar9[-uVar8];
        fVar30 = -(fVar87 * (*pfVar14 + pfVar14[4])) + fVar59;
        fVar55 = -(fVar88 * (pfVar14[1] + pfVar14[5])) + fVar76;
        fVar56 = -(fVar89 * (pfVar14[2] + pfVar14[6])) + fVar78;
        fVar57 = -(fVar90 * (pfVar14[3] + pfVar14[7])) + fVar80;
        fVar58 = -(fVar87 * (*pfVar11 + pfVar11[4])) + fVar59;
        fVar75 = -(fVar88 * (pfVar11[1] + pfVar11[5])) + fVar76;
        fVar77 = -(fVar89 * (pfVar11[2] + pfVar11[6])) + fVar78;
        fVar79 = -(fVar90 * (pfVar11[3] + pfVar11[7])) + fVar80;
        auVar37._0_4_ = fVar30 * fVar30;
        auVar37._4_4_ = fVar55 * fVar55;
        auVar37._8_4_ = fVar56 * fVar56;
        auVar37._12_4_ = fVar57 * fVar57;
        auVar66._0_4_ = fVar58 * fVar58;
        auVar66._4_4_ = fVar75 * fVar75;
        auVar66._8_4_ = fVar77 * fVar77;
        auVar66._12_4_ = fVar79 * fVar79;
        auVar51 = vblendps_avx(auVar37,auVar29,8);
        auVar71 = vblendps_avx(auVar66,auVar29,8);
        auVar51 = vhaddps_avx(auVar51,auVar51);
        auVar71 = vhaddps_avx(auVar71,auVar71);
        auVar52 = vhaddps_avx(auVar51,auVar51);
        auVar51 = vhaddps_avx(auVar71,auVar71);
        auVar51 = vcmpps_avx(auVar52,auVar51,1);
        if ((((SUB161(auVar51 >> 0x1f,0) & 1) != 0 || (SUB161(auVar51 >> 0x3f,0) & 1) != 0) ||
            (SUB161(auVar51 >> 0x5f,0) & 1) != 0) || auVar51[0xf] < '\0') {
          plVar9[-uVar8] = (longlong)pfVar11;
          plVar9[uVar8 * -2] = (longlong)pfVar14;
          pfVar14 = (float *)plVar9[-uVar8];
          fVar59 = *(float *)*param_4;
          fVar76 = *(float *)(*param_4 + 4);
          fVar78 = *(float *)(*param_4 + 8);
          fVar80 = *(float *)(*param_4 + 0xc);
          fVar30 = fVar81 * (*pfVar14 + pfVar14[4]) + fVar59;
          fVar55 = fVar83 * (pfVar14[1] + pfVar14[5]) + fVar76;
          fVar56 = fVar84 * (pfVar14[2] + pfVar14[6]) + fVar78;
          fVar57 = fVar85 * (pfVar14[3] + pfVar14[7]) + fVar80;
          auVar38._0_4_ = fVar30 * fVar30;
          auVar38._4_4_ = fVar55 * fVar55;
          auVar38._8_4_ = fVar56 * fVar56;
          auVar38._12_4_ = fVar57 * fVar57;
          auVar51 = vblendps_avx(auVar38,auVar29,8);
          auVar51 = vhaddps_avx(auVar51,auVar51);
          auVar52 = vhaddps_avx(auVar51,auVar51);
        }
        pfVar11 = (float *)*plVar9;
        fVar30 = fVar81 * (*pfVar11 + pfVar11[4]) + fVar59;
        fVar55 = fVar83 * (pfVar11[1] + pfVar11[5]) + fVar76;
        fVar56 = fVar84 * (pfVar11[2] + pfVar11[6]) + fVar78;
        fVar57 = fVar85 * (pfVar11[3] + pfVar11[7]) + fVar80;
        auVar67._0_4_ = fVar30 * fVar30;
        auVar67._4_4_ = fVar55 * fVar55;
        auVar67._8_4_ = fVar56 * fVar56;
        auVar67._12_4_ = fVar57 * fVar57;
        auVar51 = vblendps_avx(auVar67,auVar29,8);
        auVar51 = vhaddps_avx(auVar51,auVar51);
        auVar51 = vhaddps_avx(auVar51,auVar51);
        auVar51 = vcmpps_avx(auVar51,auVar52,1);
        if ((((SUB161(auVar51 >> 0x1f,0) & 1) != 0 || (SUB161(auVar51 >> 0x3f,0) & 1) != 0) ||
            (SUB161(auVar51 >> 0x5f,0) & 1) != 0) || auVar51[0xf] < '\0') {
          *plVar9 = (longlong)pfVar14;
          plVar9[-uVar8] = (longlong)pfVar11;
          pfVar14 = (float *)plVar9[uVar8 * -2];
          fVar59 = *(float *)*param_4;
          fVar76 = *(float *)(*param_4 + 4);
          fVar78 = *(float *)(*param_4 + 8);
          fVar80 = *(float *)(*param_4 + 0xc);
          fVar30 = -(fVar87 * (*pfVar11 + pfVar11[4])) + fVar59;
          fVar55 = -(fVar88 * (pfVar11[1] + pfVar11[5])) + fVar76;
          fVar56 = -(fVar89 * (pfVar11[2] + pfVar11[6])) + fVar78;
          fVar57 = -(fVar90 * (pfVar11[3] + pfVar11[7])) + fVar80;
          fVar58 = -(fVar87 * (*pfVar14 + pfVar14[4])) + fVar59;
          fVar75 = -(fVar88 * (pfVar14[1] + pfVar14[5])) + fVar76;
          fVar77 = -(fVar89 * (pfVar14[2] + pfVar14[6])) + fVar78;
          fVar79 = -(fVar90 * (pfVar14[3] + pfVar14[7])) + fVar80;
          auVar39._0_4_ = fVar30 * fVar30;
          auVar39._4_4_ = fVar55 * fVar55;
          auVar39._8_4_ = fVar56 * fVar56;
          auVar39._12_4_ = fVar57 * fVar57;
          auVar68._0_4_ = fVar58 * fVar58;
          auVar68._4_4_ = fVar75 * fVar75;
          auVar68._8_4_ = fVar77 * fVar77;
          auVar68._12_4_ = fVar79 * fVar79;
          auVar51 = vblendps_avx(auVar39,auVar29,8);
          auVar71 = vhaddps_avx(auVar51,auVar51);
          auVar51 = vblendps_avx(auVar68,auVar29,8);
          auVar51 = vhaddps_avx(auVar51,auVar51);
          auVar71 = vhaddps_avx(auVar71,auVar71);
          auVar51 = vhaddps_avx(auVar51,auVar51);
          auVar51 = vcmpps_avx(auVar71,auVar51,1);
          if ((((SUB161(auVar51 >> 0x1f,0) & 1) != 0 || (SUB161(auVar51 >> 0x3f,0) & 1) != 0) ||
              (SUB161(auVar51 >> 0x5f,0) & 1) != 0) || auVar51[0xf] < '\0') {
            plVar9[-uVar8] = (longlong)pfVar14;
            plVar9[uVar8 * -2] = (longlong)pfVar11;
            fVar59 = *(float *)*param_4;
            fVar76 = *(float *)(*param_4 + 4);
            fVar78 = *(float *)(*param_4 + 8);
            fVar80 = *(float *)(*param_4 + 0xc);
          }
        }
        pfVar11 = (float *)param_1[uVar8];
        pfVar14 = (float *)*plVar10;
        fVar30 = -(fVar87 * (*pfVar14 + pfVar14[4])) + fVar59;
        fVar55 = -(fVar88 * (pfVar14[1] + pfVar14[5])) + fVar76;
        fVar56 = -(fVar89 * (pfVar14[2] + pfVar14[6])) + fVar78;
        fVar57 = -(fVar90 * (pfVar14[3] + pfVar14[7])) + fVar80;
        fVar58 = -(fVar87 * (*pfVar11 + pfVar11[4])) + fVar59;
        fVar75 = -(fVar88 * (pfVar11[1] + pfVar11[5])) + fVar76;
        fVar77 = -(fVar89 * (pfVar11[2] + pfVar11[6])) + fVar78;
        fVar79 = -(fVar90 * (pfVar11[3] + pfVar11[7])) + fVar80;
        auVar40._0_4_ = fVar30 * fVar30;
        auVar40._4_4_ = fVar55 * fVar55;
        auVar40._8_4_ = fVar56 * fVar56;
        auVar40._12_4_ = fVar57 * fVar57;
        auVar69._0_4_ = fVar58 * fVar58;
        auVar69._4_4_ = fVar75 * fVar75;
        auVar69._8_4_ = fVar77 * fVar77;
        auVar69._12_4_ = fVar79 * fVar79;
        auVar51 = vblendps_avx(auVar40,auVar29,8);
        auVar71 = vblendps_avx(auVar69,auVar29,8);
        auVar51 = vhaddps_avx(auVar51,auVar51);
        auVar71 = vhaddps_avx(auVar71,auVar71);
        auVar52 = vhaddps_avx(auVar51,auVar51);
        auVar51 = vhaddps_avx(auVar71,auVar71);
        auVar51 = vcmpps_avx(auVar52,auVar51,1);
        if ((((SUB161(auVar51 >> 0x1f,0) & 1) != 0 || (SUB161(auVar51 >> 0x3f,0) & 1) != 0) ||
            (SUB161(auVar51 >> 0x5f,0) & 1) != 0) || auVar51[0xf] < '\0') {
          *plVar10 = (longlong)pfVar11;
          param_1[uVar8] = (longlong)pfVar14;
          pfVar14 = (float *)*plVar10;
          fVar59 = *(float *)*param_4;
          fVar76 = *(float *)(*param_4 + 4);
          fVar78 = *(float *)(*param_4 + 8);
          fVar80 = *(float *)(*param_4 + 0xc);
          fVar30 = fVar81 * (*pfVar14 + pfVar14[4]) + fVar59;
          fVar55 = fVar83 * (pfVar14[1] + pfVar14[5]) + fVar76;
          fVar56 = fVar84 * (pfVar14[2] + pfVar14[6]) + fVar78;
          fVar57 = fVar85 * (pfVar14[3] + pfVar14[7]) + fVar80;
          auVar41._0_4_ = fVar30 * fVar30;
          auVar41._4_4_ = fVar55 * fVar55;
          auVar41._8_4_ = fVar56 * fVar56;
          auVar41._12_4_ = fVar57 * fVar57;
          auVar51 = vblendps_avx(auVar41,auVar29,8);
          auVar51 = vhaddps_avx(auVar51,auVar51);
          auVar52 = vhaddps_avx(auVar51,auVar51);
        }
        pfVar11 = (float *)plVar9[-uVar8];
        fVar59 = fVar81 * (*pfVar11 + pfVar11[4]) + fVar59;
        fVar76 = fVar83 * (pfVar11[1] + pfVar11[5]) + fVar76;
        fVar78 = fVar84 * (pfVar11[2] + pfVar11[6]) + fVar78;
        fVar80 = fVar85 * (pfVar11[3] + pfVar11[7]) + fVar80;
        auVar20._0_4_ = fVar59 * fVar59;
        auVar20._4_4_ = fVar76 * fVar76;
        auVar20._8_4_ = fVar78 * fVar78;
        auVar20._12_4_ = fVar80 * fVar80;
        auVar51 = vblendps_avx(auVar20,auVar29,8);
        auVar51 = vhaddps_avx(auVar51,auVar51);
        auVar51 = vhaddps_avx(auVar51,auVar51);
        auVar51 = vcmpps_avx(auVar51,auVar52,1);
        if ((((SUB161(auVar51 >> 0x1f,0) & 1) != 0 || (SUB161(auVar51 >> 0x3f,0) & 1) != 0) ||
            (SUB161(auVar51 >> 0x5f,0) & 1) != 0) || auVar51[0xf] < '\0') {
          plVar9[-uVar8] = (longlong)pfVar14;
          *plVar10 = (longlong)pfVar11;
          pfVar14 = (float *)param_1[uVar8];
          auVar51 = *param_4;
          fVar59 = -(fVar87 * (*pfVar11 + pfVar11[4])) + auVar51._0_4_;
          fVar76 = -(fVar88 * (pfVar11[1] + pfVar11[5])) + auVar51._4_4_;
          fVar78 = -(fVar89 * (pfVar11[2] + pfVar11[6])) + auVar51._8_4_;
          fVar80 = -(fVar90 * (pfVar11[3] + pfVar11[7])) + auVar51._12_4_;
          fVar30 = -(fVar87 * (*pfVar14 + pfVar14[4])) + auVar51._0_4_;
          fVar55 = -(fVar88 * (pfVar14[1] + pfVar14[5])) + auVar51._4_4_;
          fVar56 = -(fVar89 * (pfVar14[2] + pfVar14[6])) + auVar51._8_4_;
          fVar57 = -(fVar90 * (pfVar14[3] + pfVar14[7])) + auVar51._12_4_;
          auVar21._0_4_ = fVar59 * fVar59;
          auVar21._4_4_ = fVar76 * fVar76;
          auVar21._8_4_ = fVar78 * fVar78;
          auVar21._12_4_ = fVar80 * fVar80;
          auVar51 = vblendps_avx(auVar21,auVar29,8);
          auVar42._0_4_ = fVar30 * fVar30;
          auVar42._4_4_ = fVar55 * fVar55;
          auVar42._8_4_ = fVar56 * fVar56;
          auVar42._12_4_ = fVar57 * fVar57;
          auVar71 = vhaddps_avx(auVar51,auVar51);
          auVar51 = vblendps_avx(auVar42,auVar29,8);
          auVar51 = vhaddps_avx(auVar51,auVar51);
          auVar71 = vhaddps_avx(auVar71,auVar71);
          auVar51 = vhaddps_avx(auVar51,auVar51);
          auVar51 = vcmpps_avx(auVar71,auVar51,1);
          if ((((SUB161(auVar51 >> 0x1f,0) & 1) != 0 || (SUB161(auVar51 >> 0x3f,0) & 1) != 0) ||
              (SUB161(auVar51 >> 0x5f,0) & 1) != 0) || auVar51[0xf] < '\0') {
            *plVar10 = (longlong)pfVar14;
            param_1[uVar8] = (longlong)pfVar11;
          }
        }
      }
      do {
        plVar9 = plVar10;
        if (plVar9 <= param_1) break;
        pfVar11 = (float *)plVar9[-1];
        pfVar14 = (float *)*plVar9;
        auVar51 = *param_4;
        fVar59 = -(fVar87 * (*pfVar11 + pfVar11[4])) + auVar51._0_4_;
        fVar76 = -(fVar88 * (pfVar11[1] + pfVar11[5])) + auVar51._4_4_;
        fVar78 = -(fVar89 * (pfVar11[2] + pfVar11[6])) + auVar51._8_4_;
        fVar80 = -(fVar90 * (pfVar11[3] + pfVar11[7])) + auVar51._12_4_;
        fVar30 = -(fVar87 * (*pfVar14 + pfVar14[4])) + auVar51._0_4_;
        fVar55 = -(fVar88 * (pfVar14[1] + pfVar14[5])) + auVar51._4_4_;
        fVar56 = -(fVar89 * (pfVar14[2] + pfVar14[6])) + auVar51._8_4_;
        fVar57 = -(fVar90 * (pfVar14[3] + pfVar14[7])) + auVar51._12_4_;
        auVar24._0_4_ = fVar59 * fVar59;
        auVar24._4_4_ = fVar76 * fVar76;
        auVar24._8_4_ = fVar78 * fVar78;
        auVar24._12_4_ = fVar80 * fVar80;
        auVar46._0_4_ = fVar30 * fVar30;
        auVar46._4_4_ = fVar55 * fVar55;
        auVar46._8_4_ = fVar56 * fVar56;
        auVar46._12_4_ = fVar57 * fVar57;
        auVar51 = vblendps_avx(auVar24,auVar29,8);
        auVar71 = vblendps_avx(auVar46,auVar29,8);
        auVar51 = vhaddps_avx(auVar51,auVar51);
        auVar71 = vhaddps_avx(auVar71,auVar71);
        auVar51 = vhaddps_avx(auVar51,auVar51);
        auVar71 = vhaddps_avx(auVar71,auVar71);
        auVar51 = vcmpps_avx(auVar51,auVar71,0xc);
        plVar10 = plVar9 + -1;
      } while ((((SUB161(auVar51 >> 0x1f,0) & 1) == 0 && (SUB161(auVar51 >> 0x3f,0) & 1) == 0) &&
               (SUB161(auVar51 >> 0x5f,0) & 1) == 0) && -1 < auVar51[0xf]);
      plVar10 = param_1 + uVar5 + 1;
      do {
        plVar6 = plVar10;
        param_2 = plVar9;
        plVar17 = plVar6;
        if (plVar4 <= plVar6) break;
        pfVar11 = (float *)*plVar9;
        pfVar14 = (float *)*plVar6;
        auVar51 = *param_4;
        fVar59 = -(fVar87 * (*pfVar14 + pfVar14[4])) + auVar51._0_4_;
        fVar76 = -(fVar88 * (pfVar14[1] + pfVar14[5])) + auVar51._4_4_;
        fVar78 = -(fVar89 * (pfVar14[2] + pfVar14[6])) + auVar51._8_4_;
        fVar80 = -(fVar90 * (pfVar14[3] + pfVar14[7])) + auVar51._12_4_;
        fVar30 = -(fVar87 * (*pfVar11 + pfVar11[4])) + auVar51._0_4_;
        fVar55 = -(fVar88 * (pfVar11[1] + pfVar11[5])) + auVar51._4_4_;
        fVar56 = -(fVar89 * (pfVar11[2] + pfVar11[6])) + auVar51._8_4_;
        fVar57 = -(fVar90 * (pfVar11[3] + pfVar11[7])) + auVar51._12_4_;
        auVar25._0_4_ = fVar59 * fVar59;
        auVar25._4_4_ = fVar76 * fVar76;
        auVar25._8_4_ = fVar78 * fVar78;
        auVar25._12_4_ = fVar80 * fVar80;
        auVar47._0_4_ = fVar30 * fVar30;
        auVar47._4_4_ = fVar55 * fVar55;
        auVar47._8_4_ = fVar56 * fVar56;
        auVar47._12_4_ = fVar57 * fVar57;
        auVar51 = vblendps_avx(auVar25,auVar29,8);
        auVar71 = vblendps_avx(auVar47,auVar29,8);
        auVar51 = vhaddps_avx(auVar51,auVar51);
        auVar71 = vhaddps_avx(auVar71,auVar71);
        auVar51 = vhaddps_avx(auVar51,auVar51);
        auVar71 = vhaddps_avx(auVar71,auVar71);
        auVar51 = vcmpps_avx(auVar51,auVar71,0xc);
        plVar10 = plVar6 + 1;
      } while ((((SUB161(auVar51 >> 0x1f,0) & 1) == 0 && (SUB161(auVar51 >> 0x3f,0) & 1) == 0) &&
               (SUB161(auVar51 >> 0x5f,0) & 1) == 0) && -1 < auVar51[0xf]);
LAB_14005ec6d:
      plVar10 = plVar9;
      if (plVar6 < plVar4) {
        pfVar11 = (float *)*plVar6;
        pfVar14 = (float *)*param_2;
        fVar59 = -(fVar87 * (*pfVar14 + pfVar14[4])) + *(float *)*param_4;
        fVar76 = -(fVar88 * (pfVar14[1] + pfVar14[5])) + *(float *)(*param_4 + 4);
        fVar78 = -(fVar89 * (pfVar14[2] + pfVar14[6])) + *(float *)(*param_4 + 8);
        fVar80 = -(fVar90 * (pfVar14[3] + pfVar14[7])) + *(float *)(*param_4 + 0xc);
        fVar30 = -(fVar87 * (*pfVar11 + pfVar11[4])) + *(float *)*param_4;
        fVar55 = -(fVar88 * (pfVar11[1] + pfVar11[5])) + *(float *)(*param_4 + 4);
        fVar56 = -(fVar89 * (pfVar11[2] + pfVar11[6])) + *(float *)(*param_4 + 8);
        fVar57 = -(fVar90 * (pfVar11[3] + pfVar11[7])) + *(float *)(*param_4 + 0xc);
        auVar26._0_4_ = fVar59 * fVar59;
        auVar26._4_4_ = fVar76 * fVar76;
        auVar26._8_4_ = fVar78 * fVar78;
        auVar26._12_4_ = fVar80 * fVar80;
        auVar48._0_4_ = fVar30 * fVar30;
        auVar48._4_4_ = fVar55 * fVar55;
        auVar48._8_4_ = fVar56 * fVar56;
        auVar48._12_4_ = fVar57 * fVar57;
        auVar51 = vblendps_avx(auVar26,auVar29,8);
        auVar71 = vblendps_avx(auVar48,auVar29,8);
        auVar51 = vhaddps_avx(auVar51,auVar51);
        auVar71 = vhaddps_avx(auVar71,auVar71);
        auVar52 = vhaddps_avx(auVar51,auVar51);
        auVar71 = vhaddps_avx(auVar71,auVar71);
        auVar51 = vcmpps_avx(auVar52,auVar71,1);
        if ((((SUB161(auVar51 >> 0x1f,0) & 1) == 0 && (SUB161(auVar51 >> 0x3f,0) & 1) == 0) &&
            (SUB161(auVar51 >> 0x5f,0) & 1) == 0) && -1 < auVar51[0xf]) {
          auVar51 = vcmpps_avx(auVar71,auVar52,1);
          if ((((SUB161(auVar51 >> 0x1f,0) & 1) != 0 || (SUB161(auVar51 >> 0x3f,0) & 1) != 0) ||
              (SUB161(auVar51 >> 0x5f,0) & 1) != 0) || auVar51[0xf] < '\0')
          goto joined_r0x00014005ecfa;
          if (plVar6 != plVar17) {
            lVar13 = *plVar17;
            *plVar17 = (longlong)pfVar11;
            *plVar6 = lVar13;
          }
          plVar17 = plVar17 + 1;
        }
        plVar6 = plVar6 + 1;
        goto LAB_14005ec6d;
      }
joined_r0x00014005ecfa:
      while (plVar9 = plVar10, param_1 < plVar9) {
        pfVar11 = (float *)*param_2;
        plVar10 = plVar9 + -1;
        pfVar14 = (float *)plVar9[-1];
        fVar30 = -(fVar87 * (*pfVar11 + pfVar11[4])) + *(float *)*param_4;
        fVar55 = -(fVar88 * (pfVar11[1] + pfVar11[5])) + *(float *)(*param_4 + 4);
        fVar56 = -(fVar89 * (pfVar11[2] + pfVar11[6])) + *(float *)(*param_4 + 8);
        fVar57 = -(fVar90 * (pfVar11[3] + pfVar11[7])) + *(float *)(*param_4 + 0xc);
        fVar59 = -(fVar87 * (*pfVar14 + pfVar14[4])) + *(float *)*param_4;
        fVar76 = -(fVar88 * (pfVar14[1] + pfVar14[5])) + *(float *)(*param_4 + 4);
        fVar78 = -(fVar89 * (pfVar14[2] + pfVar14[6])) + *(float *)(*param_4 + 8);
        fVar80 = -(fVar90 * (pfVar14[3] + pfVar14[7])) + *(float *)(*param_4 + 0xc);
        auVar49._0_4_ = fVar30 * fVar30;
        auVar49._4_4_ = fVar55 * fVar55;
        auVar49._8_4_ = fVar56 * fVar56;
        auVar49._12_4_ = fVar57 * fVar57;
        auVar27._0_4_ = fVar59 * fVar59;
        auVar27._4_4_ = fVar76 * fVar76;
        auVar27._8_4_ = fVar78 * fVar78;
        auVar27._12_4_ = fVar80 * fVar80;
        auVar51 = vblendps_avx(auVar49,auVar29,8);
        auVar71 = vblendps_avx(auVar27,auVar29,8);
        auVar51 = vhaddps_avx(auVar51,auVar51);
        auVar71 = vhaddps_avx(auVar71,auVar71);
        auVar52 = vhaddps_avx(auVar51,auVar51);
        auVar71 = vhaddps_avx(auVar71,auVar71);
        auVar51 = vcmpps_avx(auVar71,auVar52,1);
        if ((((SUB161(auVar51 >> 0x1f,0) & 1) == 0 && (SUB161(auVar51 >> 0x3f,0) & 1) == 0) &&
            (SUB161(auVar51 >> 0x5f,0) & 1) == 0) && -1 < auVar51[0xf]) {
          auVar51 = vcmpps_avx(auVar52,auVar71,1);
          if ((((SUB161(auVar51 >> 0x1f,0) & 1) != 0 || (SUB161(auVar51 >> 0x3f,0) & 1) != 0) ||
              (SUB161(auVar51 >> 0x5f,0) & 1) != 0) || auVar51[0xf] < '\0') break;
          plVar1 = param_2 + -1;
          bVar19 = plVar9 != param_2;
          param_2 = plVar1;
          if (bVar19) {
            lVar13 = *plVar1;
            *plVar1 = (longlong)pfVar14;
            *plVar10 = lVar13;
          }
        }
      }
      if ((plVar6 != plVar4) || (plVar9 != param_1)) {
        if (plVar9 == param_1) {
          lVar13 = *param_2;
          if (plVar17 != plVar6) {
            *param_2 = *plVar17;
            *plVar17 = lVar13;
            lVar13 = *param_2;
          }
          *param_2 = *plVar6;
          *plVar6 = lVar13;
          plVar6 = plVar6 + 1;
          param_2 = param_2 + 1;
          plVar17 = plVar17 + 1;
        }
        else {
          plVar10 = plVar9 + -1;
          if (plVar6 == plVar4) {
            plVar1 = param_2 + -1;
            lVar13 = param_2[-1];
            if (plVar9 != param_2) {
              lVar13 = *plVar10;
              *plVar10 = param_2[-1];
              *plVar1 = lVar13;
            }
            *plVar1 = plVar17[-1];
            plVar17[-1] = lVar13;
            plVar9 = plVar10;
            param_2 = plVar1;
            plVar17 = plVar17 + -1;
          }
          else {
            lVar13 = *plVar6;
            *plVar6 = *plVar10;
            *plVar10 = lVar13;
            plVar6 = plVar6 + 1;
            plVar9 = plVar10;
          }
        }
        goto LAB_14005ec6d;
      }
      param_3 = (param_3 >> 2) + (param_3 >> 1);
      if ((longlong)param_2 - (longlong)param_1 < (longlong)plVar4 - (longlong)plVar17) {
        FUN_14005e520(param_1,param_2,param_3,param_4);
        param_2 = plVar4;
        param_1 = plVar17;
      }
      else {
        FUN_14005e520(plVar17,plVar4,param_3,param_4);
      }
      uVar8 = (longlong)param_2 - (longlong)param_1;
      plVar4 = param_2;
    } while (0x100 < (longlong)uVar8);
  }
  if ((param_1 != param_2) && (param_1 + 1 != param_2)) {
    auVar91 = ZEXT1264(ZEXT812(0));
    plVar4 = param_1 + 1;
    plVar9 = param_1;
    fVar87 = _DAT_145fc6edc;
    fVar88 = _DAT_145fc6edc;
    fVar89 = _DAT_145fc6edc;
    fVar90 = _DAT_145fc6edc;
    do {
      plVar10 = plVar4;
      pauVar2 = (undefined1 (*) [16])plVar9[1];
      pfVar11 = (float *)*param_1;
      auVar51 = *pauVar2;
      auVar71 = pauVar2[1];
      auVar29 = *param_4;
      fVar81 = -(fVar87 * (auVar51._0_4_ + auVar71._0_4_)) + auVar29._0_4_;
      fVar83 = -(fVar88 * (auVar51._4_4_ + auVar71._4_4_)) + auVar29._4_4_;
      fVar84 = -(fVar89 * (auVar51._8_4_ + auVar71._8_4_)) + auVar29._8_4_;
      fVar85 = -(fVar90 * (auVar51._12_4_ + auVar71._12_4_)) + auVar29._12_4_;
      fVar59 = -(fVar87 * (*pfVar11 + pfVar11[4])) + auVar29._0_4_;
      fVar76 = -(fVar88 * (pfVar11[1] + pfVar11[5])) + auVar29._4_4_;
      fVar78 = -(fVar89 * (pfVar11[2] + pfVar11[6])) + auVar29._8_4_;
      fVar80 = -(fVar90 * (pfVar11[3] + pfVar11[7])) + auVar29._12_4_;
      auVar82._0_4_ = fVar81 * fVar81;
      auVar82._4_4_ = fVar83 * fVar83;
      auVar82._8_4_ = fVar84 * fVar84;
      auVar82._12_4_ = fVar85 * fVar85;
      auVar86._0_4_ = fVar59 * fVar59;
      auVar86._4_4_ = fVar76 * fVar76;
      auVar86._8_4_ = fVar78 * fVar78;
      auVar86._12_4_ = fVar80 * fVar80;
      auVar53 = auVar91._0_16_;
      auVar52 = vblendps_avx(auVar82,auVar53,8);
      auVar72 = vblendps_avx(auVar86,auVar53,8);
      auVar52 = vhaddps_avx(auVar52,auVar52);
      auVar72 = vhaddps_avx(auVar72,auVar72);
      auVar52 = vhaddps_avx(auVar52,auVar52);
      auVar72 = vhaddps_avx(auVar72,auVar72);
      auVar52 = vcmpps_avx(auVar52,auVar72,1);
      plVar4 = plVar10;
      if ((((SUB161(auVar52 >> 0x1f,0) & 1) == 0 && (SUB161(auVar52 >> 0x3f,0) & 1) == 0) &&
          (SUB161(auVar52 >> 0x5f,0) & 1) == 0) && -1 < auVar52[0xf]) {
        while( true ) {
          pfVar11 = (float *)plVar4[-1];
          fVar81 = -(fVar87 * (auVar51._0_4_ + auVar71._0_4_)) + auVar29._0_4_;
          fVar83 = -(fVar88 * (auVar51._4_4_ + auVar71._4_4_)) + auVar29._4_4_;
          fVar84 = -(fVar89 * (auVar51._8_4_ + auVar71._8_4_)) + auVar29._8_4_;
          fVar85 = -(fVar90 * (auVar51._12_4_ + auVar71._12_4_)) + auVar29._12_4_;
          auVar50._0_4_ = fVar81 * fVar81;
          auVar50._4_4_ = fVar83 * fVar83;
          auVar50._8_4_ = fVar84 * fVar84;
          auVar50._12_4_ = fVar85 * fVar85;
          auVar51 = vblendps_avx(auVar50,auVar53,8);
          auVar51 = vhaddps_avx(auVar51,auVar51);
          fVar81 = -(fVar87 * (*pfVar11 + pfVar11[4])) + auVar29._0_4_;
          fVar83 = -(fVar88 * (pfVar11[1] + pfVar11[5])) + auVar29._4_4_;
          fVar84 = -(fVar89 * (pfVar11[2] + pfVar11[6])) + auVar29._8_4_;
          fVar85 = -(fVar90 * (pfVar11[3] + pfVar11[7])) + auVar29._12_4_;
          auVar51 = vhaddps_avx(auVar51,auVar51);
          auVar28._0_4_ = fVar81 * fVar81;
          auVar28._4_4_ = fVar83 * fVar83;
          auVar28._8_4_ = fVar84 * fVar84;
          auVar28._12_4_ = fVar85 * fVar85;
          auVar29 = vblendps_avx(auVar28,auVar53,8);
          auVar29 = vhaddps_avx(auVar29,auVar29);
          auVar29 = vhaddps_avx(auVar29,auVar29);
          auVar29 = vcmpps_avx(auVar51,auVar29,1);
          if ((((SUB161(auVar29 >> 0x1f,0) & 1) == 0 && (SUB161(auVar29 >> 0x3f,0) & 1) == 0) &&
              (SUB161(auVar29 >> 0x5f,0) & 1) == 0) && -1 < auVar29[0xf]) break;
          *plVar4 = (longlong)pfVar11;
          plVar4 = plVar4 + -1;
          auVar51 = *pauVar2;
          auVar71 = pauVar2[1];
          auVar29 = *param_4;
        }
      }
      else {
        func_0x000140301860(param_1,plVar10,plVar9 + 2);
        plVar4 = param_1;
      }
      *plVar4 = (longlong)pauVar2;
      plVar4 = plVar10 + 1;
      plVar9 = plVar10;
    } while (plVar10 + 1 != param_2);
  }
  return;
}

