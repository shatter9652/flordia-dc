// Recovered from game_scarlett_master.exe (GTA VI, Xbox Series X, PE32+ x64)
// Address: 14010c6d0  size: 504 bytes
// Name:    FUN_14010c6d0
// Subsystem: core
//
// Referenced strings (0 in this body, 0 including direct callees):
// Callees: FUN_14010c8d0, FUN_14010d910, FUN_14327e310, FUN_1402eee20
//
// Generated decompilation. Formatting follows MiscRef/GTAVSRC conventions;
// identifiers are recovered, not original. See ../../../README.md.

#include "gta6decomp/rage_types.h"


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_14010c6d0(ulonglong param_1,undefined1 (*param_2) [16],undefined4 param_3,
                  undefined8 param_4,undefined8 param_5,longlong param_6,undefined4 param_7,
                  undefined4 param_8)

{
  undefined1 (*pauVar1) [16];
  undefined1 auVar2 [16];
  float fVar3;
  float fVar4;
  float fVar5;
  float fVar6;
  float fVar7;
  float fVar8;
  float fVar9;
  float fVar10;
  undefined8 uVar11;
  undefined8 uVar12;
  undefined8 uVar13;
  undefined8 uVar14;
  undefined8 uVar15;
  undefined8 uVar16;
  undefined8 uVar17;
  char cVar18;
  longlong lVar19;
  undefined1 auVar20 [16];
  undefined1 auVar21 [16];
  float fVar22;
  float fVar23;
  float fVar24;
  ulonglong in_stack_ffffffffffffff38;
  undefined8 uStack_98;
  undefined8 uStack_90;
  undefined1 auStack_88 [16];
  undefined8 uStack_78;
  undefined8 uStack_70;
  undefined8 uStack_68;
  undefined8 uStack_60;
  undefined8 uStack_58;
  undefined8 uStack_50;
  
  uVar11 = uRam000000014849bfd8;
  lVar19 = (param_1 & 0xffffffff) * 0x180;
  pauVar1 = (undefined1 (*) [16])(lVar19 + 0x14849bce0);
  *(undefined8 *)*pauVar1 = _DAT_14849bfd0;
  *(undefined8 *)(lVar19 + 0x14849bce8) = uVar11;
  auStack_88 = vsubps_avx(*pauVar1,*param_2);
  auVar2 = vmovshdup_avx(auStack_88);
  FUN_14010c8d0(&uStack_98,auVar2._0_8_);
  cVar18 = FUN_1402eee20();
  if (cVar18 != '\0') {
    uStack_68 = *(undefined8 *)*pauVar1;
    uStack_60 = *(undefined8 *)(lVar19 + 0x14849bce8);
    uStack_58 = uStack_98;
    uStack_50 = uStack_90;
    FUN_14327e310(pauVar1,param_2,param_5,&uStack_68,in_stack_ffffffffffffff38 & 0xffffffffffffff00,
                  &uStack_58,(int)*(short *)(param_6 + 0x246),*(undefined4 *)(param_6 + 0x240));
  }
  uStack_78 = *(undefined8 *)*pauVar1;
  uStack_70 = *(undefined8 *)(lVar19 + 0x14849bce8);
  FUN_14010d910(lVar19 + 0x14849bcd0,param_2,auStack_88,param_3,param_4,param_5,param_7,param_8,
                &uStack_78,&uStack_98);
  auVar21._0_12_ = ZEXT812(0);
  auVar21._12_4_ = 0;
  auVar2 = vsubps_avx(*(undefined1 (*) [16])(lVar19 + 0x14849bce0),*param_2);
  fVar3 = auVar2._0_4_;
  auVar20._0_4_ = fVar3 * fVar3;
  fVar5 = auVar2._4_4_;
  auVar20._4_4_ = fVar5 * fVar5;
  fVar7 = auVar2._8_4_;
  auVar20._8_4_ = fVar7 * fVar7;
  fVar9 = auVar2._12_4_;
  auVar20._12_4_ = fVar9 * fVar9;
  auVar2 = vblendps_avx(auVar20,auVar21,8);
  auVar2 = vhaddps_avx(auVar2,auVar2);
  auVar2 = vhaddps_avx(auVar2,auVar2);
  auVar20 = vrsqrtps_avx(auVar2);
  fVar4 = auVar20._0_4_;
  fVar6 = auVar20._4_4_;
  fVar8 = auVar20._8_4_;
  fVar10 = auVar20._12_4_;
  fVar22 = fVar6 * fVar6 * auVar2._4_4_ * _DAT_145fc6f08 - _DAT_145fc6f08;
  fVar23 = fVar8 * fVar8 * auVar2._8_4_ * _DAT_145fc6f08 - _DAT_145fc6f08;
  fVar24 = fVar10 * fVar10 * auVar2._12_4_ * _DAT_145fc6f08 - _DAT_145fc6f08;
  *(float *)(param_6 + 0x130) =
       ((fVar4 * fVar4 * auVar2._0_4_ * _DAT_145fc6f08 - _DAT_145fc6f08) * fVar4 + fVar4) * fVar3;
  *(float *)(param_6 + 0x134) = (fVar22 * fVar6 + fVar6) * fVar5;
  *(float *)(param_6 + 0x138) = (fVar23 * fVar8 + fVar8) * fVar7;
  *(float *)(param_6 + 0x13c) = (fVar24 * fVar10 + fVar10) * fVar9;
  uVar11 = *(undefined8 *)(lVar19 + 0x14849bd28);
  *(undefined8 *)(param_6 + 0x140) = *(undefined8 *)(lVar19 + 0x14849bd20);
  *(undefined8 *)(param_6 + 0x148) = uVar11;
  uVar11 = *(undefined8 *)(*param_2 + 8);
  *(undefined8 *)(param_6 + 0x120) = *(undefined8 *)*param_2;
  *(undefined8 *)(param_6 + 0x128) = uVar11;
  func_0x000145f40560(param_6,lVar19 + 0x14849bd10,0xe8);
  *(undefined8 *)(param_6 + 0xe8) = *(undefined8 *)(lVar19 + 0x14849bdf8);
  uVar11 = *(undefined8 *)(lVar19 + 0x14849be00);
  uVar12 = *(undefined8 *)(lVar19 + 0x14849be08);
  uVar13 = *(undefined8 *)(lVar19 + 0x14849be10);
  uVar14 = *(undefined8 *)(lVar19 + 0x14849be18);
  uVar15 = *(undefined8 *)(lVar19 + 0x14849be16);
  uVar16 = *(undefined8 *)(lVar19 + 0x14849be1e);
  uVar17 = *(undefined8 *)(lVar19 + 0x14849be26);
  *(undefined8 *)(param_6 + 0xfe) = *(undefined8 *)(lVar19 + 0x14849be0e);
  *(undefined8 *)(param_6 + 0x106) = uVar15;
  *(undefined8 *)(param_6 + 0x10e) = uVar16;
  *(undefined8 *)(param_6 + 0x116) = uVar17;
  *(undefined8 *)(param_6 + 0xf0) = uVar11;
  *(undefined8 *)(param_6 + 0xf8) = uVar12;
  *(undefined8 *)(param_6 + 0x100) = uVar13;
  *(undefined8 *)(param_6 + 0x108) = uVar14;
  *(uint *)(param_6 + 0x240) = *(uint *)(param_6 + 0x240) & 0xffffc7f1 | 0x2006;
  return;
}

