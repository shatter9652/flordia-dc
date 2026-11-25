// Recovered from game_scarlett_master.exe (GTA VI, Xbox Series X, PE32+ x64)
// Address: 1401137e0  size: 353 bytes
// Name:    FUN_1401137e0
// Subsystem: core
//
// Referenced strings (0 in this body, 0 including direct callees):
// Callees: FUN_144da5ae0
//
// Generated decompilation. Formatting follows MiscRef/GTAVSRC conventions;
// identifiers are recovered, not original. See ../../../README.md.

#include "gta6decomp/rage_types.h"


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1401137e0(longlong *param_1,int param_2,undefined1 (*param_3) [16])

{
  undefined8 *puVar1;
  float fVar2;
  undefined1 auVar3 [16];
  undefined1 auVar4 [16];
  undefined1 auVar5 [16];
  undefined1 auVar6 [16];
  longlong lVar7;
  undefined8 uVar8;
  undefined1 auVar9 [16];
  undefined1 auVar10 [16];
  undefined1 auVar11 [16];
  undefined1 auVar12 [16];
  undefined8 uStack_68;
  float fStack_60;
  float fStack_5c;
  undefined8 uStack_58;
  undefined8 uStack_50;
  
  if (param_2 == -1) {
    puVar1 = (undefined8 *)(*param_1 + (ulonglong)*(uint *)(param_1 + 0x3b) * 0x30);
    uStack_68 = *puVar1;
    uVar8 = puVar1[1];
    uStack_58 = puVar1[2];
    uStack_50 = puVar1[3];
  }
  else {
    lVar7 = (longlong)
            *(short *)((longlong)(int)*(uint *)(param_1 + 0x3b) * 0x60 + *param_1 + 0x30 +
                      (longlong)param_2 * 2);
    if (lVar7 == -1) {
      FUN_144da5ae0(param_1,&uStack_68,param_2);
      goto LAB_140113859;
    }
    puVar1 = (undefined8 *)
             (lVar7 * 0x30 + 0x30 + *param_1 + (ulonglong)*(uint *)(param_1 + 0x3b) * 0x30);
    uStack_68 = *puVar1;
    uVar8 = puVar1[1];
    uStack_58 = puVar1[2];
    uStack_50 = puVar1[3];
  }
  fStack_60 = (float)uVar8;
  fStack_5c = (float)((ulonglong)uVar8 >> 0x20);
LAB_140113859:
  auVar4._8_4_ = fStack_60;
  auVar4._0_8_ = uStack_68;
  auVar4._12_4_ = fStack_5c;
  auVar9._0_4_ = (float)uStack_68 + (float)uStack_68;
  fVar2 = (float)((ulonglong)uStack_68 >> 0x20);
  auVar9._4_4_ = fVar2 + fVar2;
  auVar9._8_4_ = fStack_60 + fStack_60;
  auVar9._12_4_ = fStack_5c + fStack_5c;
  auVar3 = vshufps_avx(auVar4,auVar4,0xc9);
  auVar4 = vshufps_avx(auVar4,auVar4,0xd2);
  auVar5 = vshufps_avx(auVar9,auVar9,0xc9);
  auVar6 = vshufps_avx(auVar9,auVar9,0xd2);
  auVar11._0_4_ = auVar4._0_4_ * auVar9._0_4_ + auVar5._0_4_ * fStack_5c;
  auVar11._4_4_ = auVar4._4_4_ * auVar9._4_4_ + auVar5._4_4_ * fStack_5c;
  auVar11._8_4_ = auVar4._8_4_ * auVar9._8_4_ + auVar5._8_4_ * fStack_5c;
  auVar11._12_4_ = auVar4._12_4_ * auVar9._12_4_ + auVar5._12_4_ * fStack_5c;
  auVar10._0_4_ = -(fStack_5c * auVar6._0_4_) + auVar3._0_4_ * auVar9._0_4_;
  auVar10._4_4_ = -(fStack_5c * auVar6._4_4_) + auVar3._4_4_ * auVar9._4_4_;
  auVar10._8_4_ = -(fStack_5c * auVar6._8_4_) + auVar3._8_4_ * auVar9._8_4_;
  auVar10._12_4_ = -(fStack_5c * auVar6._12_4_) + auVar3._12_4_ * auVar9._12_4_;
  auVar12._0_4_ = -(auVar6._0_4_ * auVar4._0_4_) - (auVar3._0_4_ * auVar5._0_4_ - _DAT_145fc6ed8);
  auVar12._4_4_ = -(auVar6._4_4_ * auVar4._4_4_) - (auVar3._4_4_ * auVar5._4_4_ - _DAT_145fc6ed8);
  auVar12._8_4_ = -(auVar6._8_4_ * auVar4._8_4_) - (auVar3._8_4_ * auVar5._8_4_ - _DAT_145fc6ed8);
  auVar12._12_4_ =
       -(auVar6._12_4_ * auVar4._12_4_) - (auVar3._12_4_ * auVar5._12_4_ - _DAT_145fc6ed8);
  auVar3 = vblendps_avx(auVar11,auVar10,2);
  auVar4 = vblendps_avx(auVar12,auVar11,2);
  auVar5 = vblendps_avx(auVar10,auVar12,2);
  auVar4 = vblendps_avx(auVar10,auVar4,3);
  auVar5 = vblendps_avx(auVar11,auVar5,3);
  auVar3 = vblendps_avx(auVar12,auVar3,3);
  *param_3 = auVar4;
  param_3[1] = auVar5;
  param_3[2] = auVar3;
  *(undefined8 *)param_3[3] = uStack_58;
  *(undefined8 *)(param_3[3] + 8) = uStack_50;
  return;
}

