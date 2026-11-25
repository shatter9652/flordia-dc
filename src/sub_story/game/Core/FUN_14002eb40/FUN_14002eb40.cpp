// Recovered from game_scarlett_master.exe (GTA VI, Xbox Series X, PE32+ x64)
// Address: 14002eb40  size: 3189 bytes
// Name:    FUN_14002eb40
// Subsystem: core
//
// Referenced strings (0 in this body, 0 including direct callees):
// Callees: FUN_141e46da0, FUN_140735f40, FUN_14002eb40, FUN_14444c020, FUN_1450228c0, FUN_14521b7f0, FUN_140034860, FUN_1450f0720, FUN_14521bc40, FUN_145647140
//
// Generated decompilation. Formatting follows MiscRef/GTAVSRC conventions;
// identifiers are recovered, not original. See ../../../README.md.

#include "gta6decomp/rage_types.h"


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_14002eb40(longlong param_1,int param_2,longlong *param_3)

{
  byte *pbVar1;
  undefined1 (*pauVar2) [16];
  float *pfVar3;
  byte bVar4;
  byte bVar5;
  ushort uVar6;
  undefined8 uVar7;
  undefined1 auVar8 [16];
  char cVar9;
  ushort uVar10;
  longlong lVar11;
  ulonglong uVar12;
  longlong lVar13;
  undefined1 *puVar14;
  longlong lVar15;
  longlong lVar16;
  int iVar17;
  longlong lVar18;
  ulonglong uVar19;
  longlong lVar20;
  longlong unaff_GS_OFFSET;
  bool bVar21;
  undefined1 auVar22 [16];
  undefined1 auVar23 [16];
  undefined1 auVar24 [16];
  undefined1 auVar25 [16];
  undefined1 auVar26 [16];
  undefined1 auVar27 [16];
  undefined1 auVar28 [16];
  undefined1 auVar29 [16];
  undefined1 auVar30 [16];
  float fVar31;
  float fVar40;
  float fVar41;
  undefined1 auVar32 [16];
  undefined1 auVar33 [16];
  undefined1 auVar34 [16];
  undefined1 auVar35 [16];
  undefined1 auVar36 [16];
  undefined1 auVar37 [16];
  undefined1 auVar38 [16];
  float fVar42;
  undefined1 auVar39 [16];
  undefined1 auVar43 [16];
  undefined1 auVar44 [16];
  undefined1 auVar45 [16];
  undefined1 auVar46 [16];
  undefined1 auVar47 [16];
  undefined1 auVar48 [16];
  undefined1 auVar49 [16];
  undefined1 auVar50 [16];
  undefined1 auVar51 [16];
  float fVar52;
  float fVar56;
  float fVar57;
  float fVar58;
  undefined1 auVar53 [16];
  undefined1 auVar54 [16];
  undefined1 auVar55 [16];
  undefined1 auVar59 [16];
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
  undefined1 in_ZMM6 [64];
  undefined1 auVar70 [64];
  undefined1 auVar71 [16];
  undefined1 in_ZMM7 [64];
  undefined1 auVar72 [64];
  undefined1 auVar73 [16];
  undefined1 in_ZMM8 [64];
  undefined1 auVar74 [64];
  undefined1 in_ZMM9 [64];
  undefined1 auVar75 [16];
  undefined1 in_ZMM10 [64];
  undefined1 auVar76 [64];
  undefined1 auVar77 [64];
  undefined1 in_ZMM12 [64];
  undefined1 auVar78 [64];
  undefined1 auVar79 [16];
  undefined1 in_ZMM15 [64];
  undefined1 auStack_388 [32];
  undefined1 auStack_368 [32];
  undefined1 auStack_348 [32];
  undefined1 auStack_328 [32];
  undefined1 auStack_300 [16];
  longlong lStack_2f0;
  undefined1 *puStack_2e8;
  uint uStack_2e0;
  float fStack_2d8;
  float fStack_2d4;
  float fStack_2d0;
  float fStack_2cc;
  float fStack_2c8;
  float fStack_2c4;
  float fStack_2c0;
  float fStack_2bc;
  undefined1 auStack_2b8 [8];
  float fStack_2b0;
  float fStack_2ac;
  undefined1 auStack_2a8 [8];
  float fStack_2a0;
  float fStack_29c;
  float fStack_298;
  float fStack_294;
  float fStack_290;
  float fStack_28c;
  undefined1 auStack_288 [8];
  float fStack_280;
  float fStack_27c;
  undefined1 auStack_278 [8];
  float fStack_270;
  float fStack_26c;
  undefined8 uStack_268;
  undefined8 uStack_260;
  undefined8 uStack_258;
  undefined8 uStack_250;
  float fStack_248;
  float fStack_244;
  float fStack_240;
  float fStack_23c;
  float fStack_238;
  float fStack_234;
  float fStack_230;
  float fStack_22c;
  float fStack_228;
  float fStack_224;
  float fStack_220;
  float fStack_21c;
  float fStack_218;
  float fStack_214;
  float fStack_210;
  float fStack_20c;
  undefined1 auStack_208 [16];
  undefined1 auStack_1f8 [16];
  undefined1 auStack_1e0 [8];
  longlong lStack_1d8;
  longlong lStack_1d0;
  undefined1 auStack_1c8 [16];
  float fStack_1b8;
  float fStack_1b4;
  float fStack_1b0;
  float fStack_1ac;
  undefined8 uStack_1a8;
  undefined8 uStack_1a0;
  undefined8 uStack_198;
  undefined8 uStack_190;
  undefined1 auStack_17c [4];
  undefined8 uStack_178;
  longlong lStack_170;
  longlong lStack_168;
  longlong *plStack_160;
  longlong lStack_158;
  ulonglong uStack_150;
  uint uStack_148;
  uint uStack_144;
  uint uStack_140;
  uint uStack_13c;
  ulonglong uStack_130;
  longlong lStack_128;
  longlong lStack_120;
  longlong lStack_118;
  longlong lStack_110;
  undefined1 *puStack_108;
  int iStack_fc;
  longlong lStack_f8;
  byte bStack_e9;
  undefined1 auStack_e8 [16];
  undefined1 auStack_d8 [16];
  undefined1 auStack_c8 [16];
  undefined1 auStack_b8 [16];
  undefined1 auStack_a8 [16];
  undefined1 auStack_88 [16];
  undefined1 auStack_58 [16];
  
  puVar14 = auStack_388;
  auStack_58 = in_ZMM15._0_16_;
  auStack_88 = in_ZMM12._0_16_;
  auStack_a8 = in_ZMM10._0_16_;
  auStack_b8 = in_ZMM9._0_16_;
  auStack_c8 = in_ZMM8._0_16_;
  auStack_d8 = in_ZMM7._0_16_;
  auStack_e8 = in_ZMM6._0_16_;
  lVar15 = *(longlong *)(param_1 + 0x170);
  if (lVar15 != 0) {
    lVar11 = *(longlong *)(lVar15 + 0x4a0);
    if (*(longlong *)(lVar15 + 0x4a0) == 0) {
      lVar11 = lVar15;
    }
    uVar6 = *(ushort *)(lVar11 + 0x1d4);
    iStack_fc = param_2;
    if ((ulonglong)uVar6 == 0) {
      puStack_108 = (undefined1 *)0x0;
    }
    else {
      lVar11 = FUN_145647140();
      puVar14 = auStack_388 + -lVar11;
      puStack_108 = auStack_388 + -lVar11;
    }
    auStack_388._8_2_ = uVar6;
    auStack_388._0_8_ = puStack_108;
    auStack_388._10_2_ = 0;
    lStack_f8 = param_1;
    *(longlong **)(puVar14 + -0x10) = param_3;
    *(undefined8 *)(puVar14 + -0x38) = 0x14002ec52;
    FUN_140034860();
    lVar11 = lStack_f8;
    fVar52 = *(float *)(lStack_f8 + 0x14);
    auVar22._4_4_ = fVar52;
    auVar22._0_4_ = fVar52;
    auVar22._8_4_ = fVar52;
    auVar22._12_4_ = fVar52;
    uStack_148 = _DAT_145fc6f10;
    uStack_144 = _DAT_145fc6f10;
    uStack_140 = _DAT_145fc6f10;
    uStack_13c = _DAT_145fc6f10;
    auVar24 = vrcpps_avx(auVar22);
    auVar43._0_4_ = (uint)fVar52 ^ _DAT_145fc6f10;
    auVar43._4_4_ = (uint)fVar52 ^ _DAT_145fc6f10;
    auVar43._8_4_ = (uint)fVar52 ^ _DAT_145fc6f10;
    auVar43._12_4_ = (uint)fVar52 ^ _DAT_145fc6f10;
    fVar57 = auVar24._0_4_;
    fVar58 = auVar24._4_4_;
    fVar31 = auVar24._8_4_;
    fVar56 = auVar24._12_4_;
    auVar24 = vcmpps_avx(auVar22,auVar43,4);
    auVar23._0_4_ =
         (float)(auVar24._0_4_ & (uint)(-((fVar52 * fVar57 - _DAT_145fc6ed8) * fVar57) + fVar57));
    auVar23._4_4_ =
         (float)(auVar24._4_4_ & (uint)(-((fVar52 * fVar58 - _DAT_145fc6ed8) * fVar58) + fVar58));
    auVar23._8_4_ =
         (float)(auVar24._8_4_ & (uint)(-((fVar52 * fVar31 - _DAT_145fc6ed8) * fVar31) + fVar31));
    auVar23._12_4_ =
         (float)(auVar24._12_4_ & (uint)(-((fVar52 * fVar56 - _DAT_145fc6ed8) * fVar56) + fVar56));
    auVar24 = vcmpps_avx(auVar23,ZEXT816(0) << 0x20,4);
    auStack_1c8._4_4_ = _DAT_145fc6f50;
    auStack_1c8._0_4_ = _DAT_145fc6f50;
    auStack_1c8._8_4_ = _DAT_145fc6f50;
    auStack_1c8._12_4_ = _DAT_145fc6f50;
    auVar32 = auStack_1c8;
    if ((((SUB161(auVar24 >> 0x1f,0) & 1) != 0 || (SUB161(auVar24 >> 0x3f,0) & 1) != 0) ||
        (SUB161(auVar24 >> 0x5f,0) & 1) != 0) || auVar24[0xf] < '\0') {
      auVar32._0_4_ = auVar23._0_4_ * _DAT_14615b980 * auVar23._0_4_ * _DAT_14615b980;
      auVar32._4_4_ = auVar23._4_4_ * _DAT_14615b980 * auVar23._4_4_ * _DAT_14615b980;
      auVar32._8_4_ = auVar23._8_4_ * _DAT_14615b980 * auVar23._8_4_ * _DAT_14615b980;
      auVar32._12_4_ = auVar23._12_4_ * _DAT_14615b980 * auVar23._12_4_ * _DAT_14615b980;
    }
    if ((*(ulonglong *)(lStack_f8 + 0x1c) & 4) == 0) {
      auStack_1c8 = auVar32;
    }
    lVar13 = *(longlong *)(lVar15 + 0x108);
    pbVar1 = (byte *)(lVar13 + 0x9c);
    *pbVar1 = *pbVar1 | 4;
    lStack_170 = *(longlong *)(lVar13 + 0x78);
    lStack_118 = *(longlong *)(lVar15 + 0x168);
    lStack_110 = *(longlong *)(*(longlong *)(lVar15 + 0x108) + 0x80);
    lStack_128 = *(longlong *)(*(longlong *)(lStack_f8 + 0x1a8) + 0x28);
    *(undefined8 *)(puVar14 + -0x28) = 0x14002ed43;
    FUN_14521b7f0(lVar11,&fStack_1b8);
    bStack_e9 = *(char *)(lStack_f8 + 0x155) == '\x03';
    cVar9 = *(char *)(lStack_f8 + 0x1bc);
    if (*(char *)(*(longlong *)(*(longlong *)(unaff_GS_OFFSET + 0x58) + (ulonglong)__tls_index * 8)
                 + 8) == '\0') {
      *(undefined8 *)(puVar14 + -0x28) = 0x14002ed8b;
      func_0x0001455db994();
    }
    if (*(longlong *)(**(longlong **)(unaff_GS_OFFSET + 0x58) + 0x1448) == 0) {
      auVar24._0_12_ = ZEXT812(0);
      auVar24._12_4_ = 0;
      auStack_328 = ZEXT1632(auVar24);
      auStack_348 = ZEXT1632(auVar24);
      auStack_368 = ZEXT1632(auVar24);
      auStack_388 = ZEXT1632(auVar24);
    }
    lStack_120 = lVar15;
    if ((ulonglong)*(uint *)(lVar15 + 0x154) == 0) {
      puStack_2e8 = puStack_108;
      uStack_2e0 = (uint)uVar6;
      *(undefined8 *)(puVar14 + -0x28) = 0x14002f6b2;
      FUN_14521bc40(lVar15,auStack_388,&fStack_1b8);
    }
    else {
      auVar8._4_4_ = fStack_1b4;
      auVar8._0_4_ = fStack_1b8;
      auVar8._8_4_ = fStack_1b0;
      auVar8._12_4_ = fStack_1ac;
      bStack_e9 = bStack_e9 & cVar9 < '\0';
      lVar11 = *(longlong *)(lVar15 + 0x158);
      auVar77 = ZEXT1264(ZEXT812(0));
      uStack_150 = (ulonglong)uVar6;
      uStack_130 = 0;
      plStack_160 = param_3;
      lStack_158 = lVar11 + (ulonglong)*(uint *)(lVar15 + 0x154) * 0x18;
      uStack_268 = uStack_1a8;
      uStack_260 = uStack_1a0;
      uStack_258 = uStack_198;
      uStack_250 = uStack_190;
      fStack_248 = fStack_1b0;
      fStack_244 = fStack_1b0;
      fStack_240 = fStack_1b0;
      fStack_23c = fStack_1b0;
      fStack_238 = fStack_1b4;
      fStack_234 = fStack_1b4;
      fStack_230 = fStack_1b4;
      fStack_22c = fStack_1b4;
      fStack_228 = fStack_1b8;
      fStack_224 = fStack_1b8;
      fStack_220 = fStack_1b8;
      fStack_21c = fStack_1b8;
      fStack_218 = fStack_1ac;
      fStack_214 = fStack_1ac;
      fStack_210 = fStack_1ac;
      fStack_20c = fStack_1ac;
      auVar24 = vshufps_avx(auVar8,auVar8,0xd2);
      auStack_208._0_4_ = auVar24._0_4_ ^ uStack_148;
      auStack_208._4_4_ = auVar24._4_4_ ^ uStack_144;
      auStack_208._8_4_ = auVar24._8_4_ ^ uStack_140;
      auStack_208._12_4_ = auVar24._12_4_ ^ uStack_13c;
      auStack_1f8 = vshufps_avx(auVar8,auVar8,0xc9);
      lVar13 = lStack_f8;
      lVar16 = lStack_110;
      lVar18 = lStack_118;
      iVar17 = iStack_fc;
      do {
        if (bStack_e9 == 0) {
          bVar21 = false;
        }
        else {
          bVar21 = *(short *)(lVar11 + 8) == 0;
        }
        lStack_168 = lVar11;
        if ((plStack_160 == (longlong *)0x0) ||
           (lVar16 = lStack_110,
           !(bool)(~bVar21 &
                  (*(uint *)(*plStack_160 +
                            (ulonglong)((uint)(int)*(short *)(lVar11 + 0xe) >> 5) * 4) >>
                   ((int)*(short *)(lVar11 + 0xe) & 0x1fU) & 1) == 0))) {
          uVar19 = (ulonglong)*(ushort *)(lVar11 + 10);
          uVar6 = *(ushort *)(lVar11 + 0xc);
          if (*(ushort *)(lVar11 + 10) < uVar6) {
            uVar12 = (ulonglong)((uint)*(ushort *)(lVar11 + 0x12) * 0x30);
            pfVar3 = (float *)(puStack_108 + uVar12 + 0x20);
            pauVar2 = (undefined1 (*) [16])(puStack_108 + uVar12);
            fStack_2d8 = (float)uStack_258 * *pfVar3;
            fStack_2d4 = uStack_258._4_4_ * pfVar3[1];
            fStack_2d0 = (float)uStack_250 * pfVar3[2];
            fStack_2cc = uStack_250._4_4_ * pfVar3[3];
            auVar24 = *pauVar2;
            auVar33._0_4_ = (uint)auVar24._0_4_ ^ uStack_148;
            auVar33._4_4_ = (uint)auVar24._4_4_ ^ uStack_144;
            auVar33._8_4_ = (uint)auVar24._8_4_ ^ uStack_140;
            auVar33._12_4_ = (uint)auVar24._12_4_ ^ uStack_13c;
            auVar32 = vblendps_avx(auVar33,auVar24,9);
            auVar23 = vshufpd_avx(auVar24,auVar33,1);
            auVar22 = vblendps_avx(auVar33,auVar24,10);
            auVar22 = vshufps_avx(auVar22,auVar22,0x1b);
            auVar34._0_4_ = (float)uStack_258 * *(float *)pauVar2[1];
            auVar34._4_4_ = uStack_258._4_4_ * *(float *)(pauVar2[1] + 4);
            auVar34._8_4_ = (float)uStack_250 * *(float *)(pauVar2[1] + 8);
            auVar34._12_4_ = uStack_250._4_4_ * *(float *)(pauVar2[1] + 0xc);
            auVar32 = vshufps_avx(auVar32,auVar32,0xb1);
            auVar43 = vshufps_avx(auVar34,auVar34,0xd2);
            auVar25._0_4_ =
                 auVar32._0_4_ * fStack_248 +
                 auVar23._0_4_ * fStack_238 +
                 auVar22._0_4_ * fStack_228 + auVar24._0_4_ * fStack_218;
            auVar25._4_4_ =
                 auVar32._4_4_ * fStack_244 +
                 auVar23._4_4_ * fStack_234 +
                 auVar22._4_4_ * fStack_224 + auVar24._4_4_ * fStack_214;
            auVar25._8_4_ =
                 auVar32._8_4_ * fStack_240 +
                 auVar23._8_4_ * fStack_230 +
                 auVar22._8_4_ * fStack_220 + auVar24._8_4_ * fStack_210;
            auVar25._12_4_ =
                 auVar32._12_4_ * fStack_23c +
                 auVar23._12_4_ * fStack_22c +
                 auVar22._12_4_ * fStack_21c + auVar24._12_4_ * fStack_20c;
            auVar24 = vshufps_avx(auVar34,auVar34,0xc9);
            fVar52 = auStack_208._0_4_ * auVar24._0_4_ + auStack_1f8._0_4_ * auVar43._0_4_;
            fVar56 = auStack_208._4_4_ * auVar24._4_4_ + auStack_1f8._4_4_ * auVar43._4_4_;
            fVar57 = auStack_208._8_4_ * auVar24._8_4_ + auStack_1f8._8_4_ * auVar43._8_4_;
            fVar58 = auStack_208._12_4_ * auVar24._12_4_ + auStack_1f8._12_4_ * auVar43._12_4_;
            auVar44._0_4_ = fVar52 + fVar52;
            auVar44._4_4_ = fVar56 + fVar56;
            auVar44._8_4_ = fVar57 + fVar57;
            auVar44._12_4_ = fVar58 + fVar58;
            auVar24 = vshufps_avx(auVar44,auVar44,0xd2);
            auVar32 = vshufps_avx(auVar44,auVar44,0xc9);
            auVar22 = vshufps_avx(auVar25,auVar25,0xff);
            auVar78 = ZEXT1664(auVar22);
            _auStack_288 = vshufps_avx(auVar25,auVar25,0x55);
            fStack_298 = auVar25._0_4_;
            fStack_294 = auVar25._0_4_;
            fStack_290 = auVar25._0_4_;
            fStack_28c = auVar25._0_4_;
            fStack_2c8 = auStack_208._0_4_ * auVar32._0_4_ +
                         auStack_1f8._0_4_ * auVar24._0_4_ +
                         fStack_218 * auVar44._0_4_ + auVar34._0_4_ + (float)uStack_268;
            fStack_2c4 = auStack_208._4_4_ * auVar32._4_4_ +
                         auStack_1f8._4_4_ * auVar24._4_4_ +
                         fStack_214 * auVar44._4_4_ + auVar34._4_4_ + uStack_268._4_4_;
            fStack_2c0 = auStack_208._8_4_ * auVar32._8_4_ +
                         auStack_1f8._8_4_ * auVar24._8_4_ +
                         fStack_210 * auVar44._8_4_ + auVar34._8_4_ + (float)uStack_260;
            fStack_2bc = auStack_208._12_4_ * auVar32._12_4_ +
                         auStack_1f8._12_4_ * auVar24._12_4_ +
                         fStack_20c * auVar44._12_4_ + auVar34._12_4_ + uStack_260._4_4_;
            _auStack_2b8 = vshufps_avx(auVar25,auVar25,0xc9);
            auVar24 = vshufps_avx(auVar25,auVar25,0xd2);
            _auStack_278 = vshufps_avx(auVar25,auVar25,0xaa);
            auStack_2a8._0_4_ = auVar24._0_4_ ^ uStack_148;
            auStack_2a8._4_4_ = auVar24._4_4_ ^ uStack_144;
            fStack_2a0 = (float)(auVar24._8_4_ ^ uStack_140);
            fStack_29c = (float)(auVar24._12_4_ ^ uStack_13c);
            lVar11 = lStack_128;
            do {
              lVar20 = uVar19 * 0x40;
              *(undefined4 *)(*(longlong *)(*(longlong *)(lVar15 + 0x108) + 0x78) + 0x3c + lVar20) =
                   0;
              if (*(char *)(lVar18 + 4 + uVar19 * 6) == '\0') {
                uVar12 = (ulonglong)((uint)*(ushort *)(lVar18 + uVar19 * 6) * 0x50);
                auVar24 = *(undefined1 (*) [16])(lVar11 + uVar12);
                fVar52 = *(float *)(lVar11 + 0xc + uVar12);
                auVar35._0_4_ = auVar24._0_4_ + auVar24._0_4_;
                auVar35._4_4_ = auVar24._4_4_ + auVar24._4_4_;
                auVar35._8_4_ = auVar24._8_4_ + auVar24._8_4_;
                auVar35._12_4_ = auVar24._12_4_ + auVar24._12_4_;
                auVar32 = vshufps_avx(auVar24,auVar24,0xc9);
                auVar24 = vshufps_avx(auVar24,auVar24,0xd2);
                auVar22 = vshufps_avx(auVar35,auVar35,0xc9);
                auVar23 = vshufps_avx(auVar35,auVar35,0xd2);
                auVar65._0_4_ = auVar24._0_4_ * auVar35._0_4_ + auVar22._0_4_ * fVar52;
                auVar65._4_4_ = auVar24._4_4_ * auVar35._4_4_ + auVar22._4_4_ * fVar52;
                auVar65._8_4_ = auVar24._8_4_ * auVar35._8_4_ + auVar22._8_4_ * fVar52;
                auVar65._12_4_ = auVar24._12_4_ * auVar35._12_4_ + auVar22._12_4_ * fVar52;
                auVar53._0_4_ = -(fVar52 * auVar23._0_4_) + auVar32._0_4_ * auVar35._0_4_;
                auVar53._4_4_ = -(fVar52 * auVar23._4_4_) + auVar32._4_4_ * auVar35._4_4_;
                auVar53._8_4_ = -(fVar52 * auVar23._8_4_) + auVar32._8_4_ * auVar35._8_4_;
                auVar53._12_4_ = -(fVar52 * auVar23._12_4_) + auVar32._12_4_ * auVar35._12_4_;
                auVar59._0_4_ =
                     -(auVar23._0_4_ * auVar24._0_4_) -
                     (auVar32._0_4_ * auVar22._0_4_ - _DAT_145fc6ed8);
                auVar59._4_4_ =
                     -(auVar23._4_4_ * auVar24._4_4_) -
                     (auVar32._4_4_ * auVar22._4_4_ - _DAT_145fc6ed8);
                auVar59._8_4_ =
                     -(auVar23._8_4_ * auVar24._8_4_) -
                     (auVar32._8_4_ * auVar22._8_4_ - _DAT_145fc6ed8);
                auVar59._12_4_ =
                     -(auVar23._12_4_ * auVar24._12_4_) -
                     (auVar32._12_4_ * auVar22._12_4_ - _DAT_145fc6ed8);
                auVar24 = vblendps_avx(auVar65,auVar53,2);
                auVar32 = vblendps_avx(auVar59,auVar65,2);
                auVar22 = vblendps_avx(auVar53,auVar59,2);
                auVar23 = vblendps_avx(auVar59,auVar24,3);
                auVar43 = vblendps_avx(auVar53,auVar32,3);
                auVar33 = vunpcklps_avx(auVar32,auVar24);
                auVar32 = vinsertps_avx(auVar53,auVar59,0x6a);
                auVar8 = vunpckhps_avx(auVar53,auVar59);
                auVar44 = auVar77._0_16_;
                auVar25 = vunpckhps_avx(auVar65,auVar44);
                auVar24 = vblendps_avx(auVar65,auVar22,3);
                auVar22 = vunpcklps_avx(auVar8,auVar25);
                auVar8 = vunpcklps_avx(auVar33,auVar32);
                auVar32 = vunpckhps_avx(auVar33,auVar32);
                auVar26._0_4_ =
                     auVar22._0_4_ * auVar22._0_4_ +
                     auVar32._0_4_ * auVar32._0_4_ + auVar8._0_4_ * auVar8._0_4_;
                auVar26._4_4_ =
                     auVar22._4_4_ * auVar22._4_4_ +
                     auVar32._4_4_ * auVar32._4_4_ + auVar8._4_4_ * auVar8._4_4_;
                auVar26._8_4_ =
                     auVar22._8_4_ * auVar22._8_4_ +
                     auVar32._8_4_ * auVar32._8_4_ + auVar8._8_4_ * auVar8._8_4_;
                auVar26._12_4_ =
                     auVar22._12_4_ * auVar22._12_4_ +
                     auVar32._12_4_ * auVar32._12_4_ + auVar8._12_4_ * auVar8._12_4_;
                auVar32 = vrsqrtps_avx(auVar26);
                fVar52 = auVar32._0_4_;
                fVar56 = auVar32._4_4_;
                fVar57 = auVar32._8_4_;
                fVar58 = auVar32._12_4_;
                auVar27._0_4_ = auVar26._0_4_ * auVar26._0_4_;
                auVar27._4_4_ = auVar26._4_4_ * auVar26._4_4_;
                auVar27._8_4_ = auVar26._8_4_ * auVar26._8_4_;
                auVar27._12_4_ = auVar26._12_4_ * auVar26._12_4_;
                auVar32 = vblendps_avx(auVar27,auVar44,8);
                auVar32 = vhaddps_avx(auVar32,auVar32);
                auVar66._0_4_ =
                     (-(_DAT_145fc6edc * fVar52 * fVar52 * auVar26._0_4_) + _DAT_145fc6edc) * fVar52
                     + fVar52;
                auVar66._4_4_ =
                     (-(_DAT_145fc6edc * fVar56 * fVar56 * auVar26._4_4_) + _DAT_145fc6edc) * fVar56
                     + fVar56;
                auVar66._8_4_ =
                     (-(_DAT_145fc6edc * fVar57 * fVar57 * auVar26._8_4_) + _DAT_145fc6edc) * fVar57
                     + fVar57;
                auVar66._12_4_ =
                     (-(_DAT_145fc6edc * fVar58 * fVar58 * auVar26._12_4_) + _DAT_145fc6edc) *
                     fVar58 + fVar58;
                auVar22 = vhaddps_avx(auVar32,auVar32);
                auVar54._0_4_ = auVar66._0_4_ * auVar43._0_4_;
                auVar54._4_4_ = auVar66._0_4_ * auVar43._4_4_;
                auVar54._8_4_ = auVar66._0_4_ * auVar43._8_4_;
                auVar54._12_4_ = auVar66._0_4_ * auVar43._12_4_;
                auVar32 = vshufps_avx(auVar66,auVar66,0x55);
                auVar60._0_4_ = auVar32._0_4_ * auVar24._0_4_;
                auVar60._4_4_ = auVar32._4_4_ * auVar24._4_4_;
                auVar60._8_4_ = auVar32._8_4_ * auVar24._8_4_;
                auVar60._12_4_ = auVar32._12_4_ * auVar24._12_4_;
                auVar24 = vshufps_avx(auVar66,auVar66,0xaa);
                auVar36._0_4_ = auVar24._0_4_ * auVar23._0_4_;
                auVar36._4_4_ = auVar24._4_4_ * auVar23._4_4_;
                auVar36._8_4_ = auVar24._8_4_ * auVar23._8_4_;
                auVar36._12_4_ = auVar24._12_4_ * auVar23._12_4_;
                auVar24 = vblendps_avx(auVar54,auVar60,2);
                auVar32 = vblendps_avx(auVar54,auVar60,3);
                auVar43 = vcmpps_avx(auVar44,auVar22,4);
                auVar24 = vblendps_avx(auVar36,auVar24,3);
                auVar32 = vblendps_avx(auVar32,auVar36,2);
                auVar22 = vshufps_avx(auVar24,auVar24,0x49);
                auVar23 = vshufps_avx(auVar24,auVar24,0x92);
                auVar8 = vshufps_avx(auVar24,auVar24,0x24);
                auVar25 = vshufps_avx(auVar32,auVar32,9);
                auVar67._0_4_ = auVar23._0_4_ + auVar22._0_4_;
                auVar67._4_4_ = auVar23._4_4_ + auVar22._4_4_;
                auVar67._8_4_ = auVar23._8_4_ + auVar22._8_4_;
                auVar67._12_4_ = auVar23._12_4_ + auVar22._12_4_;
                auVar45._0_4_ = auVar67._0_4_ + auVar8._0_4_;
                auVar45._4_4_ = auVar67._4_4_ + auVar8._4_4_;
                auVar45._8_4_ = auVar67._8_4_ + auVar8._8_4_;
                auVar45._12_4_ = auVar67._12_4_ + auVar8._12_4_;
                auVar24 = vsubps_avx(auVar24,auVar67);
                auVar24 = vblendps_avx(auVar24,auVar45,8);
                auVar32 = vcmpps_avx(auVar44,auVar45,1);
                auVar62._0_4_ = _DAT_145fc6ed8 + auVar24._0_4_;
                auVar62._4_4_ = _DAT_145fc6ed8 + auVar24._4_4_;
                auVar62._8_4_ = _DAT_145fc6ed8 + auVar24._8_4_;
                auVar62._12_4_ = _DAT_145fc6ed8 + auVar24._12_4_;
                auVar46._0_4_ = auVar32._0_4_;
                auVar46._4_4_ = auVar46._0_4_;
                auVar46._8_4_ = auVar46._0_4_;
                auVar46._12_4_ = auVar46._0_4_;
                auVar24 = vrsqrtps_avx(auVar62);
                fVar52 = auVar24._0_4_;
                fVar56 = auVar24._4_4_;
                fVar57 = auVar24._8_4_;
                fVar58 = auVar24._12_4_;
                auVar24 = vblendps_avx(auVar60,auVar36,3);
                auVar8 = vshufps_avx(auVar60,auVar60,0x55);
                auVar33 = vshufps_avx(auVar36,auVar36,0xaa);
                auVar24 = vshufps_avx(auVar24,auVar54,0x12);
                auVar55._4_4_ = auVar54._0_4_;
                auVar55._0_4_ = auVar54._0_4_;
                auVar55._8_4_ = auVar54._0_4_;
                auVar55._12_4_ = auVar54._0_4_;
                auVar75._0_4_ = auVar25._0_4_ + auVar24._0_4_;
                auVar75._4_4_ = auVar25._4_4_ + auVar24._4_4_;
                auVar75._8_4_ = auVar25._8_4_ + auVar24._8_4_;
                auVar75._12_4_ = auVar25._12_4_ + auVar24._12_4_;
                auVar34 = vsubps_avx(auVar24,auVar25);
                auVar71._0_4_ =
                     _DAT_145fc6edc *
                     ((-(_DAT_145fc6edc * fVar52 * fVar52 * auVar62._0_4_) + _DAT_145fc6edc) *
                      fVar52 + fVar52);
                auVar71._4_4_ =
                     _DAT_145fc6edc *
                     ((-(_DAT_145fc6edc * fVar56 * fVar56 * auVar62._4_4_) + _DAT_145fc6edc) *
                      fVar56 + fVar56);
                auVar71._8_4_ =
                     _DAT_145fc6edc *
                     ((-(_DAT_145fc6edc * fVar57 * fVar57 * auVar62._8_4_) + _DAT_145fc6edc) *
                      fVar57 + fVar57);
                auVar71._12_4_ =
                     _DAT_145fc6edc *
                     ((-(_DAT_145fc6edc * fVar58 * fVar58 * auVar62._12_4_) + _DAT_145fc6edc) *
                      fVar58 + fVar58);
                auVar24 = vblendps_avx(auVar75,auVar34,1);
                auVar32 = vblendps_avx(auVar75,auVar34,2);
                auVar23 = vshufps_avx(auVar75,auVar34,0xa1);
                auVar25 = vshufps_avx(auVar24,auVar24,0x18);
                auVar22 = vshufpd_avx(auVar32,auVar32,1);
                auVar24 = vblendps_avx(auVar23,auVar62,4);
                auVar32 = vblendps_avx(auVar25,auVar62,1);
                auVar22 = vblendps_avx(auVar22,auVar62,2);
                auVar23 = vblendps_avx(auVar34,auVar62,8);
                auVar25 = vshufps_avx(auVar71,auVar71,0xaa);
                auVar73._0_4_ = auVar71._0_4_ * auVar32._0_4_;
                auVar73._4_4_ = auVar71._0_4_ * auVar32._4_4_;
                auVar73._8_4_ = auVar71._0_4_ * auVar32._8_4_;
                auVar73._12_4_ = auVar71._0_4_ * auVar32._12_4_;
                auVar32 = vshufps_avx(auVar71,auVar71,0x55);
                auVar34 = vshufps_avx(auVar71,auVar71,0xff);
                auVar68._0_4_ = auVar24._0_4_ * auVar25._0_4_;
                auVar68._4_4_ = auVar24._4_4_ * auVar25._4_4_;
                auVar68._8_4_ = auVar24._8_4_ * auVar25._8_4_;
                auVar68._12_4_ = auVar24._12_4_ * auVar25._12_4_;
                auVar79._0_4_ = auVar32._0_4_ * auVar22._0_4_;
                auVar79._4_4_ = auVar32._4_4_ * auVar22._4_4_;
                auVar79._8_4_ = auVar32._8_4_ * auVar22._8_4_;
                auVar79._12_4_ = auVar32._12_4_ * auVar22._12_4_;
                auVar24 = vcmpps_avx(auVar55,auVar8,1);
                auVar32 = vcmpps_avx(auVar8,auVar33,1);
                auVar22 = vcmpps_avx(auVar55,auVar33,1);
                auVar63._0_4_ = auVar34._0_4_ * auVar23._0_4_;
                auVar63._4_4_ = auVar34._4_4_ * auVar23._4_4_;
                auVar63._8_4_ = auVar34._8_4_ * auVar23._8_4_;
                auVar63._12_4_ = auVar34._12_4_ * auVar23._12_4_;
                auVar37._0_4_ = auVar22._0_4_ & auVar32._0_4_;
                auVar37._4_4_ = auVar22._4_4_ & auVar32._4_4_;
                auVar37._8_4_ = auVar22._8_4_ & auVar32._8_4_;
                auVar37._12_4_ = auVar22._12_4_ & auVar32._12_4_;
                auVar24 = vblendvps_avx(auVar73,auVar79,auVar24);
                auVar24 = vblendvps_avx(auVar24,auVar68,auVar37);
                auVar24 = vblendvps_avx(auVar24,auVar63,auVar46);
                fVar52 = auVar24._0_4_;
                auVar47._0_4_ = fVar52 * fVar52;
                fVar57 = auVar24._4_4_;
                auVar47._4_4_ = fVar57 * fVar57;
                fVar31 = auVar24._8_4_;
                auVar47._8_4_ = fVar31 * fVar31;
                fVar41 = auVar24._12_4_;
                auVar47._12_4_ = fVar41 * fVar41;
                auVar24 = vhaddps_avx(auVar47,auVar47);
                auVar24 = vhaddps_avx(auVar24,auVar24);
                auVar32 = vrsqrtps_avx(auVar24);
                fVar56 = auVar32._0_4_;
                fVar58 = auVar32._4_4_;
                fVar40 = auVar32._8_4_;
                fVar42 = auVar32._12_4_;
                auVar38._0_4_ =
                     fVar52 * ((-(_DAT_145fc6edc * fVar56 * fVar56 * auVar24._0_4_) + _DAT_145fc6edc
                               ) * fVar56 + fVar56);
                auVar38._4_4_ =
                     fVar57 * ((-(_DAT_145fc6edc * fVar58 * fVar58 * auVar24._4_4_) + _DAT_145fc6edc
                               ) * fVar58 + fVar58);
                auVar38._8_4_ =
                     fVar31 * ((-(_DAT_145fc6edc * fVar40 * fVar40 * auVar24._8_4_) + _DAT_145fc6edc
                               ) * fVar40 + fVar40);
                auVar38._12_4_ =
                     fVar41 * ((-(_DAT_145fc6edc * fVar42 * fVar42 * auVar24._12_4_) +
                               _DAT_145fc6edc) * fVar42 + fVar42);
                auVar32 = vblendvps_avx(_DAT_145fc6ee0,auVar38,auVar43);
                pfVar3 = (float *)(lVar11 + 0x10 + uVar12);
                auVar28._0_4_ = fStack_2d8 * *pfVar3;
                auVar28._4_4_ = fStack_2d4 * pfVar3[1];
                auVar28._8_4_ = fStack_2d0 * pfVar3[2];
                auVar28._12_4_ = fStack_2cc * pfVar3[3];
                pauVar2 = (undefined1 (*) [16])(lVar16 + lVar20);
                auVar24 = vshufps_avx(auVar28,auVar28,0xd2);
                auVar22 = vshufps_avx(auVar28,auVar28,0xc9);
                fVar52 = (float)auStack_2a8._0_4_ * auVar22._0_4_ +
                         auVar24._0_4_ * (float)auStack_2b8._0_4_;
                fVar56 = (float)auStack_2a8._4_4_ * auVar22._4_4_ +
                         auVar24._4_4_ * (float)auStack_2b8._4_4_;
                fVar57 = fStack_2a0 * auVar22._8_4_ + auVar24._8_4_ * fStack_2b0;
                fVar58 = fStack_29c * auVar22._12_4_ + auVar24._12_4_ * fStack_2ac;
                auVar48._0_4_ = fVar52 + fVar52;
                auVar48._4_4_ = fVar56 + fVar56;
                auVar48._8_4_ = fVar57 + fVar57;
                auVar48._12_4_ = fVar58 + fVar58;
                auVar24 = vshufps_avx(auVar48,auVar48,0xd2);
                auVar22 = vshufps_avx(auVar48,auVar48,0xc9);
                auVar49._0_4_ = (uint)auVar32._0_4_ ^ uStack_148;
                auVar49._4_4_ = (uint)auVar32._4_4_ ^ uStack_144;
                auVar49._8_4_ = (uint)auVar32._8_4_ ^ uStack_140;
                auVar49._12_4_ = (uint)auVar32._12_4_ ^ uStack_13c;
                auVar29._0_4_ =
                     (float)auStack_2a8._0_4_ * auVar22._0_4_ +
                     (float)auStack_2b8._0_4_ * auVar24._0_4_ +
                     auVar78._0_4_ * auVar48._0_4_ + auVar28._0_4_ + fStack_2c8;
                auVar29._4_4_ =
                     (float)auStack_2a8._4_4_ * auVar22._4_4_ +
                     (float)auStack_2b8._4_4_ * auVar24._4_4_ +
                     auVar78._4_4_ * auVar48._4_4_ + auVar28._4_4_ + fStack_2c4;
                auVar29._8_4_ =
                     fStack_2a0 * auVar22._8_4_ +
                     fStack_2b0 * auVar24._8_4_ +
                     auVar78._8_4_ * auVar48._8_4_ + auVar28._8_4_ + fStack_2c0;
                auVar29._12_4_ =
                     fStack_29c * auVar22._12_4_ +
                     fStack_2ac * auVar24._12_4_ +
                     auVar78._12_4_ * auVar48._12_4_ + auVar28._12_4_ + fStack_2bc;
                auVar24 = vblendps_avx(auVar49,auVar32,10);
                auVar23 = vshufps_avx(auVar24,auVar24,0x1b);
                auVar22 = vshufpd_avx(auVar32,auVar49,1);
                auVar24 = vblendps_avx(auVar49,auVar32,9);
                auVar43 = vshufps_avx(auVar24,auVar24,0xb1);
                auVar24 = vblendps_avx(auVar29,auVar44,8);
                fVar31 = auVar43._0_4_ * (float)auStack_278._0_4_ +
                         auVar22._0_4_ * (float)auStack_288._0_4_ +
                         auVar23._0_4_ * fStack_298 + auVar78._0_4_ * auVar32._0_4_;
                fVar40 = auVar43._4_4_ * (float)auStack_278._4_4_ +
                         auVar22._4_4_ * (float)auStack_288._4_4_ +
                         auVar23._4_4_ * fStack_294 + auVar78._4_4_ * auVar32._4_4_;
                fVar41 = auVar43._8_4_ * fStack_270 +
                         auVar22._8_4_ * fStack_280 +
                         auVar23._8_4_ * fStack_290 + auVar78._8_4_ * auVar32._8_4_;
                fVar42 = auVar43._12_4_ * fStack_26c +
                         auVar22._12_4_ * fStack_27c +
                         auVar23._12_4_ * fStack_28c + auVar78._12_4_ * auVar32._12_4_;
                auVar50._0_4_ = fVar31 * fVar31;
                auVar50._4_4_ = fVar40 * fVar40;
                auVar50._8_4_ = fVar41 * fVar41;
                auVar50._12_4_ = fVar42 * fVar42;
                auVar32 = vhaddps_avx(auVar50,auVar50);
                auVar32 = vhaddps_avx(auVar32,auVar32);
                auVar22 = vrsqrtps_avx(auVar32);
                fVar52 = auVar22._0_4_;
                fVar56 = auVar22._4_4_;
                fVar57 = auVar22._8_4_;
                fVar58 = auVar22._12_4_;
                auVar39._0_4_ =
                     fVar31 * ((-(_DAT_145fc6edc * fVar52 * fVar52 * auVar32._0_4_) + _DAT_145fc6edc
                               ) * fVar52 + fVar52);
                auVar39._4_4_ =
                     fVar40 * ((-(_DAT_145fc6edc * fVar56 * fVar56 * auVar32._4_4_) + _DAT_145fc6edc
                               ) * fVar56 + fVar56);
                auVar39._8_4_ =
                     fVar41 * ((-(_DAT_145fc6edc * fVar57 * fVar57 * auVar32._8_4_) + _DAT_145fc6edc
                               ) * fVar57 + fVar57);
                auVar39._12_4_ =
                     fVar42 * ((-(_DAT_145fc6edc * fVar58 * fVar58 * auVar32._12_4_) +
                               _DAT_145fc6edc) * fVar58 + fVar58);
                auVar51._0_4_ = auVar39._0_4_ + auVar39._0_4_;
                auVar51._4_4_ = auVar39._4_4_ + auVar39._4_4_;
                auVar51._8_4_ = auVar39._8_4_ + auVar39._8_4_;
                auVar51._12_4_ = auVar39._12_4_ + auVar39._12_4_;
                auVar32 = vshufps_avx(auVar39,auVar39,0xff);
                auVar22 = vshufps_avx(auVar39,auVar39,0xc9);
                auVar23 = vshufps_avx(auVar39,auVar39,0xd2);
                auVar43 = vshufps_avx(auVar51,auVar51,0xc9);
                auVar69._0_4_ = auVar23._0_4_ * auVar51._0_4_ + auVar43._0_4_ * auVar32._0_4_;
                auVar69._4_4_ = auVar23._4_4_ * auVar51._4_4_ + auVar43._4_4_ * auVar32._4_4_;
                auVar69._8_4_ = auVar23._8_4_ * auVar51._8_4_ + auVar43._8_4_ * auVar32._8_4_;
                auVar69._12_4_ = auVar23._12_4_ * auVar51._12_4_ + auVar43._12_4_ * auVar32._12_4_;
                auVar8 = vshufps_avx(auVar51,auVar51,0xd2);
                auVar61._0_4_ = -(auVar32._0_4_ * auVar8._0_4_) + auVar22._0_4_ * auVar51._0_4_;
                auVar61._4_4_ = -(auVar32._4_4_ * auVar8._4_4_) + auVar22._4_4_ * auVar51._4_4_;
                auVar61._8_4_ = -(auVar32._8_4_ * auVar8._8_4_) + auVar22._8_4_ * auVar51._8_4_;
                auVar61._12_4_ = -(auVar32._12_4_ * auVar8._12_4_) + auVar22._12_4_ * auVar51._12_4_
                ;
                auVar64._0_4_ =
                     -(auVar8._0_4_ * auVar23._0_4_) -
                     (auVar22._0_4_ * auVar43._0_4_ - _DAT_145fc6ed8);
                auVar64._4_4_ =
                     -(auVar8._4_4_ * auVar23._4_4_) -
                     (auVar22._4_4_ * auVar43._4_4_ - _DAT_145fc6ed8);
                auVar64._8_4_ =
                     -(auVar8._8_4_ * auVar23._8_4_) -
                     (auVar22._8_4_ * auVar43._8_4_ - _DAT_145fc6ed8);
                auVar64._12_4_ =
                     -(auVar8._12_4_ * auVar23._12_4_) -
                     (auVar22._12_4_ * auVar43._12_4_ - _DAT_145fc6ed8);
                auVar32 = vblendps_avx(auVar69,auVar61,2);
                auVar22 = vblendps_avx(auVar64,auVar69,2);
                auVar23 = vblendps_avx(auVar61,auVar64,2);
                auVar32 = vblendps_avx(auVar64,auVar32,3);
                auVar22 = vblendps_avx(auVar61,auVar22,3);
                auVar23 = vblendps_avx(auVar69,auVar23,3);
                if (iVar17 == 0) {
                  *pauVar2 = auVar22;
                  pauVar2[1] = auVar23;
                  pauVar2[2] = auVar32;
                  pauVar2[3] = auVar24;
                }
                else {
                  auVar43 = vsubps_avx(pauVar2[3],auVar24);
                  auVar30._0_4_ = auVar43._0_4_ * auVar43._0_4_;
                  auVar30._4_4_ = auVar43._4_4_ * auVar43._4_4_;
                  auVar30._8_4_ = auVar43._8_4_ * auVar43._8_4_;
                  auVar30._12_4_ = auVar43._12_4_ * auVar43._12_4_;
                  auVar43 = vblendps_avx(auVar30,auVar44,8);
                  auVar43 = vhaddps_avx(auVar43,auVar43);
                  auVar43 = vhaddps_avx(auVar43,auVar43);
                  auVar43 = vcmpps_avx(auStack_1c8,auVar43,5);
                  if ((((SUB161(auVar43 >> 0x1f,0) & 1) == 0 && (SUB161(auVar43 >> 0x3f,0) & 1) == 0
                       ) && (SUB161(auVar43 >> 0x5f,0) & 1) == 0) && -1 < auVar43[0xf]) {
                    *pauVar2 = auVar22;
                    pauVar2[1] = auVar23;
                    pauVar2[2] = auVar32;
                    pauVar2[3] = auVar24;
                    auVar24 = vinsertps_avx(auVar24,ZEXT416(_DAT_145f43778),0x30);
                    uStack_130 = CONCAT71((int7)((ulonglong)pauVar2 >> 8),1);
                    if (*(longlong *)(lVar13 + 0x38) != 0) {
                      auVar70 = ZEXT1664(auVar23);
                      auVar72 = ZEXT1664(auVar32);
                      auVar74 = ZEXT1664(auVar22);
                      auVar76 = ZEXT1664(auVar24);
                      auVar77 = ZEXT1664(auVar44);
                      auVar78 = ZEXT1664(auVar78._0_16_);
                      *(undefined8 *)(puVar14 + -0x28) = 0x14002f42b;
                      FUN_1450f0720(auStack_300);
                      if (lStack_2f0 != 0) {
                        for (lVar15 = *(longlong *)(lStack_2f0 + 0x90); lVar15 != 0;
                            lVar15 = *(longlong *)(lVar15 + 0x98)) {
                          uVar7 = *(undefined8 *)(lVar15 + 0xb0);
                          uVar10 = 0xffff;
                          uVar12 = (ulonglong)(((uint)uVar7 & 0xffff) << 4);
                          if (((*(short *)(*(longlong *)(_DAT_14abbf348 + 0x28) + 8 + uVar12) ==
                                (short)((ulonglong)uVar7 >> 0x10)) &&
                              (*(longlong *)(*(longlong *)(_DAT_14abbf348 + 0x28) + uVar12) != 0))
                             && (uVar10 = 0xfffe, (short)((ulonglong)uVar7 >> 0x20) != -2)) {
                            *(undefined8 *)(puVar14 + -0x28) = 0x14002f49b;
                            uVar10 = func_0x0001403dc2f0();
                          }
                          if (uVar19 == uVar10) {
                            uVar7 = *(undefined8 *)(lVar15 + 0x80);
                            *(undefined8 *)(puVar14 + -0x28) = 0x14002f4c2;
                            FUN_1450f0720(auStack_1e0,uVar7);
                            for (lVar11 = lStack_1d0; lVar13 = lStack_1d8, lVar16 = lStack_1d0,
                                lVar11 != 0; lVar11 = *(longlong *)(lVar11 + 0x88)) {
                              if (*(longlong *)(lVar11 + 0x98) != 0) {
                                lVar11 = *(longlong *)(*(longlong *)(lVar11 + 0x98) + 0x80);
                                goto LAB_14002f4ff;
                              }
                            }
                            lVar11 = 0;
LAB_14002f4ff:
                            if (lVar13 != lVar11) {
                              if ((*(byte *)(*(longlong *)(lVar13 + 0x38) + 0xce) & 4) != 0) {
                                auStack_17c[0] = 0;
                                uStack_178 = 0;
                                *(undefined8 *)(puVar14 + -0x28) = 0x14002f52f;
                                FUN_141e46da0(lVar13,auStack_17c);
                              }
                              if (lVar16 == 0) {
                                lVar16 = 0;
LAB_14002f552:
                                lVar13 = 0;
                              }
                              else {
                                lVar18 = *(longlong *)(lVar16 + 0xa0);
                                if (lVar18 == 0) goto LAB_14002f552;
                                lVar13 = *(longlong *)(lVar18 + 0x80);
                                lVar16 = lVar18;
                              }
                              goto LAB_14002f4ff;
                            }
                            *(undefined8 *)(puVar14 + -0x28) = 0x14002f566;
                            FUN_140735f40(auStack_1e0);
                          }
                        }
                      }
                      *(undefined8 *)(puVar14 + -0x28) = 0x14002f598;
                      FUN_140735f40(auStack_300);
                      auVar24 = auVar76._0_16_;
                      auVar32 = auVar72._0_16_;
                      auVar23 = auVar70._0_16_;
                      auVar22 = auVar74._0_16_;
                      lVar13 = lStack_f8;
                      lVar15 = lStack_120;
                      lVar11 = lStack_128;
                      lVar16 = lStack_110;
                      lVar18 = lStack_118;
                      iVar17 = iStack_fc;
                    }
                  }
                }
                *(undefined1 (*) [16])(lStack_170 + lVar20) = auVar22;
                *(undefined1 (*) [16])(lStack_170 + 0x10 + lVar20) = auVar23;
                *(undefined1 (*) [16])(lStack_170 + 0x20 + lVar20) = auVar32;
                *(undefined1 (*) [16])(lStack_170 + 0x30 + lVar20) = auVar24;
                *(uint *)(auStack_388 + (uVar19 >> 5 & 0x7ffffff) * 4) =
                     *(uint *)(auStack_388 + (uVar19 >> 5 & 0x7ffffff) * 4) |
                     1 << ((uint)uVar19 & 0x1f);
              }
              uVar19 = uVar19 + 1;
            } while (uVar19 != uVar6);
          }
        }
        param_3 = plStack_160;
        lVar11 = lStack_168 + 0x18;
      } while (lVar11 != lStack_158);
      puStack_2e8 = puStack_108;
      uStack_2e0 = (uint)uStack_150;
      *(undefined8 *)(puVar14 + -0x28) = 0x14002f65a;
      FUN_14521bc40(lVar15,auStack_388,&fStack_1b8);
      lVar11 = lStack_f8;
      if (((uStack_130 & 1) != 0) && ((*(byte *)(lStack_f8 + 0x1ba) & 8) != 0)) {
        *(undefined8 *)(puVar14 + -0x28) = 0x14002f684;
        FUN_1450228c0(lVar11,0);
      }
    }
    lVar11 = lStack_f8;
    bVar4 = *(byte *)(lStack_f8 + 0x1c);
    bVar5 = *(byte *)(lVar15 + 0x51b);
    *(undefined8 *)(puVar14 + -0x28) = 0x14002f6dd;
    FUN_14444c020(lVar11,auStack_388,(bVar4 & 4) == 0,(bVar5 & 8) == 0);
    iVar17 = iStack_fc;
    lVar11 = lStack_120;
    for (lVar15 = *(longlong *)(lVar15 + 0x488); lStack_120 = lVar11, lVar15 != 0;
        lVar15 = *(longlong *)(lVar15 + 0x478)) {
      uVar7 = *(undefined8 *)(lVar15 + 0x100);
      *(undefined8 *)(puVar14 + -0x28) = 0x14002f708;
      FUN_14002eb40(uVar7,iVar17,param_3);
      lVar11 = lStack_120;
    }
    *(undefined4 *)(lVar11 + 0x4ec) = _DAT_146d82780;
    *(undefined8 *)(puVar14 + -0x28) = 0x14002f737;
    cVar9 = func_0x0001450227f0(lVar11);
    if (cVar9 != '\0') {
      *(undefined8 *)(puVar14 + -0x28) = 0x14002f74d;
      func_0x000145022920(lVar11,1);
    }
  }
  return;
}

