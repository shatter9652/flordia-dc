// Recovered from game_scarlett_master.exe (GTA VI, Xbox Series X, PE32+ x64)
// Address: 1401b4750  size: 49 bytes
// Name:    FUN_1401b4750
// Subsystem: core
//
// Referenced strings (0 in this body, 0 including direct callees):
// Callees: FUN_145242f60
//
// Generated decompilation. Formatting follows MiscRef/GTAVSRC conventions;
// identifiers are recovered, not original. See ../../../README.md.

#include "gta6decomp/rage_types.h"


/* WARNING: Type propagation algorithm not settling */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

longlong FUN_1401b4750(longlong *param_1)

{
  int *piVar1;
  undefined1 auVar2 [16];
  undefined1 auVar3 [16];
  undefined4 uVar4;
  ulonglong uVar5;
  int iVar6;
  char cVar7;
  undefined1 uVar8;
  int iVar9;
  uint uVar10;
  longlong lVar11;
  undefined8 uVar12;
  longlong lVar13;
  undefined8 *puVar14;
  longlong lVar15;
  longlong lVar16;
  undefined8 uVar17;
  uint uVar18;
  undefined8 uVar19;
  undefined1 auVar20 [16];
  undefined1 auVar21 [16];
  undefined1 auVar22 [16];
  float fVar23;
  float fVar25;
  float fVar26;
  float fVar27;
  undefined1 auVar24 [16];
  undefined8 uVar28;
  undefined8 uVar30;
  ulonglong uVar31;
  undefined1 auVar29 [64];
  ulonglong uStack_1e8;
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
  ulonglong uStack_f0;
  undefined1 auStack_e8 [16];
  undefined1 auStack_d8 [16];
  undefined8 uStack_c8;
  undefined8 uStack_c0;
  ulonglong uStack_b8;
  undefined8 uStack_b0;
  undefined1 auStack_a8 [16];
  undefined8 uStack_98;
  code *pcStack_90;
  undefined *puStack_88;
  undefined *puStack_80;
  ulonglong *puStack_78;
  code *pcStack_70;
  undefined *puStack_68;
  undefined *puStack_60;
  undefined1 auStack_58 [16];
  
  iVar9 = FUN_145242f60(*(undefined8 *)(*param_1 + 0x20));
  if (iVar9 != 0xd) {
    auStack_58._0_12_ = ZEXT812(0);
    auStack_58._12_4_ = 0;
    uStack_98._0_4_ = 0x275822c4;
    auStack_108._8_8_ = &UNK_1401b9a7a;
    func_0x000144df5050(&puStack_88);
    puStack_68 = (undefined *)((ulonglong)puStack_68 & 0xffffffffffffff00);
    auStack_108._8_8_ = &UNK_1401b9a94;
    FUN_14045a310(*(undefined8 *)(*param_1 + 0x20),&uStack_98,0);
    auStack_108._8_8_ = &UNK_1401b9aa8;
    FUN_1452436f0(*(undefined8 *)(*param_1 + 0x20),(longlong)&uStack_c0 + 4);
    iVar9 = uStack_c0._4_4_;
    if (uStack_c0._4_4_ == 0) {
      if (uStack_98._4_4_ == 0) {
        auStack_108._8_8_ = &UNK_1401b9bc2;
        FUN_14438f660(*(undefined8 *)(*param_1 + 0x20),&uStack_b8);
      }
      else {
        auStack_108._8_8_ = &UNK_1401b9aca;
        FUN_1401b9bf0(*(undefined8 *)(*param_1 + 0x20),&uStack_b8);
      }
      auStack_d8[8] = 0;
      auVar2._8_8_ = 0;
      auVar2._0_8_ = auStack_d8._8_8_;
      auStack_d8 = auVar2 << 0x40;
      auStack_108._8_8_ = &UNK_1401b9aef;
      lVar11 = FUN_145079070(&uStack_98,param_1,&uStack_b8,0);
      if (lVar11 == 0) {
        return 0;
      }
    }
    else {
      if (1 < uStack_c0._4_4_ - 1U) {
        return 0;
      }
      auStack_108._8_8_ = &UNK_1401b9b40;
      lVar11 = FUN_1401bae50(param_1[2],*(undefined8 *)(*param_1 + 0x230),&uStack_98);
      if (lVar11 == 0) {
        return 0;
      }
      lVar16 = *param_1;
      uVar12 = *(undefined8 *)(lVar16 + 0x20);
      uStack_b8 = uStack_b8 & 0xffffffff00000000;
      uStack_c0 = uStack_c0 & 0xffffffff00000000;
      auStack_108._8_8_ = &UNK_1401b9b6e;
      FUN_144390a80(uVar12,&uStack_b8);
      auStack_108._8_8_ = &UNK_1401b9b79;
      FUN_144390ab0(uVar12,&uStack_c0);
      iVar6 = uStack_98._4_4_;
      uVar5 = uStack_b8;
      uVar31 = uStack_c0;
      uVar4 = (undefined4)uStack_c0;
      auStack_108._8_8_ = &UNK_1401b9b8e;
      uVar12 = func_0x000144f01ca0(lVar11);
      auVar2 = auStack_d8;
      if (iVar6 == 0) {
        auStack_d8[0] = iVar9 == 1;
        auStack_108._8_8_ = &UNK_1401b9be0;
        FUN_1443914d0(lVar16,uVar12,uVar5 & 0xffffffff,uVar31 & 0xffffffff);
      }
      else {
        auStack_d8._0_4_ = uVar4;
        auVar20 = auStack_d8;
        auStack_d8._9_7_ = auVar2._9_7_;
        auStack_d8._0_8_ = auVar20._0_8_;
        auStack_d8[8] = iVar9 == 1;
        auStack_108._8_8_ = &UNK_1401b9bb3;
        FUN_14045a030(lVar16,0xf5d26b83,uVar12,uVar5 & 0xffffffff);
      }
    }
    auStack_108._8_8_ = &UNK_1401b9b03;
    uVar8 = func_0x000145077fb0(*(undefined8 *)(*param_1 + 0x20));
    *(undefined1 *)(lVar11 + 0x20) = uVar8;
    return lVar11;
  }
  lVar11 = FUN_1450778c0();
  if (lVar11 == 0) {
    return 0;
  }
  uVar12 = *(undefined8 *)(*param_1 + 0x20);
  lStack_1c8 = 0;
  uStack_1d0 = 0;
  cVar7 = FUN_1401b5620(param_1);
  uVar17 = uStack_1d0;
  if (cVar7 == '\0') {
    return 0;
  }
  FUN_1450782d0(uVar12,auStack_1bc);
  lVar16 = lStack_1c8;
  if (auStack_1bc[0] < 3) goto code_r0x0001401b4ec8;
  if (8 < auStack_1bc[0]) {
    return 0;
  }
  if ((0x150U >> (auStack_1bc[0] & 0x1f) & 1) != 0) goto code_r0x0001401b4ec8;
  if ((0x28U >> (auStack_1bc[0] & 0x1f) & 1) != 0) {
    uVar28 = 0;
    uVar30 = 0;
    auStack_1bc[1] = 0x275822c4;
    uStack_128 = 0;
    uStack_120 = 0;
    func_0x000144df5050(auStack_1a8);
    uStack_188 = 0;
    FUN_1401bb6d0(uVar12,auStack_1bc + 1,0);
    cVar7 = func_0x000144da4370(*(undefined1 *)(_DAT_14ab7ef10 + 0x232));
    if (cVar7 == '\0') {
      uVar19 = func_0x000140004380(*(undefined4 *)(*param_1 + 0x2c));
      uStack_178 = 0;
      puStack_170 = &UNK_14438f350;
      uStack_168 = uVar28;
      uStack_160 = uVar30;
      FUN_1443902a0(uVar12,&uStack_1e8,&uStack_178,uVar19);
      if (auStack_1bc[2] == 0) {
        auVar20._4_4_ = _DAT_14615a290;
        auVar20._0_4_ = _DAT_14615a290;
        auVar20._8_4_ = _DAT_14615a290;
        auVar20._12_4_ = _DAT_14615a290;
        auVar3._8_8_ = uStack_1e0;
        auVar3._0_8_ = uStack_1e8;
        auVar2 = vrcpps_avx(auVar20);
        fVar23 = auVar2._0_4_;
        fVar25 = auVar2._4_4_;
        fVar26 = auVar2._8_4_;
        fVar27 = auVar2._12_4_;
        auVar24._0_4_ =
             ((-(fVar23 * _DAT_14615a290) + _DAT_145fc6ed8) * fVar23 + fVar23) * (float)uStack_1e8;
        fVar23 = (float)(uStack_1e8 >> 0x20);
        auVar24._4_4_ = ((-(fVar25 * _DAT_14615a290) + _DAT_145fc6ed8) * fVar25 + fVar25) * fVar23;
        auVar24._8_4_ =
             ((-(fVar26 * _DAT_14615a290) + _DAT_145fc6ed8) * fVar26 + fVar26) * (float)uStack_1e0;
        fVar25 = (float)((ulonglong)uStack_1e0 >> 0x20);
        auVar24._12_4_ = ((-(fVar27 * _DAT_14615a290) + _DAT_145fc6ed8) * fVar27 + fVar27) * fVar25;
        auVar20 = vroundps_avx(auVar24,3);
        auVar21._0_4_ = -(auVar20._0_4_ * _DAT_14615a290) + (float)uStack_1e8;
        auVar21._4_4_ = -(auVar20._4_4_ * _DAT_14615a290) + fVar23;
        auVar21._8_4_ = -(auVar20._8_4_ * _DAT_14615a290) + (float)uStack_1e0;
        auVar21._12_4_ = -(auVar20._12_4_ * _DAT_14615a290) + fVar25;
        auVar2 = vblendps_avx(auVar3,auVar21,3);
        auVar22._0_4_ = (int)auVar20._0_4_;
        auVar22._4_4_ = (int)auVar20._4_4_;
        auVar22._8_4_ = (int)auVar20._8_4_;
        auVar22._12_4_ = (int)auVar20._12_4_;
        auVar20 = vpackssdw_avx(auVar22,auVar22);
        auStack_a8 = vinsertps_avx(auVar2,auVar20,0x30);
        FUN_144384620(auStack_1a8);
      }
      else {
        uStack_b8 = uStack_1e8;
        uStack_b0 = uStack_1e0;
        FUN_144e46a00(auStack_1a8);
      }
      lVar16 = FUN_1401bae50(param_1[2],*(undefined8 *)(*param_1 + 0x230),auStack_1bc + 1);
    }
    else {
      FUN_1401bb1b0(uVar12,&uStack_178);
      lVar16 = FUN_145079070(auStack_1bc + 1,param_1,&uStack_178,0,0,1);
    }
    if (lVar16 == 0) {
      return 0;
    }
    auStack_138._0_12_ = ZEXT812(0);
    auStack_138._12_4_ = 0;
    uStack_178 = CONCAT44(uStack_178._4_4_,0x275822c4);
    func_0x000144df5050(&uStack_168);
    uStack_148 = 0;
    FUN_145078ec0(uVar12,&uStack_178,0);
    lVar13 = FUN_1401bae50(param_1[2],*(undefined8 *)(*param_1 + 0x230),&uStack_178);
    if (lVar13 == 0) {
      return 0;
    }
    uVar8 = func_0x0001401b81b0(*(undefined8 *)(*param_1 + 0x20));
    lVar16 = FUN_1401bba50(lVar11,lVar13,lVar16,auStack_1bc[0] == 5,uVar8);
    goto code_r0x0001401b4ec8;
  }
  if (auStack_1bc[0] != 7) {
    return 0;
  }
  if (param_1[3] == 0) {
    return 0;
  }
  uVar28 = 0;
  uVar31 = 0;
  auStack_1bc[1] = 0x275822c4;
  uStack_118 = 0;
  uStack_110 = 0;
  func_0x000144df5050(auStack_1a8);
  uStack_188 = 0;
  FUN_145078ec0(uVar12,auStack_1bc + 1,0);
  uVar10 = auStack_1bc[2];
  cVar7 = func_0x000144f84ae0(&uStack_178,auStack_1bc[2]);
  if (cVar7 == '\0') {
    uStack_f8 = uVar28;
    uStack_f0 = uVar31;
    FUN_144e46a00(auStack_1a8);
    lVar16 = FUN_1401bae50(param_1[2],*(undefined8 *)(*param_1 + 0x230),auStack_1bc + 1);
    goto code_r0x0001401b4ec8;
  }
  auStack_1bc[2] = func_0x0001401b82a0(uVar10);
  uStack_c8 = uVar28;
  uStack_c0 = uVar31;
  FUN_144e46a00(auStack_1a8);
  lVar16 = FUN_1401bae50(param_1[2],*(undefined8 *)(*param_1 + 0x230),auStack_1bc + 1);
  if (lVar16 == 0) {
    lVar16 = 0;
    goto code_r0x0001401b4ec8;
  }
  puVar14 = (undefined8 *)FUN_144e96700(0x149aafa70);
  if (puVar14 == (undefined8 *)0x0) {
    uVar12 = func_0x000144fc99c0(0,0);
    puVar14 = (undefined8 *)FUN_144fac3c0(uVar12,0x70,0x10);
    if (puVar14 != (undefined8 *)0x0) goto code_r0x0001401b5194;
    puVar14 = (undefined8 *)0x0;
  }
  else {
code_r0x0001401b5194:
    FUN_144da6330(puVar14);
    *(undefined4 *)(puVar14 + 2) = 0;
    *(undefined4 *)(puVar14 + 3) = 0x3f800000;
    *puVar14 = &UNK_1465eaa80;
    *(undefined4 *)((longlong)puVar14 + 0x24) = 0;
    puVar14[5] = puVar14 + 6;
    puVar14[8] = puVar14 + 9;
    puVar14[7] = 1;
    puVar14[0xb] = puVar14 + 0xc;
    puVar14[10] = 1;
    *(undefined4 *)(puVar14 + 0xd) = 0x3f800000;
    *(byte *)((longlong)puVar14 + 0x6c) = *(byte *)((longlong)puVar14 + 0x6c) & 0xfc;
    *(undefined8 *)((longlong)puVar14 + 0x1c) = 0x100000002;
  }
  auStack_d8._0_12_ = ZEXT812(0);
  auStack_d8._12_4_ = 0;
  auVar29 = ZEXT1664(auStack_d8);
  uVar12 = FUN_1401b87f0(lVar11);
  auStack_e8 = auVar29._0_16_;
  lVar15 = FUN_1401b5500(lVar11,uVar12,uVar17,0,auStack_e8);
  uVar12 = func_0x000144f01ca0(lVar15);
  puStack_78 = &uStack_1e8;
  pcStack_70 = FUN_144391670;
  puStack_68 = &SUB_140004380;
  puStack_60 = &SUB_140004380;
  FUN_1401b5b50(param_1,uVar12);
  lVar13 = *(longlong *)(param_1[3] + 0x18);
  uVar10 = *(uint *)((longlong)puVar14 + 0x24);
  if (uVar10 == *(uint *)(puVar14 + 4)) {
    uVar18 = 1;
    if (1 < uVar10) {
      uVar18 = uVar10 >> 1;
    }
    FUN_14438ea50(puVar14 + 4,uVar18 + uVar10);
    uVar10 = *(uint *)((longlong)puVar14 + 0x24);
  }
  *(uint *)((longlong)puVar14 + 0x24) = uVar10 + 1;
  if (puVar14[5] != 0) {
    *(longlong *)(puVar14[5] + (ulonglong)uVar10 * 8) = lVar13;
    LOCK();
    piVar1 = (int *)(lVar13 + 0x10);
    *piVar1 = *piVar1 + 1;
    UNLOCK();
  }
  uVar10 = *(uint *)((longlong)puVar14 + 0x3c);
  if (uVar10 == *(uint *)(puVar14 + 7)) {
    uVar18 = 1;
    if (1 < uVar10) {
      uVar18 = uVar10 >> 1;
    }
    FUN_14438ea50(puVar14 + 7,uVar18 + uVar10);
    uVar10 = *(uint *)((longlong)puVar14 + 0x3c);
  }
  *(uint *)((longlong)puVar14 + 0x3c) = uVar10 + 1;
  if (puVar14[8] != 0) {
    *(longlong *)(puVar14[8] + (ulonglong)uVar10 * 8) = lVar15;
    LOCK();
    *(int *)(lVar15 + 0x10) = *(int *)(lVar15 + 0x10) + 1;
    UNLOCK();
  }
  uVar10 = *(uint *)((longlong)puVar14 + 0x54);
  if (uVar10 == *(uint *)(puVar14 + 10)) {
    uVar18 = 1;
    if (1 < uVar10) {
      uVar18 = uVar10 >> 1;
    }
    FUN_14222f020(puVar14 + 10,uVar18 + uVar10);
    uVar10 = *(uint *)((longlong)puVar14 + 0x54);
  }
  *(uint *)((longlong)puVar14 + 0x54) = uVar10 + 1;
  *(undefined4 *)(puVar14[0xb] + (ulonglong)uVar10 * 4) = 0xbf800000;
  *(byte *)((longlong)puVar14 + 0x6c) = *(byte *)((longlong)puVar14 + 0x6c) | 2;
  lVar16 = FUN_1401bbcd0(lVar11,puVar14,lVar16,uStack_178 & 0xffffffff);
code_r0x0001401b4ec8:
  if (lVar16 == 0) {
    return 0;
  }
  if ((int)param_1[7] == 2) {
    lVar16 = FUN_1401b4790(lVar11);
    uVar17 = FUN_140459350(lVar11,uVar17);
  }
  auStack_108._0_12_ = ZEXT812(0);
  auStack_108._12_4_ = 0;
  lVar11 = FUN_1401b5500(lVar11,lVar16,uVar17,0,auStack_108);
  uVar12 = func_0x000144f01ca0(lVar11);
  uStack_98 = auStack_1bc + 1;
  pcStack_90 = FUN_144391670;
  puStack_88 = &SUB_140004380;
  puStack_80 = &SUB_140004380;
  FUN_1401b5b50(param_1,uVar12);
  uVar8 = func_0x000145077fb0(*(undefined8 *)(*param_1 + 0x20));
  *(undefined1 *)(lVar11 + 0x20) = uVar8;
  return lVar11;
}

