// Recovered from game_scarlett_master.exe (GTA VI, Xbox Series X, PE32+ x64)
// Address: 140024850  size: 338 bytes
// Name:    FUN_140024850
// Subsystem: core
//
// Referenced strings (0 in this body, 0 including direct callees):
// Callees: FUN_144e46c00, FUN_144df39a0, FUN_1400249b0
//
// Generated decompilation. Formatting follows MiscRef/GTAVSRC conventions;
// identifiers are recovered, not original. See ../../../README.md.

#include "gta6decomp/rage_types.h"


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

bool FUN_140024850(undefined1 (*param_1) [16],undefined8 *param_2,undefined8 param_3,
                  undefined8 param_4,undefined4 param_5,undefined1 (*param_6) [16])

{
  undefined8 uVar1;
  undefined1 auVar2 [16];
  float fVar3;
  float fVar5;
  float fVar6;
  undefined1 auVar4 [16];
  float fVar7;
  undefined1 auVar8 [64];
  undefined8 auStack_d8 [2];
  undefined8 uStack_c8;
  undefined8 uStack_c0;
  undefined8 uStack_b8;
  undefined8 uStack_b0;
  undefined8 uStack_a8;
  undefined8 uStack_a0;
  undefined8 uStack_98;
  undefined8 uStack_90;
  undefined1 auStack_88 [16];
  undefined8 uStack_78;
  undefined8 uStack_70;
  
  uStack_98 = *(undefined8 *)*param_6;
  uStack_90 = *(undefined8 *)(*param_6 + 8);
  FUN_144df39a0(auStack_88,param_3);
  FUN_1400249b0(&uStack_78,&uStack_c8,param_4,auStack_88,param_5);
  uStack_a8 = uStack_78;
  uStack_a0 = uStack_70;
  FUN_144e46c00(auStack_d8,param_3);
  *(undefined8 *)*param_1 = auStack_d8[0];
  *(undefined8 *)(*param_1 + 8) = auStack_d8[1];
  auVar4 = vsubps_avx(*param_1,*param_6);
  auVar2 = vpsubw_avx(*param_1,*param_6);
  auVar2 = vblendps_avx(auVar4,auVar2,8);
  auVar4 = vpunpckhwd_avx(auVar2,auVar2);
  auVar4 = vpsrad_avx(auVar4,0x10);
  auVar4 = vcvtdq2ps_avx(auVar4);
  auVar4 = vshufpd_avx(auVar4,auVar4,3);
  fVar3 = auVar4._0_4_ * _DAT_146159c90 + auVar2._0_4_;
  fVar5 = auVar4._4_4_ * _UNK_146159c94 + auVar2._4_4_;
  fVar6 = auVar4._8_4_ * _UNK_146159c98 + auVar2._8_4_;
  fVar7 = auVar4._12_4_ * _UNK_146159c9c + auVar2._12_4_;
  auVar2._0_4_ = fVar3 * fVar3;
  auVar2._4_4_ = fVar5 * fVar5;
  auVar2._8_4_ = fVar6 * fVar6;
  auVar2._12_4_ = fVar7 * fVar7;
  auVar2 = vblendps_avx(auVar2,ZEXT816(0) << 0x20,8);
  auVar2 = vhaddps_avx(auVar2,auVar2);
  auVar2 = vhaddps_avx(auVar2,auVar2);
  auVar8 = ZEXT1664(auVar2);
  fVar3 = auVar2._0_4_;
  if (fVar3 <= _DAT_14617be10) {
    param_1 = (undefined1 (*) [16])auStack_d8;
    uStack_b8 = uStack_c8;
    uStack_b0 = uStack_c0;
    FUN_144e46c00(param_1,param_3);
    fVar3 = auVar8._0_4_;
  }
  fVar5 = _DAT_14617be10;
  uVar1 = *(undefined8 *)(*param_1 + 8);
  *param_2 = *(undefined8 *)*param_1;
  param_2[1] = uVar1;
  return fVar5 < fVar3;
}

