// Recovered from game_scarlett_master.exe (GTA VI, Xbox Series X, PE32+ x64)
// Address: 1401be7e0  size: 2730 bytes
// Name:    FUN_1401be7e0
// Subsystem: core
//
// Referenced strings (0 in this body, 0 including direct callees):
// Callees: FUN_145647140, FUN_145023070, FUN_1455cd5a0, FUN_1401c01f0
//
// Generated decompilation. Formatting follows MiscRef/GTAVSRC conventions;
// identifiers are recovered, not original. See ../../../README.md.

#include "gta6decomp/rage_types.h"


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1401be7e0(longlong param_1,ushort *param_2,uint param_3,longlong *param_4)

{
  longlong *plVar1;
  float fVar2;
  float fVar3;
  float fVar4;
  longlong lVar5;
  undefined8 *puVar6;
  code *pcVar7;
  float *pfVar8;
  undefined1 (*pauVar9) [16];
  undefined1 auVar10 [16];
  undefined1 auVar11 [16];
  longlong lVar12;
  float fVar13;
  float fVar14;
  float fVar15;
  char cVar16;
  uint uVar17;
  longlong lVar18;
  undefined4 uVar19;
  ulonglong uVar20;
  ushort uVar21;
  undefined1 *puVar22;
  longlong *plVar23;
  ulonglong uVar24;
  longlong lVar25;
  ulonglong uVar26;
  longlong lVar27;
  longlong *plVar28;
  float *pfVar29;
  longlong *plVar30;
  longlong lVar31;
  ushort *puVar32;
  bool bVar33;
  float fVar34;
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
  float fVar48;
  float fVar49;
  float fVar50;
  float fVar51;
  float fVar53;
  float fVar54;
  float fVar55;
  undefined1 auVar52 [16];
  undefined1 auVar56 [16];
  float fVar57;
  undefined1 auVar58 [16];
  undefined1 auVar59 [16];
  undefined1 auVar60 [64];
  undefined1 auVar61 [16];
  undefined1 auVar62 [16];
  undefined1 auVar63 [16];
  undefined1 in_ZMM7 [64];
  undefined1 auVar64 [16];
  undefined1 auVar65 [16];
  undefined1 in_ZMM9 [64];
  undefined1 in_ZMM10 [64];
  undefined1 auVar66 [16];
  float fVar67;
  float fVar68;
  float fVar69;
  undefined1 auVar70 [16];
  undefined1 auVar71 [16];
  undefined1 auVar72 [16];
  undefined1 in_ZMM14 [64];
  undefined1 auVar73 [16];
  undefined1 auVar74 [16];
  longlong lStack_338;
  float *pfStack_330;
  undefined1 auStack_328 [16];
  undefined1 auStack_318 [16];
  undefined1 auStack_308 [16];
  undefined1 auStack_2f8 [16];
  undefined1 auStack_2e8 [16];
  float fStack_2b8;
  float fStack_2b4;
  float fStack_2b0;
  float fStack_2ac;
  byte bStack_2a8;
  undefined1 auStack_298 [16];
  undefined1 auStack_288 [16];
  undefined1 auStack_278 [16];
  undefined1 auStack_268 [16];
  undefined1 auStack_258 [16];
  undefined1 auStack_248 [16];
  undefined1 auStack_238 [16];
  undefined8 uStack_228;
  undefined8 uStack_220;
  undefined1 uStack_218;
  undefined8 uStack_208;
  undefined8 uStack_200;
  undefined1 auStack_1f8 [16];
  undefined1 auStack_1e8 [16];
  float fStack_1d8;
  float fStack_1d4;
  float fStack_1d0;
  float fStack_1cc;
  undefined1 auStack_1c8 [16];
  undefined1 auStack_1b8 [16];
  undefined1 auStack_1a8 [16];
  uint uStack_198;
  uint uStack_194;
  uint uStack_190;
  uint uStack_18c;
  longlong alStack_180 [5];
  longlong lStack_158;
  longlong lStack_150;
  longlong lStack_148;
  ushort *puStack_140;
  undefined1 auStack_138 [16];
  longlong lStack_120;
  float *pfStack_118;
  longlong *plStack_110;
  uint uStack_104;
  longlong lStack_100;
  ushort uStack_f2;
  uint uStack_f0;
  char cStack_ea;
  byte bStack_e9;
  undefined1 auStack_d8 [16];
  undefined1 auStack_b8 [16];
  undefined1 auStack_a8 [16];
  undefined1 auStack_68 [16];
  undefined1 auVar75 [64];
  
  auStack_68 = in_ZMM14._0_16_;
  auStack_a8 = in_ZMM10._0_16_;
  auStack_b8 = in_ZMM9._0_16_;
  auStack_d8 = in_ZMM7._0_16_;
  uVar24 = (ulonglong)param_3;
  lVar5 = *(longlong *)(*param_4 + 0x40);
  lVar18 = *(longlong *)(lVar5 + 0x130);
  uVar26 = *(ulonglong *)(lVar18 + 0x50);
  if (uVar26 == 0) {
    *param_2 = 0;
  }
  else {
    uVar19 = *(undefined4 *)(lVar5 + 0x2c);
    auVar60 = ZEXT1664(CONCAT412(uVar19,CONCAT48(uVar19,CONCAT44(uVar19,uVar19))));
    lStack_148 = param_1 + 0x20 + uVar24 * 0xb8;
    lStack_150 = param_1 + 0x20 + (ulonglong)(1 - param_3) * 0xb8;
    lVar5 = *(longlong *)(lStack_150 + 8);
    pfVar29 = *(float **)(lStack_150 + 0x10);
    lStack_338 = lVar5;
    pfStack_330 = pfVar29;
    puStack_140 = param_2;
    uStack_104 = param_3;
    lStack_100 = param_1;
    FUN_1455cd5a0(auStack_298,&lStack_338,*param_4,param_4[1]);
    plVar23 = &lStack_338;
    lVar25 = param_4[1];
    auVar73._0_12_ = ZEXT812(0);
    auVar73._12_4_ = 0;
    auVar75 = ZEXT1664(auVar73);
    uStack_f0 = 0;
    plStack_110 = (longlong *)0x0;
    auStack_138 = auVar60._0_16_;
    lStack_158 = lVar5;
    lStack_120 = lVar18;
    pfStack_118 = pfVar29;
    alStack_180[uVar24 * 2] = *param_4;
    alStack_180[uVar24 * 2 + 1] = lVar25;
    uStack_198 = _DAT_145fc6f4c;
    uStack_194 = _DAT_145fc6f4c;
    uStack_190 = _DAT_145fc6f4c;
    uStack_18c = _DAT_145fc6f4c;
    cStack_ea = *(char *)(*(longlong *)(lVar5 + 0x40) + 0x10);
    auVar35._0_4_ = *pfVar29 * *pfVar29;
    auVar35._4_4_ = pfVar29[1] * pfVar29[1];
    auVar35._8_4_ = pfVar29[2] * pfVar29[2];
    auVar35._12_4_ = pfVar29[3] * pfVar29[3];
    auVar35 = vblendps_avx(auVar35,auVar73,8);
    bStack_e9 = *(byte *)(lStack_100 + 0x275);
    auVar35 = vhaddps_avx(auVar35,auVar35);
    auStack_1e8 = vhaddps_avx(auVar35,auVar35);
    *puStack_140 = 0;
    bVar33 = *(char *)(uVar26 + 0xe) != '\0';
    uVar17 = (uint)*(ushort *)(uVar26 + 0xc);
    if (bVar33) {
      uVar17 = 0;
    }
    uVar24 = (ulonglong)((1 - param_3) * 0x10);
    uVar21 = 0;
    plVar1 = (longlong *)((longlong)alStack_180 + uVar24);
    alStack_180[4] = ((bVar33 | uVar17) << 4) + uVar26;
    puVar32 = puStack_140;
    do {
      auStack_1f8 = auVar60._0_16_;
      uStack_208 = uStack_228;
      uStack_200 = uStack_220;
      *(undefined1 *)((longlong)plVar23 + -8) = uStack_218;
      *(undefined1 **)((longlong)plVar23 + -0x10) = auStack_1f8;
      *(undefined8 *)((longlong)plVar23 + -0x38) = 0x1401bea08;
      func_0x000145023890(&fStack_1d8,lVar18,uVar26,&uStack_208);
      lVar27 = lStack_100;
      lVar25 = lStack_148;
      lVar5 = lStack_150;
      cVar16 = *(char *)(uVar26 + 0xe);
      auVar35 = vcmpps_avx(auStack_248,auStack_1a8,2);
      auVar73 = vcmpps_avx(auStack_1b8,auStack_238,2);
      auVar36._0_4_ = auVar73._0_4_ & auVar35._0_4_;
      auVar36._4_4_ = auVar73._4_4_ & auVar35._4_4_;
      auVar36._8_4_ = auVar73._8_4_ & auVar35._8_4_;
      auVar36._12_4_ = auVar73._12_4_ & auVar35._12_4_;
      uVar19 = vmovmskps_avx(auVar36);
      if ((~(byte)uVar19 & 7) == 0) {
        auVar11._4_4_ = fStack_1d4;
        auVar11._0_4_ = fStack_1d8;
        auVar11._8_4_ = fStack_1d0;
        auVar11._12_4_ = fStack_1cc;
        if (cVar16 == '\0') {
          auVar39._0_4_ = fStack_1d8 * fStack_1d8;
          auVar39._4_4_ = fStack_1d4 * fStack_1d4;
          auVar39._8_4_ = fStack_1d0 * fStack_1d0;
          auVar39._12_4_ = fStack_1cc * fStack_1cc;
          auVar35 = vblendps_avx(auVar39,auVar75._0_16_,8);
          auVar35 = vhaddps_avx(auVar35,auVar35);
          auVar35 = vhaddps_avx(auVar35,auVar35);
          auVar35 = vcmpps_avx(auVar35,auStack_1e8,5);
          if ((((SUB161(auVar35 >> 0x1f,0) & 1) != 0 || (SUB161(auVar35 >> 0x3f,0) & 1) != 0) ||
              (SUB161(auVar35 >> 0x5f,0) & 1) != 0) || auVar35[0xf] < '\0') {
            uVar26 = uVar26 + 0x10;
            goto LAB_1401bf1e9;
          }
        }
        auVar10._4_4_ = uStack_194;
        auVar10._0_4_ = uStack_198;
        auVar10._8_4_ = uStack_190;
        auVar10._12_4_ = uStack_18c;
        auStack_268 = vsubps_avx(auStack_258,auStack_1c8);
        auVar35 = vpand_avx(auStack_288,auVar10);
        auVar73 = vpand_avx(auStack_278,auVar10);
        auVar36 = vpand_avx(auStack_298,auVar10);
        auVar39 = vpmovzxdq_avx(auVar35);
        auVar70._0_4_ = _DAT_146174864 + *pfVar29;
        auVar70._4_4_ = _DAT_146174864 + pfVar29[1];
        auVar70._8_4_ = _DAT_146174864 + pfVar29[2];
        auVar70._12_4_ = _DAT_146174864 + pfVar29[3];
        auVar10 = vpunpckldq_avx(auVar36,auVar73);
        auVar37 = vpunpckldq_avx(auVar10,auVar39);
        auVar39 = vpunpckhdq_avx(auVar10,auVar39);
        auVar10 = vshufps_avx(auVar11,auVar11,0x55);
        auVar11 = vshufps_avx(auVar11,auVar11,0xaa);
        auVar38 = vshufps_avx(auVar70,auVar70,0x55);
        auVar44 = vshufps_avx(auVar70,auVar70,0xaa);
        auVar61._0_4_ =
             auVar73._0_4_ * auVar44._0_4_ +
             auVar35._0_4_ * auVar38._0_4_ + auVar36._0_4_ * auVar70._0_4_ + fStack_1d8;
        auVar61._4_4_ =
             auVar73._4_4_ * auVar44._4_4_ +
             auVar35._4_4_ * auVar38._4_4_ + auVar36._4_4_ * auVar70._0_4_ + fStack_1d4;
        auVar61._8_4_ =
             auVar73._8_4_ * auVar44._8_4_ +
             auVar35._8_4_ * auVar38._8_4_ + auVar36._8_4_ * auVar70._0_4_ + fStack_1d0;
        auVar61._12_4_ =
             auVar73._12_4_ * auVar44._12_4_ +
             auVar35._12_4_ * auVar38._12_4_ + auVar36._12_4_ * auVar70._0_4_ + fStack_1cc;
        auVar73 = vunpckhps_avx(auVar36,auVar73);
        auVar38 = ZEXT816(0) << 0x20;
        auVar75 = ZEXT864(0) << 0x20;
        auVar35 = vunpckhps_avx(auVar35,auVar38);
        auVar35 = vunpcklps_avx(auVar73,auVar35);
        auVar56._0_4_ =
             auVar35._0_4_ * auVar11._0_4_ +
             auVar39._0_4_ * auVar10._0_4_ + auVar37._0_4_ * fStack_1d8 + auVar70._0_4_;
        auVar56._4_4_ =
             auVar35._4_4_ * auVar11._4_4_ +
             auVar39._4_4_ * auVar10._4_4_ + auVar37._4_4_ * fStack_1d8 + auVar70._4_4_;
        auVar56._8_4_ =
             auVar35._8_4_ * auVar11._8_4_ +
             auVar39._8_4_ * auVar10._8_4_ + auVar37._8_4_ * fStack_1d8 + auVar70._8_4_;
        auVar56._12_4_ =
             auVar35._12_4_ * auVar11._12_4_ +
             auVar39._12_4_ * auVar10._12_4_ + auVar37._12_4_ * fStack_1d8 + auVar70._12_4_;
        auVar36 = vpunpckldq_avx(auStack_298,auStack_278);
        auVar11 = vpunpckldq_avx(auStack_288,auVar38);
        auVar35 = vpunpckhdq_avx(auStack_298,auStack_278);
        auVar73 = vpunpckhdq_avx(auStack_288,auVar38);
        auVar39 = vpunpckldq_avx(auVar36,auVar11);
        auVar36 = vpunpckhdq_avx(auVar36,auVar11);
        fVar34 = auStack_268._0_4_;
        auVar73 = vpunpckldq_avx(auVar35,auVar73);
        auVar11 = vshufps_avx(auStack_268,auStack_268,0xaa);
        auVar10 = vshufps_avx(auStack_268,auStack_268,0x55);
        auVar37._0_4_ = (uint)fVar34 & uStack_198;
        auVar37._4_4_ = auStack_268._4_4_ & uStack_194;
        auVar37._8_4_ = auStack_268._8_4_ & uStack_190;
        auVar37._12_4_ = auStack_268._12_4_ & uStack_18c;
        auVar35 = vcmpps_avx(auVar37,auVar61,2);
        auVar44._0_4_ =
             (uint)(auVar73._0_4_ * auVar11._0_4_ +
                   auVar36._0_4_ * auVar10._0_4_ + auVar39._0_4_ * fVar34) & uStack_198;
        auVar44._4_4_ =
             (uint)(auVar73._4_4_ * auVar11._4_4_ +
                   auVar36._4_4_ * auVar10._4_4_ + auVar39._4_4_ * fVar34) & uStack_194;
        auVar44._8_4_ =
             (uint)(auVar73._8_4_ * auVar11._8_4_ +
                   auVar36._8_4_ * auVar10._8_4_ + auVar39._8_4_ * fVar34) & uStack_190;
        auVar44._12_4_ =
             (uint)(auVar73._12_4_ * auVar11._12_4_ +
                   auVar36._12_4_ * auVar10._12_4_ + auVar39._12_4_ * fVar34) & uStack_18c;
        auVar73 = vcmpps_avx(auVar44,auVar56,2);
        auVar38._0_4_ = auVar73._0_4_ & auVar35._0_4_;
        auVar38._4_4_ = auVar73._4_4_ & auVar35._4_4_;
        auVar38._8_4_ = auVar73._8_4_ & auVar35._8_4_;
        auVar38._12_4_ = auVar73._12_4_ & auVar35._12_4_;
        uVar19 = vmovmskps_avx(auVar38);
        if ((~(byte)uVar19 & 7) == 0) {
          if (plStack_110 == (longlong *)0x0) {
            auVar60 = ZEXT1664(auStack_138);
            if ((*(byte *)(lStack_150 + 0xb6) & 1) == 0) {
              *(undefined8 *)((longlong)plVar23 + -0x28) = 0x1401bf211;
              FUN_1401c01f0(lVar5,lVar27,lVar25,1);
            }
            lVar25 = lStack_100;
            uVar20 = (ulonglong)*(uint *)(lVar5 + 0x1c);
            lVar27 = uVar20 << 4;
            *(undefined8 *)((longlong)plVar23 + -8) = 0x1401bec0f;
            lVar18 = FUN_145647140();
            lVar18 = -lVar18;
            plStack_110 = (longlong *)((longlong)plVar23 + lVar18);
            puVar22 = (undefined1 *)((longlong)plVar23 + lVar18);
            plVar30 = (longlong *)((longlong)plVar23 + lVar18);
            if (uVar20 != 0) {
              lVar5 = *(longlong *)(lVar5 + 0x20);
              lVar31 = 0;
              do {
                plVar30 = (longlong *)(lVar5 + lVar31);
                lVar12 = plVar30[1];
                *plVar1 = *plVar30;
                *(longlong *)((longlong)alStack_180 + uVar24 + 8) = lVar12;
                puVar6 = *(undefined8 **)(lVar25 + 0x250);
                if (puVar6 == (undefined8 *)0x0) {
                  auVar35 = vpshufd_avx(*(undefined1 (*) [16])(alStack_180[0] + 0x48),0x4e);
                  auVar35 = vpand_avx(auVar35,*(undefined1 (*) [16])(alStack_180[2] + 0x48));
                  auVar40._0_8_ = -(ulonglong)(auVar35._0_8_ == auVar75._0_8_);
                  auVar40._8_8_ = -(ulonglong)(auVar35._8_8_ == auVar75._8_8_);
                  if ((SUB161(auVar40 >> 0x3f,0) & 1) == 0 && -1 < auVar40._8_8_) {
LAB_1401bec64:
                    plVar30 = (longlong *)(lVar5 + lVar31);
                    lVar12 = plVar30[1];
                    plStack_110[(ulonglong)uStack_f0 * 2] = *plVar30;
                    (plStack_110 + (ulonglong)uStack_f0 * 2)[1] = lVar12;
                    uStack_f0 = uStack_f0 + 1;
                  }
                }
                else {
                  pcVar7 = *(code **)*puVar6;
                  *(undefined8 *)((longlong)plVar23 + lVar18 + -0x28) = 0x1401beca7;
                  cVar16 = (*pcVar7)(puVar6,alStack_180);
                  lVar25 = lStack_100;
                  if (cVar16 != '\0') goto LAB_1401bec64;
                }
                lVar31 = lVar31 + 0x10;
                plVar30 = plStack_110;
              } while (lVar27 != lVar31);
            }
            plStack_110 = plVar30;
            pfVar29 = pfStack_118;
            lVar18 = lStack_120;
            puVar32 = puStack_140;
            if (uStack_f0 == 0) {
              return;
            }
          }
          else {
            auVar60 = ZEXT1664(auStack_138);
            puVar22 = (undefined1 *)plVar23;
            lVar25 = lStack_100;
          }
          plVar23 = (longlong *)puVar22;
          if (cStack_ea == '\x06') {
            if (uStack_f0 != 0) {
              plVar28 = plStack_110 + (ulonglong)uStack_f0 * 2;
              plVar30 = plStack_110;
              do {
                pfVar29 = (float *)*plVar30;
                pfVar8 = (float *)plVar30[1];
                *plVar1 = (longlong)pfVar29;
                *(float **)((longlong)alStack_180 + uVar24 + 8) = pfVar8;
                uVar17 = uStack_104;
                fVar50 = *pfVar29;
                fVar51 = pfVar29[1];
                fVar53 = pfVar29[2];
                fVar54 = pfVar29[3];
                fVar34 = pfVar8[8];
                fVar55 = pfVar29[4];
                fVar57 = pfVar29[5];
                fVar67 = pfVar29[6];
                fVar68 = pfVar29[7];
                fVar2 = pfVar8[9];
                fVar69 = pfVar29[8];
                fVar13 = pfVar29[9];
                fVar14 = pfVar29[10];
                fVar15 = pfVar29[0xb];
                fVar3 = pfVar8[10];
                fVar4 = pfVar8[0xe];
                fVar48 = pfVar8[0x12];
                pauVar9 = (undefined1 (*) [16])*param_4;
                lVar5 = param_4[1];
                fVar49 = pfVar8[0xc];
                auVar41._0_4_ = fVar69 * fVar3 + fVar55 * fVar2 + fVar50 * fVar34;
                auVar41._4_4_ = fVar13 * fVar3 + fVar57 * fVar2 + fVar51 * fVar34;
                auVar41._8_4_ = fVar14 * fVar3 + fVar67 * fVar2 + fVar53 * fVar34;
                auVar41._12_4_ = fVar15 * fVar3 + fVar68 * fVar2 + fVar54 * fVar34;
                fVar34 = pfVar8[0xd];
                auVar35 = vshufps_avx(auVar41,auVar41,0xaa);
                fVar2 = pfVar8[0x10];
                auVar45._0_4_ = fVar69 * fVar4 + fVar55 * fVar34 + fVar50 * fVar49;
                auVar45._4_4_ = fVar13 * fVar4 + fVar57 * fVar34 + fVar51 * fVar49;
                auVar45._8_4_ = fVar14 * fVar4 + fVar67 * fVar34 + fVar53 * fVar49;
                auVar45._12_4_ = fVar15 * fVar4 + fVar68 * fVar34 + fVar54 * fVar49;
                fVar34 = pfVar8[0x11];
                auVar47._0_4_ = fVar69 * fVar48 + fVar55 * fVar34 + fVar50 * fVar2;
                auVar47._4_4_ = fVar13 * fVar48 + fVar57 * fVar34 + fVar51 * fVar2;
                auVar47._8_4_ = fVar14 * fVar48 + fVar67 * fVar34 + fVar53 * fVar2;
                auVar47._12_4_ = fVar15 * fVar48 + fVar68 * fVar34 + fVar54 * fVar2;
                auVar11 = vunpcklps_avx(*pauVar9,pauVar9[2]);
                auVar73 = vunpckhps_avx(*pauVar9,pauVar9[2]);
                auVar38 = auVar75._0_16_;
                auVar39 = vunpcklps_avx(pauVar9[1],auVar38);
                auVar36 = vunpckhps_avx(pauVar9[1],auVar38);
                auVar10 = vunpcklps_avx(auVar73,auVar36);
                auVar37 = vunpcklps_avx(auVar11,auVar39);
                auVar36 = vunpckhps_avx(auVar11,auVar39);
                auVar73 = vshufps_avx(auVar41,auVar41,0x55);
                fVar34 = auVar37._0_4_;
                fVar2 = auVar37._4_4_;
                fVar3 = auVar37._8_4_;
                fVar4 = auVar37._12_4_;
                fVar53 = auVar36._0_4_;
                fVar54 = auVar36._4_4_;
                fVar55 = auVar36._8_4_;
                fVar57 = auVar36._12_4_;
                auVar36 = vshufps_avx(auVar45,auVar45,0x55);
                fVar48 = auVar10._0_4_;
                auStack_328._0_4_ =
                     fVar48 * auVar35._0_4_ + fVar53 * auVar73._0_4_ + auVar41._0_4_ * fVar34;
                fVar49 = auVar10._4_4_;
                auStack_328._4_4_ =
                     fVar49 * auVar35._4_4_ + fVar54 * auVar73._4_4_ + auVar41._0_4_ * fVar2;
                fVar50 = auVar10._8_4_;
                auStack_328._8_4_ =
                     fVar50 * auVar35._8_4_ + fVar55 * auVar73._8_4_ + auVar41._0_4_ * fVar3;
                fVar51 = auVar10._12_4_;
                auStack_328._12_4_ =
                     fVar51 * auVar35._12_4_ + fVar57 * auVar73._12_4_ + auVar41._0_4_ * fVar4;
                auVar35 = vshufps_avx(auVar45,auVar45,0xaa);
                auVar73 = vshufps_avx(auVar47,auVar47,0x55);
                auStack_318._0_4_ =
                     fVar48 * auVar35._0_4_ + fVar53 * auVar36._0_4_ + auVar45._0_4_ * fVar34;
                auStack_318._4_4_ =
                     fVar49 * auVar35._4_4_ + fVar54 * auVar36._4_4_ + auVar45._0_4_ * fVar2;
                auStack_318._8_4_ =
                     fVar50 * auVar35._8_4_ + fVar55 * auVar36._8_4_ + auVar45._0_4_ * fVar3;
                auStack_318._12_4_ =
                     fVar51 * auVar35._12_4_ + fVar57 * auVar36._12_4_ + auVar45._0_4_ * fVar4;
                auVar35 = vshufps_avx(auVar47,auVar47,0xaa);
                auStack_308._0_4_ =
                     fVar48 * auVar35._0_4_ + fVar53 * auVar73._0_4_ + auVar47._0_4_ * fVar34;
                auStack_308._4_4_ =
                     fVar49 * auVar35._4_4_ + fVar54 * auVar73._4_4_ + auVar47._0_4_ * fVar2;
                auStack_308._8_4_ =
                     fVar50 * auVar35._8_4_ + fVar55 * auVar73._8_4_ + auVar47._0_4_ * fVar3;
                auStack_308._12_4_ =
                     fVar51 * auVar35._12_4_ + fVar57 * auVar73._12_4_ + auVar47._0_4_ * fVar4;
                auVar73 = vsubps_avx(*(undefined1 (*) [16])(pfVar8 + 4),pauVar9[3]);
                auVar11 = vunpcklps_avx(*pauVar9,pauVar9[2]);
                auVar39 = vunpcklps_avx(pauVar9[1],auVar38);
                auVar35 = vunpckhps_avx(*pauVar9,pauVar9[2]);
                auVar36 = vunpckhps_avx(pauVar9[1],auVar38);
                auVar10 = vunpcklps_avx(auVar35,auVar36);
                auVar37 = vunpcklps_avx(auVar11,auVar39);
                auVar36 = vunpckhps_avx(auVar11,auVar39);
                fVar34 = auVar73._0_4_;
                auVar35 = vshufps_avx(auVar73,auVar73,0x55);
                auVar73 = vshufps_avx(auVar73,auVar73,0xaa);
                auStack_2e8._0_4_ =
                     auVar10._0_4_ * auVar73._0_4_ +
                     auVar36._0_4_ * auVar35._0_4_ + fVar34 * auVar37._0_4_;
                auStack_2e8._4_4_ =
                     auVar10._4_4_ * auVar73._4_4_ +
                     auVar36._4_4_ * auVar35._4_4_ + fVar34 * auVar37._4_4_;
                auStack_2e8._8_4_ =
                     auVar10._8_4_ * auVar73._8_4_ +
                     auVar36._8_4_ * auVar35._8_4_ + fVar34 * auVar37._8_4_;
                auStack_2e8._12_4_ =
                     auVar10._12_4_ * auVar73._12_4_ +
                     auVar36._12_4_ * auVar35._12_4_ + fVar34 * auVar37._12_4_;
                auVar35 = pauVar9[3];
                auVar73 = *pauVar9;
                auVar36 = pauVar9[1];
                auVar11 = pauVar9[2];
                auVar71 = auVar35;
                if (*(int *)(lVar5 + 0xc) != 0) {
                  auVar39 = *(undefined1 (*) [16])(lVar5 + 0x60);
                  fVar34 = *(float *)(lVar5 + 0x6c);
                  auVar66._0_4_ = auVar39._0_4_ + auVar39._0_4_;
                  auVar66._4_4_ = auVar39._4_4_ + auVar39._4_4_;
                  auVar66._8_4_ = auVar39._8_4_ + auVar39._8_4_;
                  auVar66._12_4_ = auVar39._12_4_ + auVar39._12_4_;
                  auVar10 = vshufps_avx(auVar39,auVar39,0xc9);
                  auVar39 = vshufps_avx(auVar39,auVar39,0xd2);
                  auVar37 = vshufps_avx(auVar66,auVar66,0xc9);
                  auVar38 = vshufps_avx(auVar66,auVar66,0xd2);
                  fVar2 = *(float *)(lVar5 + 0x70);
                  auVar62._0_4_ = auVar39._0_4_ * auVar66._0_4_ + fVar34 * auVar37._0_4_;
                  auVar62._4_4_ = auVar39._4_4_ * auVar66._4_4_ + fVar34 * auVar37._4_4_;
                  auVar62._8_4_ = auVar39._8_4_ * auVar66._8_4_ + fVar34 * auVar37._8_4_;
                  auVar62._12_4_ = auVar39._12_4_ * auVar66._12_4_ + fVar34 * auVar37._12_4_;
                  auVar74._0_4_ = -(fVar34 * auVar38._0_4_) + auVar10._0_4_ * auVar66._0_4_;
                  auVar74._4_4_ = -(fVar34 * auVar38._4_4_) + auVar10._4_4_ * auVar66._4_4_;
                  auVar74._8_4_ = -(fVar34 * auVar38._8_4_) + auVar10._8_4_ * auVar66._8_4_;
                  auVar74._12_4_ = -(fVar34 * auVar38._12_4_) + auVar10._12_4_ * auVar66._12_4_;
                  auVar58._0_4_ =
                       -(auVar38._0_4_ * auVar39._0_4_) -
                       (auVar10._0_4_ * auVar37._0_4_ - _DAT_145fc6ed8);
                  auVar58._4_4_ =
                       -(auVar38._4_4_ * auVar39._4_4_) -
                       (auVar10._4_4_ * auVar37._4_4_ - _DAT_145fc6ed8);
                  auVar58._8_4_ =
                       -(auVar38._8_4_ * auVar39._8_4_) -
                       (auVar10._8_4_ * auVar37._8_4_ - _DAT_145fc6ed8);
                  auVar58._12_4_ =
                       -(auVar38._12_4_ * auVar39._12_4_) -
                       (auVar10._12_4_ * auVar37._12_4_ - _DAT_145fc6ed8);
                  auVar39 = vshufps_avx(auVar62,auVar62,0x55);
                  auVar10 = vshufps_avx(auVar74,auVar74,0xaa);
                  auVar37 = vshufps_avx(auVar62,auVar62,0xaa);
                  fVar4 = auVar73._0_4_;
                  fVar48 = auVar73._4_4_;
                  fVar49 = auVar73._8_4_;
                  fVar50 = auVar73._12_4_;
                  fVar51 = auVar36._0_4_;
                  fVar53 = auVar36._4_4_;
                  fVar54 = auVar36._8_4_;
                  fVar55 = auVar36._12_4_;
                  fVar57 = auVar11._0_4_;
                  fVar67 = auVar11._4_4_;
                  fVar68 = auVar11._8_4_;
                  fVar69 = auVar11._12_4_;
                  auVar38 = vshufps_avx(auVar58,auVar58,0x55);
                  auVar44 = vshufps_avx(auVar58,auVar58,0xaa);
                  auVar56 = vshufps_avx(auVar74,auVar74,0x55);
                  fVar34 = *(float *)(lVar5 + 0x78);
                  fVar3 = *(float *)(lVar5 + 0x74);
                  auVar61 = vsubps_avx(auVar35,*(undefined1 (*) [16])(lVar5 + 0x50));
                  auVar71._0_4_ =
                       (fVar57 + (-(fVar57 * auVar44._0_4_) -
                                 (fVar51 * auVar56._0_4_ + auVar62._0_4_ * fVar4))) * fVar34 +
                       ((-(fVar57 * auVar37._0_4_) -
                        (fVar51 * auVar38._0_4_ + auVar74._0_4_ * fVar4)) + fVar51) * fVar3 +
                       ((-(fVar57 * auVar10._0_4_) -
                        (fVar51 * auVar39._0_4_ + auVar58._0_4_ * fVar4)) + fVar4) * fVar2 +
                       auVar61._0_4_;
                  auVar71._4_4_ =
                       (fVar67 + (-(fVar67 * auVar44._4_4_) -
                                 (fVar53 * auVar56._4_4_ + auVar62._0_4_ * fVar48))) * fVar34 +
                       ((-(fVar67 * auVar37._4_4_) -
                        (fVar53 * auVar38._4_4_ + auVar74._0_4_ * fVar48)) + fVar53) * fVar3 +
                       ((-(fVar67 * auVar10._4_4_) -
                        (fVar53 * auVar39._4_4_ + auVar58._0_4_ * fVar48)) + fVar48) * fVar2 +
                       auVar61._4_4_;
                  auVar71._8_4_ =
                       (fVar68 + (-(fVar68 * auVar44._8_4_) -
                                 (fVar54 * auVar56._8_4_ + auVar62._0_4_ * fVar49))) * fVar34 +
                       ((-(fVar68 * auVar37._8_4_) -
                        (fVar54 * auVar38._8_4_ + auVar74._0_4_ * fVar49)) + fVar54) * fVar3 +
                       ((-(fVar68 * auVar10._8_4_) -
                        (fVar54 * auVar39._8_4_ + auVar58._0_4_ * fVar49)) + fVar49) * fVar2 +
                       auVar61._8_4_;
                  auVar71._12_4_ =
                       (fVar69 + (-(fVar69 * auVar44._12_4_) -
                                 (fVar55 * auVar56._12_4_ + auVar62._0_4_ * fVar50))) * fVar34 +
                       ((-(fVar69 * auVar37._12_4_) -
                        (fVar55 * auVar38._12_4_ + auVar74._0_4_ * fVar50)) + fVar55) * fVar3 +
                       ((-(fVar69 * auVar10._12_4_) -
                        (fVar55 * auVar39._12_4_ + auVar58._0_4_ * fVar50)) + fVar50) * fVar2 +
                       auVar61._12_4_;
                  auVar75 = ZEXT464(0) << 0x20;
                }
                auVar39 = vsubps_avx(auVar35,auVar71);
                auVar10 = vunpcklps_avx(auVar73,auVar11);
                auVar44 = auVar75._0_16_;
                auVar37 = vunpcklps_avx(auVar36,auVar44);
                auVar35 = vunpckhps_avx(auVar73,auVar11);
                auVar73 = vunpckhps_avx(auVar36,auVar44);
                auStack_2f8 = vsubps_avx(auStack_2e8,auStack_1c8);
                auVar11 = vunpcklps_avx(auVar35,auVar73);
                auVar38 = vunpcklps_avx(auVar10,auVar37);
                auVar36 = vunpckhps_avx(auVar10,auVar37);
                fVar34 = auVar39._0_4_;
                auVar35 = vshufps_avx(auVar39,auVar39,0x55);
                auVar73 = vshufps_avx(auVar39,auVar39,0xaa);
                auVar65._0_4_ = (float)(uStack_198 & (uint)auStack_328._0_4_);
                auVar65._4_4_ = (float)(uStack_194 & (uint)auStack_328._4_4_);
                auVar65._8_4_ = (float)(uStack_190 & (uint)auStack_328._8_4_);
                auVar65._12_4_ = (float)(uStack_18c & (uint)auStack_328._12_4_);
                auVar63._0_4_ = (float)(uStack_198 & (uint)auStack_308._0_4_);
                auVar63._4_4_ = (float)(uStack_194 & (uint)auStack_308._4_4_);
                auVar63._8_4_ = (float)(uStack_190 & (uint)auStack_308._8_4_);
                auVar63._12_4_ = (float)(uStack_18c & (uint)auStack_308._12_4_);
                auVar39 = vunpcklps_avx(auVar65,auVar63);
                fStack_2b8 = auVar11._0_4_ * auVar73._0_4_ +
                             auVar36._0_4_ * auVar35._0_4_ + fVar34 * auVar38._0_4_;
                fStack_2b4 = auVar11._4_4_ * auVar73._4_4_ +
                             auVar36._4_4_ * auVar35._4_4_ + fVar34 * auVar38._4_4_;
                fStack_2b0 = auVar11._8_4_ * auVar73._8_4_ +
                             auVar36._8_4_ * auVar35._8_4_ + fVar34 * auVar38._8_4_;
                fStack_2ac = auVar11._12_4_ * auVar73._12_4_ +
                             auVar36._12_4_ * auVar35._12_4_ + fVar34 * auVar38._12_4_;
                auVar64._0_4_ = (float)(uStack_198 & (uint)auStack_318._0_4_);
                auVar64._4_4_ = (float)(uStack_194 & (uint)auStack_318._4_4_);
                auVar64._8_4_ = (float)(uStack_190 & (uint)auStack_318._8_4_);
                auVar64._12_4_ = (float)(uStack_18c & (uint)auStack_318._12_4_);
                auVar35 = vpmovzxdq_avx(auVar64);
                auVar11 = vunpcklps_avx(auVar39,auVar35);
                bStack_2a8 = pauVar9[2][0xc] & 1;
                auVar59._0_4_ = _DAT_146174864 + *pfVar8;
                auVar59._4_4_ = _DAT_146174864 + pfVar8[1];
                auVar59._8_4_ = _DAT_146174864 + pfVar8[2];
                auVar59._12_4_ = _DAT_146174864 + pfVar8[3];
                auVar73 = vshufps_avx(auVar59,auVar59,0x55);
                auVar36 = vshufps_avx(auVar59,auVar59,0xaa);
                auVar52._0_4_ =
                     auVar63._0_4_ * auVar36._0_4_ +
                     auVar64._0_4_ * auVar73._0_4_ + auVar65._0_4_ * auVar59._0_4_ + fStack_1d8;
                auVar52._4_4_ =
                     auVar63._4_4_ * auVar36._4_4_ +
                     auVar64._4_4_ * auVar73._4_4_ + auVar65._4_4_ * auVar59._0_4_ + fStack_1d4;
                auVar52._8_4_ =
                     auVar63._8_4_ * auVar36._8_4_ +
                     auVar64._8_4_ * auVar73._8_4_ + auVar65._8_4_ * auVar59._0_4_ + fStack_1d0;
                auVar52._12_4_ =
                     auVar63._12_4_ * auVar36._12_4_ +
                     auVar64._12_4_ * auVar73._12_4_ + auVar65._12_4_ * auVar59._0_4_ + fStack_1cc;
                auVar73 = vunpckhps_avx(auVar65,auVar63);
                auVar36 = vunpckhps_avx(auVar64,auVar44);
                auVar73 = vunpcklps_avx(auVar73,auVar36);
                auVar35 = vunpckhps_avx(auVar39,auVar35);
                auVar72._0_4_ =
                     auVar73._0_4_ * fStack_1d0 +
                     auVar35._0_4_ * fStack_1d4 + auVar11._0_4_ * fStack_1d8 + auVar59._0_4_;
                auVar72._4_4_ =
                     auVar73._4_4_ * fStack_1d0 +
                     auVar35._4_4_ * fStack_1d4 + auVar11._4_4_ * fStack_1d8 + auVar59._4_4_;
                auVar72._8_4_ =
                     auVar73._8_4_ * fStack_1d0 +
                     auVar35._8_4_ * fStack_1d4 + auVar11._8_4_ * fStack_1d8 + auVar59._8_4_;
                auVar72._12_4_ =
                     auVar73._12_4_ * fStack_1d0 +
                     auVar35._12_4_ * fStack_1d4 + auVar11._12_4_ * fStack_1d8 + auVar59._12_4_;
                auVar36 = vunpcklps_avx(auStack_328,auStack_308);
                auVar11 = vunpcklps_avx(auStack_318,auVar44);
                auVar35 = vunpckhps_avx(auStack_328,auStack_308);
                auVar73 = vunpckhps_avx(auStack_318,auVar44);
                auVar39 = vunpcklps_avx(auVar36,auVar11);
                auVar11 = vunpckhps_avx(auVar36,auVar11);
                fVar34 = auStack_2f8._0_4_;
                auVar10 = vunpcklps_avx(auVar35,auVar73);
                auVar73 = vshufps_avx(auStack_2f8,auStack_2f8,0xaa);
                auVar36 = vshufps_avx(auStack_2f8,auStack_2f8,0x55);
                auVar42._0_4_ = uStack_198 & (uint)fVar34;
                auVar42._4_4_ = uStack_194 & auStack_2f8._4_4_;
                auVar42._8_4_ = uStack_190 & auStack_2f8._8_4_;
                auVar42._12_4_ = uStack_18c & auStack_2f8._12_4_;
                auVar35 = vcmpps_avx(auVar42,auVar52,2);
                auVar46._0_4_ =
                     uStack_198 &
                     (uint)(auVar10._0_4_ * auVar73._0_4_ +
                           auVar11._0_4_ * auVar36._0_4_ + auVar39._0_4_ * fVar34);
                auVar46._4_4_ =
                     uStack_194 &
                     (uint)(auVar10._4_4_ * auVar73._4_4_ +
                           auVar11._4_4_ * auVar36._4_4_ + auVar39._4_4_ * fVar34);
                auVar46._8_4_ =
                     uStack_190 &
                     (uint)(auVar10._8_4_ * auVar73._8_4_ +
                           auVar11._8_4_ * auVar36._8_4_ + auVar39._8_4_ * fVar34);
                auVar46._12_4_ =
                     uStack_18c &
                     (uint)(auVar10._12_4_ * auVar73._12_4_ +
                           auVar11._12_4_ * auVar36._12_4_ + auVar39._12_4_ * fVar34);
                auVar73 = vcmpps_avx(auVar46,auVar72,2);
                auVar43._0_4_ = auVar35._0_4_ & auVar73._0_4_;
                auVar43._4_4_ = auVar35._4_4_ & auVar73._4_4_;
                auVar43._8_4_ = auVar35._8_4_ & auVar73._8_4_;
                auVar43._12_4_ = auVar35._12_4_ & auVar73._12_4_;
                uVar19 = vmovmskps_avx(auVar43);
                if (((~(byte)uVar19 & 7) == 0) &&
                   ((*(longlong *)(pfVar29 + 0x10) == 0 ||
                    (*(char *)(*(longlong *)(pfVar29 + 0x10) + 0x10) != '\x05')))) {
                  *(ulonglong *)(puVar22 + -8) = uVar26;
                  *(uint *)(puVar22 + -0x10) = uVar17;
                  *(undefined8 *)(puVar22 + -0x38) = 0x1401bf105;
                  FUN_145023070(lVar25,&uStack_f2,auStack_328,alStack_180);
                  *puVar32 = uStack_f2;
                  uVar21 = uStack_f2;
                  if (((uStack_f2 >> 8 & 1) != 0) ||
                     (lVar25 = lStack_100, ((byte)uStack_f2 & bStack_e9 & 1) != 0))
                  goto LAB_1401bf13d;
                }
                plVar30 = plVar30 + 2;
              } while (plVar30 != plVar28);
              uVar21 = (ushort)(byte)*puVar32;
LAB_1401bf13d:
              auVar60 = ZEXT1664(auStack_138);
              pfVar29 = pfStack_118;
              lVar18 = lStack_120;
            }
            if (((byte)uVar21 & bStack_e9 & 1) != 0) {
              return;
            }
            if ((*puVar32 & 0x100) != 0) {
              return;
            }
          }
          else {
            *plVar1 = lStack_158;
            *(float **)((longlong)alStack_180 + uVar24 + 8) = pfVar29;
            uVar17 = uStack_104;
            *(ulonglong *)(puVar22 + -8) = uVar26;
            *(uint *)(puVar22 + -0x10) = uVar17;
            *(undefined8 *)(puVar22 + -0x38) = 0x1401bf1a7;
            FUN_145023070(lVar25,auStack_328,auStack_298,alStack_180);
            *puVar32 = auStack_328._0_2_;
            if ((auStack_328[0] & bStack_e9 & 1) != 0) {
              return;
            }
            uVar21 = auStack_328._0_2_;
            if ((auStack_328._0_2_ & 0x100) != 0) {
              return;
            }
          }
        }
        else {
          auVar60 = ZEXT1664(auStack_138);
        }
        bVar33 = *(char *)(uVar26 + 0xe) != '\0';
        uVar17 = (uint)*(ushort *)(uVar26 + 0xc);
        if (bVar33) {
          uVar17 = 0;
        }
        uVar26 = uVar26 + ((bVar33 | uVar17) << 4);
      }
      else {
        uVar17 = (uint)*(ushort *)(uVar26 + 0xc);
        if (cVar16 != '\0') {
          uVar17 = 0;
        }
        uVar26 = uVar26 + ((cVar16 != '\0' | uVar17) << 4);
      }
LAB_1401bf1e9:
    } while (uVar26 < (ulonglong)alStack_180[4]);
  }
  return;
}

