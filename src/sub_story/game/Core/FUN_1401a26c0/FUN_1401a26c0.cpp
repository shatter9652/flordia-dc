// Recovered from game_scarlett_master.exe (GTA VI, Xbox Series X, PE32+ x64)
// Address: 1401a26c0  size: 973 bytes
// Name:    FUN_1401a26c0
// Subsystem: core
//
// Referenced strings (0 in this body, 0 including direct callees):
// Callees: FUN_1409e8bc0, FUN_144dd3030, FUN_14520bce0, FUN_14025d730, FUN_1424095c0, FUN_144dd9c70, FUN_1451d9b00
//
// Generated decompilation. Formatting follows MiscRef/GTAVSRC conventions;
// identifiers are recovered, not original. See ../../../README.md.

#include "gta6decomp/rage_types.h"


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1401a26c0(longlong *param_1,longlong param_2)

{
  float fVar1;
  ushort uVar2;
  undefined4 uVar3;
  char cVar4;
  uint uVar5;
  longlong *plVar6;
  longlong lVar7;
  float fVar8;
  undefined8 uVar9;
  undefined1 auVar10 [16];
  undefined1 extraout_var [56];
  undefined1 auVar11 [64];
  undefined1 auVar12 [16];
  undefined1 auVar13 [16];
  undefined1 auVar14 [16];
  undefined1 auVar15 [16];
  undefined1 in_register_00001304 [12];
  undefined1 auVar16 [64];
  undefined1 auVar17 [64];
  undefined1 auVar18 [64];
  undefined1 auVar19 [64];
  undefined1 auVar20 [16];
  undefined8 uStack_c8;
  undefined8 uStack_c0;
  undefined1 aauStack_b8 [3] [16];
  undefined1 auStack_88 [16];
  undefined1 extraout_var_00 [56];
  undefined1 auVar21 [64];
  
  plVar6 = (longlong *)FUN_144dd3030(param_2);
  if (plVar6 == (longlong *)0x0) {
    return;
  }
  FUN_14520bce0(aauStack_b8);
  uStack_c8 = *(undefined8 *)(param_2 + 0x70);
  uStack_c0 = *(undefined8 *)(param_2 + 0x78);
  auVar16 = ZEXT1664(auStack_88);
  func_0x000144dc3790(&uStack_c8,aauStack_b8);
  auVar12._0_12_ = ZEXT812(0);
  auVar12._12_4_ = 0;
  auVar20 = vsubps_avx(aauStack_b8[0],auVar16._0_16_);
  auVar10._0_4_ = auVar20._0_4_ * auVar20._0_4_;
  auVar10._4_4_ = auVar20._4_4_ * auVar20._4_4_;
  auVar10._8_4_ = auVar20._8_4_ * auVar20._8_4_;
  auVar10._12_4_ = auVar20._12_4_ * auVar20._12_4_;
  auVar20 = vblendps_avx(auVar10,auVar12,8);
  auVar20 = vhaddps_avx(auVar20,auVar20);
  auVar10 = vhaddps_avx(auVar20,auVar20);
  auVar20 = vrsqrtss_avx(auVar10,auVar10);
  fVar8 = auVar20._0_4_;
  auVar20 = vcmpss_avx(ZEXT416(_DAT_146159bfc),auVar10,2);
  auVar16 = ZEXT464(auVar20._0_4_ &
                    (uint)(((fVar8 * fVar8 * auVar10._0_4_ * _DAT_145fc6f08 + _DAT_145fc6edc) *
                            fVar8 + fVar8) * auVar10._0_4_));
  uVar5 = (**(code **)(*param_1 + 0x18))(param_1);
  if (*(float *)((ulonglong)DAT_14759fd44 * 4 + 0x14759fd38) < auVar16._0_4_) {
    return;
  }
  lVar7 = (**(code **)(*plVar6 + 0x160))(plVar6);
  if ((lVar7 != 0) &&
     (lVar7 = (**(code **)(*plVar6 + 0x160))(plVar6), (*(byte *)(lVar7 + 0x46) & 1) != 0)) {
    return;
  }
  if ((*(byte *)(param_2 + 0xee) & 0x20) == 0) {
    auVar18._0_8_ = FUN_1409e8bc0(param_2,auVar16._0_8_);
    auVar18._8_56_ = extraout_var;
    auVar18 = ZEXT1664(auVar18._0_16_);
  }
  else {
    auVar18 = ZEXT464(_DAT_145fc6ed8);
  }
  auVar17 = ZEXT464(_DAT_145fc6ed8);
  fVar8 = (float)func_0x000144d9ff70(0x14759ff58,_DAT_145fc6ed8);
  if (auVar18._0_4_ <= fVar8) {
    fVar8 = (float)func_0x000144d9ff70(0x14759ffc8,_DAT_145fc6ed8);
    if ((auVar18._0_4_ <= fVar8) ||
       (plVar6 = (longlong *)FUN_144dd3030(param_2), plVar6 == (longlong *)0x0)) goto LAB_1401a28db;
    uVar9 = (**(code **)(*plVar6 + 0x160))(plVar6);
    lVar7 = FUN_144dd9c70(uVar9,0xf48be66a);
    if ((lVar7 == 0) ||
       (uVar2 = *(ushort *)(*(longlong *)(lVar7 + 0x48) + 0x1e),
       (char)((uVar2 & 4) >> 2) != '\0' || (uVar2 & 10) == 0)) goto LAB_1401a28db;
    auVar18 = ZEXT464((uint)(auVar18._0_4_ * *(float *)((ulonglong)DAT_14759ff3c * 4 + 0x14759ff30))
                     );
  }
  (**(code **)(*param_1 + 0x60))(param_1,param_2,1,auVar18._0_8_,0x3f333333);
  (**(code **)(*param_1 + 0x60))(param_1,param_2,2,auVar18._0_8_,0x3f333333);
LAB_1401a28db:
  auVar18 = ZEXT1664(CONCAT124(in_register_00001304,(float)uVar5));
  uVar3 = *(undefined4 *)(param_2 + 0x9c);
  lVar7 = func_0x000144dd30d0(uVar3);
  if (((lVar7 != 0) && (cVar4 = FUN_14025d730(lVar7), cVar4 != '\0')) &&
     (uVar9 = FUN_1424095c0(uVar3), 0.0 < (float)uVar9)) {
    (**(code **)(*param_1 + 0x60))(param_1,param_2,0,uVar9,0x3f800000);
  }
  auVar11._0_8_ = func_0x000144d9ff70(0x14759fd48,auVar18._0_8_);
  fVar8 = auVar17._0_4_;
  auVar11._8_56_ = extraout_var_00;
  auVar20._0_12_ = ZEXT812(0);
  auVar20._12_4_ = 0;
  auVar21 = ZEXT1664(auVar20);
  auVar19 = ZEXT1264(ZEXT812(0));
  if (auVar16._0_4_ <= (float)auVar11._0_8_) {
    auVar13._0_12_ = ZEXT812(0);
    auVar13._12_4_ = 0;
    auVar20 = vcmpss_avx(auVar11._0_16_,auVar13,4);
    auVar14._4_4_ = _DAT_145fc6ed8;
    auVar14._0_4_ = _DAT_145fc6ed8;
    auVar14._8_4_ = _DAT_145fc6ed8;
    auVar14._12_4_ = _DAT_145fc6ed8;
    auVar20 = vblendvps_avx(auVar14,ZEXT416((uint)(fVar8 - auVar16._0_4_ / (float)auVar11._0_8_)),
                            auVar20);
    auVar19 = ZEXT1664(auVar20);
    FUN_1451d9b00(param_1,param_2,3,auVar20._0_8_);
    FUN_1451d9b00(param_1,param_2,4,auVar19._0_8_);
    fVar8 = auVar17._0_4_;
    auVar20 = auVar21._0_16_;
  }
  auVar15._4_4_ = _DAT_145fc6ed8;
  auVar15._0_4_ = _DAT_145fc6ed8;
  auVar15._8_4_ = _DAT_145fc6ed8;
  auVar15._12_4_ = _DAT_145fc6ed8;
  fVar1 = *(float *)((ulonglong)DAT_14759fd44 * 4 + 0x14759fd38);
  auVar20 = vcmpss_avx(auVar20,ZEXT416((uint)fVar1),4);
  auVar20 = vblendvps_avx(auVar15,ZEXT416((uint)(fVar8 - auVar16._0_4_ / fVar1)),auVar20);
  FUN_1451d9b00(param_1,param_2,5,auVar20._0_8_);
  FUN_1451d9b00(param_1,param_2,10,auVar19._0_8_);
  fVar8 = (float)func_0x000144d9ff70(0x14759fd80,auVar18._0_8_);
  if (auVar16._0_4_ <= fVar8) {
    FUN_1451d9b00(param_1,param_2,6,auVar19._0_8_);
    FUN_1451d9b00(param_1,param_2,7,auVar19._0_8_);
    FUN_1451d9b00(param_1,param_2,8,auVar19._0_8_);
    FUN_1451d9b00(param_1,param_2,9,auVar19._0_8_);
  }
  return;
}

