// Recovered from game_scarlett_master.exe (GTA VI, Xbox Series X, PE32+ x64)
// Address: 1400afd30  size: 588 bytes
// Name:    FUN_1400afd30
// Subsystem: core
//
// Referenced strings (0 in this body, 0 including direct callees):
// Callees: FUN_1400affa0, FUN_1400b0050, FUN_142e7b760
//
// Generated decompilation. Formatting follows MiscRef/GTAVSRC conventions;
// identifiers are recovered, not original. See ../../../README.md.

#include "gta6decomp/rage_types.h"


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1400afd30(undefined8 *param_1,undefined1 (*param_2) [32],longlong param_3)

{
  longlong lVar1;
  float fVar2;
  float fVar3;
  float fVar4;
  float fVar5;
  float fVar6;
  float fVar7;
  float fVar8;
  float fVar9;
  undefined8 uVar10;
  char cVar11;
  longlong lVar12;
  longlong lVar13;
  undefined1 auVar14 [16];
  undefined1 auVar15 [16];
  undefined1 auVar16 [16];
  undefined1 auVar17 [16];
  float fVar18;
  float fVar19;
  float fVar20;
  float fVar21;
  undefined1 auVar22 [64];
  undefined1 auStack_d8 [16];
  undefined8 uStack_c8;
  undefined8 uStack_c0;
  undefined1 auStack_b8 [16];
  undefined8 uStack_a8;
  undefined8 uStack_a0;
  undefined8 uStack_98;
  undefined8 uStack_90;
  undefined8 uStack_88;
  undefined8 uStack_80;
  undefined8 uStack_78;
  undefined8 uStack_70;
  undefined4 uStack_68;
  undefined4 uStack_64;
  undefined2 uStack_60;
  undefined6 uStack_5e;
  undefined2 uStack_58;
  undefined6 uStack_56;
  undefined2 uStack_50;
  undefined6 uStack_4e;
  undefined2 uStack_48;
  undefined6 uStack_46;
  undefined2 uStack_40;
  undefined6 uStack_3e;
  
  fVar6 = *(float *)(param_1 + 2);
  fVar7 = *(float *)((longlong)param_1 + 0x14);
  fVar8 = *(float *)(param_1 + 3);
  fVar9 = *(float *)((longlong)param_1 + 0x1c);
  auVar16._0_12_ = ZEXT812(0);
  auVar16._12_4_ = 0;
  auVar15._0_4_ = fVar6 * fVar6;
  auVar15._4_4_ = fVar7 * fVar7;
  auVar15._8_4_ = fVar8 * fVar8;
  auVar15._12_4_ = fVar9 * fVar9;
  auVar15 = vblendps_avx(auVar15,auVar16,8);
  auVar15 = vhaddps_avx(auVar15,auVar15);
  auVar15 = vhaddps_avx(auVar15,auVar15);
  auVar16 = vrsqrtps_avx(auVar15);
  fVar2 = auVar16._0_4_;
  fVar3 = auVar16._4_4_;
  fVar4 = auVar16._8_4_;
  fVar5 = auVar16._12_4_;
  fVar18 = fVar2 * fVar2 * auVar15._0_4_ * _DAT_145fc6f08 - _DAT_145fc6f08;
  fVar19 = fVar3 * fVar3 * auVar15._4_4_ * _DAT_145fc6f08 - _DAT_145fc6f08;
  fVar20 = fVar4 * fVar4 * auVar15._8_4_ * _DAT_145fc6f08 - _DAT_145fc6f08;
  fVar21 = fVar5 * fVar5 * auVar15._12_4_ * _DAT_145fc6f08 - _DAT_145fc6f08;
  auVar17._4_4_ = _DAT_145fc6f14;
  auVar17._0_4_ = _DAT_145fc6f14;
  auVar17._8_4_ = _DAT_145fc6f14;
  auVar17._12_4_ = _DAT_145fc6f14;
  auVar15 = vcmpps_avx(auVar17,auVar15,1);
  *(undefined1 (*) [32])(*param_2 + 0x14) = ZEXT432(0) << 0x20;
  *param_2 = ZEXT432(0) << 0x20;
  *(undefined4 *)(param_2[1] + 0x14) = 0xffffffff;
  *(undefined2 *)(param_2[1] + 0x18) = 0;
  auVar22 = ZEXT1664(CONCAT412(auVar15._12_4_ & (uint)((fVar21 * fVar5 + fVar5) * fVar9),
                               CONCAT48(auVar15._8_4_ & (uint)((fVar20 * fVar4 + fVar4) * fVar8),
                                        CONCAT44(auVar15._4_4_ &
                                                 (uint)((fVar19 * fVar3 + fVar3) * fVar7),
                                                 auVar15._0_4_ &
                                                 (uint)((fVar18 * fVar2 + fVar2) * fVar6)))));
  func_0x0001400aff80(param_2);
  lVar1 = param_1[5];
  lVar12 = FUN_1400b0050(param_3 + 0x10,param_1[4],lVar1);
  auVar15 = auVar22._0_16_;
  if (lVar12 == 0) {
    if (lVar1 != 0) {
      return;
    }
    if (*(int *)(param_1 + 6) != 0) {
      return;
    }
    uVar10 = param_1[1];
    *(undefined8 *)*param_2 = *param_1;
    *(undefined8 *)(*param_2 + 8) = uVar10;
    *(undefined1 (*) [16])(*param_2 + 0x10) = auVar15;
  }
  else {
    if (*(longlong *)(lVar12 + 0x20) == 0) {
      lVar13 = 0;
    }
    else {
      lVar13 = *(longlong *)(*(longlong *)(lVar12 + 0x20) + 0x60);
    }
    if (lVar13 != lVar1) {
      return;
    }
    if (*(int *)(param_1 + 6) == 0) {
      uStack_a8 = *param_1;
      uStack_a0 = param_1[1];
      auStack_d8 = auVar15;
      FUN_1400affa0(&uStack_98,lVar12,0,&uStack_a8,auStack_d8,0);
      *(ulonglong *)(param_2[2] + 0x18) = CONCAT62(uStack_3e,uStack_40);
      *(ulonglong *)(param_2[1] + 0x1a) = CONCAT26(uStack_58,uStack_5e);
      *(ulonglong *)(param_2[2] + 2) = CONCAT26(uStack_50,uStack_56);
      *(ulonglong *)(param_2[2] + 10) = CONCAT26(uStack_48,uStack_4e);
      *(ulonglong *)(param_2[2] + 0x12) = CONCAT26(uStack_40,uStack_46);
      *(undefined8 *)*param_2 = uStack_98;
      *(undefined8 *)(*param_2 + 8) = uStack_90;
      *(undefined8 *)(*param_2 + 0x10) = uStack_88;
      *(undefined8 *)(*param_2 + 0x18) = uStack_80;
      *(undefined8 *)param_2[1] = uStack_78;
      *(undefined8 *)(param_2[1] + 8) = uStack_70;
      *(undefined4 *)(param_2[1] + 0x10) = uStack_68;
      *(undefined4 *)(param_2[1] + 0x14) = uStack_64;
      *(undefined2 *)(param_2[1] + 0x18) = uStack_60;
    }
    else {
      uStack_c8 = *param_1;
      uStack_c0 = param_1[1];
      auStack_b8 = auVar15;
      FUN_1400affa0(&uStack_98,lVar12,*(int *)(param_1 + 6),&uStack_c8,auStack_b8,0);
      *(undefined8 *)*param_2 = uStack_98;
      *(undefined8 *)(*param_2 + 8) = uStack_90;
      *(undefined8 *)(*param_2 + 0x10) = uStack_88;
      *(undefined8 *)(*param_2 + 0x18) = uStack_80;
      *(undefined8 *)param_2[1] = uStack_78;
      *(undefined8 *)(param_2[1] + 8) = uStack_70;
      *(ulonglong *)(param_2[1] + 0x10) = CONCAT44(uStack_64,uStack_68);
      *(ulonglong *)(param_2[1] + 0x18) = CONCAT62(uStack_5e,uStack_60);
      *(ulonglong *)param_2[2] = CONCAT62(uStack_56,uStack_58);
      *(ulonglong *)(param_2[2] + 8) = CONCAT62(uStack_4e,uStack_50);
      *(ulonglong *)(param_2[2] + 0x10) = CONCAT62(uStack_46,uStack_48);
      *(ulonglong *)(param_2[2] + 0x18) = CONCAT62(uStack_3e,uStack_40);
    }
    if (*(char *)((longlong)param_1 + 0x34) != '\x01') {
      return;
    }
    cVar11 = FUN_142e7b760(param_2,lVar12 + 0x40,&uStack_98,auStack_d8);
    if (cVar11 == '\0') {
      return;
    }
    *(undefined8 *)*param_2 = uStack_98;
    *(undefined8 *)(*param_2 + 8) = uStack_90;
    *(undefined8 *)(*param_2 + 0x10) = auStack_d8._0_8_;
    *(undefined8 *)(*param_2 + 0x18) = auStack_d8._8_8_;
  }
  auVar14._0_12_ = ZEXT812(0);
  auVar14._12_4_ = 0;
  *(undefined4 *)(param_2[1] + 0x10) = 0;
  *(undefined1 (*) [16])param_2[1] = auVar14;
  *(undefined4 *)(param_2[1] + 0x14) = 0xffffffff;
  *(undefined2 *)(param_2[1] + 0x18) = 0;
  return;
}

