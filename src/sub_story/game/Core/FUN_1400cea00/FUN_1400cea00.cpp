// Recovered from game_scarlett_master.exe (GTA VI, Xbox Series X, PE32+ x64)
// Address: 1400cea00  size: 1004 bytes
// Name:    FUN_1400cea00
// Subsystem: core
//
// Referenced strings (0 in this body, 0 including direct callees):
// Callees: FUN_1450128a0, FUN_145012860, FUN_145281cc0, FUN_144db6f00
//
// Generated decompilation. Formatting follows MiscRef/GTAVSRC conventions;
// identifiers are recovered, not original. See ../../../README.md.

#include "gta6decomp/rage_types.h"


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1400cea00(longlong param_1,longlong *param_2)

{
  longlong lVar1;
  char cVar2;
  undefined4 uVar3;
  int iVar4;
  int iVar5;
  longlong *plVar6;
  longlong *plVar7;
  float fVar8;
  undefined1 auVar9 [16];
  undefined1 auVar10 [16];
  undefined1 auVar11 [16];
  float fVar12;
  float fVar15;
  float fVar16;
  undefined1 auVar13 [16];
  float fVar17;
  undefined1 auVar14 [16];
  float fVar18;
  undefined1 auVar19 [16];
  undefined1 auVar20 [16];
  undefined1 auVar21 [16];
  undefined1 auVar22 [64];
  undefined1 auVar23 [64];
  float fVar24;
  float fVar25;
  undefined1 auVar26 [16];
  undefined *puStack_138;
  longlong *plStack_130;
  int iStack_120;
  undefined1 auStack_118 [16];
  undefined1 auStack_108 [16];
  undefined1 auStack_f8 [16];
  undefined1 auStack_e8 [16];
  undefined1 auStack_d8 [32];
  float fStack_b8;
  float fStack_b4;
  float fStack_b0;
  float fStack_ac;
  
  cVar2 = func_0x000140019b90(param_2[3],0x1e00df18);
  if (cVar2 != '\0') {
    uVar3 = FUN_1450128a0(*(undefined8 *)param_2[0x766],4);
    FUN_145012860(&puStack_138,param_2,uVar3,0);
    puStack_138 = &UNK_14669fee0;
    fVar8 = (float)func_0x000140bda800(*(undefined4 *)(param_2[4] + 0x1c));
    FUN_145281cc0(param_2 + 2,*(undefined4 *)(param_1 + 0x168),auStack_d8);
    lVar1 = plStack_130[0x766];
    iVar4 = func_0x0001450141d0(&puStack_138);
    iVar4 = func_0x00014001bd40(*(undefined8 *)(*(longlong *)(lVar1 + 0x10) + 0x80),
                                *(undefined4 *)(&UNK_14669fed0 + (longlong)iVar4 * 4));
    plVar6 = plStack_130;
    iVar5 = func_0x000144e05fa0(plStack_130[1]);
    auVar23 = ZEXT1264(ZEXT812(0));
    if (iVar4 == iVar5) {
      auVar21._0_12_ = ZEXT812(0);
      auVar21._12_4_ = 0;
    }
    else {
      uVar3 = (**(code **)(*plVar6 + 0xf0))(plVar6,iVar4);
      (**(code **)(*plVar6 + 0x108))(plVar6,uVar3,auStack_118);
      plVar6 = plStack_130;
      auVar21 = auStack_108;
    }
    auVar22 = ZEXT1664(auVar21);
    iVar4 = (**(code **)(*plVar6 + 0x20))
                      (plVar6,*(undefined4 *)(&UNK_14669f8e0 + (longlong)iStack_120 * 4));
    plVar7 = (longlong *)0x0;
    if (iVar4 != -1) {
      plVar7 = plVar6;
    }
    iVar5 = func_0x000144e05fa0(plVar7[1]);
    if (iVar4 != iVar5) {
      uVar3 = (**(code **)(*plVar7 + 0xf0))(plVar7,iVar4);
      (**(code **)(*plVar7 + 0x108))(plVar7,uVar3,auStack_118);
      auVar23 = ZEXT1664(auStack_108);
    }
    FUN_144db6f00(param_2 + 2,auStack_118,0xffffffff);
    fVar25 = _DAT_145fc6f08;
    fVar24 = _DAT_145fc6edc;
    auVar19._0_4_ = fStack_b8 * fStack_b8;
    auVar19._4_4_ = fStack_b4 * fStack_b4;
    auVar19._8_4_ = fStack_b0 * fStack_b0;
    auVar19._12_4_ = fStack_ac * fStack_ac;
    auVar11 = vsubps_avx(auStack_118,auVar22._0_16_);
    auVar20._0_12_ = ZEXT812(0);
    auVar20._12_4_ = 0;
    auVar22 = ZEXT1664(auVar20);
    auVar26 = vsubps_avx(auStack_118,auVar23._0_16_);
    auVar21 = vblendps_avx(auVar19,auVar20,8);
    auVar13._0_4_ = auVar11._0_4_ * fStack_b8;
    auVar13._4_4_ = auVar11._4_4_ * fStack_b4;
    auVar13._8_4_ = auVar11._8_4_ * fStack_b0;
    auVar13._12_4_ = auVar11._12_4_ * fStack_ac;
    auVar11 = vhaddps_avx(auVar21,auVar21);
    auVar21 = vblendps_avx(auVar13,auVar20,8);
    auVar21 = vhaddps_avx(auVar21,auVar21);
    auVar11 = vhaddps_avx(auVar11,auVar11);
    auVar21 = vhaddps_avx(auVar21,auVar21);
    fVar18 = _DAT_145fc6ed8 / auVar11._0_4_;
    fVar17 = auVar21._0_4_ * fVar18;
    fVar12 = fVar17 * (float)((uint)fStack_b8 ^ _DAT_145fc6f10);
    fVar15 = fVar17 * (float)((uint)fStack_b4 ^ _DAT_145fc6f10);
    fVar16 = fVar17 * (float)((uint)fStack_b0 ^ _DAT_145fc6f10);
    fVar17 = fVar17 * (float)((uint)fStack_ac ^ _DAT_145fc6f10);
    auVar14._0_4_ = fVar12 * fVar12;
    auVar14._4_4_ = fVar15 * fVar15;
    auVar14._8_4_ = fVar16 * fVar16;
    auVar14._12_4_ = fVar17 * fVar17;
    auVar21 = vblendps_avx(auVar14,auVar20,8);
    auVar21 = vhaddps_avx(auVar21,auVar21);
    auVar11 = vhaddps_avx(auVar21,auVar21);
    auVar10 = vrsqrtss_avx(auVar11,auVar11);
    auVar9._0_4_ = auVar26._0_4_ * fStack_b8;
    auVar9._4_4_ = auVar26._4_4_ * fStack_b4;
    auVar9._8_4_ = auVar26._8_4_ * fStack_b0;
    auVar9._12_4_ = auVar26._12_4_ * fStack_ac;
    auVar21 = vblendps_avx(auVar9,auVar20,8);
    auVar21 = vhaddps_avx(auVar21,auVar21);
    fVar16 = auVar10._0_4_;
    auVar21 = vhaddps_avx(auVar21,auVar21);
    fVar18 = auVar21._0_4_ * fVar18;
    fVar17 = fVar18 * (float)((uint)fStack_b8 ^ _DAT_145fc6f10);
    fVar12 = fVar18 * (float)((uint)fStack_b4 ^ _DAT_145fc6f10);
    fVar15 = fVar18 * (float)((uint)fStack_b0 ^ _DAT_145fc6f10);
    fVar18 = fVar18 * (float)((uint)fStack_ac ^ _DAT_145fc6f10);
    auVar10._0_4_ = fVar17 * fVar17;
    auVar10._4_4_ = fVar12 * fVar12;
    auVar10._8_4_ = fVar15 * fVar15;
    auVar10._12_4_ = fVar18 * fVar18;
    auVar23 = ZEXT464(_DAT_146159bfc);
    auVar21 = vblendps_avx(auVar10,auVar20,8);
    auVar10 = vhaddps_avx(auVar21,auVar21);
    auVar26 = ZEXT416(_DAT_146159bfc);
    auVar21 = vcmpss_avx(auVar26,auVar11,2);
    auVar10 = vhaddps_avx(auVar10,auVar10);
    *(float *)(param_1 + 0x350) =
         (float)(auVar21._0_4_ &
                (uint)(((_DAT_145fc6f08 * fVar16 * fVar16 * auVar11._0_4_ + _DAT_145fc6edc) * fVar16
                       + fVar16) * auVar11._0_4_)) * fVar8;
    auVar21 = vrsqrtss_avx(auVar10,auVar10);
    fVar17 = auVar21._0_4_;
    auVar21 = vcmpss_avx(auVar26,auVar10,2);
    *(float *)(param_1 + 0x354) =
         (float)(auVar21._0_4_ &
                (uint)(((fVar25 * fVar17 * fVar17 * auVar10._0_4_ + fVar24) * fVar17 + fVar17) *
                      auVar10._0_4_)) * fVar8;
    uVar3 = (**(code **)(*param_2 + 0xf0))(param_2,0);
    func_0x000144e1ecd0(param_2[3],auStack_e8,uVar3);
    lVar1 = plStack_130[0x766];
    iVar4 = (**(code **)(puStack_138 + 8))(&puStack_138);
    uVar3 = func_0x00014001bd40(*(undefined8 *)(*(longlong *)(lVar1 + 0x10) + 0x80),
                                *(undefined4 *)(&UNK_14669fed0 + (longlong)iVar4 * 4));
    uVar3 = (**(code **)(*plStack_130 + 0xf0))(plStack_130,uVar3);
    func_0x000144e1ecd0(param_2[3],auStack_f8,uVar3);
    auVar21 = vsubps_avx(auStack_e8,auStack_f8);
    auVar11._0_4_ = auVar21._0_4_ * auVar21._0_4_;
    auVar11._4_4_ = auVar21._4_4_ * auVar21._4_4_;
    auVar11._8_4_ = auVar21._8_4_ * auVar21._8_4_;
    auVar11._12_4_ = auVar21._12_4_ * auVar21._12_4_;
    auVar21 = vblendps_avx(auVar11,auVar22._0_16_,8);
    auVar21 = vhaddps_avx(auVar21,auVar21);
    auVar11 = vhaddps_avx(auVar21,auVar21);
    auVar21 = vrsqrtss_avx(auVar11,auVar11);
    fVar17 = auVar21._0_4_;
    auVar21 = vcmpss_avx(auVar23._0_16_,auVar11,2);
    *(float *)(param_1 + 0x360) =
         (float)(auVar21._0_4_ &
                (uint)(((fVar25 * fVar17 * fVar17 * auVar11._0_4_ + fVar24) * fVar17 + fVar17) *
                      auVar11._0_4_)) * fVar8;
  }
  return;
}

