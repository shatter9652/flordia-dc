// Recovered from game_scarlett_master.exe (GTA VI, Xbox Series X, PE32+ x64)
// Address: 1401b4e40  size: 1715 bytes
// Name:    FUN_1401b4e40
// Subsystem: core
//
// Referenced strings (0 in this body, 0 including direct callees):
// Callees: FUN_1401b4790, FUN_145079070, FUN_144da6330, FUN_1401b5620, FUN_1401bb6d0, FUN_1401bba50, FUN_1401b87f0, FUN_144384620, FUN_1401b5b50, FUN_1401bb1b0, FUN_145078ec0, FUN_1450782d0, FUN_144e46a00, FUN_144e96700, FUN_144fac3c0, FUN_14438ea50, FUN_1401bbcd0, FUN_140459350, FUN_14222f020, FUN_1443902a0, FUN_1401bae50, FUN_1450778c0, FUN_1401b5500
//
// Generated decompilation. Formatting follows MiscRef/GTAVSRC conventions;
// identifiers are recovered, not original. See ../../../README.md.

#include "gta6decomp/rage_types.h"


/* WARNING: Type propagation algorithm not settling */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

longlong FUN_1401b4e40(longlong *param_1)

{
  int *piVar1;
  undefined1 auVar2 [16];
  char cVar3;
  undefined1 uVar4;
  uint uVar5;
  longlong lVar6;
  undefined8 uVar7;
  longlong lVar8;
  undefined8 *puVar9;
  longlong lVar10;
  longlong lVar11;
  undefined8 uVar12;
  uint uVar13;
  undefined8 uVar14;
  undefined1 auVar15 [16];
  undefined1 auVar16 [16];
  undefined1 auVar17 [16];
  float fVar18;
  float fVar20;
  float fVar21;
  float fVar22;
  undefined1 auVar19 [16];
  undefined8 uVar23;
  undefined8 uVar25;
  undefined1 auVar24 [64];
  undefined8 uStack_1e8;
  undefined8 uStack_1e0;
  undefined8 uStack_1d0;
  longlong lStack_1c8;
  uint auStack_1bc [5];
  undefined1 auStack_1a8 [32];
  undefined1 uStack_188;
  ulonglong uStack_178;
  undefined *puStack_170;
  undefined8 uStack_168;
  undefined8 uStack_160;
  undefined1 uStack_148;
  undefined1 auStack_138 [16];
  undefined8 uStack_128;
  undefined8 uStack_120;
  undefined8 uStack_118;
  undefined8 uStack_110;
  undefined1 auStack_108 [16];
  undefined8 uStack_f8;
  undefined8 uStack_f0;
  undefined1 auStack_e8 [16];
  undefined1 auStack_d8 [16];
  undefined8 uStack_c8;
  undefined8 uStack_c0;
  undefined8 uStack_b8;
  undefined8 uStack_b0;
  undefined1 auStack_a8 [16];
  uint *puStack_98;
  code *pcStack_90;
  undefined *puStack_88;
  undefined *puStack_80;
  undefined8 *puStack_78;
  code *pcStack_70;
  undefined *puStack_68;
  undefined *puStack_60;
  
  lVar6 = FUN_1450778c0();
  if (lVar6 == 0) {
    return 0;
  }
  uVar7 = *(undefined8 *)(*param_1 + 0x20);
  lStack_1c8 = 0;
  uStack_1d0 = 0;
  cVar3 = FUN_1401b5620(param_1);
  uVar12 = uStack_1d0;
  if (cVar3 == '\0') {
    return 0;
  }
  FUN_1450782d0(uVar7,auStack_1bc);
  lVar11 = lStack_1c8;
  if (auStack_1bc[0] < 3) goto LAB_1401b4ec8;
  if (8 < auStack_1bc[0]) {
    return 0;
  }
  if ((0x150U >> (auStack_1bc[0] & 0x1f) & 1) != 0) goto LAB_1401b4ec8;
  if ((0x28U >> (auStack_1bc[0] & 0x1f) & 1) != 0) {
    uVar23 = 0;
    uVar25 = 0;
    auStack_1bc[1] = 0x275822c4;
    uStack_128 = 0;
    uStack_120 = 0;
    func_0x000144df5050(auStack_1a8);
    uStack_188 = 0;
    FUN_1401bb6d0(uVar7,auStack_1bc + 1,0);
    cVar3 = func_0x000144da4370(*(undefined1 *)(_DAT_14ab7ef10 + 0x232));
    if (cVar3 == '\0') {
      uVar14 = func_0x000140004380(*(undefined4 *)(*param_1 + 0x2c));
      uStack_178 = 0;
      puStack_170 = &UNK_14438f350;
      uStack_168 = uVar23;
      uStack_160 = uVar25;
      FUN_1443902a0(uVar7,&uStack_1e8,&uStack_178,uVar14);
      if (auStack_1bc[2] == 0) {
        auVar15._4_4_ = _DAT_14615a290;
        auVar15._0_4_ = _DAT_14615a290;
        auVar15._8_4_ = _DAT_14615a290;
        auVar15._12_4_ = _DAT_14615a290;
        auVar2._8_8_ = uStack_1e0;
        auVar2._0_8_ = uStack_1e8;
        auVar15 = vrcpps_avx(auVar15);
        fVar18 = auVar15._0_4_;
        fVar20 = auVar15._4_4_;
        fVar21 = auVar15._8_4_;
        fVar22 = auVar15._12_4_;
        auVar19._0_4_ =
             ((-(fVar18 * _DAT_14615a290) + _DAT_145fc6ed8) * fVar18 + fVar18) * (float)uStack_1e8;
        fVar18 = (float)((ulonglong)uStack_1e8 >> 0x20);
        auVar19._4_4_ = ((-(fVar20 * _DAT_14615a290) + _DAT_145fc6ed8) * fVar20 + fVar20) * fVar18;
        auVar19._8_4_ =
             ((-(fVar21 * _DAT_14615a290) + _DAT_145fc6ed8) * fVar21 + fVar21) * (float)uStack_1e0;
        fVar20 = (float)((ulonglong)uStack_1e0 >> 0x20);
        auVar19._12_4_ = ((-(fVar22 * _DAT_14615a290) + _DAT_145fc6ed8) * fVar22 + fVar22) * fVar20;
        auVar19 = vroundps_avx(auVar19,3);
        auVar16._0_4_ = -(auVar19._0_4_ * _DAT_14615a290) + (float)uStack_1e8;
        auVar16._4_4_ = -(auVar19._4_4_ * _DAT_14615a290) + fVar18;
        auVar16._8_4_ = -(auVar19._8_4_ * _DAT_14615a290) + (float)uStack_1e0;
        auVar16._12_4_ = -(auVar19._12_4_ * _DAT_14615a290) + fVar20;
        auVar15 = vblendps_avx(auVar2,auVar16,3);
        auVar17._0_4_ = (int)auVar19._0_4_;
        auVar17._4_4_ = (int)auVar19._4_4_;
        auVar17._8_4_ = (int)auVar19._8_4_;
        auVar17._12_4_ = (int)auVar19._12_4_;
        auVar19 = vpackssdw_avx(auVar17,auVar17);
        auStack_a8 = vinsertps_avx(auVar15,auVar19,0x30);
        FUN_144384620(auStack_1a8);
      }
      else {
        uStack_b8 = uStack_1e8;
        uStack_b0 = uStack_1e0;
        FUN_144e46a00(auStack_1a8);
      }
      lVar11 = FUN_1401bae50(param_1[2],*(undefined8 *)(*param_1 + 0x230),auStack_1bc + 1);
    }
    else {
      FUN_1401bb1b0(uVar7,&uStack_178);
      lVar11 = FUN_145079070(auStack_1bc + 1,param_1,&uStack_178,0,0,1);
    }
    if (lVar11 == 0) {
      return 0;
    }
    auStack_138._0_12_ = ZEXT812(0);
    auStack_138._12_4_ = 0;
    uStack_178 = CONCAT44(uStack_178._4_4_,0x275822c4);
    func_0x000144df5050(&uStack_168);
    uStack_148 = 0;
    FUN_145078ec0(uVar7,&uStack_178,0);
    lVar8 = FUN_1401bae50(param_1[2],*(undefined8 *)(*param_1 + 0x230),&uStack_178);
    if (lVar8 == 0) {
      return 0;
    }
    uVar4 = func_0x0001401b81b0(*(undefined8 *)(*param_1 + 0x20));
    lVar11 = FUN_1401bba50(lVar6,lVar8,lVar11,auStack_1bc[0] == 5,uVar4);
    goto LAB_1401b4ec8;
  }
  if (auStack_1bc[0] != 7) {
    return 0;
  }
  if (param_1[3] == 0) {
    return 0;
  }
  uVar23 = 0;
  uVar25 = 0;
  auStack_1bc[1] = 0x275822c4;
  uStack_118 = 0;
  uStack_110 = 0;
  func_0x000144df5050(auStack_1a8);
  uStack_188 = 0;
  FUN_145078ec0(uVar7,auStack_1bc + 1,0);
  uVar5 = auStack_1bc[2];
  cVar3 = func_0x000144f84ae0(&uStack_178,auStack_1bc[2]);
  if (cVar3 == '\0') {
    uStack_f8 = uVar23;
    uStack_f0 = uVar25;
    FUN_144e46a00(auStack_1a8);
    lVar11 = FUN_1401bae50(param_1[2],*(undefined8 *)(*param_1 + 0x230),auStack_1bc + 1);
    goto LAB_1401b4ec8;
  }
  auStack_1bc[2] = func_0x0001401b82a0(uVar5);
  uStack_c8 = uVar23;
  uStack_c0 = uVar25;
  FUN_144e46a00(auStack_1a8);
  lVar11 = FUN_1401bae50(param_1[2],*(undefined8 *)(*param_1 + 0x230),auStack_1bc + 1);
  if (lVar11 == 0) {
    lVar11 = 0;
    goto LAB_1401b4ec8;
  }
  puVar9 = (undefined8 *)FUN_144e96700(0x149aafa70);
  if (puVar9 == (undefined8 *)0x0) {
    uVar7 = func_0x000144fc99c0(0,0);
    puVar9 = (undefined8 *)FUN_144fac3c0(uVar7,0x70,0x10);
    if (puVar9 != (undefined8 *)0x0) goto LAB_1401b5194;
    puVar9 = (undefined8 *)0x0;
  }
  else {
LAB_1401b5194:
    FUN_144da6330(puVar9);
    *(undefined4 *)(puVar9 + 2) = 0;
    *(undefined4 *)(puVar9 + 3) = 0x3f800000;
    *puVar9 = &UNK_1465eaa80;
    *(undefined4 *)((longlong)puVar9 + 0x24) = 0;
    puVar9[5] = puVar9 + 6;
    puVar9[8] = puVar9 + 9;
    puVar9[7] = 1;
    puVar9[0xb] = puVar9 + 0xc;
    puVar9[10] = 1;
    *(undefined4 *)(puVar9 + 0xd) = 0x3f800000;
    *(byte *)((longlong)puVar9 + 0x6c) = *(byte *)((longlong)puVar9 + 0x6c) & 0xfc;
    *(undefined8 *)((longlong)puVar9 + 0x1c) = 0x100000002;
  }
  auStack_d8._0_12_ = ZEXT812(0);
  auStack_d8._12_4_ = 0;
  auVar24 = ZEXT1664(auStack_d8);
  uVar7 = FUN_1401b87f0(lVar6);
  auStack_e8 = auVar24._0_16_;
  lVar10 = FUN_1401b5500(lVar6,uVar7,uVar12,0,auStack_e8);
  uVar7 = func_0x000144f01ca0(lVar10);
  puStack_78 = &uStack_1e8;
  pcStack_70 = FUN_144391670;
  puStack_68 = &SUB_140004380;
  puStack_60 = &SUB_140004380;
  FUN_1401b5b50(param_1,uVar7);
  lVar8 = *(longlong *)(param_1[3] + 0x18);
  uVar5 = *(uint *)((longlong)puVar9 + 0x24);
  if (uVar5 == *(uint *)(puVar9 + 4)) {
    uVar13 = 1;
    if (1 < uVar5) {
      uVar13 = uVar5 >> 1;
    }
    FUN_14438ea50(puVar9 + 4,uVar13 + uVar5);
    uVar5 = *(uint *)((longlong)puVar9 + 0x24);
  }
  *(uint *)((longlong)puVar9 + 0x24) = uVar5 + 1;
  if (puVar9[5] != 0) {
    *(longlong *)(puVar9[5] + (ulonglong)uVar5 * 8) = lVar8;
    LOCK();
    piVar1 = (int *)(lVar8 + 0x10);
    *piVar1 = *piVar1 + 1;
    UNLOCK();
  }
  uVar5 = *(uint *)((longlong)puVar9 + 0x3c);
  if (uVar5 == *(uint *)(puVar9 + 7)) {
    uVar13 = 1;
    if (1 < uVar5) {
      uVar13 = uVar5 >> 1;
    }
    FUN_14438ea50(puVar9 + 7,uVar13 + uVar5);
    uVar5 = *(uint *)((longlong)puVar9 + 0x3c);
  }
  *(uint *)((longlong)puVar9 + 0x3c) = uVar5 + 1;
  if (puVar9[8] != 0) {
    *(longlong *)(puVar9[8] + (ulonglong)uVar5 * 8) = lVar10;
    LOCK();
    *(int *)(lVar10 + 0x10) = *(int *)(lVar10 + 0x10) + 1;
    UNLOCK();
  }
  uVar5 = *(uint *)((longlong)puVar9 + 0x54);
  if (uVar5 == *(uint *)(puVar9 + 10)) {
    uVar13 = 1;
    if (1 < uVar5) {
      uVar13 = uVar5 >> 1;
    }
    FUN_14222f020(puVar9 + 10,uVar13 + uVar5);
    uVar5 = *(uint *)((longlong)puVar9 + 0x54);
  }
  *(uint *)((longlong)puVar9 + 0x54) = uVar5 + 1;
  *(undefined4 *)(puVar9[0xb] + (ulonglong)uVar5 * 4) = 0xbf800000;
  *(byte *)((longlong)puVar9 + 0x6c) = *(byte *)((longlong)puVar9 + 0x6c) | 2;
  lVar11 = FUN_1401bbcd0(lVar6,puVar9,lVar11,uStack_178 & 0xffffffff);
LAB_1401b4ec8:
  if (lVar11 == 0) {
    return 0;
  }
  if ((int)param_1[7] == 2) {
    lVar11 = FUN_1401b4790(lVar6);
    uVar12 = FUN_140459350(lVar6,uVar12);
  }
  auStack_108._0_12_ = ZEXT812(0);
  auStack_108._12_4_ = 0;
  lVar6 = FUN_1401b5500(lVar6,lVar11,uVar12,0,auStack_108);
  uVar7 = func_0x000144f01ca0(lVar6);
  puStack_98 = auStack_1bc + 1;
  pcStack_90 = FUN_144391670;
  puStack_88 = &SUB_140004380;
  puStack_80 = &SUB_140004380;
  FUN_1401b5b50(param_1,uVar7);
  uVar4 = func_0x000145077fb0(*(undefined8 *)(*param_1 + 0x20));
  *(undefined1 *)(lVar6 + 0x20) = uVar4;
  return lVar6;
}

