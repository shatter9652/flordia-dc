// Recovered from game_scarlett_master.exe (GTA VI, Xbox Series X, PE32+ x64)
// Address: 1400b47e0  size: 3190 bytes
// Name:    FUN_1400b47e0
// Subsystem: core
//
// Referenced strings (0 in this body, 0 including direct callees):
// Callees: FUN_145647140, FUN_1403553c0, FUN_1426220b0, FUN_1405f2720, FUN_1450b4940
//
// Generated decompilation. Formatting follows MiscRef/GTAVSRC conventions;
// identifiers are recovered, not original. See ../../../README.md.

#include "gta6decomp/rage_types.h"


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

char FUN_1400b47e0(undefined1 (*param_1) [16],longlong *param_2)

{
  undefined4 uVar1;
  longlong lVar2;
  longlong lVar3;
  undefined1 (*pauVar4) [16];
  bool bVar5;
  undefined8 uVar6;
  char cVar7;
  byte bVar8;
  longlong lVar9;
  undefined1 (*pauVar10) [16];
  longlong lVar11;
  undefined1 *puVar12;
  undefined1 (*pauVar13) [32];
  longlong lVar14;
  undefined8 uVar15;
  undefined4 *puVar16;
  longlong lVar17;
  undefined1 *puVar18;
  float *pfVar19;
  ulonglong uVar20;
  undefined8 *puVar21;
  ulonglong uVar22;
  undefined4 uVar23;
  ulonglong uVar24;
  uint *puVar25;
  uint uVar26;
  float fVar27;
  undefined1 extraout_var [56];
  undefined1 auVar28 [16];
  float fVar29;
  float fVar30;
  undefined1 auVar31 [16];
  undefined1 auVar32 [64];
  uint uVar33;
  undefined1 auVar34 [64];
  undefined1 auVar35 [64];
  undefined4 uVar36;
  undefined1 auVar37 [16];
  undefined1 auVar38 [64];
  undefined1 auVar39 [16];
  undefined1 auVar40 [64];
  undefined1 auVar41 [64];
  undefined1 auVar42 [16];
  undefined8 auStack_1e0 [4];
  undefined8 uStack_1c0;
  undefined1 auStack_1b8 [16];
  undefined1 auStack_1a8 [16];
  undefined1 auStack_198 [16];
  undefined1 auStack_188 [16];
  undefined1 auStack_178 [16];
  undefined1 auStack_168 [16];
  undefined1 auStack_158 [16];
  float fStack_13c;
  longlong lStack_138;
  undefined8 uStack_130;
  float fStack_128;
  uint uStack_124;
  undefined8 uStack_120;
  undefined4 *puStack_118;
  undefined1 *puStack_110;
  undefined1 *puStack_108;
  longlong *plStack_100;
  longlong lStack_f8;
  longlong lStack_f0;
  undefined1 auStack_e8 [16];
  undefined4 uStack_d4;
  undefined4 *puStack_d0;
  float fStack_c4;
  longlong lStack_c0;
  float fStack_b8;
  float fStack_b4;
  char cStack_ae;
  byte bStack_ad;
  undefined4 uStack_ac;
  
  uStack_d4 = *(undefined4 *)param_1[1];
  auVar40 = ZEXT1664(*param_1);
  cVar7 = param_1[3][8];
  auVar32 = ZEXT464(*(uint *)(param_1[3] + 0xc));
  lVar14 = *(longlong *)(param_1[2] + 8);
  lVar2 = param_2[9];
  lVar3 = param_2[10];
  pauVar4 = (undefined1 (*) [16])param_2[8];
  uStack_130 = *(undefined8 *)(param_1[1] + 8);
  cStack_ae = param_1[3][9];
  bStack_ad = param_1[3][10];
  uStack_120 = *(undefined8 *)param_1[2];
  puStack_118 = *(undefined4 **)param_1[3];
  lStack_f8 = *param_2;
  puStack_d0 = (undefined4 *)param_2[1];
  pfVar19 = &fStack_13c;
  if ((float *)param_2[6] != (float *)0x0) {
    pfVar19 = (float *)param_2[6];
  }
  puStack_108 = (undefined1 *)param_2[3];
  lStack_f0 = param_2[2];
  lStack_138 = param_2[7];
  puVar18 = (undefined1 *)param_2[4];
  plStack_100 = param_2;
  *pfVar19 = 1e+08;
  uVar33 = *(uint *)(param_1[4] + 8);
  uVar20 = (ulonglong)uVar33;
  uVar24 = 1;
  if (1 < uVar33) {
    uVar24 = (ulonglong)uVar33;
  }
  lVar17 = uVar24 * 0x70;
  uStack_1c0 = 0x1400b48de;
  puStack_110 = puVar18;
  lVar9 = FUN_145647140();
  auVar31 = auVar32._0_16_;
  auVar39 = auVar40._0_16_;
  lVar9 = -lVar9;
  auVar42._4_4_ = _DAT_14615a400;
  auVar42._0_4_ = _DAT_14615a400;
  auVar42._8_4_ = _DAT_14615a400;
  auVar42._12_4_ = _DAT_14615a400;
  pauVar10 = *(undefined1 (**) [16])param_1[4];
  uVar22 = 0;
  pauVar13 = (undefined1 (*) [32])(auStack_168 + lVar9);
  do {
    auVar28 = auVar39;
    if (uVar22 < uVar20) {
      auVar28 = *pauVar10;
    }
    *(undefined1 (*) [16])(pauVar13[-3] + 0x10) = auVar28;
    *(undefined4 *)pauVar13[-2] = 0xccbebc20;
    *(undefined1 (*) [16])(pauVar13[-2] + 0x10) = _DAT_14614f7f0;
    uVar15 = vmovlps_avx(auVar42);
    *(undefined8 *)pauVar13[-1] = uVar15;
    *(undefined1 (*) [16])(pauVar13[-1] + 0x10) = _DAT_14614f7f0;
    *pauVar13 = ZEXT1232(ZEXT812(0));
    uVar22 = uVar22 + 1;
    pauVar10 = pauVar10 + 1;
    pauVar13 = (undefined1 (*) [32])(pauVar13[3] + 0x10);
  } while (uVar24 != uVar22);
  auVar28 = _DAT_14614f7f0;
  lStack_c0 = lVar14;
  if (lVar14 == 0) {
LAB_1400b4993:
    puVar18 = auStack_1b8 + lVar9;
    uStack_124 = 0;
  }
  else {
    puVar18 = auStack_1b8 + lVar9;
    if ((cVar7 != '\0') && (puVar18 = auStack_1b8 + lVar9, *(int *)(lVar14 + 0x30) != 2)) {
      auVar32 = ZEXT1664(auVar31);
      auVar40 = ZEXT1664(_DAT_14614f7f0);
      auVar35 = ZEXT1664(auVar39);
      auVar41 = ZEXT1664(auVar42);
      *(undefined8 *)((longlong)auStack_1e0 + lVar9) = 0x1400b4965;
      cVar7 = func_0x000145332a60();
      auVar42 = auVar41._0_16_;
      auVar28 = auVar40._0_16_;
      auVar31 = auVar32._0_16_;
      auVar39 = auVar35._0_16_;
      puVar18 = auStack_1b8 + lVar9;
      if (cVar7 == '\0') goto LAB_1400b4993;
    }
    lVar14 = lStack_c0;
    auVar32 = ZEXT1664(auVar31);
    auVar40 = ZEXT1664(auVar28);
    auVar35 = ZEXT1664(auVar39);
    auVar41 = ZEXT1664(auVar42);
    auStack_158 = auVar39;
    *(undefined8 *)(puVar18 + -0x28) = 0x1400b498b;
    uStack_124 = func_0x0001450cc170(lVar14,auStack_158,0);
    auVar42 = auVar41._0_16_;
    auVar39 = auVar35._0_16_;
    auVar31 = auVar32._0_16_;
    auVar28 = auVar40._0_16_;
    uStack_124 = uStack_124 ^ 1;
  }
  if (puStack_108 != (undefined1 *)0x0) {
    *puStack_108 = 0;
  }
  bVar5 = false;
  uStack_ac = 0;
  fStack_b8 = -1e+08;
  uVar23 = (undefined4)uVar24;
  if (((char)uStack_124 == '\0') || (bVar5 = false, *(int *)(lStack_c0 + 0x30) != 2)) {
LAB_1400b4ca2:
    lVar14 = lStack_c0;
    puVar12 = puStack_108;
    uVar15 = uStack_130;
    if (pauVar4 != (undefined1 (*) [16])0x0) {
      *pauVar4 = auVar28;
    }
    if (bVar5) {
LAB_1400b4cfa:
      auStack_e8._0_12_ = ZEXT812(0);
      auStack_e8._12_4_ = 0;
      fStack_b4 = 1e+08;
      if (cStack_ae != '\0') {
        puVar12 = auStack_e8;
        if (lVar2 == 0) {
          puVar12 = (undefined1 *)0x0;
        }
        if (lStack_c0 == 0) {
          uVar15 = 0;
        }
        else {
          uVar15 = *(undefined8 *)(lStack_c0 + 0xc0);
        }
        auStack_188 = auVar39;
        *(undefined8 *)(puVar18 + -0x20) = uVar15;
        *(undefined1 **)(puVar18 + -0x18) = puVar12;
        puVar18[-0x10] = 1;
        auVar32 = ZEXT1664(auVar31);
        auVar40 = ZEXT1664(auVar28);
        auVar35 = ZEXT1664(auVar39);
        auVar41 = ZEXT1664(auVar42);
        *(undefined8 *)(puVar18 + -0x48) = 0x1400b4d6f;
        uStack_ac = FUN_1403553c0(auStack_188,&fStack_b4,&fStack_c4,pfVar19);
        auVar42 = auVar41._0_16_;
        auVar39 = auVar35._0_16_;
        auVar28 = auVar40._0_16_;
        auVar31 = auVar32._0_16_;
        if ((char)uStack_ac != '\0') {
          *(undefined1 *)(plStack_100 + 5) = 1;
        }
      }
      auVar32 = ZEXT1664(auVar31);
      auVar40 = ZEXT1664(auVar28);
      auVar35 = ZEXT1664(auVar39);
      auVar41 = ZEXT1664(auVar42);
      *(undefined8 *)(puVar18 + -0x28) = 0x1400b4da1;
      auVar34._0_8_ = func_0x00014396e550();
      auVar34._8_56_ = extraout_var;
      auVar38 = ZEXT1664(auVar34._0_16_);
      lVar14 = 0;
      fVar27 = (float)auVar34._0_8_;
      fStack_b8 = fVar27;
      do {
        *(float *)(auStack_188 + lVar14 + lVar9) = fVar27;
        *(float *)(auStack_188 + lVar14 + lVar9 + 4) = fVar27;
        uVar36 = uStack_d4;
        uVar15 = uStack_120;
        lVar14 = lVar14 + 0x70;
      } while (lVar17 - lVar14 != 0);
      uVar1 = *puStack_118;
      auVar34 = ZEXT464(_DAT_14615a400);
      *(undefined4 *)(puVar18 + -8) = puStack_118[1];
      *(undefined4 *)(puVar18 + -0x10) = uVar1;
      *(undefined4 *)(puVar18 + -0x20) = uVar23;
      *(undefined1 **)(puVar18 + -0x28) = auStack_1b8 + lVar9;
      *(float *)(puVar18 + -0x50) = fVar27;
      *(undefined4 *)(puVar18 + -0x18) = 1;
      puVar18[-0x40] = lVar3 != 0;
      puVar18[-0x38] = pauVar4 != (undefined1 (*) [16])0x0;
      bVar8 = pauVar4 != (undefined1 (*) [16])0x0 & bStack_ad;
      puVar18[-0x48] = lVar2 != 0;
      puVar18[-0x30] = bVar8;
      *(undefined8 *)(puVar18 + -0x78) = 0x1400b4e41;
      FUN_1405f2720(uVar15,auVar32._0_8_,uVar36,_DAT_14615a400);
      fVar27 = fStack_b4;
      lVar14 = lStack_c0;
      puVar16 = puStack_d0;
      if ((char)uStack_ac == '\0') {
        if (puStack_d0 == (undefined4 *)0x0) goto LAB_1400b4f2e;
LAB_1400b4ef2:
        *puVar16 = auVar38._0_4_;
      }
      else {
        lVar11 = 0;
        do {
          fVar29 = *pfVar19;
          fVar30 = *(float *)(auStack_188 + lVar11 + lVar9);
          if (fVar29 <= *(float *)(auStack_188 + lVar11 + lVar9)) {
            *(undefined1 (*) [16])(auStack_178 + lVar11 + lVar9) = auVar40._0_16_;
            fVar29 = *pfVar19;
            *(float *)(auStack_188 + lVar11 + lVar9) = fVar29;
            fVar30 = fVar29;
          }
          if (fVar27 <= fVar30) {
            uVar15 = auStack_e8._8_8_;
            *(undefined8 *)(auStack_168 + lVar11 + lVar9) = auStack_e8._0_8_;
            *(undefined8 *)((longlong)(auStack_168 + lVar11 + lVar9) + 8) = uVar15;
            fVar29 = *pfVar19;
          }
          fVar30 = *(float *)(auStack_188 + lVar11 + lVar9 + 4);
          if (fVar29 <= *(float *)(auStack_188 + lVar11 + lVar9 + 4)) {
            *(float *)(auStack_188 + lVar11 + lVar9 + 4) = fVar29;
            fVar30 = fVar29;
          }
          if (fVar27 <= fVar30) {
            uVar15 = auStack_e8._8_8_;
            *(undefined8 *)(auStack_158 + lVar11 + lVar9) = auStack_e8._0_8_;
            *(undefined8 *)((longlong)(auStack_158 + lVar11 + lVar9) + 8) = uVar15;
          }
          lVar11 = lVar11 + 0x70;
        } while (lVar17 - lVar11 != 0);
        if (puVar16 != (undefined4 *)0x0) {
          auVar31 = vminss_avx(auVar38._0_16_,ZEXT416((uint)*pfVar19));
          auVar38 = ZEXT1664(auVar31);
          goto LAB_1400b4ef2;
        }
      }
      if ((char)uStack_ac == '\0') {
LAB_1400b4f2e:
        puVar25 = (uint *)(auStack_188 + lVar9);
        cVar7 = '\x01';
        lVar14 = 0;
        do {
          uVar33 = *puVar25;
          if (0x7f7fffff < (uVar33 & 0x7fffffff)) {
            cVar7 = '\0';
            uVar33 = auVar34._0_4_;
            *puVar25 = 0xccbebc20;
          }
          *(uint *)(lStack_f8 + lVar14) = uVar33;
          if (lVar2 != 0) {
            uVar15 = *(undefined8 *)(puVar25 + 10);
            puVar21 = (undefined8 *)(lVar2 + lVar14 * 4);
            *puVar21 = *(undefined8 *)(puVar25 + 8);
            puVar21[1] = uVar15;
          }
          if (lVar3 != 0) {
            uVar15 = *(undefined8 *)(puVar25 + 0xe);
            puVar21 = (undefined8 *)(lVar3 + lVar14 * 4);
            *puVar21 = *(undefined8 *)(puVar25 + 0xc);
            puVar21[1] = uVar15;
          }
          if (pauVar4 != (undefined1 (*) [16])0x0) {
            uVar15 = *(undefined8 *)(puVar25 + 6);
            *(undefined8 *)(*pauVar4 + lVar14 * 4) = *(undefined8 *)(puVar25 + 4);
            *(undefined8 *)((longlong)(*pauVar4 + lVar14 * 4) + 8) = uVar15;
          }
          if (lStack_f0 != 0) {
            *(uint *)(lStack_f0 + lVar14) = puVar25[1];
          }
          lVar14 = lVar14 + 4;
          puVar25 = puVar25 + 0x1c;
        } while (uVar24 * 4 != lVar14);
        return cVar7;
      }
    }
    else {
      auStack_198 = auVar39;
      puVar18[-8] = 0;
      *(undefined8 *)(puVar18 + -0x10) = uVar15;
      auVar32 = ZEXT1664(auVar31);
      auVar40 = ZEXT1664(auVar28);
      auVar35 = ZEXT1664(auVar39);
      auVar41 = ZEXT1664(auVar42);
      *(undefined8 *)(puVar18 + -0x38) = 0x1400b4ce7;
      cVar7 = FUN_1426220b0(auStack_198,&fStack_b8,lVar14,puVar12);
      auVar42 = auVar41._0_16_;
      auVar39 = auVar35._0_16_;
      auVar28 = auVar40._0_16_;
      auVar31 = auVar32._0_16_;
      puVar16 = puStack_d0;
      lVar14 = lStack_c0;
      if (cVar7 != '\0') goto LAB_1400b4cfa;
    }
    if (((char)uStack_124 != '\0') && ((char)uStack_ac == '\0')) {
      if (puVar16 != (undefined4 *)0x0) {
        *puVar16 = 0xccbebc20;
      }
      puVar21 = (undefined8 *)(auStack_188 + lVar9);
      lVar14 = 0;
      do {
        uVar15 = vmovlps_avx(auVar41._0_16_);
        *puVar21 = uVar15;
        *(undefined4 *)(lStack_f8 + lVar14) = 0xccbebc20;
        if (lVar2 != 0) {
          *(undefined1 (*) [16])(lVar2 + lVar14 * 4) = *(undefined1 (*) [16])(puVar21 + 4);
        }
        if (lVar3 != 0) {
          *(undefined1 (*) [16])(lVar3 + lVar14 * 4) = *(undefined1 (*) [16])(puVar21 + 6);
        }
        if (pauVar4 != (undefined1 (*) [16])0x0) {
          *(undefined1 (*) [16])(*pauVar4 + lVar14 * 4) = *(undefined1 (*) [16])(puVar21 + 2);
        }
        if (lStack_f0 != 0) {
          *(undefined4 *)(lStack_f0 + lVar14) = *(undefined4 *)((longlong)puVar21 + 4);
        }
        lVar14 = lVar14 + 4;
        puVar21 = puVar21 + 0xe;
      } while (uVar24 * 4 != lVar14);
      return '\0';
    }
    if (puStack_110 != (undefined1 *)0x0) {
      *puStack_110 = 1;
    }
    if (lVar14 == 0) {
      uVar15 = 0;
    }
    else {
      uVar15 = *(undefined8 *)(lVar14 + 0xc0);
    }
    auStack_178 = auVar35._0_16_;
    *(longlong *)(puVar18 + -0x10) = lStack_138;
    *(undefined8 *)(puVar18 + -0x38) = 0x1400b4fea;
    cVar7 = FUN_1450b4940(auStack_178,&fStack_b8,pauVar4,uVar15);
    uVar33 = _DAT_14615a400;
    uVar15 = auVar32._0_8_;
    if (cVar7 == '\0') {
      if ((char)uStack_ac != '\0') {
        puVar25 = (uint *)(auStack_188 + lVar9);
        cVar7 = '\x01';
        lVar14 = 0;
        do {
          uVar26 = *puVar25;
          if (0x7f7fffff < (*puVar25 & 0x7fffffff)) {
            cVar7 = '\0';
            *puVar25 = 0xccbebc20;
            uVar26 = uVar33;
          }
          *(uint *)(lStack_f8 + lVar14) = uVar26;
          if (lVar2 != 0) {
            uVar15 = *(undefined8 *)(puVar25 + 10);
            puVar21 = (undefined8 *)(lVar2 + lVar14 * 4);
            *puVar21 = *(undefined8 *)(puVar25 + 8);
            puVar21[1] = uVar15;
          }
          if (lVar3 != 0) {
            uVar15 = *(undefined8 *)(puVar25 + 0xe);
            puVar21 = (undefined8 *)(lVar3 + lVar14 * 4);
            *puVar21 = *(undefined8 *)(puVar25 + 0xc);
            puVar21[1] = uVar15;
          }
          if (pauVar4 != (undefined1 (*) [16])0x0) {
            uVar15 = *(undefined8 *)(puVar25 + 6);
            *(undefined8 *)(*pauVar4 + lVar14 * 4) = *(undefined8 *)(puVar25 + 4);
            *(undefined8 *)((longlong)(*pauVar4 + lVar14 * 4) + 8) = uVar15;
          }
          if (lStack_f0 != 0) {
            *(uint *)(lStack_f0 + lVar14) = puVar25[1];
          }
          lVar14 = lVar14 + 4;
          puVar25 = puVar25 + 0x1c;
        } while (uVar24 * 4 != lVar14);
        return cVar7;
      }
      lVar14 = 0;
      do {
        uVar15 = vmovlps_avx(auVar41._0_16_);
        *(undefined8 *)(auStack_188 + lVar14 + lVar9) = uVar15;
        lVar14 = lVar14 + 0x70;
      } while (lVar17 - lVar14 != 0);
      if (puStack_d0 == (undefined4 *)0x0) {
        return '\0';
      }
      *puStack_d0 = 0xccbebc20;
      return '\0';
    }
    auStack_e8._0_12_ = ZEXT812(0);
    auStack_e8._12_4_ = 0;
    *(undefined1 *)(plStack_100 + 5) = 0;
    fStack_b4 = 1e+08;
    if (cStack_ae != '\0') {
      puVar12 = auStack_e8;
      if (lVar2 == 0) {
        puVar12 = (undefined1 *)0x0;
      }
      if (lStack_c0 == 0) {
        uVar15 = 0;
      }
      else {
        uVar15 = *(undefined8 *)(lStack_c0 + 0xc0);
      }
      auStack_168 = auVar35._0_16_;
      *(undefined8 *)(puVar18 + -0x20) = uVar15;
      *(undefined1 **)(puVar18 + -0x18) = puVar12;
      puVar18[-0x10] = 1;
      *(undefined8 *)(puVar18 + -0x48) = 0x1400b5203;
      cVar7 = FUN_1403553c0(auStack_168,&fStack_b4,&fStack_c4,pfVar19);
      uVar15 = auVar32._0_8_;
      if ((cVar7 == '\0') || (fStack_b8 <= fStack_c4)) {
        uStack_ac = 0;
      }
      else {
        *(undefined1 *)(plStack_100 + 5) = 1;
        uStack_ac = (undefined4)CONCAT71((int7)((ulonglong)plStack_100 >> 8),1);
      }
    }
    fVar27 = fStack_b8;
    auVar32 = ZEXT464((uint)fStack_b8);
    lVar14 = 0;
    do {
      *(float *)(auStack_188 + lVar14 + lVar9) = fVar27;
      *(float *)(auStack_188 + lVar14 + lVar9 + 4) = fVar27;
      if (pauVar4 != (undefined1 (*) [16])0x0) {
        *(undefined1 (*) [16])(auStack_178 + lVar14 + lVar9) = *pauVar4;
      }
      uVar36 = uStack_d4;
      uVar6 = uStack_120;
      lVar14 = lVar14 + 0x70;
    } while (lVar17 - lVar14 != 0);
    uVar1 = *puStack_118;
    auVar35 = ZEXT464(_DAT_14615a400);
    *(undefined4 *)(puVar18 + -8) = puStack_118[1];
    *(undefined4 *)(puVar18 + -0x10) = uVar1;
    *(undefined4 *)(puVar18 + -0x20) = uVar23;
    *(undefined1 **)(puVar18 + -0x28) = auStack_1b8 + lVar9;
    *(float *)(puVar18 + -0x50) = fVar27;
    *(undefined4 *)(puVar18 + -0x18) = 2;
    puVar18[-0x40] = lVar3 != 0;
    puVar18[-0x38] = pauVar4 != (undefined1 (*) [16])0x0;
    bVar8 = pauVar4 != (undefined1 (*) [16])0x0 & bStack_ad;
    puVar18[-0x48] = lVar2 != 0;
    puVar18[-0x30] = bVar8;
    *(undefined8 *)(puVar18 + -0x78) = 0x1400b52d6;
    FUN_1405f2720(uVar6,uVar15,uVar36,_DAT_14615a400);
    if ((char)uStack_ac == '\0') {
      if (puStack_d0 != (undefined4 *)0x0) goto LAB_1400b5374;
    }
    else {
      lVar14 = 0;
      do {
        fVar27 = *pfVar19;
        fVar29 = *(float *)(auStack_188 + lVar14 + lVar9);
        if (fVar27 <= *(float *)(auStack_188 + lVar14 + lVar9)) {
          *(undefined1 (*) [16])(auStack_178 + lVar14 + lVar9) = auVar40._0_16_;
          fVar27 = *pfVar19;
          *(float *)(auStack_188 + lVar14 + lVar9) = fVar27;
          fVar29 = fVar27;
        }
        if (fStack_b4 <= fVar29) {
          uVar15 = auStack_e8._8_8_;
          *(undefined8 *)(auStack_168 + lVar14 + lVar9) = auStack_e8._0_8_;
          *(undefined8 *)((longlong)(auStack_168 + lVar14 + lVar9) + 8) = uVar15;
          fVar27 = *pfVar19;
        }
        fVar29 = *(float *)(auStack_188 + lVar14 + lVar9 + 4);
        if (fVar27 <= *(float *)(auStack_188 + lVar14 + lVar9 + 4)) {
          *(float *)(auStack_188 + lVar14 + lVar9 + 4) = fVar27;
          fVar29 = fVar27;
        }
        if (fStack_b4 <= fVar29) {
          uVar15 = auStack_e8._8_8_;
          *(undefined8 *)(auStack_158 + lVar14 + lVar9) = auStack_e8._0_8_;
          *(undefined8 *)((longlong)(auStack_158 + lVar14 + lVar9) + 8) = uVar15;
        }
        lVar14 = lVar14 + 0x70;
      } while (lVar17 - lVar14 != 0);
      if (puStack_d0 != (undefined4 *)0x0) {
        auVar31 = vminss_avx(auVar32._0_16_,ZEXT416((uint)*pfVar19));
        auVar32 = ZEXT1664(auVar31);
LAB_1400b5374:
        *puStack_d0 = auVar32._0_4_;
      }
    }
    puVar25 = (uint *)(auStack_188 + lVar9);
    cVar7 = '\x01';
    lVar14 = 0;
    do {
      uVar33 = *puVar25;
      if (0x7f7fffff < (uVar33 & 0x7fffffff)) {
        cVar7 = '\0';
        uVar33 = auVar35._0_4_;
        *puVar25 = 0xccbebc20;
      }
      *(uint *)(lStack_f8 + lVar14) = uVar33;
      if (lVar2 != 0) {
        uVar15 = *(undefined8 *)(puVar25 + 10);
        puVar21 = (undefined8 *)(lVar2 + lVar14 * 4);
        *puVar21 = *(undefined8 *)(puVar25 + 8);
        puVar21[1] = uVar15;
      }
      if (lVar3 != 0) {
        uVar15 = *(undefined8 *)(puVar25 + 0xe);
        puVar21 = (undefined8 *)(lVar3 + lVar14 * 4);
        *puVar21 = *(undefined8 *)(puVar25 + 0xc);
        puVar21[1] = uVar15;
      }
      if (pauVar4 != (undefined1 (*) [16])0x0) {
        uVar15 = *(undefined8 *)(puVar25 + 6);
        *(undefined8 *)(*pauVar4 + lVar14 * 4) = *(undefined8 *)(puVar25 + 4);
        *(undefined8 *)((longlong)(*pauVar4 + lVar14 * 4) + 8) = uVar15;
      }
      if (lStack_f0 != 0) {
        *(uint *)(lStack_f0 + lVar14) = puVar25[1];
      }
      lVar14 = lVar14 + 4;
      puVar25 = puVar25 + 0x1c;
    } while (uVar24 * 4 != lVar14);
    goto LAB_1400b540a;
  }
  uVar33 = *(uint *)(lStack_c0 + 0x14);
  auVar37 = ZEXT416(uVar33);
  auStack_e8._0_12_ = ZEXT812(0);
  auStack_e8._12_4_ = 0;
  fStack_b4 = 1e+08;
  if (cStack_ae == '\0') {
LAB_1400b4a55:
    uStack_ac = 0;
  }
  else {
    puVar12 = auStack_e8;
    if (lVar2 == 0) {
      puVar12 = (undefined1 *)0x0;
    }
    auStack_1b8 = auVar39;
    *(undefined8 *)(puVar18 + -0x20) = *(undefined8 *)(lStack_c0 + 0xc0);
    *(undefined1 **)(puVar18 + -0x18) = puVar12;
    puVar18[-0x10] = 1;
    auVar32 = ZEXT1664(auVar31);
    auVar40 = ZEXT464(uVar33);
    auVar35 = ZEXT1664(auVar28);
    auVar41 = ZEXT1664(auVar39);
    auVar34 = ZEXT1664(auVar42);
    *(undefined8 *)(puVar18 + -0x48) = 0x1400b4a35;
    uStack_ac = FUN_1403553c0(auStack_1b8,&fStack_b4,&fStack_c4,pfVar19);
    puVar12 = puStack_108;
    uVar15 = uStack_130;
    auVar28 = auVar35._0_16_;
    auVar37 = auVar40._0_16_;
    if (((char)uStack_ac != '\0') && (auVar40._0_4_ <= fStack_c4)) goto LAB_1400b4a55;
    auStack_1a8 = auVar41._0_16_;
    puVar18[-8] = 0;
    *(undefined8 *)(puVar18 + -0x10) = uVar15;
    *(undefined8 *)(puVar18 + -0x38) = 0x1400b4c78;
    cVar7 = FUN_1426220b0(auStack_1a8,&fStack_128,_DAT_14615a2d0,puVar12);
    auVar42 = auVar34._0_16_;
    auVar39 = auVar41._0_16_;
    auVar31 = auVar32._0_16_;
    auVar28 = auVar35._0_16_;
    auVar37 = auVar40._0_16_;
    if (cVar7 != '\0') {
      bVar5 = true;
      fStack_b8 = fStack_128;
      goto LAB_1400b4ca2;
    }
    if (puStack_108 != (undefined1 *)0x0) {
      *puStack_108 = 0;
    }
    if ((char)uStack_ac == '\0') goto LAB_1400b4a55;
    *(undefined1 *)(plStack_100 + 5) = 1;
    uStack_ac = (undefined4)CONCAT71((int7)((ulonglong)plStack_100 >> 8),1);
  }
  lVar14 = lStack_c0;
  puVar21 = (undefined8 *)(lStack_c0 + 0x90);
  lVar11 = 0;
  do {
    uVar15 = *(undefined8 *)(lVar14 + 0x98);
    *(undefined8 *)(auStack_178 + lVar11 + lVar9) = *puVar21;
    *(undefined8 *)((longlong)(auStack_178 + lVar11 + lVar9) + 8) = uVar15;
    uVar36 = auVar37._0_4_;
    *(undefined4 *)(auStack_188 + lVar11 + lVar9) = uVar36;
    *(undefined4 *)(auStack_188 + lVar11 + lVar9 + 4) = uVar36;
    *(undefined1 (*) [16])(auStack_198 + lVar11 + lVar9) = auVar28;
    lVar11 = lVar11 + 0x70;
  } while (lVar17 - lVar11 != 0);
  uVar1 = *puStack_118;
  *(undefined4 *)(puVar18 + -8) = puStack_118[1];
  *(undefined4 *)(puVar18 + -0x10) = uVar1;
  *(undefined4 *)(puVar18 + -0x20) = uVar23;
  *(undefined1 **)(puVar18 + -0x28) = auStack_1b8 + lVar9;
  *(undefined4 *)(puVar18 + -0x50) = uVar36;
  *(undefined4 *)(puVar18 + -0x18) = 2;
  puVar18[-0x40] = lVar3 != 0;
  puVar18[-0x38] = pauVar4 != (undefined1 (*) [16])0x0;
  bVar8 = pauVar4 != (undefined1 (*) [16])0x0 & bStack_ad;
  puVar18[-0x48] = lVar2 != 0;
  puVar18[-0x30] = bVar8;
  auVar32 = ZEXT1664(auVar37);
  auVar40 = ZEXT1664(auVar28);
  *(undefined8 *)(puVar18 + -0x78) = 0x1400b4b0c;
  uVar33 = _DAT_14615a400;
  FUN_1405f2720();
  if ((char)uStack_ac == '\0') {
    if (puStack_d0 != (undefined4 *)0x0) goto LAB_1400b4baa;
  }
  else {
    lVar14 = 0;
    do {
      fVar27 = *pfVar19;
      fVar29 = *(float *)(auStack_188 + lVar14 + lVar9);
      if (fVar27 <= *(float *)(auStack_188 + lVar14 + lVar9)) {
        *(undefined1 (*) [16])(auStack_178 + lVar14 + lVar9) = auVar40._0_16_;
        fVar27 = *pfVar19;
        *(float *)(auStack_188 + lVar14 + lVar9) = fVar27;
        fVar29 = fVar27;
      }
      if (fStack_b4 <= fVar29) {
        uVar15 = auStack_e8._8_8_;
        *(undefined8 *)(auStack_168 + lVar14 + lVar9) = auStack_e8._0_8_;
        *(undefined8 *)((longlong)(auStack_168 + lVar14 + lVar9) + 8) = uVar15;
        fVar27 = *pfVar19;
      }
      fVar29 = *(float *)(auStack_188 + lVar14 + lVar9 + 4);
      if (fVar27 <= *(float *)(auStack_188 + lVar14 + lVar9 + 4)) {
        *(float *)(auStack_188 + lVar14 + lVar9 + 4) = fVar27;
        fVar29 = fVar27;
      }
      if (fStack_b4 <= fVar29) {
        uVar15 = auStack_e8._8_8_;
        *(undefined8 *)(auStack_158 + lVar14 + lVar9) = auStack_e8._0_8_;
        *(undefined8 *)((longlong)(auStack_158 + lVar14 + lVar9) + 8) = uVar15;
      }
      lVar14 = lVar14 + 0x70;
    } while (lVar17 - lVar14 != 0);
    if (puStack_d0 != (undefined4 *)0x0) {
      auVar31 = vminss_avx(auVar32._0_16_,ZEXT416((uint)*pfVar19));
      auVar32 = ZEXT1664(auVar31);
LAB_1400b4baa:
      *puStack_d0 = auVar32._0_4_;
    }
  }
  puVar25 = (uint *)(auStack_188 + lVar9);
  cVar7 = '\x01';
  lVar14 = 0;
  do {
    uVar26 = *puVar25;
    if (0x7f7fffff < (*puVar25 & 0x7fffffff)) {
      cVar7 = '\0';
      *puVar25 = 0xccbebc20;
      uVar26 = uVar33;
    }
    *(uint *)(lStack_f8 + lVar14) = uVar26;
    if (lVar2 != 0) {
      uVar15 = *(undefined8 *)(puVar25 + 10);
      puVar21 = (undefined8 *)(lVar2 + lVar14 * 4);
      *puVar21 = *(undefined8 *)(puVar25 + 8);
      puVar21[1] = uVar15;
    }
    if (lVar3 != 0) {
      uVar15 = *(undefined8 *)(puVar25 + 0xe);
      puVar21 = (undefined8 *)(lVar3 + lVar14 * 4);
      *puVar21 = *(undefined8 *)(puVar25 + 0xc);
      puVar21[1] = uVar15;
    }
    if (pauVar4 != (undefined1 (*) [16])0x0) {
      uVar15 = *(undefined8 *)(puVar25 + 6);
      *(undefined8 *)(*pauVar4 + lVar14 * 4) = *(undefined8 *)(puVar25 + 4);
      *(undefined8 *)((longlong)(*pauVar4 + lVar14 * 4) + 8) = uVar15;
    }
    if (lStack_f0 != 0) {
      *(uint *)(lStack_f0 + lVar14) = puVar25[1];
    }
    lVar14 = lVar14 + 4;
    puVar25 = puVar25 + 0x1c;
  } while (uVar24 * 4 != lVar14);
LAB_1400b540a:
  return cVar7 * '\x02';
}

