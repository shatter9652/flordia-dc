// Recovered from game_scarlett_master.exe (GTA VI, Xbox Series X, PE32+ x64)
// Address: 1400aee10  size: 3856 bytes
// Name:    FUN_1400aee10
// Subsystem: core
//
// Referenced strings (0 in this body, 0 including direct callees):
// Callees: FUN_1402b41b0, FUN_1400b0140, FUN_142e7b500, FUN_1400affa0, FUN_144e258f0, FUN_145ece240, FUN_144f37b70, FUN_1402b1ef0, FUN_144f37c20, FUN_1400afd30, FUN_142e7b1f0
//
// Generated decompilation. Formatting follows MiscRef/GTAVSRC conventions;
// identifiers are recovered, not original. See ../../../README.md.

#include "gta6decomp/rage_types.h"


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1400aee10(longlong param_1,undefined8 *param_2,undefined8 param_3)

{
  undefined8 *puVar1;
  undefined1 auVar2 [32];
  undefined1 auVar3 [32];
  uint uVar4;
  uint uVar5;
  longlong *plVar6;
  bool bVar7;
  undefined1 auVar8 [16];
  undefined8 uVar9;
  undefined8 uVar10;
  undefined8 uVar11;
  undefined8 uVar12;
  undefined8 uVar13;
  undefined8 uVar14;
  undefined8 uVar15;
  undefined8 uVar16;
  undefined8 uVar17;
  undefined1 auVar18 [16];
  undefined1 auVar19 [16];
  int iVar20;
  undefined1 auVar21 [24];
  int iVar22;
  int iVar23;
  char cVar24;
  undefined4 uVar25;
  longlong lVar26;
  longlong lVar27;
  undefined8 uVar28;
  ulonglong uVar29;
  ulonglong uVar30;
  longlong lVar31;
  longlong lVar32;
  undefined8 *puVar33;
  undefined2 uVar34;
  longlong unaff_GS_OFFSET;
  float fVar35;
  float fVar44;
  float fVar45;
  float fVar46;
  undefined1 auVar36 [16];
  undefined1 auVar37 [16];
  undefined1 auVar38 [16];
  undefined1 auVar39 [16];
  undefined1 auVar40 [16];
  undefined1 auVar41 [16];
  undefined1 auVar42 [16];
  undefined1 auVar43 [16];
  short sVar47;
  short sVar54;
  undefined1 auVar48 [16];
  undefined1 auVar49 [16];
  undefined1 auVar50 [16];
  undefined1 auVar51 [16];
  undefined1 auVar52 [16];
  undefined1 auVar53 [16];
  float fVar55;
  float fVar59;
  float fVar60;
  float fVar61;
  undefined1 auVar56 [16];
  undefined1 auVar57 [16];
  undefined1 auVar58 [16];
  undefined1 auVar62 [16];
  undefined1 auVar63 [16];
  undefined1 auVar64 [16];
  float fVar65;
  float fVar69;
  float fVar70;
  undefined1 auVar66 [16];
  float fVar71;
  undefined1 auVar67 [16];
  undefined1 auVar68 [16];
  undefined1 auVar72 [16];
  undefined1 auVar73 [16];
  undefined1 auVar74 [64];
  undefined8 uVar75;
  undefined8 uVar77;
  undefined1 auVar76 [64];
  undefined1 in_ZMM8 [64];
  undefined1 auVar78 [64];
  undefined1 auVar79 [16];
  undefined1 auVar80 [16];
  undefined1 in_ZMM9 [64];
  undefined1 auVar81 [64];
  undefined1 auVar82 [16];
  undefined1 in_ZMM10 [64];
  undefined1 auVar83 [64];
  undefined1 auVar84 [16];
  undefined1 auVar85 [64];
  undefined1 auVar86 [64];
  undefined1 auVar87 [16];
  undefined1 auVar89 [64];
  undefined1 auVar90 [64];
  longlong *in_stack_fffffffffffffb80;
  undefined1 in_stack_fffffffffffffb88 [16];
  undefined1 auVar91 [16];
  longlong lStack_460;
  undefined1 auStack_458 [16];
  undefined1 auStack_448 [8];
  float fStack_440;
  float fStack_43c;
  float fStack_438;
  float fStack_434;
  float fStack_430;
  float fStack_42c;
  undefined1 auStack_428 [8];
  float fStack_420;
  float fStack_41c;
  undefined1 *puStack_418;
  int iStack_410;
  undefined1 auStack_408 [16];
  undefined1 auStack_3f8 [8];
  float fStack_3f0;
  float fStack_3ec;
  undefined1 auStack_3e8 [8];
  float fStack_3e0;
  float fStack_3dc;
  float fStack_3d8;
  float fStack_3d4;
  float fStack_3d0;
  undefined1 auStack_3c8 [16];
  longlong alStack_3b8 [3];
  undefined8 uStack_3a0;
  undefined8 uStack_398;
  undefined8 uStack_390;
  undefined8 uStack_388;
  undefined2 uStack_380;
  undefined2 uStack_37e;
  undefined4 uStack_37c;
  undefined8 uStack_378;
  char cStack_370;
  undefined7 uStack_36f;
  undefined1 auStack_368 [20];
  ulonglong uStack_354;
  float fStack_348;
  float fStack_344;
  float fStack_340;
  undefined8 uStack_338;
  ulonglong uStack_330;
  undefined1 auStack_308 [32];
  undefined8 uStack_2e8;
  undefined8 uStack_2e0;
  undefined4 uStack_2d8;
  undefined4 uStack_2d4;
  undefined4 uStack_2d0;
  undefined4 uStack_2cc;
  undefined4 uStack_2c8;
  undefined4 uStack_2c4;
  undefined4 uStack_2c0;
  undefined4 uStack_2bc;
  undefined4 uStack_2b8;
  undefined2 uStack_2b4;
  undefined2 uStack_2b2;
  char cStack_2b0;
  byte bStack_2af;
  undefined6 uStack_2ae;
  undefined1 auStack_2a8 [32];
  float fStack_288;
  float fStack_284;
  float fStack_280;
  float fStack_27c;
  undefined1 auStack_278 [16];
  undefined8 uStack_268;
  undefined8 uStack_260;
  undefined8 uStack_258;
  undefined8 uStack_250;
  undefined1 auStack_248 [16];
  undefined1 auStack_238 [16];
  undefined1 auStack_228 [16];
  float fStack_218;
  float fStack_214;
  float fStack_210;
  float fStack_20c;
  float fStack_208;
  float fStack_204;
  float fStack_200;
  float fStack_1fc;
  float fStack_1f8;
  float fStack_1f4;
  float fStack_1f0;
  float fStack_1ec;
  float fStack_1e8;
  float fStack_1e4;
  float fStack_1e0;
  float fStack_1dc;
  undefined1 auStack_1d8 [32];
  undefined1 auStack_1b8 [16];
  undefined8 uStack_1a8;
  undefined8 uStack_1a0;
  undefined8 uStack_198;
  undefined8 uStack_190;
  undefined8 uStack_188;
  undefined8 uStack_180;
  undefined1 *puStack_178;
  int iStack_170;
  undefined8 uStack_168;
  undefined8 uStack_160;
  undefined8 uStack_158;
  undefined8 uStack_150;
  undefined8 uStack_148;
  undefined8 uStack_140;
  undefined8 uStack_138;
  undefined8 uStack_130;
  undefined1 auStack_128 [32];
  undefined1 auStack_100 [16];
  int iStack_f0;
  undefined1 auStack_c8 [16];
  undefined1 auStack_b8 [16];
  undefined1 auStack_a8 [16];
  undefined1 auVar88 [64];
  
  auStack_a8 = in_ZMM10._0_16_;
  auStack_b8 = in_ZMM9._0_16_;
  auStack_c8 = in_ZMM8._0_16_;
  lVar26 = *(longlong *)(param_1 + 0x20);
  uVar75 = *(undefined8 *)(lVar26 + 0x50);
  uVar77 = *(undefined8 *)(lVar26 + 0x58);
  uVar28 = *(undefined8 *)(lVar26 + 0x60);
  uVar9 = *(undefined8 *)(lVar26 + 0x68);
  uVar10 = *(undefined8 *)(lVar26 + 0x70);
  uVar11 = *(undefined8 *)(lVar26 + 0x78);
  uVar12 = *(undefined8 *)(lVar26 + 0x80);
  uVar13 = *(undefined8 *)(lVar26 + 0x88);
  uVar14 = *(undefined8 *)(lVar26 + 0x90);
  uVar15 = *(undefined8 *)(lVar26 + 0x98);
  uVar16 = *(undefined8 *)(lVar26 + 0xa0);
  uVar17 = *(undefined8 *)(lVar26 + 0xa8);
  *(undefined1 (*) [32])(param_2 + 10) = *(undefined1 (*) [32])(lVar26 + 0xa0);
  param_2[8] = uVar14;
  param_2[9] = uVar15;
  param_2[10] = uVar16;
  param_2[0xb] = uVar17;
  param_2[4] = uVar10;
  param_2[5] = uVar11;
  param_2[6] = uVar12;
  param_2[7] = uVar13;
  *param_2 = uVar75;
  param_2[1] = uVar77;
  param_2[2] = uVar28;
  param_2[3] = uVar9;
  if ((undefined8 *)(lVar26 + 0xc0) != param_2 + 0xe) {
    *(undefined4 *)((longlong)param_2 + 0x74) = 0;
    uVar4 = *(uint *)(lVar26 + 0xc4);
    if ((ulonglong)uVar4 != 0) {
      lVar27 = *(longlong *)(lVar26 + 200);
      FUN_145ece240();
      lVar32 = param_2[0xf];
      lVar31 = 0;
      do {
        puVar33 = (undefined8 *)(lVar32 + lVar31);
        if (puVar33 != (undefined8 *)0x0) {
          puVar1 = (undefined8 *)(lVar27 + lVar31);
          uVar75 = *puVar1;
          uVar77 = puVar1[1];
          uVar28 = puVar1[2];
          uVar9 = puVar1[3];
          uVar10 = puVar1[4];
          uVar11 = puVar1[5];
          uVar12 = puVar1[6];
          uVar13 = puVar1[7];
          uVar14 = puVar1[9];
          uVar15 = puVar1[10];
          uVar16 = puVar1[0xb];
          puVar33[8] = puVar1[8];
          puVar33[9] = uVar14;
          puVar33[10] = uVar15;
          puVar33[0xb] = uVar16;
          puVar33[4] = uVar10;
          puVar33[5] = uVar11;
          puVar33[6] = uVar12;
          puVar33[7] = uVar13;
          *puVar33 = uVar75;
          puVar33[1] = uVar77;
          puVar33[2] = uVar28;
          puVar33[3] = uVar9;
          uVar75 = puVar1[0xc];
          uVar77 = puVar1[0xd];
          uVar28 = puVar1[0xe];
          uVar9 = puVar1[0xf];
          uVar10 = puVar1[0x10];
          uVar11 = puVar1[0x11];
          uVar12 = puVar1[0x12];
          uVar13 = puVar1[0x13];
          uVar14 = puVar1[0x14];
          uVar15 = puVar1[0x15];
          uVar16 = puVar1[0x16];
          uVar17 = puVar1[0x17];
          *(undefined1 (*) [32])(lVar32 + 0xbc + lVar31) =
               *(undefined1 (*) [32])((longlong)puVar1 + 0xbc);
          puVar33 = (undefined8 *)(lVar32 + 0xa0 + lVar31);
          *puVar33 = uVar14;
          puVar33[1] = uVar15;
          puVar33[2] = uVar16;
          puVar33[3] = uVar17;
          puVar33 = (undefined8 *)(lVar32 + 0x80 + lVar31);
          *puVar33 = uVar10;
          puVar33[1] = uVar11;
          puVar33[2] = uVar12;
          puVar33[3] = uVar13;
          puVar33 = (undefined8 *)(lVar32 + 0x60 + lVar31);
          *puVar33 = uVar75;
          puVar33[1] = uVar77;
          puVar33[2] = uVar28;
          puVar33[3] = uVar9;
          *(undefined4 *)(lVar32 + 0xdc + lVar31) = *(undefined4 *)((longlong)puVar1 + 0xdc);
          uVar75 = puVar1[0x1c];
          uVar77 = puVar1[0x1d];
          uVar28 = puVar1[0x1e];
          uVar9 = puVar1[0x1f];
          uVar10 = *(undefined8 *)((longlong)puVar1 + 0xfd);
          uVar11 = *(undefined8 *)((longlong)puVar1 + 0x105);
          uVar12 = *(undefined8 *)((longlong)puVar1 + 0x10d);
          puVar33 = (undefined8 *)(lVar32 + 0xf5 + lVar31);
          *puVar33 = *(undefined8 *)((longlong)puVar1 + 0xf5);
          puVar33[1] = uVar10;
          puVar33[2] = uVar11;
          puVar33[3] = uVar12;
          puVar33 = (undefined8 *)(lVar32 + 0xe0 + lVar31);
          *puVar33 = uVar75;
          puVar33[1] = uVar77;
          puVar33[2] = uVar28;
          puVar33[3] = uVar9;
        }
        lVar31 = lVar31 + 0x120;
      } while ((ulonglong)uVar4 * 0x120 != lVar31);
      *(uint *)((longlong)param_2 + 0x74) = uVar4;
    }
  }
  param_2[0x10] = *(undefined8 *)(lVar26 + 0xd0);
  uVar75 = *(undefined8 *)(lVar26 + 0xe0);
  uVar77 = *(undefined8 *)(lVar26 + 0xe8);
  uVar28 = *(undefined8 *)(lVar26 + 0xf0);
  auVar2 = *(undefined1 (*) [32])(lVar26 + 0xf8);
  auVar3 = *(undefined1 (*) [32])(lVar26 + 0x118);
  param_2[0x11] = *(undefined8 *)(lVar26 + 0xd8);
  param_2[0x12] = uVar75;
  param_2[0x13] = uVar77;
  param_2[0x14] = uVar28;
  *(undefined1 (*) [32])(param_2 + 0x15) = auVar2;
  *(undefined1 (*) [32])(param_2 + 0x19) = auVar3;
  uVar75 = *(undefined8 *)(lVar26 + 0x140);
  param_2[0x1d] = *(undefined8 *)(lVar26 + 0x138);
  param_2[0x1e] = uVar75;
  func_0x0001400afd20(param_2,param_3);
  if (*(int *)(*(longlong *)(param_1 + 0x20) + 0x14c) == 0) {
    auVar43._4_4_ = _DAT_145fc6f48;
    auVar43._0_4_ = _DAT_145fc6f48;
    auVar43._8_4_ = _DAT_145fc6f48;
    auVar43._12_4_ = _DAT_145fc6f48;
    alStack_3b8[2] = vmovlps_avx(auVar43);
    uStack_3a0._0_4_ = 0xbf800000;
    uStack_3a0._4_4_ = 0;
    uStack_398 = 0;
    uStack_390 = 0;
    uStack_388 = 0;
    uStack_380 = 0;
    uStack_37e = 0;
    uStack_37c = 0;
    uStack_378._0_2_ = 0;
    cStack_370 = (char)_DAT_14615da80;
    uStack_36f = (undefined7)((ulonglong)_DAT_14615da80 >> 8);
    auStack_368._0_8_ = _UNK_14615da88;
    fStack_348 = (float)((uint)fStack_348 & 0xffffff00);
    stack0xfffffffffffffca8 = ZEXT816(0) << 0x20;
    fStack_344 = _DAT_145fc6ed8;
    fStack_340 = 0.0;
    uStack_338 = 0;
    uStack_330 = uStack_330 & 0xffffffff00000000;
    if (*(char *)(*(longlong *)(*(longlong *)(unaff_GS_OFFSET + 0x58) + (ulonglong)__tls_index * 8)
                 + 8) == '\0') {
      func_0x0001455db994();
    }
    in_stack_fffffffffffffb80 = alStack_3b8 + 2;
    uStack_2c8 = 0;
    uStack_2c4 = 0;
    uStack_2c0 = 0;
    uStack_2bc = 0;
    uStack_2b8 = 0;
    uStack_2e8 = 0;
    uStack_2e0 = 0;
    uStack_2d8 = 0;
    uStack_2d4 = 0;
    uStack_2d0 = 0;
    uStack_2cc = 0;
    uStack_2b4 = 0xffff;
    uStack_2b2 = 0xffff;
    cStack_2b0 = 0;
    bStack_2af = 0;
    uStack_330 = uStack_330 & 0xffffffff;
    FUN_1400b0140(param_2,&fStack_218,0,0x2000000000000,&uStack_2e8,in_stack_fffffffffffffb80);
    *(undefined4 *)(param_2 + 0x18) = 0x7f7fffff;
  }
  if ((*(float *)(param_2 + 5) == _DAT_145fc6f48) &&
     (!NAN(*(float *)(param_2 + 5)) && !NAN(_DAT_145fc6f48))) {
    *(undefined1 *)((longlong)param_2 + 0x46) = 1;
  }
  uStack_2c8 = 0;
  uStack_2c4 = 0;
  uStack_2c0 = 0;
  uStack_2bc = 0;
  uStack_2b8 = 0;
  uStack_2e8 = 0;
  uStack_2e0 = 0;
  uStack_2d8 = 0;
  uStack_2d4 = 0;
  uStack_2d0 = 0;
  uStack_2cc = 0;
  uStack_2b4 = 0xffff;
  uStack_2b2 = 0xffff;
  cStack_2b0 = '\0';
  bStack_2af = 0;
  func_0x0001400aff80();
  FUN_144f37c20(auStack_100,param_1 + 0x10);
  iStack_410 = 0;
  puStack_418 = auStack_100;
  FUN_144f37b70(&puStack_418);
  iStack_170 = iStack_f0;
  puStack_178 = auStack_100;
  FUN_144f37b70(&puStack_178);
  iVar23 = iStack_170;
  if (iStack_410 == iStack_170) {
    uVar30 = (ulonglong)*(uint *)(*(longlong *)(param_1 + 0x20) + 0x14c);
    if (uVar30 == 0) goto LAB_1400af249;
    lVar26 = *(longlong *)(*(longlong *)(param_1 + 0x20) + 0x150);
    lStack_460 = 0;
    lVar27 = uVar30 * 0xc0 + lVar26;
  }
  else {
    lVar32 = 0;
    lStack_460 = 0;
    auVar74 = ZEXT1664(CONCAT88(uStack_2e0,uStack_2e8));
    uVar75 = CONCAT44(uStack_2d4,uStack_2d8);
    uVar77 = CONCAT44(uStack_2cc,uStack_2d0);
    auStack_458._0_2_ = uStack_2b2;
    auVar38._1_3_ = 0;
    auVar38[0] = bStack_2af;
    auVar38._4_12_ = in_stack_fffffffffffffb88._4_12_;
    uVar34 = uStack_2b4;
    cVar24 = cStack_2b0;
    do {
      iVar22 = iStack_410;
      lVar26 = func_0x000144f37d00(puStack_418,iStack_410);
      lVar27 = FUN_144e258f0(lVar26);
      if (lVar27 != 0) {
        *(byte *)(lVar27 + 0x1bb) = *(byte *)(lVar27 + 0x1bb) | 2;
      }
      uVar28 = func_0x000144e3bfa0(lVar26);
      lVar27 = func_0x000144e8f430(uVar28,_DAT_148fe0f4c);
      auVar73 = auVar74._0_16_;
      if (lVar27 != 0) {
        fVar35 = *(float *)(lVar27 + 0x24);
        auVar76 = ZEXT464((uint)fVar35);
        if (((fVar35 != _DAT_145fc6f48) || (NAN(fVar35) || NAN(_DAT_145fc6f48))) &&
           (*(int *)(*(longlong *)(param_1 + 0x20) + 0x14c) == 2)) {
          lVar27 = *(longlong *)(*(longlong *)(param_1 + 0x20) + 0x150);
          alStack_3b8[1] = lVar27 + 0xc0;
          alStack_3b8[0] = lVar27;
          FUN_1400afd30(alStack_3b8[1],&fStack_218,param_1);
          FUN_1400afd30(lVar27,&uStack_168,param_1);
          func_0x0001400aff80(alStack_3b8 + 2);
          func_0x0001400aff80(&fStack_348);
          auVar73 = auVar74._0_16_;
          uStack_388 = uStack_148;
          uStack_380 = (undefined2)uStack_140;
          uStack_37e = (undefined2)((ulonglong)uStack_140 >> 0x10);
          uStack_37c = (undefined4)((ulonglong)uStack_140 >> 0x20);
          uStack_378._0_2_ = (undefined2)uStack_138;
          uStack_378._2_2_ = (undefined2)((ulonglong)uStack_138 >> 0x10);
          uStack_378._4_4_ = (undefined4)((ulonglong)uStack_138 >> 0x20);
          cStack_370 = (char)uStack_130;
          uStack_36f = (undefined7)((ulonglong)uStack_130 >> 8);
          alStack_3b8[2] = uStack_168;
          uStack_3a0._0_4_ = (undefined4)uStack_160;
          uStack_3a0._4_4_ = (undefined4)((ulonglong)uStack_160 >> 0x20);
          uStack_398 = uStack_158;
          uStack_390 = uStack_150;
          uStack_338 = CONCAT44(fStack_204,fStack_208);
          uStack_330 = CONCAT44(fStack_1fc,fStack_200);
          _auStack_368 = auStack_128;
          auStack_308 = auStack_1d8;
          fStack_348 = fStack_218;
          fStack_344 = fStack_214;
          fStack_340 = fStack_210;
          iVar20 = (int)uStack_138;
          if ((iVar20 == 0) != (fStack_1e8 == 0.0)) {
            bVar7 = iVar20 != 0;
            uVar30 = CONCAT44(0,(uint)bVar7 * 0x60);
            uStack_198 = *(undefined8 *)((longlong)alStack_3b8 + uVar30 + 0x10);
            uStack_190 = *(undefined8 *)((longlong)&uStack_3a0 + uVar30);
            auStack_458._0_8_ = uVar30;
            auVar91._8_8_ = auVar38._8_8_;
            auVar91._0_8_ = *(undefined8 *)((longlong)&uStack_378 + uVar30);
            auVar76 = ZEXT1664(auVar76._0_16_);
            FUN_1402b1ef0(&uStack_198,*(undefined8 *)((longlong)&uStack_378 + uVar30),&fStack_218);
            uVar29 = (ulonglong)((uint)(iVar20 == 0) * 0x60);
            uStack_1a8 = *(undefined8 *)((longlong)alStack_3b8 + uVar29 + 0x10);
            uStack_1a0 = *(undefined8 *)((longlong)&uStack_3a0 + uVar29);
            FUN_1402b1ef0(&uStack_1a8,*(undefined8 *)((longlong)&uStack_378 + uVar29),&uStack_168);
            auVar82._8_8_ = uStack_160;
            auVar82._0_8_ = uStack_168;
            auVar74 = ZEXT1664(auVar82);
            auVar80._0_12_ = ZEXT812(0);
            auVar80._12_4_ = 0;
            auVar78 = ZEXT1664(auVar80);
            auVar79._4_4_ = fStack_214;
            auVar79._0_4_ = fStack_218;
            auVar79._8_4_ = fStack_210;
            auVar79._12_4_ = fStack_20c;
            lStack_460 = alStack_3b8[bVar7];
            auVar43 = vsubps_avx(auVar79,auVar82);
            fVar35 = auVar43._0_4_;
            auVar48._0_4_ = fVar35 * fVar35;
            fVar45 = auVar43._4_4_;
            auVar48._4_4_ = fVar45 * fVar45;
            fVar55 = auVar43._8_4_;
            auVar48._8_4_ = fVar55 * fVar55;
            fVar60 = auVar43._12_4_;
            auVar48._12_4_ = fVar60 * fVar60;
            auVar43 = vblendps_avx(auVar48,auVar80,8);
            auVar43 = vhaddps_avx(auVar43,auVar43);
            auVar43 = vhaddps_avx(auVar43,auVar43);
            auVar38 = vrsqrtps_avx(auVar43);
            fVar44 = auVar38._0_4_;
            fVar46 = auVar38._4_4_;
            fVar59 = auVar38._8_4_;
            fVar61 = auVar38._12_4_;
            auVar36._0_4_ =
                 ((fVar44 * fVar44 * auVar43._0_4_ * _DAT_145fc6f08 - _DAT_145fc6f08) * fVar44 +
                 fVar44) * fVar35;
            auVar36._4_4_ =
                 ((fVar46 * fVar46 * auVar43._4_4_ * _DAT_145fc6f08 - _DAT_145fc6f08) * fVar46 +
                 fVar46) * fVar45;
            auVar36._8_4_ =
                 ((fVar59 * fVar59 * auVar43._8_4_ * _DAT_145fc6f08 - _DAT_145fc6f08) * fVar59 +
                 fVar59) * fVar55;
            auVar36._12_4_ =
                 ((fVar61 * fVar61 * auVar43._12_4_ * _DAT_145fc6f08 - _DAT_145fc6f08) * fVar61 +
                 fVar61) * fVar60;
            auVar66._4_4_ = _DAT_145fc6f14;
            auVar66._0_4_ = _DAT_145fc6f14;
            auVar66._8_4_ = _DAT_145fc6f14;
            auVar66._12_4_ = _DAT_145fc6f14;
            auVar43 = vcmpps_avx(auVar66,auVar43,1);
            auVar43 = vblendvps_avx(_DAT_14614f7f0,auVar36,auVar43);
            auVar81 = ZEXT1664(auVar43);
            auStack_1b8 = *(undefined1 (*) [16])((longlong)&uStack_398 + uVar30);
            FUN_1402b41b0(auStack_1b8,auVar91._0_8_,&uStack_188);
            fVar35 = auVar76._0_4_;
            uStack_2c8 = auVar78._0_4_;
            uStack_2c4 = auVar78._4_4_;
            uStack_2c0 = auVar78._8_4_;
            uStack_2bc = auVar78._12_4_;
            uStack_2b8 = 0;
            auStack_458._0_2_ = 0xffff;
            auVar84._12_4_ = 0;
            auVar84._0_12_ = auVar91._4_12_;
            auVar38 = auVar84 << 0x20;
            cVar24 = '\0';
            auVar73._0_4_ = auVar81._0_4_ * fVar35 + auVar74._0_4_;
            auVar73._4_4_ = auVar81._4_4_ * fVar35 + auVar74._4_4_;
            auVar73._8_4_ = auVar81._8_4_ * fVar35 + auVar74._8_4_;
            auVar73._12_4_ = auVar81._12_4_ * fVar35 + auVar74._12_4_;
            uVar34 = 0xffff;
            uVar75 = uStack_188;
            uVar77 = uStack_180;
          }
        }
      }
      auVar74 = ZEXT1664(auVar73);
      lVar26 = func_0x0001450d94f0(*(undefined4 *)(lVar26 + 0x9c));
      if (lVar26 != 0) {
        uVar4 = *(uint *)(lVar26 + 0x50);
        uVar30 = (ulonglong)uVar4 & 0x1ffff;
        if ((uVar30 == 0x1ffff) ||
           (plVar6 = *(longlong **)((ulonglong)(uVar4 >> 0x11 & 0x1f) * 8 + 0x14abbe7c0),
           plVar6 == (longlong *)0x0)) {
          lVar32 = 0;
        }
        else {
          uVar5 = *(uint *)(plVar6[5] + uVar30 * 4);
          lVar32 = (ulonglong)(uint)((int)plVar6[1] * (int)uVar30) + *plVar6;
          if (uVar4 >> 0x16 != (uVar5 >> 0x11 & 0x3ff) ||
              (uVar5 & *(uint *)(plVar6 + 6)) != *(uint *)(plVar6 + 6)) {
            lVar32 = 0;
          }
        }
      }
      iStack_410 = iVar22 + 1;
      FUN_144f37b70(&puStack_418);
    } while (iStack_410 != iVar23);
    uStack_2e8 = auVar74._0_8_;
    uStack_2e0 = auVar74._8_8_;
    uStack_2d8 = (undefined4)uVar75;
    uStack_2d4 = (undefined4)((ulonglong)uVar75 >> 0x20);
    uStack_2d0 = (undefined4)uVar77;
    uStack_2cc = (undefined4)((ulonglong)uVar77 >> 0x20);
    uStack_2b2 = auStack_458._0_2_;
    bStack_2af = auVar38[0];
    uVar30 = (ulonglong)*(uint *)(*(longlong *)(param_1 + 0x20) + 0x14c);
    if (uVar30 == 0) goto LAB_1400af249;
    lVar26 = *(longlong *)(*(longlong *)(param_1 + 0x20) + 0x150);
    lVar27 = uVar30 * 0xc0 + lVar26;
    uStack_2b4 = uVar34;
    cStack_2b0 = cVar24;
    if (lVar32 != 0) {
      auVar87._4_4_ = _DAT_14615a290;
      auVar87._0_4_ = _DAT_14615a290;
      auVar87._8_4_ = _DAT_14615a290;
      auVar87._12_4_ = _DAT_14615a290;
      auVar88 = ZEXT1664(auVar87);
      auVar74 = ZEXT1664(CONCAT412(_DAT_145fc6ed8,
                                   CONCAT48(_DAT_145fc6ed8,CONCAT44(_DAT_145fc6ed8,_DAT_145fc6ed8)))
                        );
      auVar78 = ZEXT1664(CONCAT412(_DAT_145fc6f08,
                                   CONCAT48(_DAT_145fc6f08,CONCAT44(_DAT_145fc6f08,_DAT_145fc6f08)))
                        );
      auVar81 = ZEXT1664(CONCAT412(_DAT_146159bfc,
                                   CONCAT48(_DAT_146159bfc,CONCAT44(_DAT_146159bfc,_DAT_146159bfc)))
                        );
      auVar83 = ZEXT1664(CONCAT412(_DAT_145fc6f10,
                                   CONCAT48(_DAT_145fc6f10,CONCAT44(_DAT_145fc6f10,_DAT_145fc6f10)))
                        );
      auVar85 = ZEXT1664(CONCAT412(_DAT_14615b36c,
                                   CONCAT48(_DAT_14615b36c,CONCAT44(_DAT_14615b36c,_DAT_14615b36c)))
                        );
      auVar86 = ZEXT1664(CONCAT412(_DAT_145fc6f48,
                                   CONCAT48(_DAT_145fc6f48,CONCAT44(_DAT_145fc6f48,_DAT_145fc6f48)))
                        );
      auVar90 = ZEXT864(_DAT_146159c90);
      plVar6 = alStack_3b8 + 2;
      auVar76 = ZEXT1264(ZEXT812(0));
      auVar43 = vrcpps_avx(auVar87);
      fVar35 = auVar43._0_4_;
      fVar44 = auVar43._4_4_;
      fVar45 = auVar43._8_4_;
      fVar46 = auVar43._12_4_;
      auVar89 = ZEXT1664(CONCAT412((-(fVar46 * _DAT_14615a290) + _DAT_145fc6ed8) * fVar46 + fVar46,
                                   CONCAT48((-(fVar45 * _DAT_14615a290) + _DAT_145fc6ed8) * fVar45 +
                                            fVar45,CONCAT44((-(fVar44 * _DAT_14615a290) +
                                                            _DAT_145fc6ed8) * fVar44 + fVar44,
                                                            (-(fVar35 * _DAT_14615a290) +
                                                            _DAT_145fc6ed8) * fVar35 + fVar35))));
      do {
        FUN_1400afd30(lVar26,plVar6,param_1);
        auVar80 = auVar90._0_16_;
        auVar66 = auVar89._0_16_;
        auVar48 = auVar88._0_16_;
        auVar36 = auVar86._0_16_;
        auVar84 = auVar85._0_16_;
        auVar82 = auVar83._0_16_;
        auVar79 = auVar81._0_16_;
        auVar73 = auVar78._0_16_;
        auVar38 = auVar76._0_16_;
        auVar43 = auVar74._0_16_;
        if (lStack_460 == lVar26) {
          alStack_3b8[2] = uStack_2e8;
          uStack_398 = CONCAT44(uStack_2d4,uStack_2d8);
          uStack_390 = CONCAT44(uStack_2cc,uStack_2d0);
          uStack_388 = CONCAT44(uStack_2c4,uStack_2c8);
          auVar21._8_4_ = uStack_2c0;
          auVar21._0_8_ = uStack_388;
          auVar21._12_4_ = uStack_2bc;
          auVar21._16_4_ = uStack_2b8;
          auVar21._20_2_ = uStack_2b4;
          auVar21._22_2_ = uStack_2b2;
          auVar2[0x18] = cStack_2b0;
          auVar2._0_24_ = auVar21;
          auVar2[0x19] = bStack_2af;
          auVar2._26_6_ = uStack_2ae;
          _auStack_368 = auStack_2a8;
          uStack_380 = (undefined2)uStack_2c0;
          uStack_37e = (undefined2)((uint)uStack_2c0 >> 0x10);
          uStack_37c = uStack_2bc;
          uStack_378._0_2_ = (undefined2)uStack_2b8;
          uStack_378._2_2_ = (undefined2)((uint)uStack_2b8 >> 0x10);
          uStack_378._4_4_ = auVar21._20_4_;
          cStack_370 = cStack_2b0;
          uStack_36f = auVar2._25_7_;
          uStack_3a0._0_4_ = (undefined4)uStack_2e0;
          uStack_3a0._4_4_ = (undefined4)((ulonglong)uStack_2e0 >> 0x20);
        }
        if (CONCAT22(uStack_378._2_2_,(undefined2)uStack_378) == 0) {
          auVar74 = ZEXT1664(auVar43);
          auVar76 = ZEXT1664(auVar38);
          auVar78 = ZEXT1664(auVar73);
          auVar81 = ZEXT1664(auVar79);
          auVar83 = ZEXT1664(auVar82);
          auVar85 = ZEXT1664(auVar84);
          auVar86 = ZEXT1664(auVar36);
          auVar88 = ZEXT1664(auVar48);
          auVar89 = ZEXT1664(auVar66);
          auVar90 = ZEXT1664(auVar80);
          cVar24 = FUN_142e7b1f0(lVar32,0,&fStack_218,0,&uStack_168);
          uVar75 = *(undefined8 *)*(undefined1 (*) [16])(lVar32 + 0x50);
          auStack_458 = *(undefined1 (*) [16])(lVar32 + 0x50);
          if (cVar24 == '\0') {
            fStack_438 = (float)*(undefined8 *)(lVar32 + 0x40);
            fStack_434 = (float)((ulonglong)*(undefined8 *)(lVar32 + 0x40) >> 0x20);
            fStack_430 = (float)*(undefined8 *)(lVar32 + 0x48);
            fStack_42c = (float)((ulonglong)*(undefined8 *)(lVar32 + 0x48) >> 0x20);
            _auStack_448 = *(undefined1 (*) [16])(lVar32 + 0x60);
            auVar43 = *(undefined1 (*) [16])(lVar32 + 0x70);
          }
          else {
            _auStack_3e8 = *(undefined1 (*) [16])(lVar32 + 0x60);
            fStack_438 = (float)*(undefined8 *)(lVar32 + 0x40);
            fStack_434 = (float)((ulonglong)*(undefined8 *)(lVar32 + 0x40) >> 0x20);
            fStack_430 = (float)*(undefined8 *)(lVar32 + 0x48);
            fStack_42c = (float)((ulonglong)*(undefined8 *)(lVar32 + 0x48) >> 0x20);
            uVar77 = *(undefined8 *)*(undefined1 (*) [16])(lVar32 + 0x70);
            uVar28 = *(undefined8 *)(lVar32 + 0x78);
            auVar43 = vshufps_avx(_auStack_3e8,auStack_458,0x33);
            auVar49._0_4_ = fStack_218 * fStack_218;
            auVar49._4_4_ = fStack_214 * fStack_214;
            auVar49._8_4_ = fStack_210 * fStack_210;
            auVar49._12_4_ = fStack_20c * fStack_20c;
            auVar73 = vshufps_avx(auStack_458,auVar43,0x8f);
            auVar43 = vblendps_avx(auVar49,auVar76._0_16_,8);
            auVar43 = vhaddps_avx(auVar43,auVar43);
            auVar38 = vhaddps_avx(auVar43,auVar43);
            auVar43 = vrsqrtps_avx(auVar38);
            fVar35 = auVar43._0_4_;
            fVar44 = auVar43._4_4_;
            fVar45 = auVar43._8_4_;
            fVar46 = auVar43._12_4_;
            auVar43 = vcmpps_avx(auVar81._0_16_,auVar38,2);
            auStack_3f8._0_4_ =
                 auVar43._0_4_ &
                 (uint)(((auVar78._0_4_ * fVar35 * fVar35 * auVar38._0_4_ - auVar78._0_4_) * fVar35
                        + fVar35) * auVar38._0_4_);
            auStack_3f8._4_4_ =
                 auVar43._4_4_ &
                 (uint)(((auVar78._4_4_ * fVar44 * fVar44 * auVar38._4_4_ - auVar78._4_4_) * fVar44
                        + fVar44) * auVar38._4_4_);
            fStack_3f0 = (float)(auVar43._8_4_ &
                                (uint)(((auVar78._8_4_ * fVar45 * fVar45 * auVar38._8_4_ -
                                        auVar78._8_4_) * fVar45 + fVar45) * auVar38._8_4_));
            fStack_3ec = (float)(auVar43._12_4_ &
                                (uint)(((auVar78._12_4_ * fVar46 * fVar46 * auVar38._12_4_ -
                                        auVar78._12_4_) * fVar46 + fVar46) * auVar38._12_4_));
            auVar43 = vrcpps_avx(_auStack_3f8);
            auVar72._0_4_ = auVar83._0_4_ ^ auStack_3f8._0_4_;
            auVar72._4_4_ = auVar83._4_4_ ^ auStack_3f8._4_4_;
            auVar72._8_4_ = auVar83._8_4_ ^ (uint)fStack_3f0;
            auVar72._12_4_ = auVar83._12_4_ ^ (uint)fStack_3ec;
            fVar44 = auVar43._0_4_;
            fVar45 = auVar43._4_4_;
            fVar46 = auVar43._8_4_;
            fVar35 = auVar43._12_4_;
            auVar50._0_4_ = -(((float)auStack_3f8._0_4_ * fVar44 - auVar74._0_4_) * fVar44) + fVar44
            ;
            auVar50._4_4_ = -(((float)auStack_3f8._4_4_ * fVar45 - auVar74._4_4_) * fVar45) + fVar45
            ;
            auVar50._8_4_ = -((fStack_3f0 * fVar46 - auVar74._8_4_) * fVar46) + fVar46;
            auVar50._12_4_ = -((fStack_3ec * fVar35 - auVar74._12_4_) * fVar35) + fVar35;
            auVar43 = vcmpps_avx(_auStack_3f8,auVar72,0);
            auVar43 = vblendvps_avx(auVar50,auVar85._0_16_,auVar43);
            fVar35 = auVar43._0_4_;
            auStack_448._0_4_ = fVar35 * fStack_1f8;
            fVar44 = auVar43._4_4_;
            fVar45 = auVar43._8_4_;
            fVar46 = auVar43._12_4_;
            auStack_278._0_4_ = fVar35 * fStack_208;
            auStack_278._4_4_ = fVar44 * fStack_204;
            auStack_278._8_4_ = fVar45 * fStack_200;
            auStack_278._12_4_ = fVar46 * fStack_1fc;
            auStack_408._0_4_ = fVar35 * fStack_218;
            auStack_408._4_4_ = fVar44 * fStack_214;
            auStack_408._8_4_ = fVar45 * fStack_210;
            auStack_408._12_4_ = fVar46 * fStack_20c;
            auStack_448._4_4_ = fVar44 * fStack_1f4;
            fStack_440 = fVar45 * fStack_1f0;
            fStack_43c = fVar46 * fStack_1ec;
            auStack_428._0_4_ = (auVar73._0_4_ + auVar74._0_4_) * fStack_1e8;
            auStack_428._4_4_ = (auVar73._4_4_ + auVar74._4_4_) * fStack_1e4;
            fStack_420 = (auVar73._8_4_ + auVar74._8_4_) * fStack_1e0;
            fStack_41c = (auVar73._12_4_ + auVar74._12_4_) * fStack_1dc;
            auVar43 = vshufps_avx(auStack_408,auStack_408,0x55);
            auVar38 = vshufps_avx(auStack_278,auStack_278,0x55);
            fVar65 = (float)uVar75;
            fVar69 = (float)((ulonglong)uVar75 >> 0x20);
            fVar70 = (float)*(undefined8 *)(lVar32 + 0x58);
            fVar71 = (float)((ulonglong)*(undefined8 *)(lVar32 + 0x58) >> 0x20);
            fStack_288 = fVar65 * auVar38._0_4_ + auStack_278._0_4_ * fStack_438;
            fStack_284 = fVar69 * auVar38._4_4_ + auStack_278._0_4_ * fStack_434;
            fStack_280 = fVar70 * auVar38._8_4_ + auStack_278._0_4_ * fStack_430;
            fStack_27c = fVar71 * auVar38._12_4_ + auStack_278._0_4_ * fStack_42c;
            auVar38 = vshufps_avx(_auStack_448,_auStack_448,0x55);
            fVar55 = (float)auStack_448._0_4_ * fStack_438;
            fVar59 = (float)auStack_448._0_4_ * fStack_434;
            fVar60 = (float)auStack_448._0_4_ * fStack_430;
            fVar61 = (float)auStack_448._0_4_ * fStack_42c;
            fVar35 = fStack_438 * (float)auStack_428._0_4_;
            fVar44 = fStack_434 * (float)auStack_428._0_4_;
            fVar45 = fStack_430 * (float)auStack_428._0_4_;
            fVar46 = fStack_42c * (float)auStack_428._0_4_;
            auVar73 = vshufps_avx(_auStack_428,_auStack_428,0x55);
            auVar79 = vpermilps_avx(auStack_408,0xaa);
            fStack_438 = (float)auStack_3e8._0_4_ * auVar79._0_4_ +
                         fVar65 * auVar43._0_4_ + auStack_408._0_4_ * fStack_438;
            fStack_434 = (float)auStack_3e8._4_4_ * auVar79._4_4_ +
                         fVar69 * auVar43._4_4_ + auStack_408._0_4_ * fStack_434;
            fStack_430 = fStack_3e0 * auVar79._8_4_ +
                         fVar70 * auVar43._8_4_ + auStack_408._0_4_ * fStack_430;
            fStack_42c = fStack_3dc * auVar79._12_4_ +
                         fVar71 * auVar43._12_4_ + auStack_408._0_4_ * fStack_42c;
            auVar43 = vpermilps_avx(auStack_278,0xaa);
            auVar62._0_4_ = (float)auStack_3e8._0_4_ * auVar43._0_4_ + fStack_288;
            auVar62._4_4_ = (float)auStack_3e8._4_4_ * auVar43._4_4_ + fStack_284;
            auVar62._8_4_ = fStack_3e0 * auVar43._8_4_ + fStack_280;
            auVar62._12_4_ = fStack_3dc * auVar43._12_4_ + fStack_27c;
            auVar43 = vpermilps_avx(_auStack_448,0xaa);
            auVar56._0_4_ =
                 (float)auStack_3e8._0_4_ * auVar43._0_4_ + fVar65 * auVar38._0_4_ + fVar55;
            auVar56._4_4_ =
                 (float)auStack_3e8._4_4_ * auVar43._4_4_ + fVar69 * auVar38._4_4_ + fVar59;
            auVar56._8_4_ = fStack_3e0 * auVar43._8_4_ + fVar70 * auVar38._8_4_ + fVar60;
            auVar56._12_4_ = fStack_3dc * auVar43._12_4_ + fVar71 * auVar38._12_4_ + fVar61;
            auVar43 = vshufps_avx(_auStack_428,_auStack_428,0xaa);
            auVar51._0_4_ =
                 (float)auStack_3e8._0_4_ * auVar43._0_4_ +
                 fVar65 * auVar73._0_4_ + fVar35 + (float)uVar77;
            auVar51._4_4_ =
                 (float)auStack_3e8._4_4_ * auVar43._4_4_ +
                 fVar69 * auVar73._4_4_ + fVar44 + (float)((ulonglong)uVar77 >> 0x20);
            auVar51._8_4_ =
                 fStack_3e0 * auVar43._8_4_ + fVar70 * auVar73._8_4_ + fVar45 + (float)uVar28;
            auVar51._12_4_ =
                 fStack_3dc * auVar43._12_4_ +
                 fVar71 * auVar73._12_4_ + fVar46 + (float)((ulonglong)uVar28 >> 0x20);
            auVar67._0_4_ = auVar86._0_4_ + (float)auStack_3f8._0_4_;
            auVar67._4_4_ = auVar86._4_4_ + (float)auStack_3f8._4_4_;
            auVar67._8_4_ = auVar86._8_4_ + fStack_3f0;
            auVar67._12_4_ = auVar86._12_4_ + fStack_3ec;
            auStack_458 = vinsertps_avx(auVar62,auVar67,0x30);
            _auStack_448 = vinsertps_avx(auVar56,auVar67,0xb0);
            auVar43 = vblendps_avx(auVar51,*(undefined1 (*) [16])(lVar32 + 0x70),8);
            auVar57._0_4_ = auVar89._0_4_ * auVar43._0_4_;
            auVar57._4_4_ = auVar89._4_4_ * auVar43._4_4_;
            auVar57._8_4_ = auVar89._8_4_ * auVar43._8_4_;
            auVar57._12_4_ = auVar89._12_4_ * auVar43._12_4_;
            auVar38 = vroundps_avx(auVar57,3);
            auVar37._0_4_ = -(auVar38._0_4_ * auVar88._0_4_) + auVar43._0_4_;
            auVar37._4_4_ = -(auVar38._4_4_ * auVar88._4_4_) + auVar43._4_4_;
            auVar37._8_4_ = -(auVar38._8_4_ * auVar88._8_4_) + auVar43._8_4_;
            auVar37._12_4_ = -(auVar38._12_4_ * auVar88._12_4_) + auVar43._12_4_;
            auVar43 = vblendps_avx(auVar51,auVar37,3);
            auVar52._0_4_ = (int)auVar38._0_4_;
            auVar52._4_4_ = (int)auVar38._4_4_;
            auVar52._8_4_ = (int)auVar38._8_4_;
            auVar52._12_4_ = (int)auVar38._12_4_;
            auVar38 = vpackssdw_avx(auVar52,auVar52);
            sVar47 = auVar38._0_2_;
            auVar8._0_2_ = sVar47 + (short)uVar77;
            sVar54 = auVar38._2_2_;
            auVar8._2_2_ = sVar54 + (short)((ulonglong)uVar77 >> 0x10);
            auVar8._4_2_ = sVar47 + (short)((ulonglong)uVar77 >> 0x20);
            auVar8._6_2_ = sVar54 + (short)((ulonglong)uVar77 >> 0x30);
            auVar8._8_2_ = sVar47 + (short)uVar28;
            auVar8._10_2_ = sVar54 + (short)((ulonglong)uVar28 >> 0x10);
            auVar8._12_2_ = sVar47 + (short)((ulonglong)uVar28 >> 0x20);
            auVar8._14_2_ = sVar54 + (short)((ulonglong)uVar28 >> 0x30);
            auVar43 = vpblendd_avx2(auVar43,auVar8,8);
          }
          uStack_250 = CONCAT44(uStack_3a0._4_4_,(undefined4)uStack_3a0);
          uVar75 = CONCAT44(uStack_378._4_4_,CONCAT22(uStack_378._2_2_,(undefined2)uStack_378));
          uStack_258 = alStack_3b8[2];
          FUN_1402b1ef0(&uStack_258,uVar75,auStack_228);
          auVar38 = vpunpckhwd_avx(auVar43,auVar43);
          auVar38 = vpsrad_avx(auVar38,0x10);
          auVar38 = vcvtdq2ps_avx(auVar38);
          auVar38 = vshufpd_avx(auVar38,auVar38,3);
          auVar39._0_4_ = auVar38._0_4_ * auVar90._0_4_ + auVar43._0_4_;
          auVar39._4_4_ = auVar38._4_4_ * auVar90._4_4_ + auVar43._4_4_;
          auVar39._8_4_ = auVar38._8_4_ * auVar90._8_4_ + auVar43._8_4_;
          auVar39._12_4_ = auVar38._12_4_ * auVar90._12_4_ + auVar43._12_4_;
          _auStack_3e8 = vsubps_avx(auVar39,auStack_228);
          if (cStack_370 == '\x01') {
            auVar40._8_8_ = 0;
            auVar40._0_8_ = uStack_354;
            auVar43 = vmovlhps_avx(ZEXT416((uint)auStack_368._16_4_),auVar40);
            auVar43 = vshufps_avx(auVar43,auVar40,0xd8);
            auStack_3c8 = vinsertps_avx(auVar43,ZEXT416((uint)auStack_368._16_4_),0x30);
          }
          else {
            FUN_142e7b500(plVar6,auStack_3c8);
          }
          auVar58._0_12_ = ZEXT812(0);
          auVar58._12_4_ = 0;
          auVar41._0_12_ = ZEXT812(0);
          auVar41._12_4_ = 0;
          auVar43 = vcmpps_avx(auStack_3c8,auVar58,0);
          uVar25 = vmovmskps_avx(auVar43);
          if ((~(byte)uVar25 & 7) != 0) {
            uStack_268 = uStack_398;
            uStack_260 = uStack_390;
            FUN_1402b41b0(&uStack_268,uVar75,&fStack_3d8);
            auVar18._4_4_ = fStack_434;
            auVar18._0_4_ = fStack_438;
            auVar18._8_4_ = fStack_430;
            auVar18._12_4_ = fStack_42c;
            auVar73 = vunpcklps_avx(auVar18,_auStack_448);
            auVar79 = vunpcklps_avx(auStack_458,auVar76._0_16_);
            auVar43 = vunpckhps_avx(auVar18,_auStack_448);
            auVar38 = vunpckhps_avx(auStack_458,auVar76._0_16_);
            auVar82 = vunpcklps_avx(auVar73,auVar79);
            auVar73 = vunpckhps_avx(auVar73,auVar79);
            auVar43 = vunpcklps_avx(auVar43,auVar38);
            auVar41._4_4_ =
                 auVar43._4_4_ * fStack_3d0 +
                 auVar73._4_4_ * fStack_3d4 + fStack_3d8 * auVar82._4_4_;
            auVar41._0_4_ =
                 auVar43._0_4_ * fStack_3d0 +
                 auVar73._0_4_ * fStack_3d4 + fStack_3d8 * auVar82._0_4_;
            auVar41._8_4_ =
                 auVar43._8_4_ * fStack_3d0 +
                 auVar73._8_4_ * fStack_3d4 + fStack_3d8 * auVar82._8_4_;
            auVar41._12_4_ =
                 auVar43._12_4_ * fStack_3d0 +
                 auVar73._12_4_ * fStack_3d4 + fStack_3d8 * auVar82._12_4_;
          }
          auVar43 = vshufps_avx(_auStack_448,auStack_458,0x33);
          auVar38 = vshufps_avx(auStack_458,auStack_458,0xd2);
          auVar43 = vshufps_avx(auStack_458,auVar43,0x8f);
          auVar73 = vshufps_avx(auStack_458,auStack_458,0xc9);
          fVar35 = auVar74._0_4_;
          auStack_3f8._0_4_ = auVar43._0_4_ + fVar35;
          fVar44 = auVar74._4_4_;
          auStack_3f8._4_4_ = auVar43._4_4_ + fVar44;
          fVar45 = auVar74._8_4_;
          fStack_3f0 = auVar43._8_4_ + fVar45;
          fVar46 = auVar74._12_4_;
          fStack_3ec = auVar43._12_4_ + fVar46;
          auVar19._4_4_ = fStack_434;
          auVar19._0_4_ = fStack_438;
          auVar19._8_4_ = fStack_430;
          auVar19._12_4_ = fStack_42c;
          auStack_408 = vshufps_avx(auVar19,auVar19,0xc9);
          auVar43 = vshufps_avx(auVar19,auVar19,0xd2);
          auVar79 = vshufps_avx(_auStack_448,_auStack_448,0xc9);
          auVar82 = vshufps_avx(_auStack_448,_auStack_448,0xd2);
          auVar68._0_4_ = -(auVar73._0_4_ * auVar43._0_4_) + auVar38._0_4_ * auStack_408._0_4_;
          auVar68._4_4_ = -(auVar73._4_4_ * auVar43._4_4_) + auVar38._4_4_ * auStack_408._4_4_;
          auVar68._8_4_ = -(auVar73._8_4_ * auVar43._8_4_) + auVar38._8_4_ * auStack_408._8_4_;
          auVar68._12_4_ = -(auVar73._12_4_ * auVar43._12_4_) + auVar38._12_4_ * auStack_408._12_4_;
          auVar42._0_4_ = -(auVar79._0_4_ * auVar38._0_4_) + auVar82._0_4_ * auVar73._0_4_;
          auVar42._4_4_ = -(auVar79._4_4_ * auVar38._4_4_) + auVar82._4_4_ * auVar73._4_4_;
          auVar42._8_4_ = -(auVar79._8_4_ * auVar38._8_4_) + auVar82._8_4_ * auVar73._8_4_;
          auVar42._12_4_ = -(auVar79._12_4_ * auVar38._12_4_) + auVar82._12_4_ * auVar73._12_4_;
          auVar53._0_4_ = -(auVar82._0_4_ * auStack_408._0_4_) + auVar79._0_4_ * auVar43._0_4_;
          auVar53._4_4_ = -(auVar82._4_4_ * auStack_408._4_4_) + auVar79._4_4_ * auVar43._4_4_;
          auVar53._8_4_ = -(auVar82._8_4_ * auStack_408._8_4_) + auVar79._8_4_ * auVar43._8_4_;
          auVar53._12_4_ = -(auVar82._12_4_ * auStack_408._12_4_) + auVar79._12_4_ * auVar43._12_4_;
          auVar63._0_4_ = auVar68._0_4_ * auStack_448._0_4_;
          auVar63._4_4_ = auVar68._4_4_ * auStack_448._4_4_;
          auVar63._8_4_ = auVar68._8_4_ * auStack_448._8_4_;
          auVar63._12_4_ = auVar68._12_4_ * auStack_448._12_4_;
          auVar38 = auVar76._0_16_;
          auVar43 = vblendps_avx(auVar63,auVar38,8);
          auVar43 = vhaddps_avx(auVar43,auVar43);
          auVar79 = vunpcklps_avx(auVar53,auVar38);
          auVar73 = vunpckhps_avx(auVar53,auVar38);
          auVar43 = vhaddps_avx(auVar43,auVar43);
          auVar38 = vrcpps_avx(auVar43);
          fVar55 = auVar38._0_4_;
          fVar59 = auVar38._4_4_;
          fVar60 = auVar38._8_4_;
          fVar61 = auVar38._12_4_;
          auVar64._0_4_ =
               ((fVar55 * auVar43._0_4_ - fVar35) * fVar55 - fVar55) * (float)auStack_3e8._0_4_;
          auVar64._4_4_ =
               ((fVar59 * auVar43._4_4_ - fVar44) * fVar59 - fVar59) * (float)auStack_3e8._4_4_;
          auVar64._8_4_ = ((fVar60 * auVar43._8_4_ - fVar45) * fVar60 - fVar60) * fStack_3e0;
          auVar64._12_4_ = ((fVar61 * auVar43._12_4_ - fVar46) * fVar61 - fVar61) * fStack_3dc;
          auVar38 = vunpcklps_avx(auVar42,auVar68);
          auVar43 = vunpckhps_avx(auVar42,auVar68);
          auVar82 = vunpcklps_avx(auVar43,auVar73);
          auVar84 = vunpcklps_avx(auVar38,auVar79);
          auVar79 = vunpckhps_avx(auVar38,auVar79);
          auVar38 = vshufps_avx(auVar64,auVar64,0x55);
          auVar73 = vshufps_avx(auVar64,auVar64,0xaa);
          auVar43 = vrcpps_avx(_auStack_3f8);
          fVar55 = auVar43._0_4_;
          fVar59 = auVar43._4_4_;
          fVar60 = auVar43._8_4_;
          fVar61 = auVar43._12_4_;
          auStack_248._0_4_ =
               (-(auVar82._0_4_ * auVar73._0_4_) -
               (auVar79._0_4_ * auVar38._0_4_ + auVar64._0_4_ * auVar84._0_4_)) *
               ((fVar55 * (float)auStack_3f8._0_4_ - fVar35) * fVar55 - fVar55);
          auStack_248._4_4_ =
               (-(auVar82._4_4_ * auVar73._4_4_) -
               (auVar79._4_4_ * auVar38._4_4_ + auVar64._0_4_ * auVar84._4_4_)) *
               ((fVar59 * (float)auStack_3f8._4_4_ - fVar44) * fVar59 - fVar59);
          auStack_248._8_4_ =
               (-(auVar82._8_4_ * auVar73._8_4_) -
               (auVar79._8_4_ * auVar38._8_4_ + auVar64._0_4_ * auVar84._8_4_)) *
               ((fVar60 * fStack_3f0 - fVar45) * fVar60 - fVar60);
          auStack_248._12_4_ =
               (-(auVar82._12_4_ * auVar73._12_4_) -
               (auVar79._12_4_ * auVar38._12_4_ + auVar64._0_4_ * auVar84._12_4_)) *
               ((fVar61 * fStack_3ec - fVar46) * fVar61 - fVar61);
          auStack_238 = auVar41;
          FUN_1400affa0(plVar6,lVar32,0,auStack_248,auStack_238,
                        (ulonglong)in_stack_fffffffffffffb80 & 0xffffffffffffff00,auVar41);
          auVar80 = auVar90._0_16_;
          auVar66 = auVar89._0_16_;
          auVar48 = auVar88._0_16_;
          auVar36 = auVar86._0_16_;
          auVar84 = auVar85._0_16_;
          auVar82 = auVar83._0_16_;
          auVar79 = auVar81._0_16_;
          auVar73 = auVar78._0_16_;
          auVar38 = auVar76._0_16_;
          auVar43 = auVar74._0_16_;
        }
        in_stack_fffffffffffffb80 = (longlong *)(lVar26 + 0x40);
        auVar74 = ZEXT1664(auVar43);
        auVar76 = ZEXT1664(auVar38);
        auVar78 = ZEXT1664(auVar73);
        auVar81 = ZEXT1664(auVar79);
        auVar83 = ZEXT1664(auVar82);
        auVar85 = ZEXT1664(auVar84);
        auVar86 = ZEXT1664(auVar36);
        auVar88 = ZEXT1664(auVar48);
        auVar89 = ZEXT1664(auVar66);
        auVar90 = ZEXT1664(auVar80);
        FUN_1400b0140(param_2,&fStack_218,0,0,plVar6,in_stack_fffffffffffffb80);
        lVar26 = lVar26 + 0xc0;
      } while (lVar26 != lVar27);
      goto LAB_1400af249;
    }
  }
  do {
    FUN_1400afd30(lVar26,alStack_3b8 + 2,param_1);
    if (lStack_460 == lVar26) {
      alStack_3b8[2] = uStack_2e8;
      uStack_398 = CONCAT44(uStack_2d4,uStack_2d8);
      uStack_390 = CONCAT44(uStack_2cc,uStack_2d0);
      uStack_388 = CONCAT44(uStack_2c4,uStack_2c8);
      _auStack_368 = auStack_2a8;
      uStack_380 = (undefined2)uStack_2c0;
      uStack_37e = (undefined2)((uint)uStack_2c0 >> 0x10);
      uStack_37c = uStack_2bc;
      uStack_378._0_2_ = (undefined2)uStack_2b8;
      uStack_378._2_2_ = (undefined2)((uint)uStack_2b8 >> 0x10);
      uStack_378._4_4_ = (undefined4)(CONCAT26(uStack_2b2,CONCAT24(uStack_2b4,uStack_2b8)) >> 0x20);
      cStack_370 = cStack_2b0;
      uStack_36f = (undefined7)(CONCAT62(uStack_2ae,CONCAT11(bStack_2af,cStack_2b0)) >> 8);
      uStack_3a0._0_4_ = (undefined4)uStack_2e0;
      uStack_3a0._4_4_ = (undefined4)((ulonglong)uStack_2e0 >> 0x20);
    }
    FUN_1400b0140(param_2,&fStack_218,0,0,alStack_3b8 + 2,lVar26 + 0x40);
    lVar26 = lVar26 + 0xc0;
  } while (lVar26 != lVar27);
LAB_1400af249:
  param_2[0x1b] = param_1;
  return;
}

