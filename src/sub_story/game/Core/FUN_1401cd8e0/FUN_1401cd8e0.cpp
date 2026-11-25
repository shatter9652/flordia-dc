// Recovered from game_scarlett_master.exe (GTA VI, Xbox Series X, PE32+ x64)
// Address: 1401cd8e0  size: 253 bytes
// Name:    FUN_1401cd8e0
// Subsystem: core
//
// Referenced strings (0 in this body, 0 including direct callees):
// Callees: FUN_1401cd820
//
// Generated decompilation. Formatting follows MiscRef/GTAVSRC conventions;
// identifiers are recovered, not original. See ../../../README.md.

#include "gta6decomp/rage_types.h"


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1401cd8e0(undefined8 param_1,undefined8 param_2,longlong param_3)

{
  uint uVar1;
  longlong lVar2;
  float fVar3;
  undefined1 in_ZMM0 [64];
  undefined1 extraout_var [56];
  undefined1 extraout_var_00 [56];
  float fVar4;
  undefined1 auVar5 [16];
  undefined1 auVar6 [16];
  undefined1 auVar7 [16];
  undefined1 auVar8 [64];
  undefined1 auVar9 [64];
  
  auVar6 = vpinsrw_avx(in_ZMM0._0_16_,(uint)*(ushort *)(param_3 + 0x7a),0);
  auVar8 = ZEXT1664(auVar6);
  auVar6 = vpinsrw_avx(in_ZMM0._0_16_,(uint)*(ushort *)(param_3 + 0x7c),0);
  auVar9 = ZEXT1664(auVar6);
  lVar2 = func_0x000145218f00(*(undefined8 *)(param_3 + 8),
                              *(undefined1 *)(*(longlong *)(param_3 + 0x40) + 0x3c));
  if (lVar2 != 0) {
    auVar9._0_8_ = func_0x000144ed97a0(auVar9._0_8_);
    auVar9._8_56_ = extraout_var;
    auVar9 = ZEXT1664(auVar9._0_16_);
    auVar8._0_8_ = func_0x000144ed97a0(auVar8._0_8_);
    auVar8._8_56_ = extraout_var_00;
    auVar8 = ZEXT1664(auVar8._0_16_);
    fVar3 = (float)FUN_1401cd820(param_3);
    auVar6 = vinsertps_avx(auVar9._0_16_,auVar8._0_16_,0x10);
    auVar7._4_4_ = _DAT_145fc6f00;
    auVar7._0_4_ = _DAT_145fc6f00;
    auVar7._8_4_ = _DAT_145fc6f00;
    auVar7._12_4_ = _DAT_145fc6f00;
    auVar5._0_4_ = fVar3 * auVar6._0_4_ + auVar6._0_4_;
    auVar5._4_4_ = fVar3 * auVar6._4_4_ + auVar6._4_4_;
    auVar5._8_4_ = fVar3 * auVar6._8_4_ + auVar6._8_4_;
    auVar5._12_4_ = fVar3 * auVar6._12_4_ + auVar6._12_4_;
    auVar6._0_4_ = (uint)auVar5._0_4_ ^ _DAT_145fc6f10;
    auVar6._4_4_ = (uint)auVar5._4_4_ ^ _DAT_145fc6f10;
    auVar6._8_4_ = (uint)auVar5._8_4_ ^ _DAT_145fc6f10;
    auVar6._12_4_ = (uint)auVar5._12_4_ ^ _DAT_145fc6f10;
    auVar6 = vmaxps_avx(auVar6,auVar5);
    auVar6 = vcmpps_avx(auVar6,auVar7,1);
    auVar6 = vshufps_avx(auVar6,auVar6,0x50);
    uVar1 = vmovmskpd_avx(auVar6);
    if ((uVar1 & 2) == 0) {
      auVar6 = vmovshdup_avx(auVar5);
      fVar4 = auVar6._0_4_;
    }
    else {
      fVar4 = auVar5._0_4_ * fVar3;
    }
    if ((uVar1 & 1) != 0) {
      auVar5._0_4_ = fVar4 * fVar3;
    }
    fVar3 = auVar5._0_4_;
    if ((*(byte *)(param_3 + 0x96) & 0x40) != 0) {
      fVar3 = fVar4;
      fVar4 = auVar5._0_4_;
    }
    *(uint *)(lVar2 + 0x80) = (uint)(*(float *)(lVar2 + 0x88) + fVar3) ^ _DAT_145fc6f10;
    *(float *)(lVar2 + 0x84) = fVar4 - *(float *)(lVar2 + 0x88);
  }
  return;
}

