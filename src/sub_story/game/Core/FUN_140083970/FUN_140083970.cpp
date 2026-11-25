// Recovered from game_scarlett_master.exe (GTA VI, Xbox Series X, PE32+ x64)
// Address: 140083970  size: 199 bytes
// Name:    FUN_140083970
// Subsystem: core
//
// Referenced strings (0 in this body, 0 including direct callees):
// Callees: FUN_144efb3d0, FUN_144dd7510
//
// Generated decompilation. Formatting follows MiscRef/GTAVSRC conventions;
// identifiers are recovered, not original. See ../../../README.md.

#include "gta6decomp/rage_types.h"


undefined8 FUN_140083970(longlong param_1,undefined8 *param_2,char param_3)

{
  undefined1 auVar1 [16];
  longlong lVar2;
  undefined8 uVar3;
  undefined1 auVar4 [16];
  undefined1 auVar5 [16];
  undefined1 auVar6 [16];
  float fVar7;
  float fVar9;
  float fVar10;
  float fVar11;
  undefined1 auVar8 [64];
  undefined8 uStack_a8;
  undefined8 uStack_a0;
  undefined1 auStack_98 [16];
  undefined8 uStack_88;
  undefined8 uStack_80;
  undefined8 uStack_78;
  undefined8 uStack_70;
  undefined1 auStack_68 [48];
  undefined8 uStack_38;
  undefined8 uStack_30;
  
  uStack_78 = *param_2;
  uStack_70 = param_2[1];
  func_0x000144dc3790(&uStack_78,auStack_98);
  uStack_88 = *(undefined8 *)(param_1 + 0x70);
  uStack_80 = *(undefined8 *)(param_1 + 0x78);
  func_0x000144dc3790(&uStack_88,&uStack_a8);
  if (param_3 != '\0') {
    FUN_144efb3d0(param_1,auStack_68);
    uStack_a8 = uStack_38;
    uStack_a0 = uStack_30;
  }
  auVar1._8_8_ = uStack_a0;
  auVar1._0_8_ = uStack_a8;
  auVar1 = vsubps_avx(auStack_98,auVar1);
  auVar8 = ZEXT1664(auVar1);
  lVar2 = FUN_144dd7510(auStack_98._0_8_);
  fVar7 = auVar8._0_4_;
  fVar9 = auVar8._4_4_;
  fVar10 = auVar8._8_4_;
  fVar11 = auVar8._12_4_;
  if ((lVar2 == 0) || (*(char *)(lVar2 + 0xfa) != '\x05')) {
    auVar4._0_4_ = fVar7 * fVar7;
    auVar4._4_4_ = fVar9 * fVar9;
    auVar4._8_4_ = fVar10 * fVar10;
    auVar4._12_4_ = fVar11 * fVar11;
    auVar6._0_12_ = ZEXT812(0);
    auVar6._12_4_ = 0;
    auVar1 = vblendps_avx(auVar4,auVar6,8);
    auVar1 = vhaddps_avx(auVar1,auVar1);
    auVar1 = vhaddps_avx(auVar1,auVar1);
    uVar3 = auVar1._0_8_;
  }
  else {
    auVar5._0_4_ = fVar7 * fVar7;
    auVar5._4_4_ = fVar9 * fVar9;
    auVar5._8_4_ = fVar10 * fVar10;
    auVar5._12_4_ = fVar11 * fVar11;
    auVar1 = vhaddps_avx(auVar5,auVar5);
    uVar3 = CONCAT44(auVar1._0_4_,auVar1._0_4_);
  }
  return uVar3;
}

