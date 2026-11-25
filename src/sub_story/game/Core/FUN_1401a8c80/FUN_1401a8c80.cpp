// Recovered from game_scarlett_master.exe (GTA VI, Xbox Series X, PE32+ x64)
// Address: 1401a8c80  size: 793 bytes
// Name:    FUN_1401a8c80
// Subsystem: core
//
// Referenced strings (0 in this body, 0 including direct callees):
// Callees: FUN_144edd090, FUN_140e9fd60, FUN_1409f4be0, FUN_144e737c0, FUN_144edf1f0, FUN_14067cd10
//
// Generated decompilation. Formatting follows MiscRef/GTAVSRC conventions;
// identifiers are recovered, not original. See ../../../README.md.

#include "gta6decomp/rage_types.h"


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined8
FUN_1401a8c80(longlong param_1,longlong *param_2,char param_3,int param_4,char param_5,
             longlong *param_6,undefined8 param_7,undefined1 param_8)

{
  longlong *plVar1;
  char cVar2;
  uint uVar3;
  int iVar4;
  longlong lVar5;
  longlong lVar6;
  bool bVar7;
  ulonglong uVar8;
  undefined1 auVar9 [16];
  undefined1 auVar10 [16];
  undefined1 auVar11 [16];
  undefined1 auVar12 [16];
  undefined1 auVar13 [16];
  undefined1 auVar14 [16];
  float fVar15;
  float fVar16;
  undefined1 auVar17 [64];
  undefined8 uStack_88;
  undefined8 uStack_80;
  undefined1 auStack_78 [16];
  undefined1 aauStack_68 [2] [16];
  
  if (param_2 == (longlong *)0x0) {
    return 0;
  }
  if ((param_1 == 0) || (cVar2 = (**(code **)(*param_2 + 0x1d0))(param_2), cVar2 == '\0')) {
    plVar1 = *(longlong **)((ulonglong)*(byte *)(param_2 + 6) * 8 + 0x14abbe7c0);
    uVar3 = (uint)((ulonglong)((longlong)param_2 - *plVar1) / (ulonglong)*(uint *)(plVar1 + 1));
    if ((*(uint *)(*(longlong *)((ulonglong)*(byte *)(param_2 + 6) * 0x10 + 0x14ab75fb0) +
                  (ulonglong)((uVar3 & 0x3fffffff) >> 3) * 4) >> ((uVar3 & 7) << 2) & 1) == 0) {
      return 1;
    }
    return 0;
  }
  if ((param_5 == '\0') &&
     (((lVar5 = func_0x0001450bd950(*(undefined4 *)(param_1 + 0x9c)), lVar5 != 0 &&
       ((*(byte *)(lVar5 + 0x2249) & 1) != 0)) &&
      (cVar2 = FUN_144edd090(param_1,1,1), cVar2 == '\0')))) {
    return 0;
  }
  lVar5 = func_0x000144edc640(*(undefined4 *)((longlong)param_2 + 0x9c));
  if (lVar5 == 0) {
    return 0;
  }
  FUN_140e9fd60(aauStack_68,param_2,param_1,0,0,0xbf800000);
  uStack_88 = *(undefined8 *)(param_1 + 0x70);
  uStack_80 = *(undefined8 *)(param_1 + 0x78);
  func_0x000144dc3790(&uStack_88,auStack_78);
  auVar11._0_12_ = ZEXT812(0);
  auVar11._12_4_ = 0;
  auVar12 = vsubps_avx(aauStack_68[0],auStack_78);
  auVar9._0_4_ = auVar12._0_4_ * auVar12._0_4_;
  auVar9._4_4_ = auVar12._4_4_ * auVar12._4_4_;
  auVar9._8_4_ = auVar12._8_4_ * auVar12._8_4_;
  auVar9._12_4_ = auVar12._12_4_ * auVar12._12_4_;
  auVar12 = vblendps_avx(auVar9,auVar11,8);
  auVar12 = vhaddps_avx(auVar12,auVar12);
  auVar12 = vhaddps_avx(auVar12,auVar12);
  auVar17 = ZEXT1664(auVar12);
  cVar2 = FUN_1409f4be0(param_1,0xb3);
  fVar16 = auVar17._0_4_;
  if ((char)param_2[6] == '\x03') {
    lVar6 = func_0x000144ef6280(*(undefined4 *)((longlong)param_2 + 0x9c));
    fVar16 = auVar17._0_4_;
    if (lVar6 == 0) goto LAB_1401a8e01;
    if ((*(byte *)(lVar6 + 0x3f) & 2) == 0) {
      bVar7 = (*(byte *)(lVar6 + 0xcb) & 2) == 0;
    }
    else {
      bVar7 = false;
    }
    if (bVar7 || cVar2 != '\0') goto LAB_1401a8e01;
    fVar16 = fVar16 + _DAT_145fc6f48;
    auVar14._0_8_ = (ulonglong)(uint)fVar16;
    auVar10._0_12_ = ZEXT812(0);
    auVar10._12_4_ = 0;
    uVar8 = 0;
    if ((fVar16 == 0.0) && (!NAN(fVar16))) goto LAB_1401a8ef7;
    auVar12 = vminss_avx(ZEXT416(_DAT_145fc6ed8),ZEXT416((uint)(fVar16 * _DAT_146167280)));
    fVar15 = auVar12._0_4_ * _DAT_14616a5b4 + _DAT_146159ca4;
    auVar12 = vcmpss_avx(ZEXT416((uint)(fVar16 * _DAT_146167280)),auVar10,1);
  }
  else {
LAB_1401a8e01:
    fVar16 = fVar16 + _DAT_145fc6f48;
    uVar8 = (ulonglong)(uint)fVar16;
    auVar12._0_12_ = ZEXT812(0);
    auVar12._12_4_ = 0;
    auVar14._0_8_ = 0;
    if (param_3 != '\x01' || cVar2 != '\0') {
      if ((fVar16 != 0.0) || (NAN(fVar16))) {
        auVar9 = vminss_avx(ZEXT416(_DAT_145fc6ed8),ZEXT416((uint)(fVar16 * _DAT_1461717dc)));
        auVar12 = vcmpss_avx(ZEXT416((uint)(fVar16 * _DAT_1461717dc)),auVar12,1);
        uVar8 = auVar12._0_8_;
        auVar13._0_8_ = CONCAT44(_DAT_14615a6b8,_DAT_14615a6b8);
        auVar13._8_4_ = _DAT_14615a6b8;
        auVar13._12_4_ = _DAT_14615a6b8;
        auVar12 = vblendvps_avx(ZEXT416((uint)(auVar9._0_4_ * _DAT_14615a224 + _DAT_14615a6b8)),
                                auVar13,auVar12);
        auVar17 = ZEXT1664(auVar12);
        auVar14._0_8_ = auVar13._0_8_;
      }
      else {
        auVar17 = ZEXT464((uint)_DAT_14615a6b8);
      }
      if (cVar2 != '\0') {
        auVar17 = ZEXT464((uint)(auVar17._0_4_ * _DAT_146159cc4));
      }
      goto LAB_1401a8eff;
    }
    if ((fVar16 == 0.0) && (!NAN(fVar16))) {
LAB_1401a8ef7:
      auVar17 = ZEXT464((uint)_DAT_146159ca4);
      goto LAB_1401a8eff;
    }
    auVar9 = vminss_avx(ZEXT416(_DAT_145fc6ed8),ZEXT416((uint)(fVar16 * _DAT_1461717d8)));
    fVar15 = auVar9._0_4_ * _DAT_14615a5a8 + _DAT_146159ca4;
    auVar12 = vcmpss_avx(ZEXT416((uint)(fVar16 * _DAT_1461717d8)),auVar12,1);
  }
  uVar8 = auVar12._0_8_;
  auVar14._0_8_ = CONCAT44(_DAT_146159ca4,_DAT_146159ca4);
  auVar14._8_4_ = _DAT_146159ca4;
  auVar14._12_4_ = _DAT_146159ca4;
  auVar12 = vblendvps_avx(ZEXT416((uint)fVar15),auVar14,auVar12);
  auVar17 = ZEXT1664(auVar12);
LAB_1401a8eff:
  lVar6 = func_0x00014504fd40(uVar8,auVar14._0_8_);
  auVar14._0_8_ = auVar17._0_8_;
  if (lVar6 != 0) {
    cVar2 = FUN_144e737c0(*(undefined8 *)(lVar6 + 0x70),*(undefined8 *)(lVar6 + 0x78),9);
    auVar14._0_8_ = auVar17._0_8_;
    if (cVar2 != '\0') {
      auVar14._0_8_ = (ulonglong)(uint)(auVar17._0_4_ * _DAT_14615a404);
    }
  }
  if (param_2 == param_6) {
    auVar14._0_8_ = (ulonglong)(uint)((float)auVar14._0_8_ * _DAT_14615a404);
  }
  cVar2 = FUN_14067cd10(lVar5,auVar14._0_8_,0,param_7,param_8);
  if (cVar2 == '\0') {
    return 1;
  }
  if (param_4 == -1) {
    return 0;
  }
  iVar4 = FUN_144edf1f0(*(undefined8 *)(lVar5 + 8));
  if (iVar4 < param_4) {
    return 1;
  }
  return 0;
}

