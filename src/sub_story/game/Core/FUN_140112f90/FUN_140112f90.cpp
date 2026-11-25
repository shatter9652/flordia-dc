// Recovered from game_scarlett_master.exe (GTA VI, Xbox Series X, PE32+ x64)
// Address: 140112f90  size: 821 bytes
// Name:    FUN_140112f90
// Subsystem: core
//
// Referenced strings (0 in this body, 0 including direct callees):
// Callees: FUN_145034e00, FUN_14017dc60, FUN_140299f30
//
// Generated decompilation. Formatting follows MiscRef/GTAVSRC conventions;
// identifiers are recovered, not original. See ../../../README.md.

#include "gta6decomp/rage_types.h"


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_140112f90(longlong *param_1,longlong *param_2,undefined1 (*param_3) [16])

{
  undefined8 uVar1;
  int iVar2;
  undefined4 uVar3;
  uint uVar4;
  bool bVar5;
  float fVar6;
  longlong *plVar7;
  longlong lVar8;
  ulonglong uVar9;
  longlong lVar10;
  undefined1 (*pauVar11) [16];
  uint uVar12;
  uint uVar13;
  undefined1 auVar14 [16];
  undefined1 auVar15 [16];
  undefined1 auVar16 [16];
  undefined1 auVar17 [16];
  undefined1 auVar18 [16];
  undefined1 auVar19 [16];
  undefined1 auVar20 [16];
  undefined1 auVar21 [16];
  float fVar22;
  float fVar23;
  float fVar24;
  float fVar25;
  float fVar26;
  ulonglong uStack_50;
  undefined2 uStack_48;
  undefined4 uStack_46;
  undefined2 uStack_42;
  
  iVar2 = (int)param_2[1];
  lVar10 = *param_1;
  if (lVar10 != 0) {
    if (*(int *)(lVar10 + 0xd0) == iVar2 + 1) {
      bVar5 = false;
      goto LAB_140112fc4;
    }
    FUN_14017dc60(lVar10,1);
    *param_1 = 0;
  }
  lVar10 = func_0x000144f97130(0x130);
  FUN_140299f30(lVar10);
  *param_1 = lVar10;
  FUN_145034e00(lVar10,iVar2 + 1,0,1,iVar2,0);
  lVar10 = *param_1;
  bVar5 = true;
LAB_140112fc4:
  auVar16._0_12_ = ZEXT812(0);
  auVar16._12_4_ = 0;
  auVar16 = vcmpps_avx(auVar16,*param_3,2);
  if (auVar16 == (undefined1  [16])0x0) {
    *(undefined4 *)(lVar10 + 0x2c) = 0x3d23d70a;
  }
  else {
    auVar16 = vblendps_avx(*param_3,*(undefined1 (*) [16])(lVar10 + 0x20),7);
    *(undefined1 (*) [16])(lVar10 + 0x20) = auVar16;
  }
  fVar23 = _DAT_14615a2ac;
  if ((ulonglong)*(uint *)(param_2 + 1) == 0) {
    auVar17._4_4_ = _DAT_145fc6f50;
    auVar17._0_4_ = _DAT_145fc6f50;
    auVar17._8_4_ = _DAT_145fc6f50;
    auVar17._12_4_ = _DAT_145fc6f50;
    auVar14._4_4_ = _DAT_145fc6f54;
    auVar14._0_4_ = _DAT_145fc6f54;
    auVar14._8_4_ = _DAT_145fc6f54;
    auVar14._12_4_ = _DAT_145fc6f54;
  }
  else {
    auVar14._4_4_ = _DAT_145fc6f54;
    auVar14._0_4_ = _DAT_145fc6f54;
    auVar14._8_4_ = _DAT_145fc6f54;
    auVar14._12_4_ = _DAT_145fc6f54;
    auVar17._4_4_ = _DAT_145fc6f50;
    auVar17._0_4_ = _DAT_145fc6f50;
    auVar17._8_4_ = _DAT_145fc6f50;
    auVar17._12_4_ = _DAT_145fc6f50;
    lVar10 = 0;
    do {
      pauVar11 = (undefined1 (*) [16])(*param_2 + lVar10);
      lVar10 = lVar10 + 0x10;
      auVar17 = vminps_avx(*pauVar11,auVar17);
      auVar14 = vmaxps_avx(*pauVar11,auVar14);
    } while ((ulonglong)*(uint *)(param_2 + 1) << 4 != lVar10);
  }
  auVar16 = *param_3;
  lVar10 = *param_1;
  auVar17 = vsubps_avx(auVar17,auVar16);
  auVar19._0_4_ = auVar16._0_4_ + auVar14._0_4_;
  auVar19._4_4_ = auVar16._4_4_ + auVar14._4_4_;
  auVar19._8_4_ = auVar16._8_4_ + auVar14._8_4_;
  auVar19._12_4_ = auVar16._12_4_ + auVar14._12_4_;
  **(undefined8 **)(lVar10 + 0xf0) = 0;
  fVar6 = _DAT_145fc6edc;
  uVar1 = vmovlps_avx(auVar17);
  *(undefined8 *)(lVar10 + 0x30) = uVar1;
  uVar3 = vextractps_avx(auVar17,2);
  *(undefined4 *)(lVar10 + 0x38) = uVar3;
  auVar16 = vblendps_avx(auVar19,*(undefined1 (*) [16])(lVar10 + 0x20),8);
  auVar18._0_4_ = (auVar17._0_4_ + auVar19._0_4_) * fVar6;
  auVar18._4_4_ = (auVar17._4_4_ + auVar19._4_4_) * fVar6;
  auVar18._8_4_ = (auVar17._8_4_ + auVar19._8_4_) * fVar6;
  auVar18._12_4_ = (auVar17._12_4_ + auVar19._12_4_) * fVar6;
  *(undefined1 (*) [16])(lVar10 + 0x20) = auVar16;
  auVar20._0_4_ = (auVar16._0_4_ + *(float *)(lVar10 + 0x30)) * fVar6;
  auVar20._4_4_ = (auVar16._4_4_ + *(float *)(lVar10 + 0x34)) * fVar6;
  auVar20._8_4_ = (auVar16._8_4_ + *(float *)(lVar10 + 0x38)) * fVar6;
  auVar20._12_4_ = (auVar16._12_4_ + *(float *)(lVar10 + 0x3c)) * fVar6;
  auVar16 = vsubps_avx(auVar16,auVar20);
  *(undefined1 (*) [16])(lVar10 + 0xa0) = auVar20;
  *(float *)(lVar10 + 0x90) = auVar16._0_4_ * fVar23;
  *(float *)(lVar10 + 0x94) = auVar16._4_4_ * fVar23;
  *(float *)(lVar10 + 0x98) = auVar16._8_4_ * fVar23;
  *(float *)(lVar10 + 0x9c) = auVar16._12_4_ * fVar23;
  fVar23 = _DAT_145fc6ed8;
  uVar13 = *(uint *)(param_2 + 1);
  uVar9 = (ulonglong)uVar13;
  plVar7 = (longlong *)*param_1;
  if (uVar9 == 0) {
    lVar10 = plVar7[0x16];
  }
  else {
    pauVar11 = (undefined1 (*) [16])*param_2;
    lVar10 = plVar7[0x16];
    lVar8 = 0;
    do {
      auVar16 = *(undefined1 (*) [16])(plVar7 + 0x12);
      auVar17 = vsubps_avx(*(undefined1 (*) [16])(plVar7 + 0x14),*pauVar11);
      pauVar11 = pauVar11 + 1;
      auVar14 = vrcpps_avx(auVar16);
      fVar22 = auVar14._0_4_;
      fVar24 = auVar14._4_4_;
      fVar25 = auVar14._8_4_;
      fVar26 = auVar14._12_4_;
      auVar21._0_4_ =
           (int)(((fVar22 * auVar16._0_4_ - fVar23) * fVar22 - fVar22) * auVar17._0_4_ + fVar6);
      auVar21._4_4_ =
           (int)(((fVar24 * auVar16._4_4_ - fVar23) * fVar24 - fVar24) * auVar17._4_4_ + fVar6);
      auVar21._8_4_ =
           (int)(((fVar25 * auVar16._8_4_ - fVar23) * fVar25 - fVar25) * auVar17._8_4_ + fVar6);
      auVar21._12_4_ =
           (int)(((fVar26 * auVar16._12_4_ - fVar23) * fVar26 - fVar26) * auVar17._12_4_ + fVar6);
      auVar16 = vpshuflw_avx(auVar21,0xe8);
      *(int *)(lVar10 + lVar8) = auVar16._0_4_;
      *(short *)(lVar10 + 4 + lVar8) = (short)auVar21._8_4_;
      lVar8 = lVar8 + 6;
    } while (uVar9 * 6 != lVar8);
  }
  auVar16 = *(undefined1 (*) [16])(plVar7 + 0x12);
  auVar14 = vrcpps_avx(auVar16);
  auVar17 = vsubps_avx(*(undefined1 (*) [16])(plVar7 + 0x14),auVar18);
  fVar23 = auVar14._0_4_;
  fVar22 = auVar14._4_4_;
  fVar24 = auVar14._8_4_;
  fVar25 = auVar14._12_4_;
  auVar15._0_4_ =
       (int)(auVar17._0_4_ * ((fVar23 * auVar16._0_4_ - _DAT_145fc6ed8) * fVar23 - fVar23) + fVar6);
  auVar15._4_4_ =
       (int)(auVar17._4_4_ * ((fVar22 * auVar16._4_4_ - _DAT_145fc6ed8) * fVar22 - fVar22) + fVar6);
  auVar15._8_4_ =
       (int)(auVar17._8_4_ * ((fVar24 * auVar16._8_4_ - _DAT_145fc6ed8) * fVar24 - fVar24) + fVar6);
  auVar15._12_4_ =
       (int)(auVar17._12_4_ * ((fVar25 * auVar16._12_4_ - _DAT_145fc6ed8) * fVar25 - fVar25) + fVar6
            );
  auVar16 = vpshuflw_avx(auVar15,0xe8);
  *(int *)(lVar10 + (longlong)iVar2 * 6) = auVar16._0_4_;
  *(short *)(lVar10 + 4 + (longlong)iVar2 * 6) = (short)auVar15._8_4_;
  if (!bVar5) {
    return;
  }
  if (uVar13 != 0) {
    uVar13 = 0;
    do {
      uVar12 = uVar13 + 1;
      uStack_48 = 0;
      uStack_50 = 0;
      uStack_42 = 0xffff;
      uStack_46 = 0xffffffff;
      uVar4 = uVar12;
      if (uVar12 == (uint)uVar9) {
        uVar4 = 0;
      }
      func_0x0001401132d0(&uStack_50,uVar13,uVar4,iVar2);
      uStack_50 = uStack_50 & 0xfffffffff8ffffff;
      func_0x0001400f2140((longlong)(int)uVar13 * 0x10 + *(longlong *)(*param_1 + 0x88),&uStack_50);
      (**(code **)(*(longlong *)*param_1 + 0xf0))((longlong *)*param_1,uVar13,0);
      uVar9 = (ulonglong)*(uint *)(param_2 + 1);
      uVar13 = uVar12;
    } while (uVar12 < *(uint *)(param_2 + 1));
    plVar7 = (longlong *)*param_1;
  }
                    /* WARNING: Could not recover jumptable at 0x00014011322b. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*plVar7 + 0x18))(plVar7);
  return;
}

