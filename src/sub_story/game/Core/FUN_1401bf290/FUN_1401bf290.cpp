// Recovered from game_scarlett_master.exe (GTA VI, Xbox Series X, PE32+ x64)
// Address: 1401bf290  size: 2311 bytes
// Name:    FUN_1401bf290
// Subsystem: core
//
// Referenced strings (0 in this body, 0 including direct callees):
// Callees: FUN_142125280, FUN_1401c01f0, FUN_145647140, FUN_1401be7e0, FUN_1451f7160, FUN_145598c90, FUN_145162950
//
// Generated decompilation. Formatting follows MiscRef/GTAVSRC conventions;
// identifiers are recovered, not original. See ../../../README.md.

#include "gta6decomp/rage_types.h"


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined8 * FUN_1401bf290(longlong param_1,longlong param_2)

{
  uint uVar1;
  float fVar2;
  float fVar3;
  float fVar4;
  float fVar5;
  uint *puVar6;
  float *pfVar7;
  float *pfVar8;
  float *pfVar9;
  float *pfVar10;
  code *pcVar11;
  uint uVar12;
  uint uVar13;
  float fVar14;
  float fVar15;
  float fVar16;
  float fVar17;
  float fVar18;
  float fVar19;
  float fVar20;
  float fVar21;
  float fVar22;
  float fVar23;
  longlong lVar24;
  undefined1 auVar25 [32];
  byte bVar26;
  uint uVar27;
  undefined4 uVar28;
  undefined8 *puVar29;
  longlong lVar30;
  uint uVar31;
  longlong *plVar32;
  ulonglong uVar33;
  longlong *plVar34;
  longlong *plVar35;
  longlong lVar36;
  longlong *plVar37;
  bool bVar38;
  bool bVar39;
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
  undefined1 auVar55 [16];
  undefined1 auVar56 [16];
  float fVar57;
  float fVar58;
  float fVar59;
  float fVar60;
  float fVar61;
  float fVar63;
  float fVar64;
  float fVar65;
  undefined1 auVar62 [16];
  float fVar66;
  float fVar67;
  float fVar68;
  float fVar69;
  float fVar70;
  float fVar71;
  float fVar72;
  float fVar73;
  undefined1 auVar74 [16];
  undefined1 auVar75 [16];
  undefined1 in_ZMM6 [64];
  undefined1 auVar76 [16];
  undefined1 in_ZMM7 [64];
  undefined1 auVar77 [16];
  undefined1 in_ZMM8 [64];
  float fVar78;
  float fVar79;
  float fVar80;
  float fVar81;
  undefined1 in_ZMM9 [64];
  float fVar82;
  float fVar83;
  float fVar84;
  float fVar85;
  undefined1 in_ZMM10 [64];
  undefined1 auVar86 [16];
  undefined1 auVar87 [64];
  undefined1 auVar88 [16];
  longlong lStack_218;
  longlong lStack_210;
  undefined1 auStack_208 [16];
  undefined1 auStack_1f8 [16];
  undefined1 auStack_1e8 [16];
  undefined1 auStack_1d8 [16];
  undefined1 auStack_1c8 [16];
  undefined1 auStack_1b8 [16];
  undefined8 uStack_1a0;
  undefined8 uStack_198;
  undefined4 uStack_190;
  undefined4 uStack_184;
  undefined8 uStack_180;
  undefined8 uStack_178;
  undefined4 uStack_170;
  undefined4 uStack_164;
  undefined *puStack_160;
  longlong *plStack_158;
  longlong lStack_150;
  undefined8 uStack_148;
  undefined8 uStack_140;
  longlong lStack_130;
  uint uStack_128;
  uint uStack_124;
  undefined1 *puStack_120;
  byte bStack_118;
  char cStack_117;
  undefined6 uStack_116;
  longlong lStack_110;
  longlong lStack_108;
  longlong lStack_100;
  byte bStack_e9;
  undefined1 auStack_e8 [16];
  undefined1 auStack_d8 [16];
  undefined1 auStack_c8 [16];
  undefined1 auStack_b8 [16];
  undefined1 auStack_a8 [16];
  
  auStack_a8 = in_ZMM10._0_16_;
  auStack_b8 = in_ZMM9._0_16_;
  auStack_c8 = in_ZMM8._0_16_;
  auStack_d8 = in_ZMM7._0_16_;
  auStack_e8 = in_ZMM6._0_16_;
  puVar29 = (undefined8 *)FUN_1401c01f0(param_1 + 0x20,param_1,param_1 + 0xd8,0);
  if ((char)puVar29 != '\0') {
    puVar29 = (undefined8 *)FUN_1401c01f0(param_1 + 0xd8,param_1,param_1 + 0x20,0);
    plVar34 = &lStack_218;
    if ((char)puVar29 != '\0') {
      bVar38 = true;
      if (*(char *)(*(longlong *)(*(longlong *)(param_1 + 0x28) + 0x40) + 0x10) == '\x06') {
        bVar38 = *(char *)(*(longlong *)(*(longlong *)(param_1 + 0xe0) + 0x40) + 0x10) != '\x06';
      }
      uVar31 = *(int *)(param_1 + 0xf4) * *(int *)(param_1 + 0x3c);
      uStack_128 = 0x800;
      if (uVar31 < 0x800) {
        uStack_128 = uVar31;
      }
      plVar35 = (longlong *)0x0;
      if (uVar31 == 0) {
        puStack_120 = (undefined1 *)0x0;
      }
      else {
        lVar30 = FUN_145647140();
        plVar34 = (longlong *)((longlong)&lStack_218 + -lVar30);
        puStack_120 = (undefined1 *)((longlong)&lStack_218 + -lVar30);
      }
      bStack_e9 = *(byte *)(param_1 + 0x275);
      lStack_130 = param_1 + 0x210;
      uStack_124 = 0;
      uStack_198 = 0x7f;
      uStack_1a0 = 0xffffffff00000000;
      uStack_190 = 0;
      uStack_184 = 1000;
      uStack_178 = 0x7f;
      uStack_180 = 0xffffffff00000000;
      uStack_170 = 0;
      uStack_164 = 1000;
      *(undefined8 *)((longlong)plVar34 + -0x28) = 0x1401bf408;
      lStack_150 = FUN_1451f7160(param_2);
      puVar29 = (undefined8 *)(ulonglong)(lStack_150 == 0);
      if (1 < uVar31 && lStack_150 != 0) {
        puVar6 = *(uint **)(param_2 + 8);
        uVar31 = puVar6[1];
        uVar27 = *puVar6;
        do {
          if (uVar31 == uVar27) {
            lVar30 = *(longlong *)(puVar6 + 2);
            goto LAB_1401bf46a;
          }
          LOCK();
          uVar1 = puVar6[1];
          bVar39 = uVar31 == uVar1;
          if (bVar39) {
            puVar6[1] = uVar31 + 1;
            uVar1 = uVar31;
          }
          uVar31 = uVar1;
          UNLOCK();
        } while (!bVar39);
        lVar30 = *(longlong *)(puVar6 + 2);
        uVar27 = uVar31;
        if (lVar30 == 0) {
          lVar30 = 0;
        }
        else {
          *(undefined1 (*) [32])(lVar30 + 0xc + (ulonglong)uVar31 * 0x30) = ZEXT1232(ZEXT812(0));
          *(undefined1 (*) [32])(lVar30 + (ulonglong)uVar31 * 0x30) = ZEXT1232(ZEXT812(0));
        }
LAB_1401bf46a:
        puVar29 = (undefined8 *)(ulonglong)uVar27;
        plVar35 = (longlong *)((longlong)puVar29 * 0x30 + lVar30);
        if (plVar35 ==
            (longlong *)
            ((ulonglong)**(uint **)(param_2 + 8) * 0x30 + *(longlong *)(*(uint **)(param_2 + 8) + 2)
            )) {
          plVar35 = (longlong *)0x0;
        }
        else {
          puVar29 = &uStack_1a0;
          *(undefined8 **)(param_1 + 0x228) = puVar29;
          *(undefined8 **)(param_1 + 0x230) = &uStack_180;
          *plVar35 = lStack_130;
          plVar35[1] = lStack_150;
          plVar35[2] = (longlong)&uStack_128;
          *(undefined1 *)(param_1 + 0x27a) = 1;
        }
      }
      if ((ulonglong)*(uint *)(param_1 + 0x3c) != 0) {
        auStack_1b8._4_4_ = _DAT_145fc6f4c;
        auStack_1b8._0_4_ = _DAT_145fc6f4c;
        auStack_1b8._8_4_ = _DAT_145fc6f4c;
        auStack_1b8._12_4_ = _DAT_145fc6f4c;
        plVar37 = *(longlong **)(param_1 + 0x40);
        auVar87 = ZEXT1664((undefined1  [16])0x0);
        plStack_158 = plVar37 + (ulonglong)*(uint *)(param_1 + 0x3c) * 2;
        plVar32 = plStack_158;
        do {
          while ((puVar29 = *(undefined8 **)(*plVar37 + 0x40), puVar29 != (undefined8 *)0x0 &&
                 (*(char *)(puVar29 + 2) == '\x05'))) {
            lStack_218 = *plVar37;
            lStack_210 = plVar37[1];
            auVar87 = ZEXT1664(auVar87._0_16_);
            *(undefined8 *)((longlong)plVar34 + -0x28) = 0x1401bf530;
            FUN_1401be7e0(param_1,&bStack_118,0,&lStack_218);
            puVar29 = (undefined8 *)(ulonglong)bStack_e9;
            if ((bStack_118 & bStack_e9) != 0) {
              return puVar29;
            }
            if (cStack_117 == '\x01') {
              return puVar29;
            }
            plVar37 = plVar37 + 2;
            if (plVar37 == plVar32) goto LAB_1401bf9aa;
          }
          uVar31 = *(uint *)(param_1 + 0xf4);
          if ((ulonglong)uVar31 != 0) {
            lVar30 = *(longlong *)(param_1 + 0xf8);
            lVar36 = 0;
            do {
              puVar29 = *(undefined8 **)(*(longlong *)(lVar30 + lVar36) + 0x40);
              if ((puVar29 == (undefined8 *)0x0) || (*(char *)(puVar29 + 2) != '\x05')) {
                lVar24 = *plVar37;
                lStack_110 = plVar37[1];
                bStack_118 = (byte)lVar24;
                cStack_117 = (char)((ulonglong)lVar24 >> 8);
                uStack_116 = (undefined6)((ulonglong)lVar24 >> 0x10);
                lStack_108 = *(longlong *)(lVar30 + lVar36);
                lStack_100 = ((longlong *)(lVar30 + lVar36))[1];
                puVar29 = *(undefined8 **)(param_1 + 0x250);
                if (puVar29 == (undefined8 *)0x0) {
                  auVar41 = vpshufd_avx(*(undefined1 (*) [16])(lVar24 + 0x48),0x4e);
                  auVar41 = vpand_avx(auVar41,*(undefined1 (*) [16])(lStack_108 + 0x48));
                  auVar40._0_8_ = -(ulonglong)(auVar41._0_8_ == auVar87._0_8_);
                  auVar40._8_8_ = -(ulonglong)(auVar41._8_8_ == auVar87._8_8_);
                  puVar29 = (undefined8 *)
                            (ulonglong)((SUB161(auVar40 >> 0x3f,0) & 1) == 0 && -1 < auVar40._8_8_);
                }
                else {
                  auVar87 = ZEXT1664(auVar87._0_16_);
                  pcVar11 = *(code **)*puVar29;
                  *(undefined8 *)((longlong)plVar34 + -0x28) = 0x1401bf989;
                  puVar29 = (undefined8 *)(*pcVar11)(puVar29,&bStack_118);
                }
                lVar24 = lStack_130;
                if ((char)puVar29 == '\x01' && !bVar38) {
                  pfVar7 = (float *)plVar37[1];
                  pfVar8 = (float *)*plVar37;
                  pfVar9 = *(float **)(lVar30 + 8 + lVar36);
                  pfVar10 = *(float **)(lVar30 + lVar36);
                  fVar59 = *pfVar8;
                  fVar14 = pfVar8[1];
                  fVar15 = pfVar8[2];
                  fVar16 = pfVar8[3];
                  fVar2 = pfVar7[8];
                  fVar70 = pfVar8[4];
                  fVar71 = pfVar8[5];
                  fVar72 = pfVar8[6];
                  fVar73 = pfVar8[7];
                  fVar3 = pfVar7[9];
                  fVar78 = pfVar8[8];
                  fVar79 = pfVar8[9];
                  fVar80 = pfVar8[10];
                  fVar81 = pfVar8[0xb];
                  fVar4 = pfVar7[10];
                  fVar5 = pfVar7[0xe];
                  fVar60 = pfVar7[0x12];
                  fVar57 = pfVar9[10];
                  fVar58 = pfVar7[0xc];
                  fVar61 = fVar78 * fVar4 + fVar70 * fVar3 + fVar59 * fVar2;
                  fVar63 = fVar79 * fVar4 + fVar71 * fVar3 + fVar14 * fVar2;
                  fVar64 = fVar80 * fVar4 + fVar72 * fVar3 + fVar15 * fVar2;
                  fVar65 = fVar81 * fVar4 + fVar73 * fVar3 + fVar16 * fVar2;
                  fVar2 = pfVar7[0xd];
                  fVar3 = pfVar7[0x10];
                  fVar66 = fVar78 * fVar5 + fVar70 * fVar2 + fVar59 * fVar58;
                  fVar67 = fVar79 * fVar5 + fVar71 * fVar2 + fVar14 * fVar58;
                  fVar68 = fVar80 * fVar5 + fVar72 * fVar2 + fVar15 * fVar58;
                  fVar69 = fVar81 * fVar5 + fVar73 * fVar2 + fVar16 * fVar58;
                  fVar2 = pfVar7[0x11];
                  fVar58 = *pfVar10;
                  fVar17 = pfVar10[1];
                  fVar18 = pfVar10[2];
                  fVar19 = pfVar10[3];
                  fVar4 = pfVar9[8];
                  fVar20 = pfVar10[4];
                  fVar21 = pfVar10[5];
                  fVar22 = pfVar10[6];
                  fVar23 = pfVar10[7];
                  fVar78 = fVar78 * fVar60 + fVar70 * fVar2 + fVar59 * fVar3;
                  fVar79 = fVar79 * fVar60 + fVar71 * fVar2 + fVar14 * fVar3;
                  fVar80 = fVar80 * fVar60 + fVar72 * fVar2 + fVar15 * fVar3;
                  fVar81 = fVar81 * fVar60 + fVar73 * fVar2 + fVar16 * fVar3;
                  fVar2 = pfVar9[9];
                  fVar59 = pfVar10[8];
                  fVar14 = pfVar10[9];
                  fVar15 = pfVar10[10];
                  fVar16 = pfVar10[0xb];
                  fVar3 = pfVar9[0xc];
                  fVar5 = pfVar9[0xd];
                  fVar60 = pfVar9[0x12];
                  fVar70 = fVar59 * fVar57 + fVar20 * fVar2 + fVar58 * fVar4;
                  fVar71 = fVar14 * fVar57 + fVar21 * fVar2 + fVar17 * fVar4;
                  fVar72 = fVar15 * fVar57 + fVar22 * fVar2 + fVar18 * fVar4;
                  fVar73 = fVar16 * fVar57 + fVar23 * fVar2 + fVar19 * fVar4;
                  fVar2 = pfVar9[0xe];
                  fVar4 = pfVar9[0x10];
                  fVar82 = fVar59 * fVar2 + fVar20 * fVar5 + fVar58 * fVar3;
                  fVar83 = fVar14 * fVar2 + fVar21 * fVar5 + fVar17 * fVar3;
                  fVar84 = fVar15 * fVar2 + fVar22 * fVar5 + fVar18 * fVar3;
                  fVar85 = fVar16 * fVar2 + fVar23 * fVar5 + fVar19 * fVar3;
                  fVar2 = pfVar9[0x11];
                  auVar41._0_4_ = fVar70 * fVar61;
                  auVar41._4_4_ = fVar71 * fVar63;
                  auVar41._8_4_ = fVar72 * fVar64;
                  auVar41._12_4_ = fVar73 * fVar65;
                  auVar40 = auVar87._0_16_;
                  auStack_1d8 = vblendps_avx(auVar41,auVar40,8);
                  auVar42._0_4_ = fVar82 * fVar61;
                  auVar42._4_4_ = fVar83 * fVar63;
                  auVar42._8_4_ = fVar84 * fVar64;
                  auVar42._12_4_ = fVar85 * fVar65;
                  auVar41 = vblendps_avx(auVar42,auVar40,8);
                  auVar53 = vhaddps_avx(auStack_1d8,auVar41);
                  fVar57 = fVar59 * fVar60 + fVar20 * fVar2 + fVar58 * fVar4;
                  fVar58 = fVar14 * fVar60 + fVar21 * fVar2 + fVar17 * fVar4;
                  fVar59 = fVar15 * fVar60 + fVar22 * fVar2 + fVar18 * fVar4;
                  fVar60 = fVar16 * fVar60 + fVar23 * fVar2 + fVar19 * fVar4;
                  auVar43._0_4_ = fVar57 * fVar61;
                  auVar43._4_4_ = fVar58 * fVar63;
                  auVar43._8_4_ = fVar59 * fVar64;
                  auVar43._12_4_ = fVar60 * fVar65;
                  auStack_208 = vblendps_avx(auVar43,auVar40,8);
                  auVar44._0_4_ = fVar70 * fVar66;
                  auVar44._4_4_ = fVar71 * fVar67;
                  auVar44._8_4_ = fVar72 * fVar68;
                  auVar44._12_4_ = fVar73 * fVar69;
                  auVar40 = vblendps_avx(auVar44,auVar40,8);
                  auVar45._0_4_ = fVar82 * fVar66;
                  auVar45._4_4_ = fVar83 * fVar67;
                  auVar45._8_4_ = fVar84 * fVar68;
                  auVar45._12_4_ = fVar85 * fVar69;
                  auVar86._0_12_ = ZEXT812(0);
                  auVar86._12_4_ = 0;
                  auVar87 = ZEXT1664(auVar86);
                  auVar42 = vblendps_avx(auVar45,auVar86,8);
                  auVar46._0_4_ = fVar57 * fVar66;
                  auVar46._4_4_ = fVar58 * fVar67;
                  auVar46._8_4_ = fVar59 * fVar68;
                  auVar46._12_4_ = fVar60 * fVar69;
                  auVar44 = vhaddps_avx(auVar40,auVar42);
                  auStack_1f8 = vblendps_avx(auVar46,auVar86,8);
                  auVar47._0_4_ = fVar78 * fVar70;
                  auVar47._4_4_ = fVar79 * fVar71;
                  auVar47._8_4_ = fVar80 * fVar72;
                  auVar47._12_4_ = fVar81 * fVar73;
                  auStack_1c8 = vblendps_avx(auVar47,auVar86,8);
                  auVar48._0_4_ = fVar82 * fVar78;
                  auVar48._4_4_ = fVar83 * fVar79;
                  auVar48._8_4_ = fVar84 * fVar80;
                  auVar48._12_4_ = fVar85 * fVar81;
                  auVar43 = vblendps_avx(auVar48,auVar86,8);
                  auVar49._0_4_ = fVar78 * fVar57;
                  auVar49._4_4_ = fVar79 * fVar58;
                  auVar49._8_4_ = fVar80 * fVar59;
                  auVar49._12_4_ = fVar81 * fVar60;
                  auVar45 = vhaddps_avx(auStack_1c8,auVar43);
                  auStack_1e8 = vblendps_avx(auVar49,auVar86,8);
                  auVar46 = vhaddps_avx(auStack_208,auVar41);
                  auVar53 = vhaddps_avx(auVar53,auVar46);
                  auVar46 = vhaddps_avx(auStack_1f8,auVar42);
                  auVar44 = vhaddps_avx(auVar44,auVar46);
                  auVar46 = vhaddps_avx(auStack_1e8,auVar43);
                  auVar45 = vhaddps_avx(auVar45,auVar46);
                  uVar27 = auStack_1b8._0_4_;
                  auVar55._0_4_ = (float)(auVar53._0_4_ & uVar27);
                  uVar1 = auStack_1b8._4_4_;
                  auVar55._4_4_ = (float)(auVar53._4_4_ & uVar1);
                  uVar12 = auStack_1b8._8_4_;
                  auVar55._8_4_ = (float)(auVar53._8_4_ & uVar12);
                  uVar13 = auStack_1b8._12_4_;
                  auVar55._12_4_ = (float)(auVar53._12_4_ & uVar13);
                  auVar74._0_4_ = (float)(auVar44._0_4_ & uVar27);
                  auVar74._4_4_ = (float)(auVar44._4_4_ & uVar1);
                  auVar74._8_4_ = (float)(auVar44._8_4_ & uVar12);
                  auVar74._12_4_ = (float)(auVar44._12_4_ & uVar13);
                  auVar50._0_4_ = _DAT_146174864 + *pfVar7;
                  auVar50._4_4_ = _DAT_146174864 + pfVar7[1];
                  auVar50._8_4_ = _DAT_146174864 + pfVar7[2];
                  auVar50._12_4_ = _DAT_146174864 + pfVar7[3];
                  auVar53 = vpmovzxdq_avx(auVar74);
                  auVar77._0_4_ = (float)(auVar45._0_4_ & uVar27);
                  auVar77._4_4_ = (float)(auVar45._4_4_ & uVar1);
                  auVar77._8_4_ = (float)(auVar45._8_4_ & uVar12);
                  auVar77._12_4_ = (float)(auVar45._12_4_ & uVar13);
                  auVar44 = vunpcklps_avx(auVar55,auVar77);
                  auVar47 = vunpcklps_avx(auVar44,auVar53);
                  auVar45 = vunpckhps_avx(auVar44,auVar53);
                  fVar2 = *pfVar9;
                  fVar3 = pfVar9[1];
                  auVar53 = vshufps_avx(auVar50,auVar50,0x55);
                  auVar44 = vshufps_avx(auVar50,auVar50,0xaa);
                  auVar76._0_4_ =
                       auVar77._0_4_ * auVar44._0_4_ +
                       auVar74._0_4_ * auVar53._0_4_ + auVar55._0_4_ * auVar50._0_4_ + *pfVar9;
                  auVar76._4_4_ =
                       auVar77._4_4_ * auVar44._4_4_ +
                       auVar74._4_4_ * auVar53._4_4_ + auVar55._4_4_ * auVar50._0_4_ + pfVar9[1];
                  auVar76._8_4_ =
                       auVar77._8_4_ * auVar44._8_4_ +
                       auVar74._8_4_ * auVar53._8_4_ + auVar55._8_4_ * auVar50._0_4_ + pfVar9[2];
                  auVar76._12_4_ =
                       auVar77._12_4_ * auVar44._12_4_ +
                       auVar74._12_4_ * auVar53._12_4_ + auVar55._12_4_ * auVar50._0_4_ + pfVar9[3];
                  auVar44 = vunpckhps_avx(auVar55,auVar77);
                  auVar46 = vunpckhps_avx(auVar74,auVar86);
                  auVar53 = vhaddps_avx(auVar43,auVar86);
                  auVar43 = vunpcklps_avx(auVar44,auVar46);
                  fVar4 = pfVar9[2];
                  auVar88._0_4_ =
                       auVar43._0_4_ * fVar4 +
                       auVar45._0_4_ * fVar3 + auVar47._0_4_ * fVar2 + auVar50._0_4_;
                  auVar88._4_4_ =
                       auVar43._4_4_ * fVar4 +
                       auVar45._4_4_ * fVar3 + auVar47._4_4_ * fVar2 + auVar50._4_4_;
                  auVar88._8_4_ =
                       auVar43._8_4_ * fVar4 +
                       auVar45._8_4_ * fVar3 + auVar47._8_4_ * fVar2 + auVar50._8_4_;
                  auVar88._12_4_ =
                       auVar43._12_4_ * fVar4 +
                       auVar45._12_4_ * fVar3 + auVar47._12_4_ * fVar2 + auVar50._12_4_;
                  auVar43 = vsubps_avx(*(undefined1 (*) [16])(pfVar7 + 4),
                                       *(undefined1 (*) [16])(pfVar9 + 4));
                  auVar44 = vhaddps_avx(auStack_1d8,auVar40);
                  fVar2 = auVar43._0_4_;
                  auVar62._0_4_ = fVar70 * fVar2;
                  fVar3 = auVar43._4_4_;
                  auVar62._4_4_ = fVar71 * fVar3;
                  fVar4 = auVar43._8_4_;
                  auVar62._8_4_ = fVar72 * fVar4;
                  fVar5 = auVar43._12_4_;
                  auVar62._12_4_ = fVar73 * fVar5;
                  auVar75._0_4_ = fVar82 * fVar2;
                  auVar75._4_4_ = fVar83 * fVar3;
                  auVar75._8_4_ = fVar84 * fVar4;
                  auVar75._12_4_ = fVar85 * fVar5;
                  auVar40 = vblendps_avx(auVar62,auVar86,8);
                  auVar43 = vblendps_avx(auVar75,auVar86,8);
                  auVar45 = vhaddps_avx(auStack_1c8,auVar86);
                  auVar44 = vhaddps_avx(auVar44,auVar45);
                  auVar45 = vhaddps_avx(auVar40,auVar40);
                  auVar40 = vhaddps_avx(auVar40,auVar43);
                  auVar45 = vhaddps_avx(auVar45,auVar45);
                  auVar41 = vhaddps_avx(auVar41,auVar42);
                  auVar42 = vhaddps_avx(auVar41,auVar53);
                  auVar41 = vhaddps_avx(auVar43,auVar43);
                  auVar53 = vhaddps_avx(auVar41,auVar41);
                  auVar51._0_4_ = fVar57 * fVar2;
                  auVar51._4_4_ = fVar58 * fVar3;
                  auVar51._8_4_ = fVar59 * fVar4;
                  auVar51._12_4_ = fVar60 * fVar5;
                  auVar46 = vhaddps_avx(auStack_208,auStack_1f8);
                  auVar41 = vblendps_avx(auVar51,auVar86,8);
                  auVar47 = vhaddps_avx(auStack_1e8,auVar86);
                  auVar46 = vhaddps_avx(auVar46,auVar47);
                  auVar47 = vhaddps_avx(auVar41,auVar41);
                  auVar41 = vhaddps_avx(auVar41,auVar43);
                  auVar43 = vhaddps_avx(auVar47,auVar47);
                  auVar41 = vhaddps_avx(auVar40,auVar41);
                  auVar52._0_4_ = auVar41._0_4_ & uVar27;
                  auVar52._4_4_ = auVar41._4_4_ & uVar1;
                  auVar52._8_4_ = auVar41._8_4_ & uVar12;
                  auVar52._12_4_ = auVar41._12_4_ & uVar13;
                  auVar41 = vcmpps_avx(auVar52,auVar76,2);
                  auVar56._0_4_ =
                       (uint)(auVar43._0_4_ * auVar46._0_4_ +
                             auVar53._0_4_ * auVar42._0_4_ + auVar44._0_4_ * auVar45._0_4_) & uVar27
                  ;
                  auVar56._4_4_ =
                       (uint)(auVar43._4_4_ * auVar46._4_4_ +
                             auVar53._4_4_ * auVar42._4_4_ + auVar44._4_4_ * auVar45._4_4_) & uVar1;
                  auVar56._8_4_ =
                       (uint)(auVar43._8_4_ * auVar46._8_4_ +
                             auVar53._8_4_ * auVar42._8_4_ + auVar44._8_4_ * auVar45._8_4_) & uVar12
                  ;
                  auVar56._12_4_ =
                       (uint)(auVar43._12_4_ * auVar46._12_4_ +
                             auVar53._12_4_ * auVar42._12_4_ + auVar44._12_4_ * auVar45._12_4_) &
                       uVar13;
                  auVar40 = vcmpps_avx(auVar56,auVar88,2);
                  auVar53._0_4_ = auVar41._0_4_ & auVar40._0_4_;
                  auVar53._4_4_ = auVar41._4_4_ & auVar40._4_4_;
                  auVar53._8_4_ = auVar41._8_4_ & auVar40._8_4_;
                  auVar53._12_4_ = auVar41._12_4_ & auVar40._12_4_;
                  uVar28 = vmovmskps_avx(auVar53);
                  puVar29 = (undefined8 *)(ulonglong)(byte)~(byte)uVar28;
                  if ((~(byte)uVar28 & 7) == 0) goto LAB_1401bf8d8;
                }
                else if ((char)puVar29 != '\0') {
LAB_1401bf8d8:
                  if ((plVar35 == (longlong *)0x0) ||
                     (puVar29 = (undefined8 *)(ulonglong)uStack_124, (undefined8 *)0x7ff < puVar29))
                  {
                    puStack_160 = &UNK_146622948;
                    *(undefined8 *)((longlong)plVar34 + -8) = 0;
                    *(undefined4 *)((longlong)plVar34 + -0x10) = 0xffffffff;
                    auVar87 = ZEXT1664(auVar87._0_16_);
                    *(undefined8 *)((longlong)plVar34 + -0x38) = 0x1401bf944;
                    puVar29 = (undefined8 *)
                              FUN_145162950(lVar24,&bStack_118,&bStack_118,&puStack_160);
                    if (0xff < (ushort)puVar29) {
                      return puVar29;
                    }
                    bVar26 = (byte)puVar29 & bStack_e9;
                    puVar29 = (undefined8 *)(ulonglong)bVar26;
                    if ((bVar26 & 1) != 0) {
                      return puVar29;
                    }
                  }
                  else {
                    uStack_124 = uStack_124 + 1;
                    if (puStack_120 != (undefined1 *)0x0) {
                      auVar25[1] = cStack_117;
                      auVar25[0] = bStack_118;
                      auVar25._2_6_ = uStack_116;
                      auVar25._8_8_ = lStack_110;
                      auVar25._16_8_ = lStack_108;
                      auVar25._24_8_ = lStack_100;
                      puVar29 = (undefined8 *)((longlong)puVar29 * 0x20);
                      *(undefined1 (*) [32])(puStack_120 + (longlong)puVar29) = auVar25;
                    }
                  }
                }
              }
              lVar36 = lVar36 + 0x10;
            } while ((ulonglong)uVar31 << 4 != lVar36);
          }
          plVar37 = plVar37 + 2;
          plVar32 = plStack_158;
        } while (plVar37 != plStack_158);
      }
LAB_1401bf9aa:
      uVar33 = (ulonglong)*(uint *)(param_1 + 0xf4);
      if (uVar33 != 0) {
        lVar30 = *(longlong *)(param_1 + 0xf8);
        if (bStack_e9 == 0) {
          lVar36 = 0;
          do {
            puVar29 = *(undefined8 **)(*(longlong *)(lVar30 + lVar36) + 0x40);
            if ((puVar29 != (undefined8 *)0x0) && (*(char *)(puVar29 + 2) == '\x05')) {
              uStack_148 = *(undefined8 *)(lVar30 + lVar36);
              uStack_140 = ((undefined8 *)(lVar30 + lVar36))[1];
              *(undefined8 *)((longlong)plVar34 + -0x28) = 0x1401bfa8c;
              puVar29 = (undefined8 *)FUN_1401be7e0(param_1,&bStack_118,1,&uStack_148);
              if (cStack_117 != '\0') {
                return puVar29;
              }
            }
            lVar36 = lVar36 + 0x10;
          } while (uVar33 << 4 != lVar36);
        }
        else {
          lVar36 = 0;
          do {
            puVar29 = *(undefined8 **)(*(longlong *)(lVar30 + lVar36) + 0x40);
            if ((puVar29 != (undefined8 *)0x0) && (*(char *)(puVar29 + 2) == '\x05')) {
              uStack_148 = *(undefined8 *)(lVar30 + lVar36);
              uStack_140 = ((undefined8 *)(lVar30 + lVar36))[1];
              *(undefined8 *)((longlong)plVar34 + -0x28) = 0x1401bfa16;
              puVar29 = (undefined8 *)FUN_1401be7e0(param_1,&bStack_118,1,&uStack_148);
              if (bStack_118 == 1) {
                return puVar29;
              }
              if (cStack_117 == '\x01') {
                return puVar29;
              }
            }
            lVar36 = lVar36 + 0x10;
          } while (uVar33 << 4 != lVar36);
        }
      }
      lVar30 = lStack_150;
      if (plVar35 != (longlong *)0x0) {
        *(undefined4 *)(plVar35 + 5) = 1;
        LOCK();
        *(uint *)(plVar35 + 4) = uStack_124;
        UNLOCK();
        if (1 < uStack_124 && lStack_150 != 0) {
          uVar31 = 3;
          if (uStack_124 < 3) {
            uVar31 = uStack_124;
          }
          *(undefined8 *)((longlong)plVar34 + -0x28) = 0x1401bfae5;
          FUN_142125280(lVar30,uVar31 - 1);
        }
        *(undefined8 *)((longlong)plVar34 + -0x28) = 0x1401bfaf8;
        FUN_145598c90(plVar35);
        do {
        } while (*(int *)((longlong)plVar35 + 0x1c) != (int)plVar35[4]);
        LOCK();
        uVar31 = *(uint *)(plVar35 + 4);
        *(uint *)(plVar35 + 4) = 0;
        puVar29 = (undefined8 *)(ulonglong)uVar31;
        UNLOCK();
        auVar54._0_12_ = ZEXT812(0);
        auVar54._12_4_ = 0;
        *(undefined1 (*) [16])(param_1 + 0x228) = auVar54;
      }
    }
  }
  return puVar29;
}

