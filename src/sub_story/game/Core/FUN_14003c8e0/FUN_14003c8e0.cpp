// Recovered from game_scarlett_master.exe (GTA VI, Xbox Series X, PE32+ x64)
// Address: 14003c8e0  size: 1088 bytes
// Name:    FUN_14003c8e0
// Subsystem: core
//
// Referenced strings (0 in this body, 0 including direct callees):
// Callees: FUN_14003cd20, FUN_14003d320, FUN_14003e3e0, FUN_144f662d0, FUN_14003d620, FUN_14073b6a0, FUN_144e50f80, FUN_14003e5e0, FUN_14003ce90, FUN_14003d120, FUN_14003d350, FUN_14003e060
//
// Generated decompilation. Formatting follows MiscRef/GTAVSRC conventions;
// identifiers are recovered, not original. See ../../../README.md.

#include "gta6decomp/rage_types.h"


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_14003c8e0(longlong param_1)

{
  float fVar1;
  int iVar2;
  uint uVar3;
  char cVar4;
  uint uVar5;
  longlong lVar6;
  ulonglong uVar7;
  longlong lVar8;
  ulonglong uVar9;
  ulonglong uVar10;
  longlong unaff_GS_OFFSET;
  bool bVar11;
  bool bVar12;
  float fVar13;
  undefined4 uVar14;
  undefined1 auVar15 [16];
  undefined1 auVar16 [16];
  undefined1 auVar17 [16];
  undefined1 auVar18 [16];
  undefined1 auVar19 [16];
  undefined1 auVar20 [16];
  undefined1 auVar21 [64];
  undefined1 auVar22 [64];
  int iStack_c8;
  int iStack_c4;
  int iStack_c0;
  int iStack_bc;
  undefined1 auStack_b8 [16];
  undefined8 uStack_a8;
  undefined8 uStack_a0;
  undefined8 uStack_98;
  undefined8 uStack_90;
  undefined1 aauStack_88 [5] [16];
  
  uVar9 = _DAT_14ab56e38;
  if (_DAT_14ab56e38 == 0) {
    return;
  }
  uVar10 = *(ulonglong *)(param_1 + 8) & 0xfffffffffffffff0;
  if (uVar10 == 0) {
    return;
  }
  if (_DAT_14ab56e38 == uVar10) {
    return;
  }
  cVar4 = FUN_144f662d0(uVar10);
  if (cVar4 != '\0') {
    return;
  }
  if (DAT_1499a815a == '\x01') {
    FUN_14003d120(param_1);
    FUN_14003e3e0(param_1,0);
    goto LAB_14003c95b;
  }
  cVar4 = FUN_14003cd20(param_1,uVar10,uVar9);
  if (cVar4 == '\0') goto LAB_14003c95b;
  auVar15._0_12_ = ZEXT812(0);
  auVar15._12_4_ = 0;
  *(undefined4 *)(param_1 + 0xd48) = 0;
  *(undefined1 (*) [16])(param_1 + 0xd38) = auVar15;
  uVar14 = _DAT_145f43778;
  *(undefined4 *)(param_1 + 0xd54) = _DAT_145f43778;
  *(undefined4 *)(param_1 + 0xd58) = uVar14;
  *(undefined4 *)(param_1 + 0xd5c) = uVar14;
  *(undefined4 *)(param_1 + 0xd60) = uVar14;
  *(undefined4 *)(param_1 + 0xd64) = 1;
  uStack_98 = *(undefined8 *)(uVar10 + 0x70);
  uStack_90 = *(undefined8 *)(uVar10 + 0x78);
  auVar22 = ZEXT1664(*(undefined1 (*) [16])(uVar9 + 0x70));
  func_0x000144dc3790(&uStack_98,auStack_b8);
  if (*(char *)(*(longlong *)(*(longlong *)(unaff_GS_OFFSET + 0x58) + (ulonglong)__tls_index * 8) +
               8) == '\0') {
    func_0x0001455db994();
  }
  lVar8 = **(longlong **)(unaff_GS_OFFSET + 0x58);
  lVar6 = *(longlong *)(lVar8 + 0x1448);
  if (lVar6 == 0) {
    iStack_c4 = 0;
  }
  if (*(char *)(*(longlong *)(*(longlong *)(unaff_GS_OFFSET + 0x58) + (ulonglong)__tls_index * 8) +
               8) == '\0') {
    func_0x0001455db994();
    lVar6 = *(longlong *)(lVar8 + 0x1448);
  }
  if (lVar6 == 0) {
    iStack_c8 = 0;
  }
  FUN_14003d620(param_1,&iStack_c4,&iStack_c8,DAT_1499a8158);
  FUN_14003d350(param_1);
  FUN_14003ce90(param_1);
  fVar13 = (float)FUN_144e50f80(uVar10,uVar9);
  iVar2 = iStack_c4;
  fVar1 = fVar13 * fVar13;
  auVar21 = ZEXT1664(CONCAT412(fVar1,CONCAT48(fVar1,CONCAT44(fVar1,fVar1))));
  if (iStack_c4 == 0) {
LAB_14003cafa:
    bVar12 = false;
LAB_14003cafd:
    bVar11 = false;
  }
  else {
    auVar15 = vpunpckhwd_avx(auVar22._0_16_,auVar22._0_16_);
    auVar15 = vpsrad_avx(auVar15,0x10);
    auVar15 = vcvtdq2ps_avx(auVar15);
    auVar15 = vshufpd_avx(auVar15,auVar15,3);
    auVar22 = ZEXT1664(CONCAT412(auVar15._12_4_ * _UNK_146159c9c + auVar22._12_4_,
                                 CONCAT48(auVar15._8_4_ * _UNK_146159c98 + auVar22._8_4_,
                                          CONCAT44(auVar15._4_4_ * _UNK_146159c94 + auVar22._4_4_,
                                                   auVar15._0_4_ * _DAT_146159c90 + auVar22._0_4_)))
                      );
    cVar4 = func_0x00014003ce20(param_1);
    auVar17 = auVar21._0_16_;
    if ((cVar4 != '\0') && (fVar1 = *(float *)(param_1 + 0xe04), fVar13 < fVar1)) {
      fVar1 = fVar1 * fVar1;
      auVar17._4_4_ = fVar1;
      auVar17._0_4_ = fVar1;
      auVar17._8_4_ = fVar1;
      auVar17._12_4_ = fVar1;
    }
    auVar20._0_12_ = ZEXT812(0);
    auVar20._12_4_ = 0;
    auVar15 = vsubps_avx(auStack_b8,auVar22._0_16_);
    auVar18._0_4_ = auVar15._0_4_ * auVar15._0_4_;
    auVar18._4_4_ = auVar15._4_4_ * auVar15._4_4_;
    auVar18._8_4_ = auVar15._8_4_ * auVar15._8_4_;
    auVar18._12_4_ = auVar15._12_4_ * auVar15._12_4_;
    auVar15 = vblendps_avx(auVar18,auVar20,8);
    auVar15 = vhaddps_avx(auVar15,auVar15);
    auVar15 = vhaddps_avx(auVar15,auVar15);
    auVar22 = ZEXT1664(auVar15);
    auVar15 = vcmpps_avx(auVar15,auVar17,6);
    if ((((SUB161(auVar15 >> 0x1f,0) & 1) != 0 || (SUB161(auVar15 >> 0x3f,0) & 1) != 0) ||
        (SUB161(auVar15 >> 0x5f,0) & 1) != 0) || auVar15[0xf] < '\0') goto LAB_14003cafa;
    cVar4 = FUN_14003d320(*(undefined8 *)(param_1 + 8),uVar9);
    if (cVar4 != '\0') goto LAB_14003c95b;
    bVar11 = false;
    iStack_bc = iVar2;
    FUN_14003e060(param_1,uVar9,&iStack_bc,0);
    bVar12 = true;
    if (*(char *)(param_1 + 0xc30) == '\x01') {
      lVar8 = func_0x000144da6540(*(undefined4 *)(uVar9 + 0x9c));
      bVar12 = true;
      if (lVar8 != 0) {
        uVar14 = FUN_14003e5e0(uVar9,*(undefined4 *)(param_1 + 0xc50));
        *(undefined4 *)(param_1 + 0xc5c) = uVar14;
        uVar5 = _DAT_1499a91fc;
        do {
          bVar12 = true;
          if (uVar5 == _DAT_1499a91f8) goto LAB_14003cbcd;
          LOCK();
          bVar11 = uVar5 != _DAT_1499a91fc;
          uVar3 = uVar5 + 1;
          if (bVar11) {
            uVar5 = _DAT_1499a91fc;
            uVar3 = _DAT_1499a91fc;
          }
          _DAT_1499a91fc = uVar3;
          UNLOCK();
        } while (bVar11);
        uVar7 = (ulonglong)uVar5;
        *(ulonglong *)(uVar7 * 0x18 + 0x1499a9200) = uVar10;
        *(undefined4 *)(uVar7 * 0x18 + 0x1499a9208) = uVar14;
        *(int *)(uVar7 * 0x18 + 0x1499a920c) = auVar22._0_4_;
        *(int *)(uVar7 * 0x18 + 0x1499a9210) = iVar2;
LAB_14003cbcd:
        bVar11 = true;
        goto LAB_14003cb00;
      }
      goto LAB_14003cafd;
    }
  }
LAB_14003cb00:
  iVar2 = iStack_c8;
  if (iStack_c8 != 0) {
    uStack_a8 = _DAT_1499a8140;
    uStack_a0 = uRam00000001499a8148;
    FUN_14073b6a0(aauStack_88,uVar9);
    auVar19._0_12_ = ZEXT812(0);
    auVar19._12_4_ = 0;
    auVar15 = vsubps_avx(auStack_b8,aauStack_88[0]);
    auVar16._0_4_ = auVar15._0_4_ * auVar15._0_4_;
    auVar16._4_4_ = auVar15._4_4_ * auVar15._4_4_;
    auVar16._8_4_ = auVar15._8_4_ * auVar15._8_4_;
    auVar16._12_4_ = auVar15._12_4_ * auVar15._12_4_;
    auVar15 = vblendps_avx(auVar16,auVar19,8);
    auVar15 = vhaddps_avx(auVar15,auVar15);
    auVar15 = vhaddps_avx(auVar15,auVar15);
    auVar22 = ZEXT1664(auVar15);
    auVar15 = vcmpps_avx(auVar15,auVar21._0_16_,6);
    if ((((SUB161(auVar15 >> 0x1f,0) & 1) == 0 && (SUB161(auVar15 >> 0x3f,0) & 1) == 0) &&
        (SUB161(auVar15 >> 0x5f,0) & 1) == 0) && -1 < auVar15[0xf]) {
      iStack_c0 = iVar2;
      FUN_14003e060(param_1,uVar9,&iStack_c0,1);
      if (((!bVar11) && (*(char *)(param_1 + 0xc30) == '\x01')) &&
         (lVar8 = func_0x000144da6540(*(undefined4 *)(uVar9 + 0x9c)), lVar8 != 0)) {
        uVar14 = FUN_14003e5e0(uVar9,*(undefined4 *)(param_1 + 0xc50));
        *(undefined4 *)(param_1 + 0xc5c) = uVar14;
        uVar5 = _DAT_1499a91fc;
        do {
          if (uVar5 == _DAT_1499a91f8) goto LAB_14003c95b;
          LOCK();
          bVar12 = uVar5 != _DAT_1499a91fc;
          uVar3 = uVar5 + 1;
          if (bVar12) {
            uVar5 = _DAT_1499a91fc;
            uVar3 = _DAT_1499a91fc;
          }
          _DAT_1499a91fc = uVar3;
          UNLOCK();
        } while (bVar12);
        uVar9 = (ulonglong)uVar5;
        *(ulonglong *)(uVar9 * 0x18 + 0x1499a9200) = uVar10;
        *(undefined4 *)(uVar9 * 0x18 + 0x1499a9208) = uVar14;
        *(int *)(uVar9 * 0x18 + 0x1499a920c) = auVar22._0_4_;
        *(int *)(uVar9 * 0x18 + 0x1499a9210) = iVar2;
      }
LAB_14003c95b:
      *(undefined4 *)(param_1 + 0xd68) = 0;
      return;
    }
  }
  *(undefined4 *)(param_1 + 0xd68) = 0;
  if (bVar12) {
    return;
  }
  FUN_14003d120(param_1);
  return;
}

