// Recovered from game_scarlett_master.exe (GTA VI, Xbox Series X, PE32+ x64)
// Address: 14001d210  size: 239 bytes
// Name:    FUN_14001d210
// Subsystem: core
//
// Referenced strings (0 in this body, 0 including direct callees):
// Callees: FUN_144db6f00, FUN_144f64580
//
// Generated decompilation. Formatting follows MiscRef/GTAVSRC conventions;
// identifiers are recovered, not original. See ../../../README.md.

#include "gta6decomp/rage_types.h"


void FUN_14001d210(longlong param_1,float *param_2,float *param_3)

{
  undefined1 auVar1 [16];
  undefined1 auVar2 [16];
  undefined1 auVar3 [16];
  undefined1 auVar4 [16];
  undefined4 uVar5;
  undefined1 auVar6 [16];
  float fVar7;
  float fVar9;
  float fVar10;
  float fVar11;
  undefined1 auVar8 [16];
  undefined8 uStack_58;
  undefined4 uStack_50;
  float fStack_4c;
  float fStack_48;
  float fStack_44;
  float fStack_40;
  float fStack_3c;
  
  auVar6._0_12_ = ZEXT812(0);
  auVar6._12_4_ = 0;
  auVar6 = vcmpps_avx(auVar6,*(undefined1 (*) [16])(param_1 + 0x60),0);
  uVar5 = vmovmskps_avx(auVar6);
  if ((~(byte)uVar5 & 7) == 0) {
    FUN_144db6f00(*(undefined8 *)(param_1 + 0x20),&uStack_58,*(undefined4 *)(param_1 + 0x4c));
    *(undefined8 *)param_3 = uStack_58;
    *(ulonglong *)(param_3 + 2) = CONCAT44(fStack_4c,uStack_50);
    FUN_144db6f00(*(undefined8 *)(param_1 + 0x20),&uStack_58,*(undefined4 *)(param_1 + 0x48));
    *(undefined8 *)param_2 = uStack_58;
    *(ulonglong *)(param_2 + 2) = CONCAT44(fStack_4c,uStack_50);
  }
  else {
    FUN_144f64580(*(undefined8 *)(param_1 + 0x20),*(undefined4 *)(param_1 + 0x48),&uStack_58);
    auVar6 = *(undefined1 (*) [16])(param_1 + 0x60);
    auVar4._8_4_ = uStack_50;
    auVar4._0_8_ = uStack_58;
    auVar4._12_4_ = fStack_4c;
    auVar1 = vshufps_avx(auVar4,auVar4,0xc9);
    auVar2 = vshufps_avx(auVar6,auVar6,0xd2);
    auVar3 = vshufps_avx(auVar6,auVar6,0xc9);
    auVar4 = vshufps_avx(auVar4,auVar4,0xd2);
    fVar7 = -(auVar4._0_4_ * auVar3._0_4_) + auVar1._0_4_ * auVar2._0_4_;
    fVar9 = -(auVar4._4_4_ * auVar3._4_4_) + auVar1._4_4_ * auVar2._4_4_;
    fVar10 = -(auVar4._8_4_ * auVar3._8_4_) + auVar1._8_4_ * auVar2._8_4_;
    fVar11 = -(auVar4._12_4_ * auVar3._12_4_) + auVar1._12_4_ * auVar2._12_4_;
    auVar8._0_4_ = fVar7 + fVar7;
    auVar8._4_4_ = fVar9 + fVar9;
    auVar8._8_4_ = fVar10 + fVar10;
    auVar8._12_4_ = fVar11 + fVar11;
    auVar2 = vshufps_avx(auVar8,auVar8,0xd2);
    auVar3 = vshufps_avx(auVar8,auVar8,0xc9);
    *param_3 = auVar8._0_4_ * fStack_4c + fStack_48 + auVar6._0_4_ +
               -(auVar4._0_4_ * auVar3._0_4_) + auVar2._0_4_ * auVar1._0_4_;
    param_3[1] = auVar8._4_4_ * fStack_4c + fStack_44 + auVar6._4_4_ +
                 -(auVar4._4_4_ * auVar3._4_4_) + auVar2._4_4_ * auVar1._4_4_;
    param_3[2] = auVar8._8_4_ * fStack_4c + fStack_40 + auVar6._8_4_ +
                 -(auVar4._8_4_ * auVar3._8_4_) + auVar2._8_4_ * auVar1._8_4_;
    param_3[3] = auVar8._12_4_ * fStack_4c + fStack_3c + auVar6._12_4_ +
                 -(auVar4._12_4_ * auVar3._12_4_) + auVar2._12_4_ * auVar1._12_4_;
    *param_2 = fStack_48;
    param_2[1] = fStack_44;
    param_2[2] = fStack_40;
    param_2[3] = fStack_3c;
  }
  return;
}

