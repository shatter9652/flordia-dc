// Recovered from game_scarlett_master.exe (GTA VI, Xbox Series X, PE32+ x64)
// Address: 14000c710  size: 618 bytes
// Name:    FUN_14000c710
// Subsystem: core
//
// Referenced strings (0 in this body, 0 including direct callees):
// Callees: 
//
// Generated decompilation. Formatting follows MiscRef/GTAVSRC conventions;
// identifiers are recovered, not original. See ../../../README.md.

#include "gta6decomp/rage_types.h"


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

bool FUN_14000c710(longlong param_1,int param_2,undefined1 (*param_3) [16],longlong param_4,
                  int *param_5)

{
  undefined4 uVar1;
  uint uVar2;
  int iVar3;
  int iVar4;
  undefined1 auVar5 [16];
  undefined1 auVar6 [16];
  undefined1 auVar7 [16];
  undefined1 auVar8 [16];
  float fVar9;
  float fVar18;
  undefined1 auVar10 [16];
  undefined1 auVar11 [16];
  undefined1 auVar12 [16];
  undefined1 auVar13 [16];
  undefined1 auVar14 [16];
  undefined1 auVar15 [16];
  undefined1 auVar16 [16];
  undefined1 auVar17 [16];
  undefined1 auVar19 [16];
  undefined1 auVar20 [16];
  
  *param_5 = 0;
  iVar3 = *(int *)(param_3[3] + 4);
  if (iVar3 == *(int *)(param_3[2] + 8)) {
    iVar4 = 0;
  }
  else {
    auVar12 = param_3[1];
    iVar4 = 0;
    if (iVar3 + 1 != param_2) {
      iVar4 = iVar3 + 1;
    }
    uVar2 = *(uint *)(param_4 + 4);
    auVar19 = vsubps_avx(*(undefined1 (*) [16])(param_1 + (longlong)iVar4 * 0x10),
                         *(undefined1 (*) [16])(param_1 + (longlong)iVar3 * 0x10));
    auVar10._0_4_ = auVar12._0_4_ ^ _DAT_145fc6f10;
    auVar10._4_4_ = auVar12._4_4_ ^ _DAT_145fc6f10;
    auVar10._8_4_ = auVar12._8_4_ ^ _DAT_145fc6f10;
    auVar10._12_4_ = auVar12._12_4_ ^ _DAT_145fc6f10;
    auVar5 = vshufps_avx(auVar10,auVar10,0x55);
    auVar12 = vunpcklps_avx(auVar5,auVar12);
    *(uint *)(param_4 + 4) = uVar2 + 1;
    fVar9 = auVar19._0_4_;
    auVar5._0_4_ = fVar9 * auVar12._0_4_;
    fVar18 = auVar19._4_4_;
    auVar5._4_4_ = fVar18 * auVar12._4_4_;
    auVar5._8_4_ = fVar9 * auVar12._0_4_;
    auVar5._12_4_ = fVar18 * auVar12._4_4_;
    auVar11._0_4_ = fVar9 * fVar9;
    auVar11._4_4_ = fVar18 * fVar18;
    auVar11._8_4_ = auVar19._8_4_ * auVar19._8_4_;
    auVar11._12_4_ = auVar19._12_4_ * auVar19._12_4_;
    auVar12 = vhaddps_avx(auVar5,auVar5);
    auVar5 = vhaddps_avx(auVar11,auVar11);
    *(float *)(param_4 + 8 + (ulonglong)uVar2 * 8) = (auVar12._0_4_ * auVar12._0_4_) / auVar5._0_4_;
    *(undefined4 *)(param_4 + 0xc + (ulonglong)uVar2 * 8) = 3;
    iVar4 = *param_5 + 1;
    *param_5 = iVar4;
    iVar3 = *(int *)(param_3[2] + 8);
  }
  if (iVar3 != *(int *)(param_3[2] + 0xc)) {
    uVar1 = *(undefined4 *)(*param_3 + 4);
    auVar19._4_4_ = uVar1;
    auVar19._0_4_ = uVar1;
    auVar19._8_4_ = uVar1;
    auVar19._12_4_ = uVar1;
    auVar12._0_4_ = _DAT_145fc6f10 ^ *(uint *)*param_3;
    auVar12._4_4_ = _DAT_145fc6f10 ^ *(uint *)(*param_3 + 4);
    auVar12._8_4_ = _DAT_145fc6f10 ^ *(uint *)(*param_3 + 8);
    auVar12._12_4_ = _DAT_145fc6f10 ^ *(uint *)(*param_3 + 0xc);
    iVar4 = 0;
    if (iVar3 + 1 != param_2) {
      iVar4 = iVar3 + 1;
    }
    auVar5 = vsubps_avx(*(undefined1 (*) [16])(param_1 + (longlong)iVar4 * 0x10),
                        *(undefined1 (*) [16])(param_1 + (longlong)iVar3 * 0x10));
    uVar2 = *(uint *)(param_4 + 4);
    auVar12 = vunpcklps_avx(auVar19,auVar12);
    *(uint *)(param_4 + 4) = uVar2 + 1;
    fVar9 = auVar5._0_4_;
    auVar6._0_4_ = fVar9 * fVar9;
    fVar18 = auVar5._4_4_;
    auVar6._4_4_ = fVar18 * fVar18;
    auVar6._8_4_ = auVar5._8_4_ * auVar5._8_4_;
    auVar6._12_4_ = auVar5._12_4_ * auVar5._12_4_;
    auVar13._0_4_ = fVar9 * auVar12._0_4_;
    auVar13._4_4_ = fVar18 * auVar12._4_4_;
    auVar13._8_4_ = fVar9 * auVar12._0_4_;
    auVar13._12_4_ = fVar18 * auVar12._4_4_;
    auVar12 = vhaddps_avx(auVar6,auVar6);
    auVar5 = vhaddps_avx(auVar13,auVar13);
    *(float *)(param_4 + 8 + (ulonglong)uVar2 * 8) = (auVar5._0_4_ * auVar5._0_4_) / auVar12._0_4_;
    *(undefined4 *)(param_4 + 0xc + (ulonglong)uVar2 * 8) = 0;
    iVar4 = *param_5 + 1;
    *param_5 = iVar4;
    iVar3 = *(int *)(param_3[2] + 0xc);
  }
  if (iVar3 != *(int *)param_3[3]) {
    uVar1 = *(undefined4 *)(param_3[1] + 4);
    auVar20._4_4_ = uVar1;
    auVar20._0_4_ = uVar1;
    auVar20._8_4_ = uVar1;
    auVar20._12_4_ = uVar1;
    auVar14._0_4_ = _DAT_145fc6f10 ^ *(uint *)param_3[1];
    auVar14._4_4_ = _DAT_145fc6f10 ^ *(uint *)(param_3[1] + 4);
    auVar14._8_4_ = _DAT_145fc6f10 ^ *(uint *)(param_3[1] + 8);
    auVar14._12_4_ = _DAT_145fc6f10 ^ *(uint *)(param_3[1] + 0xc);
    iVar4 = 0;
    if (iVar3 + 1 != param_2) {
      iVar4 = iVar3 + 1;
    }
    auVar12 = vsubps_avx(*(undefined1 (*) [16])(param_1 + (longlong)iVar4 * 0x10),
                         *(undefined1 (*) [16])(param_1 + (longlong)iVar3 * 0x10));
    uVar2 = *(uint *)(param_4 + 4);
    auVar5 = vunpcklps_avx(auVar20,auVar14);
    *(uint *)(param_4 + 4) = uVar2 + 1;
    fVar9 = auVar12._0_4_;
    auVar7._0_4_ = fVar9 * fVar9;
    fVar18 = auVar12._4_4_;
    auVar7._4_4_ = fVar18 * fVar18;
    auVar7._8_4_ = auVar12._8_4_ * auVar12._8_4_;
    auVar7._12_4_ = auVar12._12_4_ * auVar12._12_4_;
    auVar15._0_4_ = fVar9 * auVar5._0_4_;
    auVar15._4_4_ = fVar18 * auVar5._4_4_;
    auVar15._8_4_ = fVar9 * auVar5._0_4_;
    auVar15._12_4_ = fVar18 * auVar5._4_4_;
    auVar12 = vhaddps_avx(auVar7,auVar7);
    auVar5 = vhaddps_avx(auVar15,auVar15);
    *(float *)(param_4 + 8 + (ulonglong)uVar2 * 8) = (auVar5._0_4_ * auVar5._0_4_) / auVar12._0_4_;
    *(undefined4 *)(param_4 + 0xc + (ulonglong)uVar2 * 8) = 1;
    iVar4 = *param_5 + 1;
    *param_5 = iVar4;
    iVar3 = *(int *)param_3[3];
  }
  if (iVar3 != *(int *)(param_3[3] + 4)) {
    auVar12 = *param_3;
    iVar4 = 0;
    if (iVar3 + 1 != param_2) {
      iVar4 = iVar3 + 1;
    }
    auVar19 = vsubps_avx(*(undefined1 (*) [16])(param_1 + (longlong)iVar4 * 0x10),
                         *(undefined1 (*) [16])(param_1 + (longlong)iVar3 * 0x10));
    uVar2 = *(uint *)(param_4 + 4);
    auVar16._0_4_ = auVar12._0_4_ ^ _DAT_145fc6f10;
    auVar16._4_4_ = auVar12._4_4_ ^ _DAT_145fc6f10;
    auVar16._8_4_ = auVar12._8_4_ ^ _DAT_145fc6f10;
    auVar16._12_4_ = auVar12._12_4_ ^ _DAT_145fc6f10;
    auVar5 = vshufps_avx(auVar16,auVar16,0x55);
    auVar12 = vunpcklps_avx(auVar5,auVar12);
    *(uint *)(param_4 + 4) = uVar2 + 1;
    fVar9 = auVar19._0_4_;
    auVar8._0_4_ = fVar9 * auVar12._0_4_;
    fVar18 = auVar19._4_4_;
    auVar8._4_4_ = fVar18 * auVar12._4_4_;
    auVar8._8_4_ = fVar9 * auVar12._0_4_;
    auVar8._12_4_ = fVar18 * auVar12._4_4_;
    auVar17._0_4_ = fVar9 * fVar9;
    auVar17._4_4_ = fVar18 * fVar18;
    auVar17._8_4_ = auVar19._8_4_ * auVar19._8_4_;
    auVar17._12_4_ = auVar19._12_4_ * auVar19._12_4_;
    auVar12 = vhaddps_avx(auVar8,auVar8);
    auVar5 = vhaddps_avx(auVar17,auVar17);
    *(float *)(param_4 + 8 + (ulonglong)uVar2 * 8) = (auVar12._0_4_ * auVar12._0_4_) / auVar5._0_4_;
    *(undefined4 *)(param_4 + 0xc + (ulonglong)uVar2 * 8) = 2;
    iVar4 = *param_5 + 1;
    *param_5 = iVar4;
  }
  return 0 < iVar4;
}

