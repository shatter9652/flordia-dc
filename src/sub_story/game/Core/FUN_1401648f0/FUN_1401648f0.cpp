// Recovered from game_scarlett_master.exe (GTA VI, Xbox Series X, PE32+ x64)
// Address: 1401648f0  size: 1114 bytes
// Name:    FUN_1401648f0
// Subsystem: core
//
// Referenced strings (0 in this body, 0 including direct callees):
// Callees: FUN_141232930, FUN_142bf89c0, FUN_145254e00, FUN_142668ac0, FUN_1450e7040, FUN_1404e5b90, FUN_14079dc10, FUN_144d9d7a0, FUN_142668bf0, FUN_144f57850
//
// Generated decompilation. Formatting follows MiscRef/GTAVSRC conventions;
// identifiers are recovered, not original. See ../../../README.md.

#include "gta6decomp/rage_types.h"


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1401648f0(longlong param_1,undefined1 (*param_2) [16])

{
  byte *pbVar1;
  bool bVar2;
  char cVar3;
  undefined2 uVar4;
  undefined4 uVar5;
  uint uVar6;
  longlong lVar7;
  longlong lVar8;
  ushort uVar9;
  uint uVar10;
  undefined8 unaff_RBX;
  undefined7 uVar12;
  ulonglong uVar11;
  byte bVar13;
  undefined1 auVar14 [16];
  undefined1 auVar15 [16];
  undefined1 auVar16 [16];
  undefined1 auVar17 [16];
  undefined1 auVar18 [16];
  undefined1 auVar19 [16];
  undefined1 auVar20 [16];
  undefined1 auVar21 [16];
  undefined1 auVar22 [64];
  undefined2 in_stack_ffffffffffffff18;
  undefined1 uVar23;
  char cStack_a2;
  char cStack_a1;
  uint uStack_a0;
  uint uStack_9c;
  longlong lStack_98;
  uint uStack_8c;
  undefined8 uStack_88;
  undefined8 uStack_80;
  undefined8 uStack_78;
  undefined8 uStack_70;
  undefined8 uStack_68;
  undefined8 uStack_60;
  undefined8 uStack_58;
  undefined8 uStack_50;
  undefined8 uStack_48;
  undefined8 uStack_40;
  
  uVar23 = (undefined1)((ushort)in_stack_ffffffffffffff18 >> 8);
  bVar13 = *(longlong *)(param_1 + 0x10) == 0 | *(byte *)(param_1 + 0x60);
  if ((((DAT_1468fdc5a == '\x01') && (*(longlong *)(param_1 + 0x50) != 0)) &&
      (*(longlong *)(*(longlong *)(param_1 + 0x50) + 0x110) == -0x75e6c84cdd459aa9)) &&
     ((*(int *)(param_1 + 0x58) == 0x10 || (*(int *)(param_1 + 0x58) == 0xd)))) {
    bVar13 = bVar13 | *(longlong *)(param_1 + 0x10) == _DAT_14ab56e38;
  }
  uVar12 = (undefined7)((ulonglong)unaff_RBX >> 8);
  if ((*(ulonglong *)(param_1 + 0x68) & 0x40) == 0) {
    if ((char)*(ulonglong *)(param_1 + 0x68) < '\0') {
      uStack_88 = *(undefined8 *)*param_2;
      uStack_80 = *(undefined8 *)(*param_2 + 8);
      cVar3 = FUN_145254e00(0x14aad3e50,&uStack_88,1,0);
      if (cVar3 != '\0') {
        *(byte *)(param_1 + 0x68) = *(byte *)(param_1 + 0x68) & 0x7f;
        goto LAB_1401649e5;
      }
LAB_140164a00:
      auVar14 = *(undefined1 (*) [16])(param_1 + 0x30);
      auVar16 = *param_2;
      auVar15 = vsubps_avx(auVar16,auVar14);
      auVar22 = ZEXT1664(auVar15);
    }
    else {
LAB_1401649e5:
      auVar14 = *(undefined1 (*) [16])(param_1 + 0x30);
      auVar16 = *param_2;
      uVar11 = CONCAT71(uVar12,1);
      auVar15 = vsubps_avx(auVar16,auVar14);
      auVar22 = ZEXT1664(auVar15);
      if ((bVar13 & 1) != 0) goto LAB_140164a79;
    }
    if (*(longlong *)(param_1 + 0x10) == 0) {
      auVar21._0_4_ = auVar16._0_4_ + _DAT_14615d1f0;
      auVar21._4_4_ = auVar16._4_4_ + _DAT_14615d1f0;
      auVar21._8_4_ = auVar16._8_4_ + _DAT_14615d1f0;
      auVar21._12_4_ = auVar16._12_4_ + _DAT_14615d1f0;
      auVar18._0_4_ = auVar16._0_4_ + _DAT_14615af54;
      auVar18._4_4_ = auVar16._4_4_ + _DAT_14615af54;
      auVar18._8_4_ = auVar16._8_4_ + _DAT_14615af54;
      auVar18._12_4_ = auVar16._12_4_ + _DAT_14615af54;
      auVar16 = vcmpps_avx(auVar21,auVar14,2);
      auVar14 = vcmpps_avx(auVar14,auVar18,2);
      auVar15._0_4_ = auVar16._0_4_ & auVar14._0_4_;
      auVar15._4_4_ = auVar16._4_4_ & auVar14._4_4_;
      auVar15._8_4_ = auVar16._8_4_ & auVar14._8_4_;
      auVar15._12_4_ = auVar16._12_4_ & auVar14._12_4_;
      uVar5 = vmovmskps_avx(auVar15);
      if ((~(byte)uVar5 & 7) == 0) {
        return;
      }
    }
    else {
      auVar14._0_4_ = auVar22._0_4_ * auVar22._0_4_;
      auVar14._4_4_ = auVar22._4_4_ * auVar22._4_4_;
      auVar14._8_4_ = auVar22._8_4_ * auVar22._8_4_;
      auVar14._12_4_ = auVar22._12_4_ * auVar22._12_4_;
      auVar14 = vblendps_avx(auVar14,ZEXT816(0),8);
      auVar14 = vhaddps_avx(auVar14,auVar14);
      auVar14 = vhaddps_avx(auVar14,auVar14);
      if (auVar14._0_4_ < _DAT_145fc6f78) {
        return;
      }
    }
    uVar11 = 0;
  }
  else {
    uStack_78 = *(undefined8 *)*param_2;
    uStack_70 = *(undefined8 *)(*param_2 + 8);
    cVar3 = FUN_145254e00(0x14aad3e50,&uStack_78,1,0);
    if (cVar3 == '\0') {
      if ((char)*(ulonglong *)(param_1 + 0x68) < '\0') goto LAB_140164a00;
      goto LAB_1401649e5;
    }
    uVar11 = CONCAT71(uVar12,1);
    *(ulonglong *)(param_1 + 0x68) = *(ulonglong *)(param_1 + 0x68) & 0xffffffffffffff3f;
    auVar14 = vsubps_avx(*param_2,*(undefined1 (*) [16])(param_1 + 0x30));
    auVar22 = ZEXT1664(auVar14);
  }
LAB_140164a79:
  if (((*(longlong *)(param_1 + 0x10) != 0) &&
      ((*(byte *)(*(longlong *)(param_1 + 0x10) + 0xa5) & 0x80) != 0)) &&
     (cVar3 = FUN_142668ac0(param_1,uVar11 & 0xffffffff), cVar3 != '\0')) {
    return;
  }
  if ((*(byte *)(param_1 + 0x68) & 8) != 0) {
    return;
  }
  lVar7 = *(longlong *)(param_1 + 0x10);
  if ((lVar7 != 0) && ((*(char *)(lVar7 + 0x30) != '\x03' || ((DAT_1468fdc58 & 1) == 0)))) {
    auVar16._0_4_ = auVar22._0_4_ * auVar22._0_4_;
    auVar16._4_4_ = auVar22._4_4_ * auVar22._4_4_;
    auVar16._8_4_ = auVar22._8_4_ * auVar22._8_4_;
    auVar16._12_4_ = auVar22._12_4_ * auVar22._12_4_;
    auVar19._0_12_ = ZEXT812(0);
    auVar19._12_4_ = 0;
    auVar14 = vblendps_avx(auVar16,auVar19,8);
    auVar14 = vhaddps_avx(auVar14,auVar14);
    auVar14 = vhaddps_avx(auVar14,auVar14);
    if ((_DAT_145fc6f78 <= auVar14._0_4_) &&
       (lVar7 = func_0x000144e29d60(*(undefined4 *)(lVar7 + 0x9c)), lVar7 != 0)) {
      *(undefined1 *)(lVar7 + 0x84) = 1;
    }
  }
  uStack_9c = 0;
  *(undefined8 *)(param_1 + 0x20) = *(undefined8 *)(param_1 + 0x30);
  *(undefined8 *)(param_1 + 0x28) = *(undefined8 *)(param_1 + 0x38);
  uStack_48 = *(undefined8 *)*param_2;
  uStack_40 = *(undefined8 *)(*param_2 + 8);
  func_0x00014509eac0(param_1);
  func_0x000145051b80(&uStack_8c,*(undefined8 *)(param_1 + 0x50),*(undefined4 *)(param_1 + 0x58));
  uStack_a0 = uStack_8c;
  if ((char)uVar11 == '\0' && (*(byte *)(param_1 + 0x68) & 0x22) == 0) {
    auVar17._0_4_ = auVar22._0_4_ * auVar22._0_4_;
    auVar17._4_4_ = auVar22._4_4_ * auVar22._4_4_;
    auVar17._8_4_ = auVar22._8_4_ * auVar22._8_4_;
    auVar17._12_4_ = auVar22._12_4_ * auVar22._12_4_;
    auVar20._0_12_ = ZEXT812(0);
    auVar20._12_4_ = 0;
    auVar14 = vblendps_avx(auVar17,auVar20,8);
    auVar14 = vhaddps_avx(auVar14,auVar14);
    auVar14 = vhaddps_avx(auVar14,auVar14);
    if (_DAT_14615dc14 < auVar14._0_4_) goto LAB_140164b66;
    bVar2 = false;
    uVar10 = uStack_8c >> 0x10;
    uVar6 = uStack_8c;
  }
  else {
LAB_140164b66:
    if (*(longlong *)(param_1 + 0x10) != 0) {
      pbVar1 = (byte *)(*(longlong *)(param_1 + 0x10) + 0x33);
      *pbVar1 = *pbVar1 | 2;
    }
    FUN_14079dc10(param_1,&uStack_a0);
    uVar6 = uStack_a0;
    uStack_8c = uStack_a0;
    uVar10 = uStack_a0 >> 0x10;
    cVar3 = FUN_144d9d7a0(uStack_a0,uVar10);
    bVar2 = true;
    if (cVar3 != '\0') {
      *(undefined4 *)(param_1 + 0x4c) = 0;
    }
  }
  lStack_98 = 0;
  cStack_a2 = '\0';
  cVar3 = FUN_144d9d7a0(uVar6,uVar10);
  if (cVar3 == '\0') {
    FUN_1450e7040(param_1,&uStack_a0,&cStack_a2,&lStack_98);
    lVar7 = *(longlong *)(param_1 + 0x10);
    if (lVar7 != 0) {
      if (*(float *)(param_1 + 0x4c) <= _DAT_145fc6edc) {
        uVar9 = *(ushort *)(lVar7 + 0x32) | 0x200;
      }
      else {
        uVar9 = *(ushort *)(lVar7 + 0x32) & 0xfdff;
      }
      *(ushort *)(lVar7 + 0x32) = uVar9;
    }
  }
  else {
    cStack_a1 = '\0';
    uStack_58 = *(undefined8 *)(param_1 + 0x30);
    uStack_50 = *(undefined8 *)(param_1 + 0x38);
    bVar13 = (byte)((uint)*(undefined4 *)(param_1 + 0x68) >> 0x18);
    uStack_68 = *(undefined8 *)(param_1 + 0x20);
    uStack_60 = *(undefined8 *)(param_1 + 0x28);
    cVar3 = FUN_142668bf0(*(longlong *)(param_1 + 0x10),&uStack_68,&uStack_58,uVar6,
                          CONCAT11(uVar23,bVar13 >> 2 & 1 & *(longlong *)(param_1 + 0x10) != 0),
                          &uStack_a0,&cStack_a2,&lStack_98,&uStack_9c,&cStack_a1,bVar13 >> 1 & 1);
    if (!bVar2) {
      if (cStack_a1 == '\x01') {
        FUN_142bf89c0(*(undefined8 *)(param_1 + 0x10),2);
      }
      if (cVar3 != '\0') {
        func_0x00014128acf0(param_1,1);
      }
    }
  }
  lVar7 = lStack_98;
  if (cStack_a2 == '\x01') {
    lVar8 = FUN_144f57850(*(undefined4 *)(lStack_98 + 8));
    uVar6 = FUN_141232930(*(undefined8 *)(lVar8 + 400),lVar7);
    uStack_9c = uStack_9c | uVar6;
    *(byte *)(param_1 + 0x68) = *(byte *)(param_1 + 0x68) & 0xdf;
  }
  else {
    *(byte *)(param_1 + 0x68) = *(byte *)(param_1 + 0x68) & 0xdf;
    lVar8 = 0;
    if (lStack_98 == 0) {
      uVar4 = 0xffff;
      goto LAB_140164d14;
    }
  }
  uVar4 = *(undefined2 *)(lVar7 + 0x7a);
LAB_140164d14:
  FUN_1404e5b90(param_1,uStack_a0,lVar8,uStack_9c,uVar4);
  return;
}

