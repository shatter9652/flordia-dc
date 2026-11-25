// Recovered from game_scarlett_master.exe (GTA VI, Xbox Series X, PE32+ x64)
// Address: 14012b6c0  size: 396 bytes
// Name:    FUN_14012b6c0
// Subsystem: core
//
// Referenced strings (0 in this body, 0 including direct callees):
// Callees: FUN_14012b8e0
//
// Generated decompilation. Formatting follows MiscRef/GTAVSRC conventions;
// identifiers are recovered, not original. See ../../../README.md.

#include "gta6decomp/rage_types.h"


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

bool FUN_14012b6c0(longlong param_1,undefined1 (*param_2) [16],undefined1 (*param_3) [16],
                  float *param_4,uint *param_5,undefined8 *param_6)

{
  float fVar1;
  float fVar2;
  float fVar3;
  float fVar4;
  float fVar5;
  float fVar6;
  float fVar7;
  float fVar8;
  int iVar9;
  undefined1 auVar10 [16];
  undefined1 auVar11 [16];
  undefined1 auVar12 [16];
  float fVar13;
  float fVar14;
  float fVar15;
  int iStack_a0;
  undefined1 auStack_9c [4];
  undefined1 auStack_98 [16];
  undefined1 auStack_88 [16];
  float fStack_78;
  float fStack_74;
  float fStack_70;
  float fStack_6c;
  float fStack_68;
  float fStack_64;
  float fStack_60;
  float fStack_5c;
  undefined1 auStack_58 [16];
  undefined1 auStack_48 [16];
  undefined1 auStack_38 [24];
  
  fStack_68 = *(float *)(param_1 + 0x2c);
  fStack_78 = *(float *)(param_1 + 0x14) - fStack_68;
  fStack_78 = fStack_78 + fStack_78;
  auVar10 = *param_2;
  auVar11 = vsubps_avx(*param_3,*(undefined1 (*) [16])(param_1 + 0x40));
  auStack_98 = vsubps_avx(auVar10,*(undefined1 (*) [16])(param_1 + 0x40));
  auStack_88._0_4_ = auVar11._0_4_ + auVar10._0_4_;
  auStack_88._4_4_ = auVar11._4_4_ + auVar10._4_4_;
  auStack_88._8_4_ = auVar11._8_4_ + auVar10._8_4_;
  auStack_88._12_4_ = auVar11._12_4_ + auVar10._12_4_;
  fStack_74 = fStack_78;
  fStack_70 = fStack_78;
  fStack_6c = fStack_78;
  fStack_64 = fStack_68;
  fStack_60 = fStack_68;
  fStack_5c = fStack_68;
  iVar9 = FUN_14012b8e0(auStack_98,auStack_88,&fStack_78,&fStack_68,param_4,auStack_58,auStack_38,
                        auStack_48,&iStack_a0,auStack_9c);
  if (iVar9 != 0) {
    auVar10._0_4_ = *param_4 * *(float *)*param_3 + *(float *)*param_2;
    auVar10._4_4_ = param_4[1] * *(float *)(*param_3 + 4) + *(float *)(*param_2 + 4);
    auVar10._8_4_ = param_4[2] * *(float *)(*param_3 + 8) + *(float *)(*param_2 + 8);
    auVar10._12_4_ = param_4[3] * *(float *)(*param_3 + 0xc) + *(float *)(*param_2 + 0xc);
    auVar10 = vsubps_avx(auVar10,*(undefined1 (*) [16])(param_1 + 0x40));
    if (iStack_a0 == 2) {
      auVar10 = vinsertps_avx(auVar10,auVar10,0x32);
    }
    else {
      auVar11 = vmovshdup_avx(auVar10);
      if (iStack_a0 == 1) {
        fVar1 = (auVar11._0_4_ - *(float *)(param_1 + 0x14)) + *(float *)(param_1 + 0x2c);
      }
      else {
        fVar1 = (auVar11._0_4_ - *(float *)(param_1 + 0x2c)) + *(float *)(param_1 + 0x14);
      }
      auVar10 = vinsertps_avx(auVar10,ZEXT416((uint)fVar1),0x10);
    }
    fVar1 = auVar10._0_4_;
    auVar11._0_4_ = fVar1 * fVar1;
    fVar3 = auVar10._4_4_;
    auVar11._4_4_ = fVar3 * fVar3;
    fVar5 = auVar10._8_4_;
    auVar11._8_4_ = fVar5 * fVar5;
    fVar7 = auVar10._12_4_;
    auVar11._12_4_ = fVar7 * fVar7;
    auVar12._0_12_ = ZEXT812(0);
    auVar12._12_4_ = 0;
    auVar10 = vblendps_avx(auVar11,auVar12,8);
    auVar10 = vhaddps_avx(auVar10,auVar10);
    auVar11 = vhaddps_avx(auVar10,auVar10);
    auVar10 = vrsqrtps_avx(auVar11);
    fVar2 = auVar10._0_4_;
    fVar4 = auVar10._4_4_;
    fVar6 = auVar10._8_4_;
    fVar8 = auVar10._12_4_;
    auVar10 = vcmpps_avx(auVar12,auVar11,1);
    fVar13 = fVar4 * fVar4 * auVar11._4_4_ * _DAT_145fc6f08 - _DAT_145fc6f08;
    fVar14 = fVar6 * fVar6 * auVar11._8_4_ * _DAT_145fc6f08 - _DAT_145fc6f08;
    fVar15 = fVar8 * fVar8 * auVar11._12_4_ * _DAT_145fc6f08 - _DAT_145fc6f08;
    *param_5 = auVar10._0_4_ &
               (uint)(((fVar2 * fVar2 * auVar11._0_4_ * _DAT_145fc6f08 - _DAT_145fc6f08) * fVar2 +
                      fVar2) * fVar1);
    param_5[1] = auVar10._4_4_ & (uint)((fVar13 * fVar4 + fVar4) * fVar3);
    param_5[2] = auVar10._8_4_ & (uint)((fVar14 * fVar6 + fVar6) * fVar5);
    param_5[3] = auVar10._12_4_ & (uint)((fVar15 * fVar8 + fVar8) * fVar7);
    *param_6 = CONCAT44(*(undefined4 *)(param_1 + 0x5c),*(undefined4 *)(param_1 + 0x4c));
  }
  return iVar9 != 0;
}

