// Recovered from game_scarlett_master.exe (GTA VI, Xbox Series X, PE32+ x64)
// Address: 1401906a0  size: 3408 bytes
// Name:    FUN_1401906a0
// Subsystem: core
//
// Referenced strings (0 in this body, 0 including direct callees):
// Callees: FUN_1403bbd50, FUN_144546680, FUN_140191490, FUN_145123660, FUN_1401919c0, FUN_144dd9c70, FUN_140191700, FUN_140191410, FUN_14549ce10
//
// Generated decompilation. Formatting follows MiscRef/GTAVSRC conventions;
// identifiers are recovered, not original. See ../../../README.md.

#include "gta6decomp/rage_types.h"


/* WARNING: Removing unreachable block (ram,0x000140951a75) */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1401906a0(longlong param_1)

{
  byte *pbVar1;
  ushort *puVar2;
  byte bVar3;
  char cVar4;
  char cVar5;
  longlong lVar6;
  undefined8 uVar7;
  longlong lVar8;
  longlong lVar9;
  longlong lVar10;
  longlong *plVar11;
  ulonglong uVar12;
  int iVar13;
  int iVar14;
  int iVar15;
  float fVar16;
  undefined1 auVar17 [16];
  undefined1 extraout_var [56];
  undefined1 extraout_var_00 [56];
  undefined1 auVar18 [16];
  undefined1 auVar19 [16];
  undefined1 in_register_000012c4 [12];
  undefined1 auVar20 [64];
  undefined1 auVar21 [64];
  undefined1 auVar22 [16];
  undefined1 auVar24 [64];
  uint uVar25;
  float fVar26;
  undefined1 auVar27 [64];
  uint uVar28;
  float fVar29;
  undefined1 auVar23 [64];
  
  FUN_1401919c0();
  if ((_DAT_14aa31a78 < _DAT_145fc6ed8) || (iVar13 = 0, _DAT_146df5b80 < _DAT_145fc6ed8)) {
    lVar6 = *(longlong *)(*(longlong *)(param_1 + 0x48) + 0x10);
    if (lVar6 == 0) {
      iVar13 = -200;
    }
    else {
      iVar13 = *(int *)(lVar6 + 0x110);
    }
  }
  iVar14 = (int)*(short *)(&UNK_14662c140 + (longlong)*(short *)(param_1 + 0x644) * 2);
  auVar20._0_8_ = FUN_140191700(param_1);
  auVar20._8_56_ = extraout_var;
  auVar20 = ZEXT1664(auVar20._0_16_);
  lVar6 = func_0x000144da3240(*(undefined8 *)(param_1 + 0x40));
  cVar4 = FUN_140191410(*(undefined4 *)(lVar6 + 0x9c));
  cVar5 = FUN_1403bbd50(*(undefined4 *)(lVar6 + 0x9c));
  auVar27 = ZEXT464(_DAT_14615af00);
  auVar21 = ZEXT1264(ZEXT812(0));
  auVar17 = ZEXT416(_DAT_14615af00);
  if (cVar5 == '\0') {
    auVar17 = ZEXT416(0) << 0x40;
  }
  auVar24 = ZEXT1664(auVar17);
  lVar6 = func_0x000144da3240(*(undefined8 *)(param_1 + 0x40));
  cVar5 = func_0x0001401913f0(*(undefined8 *)(lVar6 + 0x20));
  auVar17 = auVar27._0_16_;
  if (cVar4 == '\0') {
    auVar17 = ZEXT816(0) << 0x20;
    auVar22._0_12_ = ZEXT812(0);
    auVar22._12_4_ = 0;
  }
  else {
    auVar18 = vcmpss_avx(auVar24._0_16_,auVar17,4);
    auVar22._0_4_ = ~auVar18._0_4_ & auVar27._0_4_;
    auVar22._4_4_ = 0;
    auVar22._8_4_ = ~auVar18._8_4_ & auVar27._8_4_;
    auVar22._12_4_ = ~auVar18._12_4_ & auVar27._12_4_;
  }
  if (cVar5 == '\0') {
    auVar22 = auVar17;
  }
  auVar23 = ZEXT1664(auVar22);
  FUN_140191490(param_1,0);
  uVar25 = *(uint *)(param_1 + 0x5f0);
  lVar6 = *(longlong *)(*(longlong *)(param_1 + 0x48) + 0x10);
  auVar17 = vcmpss_avx(ZEXT416(uVar25),auVar21._0_16_,2);
  auVar21 = ZEXT1664(auVar17);
  if (*(char *)(param_1 + 0x5fc) == '\x01') {
    fVar16 = (float)func_0x000145123bd0(uVar25,*(undefined4 *)(lVar6 + 0x208),_DAT_14abbef40);
    if (((*(int *)(param_1 + 0x630) + 1000U < _DAT_14abbef40) &&
        (*(float *)(lVar6 + 0x204) < *(float *)(param_1 + 0x62c))) &&
       (*(char *)(param_1 + 0xad8) == '\0')) {
      *(undefined1 *)(param_1 + 0x5fc) = 0;
      FUN_14549ce10(*(undefined8 *)(param_1 + 0x1e0),0x7585d45d);
    }
    fVar26 = (float)func_0x000145123bd0(param_1 + 0x588,*(undefined4 *)(lVar6 + 0x20c),
                                        _DAT_14abbef40);
    uVar25 = auVar27._0_4_;
    uVar28 = auVar21._0_4_;
    *(float *)(param_1 + 0x5d0) = fVar26 * *(float *)(param_1 + 0x628);
  }
  else {
    fVar16 = (float)func_0x000145123bd0(uVar25,*(undefined4 *)(lVar6 + 0x210),_DAT_14abbef40);
    func_0x000145123bd0(param_1 + 0x588,*(undefined4 *)(param_1 + 0x5d0),_DAT_14abbef40);
    uVar25 = auVar27._0_4_;
    uVar28 = auVar21._0_4_;
  }
  fVar26 = (float)(uVar28 & uVar25);
  *(float *)(param_1 + 0x5cc) = fVar16 * *(float *)(param_1 + 0x5c8);
  uVar7 = (**(code **)(**(longlong **)(param_1 + 0x40) + 0x160))();
  lVar6 = FUN_144dd9c70(uVar7,0x893f08c8);
  if (lVar6 != 0) {
    *(undefined4 *)(param_1 + 0x5d8) = *(undefined4 *)(lVar6 + 0x154);
    *(undefined4 *)(param_1 + 0x5dc) = *(undefined4 *)(lVar6 + 0x158);
    func_0x000140191440(lVar6,param_1 + 0xaec,param_1 + 0xadc,param_1 + 0xae4,param_1 + 0xae0,
                        param_1 + 0xae8);
  }
  lVar6 = func_0x000144da31b0(param_1 + 0x1b0);
  if (lVar6 != 0) {
    if ((*(byte *)(*(longlong *)(param_1 + 0x40) + 0x680) & 4) == 0) {
      auVar21 = ZEXT464(_DAT_14615af00);
    }
    else {
      auVar21._0_8_ = FUN_144546680(param_1);
      auVar21._8_56_ = extraout_var_00;
      auVar21 = ZEXT1664(auVar21._0_16_);
    }
    lVar8 = func_0x000144da31b0(param_1 + 0x1b0);
    lVar6 = _DAT_14ab73aa0;
    iVar15 = _DAT_14ab73a8c;
    func_0x0001451e3e10((ulonglong)((uint)*(ushort *)(lVar8 + 0xd4) * _DAT_14ab73a8c) +
                        *(longlong *)
                         (_DAT_14ab73aa0 + 0x8ac0 + (ulonglong)*(byte *)(lVar8 + 0x7e) * 0x8ad0),0);
    func_0x0001451e3e40((ulonglong)((uint)*(ushort *)(lVar8 + 0xd4) * iVar15) +
                        *(longlong *)(lVar6 + 0x8ac0 + (ulonglong)*(byte *)(lVar8 + 0x7e) * 0x8ad0),
                        auVar21._0_8_,1);
  }
  auVar21 = ZEXT464(_DAT_14615af00);
  fVar16 = fVar26 + auVar23._0_4_;
  lVar8 = 0;
  lVar6 = param_1 + 0x84;
  do {
    lVar9 = func_0x000144da31b0(lVar6);
    if (lVar9 != 0) {
      iVar15 = (int)lVar8;
      if (iVar15 == 0) {
        lVar9 = func_0x000144da31b0(param_1 + 0x9c);
        auVar17._0_12_ = ZEXT812(0);
        auVar17._12_4_ = 0;
        if (lVar9 != 0) {
          auVar17 = auVar20._0_16_;
        }
        auVar27 = ZEXT1664(auVar17);
        lVar9 = func_0x000144da31b0(param_1 + 0x84);
        func_0x000145020b00((ulonglong)((uint)*(ushort *)(lVar9 + 0xd4) * _DAT_14ab73a8c) +
                            *(longlong *)
                             (_DAT_14ab73aa0 + 0x8ac0 + (ulonglong)*(byte *)(lVar9 + 0x7e) * 0x8ad0)
                            ,20000);
        fVar29 = auVar27._0_4_;
LAB_1401909e9:
        auVar27 = ZEXT464((uint)(fVar16 + fVar29));
        lVar10 = func_0x000144da31b0(lVar6);
        lVar9 = _DAT_14ab73aa0;
        iVar15 = _DAT_14ab73a8c;
        auVar17 = vmaxss_avx(auVar21._0_16_,
                             ZEXT416((uint)(auVar27._0_4_ + *(float *)(param_1 + 0x624))));
        func_0x000144e63040((ulonglong)((uint)*(ushort *)(lVar10 + 0xd4) * _DAT_14ab73a8c) +
                            *(longlong *)
                             (_DAT_14ab73aa0 + 0x8ac0 + (ulonglong)*(byte *)(lVar10 + 0x7e) * 0x8ad0
                             ),auVar17._0_8_);
        lVar10 = func_0x000144da31b0(lVar6);
        func_0x0001450c2bf0((ulonglong)((uint)*(ushort *)(lVar10 + 0xd4) * iVar15) +
                            *(longlong *)
                             (lVar9 + 0x8ac0 + (ulonglong)*(byte *)(lVar10 + 0x7e) * 0x8ad0),
                            *(int *)(param_1 + 0x608) + iVar13 + iVar14);
      }
      else {
        if (iVar15 == 2) {
          lVar9 = func_0x000144da31b0(param_1 + 0xa4);
          fVar29 = 0.0;
          if (lVar9 != 0) {
            fVar29 = auVar20._0_4_;
          }
          goto LAB_1401909e9;
        }
        fVar29 = 0.0;
        if (iVar15 - 5U < 0xfffffffe) goto LAB_1401909e9;
      }
      plVar11 = (longlong *)func_0x000144da31b0(lVar6);
      (**(code **)(*plVar11 + 0x18))(plVar11,0xe120ddf,*(undefined4 *)(param_1 + 0x5e0));
      plVar11 = (longlong *)func_0x000144da31b0(lVar6);
      (**(code **)(*plVar11 + 0x18))(plVar11,0x303ebba4,*(undefined4 *)(param_1 + 0x5f8));
      plVar11 = (longlong *)func_0x000144da31b0(lVar6);
      (**(code **)(*plVar11 + 0x18))(plVar11,0xb85e929e,*(undefined4 *)(param_1 + 0x5f0));
      plVar11 = (longlong *)func_0x000144da31b0(lVar6);
      (**(code **)(*plVar11 + 0x18))(plVar11,0xea2108ad,*(undefined4 *)(param_1 + 0x624));
      plVar11 = (longlong *)func_0x000144da31b0(lVar6);
      (**(code **)(*plVar11 + 0x18))(plVar11,0x5daee086,*(undefined4 *)(param_1 + 0x5cc));
      plVar11 = (longlong *)func_0x000144da31b0(lVar6);
      (**(code **)(*plVar11 + 0x18))(plVar11,0x9baad098,*(undefined4 *)(param_1 + 0x5d0));
      plVar11 = (longlong *)func_0x000144da31b0(lVar6);
      (**(code **)(*plVar11 + 0x18))(plVar11,0x4a74bd9c,*(undefined4 *)(param_1 + 0x628));
      plVar11 = (longlong *)func_0x000144da31b0(lVar6);
      (**(code **)(*plVar11 + 0x18))(plVar11,0xcb028022,*(undefined4 *)(param_1 + 0x5e4));
      plVar11 = (longlong *)func_0x000144da31b0(lVar6);
      auVar18._0_4_ = (float)*(int *)(param_1 + 0x5d8);
      auVar18._4_12_ = in_register_000012c4;
      (**(code **)(*plVar11 + 0x18))(plVar11,0x3200270e,auVar18._0_8_);
      plVar11 = (longlong *)func_0x000144da31b0(lVar6);
      (**(code **)(*plVar11 + 0x18))(plVar11,0x4e0ba2df,*(undefined4 *)(param_1 + 0x5dc));
      plVar11 = (longlong *)func_0x000144da31b0(lVar6);
      (**(code **)(*plVar11 + 0x18))(plVar11,0xb184680e,*(undefined4 *)(param_1 + 0x5ec));
      plVar11 = (longlong *)func_0x000144da31b0(lVar6);
      (**(code **)(*plVar11 + 0x18))(plVar11,0xde29e2d6,*(undefined4 *)(param_1 + 0xaec));
      plVar11 = (longlong *)func_0x000144da31b0(lVar6);
      (**(code **)(*plVar11 + 0x18))(plVar11,0x74c60248,*(undefined4 *)(param_1 + 0xadc));
      plVar11 = (longlong *)func_0x000144da31b0(lVar6);
      (**(code **)(*plVar11 + 0x18))(plVar11,0x8deb6f82,*(undefined4 *)(param_1 + 0xae4));
      plVar11 = (longlong *)func_0x000144da31b0(lVar6);
      (**(code **)(*plVar11 + 0x18))(plVar11,0x38951bf4,*(undefined4 *)(param_1 + 0xae0));
      plVar11 = (longlong *)func_0x000144da31b0(lVar6);
      (**(code **)(*plVar11 + 0x18))(plVar11,0x10a48525,*(undefined4 *)(param_1 + 0xae8));
      plVar11 = (longlong *)func_0x000144da31b0(lVar6);
      (**(code **)(*plVar11 + 0x18))(plVar11,0x4599cbae,*(undefined4 *)(param_1 + 0xaf0));
      plVar11 = (longlong *)func_0x000144da31b0(lVar6);
      (**(code **)(*plVar11 + 0x18))(plVar11,0x509e2325,*(undefined4 *)(param_1 + 0xaf4));
      plVar11 = (longlong *)func_0x000144da31b0(lVar6);
      (**(code **)(*plVar11 + 0x18))(plVar11,0x38f36a3d,*(undefined4 *)(param_1 + 0x5e0));
      plVar11 = (longlong *)func_0x000144da31b0(lVar6);
      (**(code **)(*plVar11 + 0x18))(plVar11,0x886a7451,*(undefined4 *)(param_1 + 0x5f8));
      plVar11 = (longlong *)func_0x000144da31b0(lVar6);
      (**(code **)(*plVar11 + 0x18))(plVar11,0xd6bb74f6,*(undefined4 *)(param_1 + 0x5cc));
      plVar11 = (longlong *)func_0x000144da31b0(lVar6);
      (**(code **)(*plVar11 + 0x18))(plVar11,0xea0151dc,*(undefined4 *)(param_1 + 0x5d0));
      plVar11 = (longlong *)func_0x000144da31b0(lVar6);
      (**(code **)(*plVar11 + 0x18))(plVar11,0xf8543300,*(undefined4 *)(param_1 + 0xaec));
      plVar11 = (longlong *)func_0x000144da31b0(lVar6);
      (**(code **)(*plVar11 + 0x18))(plVar11,0xd8b32a40,*(undefined4 *)(param_1 + 0x628));
      plVar11 = (longlong *)func_0x000144da31b0(lVar6);
      (**(code **)(*plVar11 + 0x18))(plVar11,0x5785ce8e,*(undefined4 *)(param_1 + 0x624));
    }
    lVar8 = lVar8 + 1;
    lVar6 = lVar6 + 8;
    if (lVar8 == 6) {
      lVar8 = func_0x000144da31b0(param_1 + 0xbc);
      lVar6 = _DAT_14ab73aa0;
      iVar13 = _DAT_14ab73a8c;
      if (lVar8 != 0) {
        auVar17 = vmaxss_avx(auVar21._0_16_,
                             ZEXT416((uint)(fVar26 + auVar24._0_4_ + *(float *)(param_1 + 0x61c))));
        func_0x000144e63040((ulonglong)((uint)*(ushort *)(lVar8 + 0xd4) * _DAT_14ab73a8c) +
                            *(longlong *)
                             (_DAT_14ab73aa0 + 0x8ac0 + (ulonglong)*(byte *)(lVar8 + 0x7e) * 0x8ad0)
                            ,auVar17._0_8_);
        lVar8 = func_0x000144da31b0(param_1 + 0xbc);
        func_0x0001450c2bf0((ulonglong)((uint)*(ushort *)(lVar8 + 0xd4) * iVar13) +
                            *(longlong *)
                             (lVar6 + 0x8ac0 + (ulonglong)*(byte *)(lVar8 + 0x7e) * 0x8ad0),
                            *(int *)(param_1 + 0x620) + iVar14);
      }
      lVar8 = func_0x000144da31b0(param_1 + 0xc4);
      lVar6 = _DAT_14ab73aa0;
      iVar13 = _DAT_14ab73a8c;
      if (lVar8 != 0) {
        func_0x000144e63040((ulonglong)((uint)*(ushort *)(lVar8 + 0xd4) * _DAT_14ab73a8c) +
                            *(longlong *)
                             (_DAT_14ab73aa0 + 0x8ac0 + (ulonglong)*(byte *)(lVar8 + 0x7e) * 0x8ad0)
                            ,*(undefined4 *)(param_1 + 0x614));
        lVar8 = func_0x000144da31b0(param_1 + 0xc4);
        func_0x0001450c2bf0((ulonglong)((uint)*(ushort *)(lVar8 + 0xd4) * iVar13) +
                            *(longlong *)
                             (lVar6 + 0x8ac0 + (ulonglong)*(byte *)(lVar8 + 0x7e) * 0x8ad0),
                            *(int *)(param_1 + 0x618) + iVar14);
      }
      lVar8 = func_0x000144da31b0(param_1 + 0xcc);
      lVar6 = _DAT_14ab73aa0;
      iVar13 = _DAT_14ab73a8c;
      fVar16 = auVar23._0_4_;
      if (lVar8 != 0) {
        func_0x000144e63040((ulonglong)((uint)*(ushort *)(lVar8 + 0xd4) * _DAT_14ab73a8c) +
                            *(longlong *)
                             (_DAT_14ab73aa0 + 0x8ac0 + (ulonglong)*(byte *)(lVar8 + 0x7e) * 0x8ad0)
                            ,fVar26 + *(float *)(param_1 + 0x604));
        lVar8 = func_0x000144da31b0(param_1 + 0xcc);
        func_0x0001450c2bf0((ulonglong)((uint)*(ushort *)(lVar8 + 0xd4) * iVar13) +
                            *(longlong *)
                             (lVar6 + 0x8ac0 + (ulonglong)*(byte *)(lVar8 + 0x7e) * 0x8ad0),
                            iVar14 + *(int *)(param_1 + 0x608));
        fVar16 = auVar23._0_4_;
      }
      lVar6 = 0xb4;
      *(float *)(param_1 + 0x600) = fVar16 + *(float *)(param_1 + 0x604);
      do {
        lVar8 = param_1 + lVar6;
        plVar11 = (longlong *)func_0x000144da31b0(lVar8);
        if (plVar11 != (longlong *)0x0) {
          (**(code **)(*plVar11 + 0x18))(plVar11,0xe120ddf,*(undefined4 *)(param_1 + 0x5e0));
          plVar11 = (longlong *)func_0x000144da31b0(lVar8);
          (**(code **)(*plVar11 + 0x18))(plVar11,0x303ebba4,*(undefined4 *)(param_1 + 0x5f8));
          plVar11 = (longlong *)func_0x000144da31b0(lVar8);
          (**(code **)(*plVar11 + 0x18))(plVar11,0xb85e929e,*(undefined4 *)(param_1 + 0x5f0));
          plVar11 = (longlong *)func_0x000144da31b0(lVar8);
          (**(code **)(*plVar11 + 0x18))(plVar11,0xea2108ad,*(undefined4 *)(param_1 + 0x624));
          plVar11 = (longlong *)func_0x000144da31b0(lVar8);
          (**(code **)(*plVar11 + 0x18))(plVar11,0x5daee086,*(undefined4 *)(param_1 + 0x5cc));
          plVar11 = (longlong *)func_0x000144da31b0(lVar8);
          (**(code **)(*plVar11 + 0x18))(plVar11,0x9baad098,*(undefined4 *)(param_1 + 0x5d0));
          plVar11 = (longlong *)func_0x000144da31b0(lVar8);
          (**(code **)(*plVar11 + 0x18))(plVar11,0x4a74bd9c,*(undefined4 *)(param_1 + 0x628));
          plVar11 = (longlong *)func_0x000144da31b0(lVar8);
          (**(code **)(*plVar11 + 0x18))(plVar11,0xcb028022,*(undefined4 *)(param_1 + 0x5e4));
          plVar11 = (longlong *)func_0x000144da31b0(lVar8);
          auVar19._0_4_ = (float)*(int *)(param_1 + 0x5d8);
          auVar19._4_12_ = in_register_000012c4;
          (**(code **)(*plVar11 + 0x18))(plVar11,0x3200270e,auVar19._0_8_);
          plVar11 = (longlong *)func_0x000144da31b0(lVar8);
          (**(code **)(*plVar11 + 0x18))(plVar11,0x4e0ba2df,*(undefined4 *)(param_1 + 0x5dc));
          plVar11 = (longlong *)func_0x000144da31b0(lVar8);
          (**(code **)(*plVar11 + 0x18))(plVar11,0xb184680e,*(undefined4 *)(param_1 + 0x5ec));
          plVar11 = (longlong *)func_0x000144da31b0(lVar8);
          (**(code **)(*plVar11 + 0x18))(plVar11,0xde29e2d6,*(undefined4 *)(param_1 + 0xaec));
          plVar11 = (longlong *)func_0x000144da31b0(lVar8);
          (**(code **)(*plVar11 + 0x18))(plVar11,0x74c60248,*(undefined4 *)(param_1 + 0xadc));
          plVar11 = (longlong *)func_0x000144da31b0(lVar8);
          (**(code **)(*plVar11 + 0x18))(plVar11,0x8deb6f82,*(undefined4 *)(param_1 + 0xae4));
          plVar11 = (longlong *)func_0x000144da31b0(lVar8);
          (**(code **)(*plVar11 + 0x18))(plVar11,0x38951bf4,*(undefined4 *)(param_1 + 0xae0));
          plVar11 = (longlong *)func_0x000144da31b0(lVar8);
          (**(code **)(*plVar11 + 0x18))(plVar11,0x10a48525,*(undefined4 *)(param_1 + 0xae8));
          plVar11 = (longlong *)func_0x000144da31b0(lVar8);
          (**(code **)(*plVar11 + 0x18))(plVar11,0x4599cbae,*(undefined4 *)(param_1 + 0xaf0));
          plVar11 = (longlong *)func_0x000144da31b0(lVar8);
          (**(code **)(*plVar11 + 0x18))(plVar11,0x509e2325,*(undefined4 *)(param_1 + 0xaf4));
          plVar11 = (longlong *)func_0x000144da31b0(lVar8);
          (**(code **)(*plVar11 + 0x18))(plVar11,0x38f36a3d,*(undefined4 *)(param_1 + 0x5e0));
          plVar11 = (longlong *)func_0x000144da31b0(lVar8);
          (**(code **)(*plVar11 + 0x18))(plVar11,0x886a7451,*(undefined4 *)(param_1 + 0x5f8));
          plVar11 = (longlong *)func_0x000144da31b0(lVar8);
          (**(code **)(*plVar11 + 0x18))(plVar11,0xd6bb74f6,*(undefined4 *)(param_1 + 0x5cc));
          plVar11 = (longlong *)func_0x000144da31b0(lVar8);
          (**(code **)(*plVar11 + 0x18))(plVar11,0xea0151dc,*(undefined4 *)(param_1 + 0x5d0));
          plVar11 = (longlong *)func_0x000144da31b0(lVar8);
          (**(code **)(*plVar11 + 0x18))(plVar11,0xf8543300,*(undefined4 *)(param_1 + 0xaec));
          plVar11 = (longlong *)func_0x000144da31b0(lVar8);
          (**(code **)(*plVar11 + 0x18))(plVar11,0xd8b32a40,*(undefined4 *)(param_1 + 0x628));
          plVar11 = (longlong *)func_0x000144da31b0(lVar8);
          (**(code **)(*plVar11 + 0x18))(plVar11,0x5785ce8e,*(undefined4 *)(param_1 + 0x624));
        }
        lVar6 = lVar6 + 8;
      } while (lVar6 != 0xdc);
      lVar6 = func_0x000144da31b0(param_1 + 0x1c8);
      if (lVar6 != 0) {
        lVar6 = func_0x000144da3240(*(undefined8 *)(param_1 + 0x40));
        cVar4 = FUN_145123660(*(undefined4 *)(lVar6 + 0x9c));
        if (cVar4 != '\0') {
          lVar6 = func_0x000144da31b0(param_1 + 0x1c8);
          if (lVar6 != 0) {
            *(undefined2 *)
             (*(longlong *)(_DAT_14ab73aa0 + 0x8ac0 + (ulonglong)*(byte *)(lVar6 + 0x7e) * 0x8ad0) +
              0x626 + (ulonglong)((uint)*(ushort *)(lVar6 + 0xd4) * _DAT_14ab73a8c)) = 5000;
          }
          lVar6 = func_0x000144da31b0(&stack0xfffffffffffffff0);
          if (lVar6 != 0) {
            (**(code **)(_DAT_146cee318 + 0x18))(&DAT_146cee318,lVar6);
            lVar9 = _DAT_14ab73aa0;
            iVar13 = _DAT_14ab73a8c;
            uVar12 = (ulonglong)((uint)*(ushort *)(lVar6 + 0xd4) * _DAT_14ab73a8c);
            lVar8 = *(longlong *)
                     (_DAT_14ab73aa0 + 0x8ac0 + (ulonglong)*(byte *)(lVar6 + 0x7e) * 0x8ad0);
            bVar3 = *(byte *)(lVar8 + 0x63a + uVar12);
            *(byte *)(lVar8 + 0x63a + uVar12) = bVar3 & 0xf7 | (bVar3 >> 3 & 1) << 3;
            pbVar1 = (byte *)(*(longlong *)
                               (lVar9 + 0x8ac0 + (ulonglong)*(byte *)(lVar6 + 0x7e) * 0x8ad0) +
                              0x63a + (ulonglong)((uint)*(ushort *)(lVar6 + 0xd4) * iVar13));
            *pbVar1 = *pbVar1 | 4;
            func_0x0001405f2360(lVar6);
            lVar6 = (ulonglong)(iVar13 * (uint)*(ushort *)(lVar6 + 0xd4)) +
                    *(longlong *)(lVar9 + 0x8ac0 + (ulonglong)*(byte *)(lVar6 + 0x7e) * 0x8ad0);
            puVar2 = (ushort *)(lVar6 + 0x3d6 + (ulonglong)uRam000000014764e82c * 0xa0);
            *puVar2 = *puVar2 | 2;
            *(undefined4 *)(lVar6 + 0x5e0) = 0x7585d45d;
            return;
          }
          return;
        }
      }
      return;
    }
  } while( true );
}

