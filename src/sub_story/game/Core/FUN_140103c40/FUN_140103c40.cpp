// Recovered from game_scarlett_master.exe (GTA VI, Xbox Series X, PE32+ x64)
// Address: 140103c40  size: 1008 bytes
// Name:    FUN_140103c40
// Subsystem: core
//
// Referenced strings (0 in this body, 0 including direct callees):
// Callees: FUN_1450228c0, FUN_14268ba50, FUN_14506e3e0
//
// Generated decompilation. Formatting follows MiscRef/GTAVSRC conventions;
// identifiers are recovered, not original. See ../../../README.md.

#include "gta6decomp/rage_types.h"


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_140103c40(longlong *param_1,longlong param_2)

{
  byte *pbVar1;
  short *psVar2;
  ushort *puVar3;
  undefined1 auVar4 [16];
  undefined1 auVar5 [16];
  undefined1 auVar6 [16];
  float *pfVar7;
  undefined8 uVar8;
  longlong lVar9;
  float fVar10;
  float fVar11;
  float fVar12;
  uint uVar13;
  char cVar14;
  ushort uVar15;
  short sVar16;
  ulonglong uVar17;
  longlong *plVar18;
  longlong lVar19;
  longlong lVar20;
  ulonglong uVar21;
  uint uVar22;
  uint uVar23;
  longlong lVar24;
  uint7 uVar25;
  longlong unaff_GS_OFFSET;
  bool bVar26;
  bool bVar27;
  float fVar28;
  float fVar29;
  float fVar30;
  float fVar31;
  float fVar32;
  float fVar33;
  float fVar34;
  float fVar35;
  undefined1 auVar36 [16];
  undefined1 auVar37 [16];
  undefined1 auVar38 [16];
  undefined1 auVar39 [16];
  undefined1 auVar40 [16];
  undefined1 auVar41 [16];
  float fVar42;
  float fVar43;
  undefined1 auVar44 [16];
  float fVar48;
  float fVar50;
  float fVar51;
  undefined1 auVar45 [16];
  float fVar47;
  float fVar49;
  undefined *unaff_XMM6_Qb;
  undefined1 auVar46 [64];
  undefined1 auVar52 [64];
  undefined1 auVar53 [64];
  ulonglong unaff_XMM9_Qb;
  undefined1 auVar54 [64];
  undefined1 auVar55 [64];
  undefined1 auStack_f8 [16];
  undefined1 auStack_e8 [16];
  undefined1 auStack_d8 [16];
  undefined1 auStack_c8 [16];
  undefined1 auStack_b8 [16];
  undefined1 auStack_a8 [16];
  undefined *puStack_90;
  undefined8 uStack_60;
  undefined1 auStack_58 [32];
  
  lVar24 = *param_1;
  if (lVar24 == 0) {
    return;
  }
  pfVar7 = *(float **)(param_2 + 8);
  puStack_90 = unaff_XMM6_Qb;
  uStack_60 = (undefined *)unaff_XMM9_Qb;
  if ((*(byte *)(lVar24 + 0x1a) & 0x20) == 0) {
    if (*(int *)(lVar24 + 0x10) == 0) {
      FUN_14506e3e0(lVar24,pfVar7);
      if ((short)param_1[3] != -2) {
        *(byte *)((longlong)param_1 + 0x55) = *(byte *)((longlong)param_1 + 0x55) | 1;
      }
    }
    else {
      func_0x000145221f40(lVar24,pfVar7,3,0,1);
    }
  }
  uVar17 = (ulonglong)((*(uint *)(param_1[2] + 0x78) & 0xffff) << 4);
  if (*(short *)(*(longlong *)(_DAT_14abbf348 + 0x28) + 8 + uVar17) ==
      (short)(*(uint *)(param_1[2] + 0x78) >> 0x10)) {
    if ((short)param_1[3] == -2) {
      auVar53 = ZEXT1664(_DAT_14614f7f0);
      auVar52 = ZEXT864(_DAT_146159bc0);
      auVar46 = ZEXT464((uint)_DAT_145fc6ed8);
      auVar54 = ZEXT864(0);
      plVar18 = *(longlong **)(*(longlong *)(_DAT_14abbf348 + 0x28) + uVar17);
      if (((plVar18 == (longlong *)0x0) ||
          (cVar14 = (**(code **)(*plVar18 + 0xb0))(plVar18), cVar14 == '\0')) ||
         (cVar14 = (**(code **)(*plVar18 + 0x570))(plVar18), cVar14 != '\0')) goto LAB_140103f19;
    }
LAB_140103dc2:
    lVar24 = *param_1;
    auVar6 = *(undefined1 (*) [16])(lVar24 + 0x50);
    auVar36 = *(undefined1 (*) [16])(lVar24 + 0x80);
    auVar4 = *(undefined1 (*) [16])(lVar24 + 0x60);
    auVar5 = *(undefined1 (*) [16])(lVar24 + 0x70);
    auVar38 = vpunpckhwd_avx(auVar36,auVar36);
    auVar38 = vpsrad_avx(auVar38,0x10);
    auVar38 = vcvtdq2ps_avx(auVar38);
    auVar38 = vshufpd_avx(auVar38,auVar38,3);
    auVar39._0_4_ = (float)_DAT_146159c90 * auVar38._0_4_ + auVar36._0_4_;
    fVar48 = (float)((ulonglong)_DAT_146159c90 >> 0x20);
    auVar39._4_4_ = fVar48 * auVar38._4_4_ + auVar36._4_4_;
    auVar39._8_4_ = auVar38._8_4_ * 0.0 + auVar36._8_4_;
    auVar39._12_4_ = auVar38._12_4_ * 0.0 + auVar36._12_4_;
    auVar36._4_4_ = _DAT_14615a290;
    auVar36._0_4_ = _DAT_14615a290;
    auVar36._8_4_ = _DAT_14615a290;
    auVar36._12_4_ = _DAT_14615a290;
    auVar36 = vrcpps_avx(auVar36);
    fVar42 = auVar36._0_4_;
    fVar47 = auVar36._4_4_;
    fVar49 = auVar36._8_4_;
    fVar43 = auVar36._12_4_;
    auVar44._0_4_ =
         auVar39._0_4_ * ((-(fVar42 * _DAT_14615a290) + _DAT_145fc6ed8) * fVar42 + fVar42);
    auVar44._4_4_ =
         auVar39._4_4_ * ((-(fVar47 * _DAT_14615a290) + _DAT_145fc6ed8) * fVar47 + fVar47);
    auVar44._8_4_ =
         auVar39._8_4_ * ((-(fVar49 * _DAT_14615a290) + _DAT_145fc6ed8) * fVar49 + fVar49);
    auVar44._12_4_ =
         auVar39._12_4_ * ((-(fVar43 * _DAT_14615a290) + _DAT_145fc6ed8) * fVar43 + fVar43);
    auVar38 = vroundps_avx(auVar44,3);
    auVar37._0_4_ = -(auVar38._0_4_ * _DAT_14615a290) + auVar39._0_4_;
    auVar37._4_4_ = -(auVar38._4_4_ * _DAT_14615a290) + auVar39._4_4_;
    auVar37._8_4_ = -(auVar38._8_4_ * _DAT_14615a290) + auVar39._8_4_;
    auVar37._12_4_ = -(auVar38._12_4_ * _DAT_14615a290) + auVar39._12_4_;
    auVar36 = vblendps_avx(auVar39,auVar37,3);
    auVar40._0_4_ = (int)auVar38._0_4_;
    auVar40._4_4_ = (int)auVar38._4_4_;
    auVar40._8_4_ = (int)auVar38._8_4_;
    auVar40._12_4_ = (int)auVar38._12_4_;
    auVar38 = vpackssdw_avx(auVar40,auVar40);
    auVar36 = vinsertps_avx(auVar36,auVar38,0x30);
    auVar38 = vsubps_avx(*(undefined1 (*) [16])(pfVar7 + 0xc),auVar36);
    auStack_e8 = vpsubw_avx(*(undefined1 (*) [16])(pfVar7 + 0xc),auVar36);
    auVar36 = vblendps_avx(auVar38,auStack_e8,8);
    auVar38 = vpunpckhwd_avx(auVar36,auVar36);
    fVar42 = pfVar7[2];
    fVar47 = pfVar7[6];
    fVar49 = pfVar7[10];
    auVar38 = vpsrad_avx(auVar38,0x10);
    auVar38 = vcvtdq2ps_avx(auVar38);
    auVar38 = vshufpd_avx(auVar38,auVar38,3);
    fVar43 = (float)_DAT_146159c90 * auVar38._0_4_ + auVar36._0_4_;
    fVar48 = fVar48 * auVar38._4_4_ + auVar36._4_4_;
    fVar50 = auVar38._8_4_ * 0.0 + auVar36._8_4_;
    fVar51 = auVar38._12_4_ * 0.0 + auVar36._12_4_;
    auVar40 = ZEXT816(0) << 0x20;
    auVar39 = vunpcklps_avx(auVar4,auVar40);
    auVar41._0_4_ = fVar43 * auVar4._0_4_;
    auVar41._4_4_ = fVar48 * auVar4._4_4_;
    auVar41._8_4_ = fVar50 * auVar4._8_4_;
    auVar41._12_4_ = fVar51 * auVar4._12_4_;
    auVar38._0_4_ = fVar43 * auVar6._0_4_;
    auVar38._4_4_ = fVar48 * auVar6._4_4_;
    auVar38._8_4_ = fVar50 * auVar6._8_4_;
    auVar38._12_4_ = fVar51 * auVar6._12_4_;
    auVar45._0_4_ = fVar43 * auVar5._0_4_;
    auVar45._4_4_ = fVar48 * auVar5._4_4_;
    auVar45._8_4_ = fVar50 * auVar5._8_4_;
    auVar45._12_4_ = fVar51 * auVar5._12_4_;
    auVar37 = vunpckhps_avx(auVar4,auVar40);
    auVar36 = vblendps_avx(auVar45,auVar40,8);
    auVar4 = vblendps_avx(auVar38,auVar40,8);
    auVar38 = vblendps_avx(auVar41,auVar40,8);
    fVar48 = *pfVar7;
    auVar40 = vunpcklps_avx(auVar6,auVar5);
    auVar6 = vunpckhps_avx(auVar6,auVar5);
    auVar5 = vunpcklps_avx(auVar6,auVar37);
    auVar37 = vunpcklps_avx(auVar40,auVar39);
    auVar6 = vunpckhps_avx(auVar40,auVar39);
    fVar43 = pfVar7[1];
    fVar51 = auVar37._0_4_;
    fVar10 = auVar37._4_4_;
    fVar11 = auVar37._8_4_;
    fVar12 = auVar37._12_4_;
    fVar50 = pfVar7[4];
    fVar32 = auVar6._0_4_;
    fVar33 = auVar6._4_4_;
    fVar34 = auVar6._8_4_;
    fVar35 = auVar6._12_4_;
    fVar28 = auVar5._0_4_;
    fVar29 = auVar5._4_4_;
    fVar30 = auVar5._8_4_;
    fVar31 = auVar5._12_4_;
    auVar46 = ZEXT1664(CONCAT412(fVar31 * fVar42 + fVar35 * fVar43 + fVar48 * fVar12,
                                 CONCAT48(fVar30 * fVar42 + fVar34 * fVar43 + fVar48 * fVar11,
                                          CONCAT44(fVar29 * fVar42 +
                                                   fVar33 * fVar43 + fVar48 * fVar10,
                                                   fVar28 * fVar42 +
                                                   fVar32 * fVar43 + fVar48 * fVar51))));
    fVar42 = pfVar7[5];
    fVar48 = pfVar7[8];
    auVar6 = vhaddps_avx(auVar4,auVar38);
    auVar52 = ZEXT1664(CONCAT412(fVar31 * fVar47 + fVar35 * fVar42 + fVar50 * fVar12,
                                 CONCAT48(fVar30 * fVar47 + fVar34 * fVar42 + fVar50 * fVar11,
                                          CONCAT44(fVar29 * fVar47 +
                                                   fVar33 * fVar42 + fVar50 * fVar10,
                                                   fVar28 * fVar47 +
                                                   fVar32 * fVar42 + fVar50 * fVar51))));
    fVar42 = pfVar7[9];
    auVar36 = vhaddps_avx(auVar36,auVar38);
    auVar53 = ZEXT1664(CONCAT412(fVar31 * fVar49 + fVar35 * fVar42 + fVar48 * fVar12,
                                 CONCAT48(fVar30 * fVar49 + fVar34 * fVar42 + fVar48 * fVar11,
                                          CONCAT44(fVar29 * fVar49 +
                                                   fVar33 * fVar42 + fVar48 * fVar10,
                                                   fVar28 * fVar49 +
                                                   fVar32 * fVar42 + fVar48 * fVar51))));
    auVar6 = vhaddps_avx(auVar6,auVar36);
    auVar54 = ZEXT1664(auVar6);
  }
  else {
    if ((short)param_1[3] != -2) goto LAB_140103dc2;
    auVar53 = ZEXT1664(_DAT_14614f7f0);
    auVar52 = ZEXT864(_DAT_146159bc0);
    auVar46 = ZEXT464((uint)_DAT_145fc6ed8);
    auVar54 = ZEXT864(0);
  }
LAB_140103f19:
  lVar24 = param_1[1];
  auVar6 = *(undefined1 (*) [16])(pfVar7 + 4);
  auVar36 = vshufps_avx(auVar6,*(undefined1 (*) [16])(pfVar7 + 8),0x33);
  pbVar1 = (byte *)(lVar24 + 0x9c);
  *pbVar1 = *pbVar1 | 4;
  uVar15 = *(short *)((longlong)param_1 + 0x22) - *(ushort *)(param_1 + 4);
  if (uVar15 != 0) {
    uVar8 = *(undefined8 *)(lVar24 + 0x78);
    auVar6 = vshufps_avx(auVar6,auVar36,0x2f);
    lVar24 = (ulonglong)uVar15 * 0x50;
    lVar20 = (ulonglong)((uint)*(ushort *)(param_1 + 4) * 0x50) + *(longlong *)(param_1[2] + 0x20);
    auVar55 = ZEXT1664(CONCAT412(auVar6._12_4_ + _DAT_145fc6ed8,
                                 CONCAT48(auVar6._8_4_ + _DAT_145fc6ed8,
                                          CONCAT44(auVar6._4_4_ + _DAT_145fc6ed8,
                                                   auVar6._0_4_ + _DAT_145fc6ed8))));
    do {
      if (*(short *)(lVar20 + 0x44) != -1) {
        auStack_d8 = auVar46._0_16_;
        auStack_c8 = auVar52._0_16_;
        auStack_b8 = auVar53._0_16_;
        auStack_a8 = auVar54._0_16_;
        auStack_f8 = auVar55._0_16_;
        FUN_14268ba50(param_2,lVar20,*(short *)(lVar20 + 0x44),auStack_d8,auStack_f8,uVar8);
      }
      lVar20 = lVar20 + 0x50;
      lVar24 = lVar24 + -0x50;
    } while (lVar24 != 0);
  }
  if ((*(byte *)((longlong)param_1 + 0x54) & 0x10) != 0) {
    FUN_1450228c0(*param_1,0);
    *(byte *)((longlong)param_1 + 0x54) = *(byte *)((longlong)param_1 + 0x54) & 0xef;
  }
  lVar24 = *param_1;
  uVar21 = 0;
  uVar23 = 0xffffffff;
  lVar20 = **(longlong **)(unaff_GS_OFFSET + 0x58);
  uVar17 = uVar21;
  if (*(short *)(lVar20 + 0x12e8) != 0) goto code_r0x0001402b3d7b;
  psVar2 = (short *)(**(longlong **)(unaff_GS_OFFSET + 0x58) + 0x1370);
  sVar16 = *psVar2;
  if (sVar16 == 0) {
    puStack_90 = &UNK_1402b3c2c;
    FUN_1400716e0(0x14a95deb8);
    sVar16 = *psVar2;
  }
  *psVar2 = sVar16 + 1;
  lVar19 = *(longlong *)(lVar24 + 0x38);
  uVar17 = 0;
  if (lVar19 == 0) goto code_r0x0001402b3d7b;
  puVar3 = (ushort *)(**(longlong **)(unaff_GS_OFFSET + 0x58) + 0x12ea);
  uVar15 = *puVar3;
  uVar23 = (uint)uVar15;
  cVar14 = *(char *)((*(longlong **)(unaff_GS_OFFSET + 0x58))[__tls_index] + 8);
  if ((ulonglong)uVar15 == 0) {
    uVar23 = 0;
code_r0x0001402b3d10:
    *puVar3 = (short)uVar23 + 1;
    if (cVar14 == '\0') {
      puStack_90 = &UNK_1402b3d22;
      func_0x0001455db994();
    }
  }
  else {
    uStack_60 = (undefined *)((ulonglong)uStack_60 & 0xffffffffffffff);
    lVar9 = *(longlong *)(lVar19 + 0xa8);
    uVar25 = (uint7)((ulonglong)lVar9 >> 8);
    if (cVar14 == '\0') {
      uVar21 = 0;
      plVar18 = (longlong *)(**(longlong **)(unaff_GS_OFFSET + 0x58) + 0x12f0);
      cVar14 = '\0';
      do {
        if (cVar14 == '\0') {
          puStack_90 = &UNK_1402b3cdc;
          func_0x0001455db994();
          cVar14 = *(char *)(*(longlong *)
                              (*(longlong *)(unaff_GS_OFFSET + 0x58) + (ulonglong)__tls_index * 8) +
                            8);
        }
        if (*plVar18 == lVar9) goto code_r0x0001402b3d5b;
        uVar23 = (uint)*puVar3;
        uVar21 = uVar21 + 1;
        plVar18 = plVar18 + 2;
      } while (uVar21 < *puVar3);
      uVar21 = CONCAT71(uVar25,uStack_60._7_1_);
      goto code_r0x0001402b3d10;
    }
    uVar21 = 0;
    plVar18 = (longlong *)(**(longlong **)(unaff_GS_OFFSET + 0x58) + 0x12f0);
    do {
      if (*plVar18 == lVar9) goto code_r0x0001402b3d5b;
      uVar21 = uVar21 + 1;
      plVar18 = plVar18 + 2;
    } while (uVar15 != uVar21);
    uVar21 = (ulonglong)uVar25 << 8;
    *puVar3 = uVar15 + 1;
  }
  lVar19 = *(longlong *)(lVar19 + 0xa8);
  lVar9 = **(longlong **)(unaff_GS_OFFSET + 0x58);
  *(longlong *)(lVar9 + 0x12f0 + (ulonglong)(uVar23 << 4)) = lVar19;
  *(undefined2 *)(lVar9 + 0x12f8 + (ulonglong)(uVar23 << 4)) = 1;
  puStack_90 = &UNK_1402b3d59;
  FUN_1400716e0(lVar19 + 8);
  uVar17 = uVar21;
code_r0x0001402b3d7b:
  lVar19 = *(longlong *)(*(longlong *)(lVar24 + 8) + 0x20);
  if ((*(char *)(lVar19 + 0x10) == '\x06') && (*(short *)(lVar19 + 0x9a) != 0)) {
    puStack_90 = &UNK_1402b3da2;
    FUN_1450354d0(lVar19);
    puStack_90 = &UNK_1402b3dad;
    FUN_145035af0(lVar19,uVar17 & 0xffffffff);
    puStack_90 = &UNK_1402b3dba;
    FUN_144f5b4e0(lVar19,auStack_58);
    if (*(int *)(lVar24 + 0x10) != 0) {
      if (*(longlong *)(lVar24 + 0x38) != 0) {
        pbVar1 = (byte *)(*(longlong *)(lVar24 + 0x38) + 0xcf);
        *pbVar1 = *pbVar1 | 1;
      }
      *(byte *)(lVar24 + 0x18) = *(byte *)(lVar24 + 0x18) | 4;
      if (*(short *)(lVar24 + 0x13c) == -1) {
        puStack_90 = &UNK_1402b3ded;
        FUN_1420f2150(_DAT_14abbf348,lVar24);
      }
    }
  }
  if (*(short *)(lVar20 + 0x12e8) == 0) {
    if (-1 < (int)uVar23) {
      if (*(char *)(*(longlong *)
                     (*(longlong *)(unaff_GS_OFFSET + 0x58) + (ulonglong)__tls_index * 8) + 8) ==
          '\0') {
        puStack_90 = &UNK_1402b3e20;
        func_0x0001455db994();
      }
      lVar24 = **(longlong **)(unaff_GS_OFFSET + 0x58);
      psVar2 = (short *)(lVar24 + 0x12f8 + (ulonglong)uVar23 * 0x10);
      *psVar2 = *psVar2 + -1;
      if (*psVar2 == 0) {
        lVar24 = *(longlong *)(lVar24 + 0x12f0 + (ulonglong)uVar23 * 0x10);
        lVar20 = *(longlong *)(lVar24 + 0x20);
        if (*(char *)(**(longlong **)(unaff_GS_OFFSET + 0x58) + 0x1440) == '\x01') {
          lVar19 = *(longlong *)(**(longlong **)(unaff_GS_OFFSET + 0x58) + 0x1438);
        }
        else {
          lVar9 = **(longlong **)(unaff_GS_OFFSET + 0x58);
          *(undefined1 *)(lVar9 + 0x1440) = 1;
          puStack_90 = &UNK_1402b3f4a;
          lVar19 = FUN_1400063f0();
          *(longlong *)(lVar9 + 0x1438) = lVar19;
        }
        if (lVar19 != lVar20) {
          puStack_90 = &UNK_1402b3e85;
          FUN_1402c59f0(lVar24 + 8);
        }
        psVar2 = (short *)(**(longlong **)(unaff_GS_OFFSET + 0x58) + 0x12ea);
        *psVar2 = *psVar2 + -1;
      }
    }
    psVar2 = (short *)(**(longlong **)(unaff_GS_OFFSET + 0x58) + 0x1370);
    *psVar2 = *psVar2 + -1;
    lVar24 = _DAT_14a95ded0;
    if (*psVar2 == 0) {
      if (*(char *)(**(longlong **)(unaff_GS_OFFSET + 0x58) + 0x1440) == '\x01') {
        lVar20 = *(longlong *)(**(longlong **)(unaff_GS_OFFSET + 0x58) + 0x1438);
      }
      else {
        lVar19 = **(longlong **)(unaff_GS_OFFSET + 0x58);
        *(undefined1 *)(lVar19 + 0x1440) = 1;
        puStack_90 = &UNK_1402b3f26;
        lVar20 = FUN_1400063f0();
        *(longlong *)(lVar19 + 0x1438) = lVar20;
      }
      lVar19 = _DAT_14a95ded0;
      if (lVar20 != lVar24) {
        if (*(char *)(**(longlong **)(unaff_GS_OFFSET + 0x58) + 0x1440) == '\x01') {
          lVar24 = *(longlong *)(**(longlong **)(unaff_GS_OFFSET + 0x58) + 0x1438);
        }
        else {
          lVar20 = **(longlong **)(unaff_GS_OFFSET + 0x58);
          *(undefined1 *)(lVar20 + 0x1440) = 1;
          uStack_60 = &UNK_1402c5b66;
          lVar24 = FUN_1400063f0();
          *(longlong *)(lVar20 + 0x1438) = lVar24;
        }
        if (lVar24 != lVar19) {
          LOCK();
          uVar23 = uRam000000014a95deb8 - 1;
          UNLOCK();
          uVar22 = uRam000000014a95deb8 - 1;
          uRam000000014a95deb8 = uVar23;
          if ((char)uVar22 == '\0') {
            if ((uVar22 & 0xff0000) == 0) {
              if ((uVar22 & 0xff00) != 0) {
                do {
                  LOCK();
                  bVar26 = uVar23 != uRam000000014a95deb8;
                  uVar22 = uVar23 & 0xffff00ff;
                  if (bVar26) {
                    uVar23 = uRam000000014a95deb8;
                    uVar22 = uRam000000014a95deb8;
                  }
                  uRam000000014a95deb8 = uVar22;
                  UNLOCK();
                } while (bVar26);
                uVar23 = uVar23 >> 8 & 0xff;
                if (uVar23 != 0) {
                  lVar24 = lRam000000014a95dec0;
                  do {
                    while (-1 < lVar24) {
                      LOCK();
                      lVar20 = lVar24;
                      lVar19 = lVar24 + ((ulonglong)uVar23 << 0x20);
                      if (lVar24 != lRam000000014a95dec0) {
                        lVar20 = lRam000000014a95dec0;
                        lVar19 = lRam000000014a95dec0;
                      }
                      lRam000000014a95dec0 = lVar19;
                      UNLOCK();
                      bVar26 = lVar24 == lVar20;
                      lVar24 = lVar20;
                      if (bVar26) {
                        return;
                      }
                    }
                    uStack_60 = &UNK_1402c5b3f;
                    cVar14 = FUN_1400062d0(0x14a95dec0,uVar23,&stack0xffffffffffffffc8);
                  } while (cVar14 == '\0');
                }
              }
            }
            else {
              do {
                if ((uVar22 & 0xff0000) == 0) {
                  return;
                }
                LOCK();
                bVar26 = uVar22 != uRam000000014a95deb8;
                uVar23 = uVar22;
                uVar13 = uVar22 - 0x10000;
                if (bVar26) {
                  uVar23 = uRam000000014a95deb8;
                  uVar13 = uRam000000014a95deb8;
                }
                uRam000000014a95deb8 = uVar13;
                UNLOCK();
                lVar24 = lRam000000014a95dec8;
                if (!bVar26) {
                  do {
                    while (lVar24 < 0) {
                      uStack_60 = &UNK_1402c5aa3;
                      cVar14 = FUN_1400062d0(0x14a95dec8,1,&stack0xffffffffffffffc8);
                      uVar23 = uVar22;
                      if (cVar14 != '\0') goto code_r0x0001402c5ac2;
                    }
                    LOCK();
                    lVar20 = lVar24;
                    lVar19 = lVar24 + 0x100000000;
                    if (lVar24 != lRam000000014a95dec8) {
                      lVar20 = lRam000000014a95dec8;
                      lVar19 = lRam000000014a95dec8;
                    }
                    lRam000000014a95dec8 = lVar19;
                    UNLOCK();
                    bVar27 = lVar24 != lVar20;
                    uVar23 = uVar22;
                    lVar24 = lVar20;
                  } while (bVar27);
                }
code_r0x0001402c5ac2:
                uVar22 = uVar23;
              } while (bVar26);
            }
          }
        }
        return;
      }
    }
  }
  return;
code_r0x0001402b3d5b:
  uVar23 = (uint)uVar21 & 0xffff;
  uVar17 = CONCAT71(uVar25,uStack_60._7_1_);
  psVar2 = (short *)(**(longlong **)(unaff_GS_OFFSET + 0x58) + 0x12f8 + uVar21 * 0x10);
  *psVar2 = *psVar2 + 1;
  goto code_r0x0001402b3d7b;
}

