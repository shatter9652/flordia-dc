// Recovered from game_scarlett_master.exe (GTA VI, Xbox Series X, PE32+ x64)
// Address: 1400607c0  size: 2786 bytes
// Name:    FUN_1400607c0
// Subsystem: core
//
// Referenced strings (0 in this body, 0 including direct callees):
// Callees: FUN_1400614a0, FUN_144ea2c20, FUN_145647140, FUN_1400613c0
//
// Generated decompilation. Formatting follows MiscRef/GTAVSRC conventions;
// identifiers are recovered, not original. See ../../../README.md.

#include "gta6decomp/rage_types.h"


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

ulonglong FUN_1400607c0(longlong param_1,longlong param_2)

{
  float *pfVar1;
  uint *puVar2;
  float *pfVar3;
  undefined8 *puVar4;
  undefined8 *puVar5;
  undefined4 uVar6;
  undefined8 uVar7;
  undefined8 uVar8;
  undefined8 uVar9;
  undefined8 uVar10;
  undefined8 uVar11;
  undefined8 uVar12;
  char cVar13;
  uint uVar14;
  longlong lVar15;
  uint uVar16;
  int iVar17;
  byte bVar18;
  uint uVar19;
  uint uVar20;
  longlong lVar21;
  ulonglong uVar22;
  longlong lVar23;
  ulonglong uVar24;
  undefined4 uVar25;
  float fVar26;
  undefined8 uVar27;
  undefined1 auVar28 [16];
  undefined1 auVar29 [16];
  undefined1 auVar30 [16];
  undefined1 auVar31 [16];
  undefined1 auVar32 [16];
  undefined1 auVar33 [16];
  undefined1 auVar34 [16];
  undefined1 auVar35 [16];
  undefined1 extraout_var [56];
  undefined1 auVar36 [64];
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
  float fVar50;
  float fVar54;
  float fVar55;
  undefined1 auVar51 [16];
  float fVar56;
  undefined1 auVar52 [16];
  undefined1 auVar53 [16];
  float fVar57;
  float fVar59;
  float fVar60;
  undefined1 auVar58 [16];
  float fVar61;
  float fVar62;
  undefined1 auVar63 [16];
  undefined1 auVar64 [16];
  undefined1 auVar65 [16];
  undefined1 auVar66 [16];
  undefined1 auVar67 [16];
  undefined1 auVar68 [16];
  undefined1 in_ZMM6 [64];
  undefined1 auVar69 [64];
  undefined1 in_ZMM7 [64];
  undefined1 auVar70 [64];
  undefined4 unaff_XMM8_Da;
  float fVar71;
  undefined4 unaff_XMM8_Db;
  undefined4 unaff_XMM8_Dc;
  undefined4 unaff_XMM8_Dd;
  undefined1 auVar72 [16];
  undefined8 unaff_XMM9_Qa;
  undefined8 unaff_XMM9_Qb;
  undefined1 auVar73 [16];
  undefined8 unaff_XMM10_Qa;
  undefined8 unaff_XMM10_Qb;
  undefined1 auVar75 [16];
  undefined1 auVar76 [16];
  undefined1 auVar77 [16];
  undefined1 auVar78 [16];
  undefined1 auVar79 [16];
  undefined1 auVar81 [16];
  undefined1 auVar82 [16];
  undefined1 in_ZMM11 [64];
  undefined1 auVar83 [64];
  float fVar84;
  float fVar86;
  float fVar87;
  float fVar88;
  undefined1 in_ZMM12 [64];
  undefined1 auVar85 [64];
  undefined8 unaff_XMM13_Qa;
  undefined8 unaff_XMM13_Qb;
  undefined1 auVar89 [64];
  undefined1 in_ZMM14 [64];
  undefined1 auVar90 [64];
  undefined8 unaff_XMM15_Qa;
  undefined1 auVar91 [16];
  undefined1 auVar92 [16];
  undefined8 unaff_XMM15_Qb;
  undefined1 auVar93 [64];
  undefined4 auStackX_8 [2];
  uint auStackX_10 [4];
  longlong lStackX_20;
  undefined8 uStack_48;
  undefined1 extraout_var_00 [56];
  undefined1 auVar74 [64];
  undefined1 auVar80 [64];
  
  uStack_48 = 0x1400607d6;
  lVar15 = FUN_145647140();
  lVar15 = -lVar15;
  *(undefined8 *)(&stack0x000011c0 + lVar15) = unaff_XMM15_Qa;
  *(undefined8 *)(&stack0x000011c8 + lVar15) = unaff_XMM15_Qb;
  *(undefined1 (*) [16])(&stack0x000011b0 + lVar15) = in_ZMM14._0_16_;
  *(undefined8 *)(&stack0x000011a0 + lVar15) = unaff_XMM13_Qa;
  *(undefined8 *)(&stack0x000011a8 + lVar15) = unaff_XMM13_Qb;
  *(undefined1 (*) [16])(&stack0x00001190 + lVar15) = in_ZMM12._0_16_;
  *(undefined1 (*) [16])(&stack0x00001180 + lVar15) = in_ZMM11._0_16_;
  *(undefined8 *)(&stack0x00001170 + lVar15) = unaff_XMM10_Qa;
  *(undefined8 *)(&stack0x00001178 + lVar15) = unaff_XMM10_Qb;
  *(undefined8 *)(&stack0x00001160 + lVar15) = unaff_XMM9_Qa;
  *(undefined8 *)(&stack0x00001168 + lVar15) = unaff_XMM9_Qb;
  *(undefined4 *)(&stack0x00001150 + lVar15) = unaff_XMM8_Da;
  *(undefined4 *)(&stack0x00001154 + lVar15) = unaff_XMM8_Db;
  *(undefined4 *)(&stack0x00001158 + lVar15) = unaff_XMM8_Dc;
  *(undefined4 *)(&stack0x0000115c + lVar15) = unaff_XMM8_Dd;
  *(undefined1 (*) [16])(&stack0x00001140 + lVar15) = in_ZMM7._0_16_;
  *(undefined1 (*) [16])(&stack0x00001130 + lVar15) = in_ZMM6._0_16_;
  *(byte *)(param_1 + 4) = (byte)((uint)*(undefined4 *)(param_2 + 0xd0) >> 0x1a) & 1;
  uVar7 = *(undefined8 *)(param_2 + 0x55c0);
  uVar27 = *(undefined8 *)(param_2 + 0x55c8);
  uVar8 = *(undefined8 *)(param_2 + 0x55d0);
  uVar9 = *(undefined8 *)(param_2 + 0x55d8);
  uVar10 = *(undefined8 *)(param_2 + 0x55e8);
  uVar11 = *(undefined8 *)(param_2 + 22000);
  uVar12 = *(undefined8 *)(param_2 + 0x55f8);
  *(undefined8 *)(param_1 + 0x30) = *(undefined8 *)(param_2 + 0x55e0);
  *(undefined8 *)(param_1 + 0x38) = uVar10;
  *(undefined8 *)(param_1 + 0x40) = uVar11;
  *(undefined8 *)(param_1 + 0x48) = uVar12;
  *(undefined8 *)(param_1 + 0x10) = uVar7;
  *(undefined8 *)(param_1 + 0x18) = uVar27;
  *(undefined8 *)(param_1 + 0x20) = uVar8;
  *(undefined8 *)(param_1 + 0x28) = uVar9;
  uVar7 = *(undefined8 *)(param_2 + 0x5600);
  uVar27 = *(undefined8 *)(param_2 + 0x5608);
  uVar8 = *(undefined8 *)(param_2 + 0x5610);
  uVar9 = *(undefined8 *)(param_2 + 0x5618);
  uVar10 = *(undefined8 *)(param_2 + 0x5628);
  uVar11 = *(undefined8 *)(param_2 + 0x5630);
  uVar12 = *(undefined8 *)(param_2 + 0x5638);
  *(undefined8 *)(param_1 + 0x70) = *(undefined8 *)(param_2 + 0x5620);
  *(undefined8 *)(param_1 + 0x78) = uVar10;
  *(undefined8 *)(param_1 + 0x80) = uVar11;
  *(undefined8 *)(param_1 + 0x88) = uVar12;
  *(undefined8 *)(param_1 + 0x50) = uVar7;
  *(undefined8 *)(param_1 + 0x58) = uVar27;
  *(undefined8 *)(param_1 + 0x60) = uVar8;
  *(undefined8 *)(param_1 + 0x68) = uVar9;
  iVar17 = *(int *)(param_2 + 0xe4);
  uVar7 = *(undefined8 *)(param_1 + 0x15910);
  if (1 < (longlong)iVar17) {
    auVar75._8_8_ = 0;
    auVar75._0_8_ = _DAT_146159bc0;
    auVar80 = ZEXT1664(auVar75);
    auVar85 = ZEXT464(_DAT_1461715a0);
    auVar89 = ZEXT464(_DAT_14615a920);
    auVar90 = ZEXT464((uint)_DAT_145fc6f80);
    uVar22 = (ulonglong)(iVar17 - 1U);
    lVar23 = 0xcbc;
    auVar70 = ZEXT1264(ZEXT812(0));
    auVar93 = ZEXT1264(ZEXT812(0));
    auVar75 = vshufps_avx(auVar75,auVar75,0xc9);
    auVar83 = ZEXT1664(auVar75);
    fVar71 = _DAT_145fc6f00;
    fVar26 = _DAT_145fc6f08;
    fVar62 = _DAT_145fc6f08;
    fVar84 = _DAT_145fc6f08;
    fVar86 = _DAT_145fc6f08;
    do {
      auVar75 = vsubps_avx(*(undefined1 (*) [16])(param_2 + -0x3080 + lVar23 * 4),
                           *(undefined1 (*) [16])(param_2 + -0x3090 + lVar23 * 4));
      auVar75 = vblendps_avx(auVar75,auVar70._0_16_,4);
      if ((*(byte *)(param_2 + -0x1308 + lVar23 * 2) & 0x10) != 0) {
        fVar87 = auVar85._0_4_ * (float)*(byte *)(param_2 + -0x1304 + lVar23 * 2);
        auVar45 = vcmpss_avx(ZEXT416((uint)fVar87),auVar90._0_16_,2);
        auVar45 = vblendvps_avx(ZEXT416((uint)(auVar89._0_4_ + fVar87)),ZEXT416((uint)fVar87),
                                auVar45);
        *(undefined1 (*) [16])((longlong)&lStackX_20 + lVar15) = auVar45;
        auVar69 = ZEXT1664(auVar75);
        auVar70 = ZEXT1664(auVar70._0_16_);
        auVar80 = ZEXT1664(auVar80._0_16_);
        auVar83 = ZEXT1664(auVar83._0_16_);
        auVar85 = ZEXT1664(auVar85._0_16_);
        auVar89 = ZEXT1664(auVar89._0_16_);
        auVar90 = ZEXT1664(auVar90._0_16_);
        auVar93 = ZEXT1664(auVar93._0_16_);
        *(undefined8 *)((longlong)&uStack_48 + lVar15) = 0x1400611db;
        uVar27 = func_0x000145f40770();
        *(uint *)((longlong)auStackX_10 + lVar15) = (uint)uVar27 ^ _DAT_145fc6f10;
        *(uint *)((longlong)auStackX_10 + lVar15 + 4) =
             (uint)((ulonglong)uVar27 >> 0x20) ^ _DAT_145fc6f10;
        *(uint *)((longlong)auStackX_10 + lVar15 + 8) = extraout_var._0_4_ ^ _DAT_145fc6f10;
        *(uint *)((longlong)auStackX_10 + lVar15 + 0xc) = extraout_var._4_4_ ^ _DAT_145fc6f10;
        *(undefined8 *)((longlong)&uStack_48 + lVar15) = 0x1400611f9;
        auVar36._0_8_ = func_0x000145f407b0(*(undefined8 *)((longlong)&lStackX_20 + lVar15));
        auVar36._8_56_ = extraout_var_00;
        auVar75 = vunpcklps_avx(auVar36._0_16_,
                                *(undefined1 (*) [16])((longlong)auStackX_10 + lVar15));
        auVar75 = vinsertps_avx(auVar75,auVar36._0_16_,0x34);
        auVar45._0_4_ = auVar75._0_4_ * auVar69._0_4_;
        auVar45._4_4_ = auVar75._4_4_ * auVar69._4_4_;
        auVar45._8_4_ = auVar75._8_4_ * auVar69._8_4_;
        auVar45._12_4_ = auVar75._12_4_ * auVar69._12_4_;
        auVar45 = vblendps_avx(auVar45,auVar70._0_16_,8);
        auVar45 = vhaddps_avx(auVar45,auVar45);
        auVar45 = vhaddps_avx(auVar45,auVar45);
        if (auVar45._0_4_ <= auVar93._0_4_) {
          auVar75 = auVar69._0_16_;
        }
      }
      fVar87 = auVar75._0_4_;
      auVar28._0_4_ = fVar87 * fVar87;
      fVar88 = auVar75._4_4_;
      auVar28._4_4_ = fVar88 * fVar88;
      fVar56 = auVar75._8_4_;
      auVar28._8_4_ = fVar56 * fVar56;
      fVar50 = auVar75._12_4_;
      auVar28._12_4_ = fVar50 * fVar50;
      auVar75 = vhaddps_avx(auVar28,auVar28);
      if (auVar75._0_4_ <= fVar71) {
        *(undefined1 (*) [16])(param_2 + lVar23 * 8) = ZEXT416((uint)_DAT_145fc6ed8);
      }
      else {
        auVar38 = auVar70._0_16_;
        auVar75 = vblendps_avx(auVar28,auVar38,8);
        auVar75 = vhaddps_avx(auVar75,auVar75);
        auVar45 = vhaddps_avx(auVar75,auVar75);
        auVar75 = vrsqrtps_avx(auVar45);
        fVar54 = auVar75._0_4_;
        fVar55 = auVar75._4_4_;
        fVar57 = auVar75._8_4_;
        fVar59 = auVar75._12_4_;
        auVar75 = vcmpps_avx(auVar38,auVar45,1);
        auVar29._0_4_ =
             auVar75._0_4_ &
             (uint)(((fVar26 * fVar54 * fVar54 * auVar45._0_4_ - fVar26) * fVar54 + fVar54) * fVar87
                   );
        auVar29._4_4_ =
             auVar75._4_4_ &
             (uint)(((fVar62 * fVar55 * fVar55 * auVar45._4_4_ - fVar62) * fVar55 + fVar55) * fVar88
                   );
        auVar29._8_4_ =
             auVar75._8_4_ &
             (uint)(((fVar84 * fVar57 * fVar57 * auVar45._8_4_ - fVar84) * fVar57 + fVar57) * fVar56
                   );
        auVar29._12_4_ =
             auVar75._12_4_ &
             (uint)(((fVar86 * fVar59 * fVar59 * auVar45._12_4_ - fVar86) * fVar59 + fVar59) *
                   fVar50);
        auVar75 = vshufps_avx(auVar29,auVar29,0xc9);
        auVar45 = vshufps_avx(auVar29,auVar29,0xd2);
        pfVar1 = (float *)(param_2 + lVar23 * 8);
        *pfVar1 = -(auVar80._0_4_ * auVar45._0_4_) + auVar83._0_4_ * auVar75._0_4_;
        pfVar1[1] = -(auVar80._4_4_ * auVar45._4_4_) + auVar83._4_4_ * auVar75._4_4_;
        pfVar1[2] = -(auVar80._8_4_ * auVar45._8_4_) + auVar83._8_4_ * auVar75._8_4_;
        pfVar1[3] = -(auVar80._12_4_ * auVar45._12_4_) + auVar83._12_4_ * auVar75._12_4_;
        *(undefined4 *)(param_2 + 8 + lVar23 * 8) = 0;
        pfVar1 = (float *)(param_2 + lVar23 * 8);
        fVar54 = *pfVar1;
        fVar55 = pfVar1[1];
        fVar57 = pfVar1[2];
        fVar59 = pfVar1[3];
        auVar37._0_4_ = fVar54 * fVar54;
        auVar37._4_4_ = fVar55 * fVar55;
        auVar37._8_4_ = fVar57 * fVar57;
        auVar37._12_4_ = fVar59 * fVar59;
        auVar75 = vblendps_avx(auVar37,auVar38,8);
        auVar75 = vhaddps_avx(auVar75,auVar75);
        auVar45 = vhaddps_avx(auVar75,auVar75);
        auVar75 = vrsqrtps_avx(auVar45);
        fVar87 = auVar75._0_4_;
        fVar88 = auVar75._4_4_;
        fVar56 = auVar75._8_4_;
        fVar50 = auVar75._12_4_;
        auVar75 = vcmpps_avx(auVar38,auVar45,1);
        puVar2 = (uint *)(param_2 + lVar23 * 8);
        *puVar2 = auVar75._0_4_ &
                  (uint)(((fVar26 * fVar87 * fVar87 * auVar45._0_4_ - fVar26) * fVar87 + fVar87) *
                        fVar54);
        puVar2[1] = auVar75._4_4_ &
                    (uint)(((fVar62 * fVar88 * fVar88 * auVar45._4_4_ - fVar62) * fVar88 + fVar88) *
                          fVar55);
        puVar2[2] = auVar75._8_4_ &
                    (uint)(((fVar84 * fVar56 * fVar56 * auVar45._8_4_ - fVar84) * fVar56 + fVar56) *
                          fVar57);
        puVar2[3] = auVar75._12_4_ &
                    (uint)(((fVar86 * fVar50 * fVar50 * auVar45._12_4_ - fVar86) * fVar50 + fVar50)
                          * fVar59);
      }
      lVar23 = lVar23 + 4;
      uVar22 = uVar22 - 1;
    } while (uVar22 != 0);
  }
  lVar23 = (longlong)iVar17 * 0x20;
  puVar4 = (undefined8 *)(lVar23 + 0x65a0 + param_2);
  uVar27 = puVar4[1];
  uVar22 = CONCAT71((int7)((ulonglong)lVar23 >> 8),1);
  puVar5 = (undefined8 *)(param_2 + 0x65e0 + (longlong)(int)(iVar17 - 1U) * 0x20);
  *puVar5 = *puVar4;
  puVar5[1] = uVar27;
  fVar84 = _DAT_146159cc4;
  fVar62 = _DAT_146159ca4;
  fVar26 = _DAT_145fc6f08;
  fVar71 = _DAT_145fc6f00;
  iVar17 = *(int *)(param_2 + 0xe4);
  uVar24 = (ulonglong)iVar17;
  if ((0 < (longlong)uVar24) && (iVar17 != 1)) {
    uVar22 = 1;
    lVar23 = 0x1980;
    auVar38._0_12_ = ZEXT812(0);
    auVar38._12_4_ = 0;
    *(undefined8 *)((longlong)auStackX_10 + lVar15) = uVar7;
    do {
      if (uVar22 < iVar17 - 1) {
        if ((*(byte *)(param_2 + -0x1308 + lVar23) & 0x10) == 0) {
          pfVar3 = (float *)(param_2 + -0x20 + lVar23 * 4);
          pfVar1 = (float *)(param_2 + lVar23 * 4);
          auVar63._0_4_ = *pfVar3 + *pfVar1;
          auVar63._4_4_ = pfVar3[1] + pfVar1[1];
          auVar63._8_4_ = pfVar3[2] + pfVar1[2];
          auVar63._12_4_ = pfVar3[3] + pfVar1[3];
        }
        else {
          pfVar3 = (float *)(param_2 + -0x20 + lVar23 * 4);
          pfVar1 = (float *)(param_2 + lVar23 * 4);
          auVar63._0_4_ = fVar84 * *pfVar1 + fVar62 * *pfVar3;
          auVar63._4_4_ = fVar84 * pfVar1[1] + fVar62 * pfVar3[1];
          auVar63._8_4_ = fVar84 * pfVar1[2] + fVar62 * pfVar3[2];
          auVar63._12_4_ = fVar84 * pfVar1[3] + fVar62 * pfVar3[3];
        }
        fVar86 = auVar63._0_4_;
        auVar67._0_4_ = fVar86 * fVar86;
        fVar87 = auVar63._4_4_;
        auVar67._4_4_ = fVar87 * fVar87;
        fVar88 = auVar63._8_4_;
        auVar67._8_4_ = fVar88 * fVar88;
        fVar56 = auVar63._12_4_;
        auVar67._12_4_ = fVar56 * fVar56;
        *(undefined1 (*) [16])(param_2 + lVar23 * 4) = auVar63;
        auVar75 = vhaddps_avx(auVar67,auVar67);
        if (fVar71 < auVar75._0_4_) {
          auVar75 = vblendps_avx(auVar67,auVar38,8);
          auVar75 = vhaddps_avx(auVar75,auVar75);
          auVar45 = vhaddps_avx(auVar75,auVar75);
          auVar75 = vrsqrtps_avx(auVar45);
          fVar50 = auVar75._0_4_;
          fVar54 = auVar75._4_4_;
          fVar55 = auVar75._8_4_;
          fVar57 = auVar75._12_4_;
          auVar75 = vcmpps_avx(auVar38,auVar45,1);
          auVar64._0_4_ =
               auVar75._0_4_ &
               (uint)(((fVar26 * fVar50 * fVar50 * auVar45._0_4_ - fVar26) * fVar50 + fVar50) *
                     fVar86);
          auVar64._4_4_ =
               auVar75._4_4_ &
               (uint)(((fVar26 * fVar54 * fVar54 * auVar45._4_4_ - fVar26) * fVar54 + fVar54) *
                     fVar87);
          auVar64._8_4_ =
               auVar75._8_4_ &
               (uint)(((fVar26 * fVar55 * fVar55 * auVar45._8_4_ - fVar26) * fVar55 + fVar55) *
                     fVar88);
          auVar64._12_4_ =
               auVar75._12_4_ &
               (uint)(((fVar26 * fVar57 * fVar57 * auVar45._12_4_ - fVar26) * fVar57 + fVar57) *
                     fVar56);
          *(undefined1 (*) [16])(param_2 + lVar23 * 4) = auVar64;
        }
      }
      uVar22 = uVar22 + 1;
      lVar23 = lVar23 + 8;
    } while (uVar24 != uVar22);
    auVar70 = ZEXT1664(CONCAT412(_DAT_145fc6edc,
                                 CONCAT48(_DAT_145fc6edc,CONCAT44(_DAT_145fc6edc,_DAT_145fc6edc))));
    auVar83 = ZEXT464((uint)_DAT_145fc6f48);
    auVar85 = ZEXT1664(CONCAT412(_DAT_146159b4c,
                                 CONCAT48(_DAT_146159b4c,CONCAT44(_DAT_146159b4c,_DAT_146159b4c))));
    iVar17 = 0;
    auVar80 = ZEXT1264(ZEXT812(0));
    *(longlong *)((longlong)&lStackX_20 + lVar15) = param_1;
    fVar71 = _DAT_145fc6f80;
    do {
      if ((int)uVar24 < 2) break;
      lVar23 = 0xcc0;
      lVar21 = 0;
      bVar18 = 0;
      fVar26 = fVar71;
      do {
        fVar71 = fVar26;
        if (((*(uint *)(param_2 + 0x678 + lVar21 * 8) | *(uint *)(param_2 + 0x670 + lVar21 * 8)) &
            0x67) == 0) {
          auVar75 = *(undefined1 (*) [16])(param_2 + -0x20 + lVar23 * 8);
          auVar45 = *(undefined1 (*) [16])(param_2 + lVar23 * 8);
          auVar28 = *(undefined1 (*) [16])(param_2 + -0x30a0 + lVar23 * 4);
          auVar29 = *(undefined1 (*) [16])(param_2 + -0x3090 + lVar23 * 4);
          auVar81._0_4_ = auVar75._0_4_ * auVar70._0_4_;
          auVar81._4_4_ = auVar75._4_4_ * auVar70._4_4_;
          auVar81._8_4_ = auVar75._8_4_ * auVar70._8_4_;
          auVar81._12_4_ = auVar75._12_4_ * auVar70._12_4_;
          auVar46._0_4_ = auVar45._0_4_ * auVar70._0_4_;
          auVar46._4_4_ = auVar45._4_4_ * auVar70._4_4_;
          auVar46._8_4_ = auVar45._8_4_ * auVar70._8_4_;
          auVar46._12_4_ = auVar45._12_4_ * auVar70._12_4_;
          auVar37 = vsubps_avx(auVar28,auVar81);
          auVar38 = vsubps_avx(auVar29,auVar46);
          auVar39._0_4_ = auVar29._0_4_ + auVar46._0_4_;
          auVar39._4_4_ = auVar29._4_4_ + auVar46._4_4_;
          auVar39._8_4_ = auVar29._8_4_ + auVar46._8_4_;
          auVar39._12_4_ = auVar29._12_4_ + auVar46._12_4_;
          auVar30._0_4_ = auVar81._0_4_ + auVar28._0_4_;
          auVar30._4_4_ = auVar81._4_4_ + auVar28._4_4_;
          auVar30._8_4_ = auVar81._8_4_ + auVar28._8_4_;
          auVar30._12_4_ = auVar81._12_4_ + auVar28._12_4_;
          vmovshdup_avx(auVar37);
          uVar6 = vextractps_avx(auVar39,1);
          *(undefined4 *)((longlong)auStackX_8 + lVar15) = uVar6;
          *(float *)(&stack0x00000000 + lVar15) = auVar39._0_4_;
          uVar6 = vextractps_avx(auVar38,1);
          *(undefined4 *)(&stack0xfffffffffffffff8 + lVar15) = uVar6;
          *(int *)(&stack0xfffffffffffffff0 + lVar15) = auVar38._0_4_;
          uVar6 = vextractps_avx(auVar30,1);
          *(undefined4 *)(&stack0xffffffffffffffe8 + lVar15) = uVar6;
          *(float *)(&stack0xffffffffffffffe0 + lVar15) = auVar30._0_4_;
          auVar89 = ZEXT1664(auVar37);
          auVar70 = ZEXT1664(auVar70._0_16_);
          auVar80 = ZEXT1664(auVar80._0_16_);
          auVar83 = ZEXT1664(auVar83._0_16_);
          auVar90 = ZEXT1664(auVar81);
          auVar93 = ZEXT1664(auVar75);
          auVar85 = ZEXT1664(auVar85._0_16_);
          auVar36 = ZEXT1664(auVar45);
          auVar69 = ZEXT1664(auVar38);
          *(undefined8 *)((longlong)&uStack_48 + lVar15) = 0x140060b84;
          cVar13 = FUN_144ea2c20(&stack0x00000040 + lVar15,&stack0x0000003c + lVar15);
          auVar38 = auVar36._0_16_;
          auVar29 = auVar93._0_16_;
          auVar45 = auVar80._0_16_;
          auVar28 = auVar90._0_16_;
          auVar63 = auVar69._0_16_;
          auVar75 = auVar89._0_16_;
          auVar37 = auVar85._0_16_;
          fVar71 = fVar26;
          if (cVar13 != '\0') {
            auVar32._0_4_ = auVar36._0_4_ * auVar93._0_4_;
            auVar32._4_4_ = auVar36._4_4_ * auVar93._4_4_;
            auVar32._8_4_ = auVar36._8_4_ * auVar93._8_4_;
            auVar32._12_4_ = auVar36._12_4_ * auVar93._12_4_;
            uVar6 = *(undefined4 *)(&stack0x00000040 + lVar15);
            auVar73._4_4_ = uVar6;
            auVar73._0_4_ = uVar6;
            auVar73._8_4_ = uVar6;
            auVar73._12_4_ = uVar6;
            auVar74 = ZEXT1664(auVar73);
            auVar67 = vblendps_avx(auVar32,auVar45,8);
            auVar67 = vhaddps_avx(auVar67,auVar67);
            auVar67 = vhaddps_avx(auVar67,auVar67);
            if (auVar83._0_4_ < auVar67._0_4_) {
              if (_DAT_145fc6ed8 <= auVar67._0_4_) {
                fVar26 = 0.0;
              }
              else {
                *(undefined8 *)((longlong)&uStack_48 + lVar15) = 0x140060eb4;
                fVar26 = (float)func_0x000145f40740(auVar67._0_8_);
                auVar38 = auVar36._0_16_;
                auVar29 = auVar93._0_16_;
                auVar45 = auVar80._0_16_;
                auVar28 = auVar90._0_16_;
                auVar73 = auVar74._0_16_;
                auVar63 = auVar69._0_16_;
                auVar75 = auVar89._0_16_;
                auVar37 = auVar85._0_16_;
              }
            }
            fVar71 = _DAT_145fc6f80;
            auVar75 = vsubps_avx(auVar63,auVar75);
            auVar58._4_4_ = _DAT_146159cb4;
            auVar58._0_4_ = _DAT_146159cb4;
            auVar58._8_4_ = _DAT_146159cb4;
            auVar58._12_4_ = _DAT_146159cb4;
            auVar51._4_4_ = _DAT_14616852c;
            auVar51._0_4_ = _DAT_14616852c;
            auVar51._8_4_ = _DAT_14616852c;
            auVar51._12_4_ = _DAT_14616852c;
            auVar47._0_12_ = ZEXT812(0);
            auVar47._12_4_ = 0;
            fVar84 = auVar29._0_4_;
            auVar40._0_4_ = fVar84 * (auVar73._0_4_ * auVar75._0_4_ - auVar28._0_4_);
            fVar86 = auVar29._4_4_;
            auVar40._4_4_ = fVar86 * (auVar73._4_4_ * auVar75._4_4_ - auVar28._4_4_);
            fVar87 = auVar29._8_4_;
            auVar40._8_4_ = fVar87 * (auVar73._8_4_ * auVar75._8_4_ - auVar28._8_4_);
            fVar88 = auVar29._12_4_;
            auVar40._12_4_ = fVar88 * (auVar73._12_4_ * auVar75._12_4_ - auVar28._12_4_);
            auVar75 = vblendps_avx(auVar40,auVar45,8);
            auVar75 = vhaddps_avx(auVar75,auVar75);
            auVar45 = vhaddps_avx(auVar75,auVar75);
            auVar75 = vcmpss_avx(auVar47,auVar45,5);
            auVar75 = vblendvps_avx(auVar51,auVar58,auVar75);
            fVar62 = _DAT_14616852c;
            if (0.0 < auVar45._0_4_) {
              fVar62 = _DAT_146159cb4;
            }
            fVar56 = fVar26 * auVar75._0_4_;
            fVar26 = fVar26 * fVar62;
            bVar18 = 1;
            fVar62 = fVar26 * _DAT_146159c48;
            fVar50 = _DAT_146159c48 * fVar56;
            auVar85 = ZEXT1664(auVar37);
            auVar68._0_4_ = (uint)(fVar50 + (float)(_DAT_145fc6edc | (uint)fVar50 & _DAT_145fc6f10))
            ;
            auVar68._4_4_ = (uint)(fVar50 + (float)(_DAT_145fc6edc | (uint)fVar50 & _DAT_145fc6f10))
            ;
            auVar68._8_4_ = (uint)(fVar50 + (float)(_DAT_145fc6edc | (uint)fVar50 & _DAT_145fc6f10))
            ;
            auVar68._12_4_ =
                 (uint)(fVar50 + (float)(_DAT_145fc6edc | (uint)fVar50 & _DAT_145fc6f10));
            auVar75 = vcvtdq2ps_avx(auVar68);
            fVar50 = _DAT_146159b50 * auVar75._0_4_ + auVar75._0_4_ * auVar37._0_4_ + fVar56;
            fVar54 = _DAT_146159b50 * auVar75._4_4_ + auVar75._4_4_ * auVar37._4_4_ + fVar56;
            fVar55 = _DAT_146159b50 * auVar75._8_4_ + auVar75._8_4_ * auVar37._8_4_ + fVar56;
            fVar56 = _DAT_146159b50 * auVar75._12_4_ + auVar75._12_4_ * auVar37._12_4_ + fVar56;
            fVar57 = fVar50 * fVar50;
            fVar59 = fVar54 * fVar54;
            fVar60 = fVar55 * fVar55;
            fVar61 = fVar56 * fVar56;
            auVar76._0_4_ =
                 fVar57 * fVar50 *
                 (fVar57 * (fVar57 * _DAT_146159b60 + _DAT_146159b5c) + _DAT_146159b68) + fVar50;
            auVar76._4_4_ =
                 fVar59 * fVar54 *
                 (fVar59 * (fVar59 * _DAT_146159b60 + _DAT_146159b5c) + _DAT_146159b68) + fVar54;
            auVar76._8_4_ =
                 fVar60 * fVar55 *
                 (fVar60 * (fVar60 * _DAT_146159b60 + _DAT_146159b5c) + _DAT_146159b68) + fVar55;
            auVar76._12_4_ =
                 fVar61 * fVar56 *
                 (fVar61 * (fVar61 * _DAT_146159b60 + _DAT_146159b5c) + _DAT_146159b68) + fVar56;
            auVar52._0_4_ = auVar68._0_4_ & _DAT_145f43778;
            auVar52._4_4_ = auVar68._4_4_ & _DAT_145f43778;
            auVar52._8_4_ = auVar68._8_4_ & _DAT_145f43778;
            auVar52._12_4_ = auVar68._12_4_ & _DAT_145f43778;
            auVar91._0_4_ =
                 fVar57 * (fVar57 * (fVar57 * _DAT_146159b58 + _DAT_146159b54) + _DAT_146159b64) +
                 _DAT_145fc6ed8;
            auVar91._4_4_ =
                 fVar59 * (fVar59 * (fVar59 * _DAT_146159b58 + _DAT_146159b54) + _DAT_146159b64) +
                 _DAT_145fc6ed8;
            auVar91._8_4_ =
                 fVar60 * (fVar60 * (fVar60 * _DAT_146159b58 + _DAT_146159b54) + _DAT_146159b64) +
                 _DAT_145fc6ed8;
            auVar91._12_4_ =
                 fVar61 * (fVar61 * (fVar61 * _DAT_146159b58 + _DAT_146159b54) + _DAT_146159b64) +
                 _DAT_145fc6ed8;
            auVar72._12_4_ = 0;
            auVar72._0_12_ = ZEXT412(0);
            auVar72 = auVar72 << 0x20;
            auVar80 = ZEXT1264(ZEXT412(0)) << 0x20;
            auVar45 = vpcmpeqd_avx(auVar72,auVar52);
            auVar75 = vpsubd_avx(auVar72,auVar52);
            auVar75 = vblendvps_avx(auVar91,auVar76,auVar75);
            auVar53._4_4_ = _DAT_145f43774;
            auVar53._0_4_ = _DAT_145f43774;
            auVar53._8_4_ = _DAT_145f43774;
            auVar53._12_4_ = _DAT_145f43774;
            auVar45 = vblendvps_avx(auVar91,auVar76,auVar45);
            auVar92._0_4_ = auVar45._0_4_ ^ _DAT_145fc6f10;
            auVar92._4_4_ = auVar45._4_4_ ^ _DAT_145fc6f10;
            auVar92._8_4_ = auVar45._8_4_ ^ _DAT_145fc6f10;
            auVar92._12_4_ = auVar45._12_4_ ^ _DAT_145fc6f10;
            auVar77._0_4_ = auVar68._0_4_ & _DAT_145f43774;
            auVar77._4_4_ = auVar68._4_4_ & _DAT_145f43774;
            auVar77._8_4_ = auVar68._8_4_ & _DAT_145f43774;
            auVar77._12_4_ = auVar68._12_4_ & _DAT_145f43774;
            auVar28 = vpcmpeqd_avx(auVar77,auVar72);
            auVar45 = vblendvps_avx(auVar92,auVar45,auVar28);
            auVar28 = vpcmpeqd_avx(auVar28,auVar28);
            auVar28 = vpsubd_avx(auVar68,auVar28);
            auVar78._0_4_ = auVar75._0_4_ ^ _DAT_145fc6f10;
            auVar78._4_4_ = auVar75._4_4_ ^ _DAT_145fc6f10;
            auVar78._8_4_ = auVar75._8_4_ ^ _DAT_145fc6f10;
            auVar78._12_4_ = auVar75._12_4_ ^ _DAT_145fc6f10;
            auVar28 = vpand_avx(auVar28,auVar53);
            auVar28 = vpcmpeqd_avx(auVar72,auVar28);
            auVar75 = vblendvps_avx(auVar78,auVar75,auVar28);
            auVar33._0_4_ = (uint)((float)((uint)fVar62 & _DAT_145fc6f10 | _DAT_145fc6edc) + fVar62)
            ;
            auVar33._4_4_ = (uint)((float)((uint)fVar62 & _DAT_145fc6f10 | _DAT_145fc6edc) + fVar62)
            ;
            auVar33._8_4_ = (uint)((float)((uint)fVar62 & _DAT_145fc6f10 | _DAT_145fc6edc) + fVar62)
            ;
            auVar33._12_4_ =
                 (uint)((float)((uint)fVar62 & _DAT_145fc6f10 | _DAT_145fc6edc) + fVar62);
            auVar28 = vcvtdq2ps_avx(auVar33);
            auVar48._0_4_ = auVar33._0_4_ & _DAT_145f43778;
            auVar48._4_4_ = auVar33._4_4_ & _DAT_145f43778;
            auVar48._8_4_ = auVar33._8_4_ & _DAT_145f43778;
            auVar48._12_4_ = auVar33._12_4_ & _DAT_145f43778;
            fVar62 = _DAT_146159b50 * auVar28._0_4_ + auVar28._0_4_ * auVar37._0_4_ + fVar26;
            fVar56 = _DAT_146159b50 * auVar28._4_4_ + auVar28._4_4_ * auVar37._4_4_ + fVar26;
            fVar50 = _DAT_146159b50 * auVar28._8_4_ + auVar28._8_4_ * auVar37._8_4_ + fVar26;
            fVar26 = _DAT_146159b50 * auVar28._12_4_ + auVar28._12_4_ * auVar37._12_4_ + fVar26;
            fVar54 = fVar62 * fVar62;
            fVar55 = fVar56 * fVar56;
            fVar57 = fVar50 * fVar50;
            fVar59 = fVar26 * fVar26;
            auVar82._0_4_ =
                 fVar54 * fVar62 *
                 (fVar54 * (fVar54 * _DAT_146159b60 + _DAT_146159b5c) + _DAT_146159b68) + fVar62;
            auVar82._4_4_ =
                 fVar55 * fVar56 *
                 (fVar55 * (fVar55 * _DAT_146159b60 + _DAT_146159b5c) + _DAT_146159b68) + fVar56;
            auVar82._8_4_ =
                 fVar57 * fVar50 *
                 (fVar57 * (fVar57 * _DAT_146159b60 + _DAT_146159b5c) + _DAT_146159b68) + fVar50;
            auVar82._12_4_ =
                 fVar59 * fVar26 *
                 (fVar59 * (fVar59 * _DAT_146159b60 + _DAT_146159b5c) + _DAT_146159b68) + fVar26;
            auVar65._0_4_ =
                 fVar54 * (fVar54 * (fVar54 * _DAT_146159b58 + _DAT_146159b54) + _DAT_146159b64) +
                 _DAT_145fc6ed8;
            auVar65._4_4_ =
                 fVar55 * (fVar55 * (fVar55 * _DAT_146159b58 + _DAT_146159b54) + _DAT_146159b64) +
                 _DAT_145fc6ed8;
            auVar65._8_4_ =
                 fVar57 * (fVar57 * (fVar57 * _DAT_146159b58 + _DAT_146159b54) + _DAT_146159b64) +
                 _DAT_145fc6ed8;
            auVar65._12_4_ =
                 fVar59 * (fVar59 * (fVar59 * _DAT_146159b58 + _DAT_146159b54) + _DAT_146159b64) +
                 _DAT_145fc6ed8;
            auVar28 = vpcmpeqd_avx(auVar72,auVar48);
            auVar37 = vpsubd_avx(auVar72,auVar48);
            auVar28 = vblendvps_avx(auVar65,auVar82,auVar28);
            auVar37 = vblendvps_avx(auVar65,auVar82,auVar37);
            auVar66._0_4_ = auVar33._0_4_ & _DAT_145f43774;
            auVar66._4_4_ = auVar33._4_4_ & _DAT_145f43774;
            auVar66._8_4_ = auVar33._8_4_ & _DAT_145f43774;
            auVar66._12_4_ = auVar33._12_4_ & _DAT_145f43774;
            auVar67 = vpsubd_avx(auVar33,_DAT_145f41010);
            auVar79._0_4_ = auVar28._0_4_ ^ _DAT_145fc6f10;
            auVar79._4_4_ = auVar28._4_4_ ^ _DAT_145fc6f10;
            auVar79._8_4_ = auVar28._8_4_ ^ _DAT_145fc6f10;
            auVar79._12_4_ = auVar28._12_4_ ^ _DAT_145fc6f10;
            auVar41._0_4_ = auVar37._0_4_ ^ _DAT_145fc6f10;
            auVar41._4_4_ = auVar37._4_4_ ^ _DAT_145fc6f10;
            auVar41._8_4_ = auVar37._8_4_ ^ _DAT_145fc6f10;
            auVar41._12_4_ = auVar37._12_4_ ^ _DAT_145fc6f10;
            auVar63 = vpcmpeqd_avx(auVar72,auVar66);
            auVar28 = vblendvps_avx(auVar79,auVar28,auVar63);
            auVar83 = ZEXT464((uint)_DAT_145fc6f48);
            auVar63 = vpand_avx(auVar67,auVar53);
            auVar63 = vpcmpeqd_avx(auVar72,auVar63);
            auVar37 = vblendvps_avx(auVar41,auVar37,auVar63);
            auVar42._0_4_ = fVar84 * auVar75._0_4_;
            auVar42._4_4_ = fVar86 * auVar75._4_4_;
            auVar42._8_4_ = fVar87 * auVar75._8_4_;
            auVar42._12_4_ = fVar88 * auVar75._12_4_;
            auVar49._0_4_ = fVar84 * auVar45._0_4_;
            auVar49._4_4_ = fVar86 * auVar45._4_4_;
            auVar49._8_4_ = fVar87 * auVar45._8_4_;
            auVar49._12_4_ = fVar88 * auVar45._12_4_;
            auVar34._0_4_ = auVar38._0_4_ * auVar37._0_4_;
            auVar34._4_4_ = auVar38._4_4_ * auVar37._4_4_;
            auVar34._8_4_ = auVar38._8_4_ * auVar37._8_4_;
            auVar34._12_4_ = auVar38._12_4_ * auVar37._12_4_;
            auVar75 = vshufps_avx(auVar42,auVar42,0xf1);
            auVar45 = vsubps_avx(auVar75,auVar49);
            auVar43._0_4_ = auVar49._0_4_ + auVar75._0_4_;
            auVar43._4_4_ = auVar49._4_4_ + auVar75._4_4_;
            auVar43._8_4_ = auVar49._8_4_ + auVar75._8_4_;
            auVar43._12_4_ = auVar49._12_4_ + auVar75._12_4_;
            auVar75 = vshufps_avx(auVar34,auVar34,0xf1);
            auVar37 = vunpcklps_avx(auVar45,auVar43);
            auVar45 = vshufps_avx(auVar29,auVar43,0xd6);
            auVar45 = vshufps_avx(auVar37,auVar45,0x86);
            *(undefined1 (*) [16])(param_2 + -0x20 + lVar23 * 8) = auVar45;
            auVar44._0_4_ = auVar38._0_4_ * auVar28._0_4_;
            auVar44._4_4_ = auVar38._4_4_ * auVar28._4_4_;
            auVar44._8_4_ = auVar38._8_4_ * auVar28._8_4_;
            auVar44._12_4_ = auVar38._12_4_ * auVar28._12_4_;
            auVar45 = vsubps_avx(auVar75,auVar44);
            auVar35._0_4_ = auVar44._0_4_ + auVar75._0_4_;
            auVar35._4_4_ = auVar44._4_4_ + auVar75._4_4_;
            auVar35._8_4_ = auVar44._8_4_ + auVar75._8_4_;
            auVar35._12_4_ = auVar44._12_4_ + auVar75._12_4_;
            auVar45 = vunpcklps_avx(auVar45,auVar35);
            auVar75 = vshufps_avx(auVar38,auVar35,0xd6);
            auVar75 = vshufps_avx(auVar45,auVar75,0x86);
            *(undefined1 (*) [16])(param_2 + lVar23 * 8) = auVar75;
            uVar24 = (ulonglong)*(uint *)(param_2 + 0xe4);
          }
        }
        lVar21 = lVar21 + 1;
        lVar23 = lVar23 + 4;
        fVar26 = fVar71;
      } while (lVar21 < (int)uVar24 + -1);
      iVar17 = iVar17 + 1;
    } while ((bool)(bVar18 & iVar17 != 4));
    uVar6 = *(undefined4 *)(param_2 + 0x28);
    *(undefined8 *)((longlong)&uStack_48 + lVar15) = 0x140060bc9;
    func_0x0001400612b0(&stack0x00000040 + lVar15);
    *(undefined8 *)((longlong)&uStack_48 + lVar15) = 0x140060bd4;
    FUN_1400613c0(&stack0x00000040 + lVar15);
    *(undefined8 *)(&stack0x000000b0 + lVar15) = 0;
    auVar31._0_12_ = ZEXT812(0);
    auVar31._12_4_ = 0;
    auVar75 = vcmpss_avx(auVar31,ZEXT416(*(uint *)(param_2 + 0x6e70)),0);
    iVar17 = *(int *)(*(longlong *)((longlong)auStackX_10 + lVar15) + 0x1df0c0);
    uVar14 = iVar17 + 1;
    uVar16 = (auVar75._0_4_ & 1) * 2 + 3;
    if (uVar14 < uVar16) {
      uVar16 = uVar14;
    }
    *(uint *)(&stack0x000000b8 + lVar15) = uVar16;
    uVar14 = *(uint *)(param_2 + 0xdc);
    if ((uVar14 & 1) == 0) {
      uVar22 = 0;
    }
    else {
      uVar22 = 0x100000;
      *(undefined8 *)(&stack0x000000b0 + lVar15) = 0x100000;
    }
    uVar16 = *(uint *)(param_2 + 0xd8);
    if ((uVar16 >> 0xe & 1) != 0) {
      uVar22 = uVar22 | 0x8000;
      *(ulonglong *)(&stack0x000000b0 + lVar15) = uVar22;
    }
    if (((iVar17 != 5) || (0.0 < *(float *)(param_2 + 0x6e8c))) ||
       (0.0 < *(float *)(param_2 + 0x6e90))) {
      uVar22 = uVar22 | 0x80;
      *(ulonglong *)(&stack0x000000b0 + lVar15) = uVar22;
    }
    uVar22 = (uVar16 & 0x1000) << 7 | uVar22;
    if ((uVar14 & 0x400000) != 0) {
      uVar22 = uVar22 | 0x200000;
    }
    uVar22 = (uVar16 & 0x100000) >> 3 | uVar22;
    if ((uVar16 & 0x100000) != 0 || ((uVar16 & 0x1000) != 0 || (uVar14 & 0x400000) != 0)) {
      *(ulonglong *)(&stack0x000000b0 + lVar15) = uVar22;
    }
    uVar19 = *(uint *)(param_2 + 0xd0);
    if ((uVar19 >> 0x10 & 1) == 0) {
      uVar22 = uVar22 | 0x20;
      *(ulonglong *)(&stack0x000000b0 + lVar15) = uVar22;
    }
    uVar20 = *(uint *)(param_2 + 0xd4);
    uVar22 = uVar22 + (ulonglong)(uVar20 & 0x40000000) * 4;
    if ((uVar14 & 0x800) != 0) {
      uVar22 = uVar22 | 0x800000000;
    }
    uVar24 = uVar22 | 0x200000000;
    if (-1 < (int)uVar20) {
      uVar24 = uVar22;
    }
    if ((uVar16 & 1) != 0) {
      uVar24 = uVar24 | 0x400000000;
    }
    if ((((uVar14 & 0x800) != 0 || (uVar20 & 0x40000000) != 0) || (uVar16 & 1) != 0) ||
        (int)uVar20 < 0) {
      *(ulonglong *)(&stack0x000000b0 + lVar15) = uVar24;
    }
    uVar7 = *(undefined8 *)((longlong)&lStackX_20 + lVar15);
    (&stack0x000000c4)[lVar15] = 1;
    if ((_DAT_1492496b8 != _DAT_145fc6f48) || (NAN(_DAT_1492496b8) || NAN(_DAT_145fc6f48))) {
      *(ulonglong *)(&stack0x000000b0 + lVar15) = uVar24 | 0x8000000;
      *(float *)(*(longlong *)((longlong)auStackX_10 + lVar15) + 0x1df124) = _DAT_1492496b8;
      uVar14 = *(uint *)(param_2 + 0xdc);
      uVar16 = *(uint *)(param_2 + 0xd8);
      uVar19 = *(uint *)(param_2 + 0xd0);
      uVar20 = *(uint *)(param_2 + 0xd4);
    }
    uVar25 = _DAT_14615a3d8;
    if ((uVar14 >> 0x14 & 1) == 0) {
      uVar25 = *(undefined4 *)(&UNK_146171a58 + (ulonglong)((uVar16 >> 0xd & 1) == 0) * 4);
    }
    *(undefined4 *)(&stack0x000000bc + lVar15) = uVar25;
    (&stack0x000000c6)[lVar15] = (uVar16 >> 10 & 1) == 0;
    (&stack0x000000c7)[lVar15] = (byte)(uVar19 >> 0x10) & 1;
    (&stack0x000000c8)[lVar15] = (byte)(uVar19 >> 0x1e) & 1;
    (&stack0x000000c9)[lVar15] = (byte)(uVar19 >> 0x17) & 1;
    (&stack0x000000ca)[lVar15] = (uVar20 & 0x6000) == 0x2000;
    *(undefined8 *)((longlong)&uStack_48 + lVar15) = 0x140060de5;
    uVar14 = FUN_1400614a0(uVar7,&stack0x00000040 + lVar15,uVar6,param_2);
    uVar22 = (ulonglong)uVar14;
    if ((char)uVar14 != '\0') {
      *(undefined8 *)((longlong)&uStack_48 + lVar15) = 0x140060dfb;
      func_0x000140061300(&stack0x00000040 + lVar15,param_2);
    }
  }
  return uVar22 & 0xffffffff;
}

