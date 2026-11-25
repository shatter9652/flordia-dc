// Recovered from game_scarlett_master.exe (GTA VI, Xbox Series X, PE32+ x64)
// Address: 1400efa40  size: 854 bytes
// Name:    FUN_1400efa40
// Subsystem: core
//
// Referenced strings (0 in this body, 0 including direct callees):
// Callees: FUN_1400ef2c0, FUN_1407b76c0, FUN_144f7ac70, FUN_1400eff90, FUN_1400efdd0, FUN_1407b7590, FUN_1400efda0, FUN_1400eea50
//
// Generated decompilation. Formatting follows MiscRef/GTAVSRC conventions;
// identifiers are recovered, not original. See ../../../README.md.

#include "gta6decomp/rage_types.h"


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1400efa40(undefined8 param_1,longlong param_2,longlong param_3)

{
  undefined1 auVar1 [16];
  undefined1 auVar2 [16];
  char cVar3;
  undefined1 uVar4;
  longlong lVar5;
  longlong lVar6;
  float fVar7;
  float fVar8;
  undefined1 auVar9 [16];
  undefined1 auVar10 [16];
  undefined1 auVar11 [64];
  undefined8 uStack_148;
  undefined8 uStack_140;
  undefined1 auStack_138 [16];
  undefined8 uStack_128;
  undefined8 uStack_120;
  undefined8 uStack_108;
  undefined8 uStack_100;
  undefined8 uStack_e8;
  undefined8 uStack_e0;
  undefined8 uStack_d8;
  undefined8 uStack_d0;
  undefined1 auStack_c8 [24];
  undefined8 uStack_b0;
  undefined8 uStack_a8;
  undefined8 uStack_a0;
  undefined8 uStack_98;
  undefined8 uStack_90;
  undefined8 uStack_88;
  undefined8 uStack_80;
  undefined8 uStack_78;
  undefined8 uStack_70;
  undefined8 uStack_68;
  undefined8 uStack_60;
  undefined8 uStack_58;
  undefined8 uStack_50;
  
  uStack_e8 = *(undefined8 *)(param_2 + 0x70);
  uStack_e0 = *(undefined8 *)(param_2 + 0x78);
  func_0x000144dc3790(&uStack_e8,&uStack_148);
  if ((ulonglong)*(byte *)(param_3 + 0x1651) == 0xff) {
    lVar6 = 0;
  }
  else {
    lVar6 = FUN_1400efda0(param_3 + 0x40 + (ulonglong)*(byte *)(param_3 + 0x1651) * 0x18);
  }
  if ((ulonglong)*(byte *)(param_3 + 0x1650) == 0xff) {
    lVar5 = 0;
  }
  else {
    lVar5 = FUN_1400efda0(param_3 + 0x40 + (ulonglong)*(byte *)(param_3 + 0x1650) * 0x18);
  }
  if (lVar6 == lVar5) {
    return;
  }
  if ((lVar6 == 0) && (lVar5 != 0)) {
    uStack_98 = uStack_148;
    uStack_90 = uStack_140;
    lVar6 = FUN_1400efdd0(*(undefined4 *)(lVar5 + 0x1204),*(undefined8 *)(lVar5 + 0x1208));
    if (lVar6 != 0) {
      auVar11 = ZEXT1664(CONCAT88(uStack_140,uStack_148));
      FUN_144f7ac70(lVar6,&uStack_d8);
      auVar1._8_8_ = uStack_d0;
      auVar1._0_8_ = uStack_d8;
      auVar1 = vsubps_avx(auVar11._0_16_,auVar1);
      auVar10._0_4_ = auVar1._0_4_ * auVar1._0_4_;
      auVar10._4_4_ = auVar1._4_4_ * auVar1._4_4_;
      auVar10._8_4_ = auVar1._8_4_ * auVar1._8_4_;
      auVar10._12_4_ = auVar1._12_4_ * auVar1._12_4_;
      auVar10 = vhaddps_avx(auVar10,auVar10);
      auVar1 = vrsqrtss_avx(auVar10,auVar10);
      fVar8 = auVar1._0_4_;
      auVar1 = vcmpss_avx(ZEXT416(_DAT_146159bfc),auVar10,2);
      if ((float)(auVar1._0_4_ &
                 (uint)(((fVar8 * fVar8 * auVar10._0_4_ * _DAT_145fc6f08 + _DAT_145fc6edc) * fVar8 +
                        fVar8) * auVar10._0_4_)) <= _DAT_14929bc60) {
        return;
      }
      uStack_68 = *(undefined8 *)(param_3 + 0x1660);
      uStack_60 = *(undefined8 *)(param_3 + 0x1668);
      uStack_58 = *(undefined8 *)(param_3 + 0x1670);
      uStack_50 = *(undefined8 *)(param_3 + 0x1678);
      uStack_128 = *(undefined8 *)(param_2 + 0x70);
      uStack_120 = *(undefined8 *)(param_2 + 0x78);
      cVar3 = FUN_1407b7590(lVar5,&uStack_128,*(undefined4 *)(param_2 + 0x9c));
      if (cVar3 != '\0') {
        return;
      }
    }
    *(undefined1 *)(param_3 + 0x1650) = 0xff;
    return;
  }
  if ((lVar6 == 0) || (lVar5 != 0)) {
    if (lVar6 == 0) {
      return;
    }
    if (lVar5 == 0) {
      return;
    }
    cVar3 = FUN_1407b76c0(param_3 + 0x1660,auStack_138);
    if (cVar3 == '\0') {
      auStack_138._4_4_ = _DAT_145fc6f70;
      auStack_138._0_4_ = _DAT_145fc6f70;
      auStack_138._8_4_ = _DAT_145fc6f70;
      auStack_138._12_4_ = _DAT_145fc6f70;
    }
    FUN_1400eea50(param_1,param_2,param_3,auStack_138);
    uStack_d0 = 0;
    auStack_c8 = ZEXT424(0);
    uStack_b0 = 0;
    func_0x0001400ee830(param_1,&uStack_d8,0);
    fVar8 = (float)FUN_1400ef2c0(lVar6,&uStack_d8);
    fVar7 = (float)FUN_1400ef2c0(lVar5,&uStack_d8);
  }
  else {
    uStack_a8 = uStack_148;
    uStack_a0 = uStack_140;
    lVar5 = FUN_1400efdd0(*(undefined4 *)(lVar6 + 0x1204),*(undefined8 *)(lVar6 + 0x1208));
    if (lVar5 == 0) {
      return;
    }
    auVar11 = ZEXT1664(CONCAT88(uStack_140,uStack_148));
    FUN_144f7ac70(lVar5,&uStack_d8);
    uStack_88 = *(undefined8 *)(param_3 + 0x1660);
    uStack_80 = *(undefined8 *)(param_3 + 0x1668);
    uStack_78 = *(undefined8 *)(param_3 + 0x1670);
    uStack_70 = *(undefined8 *)(param_3 + 0x1678);
    auVar2._8_8_ = uStack_d0;
    auVar2._0_8_ = uStack_d8;
    auVar1 = vsubps_avx(auVar11._0_16_,auVar2);
    uStack_108 = *(undefined8 *)(param_2 + 0x70);
    uStack_100 = *(undefined8 *)(param_2 + 0x78);
    auVar11 = ZEXT1664(auVar1);
    fVar8 = _DAT_14929bc60;
    cVar3 = FUN_1407b7590(lVar6,&uStack_108,*(undefined4 *)(param_2 + 0x9c));
    if (cVar3 == '\0') {
      return;
    }
    auVar9._0_4_ = auVar11._0_4_ * auVar11._0_4_;
    auVar9._4_4_ = auVar11._4_4_ * auVar11._4_4_;
    auVar9._8_4_ = auVar11._8_4_ * auVar11._8_4_;
    auVar9._12_4_ = auVar11._12_4_ * auVar11._12_4_;
    auVar10 = vhaddps_avx(auVar9,auVar9);
    auVar1 = vrsqrtss_avx(auVar10,auVar10);
    fVar7 = auVar1._0_4_;
    auVar1 = vcmpss_avx(ZEXT416(_DAT_146159bfc),auVar10,2);
    fVar7 = (float)(auVar1._0_4_ &
                   (uint)(((fVar7 * fVar7 * auVar10._0_4_ * _DAT_145fc6f08 + _DAT_145fc6edc) * fVar7
                          + fVar7) * auVar10._0_4_));
  }
  if (fVar7 < fVar8) {
    uVar4 = FUN_1400eff90(param_3,lVar6);
    *(undefined1 *)(param_3 + 0x1650) = uVar4;
  }
  return;
}

