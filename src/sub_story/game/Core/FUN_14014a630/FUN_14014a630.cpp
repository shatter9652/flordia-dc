// Recovered from game_scarlett_master.exe (GTA VI, Xbox Series X, PE32+ x64)
// Address: 14014a630  size: 254 bytes
// Name:    FUN_14014a630
// Subsystem: core
//
// Referenced strings (0 in this body, 0 including direct callees):
// Callees: FUN_14014a730
//
// Generated decompilation. Formatting follows MiscRef/GTAVSRC conventions;
// identifiers are recovered, not original. See ../../../README.md.

#include "gta6decomp/rage_types.h"


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_14014a630(undefined1 (*param_1) [16],longlong param_2)

{
  float fVar1;
  ushort uVar2;
  uint uVar3;
  ulonglong uVar4;
  ulonglong uVar5;
  longlong lVar6;
  undefined1 auVar7 [16];
  undefined1 auVar8 [16];
  undefined1 auVar9 [16];
  undefined1 auVar10 [16];
  undefined1 auVar12 [16];
  undefined1 auVar13 [16];
  undefined1 auStack_70 [16];
  longlong lStack_60;
  undefined1 auVar11 [64];
  undefined1 auVar14 [64];
  
  auVar12._4_4_ = _DAT_145fc6f50;
  auVar12._0_4_ = _DAT_145fc6f50;
  auVar12._8_4_ = _DAT_145fc6f50;
  auVar12._12_4_ = _DAT_145fc6f50;
  auVar14 = ZEXT1664(auVar12);
  auVar9._4_4_ = _DAT_145fc6f54;
  auVar9._0_4_ = _DAT_145fc6f54;
  auVar9._8_4_ = _DAT_145fc6f54;
  auVar9._12_4_ = _DAT_145fc6f54;
  auVar11 = ZEXT1664(auVar9);
  uVar3 = *(uint *)(param_2 + 0x20);
  lVar6 = (longlong)(int)uVar3;
  *param_1 = auVar12;
  param_1[1] = auVar9;
  if (0 < lVar6) {
    uVar2 = *(ushort *)(*(longlong *)(param_2 + 0x18) + 8);
    FUN_14014a730(auStack_70,*(undefined8 *)(param_2 + 0x10),*(undefined4 *)(param_2 + 0x80),uVar3);
    if (uVar3 == uVar2) {
      auVar10._4_4_ = _DAT_145fc6f54;
      auVar10._0_4_ = _DAT_145fc6f54;
      auVar10._8_4_ = _DAT_145fc6f54;
      auVar10._12_4_ = _DAT_145fc6f54;
      auVar13._4_4_ = _DAT_145fc6f50;
      auVar13._0_4_ = _DAT_145fc6f50;
      auVar13._8_4_ = _DAT_145fc6f50;
      auVar13._12_4_ = _DAT_145fc6f50;
      uVar4 = 0;
      do {
        fVar1 = *(float *)(**(longlong **)(param_2 + 0x18) + 0xc + uVar4 * 2);
        auVar8._4_4_ = fVar1;
        auVar8._0_4_ = fVar1;
        auVar8._8_4_ = fVar1;
        auVar8._12_4_ = fVar1;
        uVar5 = uVar4 + 0x20;
        auVar9 = *(undefined1 (*) [16])(lStack_60 + (uVar4 & 0xffffffff));
        auVar12 = vsubps_avx(auVar9,auVar8);
        auVar7._0_4_ = fVar1 + auVar9._0_4_;
        auVar7._4_4_ = fVar1 + auVar9._4_4_;
        auVar7._8_4_ = fVar1 + auVar9._8_4_;
        auVar7._12_4_ = fVar1 + auVar9._12_4_;
        auVar13 = vminps_avx(auVar12,auVar13);
        auVar10 = vmaxps_avx(auVar7,auVar10);
        uVar4 = uVar5;
      } while (lVar6 * 0x20 != uVar5);
    }
    else {
      uVar4 = 0;
      do {
        uVar5 = uVar4 + 0x20;
        auVar9 = *(undefined1 (*) [16])(lStack_60 + (uVar4 & 0xffffffff));
        auVar13 = vminps_avx(auVar9,auVar14._0_16_);
        auVar14 = ZEXT1664(auVar13);
        auVar10 = vmaxps_avx(auVar9,auVar11._0_16_);
        auVar11 = ZEXT1664(auVar10);
        uVar4 = uVar5;
      } while (lVar6 * 0x20 != uVar5);
    }
    *param_1 = auVar13;
    param_1[1] = auVar10;
  }
  return;
}

