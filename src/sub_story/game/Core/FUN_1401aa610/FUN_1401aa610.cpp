// Recovered from game_scarlett_master.exe (GTA VI, Xbox Series X, PE32+ x64)
// Address: 1401aa610  size: 471 bytes
// Name:    FUN_1401aa610
// Subsystem: core
//
// Referenced strings (0 in this body, 0 including direct callees):
// Callees: FUN_1400825f0, FUN_14067cd10
//
// Generated decompilation. Formatting follows MiscRef/GTAVSRC conventions;
// identifiers are recovered, not original. See ../../../README.md.

#include "gta6decomp/rage_types.h"


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined8 FUN_1401aa610(longlong param_1)

{
  uint uVar1;
  undefined4 uVar2;
  bool bVar3;
  char cVar4;
  longlong lVar5;
  longlong lVar6;
  undefined8 uVar7;
  longlong lVar8;
  uint uVar9;
  float fVar10;
  undefined1 auVar11 [16];
  undefined1 auVar12 [16];
  undefined1 auVar13 [16];
  float fVar14;
  undefined1 auVar15 [16];
  undefined1 auVar16 [64];
  undefined8 uStack_68;
  undefined8 uStack_60;
  undefined1 auStack_58 [16];
  undefined1 aauStack_48 [2] [16];
  
  uVar1 = *(uint *)(param_1 + 0x20);
  if (uVar1 == 0x1ffff) {
    return 0;
  }
  uVar9 = *(uint *)(_DAT_14abb6918[5] + (ulonglong)(uVar1 & 0x1ffff) * 4);
  if ((~uVar9 & *(uint *)(_DAT_14abb6918 + 6)) != 0) {
    return 0;
  }
  uVar9 = uVar9 & 0x7fe0000;
  if (uVar9 != (uVar1 & 0xfffe0000)) {
    return 0;
  }
  if (*_DAT_14abb6918 == 0) {
    return 0;
  }
  lVar8 = *_DAT_14abb6918 + (ulonglong)((uVar1 & 0x1ffff) * (int)_DAT_14abb6918[1]);
  uStack_68 = *(undefined8 *)(lVar8 + 0x70);
  uStack_60 = *(undefined8 *)(lVar8 + 0x78);
  func_0x000144dc3790(&uStack_68,aauStack_48,uVar9,0);
  func_0x0001453db630(auStack_58);
  uVar2 = *(undefined4 *)(lVar8 + 0x9c);
  auVar13._0_12_ = ZEXT812(0);
  auVar13._12_4_ = 0;
  auVar15 = vsubps_avx(aauStack_48[0],auStack_58);
  auVar11._0_4_ = auVar15._0_4_ * auVar15._0_4_;
  auVar11._4_4_ = auVar15._4_4_ * auVar15._4_4_;
  auVar11._8_4_ = auVar15._8_4_ * auVar15._8_4_;
  auVar11._12_4_ = auVar15._12_4_ * auVar15._12_4_;
  auVar15 = vblendps_avx(auVar11,auVar13,8);
  auVar16 = ZEXT1664(auVar15);
  lVar5 = func_0x000144da10f0(uVar2);
  lVar6 = func_0x000144dd7540(uVar2);
  if (lVar6 == 0) {
    bVar3 = true;
  }
  else {
    bVar3 = *(longlong *)(lVar6 + 0x898) == 0 || (*(byte *)(lVar6 + 0x10) & 0x20) == 0;
  }
  auVar15 = vhaddps_avx(auVar16._0_16_,auVar16._0_16_);
  auVar16 = ZEXT1664(auVar15);
  if ((lVar5 == 0) || (!bVar3)) {
LAB_1401aa731:
    fVar10 = *(float *)((ulonglong)(*(byte *)(param_1 + 0x91) & 8) + 0x1499aaaec);
  }
  else {
    uVar7 = *(undefined8 *)(lVar5 + 0x650);
    lVar5 = func_0x000144f3ea40(uVar7,0x1ba);
    if (lVar5 == 0) {
      lVar5 = func_0x000144f3ea40(uVar7,0x4e);
      auVar15 = auVar16._0_16_;
      if (lVar5 == 0) goto LAB_1401aa731;
    }
    cVar4 = FUN_1400825f0(lVar8);
    auVar15 = auVar16._0_16_;
    fVar10 = _DAT_146159d50;
    if (cVar4 == '\0') {
      fVar10 = _DAT_1499aaaf0;
    }
  }
  auVar15 = vhaddps_avx(auVar15,auVar15);
  fVar14 = 0.0;
  if ((*(byte *)(param_1 + 0x93) & 0x20) != 0) {
    fVar14 = _DAT_145fc6edc;
  }
  fVar10 = (fVar14 + fVar10) * (fVar14 + fVar10);
  auVar12._4_4_ = fVar10;
  auVar12._0_4_ = fVar10;
  auVar12._8_4_ = fVar10;
  auVar12._12_4_ = fVar10;
  auVar15 = vcmpps_avx(auVar12,auVar15,5);
  if (((((SUB161(auVar15 >> 0x1f,0) & 1) != 0 || (SUB161(auVar15 >> 0x3f,0) & 1) != 0) ||
       (SUB161(auVar15 >> 0x5f,0) & 1) != 0) || auVar15[0xf] < '\0') &&
     (lVar5 = func_0x000144edc640(*(undefined4 *)(lVar8 + 0x9c)), lVar5 != 0)) {
    uVar7 = FUN_14067cd10(lVar5,_DAT_145fc7020,0,0,0);
    return uVar7;
  }
  return 0;
}

