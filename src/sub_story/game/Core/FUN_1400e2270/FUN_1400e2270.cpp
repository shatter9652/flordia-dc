// Recovered from game_scarlett_master.exe (GTA VI, Xbox Series X, PE32+ x64)
// Address: 1400e2270  size: 573 bytes
// Name:    FUN_1400e2270
// Subsystem: core
//
// Referenced strings (0 in this body, 0 including direct callees):
// Callees: FUN_145012860, FUN_1450128a0, FUN_14536b740, FUN_141342d00
//
// Generated decompilation. Formatting follows MiscRef/GTAVSRC conventions;
// identifiers are recovered, not original. See ../../../README.md.

#include "gta6decomp/rage_types.h"


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1400e2270(longlong param_1,longlong *param_2)

{
  longlong lVar1;
  undefined1 auVar2 [16];
  undefined1 auVar3 [16];
  char cVar4;
  undefined4 uVar5;
  int iVar6;
  float fVar7;
  undefined1 auVar8 [16];
  undefined1 auVar9 [16];
  float fVar10;
  undefined1 auVar11 [16];
  undefined1 auVar12 [16];
  longlong lStack_b0;
  undefined8 uStack_a8;
  float fStack_98;
  undefined1 auStack_94 [12];
  undefined *puStack_78;
  longlong *plStack_70;
  float fStack_5c;
  float fStack_48;
  float fStack_44;
  float fStack_40;
  float fStack_3c;
  
  cVar4 = func_0x000140019b90(param_2[3],0x3331f5d7);
  if (cVar4 != '\0') {
    fVar7 = (float)func_0x000140bda800(*(undefined4 *)(param_2[4] + 0x1c));
    uVar5 = FUN_1450128a0(*(undefined8 *)param_2[0x766],2);
    FUN_145012860(&puStack_78,param_2,uVar5,0);
    puStack_78 = &UNK_14669bc60;
    lVar1 = plStack_70[0x766];
    iVar6 = func_0x0001450141d0(&puStack_78);
    uVar5 = func_0x00014001bd40(*(undefined8 *)(*(longlong *)(lVar1 + 0x10) + 0x80),
                                *(undefined4 *)(&UNK_14669f8d8 + (longlong)iVar6 * 4));
    uVar5 = (**(code **)(*plStack_70 + 0xf0))(plStack_70,uVar5);
    lVar1 = param_2[3];
    func_0x000144e1ecd0(lVar1,&fStack_98,uVar5);
    func_0x000144e1ecd0(lVar1,&puStack_78,0xffffffff);
    auVar3._4_12_ = auStack_94;
    auVar3._0_4_ = fStack_98;
    auVar11._0_12_ = ZEXT812(0);
    auVar11._12_4_ = 0;
    auVar2._8_8_ = plStack_70;
    auVar2._0_8_ = puStack_78;
    auVar3 = vsubps_avx(auVar3,auVar2);
    auVar8._0_4_ = auVar3._0_4_ * auVar3._0_4_;
    auVar8._4_4_ = auVar3._4_4_ * auVar3._4_4_;
    auVar8._8_4_ = auVar3._8_4_ * auVar3._8_4_;
    auVar8._12_4_ = auVar3._12_4_ * auVar3._12_4_;
    auVar3 = vblendps_avx(auVar8,auVar11,8);
    auVar3 = vhaddps_avx(auVar3,auVar3);
    auVar2 = vhaddps_avx(auVar3,auVar3);
    auVar3 = vrsqrtss_avx(auVar2,auVar2);
    fVar10 = auVar3._0_4_;
    auVar3 = vcmpss_avx(ZEXT416(_DAT_146159bfc),auVar2,2);
    *(float *)(param_1 + 0x358) =
         (float)(auVar3._0_4_ &
                (uint)(((fVar10 * fVar10 * auVar2._0_4_ * _DAT_145fc6f08 + _DAT_145fc6edc) * fVar10
                       + fVar10) * auVar2._0_4_)) * fVar7;
  }
  (**(code **)(*param_2 + 0x60))(param_2,&lStack_b0,0x966068b6);
  if (lStack_b0 == 0) {
    (**(code **)(*param_2 + 0x88))(param_2,&puStack_78);
    fStack_98 = _DAT_146170770 * fStack_5c + _DAT_146170770;
  }
  else {
    FUN_141342d00(lStack_b0,uStack_a8,&fStack_98);
    FUN_14536b740(lStack_b0,uStack_a8,&puStack_78);
    auVar12._0_12_ = ZEXT812(0);
    auVar12._12_4_ = 0;
    auVar9._0_4_ = fStack_48 * fStack_48;
    auVar9._4_4_ = fStack_44 * fStack_44;
    auVar9._8_4_ = fStack_40 * fStack_40;
    auVar9._12_4_ = fStack_3c * fStack_3c;
    auVar3 = vblendps_avx(auVar9,auVar12,8);
    auVar3 = vhaddps_avx(auVar3,auVar3);
    auVar2 = vhaddps_avx(auVar3,auVar3);
    auVar3 = vrsqrtss_avx(auVar2,auVar2);
    fVar7 = auVar3._0_4_;
    auVar3 = vcmpss_avx(ZEXT416(_DAT_146159bfc),auVar2,2);
    fStack_98 = (float)(auVar3._0_4_ &
                       (uint)(((fVar7 * fVar7 * auVar2._0_4_ * _DAT_145fc6f08 + _DAT_145fc6edc) *
                               fVar7 + fVar7) * auVar2._0_4_)) + fStack_98;
  }
  *(float *)(param_1 + 0x35c) = fStack_98;
  return;
}

