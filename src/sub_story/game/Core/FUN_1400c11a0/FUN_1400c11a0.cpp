// Recovered from game_scarlett_master.exe (GTA VI, Xbox Series X, PE32+ x64)
// Address: 1400c11a0  size: 1594 bytes
// Name:    FUN_1400c11a0
// Subsystem: core
//
// Referenced strings (0 in this body, 0 including direct callees):
// Callees: FUN_144f5a7f0
//
// Generated decompilation. Formatting follows MiscRef/GTAVSRC conventions;
// identifiers are recovered, not original. See ../../../README.md.

#include "gta6decomp/rage_types.h"


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1400c11a0(undefined8 param_1,uint param_2,longlong param_3,longlong param_4,
                  undefined8 param_5,longlong *param_6,undefined1 (*param_7) [16])

{
  undefined1 (*pauVar1) [16];
  float *pfVar2;
  undefined1 (*pauVar3) [16];
  char cVar4;
  byte bVar5;
  byte bVar6;
  byte bVar7;
  byte bVar8;
  byte bVar9;
  byte bVar10;
  ushort uVar11;
  undefined8 uVar12;
  undefined8 uVar13;
  byte bVar14;
  longlong lVar15;
  longlong lVar16;
  longlong lVar17;
  longlong lVar18;
  longlong lVar19;
  longlong lVar20;
  longlong lVar21;
  longlong lVar22;
  undefined1 auVar23 [16];
  undefined1 auVar24 [16];
  undefined1 auVar25 [16];
  undefined1 auVar26 [16];
  undefined1 auVar27 [16];
  undefined1 auVar28 [16];
  undefined1 auVar29 [16];
  float fVar30;
  float fVar38;
  float fVar39;
  undefined1 auVar31 [16];
  undefined1 auVar32 [16];
  undefined1 auVar33 [16];
  undefined1 auVar34 [16];
  undefined1 auVar35 [16];
  undefined1 auVar36 [16];
  undefined1 auVar37 [16];
  float fVar40;
  float fVar41;
  float fVar49;
  float fVar50;
  undefined1 auVar42 [16];
  undefined1 auVar43 [16];
  undefined1 auVar44 [16];
  undefined1 auVar45 [16];
  undefined1 auVar46 [16];
  undefined1 auVar47 [16];
  undefined1 auVar48 [16];
  float fVar51;
  float fVar52;
  float fVar60;
  float fVar61;
  undefined1 auVar53 [16];
  undefined1 auVar54 [16];
  undefined1 auVar55 [16];
  undefined1 auVar56 [16];
  undefined1 auVar57 [16];
  undefined1 auVar58 [16];
  undefined1 auVar59 [16];
  float fVar62;
  float fVar63;
  float fVar64;
  float fVar65;
  float fVar66;
  undefined1 auVar67 [16];
  float fVar69;
  undefined1 auVar68 [64];
  float fVar70;
  undefined1 auVar71 [16];
  float fVar73;
  float fVar74;
  float fVar75;
  undefined1 auVar72 [64];
  float fVar76;
  float fVar78;
  float fVar79;
  float fVar80;
  undefined1 auVar77 [64];
  undefined1 auVar81 [16];
  undefined1 auVar82 [64];
  undefined1 auVar83 [16];
  undefined1 in_ZMM10 [64];
  undefined1 auStack_e8 [8];
  float fStack_e0;
  float fStack_dc;
  undefined1 auStack_d8 [8];
  float fStack_d0;
  float fStack_cc;
  undefined1 auStack_c8 [8];
  float fStack_c0;
  float fStack_bc;
  undefined1 auStack_b8 [8];
  float fStack_b0;
  float fStack_ac;
  undefined8 uStack_a8;
  longlong lStack_a0;
  undefined1 auStack_58 [16];
  
  auStack_58 = in_ZMM10._0_16_;
  if (param_2 == 0) {
    lVar19 = 0;
  }
  else {
    uStack_a8 = param_5;
    lVar21 = 0;
    lVar18 = 0;
    lVar22 = 0;
    lVar19 = (ulonglong)param_2 << 4;
    lStack_a0 = lVar19;
    do {
      auVar83 = *param_7;
      auVar71 = param_7[1];
      auVar67 = param_7[2];
      auVar81 = param_7[3];
      cVar4 = *(char *)(*param_6 + 0x22);
      if (cVar4 == '\0') {
        uVar11 = *(ushort *)(*(longlong *)(*param_6 + 8) + lVar21);
        if (*(char *)(param_6[5] + (ulonglong)uVar11) == '\0') {
          lVar17 = (ulonglong)uVar11 * 0x40;
          auVar68 = ZEXT1664(auVar67);
          auVar72 = ZEXT1664(auVar71);
          auVar77 = ZEXT1664(auVar83);
          auVar82 = ZEXT1664(auVar81);
          FUN_144f5a7f0(param_1,param_6[2] + lVar18,param_6[3] + lVar22,param_6[4] + lVar17);
          lVar19 = param_6[4];
          fVar30 = *(float *)(lVar19 + lVar17);
          fVar38 = *(float *)(lVar19 + 4 + lVar17);
          fVar39 = *(float *)(lVar19 + 8 + lVar17);
          fVar40 = *(float *)(lVar19 + 0x24 + lVar17);
          fVar41 = *(float *)(lVar19 + 0x28 + lVar17);
          fVar49 = *(float *)(lVar19 + 0x30 + lVar17);
          fVar50 = *(float *)(lVar19 + 0x18 + lVar17);
          fVar75 = auVar77._0_4_;
          fVar76 = auVar77._4_4_;
          fVar78 = auVar77._8_4_;
          fVar79 = auVar77._12_4_;
          fVar69 = auVar72._0_4_;
          fVar70 = auVar72._4_4_;
          fVar73 = auVar72._8_4_;
          fVar74 = auVar72._12_4_;
          fVar51 = *(float *)(lVar19 + 0x10 + lVar17);
          fVar63 = auVar68._0_4_;
          fVar64 = auVar68._4_4_;
          fVar65 = auVar68._8_4_;
          fVar66 = auVar68._12_4_;
          fVar52 = *(float *)(lVar19 + 0x14 + lVar17);
          fVar60 = *(float *)(lVar19 + 0x20 + lVar17);
          fVar61 = *(float *)(lVar19 + 0x38 + lVar17);
          fVar62 = *(float *)(lVar19 + 0x34 + lVar17);
          pfVar2 = (float *)(lVar19 + lVar17);
          *pfVar2 = fVar63 * fVar39 + fVar69 * fVar38 + fVar75 * fVar30;
          pfVar2[1] = fVar64 * fVar39 + fVar70 * fVar38 + fVar76 * fVar30;
          pfVar2[2] = fVar65 * fVar39 + fVar73 * fVar38 + fVar78 * fVar30;
          pfVar2[3] = fVar66 * fVar39 + fVar74 * fVar38 + fVar79 * fVar30;
          pfVar2 = (float *)(lVar19 + 0x10 + lVar17);
          *pfVar2 = fVar63 * fVar50 + fVar69 * fVar52 + fVar75 * fVar51;
          pfVar2[1] = fVar64 * fVar50 + fVar70 * fVar52 + fVar76 * fVar51;
          pfVar2[2] = fVar65 * fVar50 + fVar73 * fVar52 + fVar78 * fVar51;
          pfVar2[3] = fVar66 * fVar50 + fVar74 * fVar52 + fVar79 * fVar51;
          pfVar2 = (float *)(lVar19 + 0x20 + lVar17);
          *pfVar2 = fVar63 * fVar41 + fVar69 * fVar40 + fVar75 * fVar60;
          pfVar2[1] = fVar64 * fVar41 + fVar70 * fVar40 + fVar76 * fVar60;
          pfVar2[2] = fVar65 * fVar41 + fVar73 * fVar40 + fVar78 * fVar60;
          pfVar2[3] = fVar66 * fVar41 + fVar74 * fVar40 + fVar79 * fVar60;
          auVar83._0_4_ = fVar63 * fVar61 + fVar69 * fVar62 + fVar75 * fVar49 + auVar82._0_4_;
          auVar83._4_4_ = fVar64 * fVar61 + fVar70 * fVar62 + fVar76 * fVar49 + auVar82._4_4_;
          auVar83._8_4_ = fVar65 * fVar61 + fVar73 * fVar62 + fVar78 * fVar49 + auVar82._8_4_;
          auVar83._12_4_ = fVar66 * fVar61 + fVar74 * fVar62 + fVar79 * fVar49 + auVar82._12_4_;
          *(undefined1 (*) [16])(lVar19 + 0x30 + lVar17) = auVar83;
          *(undefined1 *)(param_6[5] + (ulonglong)uVar11) = 1;
          lVar19 = lStack_a0;
        }
        pauVar1 = (undefined1 (*) [16])(param_6[4] + (ulonglong)uVar11 * 0x40);
        uVar12 = *(undefined8 *)pauVar1[1];
        pauVar3 = (undefined1 (*) [16])(param_6[4] + 0x20 + (ulonglong)uVar11 * 0x40);
        uVar13 = *(undefined8 *)pauVar3[1];
        auStack_e8._0_4_ = (undefined4)*(undefined8 *)*pauVar1;
        auStack_e8._4_4_ = (undefined4)((ulonglong)*(undefined8 *)*pauVar1 >> 0x20);
        fStack_e0 = (float)*(undefined8 *)(*pauVar1 + 8);
        fStack_dc = (float)((ulonglong)*(undefined8 *)(*pauVar1 + 8) >> 0x20);
        auStack_d8._0_4_ = (undefined4)uVar12;
        auStack_d8._4_4_ = (undefined4)((ulonglong)uVar12 >> 0x20);
        fStack_d0 = (float)*(undefined8 *)(pauVar1[1] + 8);
        fStack_cc = (float)((ulonglong)*(undefined8 *)(pauVar1[1] + 8) >> 0x20);
        auStack_c8._0_4_ = (undefined4)*(undefined8 *)*pauVar3;
        auStack_c8._4_4_ = (undefined4)((ulonglong)*(undefined8 *)*pauVar3 >> 0x20);
        fStack_c0 = (float)*(undefined8 *)(*pauVar3 + 8);
        fStack_bc = (float)((ulonglong)*(undefined8 *)(*pauVar3 + 8) >> 0x20);
        auStack_b8._0_4_ = (undefined4)uVar13;
        auStack_b8._4_4_ = (undefined4)((ulonglong)uVar13 >> 0x20);
        fStack_b0 = (float)*(undefined8 *)(pauVar3[1] + 8);
        fStack_ac = (float)((ulonglong)*(undefined8 *)(pauVar3[1] + 8) >> 0x20);
        fVar30 = (float)auStack_c8._0_4_;
        fVar38 = (float)auStack_c8._4_4_;
        fVar39 = fStack_c0;
        fVar40 = fStack_bc;
        fVar41 = (float)auStack_d8._0_4_;
        fVar49 = (float)auStack_d8._4_4_;
        fVar50 = fStack_d0;
        fVar51 = fStack_cc;
        fVar52 = (float)auStack_e8._0_4_;
        fVar60 = (float)auStack_e8._4_4_;
        fVar61 = fStack_e0;
        fVar62 = fStack_dc;
        fVar63 = (float)auStack_b8._0_4_;
        fVar64 = (float)auStack_b8._4_4_;
        fVar65 = fStack_b0;
        fVar66 = fStack_ac;
        _auStack_e8 = *pauVar1;
        _auStack_d8 = pauVar1[1];
        _auStack_c8 = *pauVar3;
        _auStack_b8 = pauVar3[1];
      }
      else {
        if (cVar4 == '\x01') {
          lVar17 = param_6[2];
          bVar5 = *(byte *)(lVar17 + 0x20 + lVar18);
          if (bVar5 == 0) {
            auVar53._0_12_ = ZEXT812(0);
            auVar53._12_4_ = 0.0;
            auVar42._0_12_ = ZEXT812(0);
            auVar42._12_4_ = 0.0;
            auVar31._0_12_ = ZEXT812(0);
            auVar31._12_4_ = 0.0;
            auVar23._0_12_ = ZEXT812(0);
            auVar23._12_4_ = 0.0;
          }
          else {
            lVar16 = param_6[4];
            fVar30 = (float)bVar5 * _DAT_14615a130;
            lVar15 = (ulonglong)*(ushort *)(param_6[3] + lVar22) * 0x40;
            pfVar2 = (float *)(lVar16 + 0x30 + lVar15);
            auVar23._0_4_ = fVar30 * *pfVar2;
            auVar23._4_4_ = fVar30 * pfVar2[1];
            auVar23._8_4_ = fVar30 * pfVar2[2];
            auVar23._12_4_ = fVar30 * pfVar2[3];
            pfVar2 = (float *)(lVar16 + 0x20 + lVar15);
            auVar31._0_4_ = fVar30 * *pfVar2;
            auVar31._4_4_ = fVar30 * pfVar2[1];
            auVar31._8_4_ = fVar30 * pfVar2[2];
            auVar31._12_4_ = fVar30 * pfVar2[3];
            pfVar2 = (float *)(lVar16 + 0x10 + lVar15);
            auVar42._0_4_ = fVar30 * *pfVar2;
            auVar42._4_4_ = fVar30 * pfVar2[1];
            auVar42._8_4_ = fVar30 * pfVar2[2];
            auVar42._12_4_ = fVar30 * pfVar2[3];
            pfVar2 = (float *)(lVar16 + lVar15);
            auVar53._0_4_ = fVar30 * *pfVar2;
            auVar53._4_4_ = fVar30 * pfVar2[1];
            auVar53._8_4_ = fVar30 * pfVar2[2];
            auVar53._12_4_ = fVar30 * pfVar2[3];
            _auStack_e8 = auVar53;
            _auStack_c8 = auVar31;
            _auStack_b8 = auVar23;
          }
          bVar6 = *(byte *)(lVar17 + 0x21 + lVar18);
          auVar24 = auVar23;
          auVar32 = auVar31;
          auVar43 = auVar42;
          auVar54 = auVar53;
          if (bVar6 != 0) {
            lVar16 = param_6[4];
            fVar30 = (float)bVar6 * _DAT_14615a130;
            lVar15 = (ulonglong)*(ushort *)(param_6[3] + 2 + lVar22) * 0x40;
            pfVar2 = (float *)(lVar16 + 0x30 + lVar15);
            auVar24._0_4_ = fVar30 * *pfVar2 + auVar23._0_4_;
            auVar24._4_4_ = fVar30 * pfVar2[1] + auVar23._4_4_;
            auVar24._8_4_ = fVar30 * pfVar2[2] + auVar23._8_4_;
            auVar24._12_4_ = fVar30 * pfVar2[3] + auVar23._12_4_;
            pfVar2 = (float *)(lVar16 + 0x20 + lVar15);
            auVar32._0_4_ = fVar30 * *pfVar2 + auVar31._0_4_;
            auVar32._4_4_ = fVar30 * pfVar2[1] + auVar31._4_4_;
            auVar32._8_4_ = fVar30 * pfVar2[2] + auVar31._8_4_;
            auVar32._12_4_ = fVar30 * pfVar2[3] + auVar31._12_4_;
            pfVar2 = (float *)(lVar16 + 0x10 + lVar15);
            auVar43._0_4_ = fVar30 * *pfVar2 + auVar42._0_4_;
            auVar43._4_4_ = fVar30 * pfVar2[1] + auVar42._4_4_;
            auVar43._8_4_ = fVar30 * pfVar2[2] + auVar42._8_4_;
            auVar43._12_4_ = fVar30 * pfVar2[3] + auVar42._12_4_;
            pfVar2 = (float *)(lVar16 + lVar15);
            auVar54._0_4_ = fVar30 * *pfVar2 + auVar53._0_4_;
            auVar54._4_4_ = fVar30 * pfVar2[1] + auVar53._4_4_;
            auVar54._8_4_ = fVar30 * pfVar2[2] + auVar53._8_4_;
            auVar54._12_4_ = fVar30 * pfVar2[3] + auVar53._12_4_;
            _auStack_d8 = auVar43;
          }
          bVar7 = *(byte *)(lVar17 + 0x22 + lVar18);
          auVar25 = auVar24;
          auVar33 = auVar32;
          auVar44 = auVar43;
          auVar55 = auVar54;
          if (bVar7 != 0) {
            lVar16 = param_6[4];
            fVar30 = (float)bVar7 * _DAT_14615a130;
            lVar15 = (ulonglong)*(ushort *)(param_6[3] + 4 + lVar22) * 0x40;
            pfVar2 = (float *)(lVar16 + 0x30 + lVar15);
            auVar25._0_4_ = fVar30 * *pfVar2 + auVar24._0_4_;
            auVar25._4_4_ = fVar30 * pfVar2[1] + auVar24._4_4_;
            auVar25._8_4_ = fVar30 * pfVar2[2] + auVar24._8_4_;
            auVar25._12_4_ = fVar30 * pfVar2[3] + auVar24._12_4_;
            pfVar2 = (float *)(lVar16 + 0x20 + lVar15);
            auVar33._0_4_ = fVar30 * *pfVar2 + auVar32._0_4_;
            auVar33._4_4_ = fVar30 * pfVar2[1] + auVar32._4_4_;
            auVar33._8_4_ = fVar30 * pfVar2[2] + auVar32._8_4_;
            auVar33._12_4_ = fVar30 * pfVar2[3] + auVar32._12_4_;
            pfVar2 = (float *)(lVar16 + 0x10 + lVar15);
            auVar44._0_4_ = fVar30 * *pfVar2 + auVar43._0_4_;
            auVar44._4_4_ = fVar30 * pfVar2[1] + auVar43._4_4_;
            auVar44._8_4_ = fVar30 * pfVar2[2] + auVar43._8_4_;
            auVar44._12_4_ = fVar30 * pfVar2[3] + auVar43._12_4_;
            pfVar2 = (float *)(lVar16 + lVar15);
            auVar55._0_4_ = fVar30 * *pfVar2 + auVar54._0_4_;
            auVar55._4_4_ = fVar30 * pfVar2[1] + auVar54._4_4_;
            auVar55._8_4_ = fVar30 * pfVar2[2] + auVar54._8_4_;
            auVar55._12_4_ = fVar30 * pfVar2[3] + auVar54._12_4_;
            _auStack_e8 = auVar55;
          }
          bVar8 = *(byte *)(lVar17 + 0x23 + lVar18);
          auVar26 = auVar25;
          auVar34 = auVar33;
          auVar45 = auVar44;
          auVar56 = auVar55;
          if (bVar8 != 0) {
            lVar16 = param_6[4];
            fVar30 = (float)bVar8 * _DAT_14615a130;
            lVar15 = (ulonglong)*(ushort *)(param_6[3] + 6 + lVar22) * 0x40;
            pfVar2 = (float *)(lVar16 + 0x30 + lVar15);
            auVar26._0_4_ = fVar30 * *pfVar2 + auVar25._0_4_;
            auVar26._4_4_ = fVar30 * pfVar2[1] + auVar25._4_4_;
            auVar26._8_4_ = fVar30 * pfVar2[2] + auVar25._8_4_;
            auVar26._12_4_ = fVar30 * pfVar2[3] + auVar25._12_4_;
            pfVar2 = (float *)(lVar16 + 0x20 + lVar15);
            auVar34._0_4_ = fVar30 * *pfVar2 + auVar33._0_4_;
            auVar34._4_4_ = fVar30 * pfVar2[1] + auVar33._4_4_;
            auVar34._8_4_ = fVar30 * pfVar2[2] + auVar33._8_4_;
            auVar34._12_4_ = fVar30 * pfVar2[3] + auVar33._12_4_;
            pfVar2 = (float *)(lVar16 + 0x10 + lVar15);
            auVar45._0_4_ = fVar30 * *pfVar2 + auVar44._0_4_;
            auVar45._4_4_ = fVar30 * pfVar2[1] + auVar44._4_4_;
            auVar45._8_4_ = fVar30 * pfVar2[2] + auVar44._8_4_;
            auVar45._12_4_ = fVar30 * pfVar2[3] + auVar44._12_4_;
            pfVar2 = (float *)(lVar16 + lVar15);
            auVar56._0_4_ = fVar30 * *pfVar2 + auVar55._0_4_;
            auVar56._4_4_ = fVar30 * pfVar2[1] + auVar55._4_4_;
            auVar56._8_4_ = fVar30 * pfVar2[2] + auVar55._8_4_;
            auVar56._12_4_ = fVar30 * pfVar2[3] + auVar55._12_4_;
            _auStack_b8 = auVar26;
          }
          bVar9 = *(byte *)(lVar17 + 0x24 + lVar18);
          auVar27 = auVar26;
          auVar35 = auVar34;
          auVar46 = auVar45;
          auVar57 = auVar56;
          if (bVar9 != 0) {
            lVar16 = param_6[4];
            fVar30 = (float)bVar9 * _DAT_14615a130;
            lVar15 = (ulonglong)*(ushort *)(param_6[3] + 8 + lVar22) * 0x40;
            pfVar2 = (float *)(lVar16 + 0x30 + lVar15);
            auVar27._0_4_ = fVar30 * *pfVar2 + auVar26._0_4_;
            auVar27._4_4_ = fVar30 * pfVar2[1] + auVar26._4_4_;
            auVar27._8_4_ = fVar30 * pfVar2[2] + auVar26._8_4_;
            auVar27._12_4_ = fVar30 * pfVar2[3] + auVar26._12_4_;
            pfVar2 = (float *)(lVar16 + 0x20 + lVar15);
            auVar35._0_4_ = fVar30 * *pfVar2 + auVar34._0_4_;
            auVar35._4_4_ = fVar30 * pfVar2[1] + auVar34._4_4_;
            auVar35._8_4_ = fVar30 * pfVar2[2] + auVar34._8_4_;
            auVar35._12_4_ = fVar30 * pfVar2[3] + auVar34._12_4_;
            pfVar2 = (float *)(lVar16 + 0x10 + lVar15);
            auVar46._0_4_ = fVar30 * *pfVar2 + auVar45._0_4_;
            auVar46._4_4_ = fVar30 * pfVar2[1] + auVar45._4_4_;
            auVar46._8_4_ = fVar30 * pfVar2[2] + auVar45._8_4_;
            auVar46._12_4_ = fVar30 * pfVar2[3] + auVar45._12_4_;
            pfVar2 = (float *)(lVar16 + lVar15);
            auVar57._0_4_ = fVar30 * *pfVar2 + auVar56._0_4_;
            auVar57._4_4_ = fVar30 * pfVar2[1] + auVar56._4_4_;
            auVar57._8_4_ = fVar30 * pfVar2[2] + auVar56._8_4_;
            auVar57._12_4_ = fVar30 * pfVar2[3] + auVar56._12_4_;
            _auStack_c8 = auVar35;
          }
          bVar10 = *(byte *)(lVar17 + 0x25 + lVar18);
          auVar28 = auVar27;
          auVar36 = auVar35;
          auVar47 = auVar46;
          auVar58 = auVar57;
          if (bVar10 != 0) {
            lVar16 = param_6[4];
            fVar30 = (float)bVar10 * _DAT_14615a130;
            lVar15 = (ulonglong)*(ushort *)(param_6[3] + 10 + lVar22) * 0x40;
            pfVar2 = (float *)(lVar16 + 0x30 + lVar15);
            auVar28._0_4_ = fVar30 * *pfVar2 + auVar27._0_4_;
            auVar28._4_4_ = fVar30 * pfVar2[1] + auVar27._4_4_;
            auVar28._8_4_ = fVar30 * pfVar2[2] + auVar27._8_4_;
            auVar28._12_4_ = fVar30 * pfVar2[3] + auVar27._12_4_;
            pfVar2 = (float *)(lVar16 + 0x20 + lVar15);
            auVar36._0_4_ = fVar30 * *pfVar2 + auVar35._0_4_;
            auVar36._4_4_ = fVar30 * pfVar2[1] + auVar35._4_4_;
            auVar36._8_4_ = fVar30 * pfVar2[2] + auVar35._8_4_;
            auVar36._12_4_ = fVar30 * pfVar2[3] + auVar35._12_4_;
            pfVar2 = (float *)(lVar16 + 0x10 + lVar15);
            auVar47._0_4_ = fVar30 * *pfVar2 + auVar46._0_4_;
            auVar47._4_4_ = fVar30 * pfVar2[1] + auVar46._4_4_;
            auVar47._8_4_ = fVar30 * pfVar2[2] + auVar46._8_4_;
            auVar47._12_4_ = fVar30 * pfVar2[3] + auVar46._12_4_;
            pfVar2 = (float *)(lVar16 + lVar15);
            auVar58._0_4_ = fVar30 * *pfVar2 + auVar57._0_4_;
            auVar58._4_4_ = fVar30 * pfVar2[1] + auVar57._4_4_;
            auVar58._8_4_ = fVar30 * pfVar2[2] + auVar57._8_4_;
            auVar58._12_4_ = fVar30 * pfVar2[3] + auVar57._12_4_;
            _auStack_d8 = auVar47;
          }
          bVar14 = *(byte *)(lVar17 + 0x26 + lVar18);
          fVar38 = auVar28._4_4_;
          fVar39 = auVar28._8_4_;
          fVar30 = auVar28._12_4_;
          if (bVar14 == 0) {
            bVar14 = *(byte *)(lVar17 + 0x27 + lVar18);
            if (bVar14 != 0) {
              lVar16 = param_6[3];
              lVar15 = param_6[4];
              goto LAB_1400c1774;
            }
            auVar59 = auVar58;
            auVar48 = auVar47;
            auVar37 = auVar36;
            if (bVar10 == 0 &&
                (bVar9 == 0 && (bVar8 == 0 && (bVar7 == 0 && (bVar6 == 0 && bVar5 == 0))))) {
              auVar48._8_8_ = 0;
              auVar48._0_8_ = _DAT_146159bc0;
              auVar28 = ZEXT816(0) << 0x20;
              auVar59 = ZEXT416(_DAT_145fc6ed8);
              auVar37 = _DAT_14614f7f0;
            }
          }
          else {
            lVar16 = param_6[3];
            lVar15 = param_6[4];
            fVar40 = (float)bVar14 * _DAT_14615a130;
            lVar20 = (ulonglong)*(ushort *)(lVar16 + 0xc + lVar22) * 0x40;
            pfVar2 = (float *)(lVar15 + lVar20);
            auVar59._0_4_ = fVar40 * *pfVar2 + auVar58._0_4_;
            auVar59._4_4_ = fVar40 * pfVar2[1] + auVar58._4_4_;
            auVar59._8_4_ = fVar40 * pfVar2[2] + auVar58._8_4_;
            auVar59._12_4_ = fVar40 * pfVar2[3] + auVar58._12_4_;
            pfVar2 = (float *)(lVar15 + 0x30 + lVar20);
            auVar28._0_4_ = fVar40 * *pfVar2 + auVar28._0_4_;
            auVar28._4_4_ = fVar40 * pfVar2[1] + fVar38;
            auVar28._8_4_ = fVar40 * pfVar2[2] + fVar39;
            auVar28._12_4_ = fVar40 * pfVar2[3] + fVar30;
            pfVar2 = (float *)(lVar15 + 0x20 + lVar20);
            auVar37._0_4_ = fVar40 * *pfVar2 + auVar36._0_4_;
            auVar37._4_4_ = fVar40 * pfVar2[1] + auVar36._4_4_;
            auVar37._8_4_ = fVar40 * pfVar2[2] + auVar36._8_4_;
            auVar37._12_4_ = fVar40 * pfVar2[3] + auVar36._12_4_;
            pfVar2 = (float *)(lVar15 + 0x10 + lVar20);
            auVar48._0_4_ = fVar40 * *pfVar2 + auVar47._0_4_;
            auVar48._4_4_ = fVar40 * pfVar2[1] + auVar47._4_4_;
            auVar48._8_4_ = fVar40 * pfVar2[2] + auVar47._8_4_;
            auVar48._12_4_ = fVar40 * pfVar2[3] + auVar47._12_4_;
            bVar14 = *(byte *)(lVar17 + 0x27 + lVar18);
            auVar36 = auVar37;
            auVar47 = auVar48;
            auVar58 = auVar59;
            _auStack_e8 = auVar59;
            if (bVar14 != 0) {
LAB_1400c1774:
              fVar30 = (float)bVar14 * _DAT_14615a130;
              lVar17 = (ulonglong)*(ushort *)(lVar16 + 0xe + lVar22) * 0x40;
              pfVar2 = (float *)(lVar15 + 0x30 + lVar17);
              auVar29._0_4_ = fVar30 * *pfVar2 + auVar28._0_4_;
              auVar29._4_4_ = fVar30 * pfVar2[1] + auVar28._4_4_;
              auVar29._8_4_ = fVar30 * pfVar2[2] + auVar28._8_4_;
              auVar29._12_4_ = fVar30 * pfVar2[3] + auVar28._12_4_;
              pfVar2 = (float *)(lVar15 + 0x20 + lVar17);
              auVar37._0_4_ = fVar30 * *pfVar2 + auVar36._0_4_;
              auVar37._4_4_ = fVar30 * pfVar2[1] + auVar36._4_4_;
              auVar37._8_4_ = fVar30 * pfVar2[2] + auVar36._8_4_;
              auVar37._12_4_ = fVar30 * pfVar2[3] + auVar36._12_4_;
              pfVar2 = (float *)(lVar15 + 0x10 + lVar17);
              auVar48._0_4_ = fVar30 * *pfVar2 + auVar47._0_4_;
              auVar48._4_4_ = fVar30 * pfVar2[1] + auVar47._4_4_;
              auVar48._8_4_ = fVar30 * pfVar2[2] + auVar47._8_4_;
              auVar48._12_4_ = fVar30 * pfVar2[3] + auVar47._12_4_;
              pfVar2 = (float *)(lVar15 + lVar17);
              auVar59._0_4_ = fVar30 * *pfVar2 + auVar58._0_4_;
              auVar59._4_4_ = fVar30 * pfVar2[1] + auVar58._4_4_;
              auVar59._8_4_ = fVar30 * pfVar2[2] + auVar58._8_4_;
              auVar59._12_4_ = fVar30 * pfVar2[3] + auVar58._12_4_;
              auVar28 = auVar29;
            }
          }
        }
        else {
          auVar68 = ZEXT1664(auVar67);
          auVar72 = ZEXT1664(auVar71);
          auVar77 = ZEXT1664(auVar83);
          auVar82 = ZEXT1664(auVar81);
          FUN_144f5a7f0(param_1,param_6[2] + lVar18,param_6[3] + lVar22,auStack_e8);
          auVar81 = auVar82._0_16_;
          auVar67 = auVar68._0_16_;
          auVar71 = auVar72._0_16_;
          auVar83 = auVar77._0_16_;
          auVar28 = _auStack_b8;
          auVar59 = _auStack_e8;
          auVar48 = _auStack_d8;
          auVar37 = _auStack_c8;
        }
        fVar38 = auVar59._0_4_;
        auVar23 = vshufps_avx(auVar59,auVar59,0x55);
        auVar59 = vshufps_avx(auVar59,auVar59,0xaa);
        fVar76 = auVar83._0_4_;
        fVar78 = auVar83._4_4_;
        fVar79 = auVar83._8_4_;
        fVar80 = auVar83._12_4_;
        fVar30 = auVar48._0_4_;
        fVar70 = auVar71._0_4_;
        fVar73 = auVar71._4_4_;
        fVar74 = auVar71._8_4_;
        fVar75 = auVar71._12_4_;
        auVar83 = vshufps_avx(auVar48,auVar48,0x55);
        fVar63 = auVar67._0_4_;
        fVar52 = fVar63 * auVar59._0_4_ + fVar70 * auVar23._0_4_ + fVar76 * fVar38;
        fVar64 = auVar67._4_4_;
        fVar60 = fVar64 * auVar59._4_4_ + fVar73 * auVar23._4_4_ + fVar78 * fVar38;
        fVar65 = auVar67._8_4_;
        fVar61 = fVar65 * auVar59._8_4_ + fVar74 * auVar23._8_4_ + fVar79 * fVar38;
        fVar69 = auVar67._12_4_;
        fVar62 = fVar69 * auVar59._12_4_ + fVar75 * auVar23._12_4_ + fVar80 * fVar38;
        auVar71 = vshufps_avx(auVar48,auVar48,0xaa);
        fVar40 = auVar37._0_4_;
        auVar67 = vshufps_avx(auVar37,auVar37,0x55);
        fVar41 = fVar63 * auVar71._0_4_ + fVar70 * auVar83._0_4_ + fVar76 * fVar30;
        fVar49 = fVar64 * auVar71._4_4_ + fVar73 * auVar83._4_4_ + fVar78 * fVar30;
        fVar50 = fVar65 * auVar71._8_4_ + fVar74 * auVar83._8_4_ + fVar79 * fVar30;
        fVar51 = fVar69 * auVar71._12_4_ + fVar75 * auVar83._12_4_ + fVar80 * fVar30;
        auVar83 = vshufps_avx(auVar37,auVar37,0xaa);
        fVar66 = auVar28._0_4_;
        auVar71 = vshufps_avx(auVar28,auVar28,0x55);
        auVar28 = vshufps_avx(auVar28,auVar28,0xaa);
        fVar30 = fVar63 * auVar83._0_4_ + fVar70 * auVar67._0_4_ + fVar76 * fVar40;
        fVar38 = fVar64 * auVar83._4_4_ + fVar73 * auVar67._4_4_ + fVar78 * fVar40;
        fVar39 = fVar65 * auVar83._8_4_ + fVar74 * auVar67._8_4_ + fVar79 * fVar40;
        fVar40 = fVar69 * auVar83._12_4_ + fVar75 * auVar67._12_4_ + fVar80 * fVar40;
        fVar63 = fVar63 * auVar28._0_4_ + fVar70 * auVar71._0_4_ + fVar76 * fVar66 + auVar81._0_4_;
        fVar64 = fVar64 * auVar28._4_4_ + fVar73 * auVar71._4_4_ + fVar78 * fVar66 + auVar81._4_4_;
        fVar65 = fVar65 * auVar28._8_4_ + fVar74 * auVar71._8_4_ + fVar79 * fVar66 + auVar81._8_4_;
        fVar66 = fVar69 * auVar28._12_4_ +
                 fVar75 * auVar71._12_4_ + fVar80 * fVar66 + auVar81._12_4_;
      }
      uVar12 = ((undefined8 *)(param_3 + lVar22))[1];
      lVar18 = lVar18 + 0x28;
      lVar21 = lVar21 + 2;
      *(undefined8 *)(param_4 + lVar22) = *(undefined8 *)(param_3 + lVar22);
      ((undefined8 *)(param_4 + lVar22))[1] = uVar12;
      fVar69 = *(float *)(param_4 + lVar22);
      fVar70 = *(float *)(param_4 + 4 + lVar22);
      fVar73 = *(float *)(param_4 + 8 + lVar22);
      pfVar2 = (float *)(param_4 + lVar22);
      *pfVar2 = fVar30 * fVar73 + fVar41 * fVar70 + fVar52 * fVar69 + fVar63;
      pfVar2[1] = fVar38 * fVar73 + fVar49 * fVar70 + fVar60 * fVar69 + fVar64;
      pfVar2[2] = fVar39 * fVar73 + fVar50 * fVar70 + fVar61 * fVar69 + fVar65;
      pfVar2[3] = fVar40 * fVar73 + fVar51 * fVar70 + fVar62 * fVar69 + fVar66;
      lVar22 = lVar22 + 0x10;
      param_5 = uStack_a8;
    } while (lVar19 != lVar22);
  }
                    /* WARNING: Could not recover jumptable at 0x000145f40560. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  memcpy(param_5,param_4,lVar19);
  return;
}

